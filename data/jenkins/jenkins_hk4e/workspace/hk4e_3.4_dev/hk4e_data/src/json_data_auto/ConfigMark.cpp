// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigMark.cpp

// Line 19: range 000000001193EF0E-000000001193F2DC
const char *__cdecl data::enumValToStr(data::MarkType e)
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
    case Default_14:
      result = "Default";
      break;
    case TransPoint:
      result = "TransPoint";
      break;
    case Quest_0:
      result = "Quest";
      break;
    case Custom:
      result = "Custom";
      break;
    case LocalAvatar_1:
      result = "LocalAvatar";
      break;
    case Companion:
      result = "Companion";
      break;
    case Monster_2:
      result = "Monster";
      break;
    case NearHint:
      result = "NearHint";
      break;
    case ScenePoint:
      result = "ScenePoint";
      break;
    case Task_0:
      result = "Task";
      break;
    case Boss_1:
      result = "Boss";
      break;
    case Talk:
      result = "Talk";
      break;
    case PacketAnchor:
      result = "PacketAnchor";
      break;
    case Widget:
      result = "Widget";
      break;
    case FlightChallenge:
      result = "FlightChallenge";
      break;
    case Hunting:
      result = "Hunting";
      break;
    case Routine:
      result = "Routine";
      break;
    case ActivitySearchRegion:
      result = "ActivitySearchRegion";
      break;
    case GalleryChallenge:
      result = "GalleryChallenge";
      break;
    case HomeworldDynamic:
      result = "HomeworldDynamic";
      break;
    case SignalPoint:
      result = "SignalPoint";
      break;
    case Vehicle_1:
      result = "Vehicle";
      break;
    case HomeworldFurnitureSuite:
      result = "HomeworldFurnitureSuite";
      break;
    case Activity_0:
      result = "Activity";
      break;
    case HomeworldFarmField:
      result = "HomeworldFarmField";
      break;
    case Offering:
      result = "Offering";
      break;
    case QuestAcception:
      result = "QuestAcception";
      break;
    case DeshretObeliskChest:
      result = "DeshretObeliskChest";
      break;
    case POIIndicatorMark:
      result = "POIIndicatorMark";
      break;
    case GcgNpc:
      result = "GcgNpc";
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumValToStr",
        83);
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
      result = (const char *)&unk_1A83C4E0;
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

// Line 89: range 000000001193F2DD-0000000011940B1F
bool __cdecl data::enumStrToVal(const std::string *s, data::MarkType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::MarkType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MarkType> >::pointer v10; // rax
  data::MarkType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::MarkType *ea; // [rsp+10h] [rbp-860h]
  char v16[2128]; // [rsp+20h] [rbp-850h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2080LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "37 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unkn"
                        "own> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> 5"
                        "60 8 6 it:128 592 8 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 1200 9 <unknown>";
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
  v4[536862734] = -234556924;
  v4[536862735] = -234556924;
  v4[536862736] = -234556924;
  v4[536862737] = 61956;
  v4[536862737] = -234881024;
  v4[536862738] = 62194;
  v4[536862738] = -234881024;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862781] = -202116109;
  v4[536862782] = -202116109;
  v4[536862783] = -202116109;
  v4[536862784] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 624) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 624, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 624),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      92);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 624),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MarkType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[8],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 752),
        (const char (*)[8])"Default",
        (data::MarkType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Default");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[11],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 792),
        (const char (*)[11])"TransPoint",
        (data::MarkType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "TransPoint");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[6],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 832),
        (const char (*)[6])"Quest",
        (data::MarkType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Quest");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[7],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 872),
        (const char (*)[7])"Custom",
        (data::MarkType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Custom");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[12],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 912),
        (const char (*)[12])"LocalAvatar",
        (data::MarkType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "LocalAvatar");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[10],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 952),
        (const char (*)[10])"Companion",
        (data::MarkType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "Companion");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[8],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 992),
        (const char (*)[8])"Monster",
        (data::MarkType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Monster");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[9],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1032),
        (const char (*)[9])"NearHint",
        (data::MarkType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "NearHint");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[11],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1072),
        (const char (*)[11])"ScenePoint",
        (data::MarkType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "ScenePoint");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[5],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1112),
        (const char (*)[5])"Task",
        (data::MarkType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "Task");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[5],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1152),
        (const char (*)[5])"Boss",
        (data::MarkType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "Boss");
      *(_DWORD *)(v2 + 256) = 12;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[5],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1192),
        (const char (*)[5])"Talk",
        (data::MarkType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "Talk");
      *(_DWORD *)(v2 + 272) = 13;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[13],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1232),
        (const char (*)[13])"PacketAnchor",
        (data::MarkType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "PacketAnchor");
      *(_DWORD *)(v2 + 288) = 14;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[7],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1272),
        (const char (*)[7])"Widget",
        (data::MarkType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "Widget");
      *(_DWORD *)(v2 + 304) = 15;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[16],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1312),
        (const char (*)[16])"FlightChallenge",
        (data::MarkType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "FlightChallenge");
      *(_DWORD *)(v2 + 320) = 16;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[8],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1352),
        (const char (*)[8])"Hunting",
        (data::MarkType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "Hunting");
      *(_DWORD *)(v2 + 336) = 17;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[8],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1392),
        (const char (*)[8])"Routine",
        (data::MarkType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "Routine");
      *(_DWORD *)(v2 + 352) = 18;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[21],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1432),
        (const char (*)[21])"ActivitySearchRegion",
        (data::MarkType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "ActivitySearchRegion");
      *(_DWORD *)(v2 + 368) = 19;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[17],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1472),
        (const char (*)[17])"GalleryChallenge",
        (data::MarkType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "GalleryChallenge");
      *(_DWORD *)(v2 + 384) = 20;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[17],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1512),
        (const char (*)[17])"HomeworldDynamic",
        (data::MarkType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "HomeworldDynamic");
      *(_DWORD *)(v2 + 400) = 21;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[12],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1552),
        (const char (*)[12])"SignalPoint",
        (data::MarkType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "SignalPoint");
      *(_DWORD *)(v2 + 416) = 22;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[8],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1592),
        (const char (*)[8])"Vehicle",
        (data::MarkType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "Vehicle");
      *(_DWORD *)(v2 + 432) = 23;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[24],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1632),
        (const char (*)[24])"HomeworldFurnitureSuite",
        (data::MarkType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "HomeworldFurnitureSuite");
      *(_DWORD *)(v2 + 448) = 24;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[9],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1672),
        (const char (*)[9])"Activity",
        (data::MarkType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "Activity");
      *(_DWORD *)(v2 + 464) = 25;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[19],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1712),
        (const char (*)[19])"HomeworldFarmField",
        (data::MarkType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "HomeworldFarmField");
      *(_DWORD *)(v2 + 480) = 26;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[9],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1752),
        (const char (*)[9])"Offering",
        (data::MarkType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "Offering");
      *(_DWORD *)(v2 + 496) = 27;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[15],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1792),
        (const char (*)[15])"QuestAcception",
        (data::MarkType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "QuestAcception");
      *(_DWORD *)(v2 + 512) = 28;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[20],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1832),
        (const char (*)[20])"DeshretObeliskChest",
        (data::MarkType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "DeshretObeliskChest");
      *(_DWORD *)(v2 + 528) = 29;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[17],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1872),
        (const char (*)[17])"POIIndicatorMark",
        (data::MarkType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "POIIndicatorMark");
      *(_DWORD *)(v2 + 544) = 30;
      std::pair<std::string const,data::MarkType>::pair<char const(&)[7],data::MarkType,true>(
        (std::pair<const std::string,data::MarkType> *const)(v2 + 1912),
        (const char (*)[7])"GcgNpc",
        (data::MarkType *)(v2 + 544));
      std::allocator<std::pair<std::string const,data::MarkType>>::allocator((std::allocator<std::pair<const std::string,data::MarkType> > *const)(v2 + 64));
      std::map<std::string,data::MarkType>::map(
        &data::enumStrToVal(std::string const&,data::MarkType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MarkType> >)__PAIR128__(30LL, v2 + 752),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::MarkType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MarkType>::~map,
        &data::enumStrToVal(std::string const&,data::MarkType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MarkType>>::~allocator((std::allocator<std::pair<const std::string,data::MarkType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MarkType> *)(v2 + 1952);
            i != (std::pair<const std::string,data::MarkType> *)(v2 + 752);
            std::pair<std::string const,data::MarkType>::~pair(i) )
      {
        --i;
      }
      e = (data::MarkType *)1200;
      __asan_poison_stack_memory(v2 + 752, 1200LL);
      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 560, e);
    *(std::map<std::string,data::MarkType>::iterator *)(v2 + 560) = std::map<std::string,data::MarkType>::find(
                                                                      &data::enumStrToVal(std::string const&,data::MarkType &)::m,
                                                                      s);
    *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 592, s);
    *(std::map<std::string,data::MarkType>::iterator *)(v2 + 592) = std::map<std::string,data::MarkType>::end(&data::enumStrToVal(std::string const&,data::MarkType &)::m);
    v7 = (char *)(v2 + 592);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkType> >::_Self *)(v2 + 560),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkType> >::_Self *)(v2 + 592));
    *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 688, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 688),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        131);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 688),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::MarkType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkType> > *const)(v2 + 560));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80FC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 260) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2080LL, v16);
  }
  return v13;
};

// Line 139: range 0000000011940B20-0000000011940C9A
const char *__cdecl data::getDescription(data::MarkType e)
{
  const char *result; // rax

  switch ( e )
  {
    case Default_14:
      result = (const char *)&unk_1A83C4E0;
      break;
    case TransPoint:
      result = (const char *)&unk_1A83C4E0;
      break;
    case Quest_0:
      result = (const char *)&unk_1A83C4E0;
      break;
    case Custom:
      result = (const char *)&unk_1A83C4E0;
      break;
    case LocalAvatar_1:
      result = (const char *)&unk_1A83C4E0;
      break;
    case Companion:
      result = (const char *)&unk_1A83C4E0;
      break;
    case Monster_2:
      result = (const char *)&unk_1A83DC60;
      break;
    case NearHint:
      result = (const char *)&unk_1A83DCA0;
      break;
    case ScenePoint:
      result = (const char *)&unk_1A83DD00;
      break;
    case Task_0:
      result = (const char *)&unk_1A83DD60;
      break;
    case Boss_1:
      result = "Boss";
      break;
    case Talk:
      result = (const char *)&unk_1A83DDA0;
      break;
    case PacketAnchor:
      result = (const char *)&unk_1A83DDE0;
      break;
    case Widget:
      result = (const char *)&unk_1A83DE20;
      break;
    case FlightChallenge:
      result = (const char *)&unk_1A83DE60;
      break;
    case Hunting:
      result = (const char *)&unk_1A83DEA0;
      break;
    case Routine:
      result = (const char *)&unk_1A83DEE0;
      break;
    case ActivitySearchRegion:
      result = (const char *)&unk_1A83DF20;
      break;
    case GalleryChallenge:
      result = (const char *)&unk_1A83DF60;
      break;
    case HomeworldDynamic:
      result = (const char *)&unk_1A83DFA0;
      break;
    case SignalPoint:
      result = (const char *)&unk_1A83E000;
      break;
    case Vehicle_1:
      result = (const char *)&unk_1A83E040;
      break;
    case HomeworldFurnitureSuite:
      result = (const char *)&unk_1A83E080;
      break;
    case Activity_0:
      result = (const char *)&unk_1A83E0C0;
      break;
    case HomeworldFarmField:
      result = (const char *)&unk_1A83E160;
      break;
    case Offering:
      result = (const char *)&unk_1A83E1A0;
      break;
    case QuestAcception:
      result = (const char *)&unk_1A83E1E0;
      break;
    case DeshretObeliskChest:
      result = (const char *)&unk_1A83E220;
      break;
    case POIIndicatorMark:
      result = (const char *)&unk_1A83E260;
      break;
    case GcgNpc:
      result = (const char *)&unk_1A83E2A0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 208: range 0000000011940C9B-0000000011941BAD
const char *__cdecl data::enumValToStr(data::MarkIconType e)
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
  if ( e == MarkLanV3BoatGameNPC )
  {
    result = "MarkLanV3BoatGameNPC";
    goto LABEL_256;
  }
  if ( e > MarkLanV3BoatGameNPC )
    goto LABEL_251;
  if ( e == MarkDuelHeart )
  {
    result = "MarkDuelHeart";
    goto LABEL_256;
  }
  if ( e > MarkBrickBreakerDungeon )
    goto LABEL_251;
  if ( e >= MarkGcgNpcNormal )
  {
    switch ( e )
    {
      case MarkGcgNpcNormal:
        result = "MarkGcgNpcNormal";
        break;
      case MarkGcgNpcFinish:
        result = "MarkGcgNpcFinish";
        break;
      case MarkGcgNpcLock:
        result = "MarkGcgNpcLock";
        break;
      case MarkGcgWeek:
        result = "MarkGcgWeek";
        break;
      case MarkGcgCat:
        result = "MarkGcgCat";
        break;
      case MarkGcgBoard:
        result = "MarkGcgBoard";
        break;
      case MarkGcgNpcClear:
        result = "MarkGcgNpcClear";
        break;
      case MarkBrickBreakerWorld:
        result = "MarkBrickBreakerWorld";
        break;
      case MarkBrickBreakerDungeon:
        result = "MarkBrickBreakerDungeon";
        break;
      default:
        goto LABEL_251;
    }
  }
  else
  {
    if ( e > MarkFungusFighterPlotDungeonEntry )
      goto LABEL_251;
    if ( e >= MarkReputation_Sumeru )
    {
      switch ( e )
      {
        case MarkReputation_Sumeru:
          result = "MarkReputation_Sumeru";
          break;
        case MarkBlacksmith_Sumeru:
          result = "MarkBlacksmith_Sumeru";
          break;
        case MarkSouvenir_Sumeru:
          result = "MarkSouvenir_Sumeru";
          break;
        case MarkRestaurant_Sumeru:
          result = "MarkRestaurant_Sumeru";
          break;
        case MarkGravenInnocenceCarveNPC:
          result = "MarkGravenInnocenceCarveNPC";
          break;
        case MarkTreasureHuntExploration:
          result = "MarkTreasureHuntExploration";
          break;
        case MarkTreasureHuntExcavation:
          result = "MarkTreasureHuntExcavation";
          break;
        case MarkInstableSprayDungeonEntry:
          result = "MarkInstableSprayDungeonEntry";
          break;
        case MarkMuqadasPotionDungeonEntry:
          result = "MarkMuqadasPotionDungeonEntry";
          break;
        case MarkDeshretObeliskChest:
          result = "MarkDeshretObeliskChest";
          break;
        case MarkVanasaraTree:
          result = "MarkVanasaraTree";
          break;
        case MarkLibrary_Sumeru:
          result = "MarkLibrary_Sumeru";
          break;
        case MarkCafe_Sumeru:
          result = "MarkCafe_Sumeru";
          break;
        case MarkTemple_Sumeru:
          result = "MarkTemple_Sumeru";
          break;
        case MarkTalkMainWQ:
          result = "MarkTalkMainWQ";
          break;
        case MarkFish_Sumeru:
          result = "MarkFish_Sumeru";
          break;
        case MarkWindFieldEntry:
          result = "MarkWindFieldEntry";
          break;
        case MarkVintageHuntingStageOneNPC:
          result = "MarkVintageHuntingStageOneNPC";
          break;
        case MarkVintageHuntingStageTwoNPC:
          result = "MarkVintageHuntingStageTwoNPC";
          break;
        case MarkVintageHuntingStageThreeNPC:
          result = "MarkVintageHuntingStageThreeNPC";
          break;
        case MarkVintageMarketDeliverNPC:
          result = "MarkVintageMarketDeliverNPC";
          break;
        case MarkVintageMarketBarginNPC:
          result = "MarkVintageMarketBarginNPC";
          break;
        case MarkVintageMarketStore:
          result = "MarkVintageMarketStore";
          break;
        case MarkPOIIndicator:
          result = "MarkPOIIndicator";
          break;
        case MarkFungusFighterCultivateNPC:
          result = "MarkFungusFighterCultivateNPC";
          break;
        case MarkEffigyV2:
          result = "MarkEffigyV2";
          break;
        case MarkFungusFighterTrainingDungeonEntry:
          result = "MarkFungusFighterTrainingDungeonEntry";
          break;
        case MarkFungusFighterPlotDungeonEntry:
          result = "MarkFungusFighterPlotDungeonEntry";
          break;
        default:
          goto LABEL_251;
      }
      goto LABEL_256;
    }
    if ( e > MarkArenaChallengeV3 )
    {
LABEL_251:
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumValToStr",
        656);
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
      result = (const char *)&unk_1A83C4E0;
      goto LABEL_256;
    }
    if ( e >= MarkIslandPartyNPC )
    {
      switch ( e )
      {
        case MarkIslandPartyNPC:
          result = "MarkIslandPartyNPC";
          break;
        case MarkSummerTimeV2WanyeDungeonEntry:
          result = "MarkSummerTimeV2WanyeDungeonEntry";
          break;
        case MarkSummerTimeV2XinyanDungeonEntry:
          result = "MarkSummerTimeV2XinyanDungeonEntry";
          break;
        case MarkSummerTimeV2FeixieerDungeonEntry:
          result = "MarkSummerTimeV2FeixieerDungeonEntry";
          break;
        case MarkSummerTimeV2MonaDungeonEntry:
          result = "MarkSummerTimeV2MonaDungeonEntry";
          break;
        case MarkSummerTimeV2BoatSummonPoint:
          result = "MarkSummerTimeV2BoatSummonPoint";
          break;
        case MarkGearGameEntry:
          result = "MarkGearGameEntry";
          break;
        case MarkEchoShellV2:
          result = "MarkEchoShellV2";
          break;
        case MarkArenaChallengeV3:
          result = "MarkArenaChallengeV3";
          break;
        default:
          goto LABEL_251;
      }
    }
    else
    {
      if ( e == MarkCocoonSpace )
      {
        result = "MarkCocoonSpace";
        goto LABEL_256;
      }
      if ( e > MarkCocoonSpace )
        goto LABEL_251;
      switch ( e )
      {
        case MarkRogueDiary:
          result = "MarkRogueDiary";
          goto LABEL_256;
        case MarkActivityGachaNPC:
          result = "MarkActivityGachaNPC";
          goto LABEL_256;
        case MarkMusicGameV3NPC:
          result = "MarkMusicGameV3NPC";
          goto LABEL_256;
      }
      if ( e > MarkCustomLevel )
      {
        if ( e > MarkIrodoriChessNPC || e < MarkLuminanceStoneNPC )
          goto LABEL_251;
        switch ( e )
        {
          case MarkLuminanceStoneNPC:
            result = "MarkLuminanceStoneNPC";
            break;
          case MarkCrystalLink:
            result = "MarkCrystalLink";
            break;
          case MarkQuestAcception:
            result = "MarkQuestAcception";
            break;
          case MarkIrodoriFlowerNPC:
            result = "MarkIrodoriFlowerNPC";
            break;
          case MarkIrodoriPhotoNPC:
            result = "MarkIrodoriPhotoNPC";
            break;
          case MarkIrodoriMasterNPC:
            result = "MarkIrodoriMasterNPC";
            break;
          case MarkIrodoriChessNPC:
            result = "MarkIrodoriChessNPC";
            break;
          default:
            goto LABEL_251;
        }
      }
      else
      {
        if ( e < Default_13 )
          goto LABEL_251;
        switch ( e )
        {
          case Default_13:
            result = "Default";
            break;
          case MarkChurch:
            result = "MarkChurch";
            break;
          case MarkKnights:
            result = "MarkKnights";
            break;
          case MarkPub:
            result = "MarkPub";
            break;
          case MarkSouvenir:
            result = "MarkSouvenir";
            break;
          case MarkRestaurant:
            result = "MarkRestaurant";
            break;
          case MarkGeneralCargo:
            result = "MarkGeneralCargo";
            break;
          case MarkBlacksmith:
            result = "MarkBlacksmith";
            break;
          case MarkTeamArranger:
            result = "MarkTeamArranger";
            break;
          case MarkDailyTask:
            result = "MarkDailyTask";
            break;
          case MarkRandomTask:
            result = "MarkRandomTask";
            break;
          case MarkAdventurers:
            result = "MarkAdventurers";
            break;
          case MarkAlchemy:
            result = "MarkAlchemy";
            break;
          case MarkSeaLampGiving:
            result = "MarkSeaLampGiving";
            break;
          case MarkInvestigationMonster:
            result = "MarkInvestigationMonster";
            break;
          case MarkBlacksmith_liyue:
            result = "MarkBlacksmith_liyue";
            break;
          case MarkSouvenir_liyue:
            result = "MarkSouvenir_liyue";
            break;
          case MarkRestaurant_liyue:
            result = "MarkRestaurant_liyue";
            break;
          case MarkReputation:
            result = "MarkReputation";
            break;
          case MarkReputation_liyue:
            result = "MarkReputation_liyue";
            break;
          case MarkReputation_Inazuma:
            result = "MarkReputation_Inazuma";
            break;
          case MarkBlacksmith_Inazuma:
            result = "MarkBlacksmith_Inazuma";
            break;
          case MarkSouvenir_Inazuma:
            result = "MarkSouvenir_Inazuma";
            break;
          case MarkRestaurant_Inazuma:
            result = "MarkRestaurant_Inazuma";
            break;
          case MarkGroupLink:
            result = "MarkGroupLink";
            break;
          case MarkFish:
            result = "MarkFish";
            break;
          case MarkFish_liyue:
            result = "MarkFish_liyue";
            break;
          case MarkFish_Inazuma:
            result = "MarkFish_Inazuma";
            break;
          case MarkGroupLink_Area:
            result = "MarkGroupLink_Area";
            break;
          case MarkGcgPub:
            result = "MarkGcgPub";
            break;
          case MarkTransPoint:
            result = "MarkTransPoint";
            break;
          case MarkTransPointLocked:
            result = "MarkTransPointLocked";
            break;
          case MarkPortal:
            result = "MarkPortal";
            break;
          case MarkDungeonEntry:
            result = "MarkDungeonEntry";
            break;
          case MarkDungeonEntryLocked:
            result = "MarkDungeonEntryLocked";
            break;
          case MarkWeeklyDungeonEntry:
            result = "MarkWeeklyDungeonEntry";
            break;
          case MarkWeeklyDungeonEntryLocked:
            result = "MarkWeeklyDungeonEntryLocked";
            break;
          case MarkDailyDungeonEntry:
            result = "MarkDailyDungeonEntry";
            break;
          case MarkDailyDungeonEntryLocked:
            result = "MarkDailyDungeonEntryLocked";
            break;
          case MarkTowerDungeonEntry:
            result = "MarkTowerDungeonEntry";
            break;
          case MarkTowerDungeonEntryLocked:
            result = "MarkTowerDungeonEntryLocked";
            break;
          case MarkDailyDungeonEntryToBeExplored:
            result = "MarkDailyDungeonEntryToBeExplored";
            break;
          case MarkTowerDungeonEntryToBeExplored:
            result = "MarkTowerDungeonEntryToBeExplored";
            break;
          case MarkEffigyDungeonEntry:
            result = "MarkEffigyDungeonEntry";
            break;
          case MarkEffigyDungeonEntryLocked:
            result = "MarkEffigyDungeonEntryLocked";
            break;
          case MarkFleurFairDungeonEntry:
            result = "MarkFleurFairDungeonEntry";
            break;
          case MarkBlitzRushDungeonEntry:
            result = "MarkBlitzRushDungeonEntry";
            break;
          case MarkHachiDungeonEntry:
            result = "MarkHachiDungeonEntry";
            break;
          case MarkMiniEldritchDungeonEntry:
            result = "MarkMiniEldritchDungeonEntry";
            break;
          case MarkGoddessLocked:
            result = "MarkGoddessLocked";
            break;
          case MarkGoddessUnlocked:
            result = "MarkGoddessUnlocked";
            break;
          case MarkPacketAnchor:
            result = "MarkPacketAnchor";
            break;
          case MarkQuest:
            result = "MarkQuest";
            break;
          case MarkDangerousQuest:
            result = "MarkDangerousQuest";
            break;
          case MarkQuestArea:
            result = "MarkQuestArea";
            break;
          case MarkDangerousQuestArea:
            result = "MarkDangerousQuestArea";
            break;
          case MarkCustom:
            result = "MarkCustom";
            break;
          case MarkCustomBoss:
            result = "MarkCustomBoss";
            break;
          case MarkCustomBox:
            result = "MarkCustomBox";
            break;
          case MarkCustomCollect:
            result = "MarkCustomCollect";
            break;
          case MarkCustomCooking:
            result = "MarkCustomCooking";
            break;
          case MarkCustomMainTask:
            result = "MarkCustomMainTask";
            break;
          case MarkCustomMonster:
            result = "MarkCustomMonster";
            break;
          case MarkCustomSlime:
            result = "MarkCustomSlime";
            break;
          case MarkCustomTrap:
            result = "MarkCustomTrap";
            break;
          case MarkCustomWind:
            result = "MarkCustomWind";
            break;
          case MarkCustomFish:
            result = "MarkCustomFish";
            break;
          case MarkLocalAvatar:
            result = "MarkLocalAvatar";
            break;
          case MarkPlayer1:
            result = "MarkPlayer1";
            break;
          case MarkPlayer2:
            result = "MarkPlayer2";
            break;
          case MarkPlayer3:
            result = "MarkPlayer3";
            break;
          case MarkPlayer4:
            result = "MarkPlayer4";
            break;
          case MarkBoredMonster:
            result = "MarkBoredMonster";
            break;
          case MarkRadarHint:
            result = "MarkRadarHint";
            break;
          case MarkActivity:
            result = "MarkActivity";
            break;
          case MarkTalk:
            result = "MarkTalk";
            break;
          case MarkMiscsMarvs:
            result = "MarkMiscsMarvs";
            break;
          case MarkActivityAsterLittle:
            result = "MarkActivityAsterLittle";
            break;
          case MarkActivityAsterMiddle:
            result = "MarkActivityAsterMiddle";
            break;
          case MarkRadarHintArea:
            result = "MarkRadarHintArea";
            break;
          case MarkActivityAsterlarge:
            result = "MarkActivityAsterlarge";
            break;
          case MarkHuntingArea:
            result = "MarkHuntingArea";
            break;
          case MarkActivityAsterMiddleNPC:
            result = "MarkActivityAsterMiddleNPC";
            break;
          case MarkWidgetSeverDetectorArea:
            result = "MarkWidgetSeverDetectorArea";
            break;
          case MarkActivityFlightChallengePoint:
            result = "MarkActivityFlightChallengePoint";
            break;
          case MarkElderTree:
            result = "MarkElderTree";
            break;
          case MarkElderTreeEvent:
            result = "MarkElderTreeEvent";
            break;
          case MarkWidgetTreasureMapArea:
            result = "MarkWidgetTreasureMapArea";
            break;
          case MarkActivityTreasureMapNPC:
            result = "MarkActivityTreasureMapNPC";
            break;
          case MarkActivityDragonSpineBoss:
            result = "MarkActivityDragonSpineBoss";
            break;
          case MarkActivityBlessing:
            result = "MarkActivityBlessing";
            break;
          case MarkActivityMonsterBannerDrakePrimoRock:
            result = "MarkActivityMonsterBannerDrakePrimoRock";
            break;
          case MarkActivityExpeditionChallengeArea:
            result = "MarkActivityExpeditionChallengeArea";
            break;
          case MarkMechanicisNPC:
            result = "MarkMechanicisNPC";
            break;
          case MarkActivityWaterSpriteExploreArea:
            result = "MarkActivityWaterSpriteExploreArea";
            break;
          case MarkActivityArenaChallenge:
            result = "MarkActivityArenaChallenge";
            break;
          case MarkActivityFleurFairFall:
            result = "MarkActivityFleurFairFall";
            break;
          case MarkActivityFleurFairBalloon:
            result = "MarkActivityFleurFairBalloon";
            break;
          case MarkActivityWaterSpriteBoss:
            result = "MarkActivityWaterSpriteBoss";
            break;
          case MarkActivitySummerTimeRace:
            result = "MarkActivitySummerTimeRace";
            break;
          case MarkActivityRegionSearch:
            result = "MarkActivityRegionSearch";
            break;
          case MarkGalleryChallenge:
            result = "MarkGalleryChallenge";
            break;
          case MarkActivityFleurFairNPC:
            result = "MarkActivityFleurFairNPC";
            break;
          case MarkChannellerSlabCampLow:
            result = "MarkChannellerSlabCampLow";
            break;
          case MarkChannellerSlabCampMiddle:
            result = "MarkChannellerSlabCampMiddle";
            break;
          case MarkChannellerSlabCampHigh:
            result = "MarkChannellerSlabCampHigh";
            break;
          case MarkChannellerSlabOneOffDungeon:
            result = "MarkChannellerSlabOneOffDungeon";
            break;
          case MarkChannellerSlabLoopDungeon:
            result = "MarkChannellerSlabLoopDungeon";
            break;
          case MarkChannellerSlabNPC:
            result = "MarkChannellerSlabNPC";
            break;
          case MarkActivityMiniTomoHiliWeiArea:
            result = "MarkActivityMiniTomoHiliWeiArea";
            break;
          case MarkActivityHideAndSeekNPC:
            result = "MarkActivityHideAndSeekNPC";
            break;
          case MarkHomeworldDjinn:
            result = "MarkHomeworldDjinn";
            break;
          case MarkHomeworldDjinnWeekend:
            result = "MarkHomeworldDjinnWeekend";
            break;
          case MarkHomeworldMainHouse:
            result = "MarkHomeworldMainHouse";
            break;
          case MarkHideAndSeekHunter:
            result = "MarkHideAndSeekHunter";
            break;
          case MarkActivityBuoyantCombatPoint:
            result = "MarkActivityBuoyantCombatPoint";
            break;
          case MarkActivityBounceConjuring:
            result = "MarkActivityBounceConjuring";
            break;
          case MarkHomeworldNpc:
            result = "MarkHomeworldNpc";
            break;
          case MarkSummerIsleSignalPoint:
            result = "MarkSummerIsleSignalPoint";
            break;
          case MarkVehicleSummonPoint:
            result = "MarkVehicleSummonPoint";
            break;
          case MarkVehicleSummonPointLocked:
            result = "MarkVehicleSummonPointLocked";
            break;
          case MarkBounceConjuringNPC:
            result = "MarkBounceConjuringNPC";
            break;
          case MarkVehicleSkiff:
            result = "MarkVehicleSkiff";
            break;
          case MarkHomeworldFurnitureSuite:
            result = "MarkHomeworldFurnitureSuite";
            break;
          case MarkHomeworldTransPoint:
            result = "MarkHomeworldTransPoint";
            break;
          case MarkHomeworldSafePoint:
            result = "MarkHomeworldSafePoint";
            break;
          case MarkHomeworldFarmField1:
            result = "MarkHomeworldFarmField1";
            break;
          case MarkHomeworldFarmField2:
            result = "MarkHomeworldFarmField2";
            break;
          case MarkHomeworldFarmField3:
            result = "MarkHomeworldFarmField3";
            break;
          case MarkActivityTreasureMapChallenge:
            result = "MarkActivityTreasureMapChallenge";
            break;
          case MarkActivityBlitzRushParkour:
            result = "MarkActivityBlitzRushParkour";
            break;
          case MarkActivityPerpetualNPC:
            result = "MarkActivityPerpetualNPC";
            break;
          case MarkOraionokamiTree:
            result = "MarkOraionokamiTree";
            break;
          case MarkSumoDungeon:
            result = "MarkSumoDungeon";
            break;
          case MarkMoonfinTrialChallenge:
            result = "MarkMoonfinTrialChallenge";
            break;
          case MarkMoonfinTrialFinal:
            result = "MarkMoonfinTrialFinal";
            break;
          case MarkLunaRiteExploreArea:
            result = "MarkLunaRiteExploreArea";
            break;
          case MarkLunaRiteNPC:
            result = "MarkLunaRiteNPC";
            break;
          case MarkLunaRiteCrystal:
            result = "MarkLunaRiteCrystal";
            break;
          case MarkLunaRiteChest:
            result = "MarkLunaRiteChest";
            break;
          case MarkRoguelike:
            result = "MarkRoguelike";
            break;
          case MarkBugyowu:
            result = "MarkBugyowu";
            break;
          case MarkChashitsu:
            result = "MarkChashitsu";
            break;
          case MarkHomeworldPaimon:
            result = "MarkHomeworldPaimon";
            break;
          case MarkMusicGameNPC:
            result = "MarkMusicGameNPC";
            break;
          case MarkGrowFlowersNPC:
            result = "MarkGrowFlowersNPC";
            break;
          case MarkHachiStealthChallenge:
            result = "MarkHachiStealthChallenge";
            break;
          case MarkHachiBattleChallenge:
            result = "MarkHachiBattleChallenge";
            break;
          case MarkWinterCampSnowman:
            result = "MarkWinterCampSnowman";
            break;
          case MarkActivityWinterCampBoss:
            result = "MarkActivityWinterCampBoss";
            break;
          case MarkAnimalCaptureShop:
            result = "MarkAnimalCaptureShop";
            break;
          case MarkAlcorTransmit:
            result = "MarkAlcorTransmit";
            break;
          case MarkQunyugeTransmit:
            result = "MarkQunyugeTransmit";
            break;
          case MarkAshanpoNPC:
            result = "MarkAshanpoNPC";
            break;
          case MarkPotionDungeonEntry:
            result = "MarkPotionDungeonEntry";
            break;
          case MarkProjectionGameEntry:
            result = "MarkProjectionGameEntry";
            break;
          case MarkLanternRiteShipSummonPoint:
            result = "MarkLanternRiteShipSummonPoint";
            break;
          case MarkLanternRiteShipSummonPointLocked:
            result = "MarkLanternRiteShipSummonPointLocked";
            break;
          case MarkMichiaeOffering:
            result = "MarkMichiaeOffering";
            break;
          case MarkBartenderNPC:
            result = "MarkBartenderNPC";
            break;
          case MarkMichiaeChest:
            result = "MarkMichiaeChest";
            break;
          case MarkMichiaeChallenge:
            result = "MarkMichiaeChallenge";
            break;
          case MarkCustomLevel:
            result = "MarkCustomLevel";
            break;
          default:
            goto LABEL_251;
        }
      }
    }
  }
LABEL_256:
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

// Line 662: range 0000000011941BAE-000000001194A320
bool __cdecl data::enumStrToVal(const std::string *s, data::MarkIconType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::MarkIconType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MarkIconType> >::pointer v10; // rax
  data::MarkIconType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::MarkIconType *ea; // [rsp+10h] [rbp-32E0h]
  char v16[13008]; // [rsp+20h] [rbp-32D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_8(12960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = a2294819Unknown;
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
  v4[536862734] = -234556924;
  v4[536862735] = -234556924;
  v4[536862736] = -234556924;
  v4[536862737] = -234556924;
  v4[536862738] = -234556924;
  v4[536862739] = -234556924;
  v4[536862740] = -234556924;
  v4[536862741] = -234556924;
  v4[536862742] = -234556924;
  v4[536862743] = -234556924;
  v4[536862744] = -234556924;
  v4[536862745] = -234556924;
  v4[536862746] = -234556924;
  v4[536862747] = -234556924;
  v4[536862748] = -234556924;
  v4[536862749] = -234556924;
  v4[536862750] = -234556924;
  v4[536862751] = -234556924;
  v4[536862752] = -234556924;
  v4[536862753] = -234556924;
  v4[536862754] = -234556924;
  v4[536862755] = -234556924;
  v4[536862756] = -234556924;
  v4[536862757] = -234556924;
  v4[536862758] = -234556924;
  v4[536862759] = -234556924;
  v4[536862760] = -234556924;
  v4[536862761] = -234556924;
  v4[536862762] = -234556924;
  v4[536862763] = -234556924;
  v4[536862764] = -234556924;
  v4[536862765] = -234556924;
  v4[536862766] = -234556924;
  v4[536862767] = -234556924;
  v4[536862768] = -234556924;
  v4[536862769] = -234556924;
  v4[536862770] = -234556924;
  v4[536862771] = -234556924;
  v4[536862772] = -234556924;
  v4[536862773] = -234556924;
  v4[536862774] = -234556924;
  v4[536862775] = -234556924;
  v4[536862776] = -234556924;
  v4[536862777] = -234556924;
  v4[536862778] = -234556924;
  v4[536862779] = -234556924;
  v4[536862780] = -234556924;
  v4[536862781] = -234556924;
  v4[536862782] = -234556924;
  v4[536862783] = -234556924;
  v4[536862784] = -234556924;
  v4[536862785] = -234556924;
  v4[536862786] = -234556924;
  v4[536862787] = -234556924;
  v4[536862788] = -234556924;
  v4[536862789] = -234556924;
  v4[536862790] = -234556924;
  v4[536862791] = -234556924;
  v4[536862792] = -234556924;
  v4[536862793] = -234556924;
  v4[536862794] = -234556924;
  v4[536862795] = -234556924;
  v4[536862796] = -234556924;
  v4[536862797] = -234556924;
  v4[536862798] = -234556924;
  v4[536862799] = -234556924;
  v4[536862800] = -234556924;
  v4[536862801] = -234556924;
  v4[536862802] = -234556924;
  v4[536862803] = -234556924;
  v4[536862804] = -234556924;
  v4[536862805] = -234556924;
  v4[536862806] = -234556924;
  v4[536862807] = -234556924;
  v4[536862808] = -234556924;
  v4[536862809] = -234556924;
  v4[536862810] = -234556924;
  v4[536862811] = -234556924;
  v4[536862812] = -234556924;
  v4[536862813] = -234556924;
  v4[536862814] = -234556924;
  v4[536862815] = -234556924;
  v4[536862816] = -234556924;
  v4[536862817] = -234556924;
  v4[536862818] = -234556924;
  v4[536862819] = -234556924;
  v4[536862820] = -234556924;
  v4[536862821] = -234556924;
  v4[536862822] = -234556924;
  v4[536862823] = -234556924;
  v4[536862824] = -234556924;
  v4[536862825] = -234556924;
  v4[536862826] = -234556924;
  v4[536862827] = -234556924;
  v4[536862828] = -234556924;
  v4[536862829] = -234556924;
  v4[536862830] = -234556924;
  v4[536862831] = -234556924;
  v4[536862832] = -234556924;
  v4[536862833] = 61956;
  v4[536862833] = -234881024;
  v4[536862834] = 62194;
  v4[536862834] = -234881024;
  v4[536862835] = 62194;
  v4[536862836] = -219021312;
  v4[536862837] = 62194;
  v4[536862838] = -219021312;
  v4[536862839] = 62194;
  v4[536863117] = -202116109;
  v4[536863118] = -202116109;
  v4[536863119] = -202116109;
  v4[536863120] = -202116109;
  v4[536863121] = -202116109;
  v4[536863122] = -202116109;
  v4[536863123] = -202116109;
  v4[536863124] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 3696) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3727) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 3727) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3696, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3696),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      665);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 3696),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3696));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MarkIconType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkIconType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[8],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 3824),
        (const char (*)[8])"Default",
        (data::MarkIconType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Default");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[11],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 3864),
        (const char (*)[11])"MarkChurch",
        (data::MarkIconType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "MarkChurch");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[12],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 3904),
        (const char (*)[12])"MarkKnights",
        (data::MarkIconType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "MarkKnights");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[8],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 3944),
        (const char (*)[8])"MarkPub",
        (data::MarkIconType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "MarkPub");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[13],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 3984),
        (const char (*)[13])"MarkSouvenir",
        (data::MarkIconType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "MarkSouvenir");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4024),
        (const char (*)[15])"MarkRestaurant",
        (data::MarkIconType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "MarkRestaurant");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4064),
        (const char (*)[17])"MarkGeneralCargo",
        (data::MarkIconType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "MarkGeneralCargo");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4104),
        (const char (*)[15])"MarkBlacksmith",
        (data::MarkIconType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "MarkBlacksmith");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4144),
        (const char (*)[17])"MarkTeamArranger",
        (data::MarkIconType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "MarkTeamArranger");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[14],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4184),
        (const char (*)[14])"MarkDailyTask",
        (data::MarkIconType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "MarkDailyTask");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4224),
        (const char (*)[15])"MarkRandomTask",
        (data::MarkIconType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "MarkRandomTask");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4264),
        (const char (*)[16])"MarkAdventurers",
        (data::MarkIconType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "MarkAdventurers");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[12],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4304),
        (const char (*)[12])"MarkAlchemy",
        (data::MarkIconType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "MarkAlchemy");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4344),
        (const char (*)[18])"MarkSeaLampGiving",
        (data::MarkIconType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "MarkSeaLampGiving");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[25],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4384),
        (const char (*)[25])"MarkInvestigationMonster",
        (data::MarkIconType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "MarkInvestigationMonster");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4424),
        (const char (*)[21])"MarkBlacksmith_liyue",
        (data::MarkIconType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "MarkBlacksmith_liyue");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4464),
        (const char (*)[19])"MarkSouvenir_liyue",
        (data::MarkIconType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "MarkSouvenir_liyue");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4504),
        (const char (*)[21])"MarkRestaurant_liyue",
        (data::MarkIconType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "MarkRestaurant_liyue");
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4544),
        (const char (*)[15])"MarkReputation",
        (data::MarkIconType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "MarkReputation");
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4584),
        (const char (*)[21])"MarkReputation_liyue",
        (data::MarkIconType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "MarkReputation_liyue");
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4624),
        (const char (*)[23])"MarkReputation_Inazuma",
        (data::MarkIconType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "MarkReputation_Inazuma");
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4664),
        (const char (*)[23])"MarkBlacksmith_Inazuma",
        (data::MarkIconType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "MarkBlacksmith_Inazuma");
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4704),
        (const char (*)[21])"MarkSouvenir_Inazuma",
        (data::MarkIconType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "MarkSouvenir_Inazuma");
      *(_DWORD *)(v2 + 448) = 23;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4744),
        (const char (*)[23])"MarkRestaurant_Inazuma",
        (data::MarkIconType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "MarkRestaurant_Inazuma");
      *(_DWORD *)(v2 + 464) = 24;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[14],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4784),
        (const char (*)[14])"MarkGroupLink",
        (data::MarkIconType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "MarkGroupLink");
      *(_DWORD *)(v2 + 480) = 25;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[9],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4824),
        (const char (*)[9])"MarkFish",
        (data::MarkIconType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "MarkFish");
      *(_DWORD *)(v2 + 496) = 26;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4864),
        (const char (*)[15])"MarkFish_liyue",
        (data::MarkIconType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "MarkFish_liyue");
      *(_DWORD *)(v2 + 512) = 27;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4904),
        (const char (*)[17])"MarkFish_Inazuma",
        (data::MarkIconType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "MarkFish_Inazuma");
      *(_DWORD *)(v2 + 528) = 28;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4944),
        (const char (*)[19])"MarkGroupLink_Area",
        (data::MarkIconType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "MarkGroupLink_Area");
      *(_DWORD *)(v2 + 544) = 29;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[11],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 4984),
        (const char (*)[11])"MarkGcgPub",
        (data::MarkIconType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "MarkGcgPub");
      *(_DWORD *)(v2 + 560) = 100;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5024),
        (const char (*)[15])"MarkTransPoint",
        (data::MarkIconType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "MarkTransPoint");
      *(_DWORD *)(v2 + 576) = 101;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5064),
        (const char (*)[21])"MarkTransPointLocked",
        (data::MarkIconType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "MarkTransPointLocked");
      *(_DWORD *)(v2 + 592) = 102;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[11],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5104),
        (const char (*)[11])"MarkPortal",
        (data::MarkIconType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "MarkPortal");
      *(_DWORD *)(v2 + 608) = 103;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5144),
        (const char (*)[17])"MarkDungeonEntry",
        (data::MarkIconType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "MarkDungeonEntry");
      *(_DWORD *)(v2 + 624) = 104;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5184),
        (const char (*)[23])"MarkDungeonEntryLocked",
        (data::MarkIconType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "MarkDungeonEntryLocked");
      *(_DWORD *)(v2 + 640) = 105;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5224),
        (const char (*)[23])"MarkWeeklyDungeonEntry",
        (data::MarkIconType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "MarkWeeklyDungeonEntry");
      *(_DWORD *)(v2 + 656) = 106;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[29],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5264),
        (const char (*)[29])"MarkWeeklyDungeonEntryLocked",
        (data::MarkIconType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "MarkWeeklyDungeonEntryLocked");
      *(_DWORD *)(v2 + 672) = 107;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5304),
        (const char (*)[22])"MarkDailyDungeonEntry",
        (data::MarkIconType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "MarkDailyDungeonEntry");
      *(_DWORD *)(v2 + 688) = 108;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5344),
        (const char (*)[28])"MarkDailyDungeonEntryLocked",
        (data::MarkIconType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "MarkDailyDungeonEntryLocked");
      *(_DWORD *)(v2 + 704) = 109;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5384),
        (const char (*)[22])"MarkTowerDungeonEntry",
        (data::MarkIconType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "MarkTowerDungeonEntry");
      *(_DWORD *)(v2 + 720) = 110;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5424),
        (const char (*)[28])"MarkTowerDungeonEntryLocked",
        (data::MarkIconType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "MarkTowerDungeonEntryLocked");
      *(_DWORD *)(v2 + 736) = 111;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[34],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5464),
        (const char (*)[34])"MarkDailyDungeonEntryToBeExplored",
        (data::MarkIconType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "MarkDailyDungeonEntryToBeExplored");
      *(_DWORD *)(v2 + 752) = 112;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[34],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5504),
        (const char (*)[34])"MarkTowerDungeonEntryToBeExplored",
        (data::MarkIconType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, "MarkTowerDungeonEntryToBeExplored");
      *(_DWORD *)(v2 + 768) = 113;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5544),
        (const char (*)[23])"MarkEffigyDungeonEntry",
        (data::MarkIconType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, "MarkEffigyDungeonEntry");
      *(_DWORD *)(v2 + 784) = 114;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[29],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5584),
        (const char (*)[29])"MarkEffigyDungeonEntryLocked",
        (data::MarkIconType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, "MarkEffigyDungeonEntryLocked");
      *(_DWORD *)(v2 + 800) = 115;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[26],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5624),
        (const char (*)[26])"MarkFleurFairDungeonEntry",
        (data::MarkIconType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, "MarkFleurFairDungeonEntry");
      *(_DWORD *)(v2 + 816) = 116;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[26],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5664),
        (const char (*)[26])"MarkBlitzRushDungeonEntry",
        (data::MarkIconType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, "MarkBlitzRushDungeonEntry");
      *(_DWORD *)(v2 + 832) = 117;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5704),
        (const char (*)[22])"MarkHachiDungeonEntry",
        (data::MarkIconType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, "MarkHachiDungeonEntry");
      *(_DWORD *)(v2 + 848) = 118;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[29],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5744),
        (const char (*)[29])"MarkMiniEldritchDungeonEntry",
        (data::MarkIconType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, "MarkMiniEldritchDungeonEntry");
      *(_DWORD *)(v2 + 864) = 199;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5784),
        (const char (*)[18])"MarkGoddessLocked",
        (data::MarkIconType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, "MarkGoddessLocked");
      *(_DWORD *)(v2 + 880) = 204;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[20],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5824),
        (const char (*)[20])"MarkGoddessUnlocked",
        (data::MarkIconType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, "MarkGoddessUnlocked");
      *(_DWORD *)(v2 + 896) = 205;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5864),
        (const char (*)[17])"MarkPacketAnchor",
        (data::MarkIconType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, "MarkPacketAnchor");
      *(_DWORD *)(v2 + 912) = 300;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[10],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5904),
        (const char (*)[10])"MarkQuest",
        (data::MarkIconType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, "MarkQuest");
      *(_DWORD *)(v2 + 928) = 301;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5944),
        (const char (*)[19])"MarkDangerousQuest",
        (data::MarkIconType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, "MarkDangerousQuest");
      *(_DWORD *)(v2 + 944) = 302;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[14],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 5984),
        (const char (*)[14])"MarkQuestArea",
        (data::MarkIconType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, "MarkQuestArea");
      *(_DWORD *)(v2 + 960) = 303;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6024),
        (const char (*)[23])"MarkDangerousQuestArea",
        (data::MarkIconType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, "MarkDangerousQuestArea");
      *(_DWORD *)(v2 + 976) = 400;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[11],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6064),
        (const char (*)[11])"MarkCustom",
        (data::MarkIconType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, "MarkCustom");
      *(_DWORD *)(v2 + 992) = 402;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6104),
        (const char (*)[15])"MarkCustomBoss",
        (data::MarkIconType *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, "MarkCustomBoss");
      *(_DWORD *)(v2 + 1008) = 403;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[14],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6144),
        (const char (*)[14])"MarkCustomBox",
        (data::MarkIconType *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, "MarkCustomBox");
      *(_DWORD *)(v2 + 1024) = 404;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6184),
        (const char (*)[18])"MarkCustomCollect",
        (data::MarkIconType *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, "MarkCustomCollect");
      *(_DWORD *)(v2 + 1040) = 405;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6224),
        (const char (*)[18])"MarkCustomCooking",
        (data::MarkIconType *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, "MarkCustomCooking");
      *(_DWORD *)(v2 + 1056) = 407;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6264),
        (const char (*)[19])"MarkCustomMainTask",
        (data::MarkIconType *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, "MarkCustomMainTask");
      *(_DWORD *)(v2 + 1072) = 408;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6304),
        (const char (*)[18])"MarkCustomMonster",
        (data::MarkIconType *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, "MarkCustomMonster");
      *(_DWORD *)(v2 + 1088) = 411;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6344),
        (const char (*)[16])"MarkCustomSlime",
        (data::MarkIconType *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, "MarkCustomSlime");
      *(_DWORD *)(v2 + 1104) = 412;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6384),
        (const char (*)[15])"MarkCustomTrap",
        (data::MarkIconType *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, "MarkCustomTrap");
      *(_DWORD *)(v2 + 1120) = 413;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6424),
        (const char (*)[15])"MarkCustomWind",
        (data::MarkIconType *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, "MarkCustomWind");
      *(_DWORD *)(v2 + 1136) = 414;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6464),
        (const char (*)[15])"MarkCustomFish",
        (data::MarkIconType *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, "MarkCustomFish");
      *(_DWORD *)(v2 + 1152) = 500;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6504),
        (const char (*)[16])"MarkLocalAvatar",
        (data::MarkIconType *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, "MarkLocalAvatar");
      *(_DWORD *)(v2 + 1168) = 501;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[12],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6544),
        (const char (*)[12])"MarkPlayer1",
        (data::MarkIconType *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, "MarkPlayer1");
      *(_DWORD *)(v2 + 1184) = 502;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[12],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6584),
        (const char (*)[12])"MarkPlayer2",
        (data::MarkIconType *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, "MarkPlayer2");
      *(_DWORD *)(v2 + 1200) = 503;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[12],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6624),
        (const char (*)[12])"MarkPlayer3",
        (data::MarkIconType *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, "MarkPlayer3");
      *(_DWORD *)(v2 + 1216) = 504;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[12],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6664),
        (const char (*)[12])"MarkPlayer4",
        (data::MarkIconType *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, "MarkPlayer4");
      *(_DWORD *)(v2 + 1232) = 505;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6704),
        (const char (*)[17])"MarkBoredMonster",
        (data::MarkIconType *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, "MarkBoredMonster");
      *(_DWORD *)(v2 + 1248) = 506;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[14],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6744),
        (const char (*)[14])"MarkRadarHint",
        (data::MarkIconType *)(v2 + 1248));
      if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1264, "MarkRadarHint");
      *(_DWORD *)(v2 + 1264) = 507;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[13],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6784),
        (const char (*)[13])"MarkActivity",
        (data::MarkIconType *)(v2 + 1264));
      if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1280, "MarkActivity");
      *(_DWORD *)(v2 + 1280) = 508;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[9],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6824),
        (const char (*)[9])"MarkTalk",
        (data::MarkIconType *)(v2 + 1280));
      if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1296, "MarkTalk");
      *(_DWORD *)(v2 + 1296) = 509;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6864),
        (const char (*)[15])"MarkMiscsMarvs",
        (data::MarkIconType *)(v2 + 1296));
      if ( *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1312, "MarkMiscsMarvs");
      *(_DWORD *)(v2 + 1312) = 510;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6904),
        (const char (*)[24])"MarkActivityAsterLittle",
        (data::MarkIconType *)(v2 + 1312));
      if ( *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1328, "MarkActivityAsterLittle");
      *(_DWORD *)(v2 + 1328) = 511;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6944),
        (const char (*)[24])"MarkActivityAsterMiddle",
        (data::MarkIconType *)(v2 + 1328));
      if ( *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1344, "MarkActivityAsterMiddle");
      *(_DWORD *)(v2 + 1344) = 512;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 6984),
        (const char (*)[18])"MarkRadarHintArea",
        (data::MarkIconType *)(v2 + 1344));
      if ( *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1360, "MarkRadarHintArea");
      *(_DWORD *)(v2 + 1360) = 513;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7024),
        (const char (*)[23])"MarkActivityAsterlarge",
        (data::MarkIconType *)(v2 + 1360));
      if ( *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1376, "MarkActivityAsterlarge");
      *(_DWORD *)(v2 + 1376) = 514;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7064),
        (const char (*)[16])"MarkHuntingArea",
        (data::MarkIconType *)(v2 + 1376));
      if ( *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1392, "MarkHuntingArea");
      *(_DWORD *)(v2 + 1392) = 515;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[27],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7104),
        (const char (*)[27])"MarkActivityAsterMiddleNPC",
        (data::MarkIconType *)(v2 + 1392));
      if ( *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1408, "MarkActivityAsterMiddleNPC");
      *(_DWORD *)(v2 + 1408) = 516;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7144),
        (const char (*)[28])"MarkWidgetSeverDetectorArea",
        (data::MarkIconType *)(v2 + 1408));
      if ( *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1424, "MarkWidgetSeverDetectorArea");
      *(_DWORD *)(v2 + 1424) = 517;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[33],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7184),
        (const char (*)[33])"MarkActivityFlightChallengePoint",
        (data::MarkIconType *)(v2 + 1424));
      if ( *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1440, "MarkActivityFlightChallengePoint");
      *(_DWORD *)(v2 + 1440) = 518;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[14],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7224),
        (const char (*)[14])"MarkElderTree",
        (data::MarkIconType *)(v2 + 1440));
      if ( *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1456, "MarkElderTree");
      *(_DWORD *)(v2 + 1456) = 519;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7264),
        (const char (*)[19])"MarkElderTreeEvent",
        (data::MarkIconType *)(v2 + 1456));
      if ( *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1472, "MarkElderTreeEvent");
      *(_DWORD *)(v2 + 1472) = 520;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[26],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7304),
        (const char (*)[26])"MarkWidgetTreasureMapArea",
        (data::MarkIconType *)(v2 + 1472));
      if ( *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1488, "MarkWidgetTreasureMapArea");
      *(_DWORD *)(v2 + 1488) = 521;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[27],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7344),
        (const char (*)[27])"MarkActivityTreasureMapNPC",
        (data::MarkIconType *)(v2 + 1488));
      if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1504, "MarkActivityTreasureMapNPC");
      *(_DWORD *)(v2 + 1504) = 522;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7384),
        (const char (*)[28])"MarkActivityDragonSpineBoss",
        (data::MarkIconType *)(v2 + 1504));
      if ( *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1520, "MarkActivityDragonSpineBoss");
      *(_DWORD *)(v2 + 1520) = 523;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7424),
        (const char (*)[21])"MarkActivityBlessing",
        (data::MarkIconType *)(v2 + 1520));
      if ( *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1536, "MarkActivityBlessing");
      *(_DWORD *)(v2 + 1536) = 524;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[40],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7464),
        (const char (*)[40])"MarkActivityMonsterBannerDrakePrimoRock",
        (data::MarkIconType *)(v2 + 1536));
      if ( *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1552, "MarkActivityMonsterBannerDrakePrimoRock");
      *(_DWORD *)(v2 + 1552) = 525;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[36],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7504),
        (const char (*)[36])"MarkActivityExpeditionChallengeArea",
        (data::MarkIconType *)(v2 + 1552));
      if ( *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1568, "MarkActivityExpeditionChallengeArea");
      *(_DWORD *)(v2 + 1568) = 526;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7544),
        (const char (*)[18])"MarkMechanicisNPC",
        (data::MarkIconType *)(v2 + 1568));
      if ( *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1584, "MarkMechanicisNPC");
      *(_DWORD *)(v2 + 1584) = 527;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[35],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7584),
        (const char (*)[35])"MarkActivityWaterSpriteExploreArea",
        (data::MarkIconType *)(v2 + 1584));
      if ( *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1600, "MarkActivityWaterSpriteExploreArea");
      *(_DWORD *)(v2 + 1600) = 528;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[27],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7624),
        (const char (*)[27])"MarkActivityArenaChallenge",
        (data::MarkIconType *)(v2 + 1600));
      if ( *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1616, "MarkActivityArenaChallenge");
      *(_DWORD *)(v2 + 1616) = 529;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[26],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7664),
        (const char (*)[26])"MarkActivityFleurFairFall",
        (data::MarkIconType *)(v2 + 1616));
      if ( *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1632, "MarkActivityFleurFairFall");
      *(_DWORD *)(v2 + 1632) = 530;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[29],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7704),
        (const char (*)[29])"MarkActivityFleurFairBalloon",
        (data::MarkIconType *)(v2 + 1632));
      if ( *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1648, "MarkActivityFleurFairBalloon");
      *(_DWORD *)(v2 + 1648) = 531;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7744),
        (const char (*)[28])"MarkActivityWaterSpriteBoss",
        (data::MarkIconType *)(v2 + 1648));
      if ( *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1664, "MarkActivityWaterSpriteBoss");
      *(_DWORD *)(v2 + 1664) = 532;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[27],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7784),
        (const char (*)[27])"MarkActivitySummerTimeRace",
        (data::MarkIconType *)(v2 + 1664));
      if ( *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1680, "MarkActivitySummerTimeRace");
      *(_DWORD *)(v2 + 1680) = 600;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[25],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7824),
        (const char (*)[25])"MarkActivityRegionSearch",
        (data::MarkIconType *)(v2 + 1680));
      if ( *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1696, "MarkActivityRegionSearch");
      *(_DWORD *)(v2 + 1696) = 601;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7864),
        (const char (*)[21])"MarkGalleryChallenge",
        (data::MarkIconType *)(v2 + 1696));
      if ( *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1712, "MarkGalleryChallenge");
      *(_DWORD *)(v2 + 1712) = 602;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[25],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7904),
        (const char (*)[25])"MarkActivityFleurFairNPC",
        (data::MarkIconType *)(v2 + 1712));
      if ( *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1728, "MarkActivityFleurFairNPC");
      *(_DWORD *)(v2 + 1728) = 603;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[26],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7944),
        (const char (*)[26])"MarkChannellerSlabCampLow",
        (data::MarkIconType *)(v2 + 1728));
      if ( *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1744, "MarkChannellerSlabCampLow");
      *(_DWORD *)(v2 + 1744) = 604;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[29],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 7984),
        (const char (*)[29])"MarkChannellerSlabCampMiddle",
        (data::MarkIconType *)(v2 + 1744));
      if ( *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1760, "MarkChannellerSlabCampMiddle");
      *(_DWORD *)(v2 + 1760) = 605;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[27],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8024),
        (const char (*)[27])"MarkChannellerSlabCampHigh",
        (data::MarkIconType *)(v2 + 1760));
      if ( *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1776, "MarkChannellerSlabCampHigh");
      *(_DWORD *)(v2 + 1776) = 606;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[32],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8064),
        (const char (*)[32])"MarkChannellerSlabOneOffDungeon",
        (data::MarkIconType *)(v2 + 1776));
      if ( *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1792, "MarkChannellerSlabOneOffDungeon");
      *(_DWORD *)(v2 + 1792) = 607;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[30],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8104),
        (const char (*)[30])"MarkChannellerSlabLoopDungeon",
        (data::MarkIconType *)(v2 + 1792));
      if ( *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1808, "MarkChannellerSlabLoopDungeon");
      *(_DWORD *)(v2 + 1808) = 608;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8144),
        (const char (*)[22])"MarkChannellerSlabNPC",
        (data::MarkIconType *)(v2 + 1808));
      if ( *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1824, "MarkChannellerSlabNPC");
      *(_DWORD *)(v2 + 1824) = 609;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[32],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8184),
        (const char (*)[32])"MarkActivityMiniTomoHiliWeiArea",
        (data::MarkIconType *)(v2 + 1824));
      if ( *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1840, "MarkActivityMiniTomoHiliWeiArea");
      *(_DWORD *)(v2 + 1840) = 610;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[27],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8224),
        (const char (*)[27])"MarkActivityHideAndSeekNPC",
        (data::MarkIconType *)(v2 + 1840));
      if ( *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1856, "MarkActivityHideAndSeekNPC");
      *(_DWORD *)(v2 + 1856) = 611;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8264),
        (const char (*)[19])"MarkHomeworldDjinn",
        (data::MarkIconType *)(v2 + 1856));
      if ( *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1872, "MarkHomeworldDjinn");
      *(_DWORD *)(v2 + 1872) = 612;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[26],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8304),
        (const char (*)[26])"MarkHomeworldDjinnWeekend",
        (data::MarkIconType *)(v2 + 1872));
      if ( *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1888, "MarkHomeworldDjinnWeekend");
      *(_DWORD *)(v2 + 1888) = 613;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8344),
        (const char (*)[23])"MarkHomeworldMainHouse",
        (data::MarkIconType *)(v2 + 1888));
      if ( *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1904, "MarkHomeworldMainHouse");
      *(_DWORD *)(v2 + 1904) = 614;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8384),
        (const char (*)[22])"MarkHideAndSeekHunter",
        (data::MarkIconType *)(v2 + 1904));
      if ( *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1920, "MarkHideAndSeekHunter");
      *(_DWORD *)(v2 + 1920) = 615;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[31],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8424),
        (const char (*)[31])"MarkActivityBuoyantCombatPoint",
        (data::MarkIconType *)(v2 + 1920));
      if ( *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1936, "MarkActivityBuoyantCombatPoint");
      *(_DWORD *)(v2 + 1936) = 616;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8464),
        (const char (*)[28])"MarkActivityBounceConjuring",
        (data::MarkIconType *)(v2 + 1936));
      if ( *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1952, "MarkActivityBounceConjuring");
      *(_DWORD *)(v2 + 1952) = 617;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8504),
        (const char (*)[17])"MarkHomeworldNpc",
        (data::MarkIconType *)(v2 + 1952));
      if ( *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1968, "MarkHomeworldNpc");
      *(_DWORD *)(v2 + 1968) = 620;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[26],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8544),
        (const char (*)[26])"MarkSummerIsleSignalPoint",
        (data::MarkIconType *)(v2 + 1968));
      if ( *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1984, "MarkSummerIsleSignalPoint");
      *(_DWORD *)(v2 + 1984) = 621;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8584),
        (const char (*)[23])"MarkVehicleSummonPoint",
        (data::MarkIconType *)(v2 + 1984));
      if ( *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2000, "MarkVehicleSummonPoint");
      *(_DWORD *)(v2 + 2000) = 622;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[29],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8624),
        (const char (*)[29])"MarkVehicleSummonPointLocked",
        (data::MarkIconType *)(v2 + 2000));
      if ( *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2016, "MarkVehicleSummonPointLocked");
      *(_DWORD *)(v2 + 2016) = 625;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8664),
        (const char (*)[23])"MarkBounceConjuringNPC",
        (data::MarkIconType *)(v2 + 2016));
      if ( *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2032, "MarkBounceConjuringNPC");
      *(_DWORD *)(v2 + 2032) = 626;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8704),
        (const char (*)[17])"MarkVehicleSkiff",
        (data::MarkIconType *)(v2 + 2032));
      if ( *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2048, "MarkVehicleSkiff");
      *(_DWORD *)(v2 + 2048) = 630;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8744),
        (const char (*)[28])"MarkHomeworldFurnitureSuite",
        (data::MarkIconType *)(v2 + 2048));
      if ( *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2064, "MarkHomeworldFurnitureSuite");
      *(_DWORD *)(v2 + 2064) = 631;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8784),
        (const char (*)[24])"MarkHomeworldTransPoint",
        (data::MarkIconType *)(v2 + 2064));
      if ( *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2080, "MarkHomeworldTransPoint");
      *(_DWORD *)(v2 + 2080) = 632;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8824),
        (const char (*)[23])"MarkHomeworldSafePoint",
        (data::MarkIconType *)(v2 + 2080));
      if ( *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2096, "MarkHomeworldSafePoint");
      *(_DWORD *)(v2 + 2096) = 633;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8864),
        (const char (*)[24])"MarkHomeworldFarmField1",
        (data::MarkIconType *)(v2 + 2096));
      if ( *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2112, "MarkHomeworldFarmField1");
      *(_DWORD *)(v2 + 2112) = 634;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8904),
        (const char (*)[24])"MarkHomeworldFarmField2",
        (data::MarkIconType *)(v2 + 2112));
      if ( *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2128, "MarkHomeworldFarmField2");
      *(_DWORD *)(v2 + 2128) = 635;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8944),
        (const char (*)[24])"MarkHomeworldFarmField3",
        (data::MarkIconType *)(v2 + 2128));
      if ( *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2144, "MarkHomeworldFarmField3");
      *(_DWORD *)(v2 + 2144) = 700;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[33],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 8984),
        (const char (*)[33])"MarkActivityTreasureMapChallenge",
        (data::MarkIconType *)(v2 + 2144));
      if ( *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2160, "MarkActivityTreasureMapChallenge");
      *(_DWORD *)(v2 + 2160) = 701;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[29],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9024),
        (const char (*)[29])"MarkActivityBlitzRushParkour",
        (data::MarkIconType *)(v2 + 2160));
      if ( *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2176, "MarkActivityBlitzRushParkour");
      *(_DWORD *)(v2 + 2176) = 705;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[25],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9064),
        (const char (*)[25])"MarkActivityPerpetualNPC",
        (data::MarkIconType *)(v2 + 2176));
      if ( *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2192, "MarkActivityPerpetualNPC");
      *(_DWORD *)(v2 + 2192) = 710;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[20],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9104),
        (const char (*)[20])"MarkOraionokamiTree",
        (data::MarkIconType *)(v2 + 2192));
      if ( *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2208, "MarkOraionokamiTree");
      *(_DWORD *)(v2 + 2208) = 711;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9144),
        (const char (*)[16])"MarkSumoDungeon",
        (data::MarkIconType *)(v2 + 2208));
      if ( *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2224, "MarkSumoDungeon");
      *(_DWORD *)(v2 + 2224) = 712;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[26],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9184),
        (const char (*)[26])"MarkMoonfinTrialChallenge",
        (data::MarkIconType *)(v2 + 2224));
      if ( *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2240, "MarkMoonfinTrialChallenge");
      *(_DWORD *)(v2 + 2240) = 713;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9224),
        (const char (*)[22])"MarkMoonfinTrialFinal",
        (data::MarkIconType *)(v2 + 2240));
      if ( *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2256, "MarkMoonfinTrialFinal");
      *(_DWORD *)(v2 + 2256) = 720;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9264),
        (const char (*)[24])"MarkLunaRiteExploreArea",
        (data::MarkIconType *)(v2 + 2256));
      if ( *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2272, "MarkLunaRiteExploreArea");
      *(_DWORD *)(v2 + 2272) = 721;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9304),
        (const char (*)[16])"MarkLunaRiteNPC",
        (data::MarkIconType *)(v2 + 2272));
      if ( *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2288, "MarkLunaRiteNPC");
      *(_DWORD *)(v2 + 2288) = 722;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[20],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9344),
        (const char (*)[20])"MarkLunaRiteCrystal",
        (data::MarkIconType *)(v2 + 2288));
      if ( *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2304, "MarkLunaRiteCrystal");
      *(_DWORD *)(v2 + 2304) = 723;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9384),
        (const char (*)[18])"MarkLunaRiteChest",
        (data::MarkIconType *)(v2 + 2304));
      if ( *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2320, "MarkLunaRiteChest");
      *(_DWORD *)(v2 + 2320) = 730;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[14],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9424),
        (const char (*)[14])"MarkRoguelike",
        (data::MarkIconType *)(v2 + 2320));
      if ( *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2336, "MarkRoguelike");
      *(_DWORD *)(v2 + 2336) = 800;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[12],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9464),
        (const char (*)[12])"MarkBugyowu",
        (data::MarkIconType *)(v2 + 2336));
      if ( *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2352, "MarkBugyowu");
      *(_DWORD *)(v2 + 2352) = 801;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[14],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9504),
        (const char (*)[14])"MarkChashitsu",
        (data::MarkIconType *)(v2 + 2352));
      if ( *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2368, "MarkChashitsu");
      *(_DWORD *)(v2 + 2368) = 802;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[20],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9544),
        (const char (*)[20])"MarkHomeworldPaimon",
        (data::MarkIconType *)(v2 + 2368));
      if ( *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2384, "MarkHomeworldPaimon");
      *(_DWORD *)(v2 + 2384) = 803;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9584),
        (const char (*)[17])"MarkMusicGameNPC",
        (data::MarkIconType *)(v2 + 2384));
      if ( *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2400, "MarkMusicGameNPC");
      *(_DWORD *)(v2 + 2400) = 804;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9624),
        (const char (*)[19])"MarkGrowFlowersNPC",
        (data::MarkIconType *)(v2 + 2400));
      if ( *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2416, "MarkGrowFlowersNPC");
      *(_DWORD *)(v2 + 2416) = 805;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[26],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9664),
        (const char (*)[26])"MarkHachiStealthChallenge",
        (data::MarkIconType *)(v2 + 2416));
      if ( *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2432, "MarkHachiStealthChallenge");
      *(_DWORD *)(v2 + 2432) = 806;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[25],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9704),
        (const char (*)[25])"MarkHachiBattleChallenge",
        (data::MarkIconType *)(v2 + 2432));
      if ( *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2448, "MarkHachiBattleChallenge");
      *(_DWORD *)(v2 + 2448) = 810;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9744),
        (const char (*)[22])"MarkWinterCampSnowman",
        (data::MarkIconType *)(v2 + 2448));
      if ( *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2464, "MarkWinterCampSnowman");
      *(_DWORD *)(v2 + 2464) = 811;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[27],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9784),
        (const char (*)[27])"MarkActivityWinterCampBoss",
        (data::MarkIconType *)(v2 + 2464));
      if ( *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2480, "MarkActivityWinterCampBoss");
      *(_DWORD *)(v2 + 2480) = 820;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9824),
        (const char (*)[22])"MarkAnimalCaptureShop",
        (data::MarkIconType *)(v2 + 2480));
      if ( *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2496, "MarkAnimalCaptureShop");
      *(_DWORD *)(v2 + 2496) = 821;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9864),
        (const char (*)[18])"MarkAlcorTransmit",
        (data::MarkIconType *)(v2 + 2496));
      if ( *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2512, "MarkAlcorTransmit");
      *(_DWORD *)(v2 + 2512) = 822;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[20],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9904),
        (const char (*)[20])"MarkQunyugeTransmit",
        (data::MarkIconType *)(v2 + 2512));
      if ( *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2528, "MarkQunyugeTransmit");
      *(_DWORD *)(v2 + 2528) = 830;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9944),
        (const char (*)[15])"MarkAshanpoNPC",
        (data::MarkIconType *)(v2 + 2528));
      if ( *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2544, "MarkAshanpoNPC");
      *(_DWORD *)(v2 + 2544) = 840;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 9984),
        (const char (*)[23])"MarkPotionDungeonEntry",
        (data::MarkIconType *)(v2 + 2544));
      if ( *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2560, "MarkPotionDungeonEntry");
      *(_DWORD *)(v2 + 2560) = 850;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10024),
        (const char (*)[24])"MarkProjectionGameEntry",
        (data::MarkIconType *)(v2 + 2560));
      if ( *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2576, "MarkProjectionGameEntry");
      *(_DWORD *)(v2 + 2576) = 860;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[31],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10064),
        (const char (*)[31])"MarkLanternRiteShipSummonPoint",
        (data::MarkIconType *)(v2 + 2576));
      if ( *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2592, "MarkLanternRiteShipSummonPoint");
      *(_DWORD *)(v2 + 2592) = 861;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[37],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10104),
        (const char (*)[37])"MarkLanternRiteShipSummonPointLocked",
        (data::MarkIconType *)(v2 + 2592));
      if ( *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2608, "MarkLanternRiteShipSummonPointLocked");
      *(_DWORD *)(v2 + 2608) = 870;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[20],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10144),
        (const char (*)[20])"MarkMichiaeOffering",
        (data::MarkIconType *)(v2 + 2608));
      if ( *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2624, "MarkMichiaeOffering");
      *(_DWORD *)(v2 + 2624) = 871;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10184),
        (const char (*)[17])"MarkBartenderNPC",
        (data::MarkIconType *)(v2 + 2624));
      if ( *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2640, "MarkBartenderNPC");
      *(_DWORD *)(v2 + 2640) = 872;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10224),
        (const char (*)[17])"MarkMichiaeChest",
        (data::MarkIconType *)(v2 + 2640));
      if ( *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2656, "MarkMichiaeChest");
      *(_DWORD *)(v2 + 2656) = 873;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10264),
        (const char (*)[21])"MarkMichiaeChallenge",
        (data::MarkIconType *)(v2 + 2656));
      if ( *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2672, "MarkMichiaeChallenge");
      *(_DWORD *)(v2 + 2672) = 874;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10304),
        (const char (*)[16])"MarkCustomLevel",
        (data::MarkIconType *)(v2 + 2672));
      if ( *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2688, "MarkCustomLevel");
      *(_DWORD *)(v2 + 2688) = 2601;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10344),
        (const char (*)[22])"MarkLuminanceStoneNPC",
        (data::MarkIconType *)(v2 + 2688));
      if ( *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2704, "MarkLuminanceStoneNPC");
      *(_DWORD *)(v2 + 2704) = 2602;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10384),
        (const char (*)[16])"MarkCrystalLink",
        (data::MarkIconType *)(v2 + 2704));
      if ( *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2720, "MarkCrystalLink");
      *(_DWORD *)(v2 + 2720) = 2603;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10424),
        (const char (*)[19])"MarkQuestAcception",
        (data::MarkIconType *)(v2 + 2720));
      if ( *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2736, "MarkQuestAcception");
      *(_DWORD *)(v2 + 2736) = 2610;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10464),
        (const char (*)[21])"MarkIrodoriFlowerNPC",
        (data::MarkIconType *)(v2 + 2736));
      if ( *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2752, "MarkIrodoriFlowerNPC");
      *(_DWORD *)(v2 + 2752) = 2611;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[20],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10504),
        (const char (*)[20])"MarkIrodoriPhotoNPC",
        (data::MarkIconType *)(v2 + 2752));
      if ( *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2768, "MarkIrodoriPhotoNPC");
      *(_DWORD *)(v2 + 2768) = 2612;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10544),
        (const char (*)[21])"MarkIrodoriMasterNPC",
        (data::MarkIconType *)(v2 + 2768));
      if ( *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2784, "MarkIrodoriMasterNPC");
      *(_DWORD *)(v2 + 2784) = 2613;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[20],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10584),
        (const char (*)[20])"MarkIrodoriChessNPC",
        (data::MarkIconType *)(v2 + 2784));
      if ( *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2800, "MarkIrodoriChessNPC");
      *(_DWORD *)(v2 + 2800) = 2701;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10624),
        (const char (*)[19])"MarkMusicGameV3NPC",
        (data::MarkIconType *)(v2 + 2800));
      if ( *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2816, "MarkMusicGameV3NPC");
      *(_DWORD *)(v2 + 2816) = 2702;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10664),
        (const char (*)[21])"MarkActivityGachaNPC",
        (data::MarkIconType *)(v2 + 2816));
      if ( *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2832, "MarkActivityGachaNPC");
      *(_DWORD *)(v2 + 2832) = 2703;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10704),
        (const char (*)[15])"MarkRogueDiary",
        (data::MarkIconType *)(v2 + 2832));
      if ( *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2848, "MarkRogueDiary");
      *(_DWORD *)(v2 + 2848) = 2704;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10744),
        (const char (*)[16])"MarkCocoonSpace",
        (data::MarkIconType *)(v2 + 2848));
      if ( *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2864, "MarkCocoonSpace");
      *(_DWORD *)(v2 + 2864) = 2801;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10784),
        (const char (*)[19])"MarkIslandPartyNPC",
        (data::MarkIconType *)(v2 + 2864));
      if ( *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2880, "MarkIslandPartyNPC");
      *(_DWORD *)(v2 + 2880) = 2802;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[34],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10824),
        (const char (*)[34])"MarkSummerTimeV2WanyeDungeonEntry",
        (data::MarkIconType *)(v2 + 2880));
      if ( *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2896, "MarkSummerTimeV2WanyeDungeonEntry");
      *(_DWORD *)(v2 + 2896) = 2803;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[35],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10864),
        (const char (*)[35])"MarkSummerTimeV2XinyanDungeonEntry",
        (data::MarkIconType *)(v2 + 2896));
      if ( *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2912, "MarkSummerTimeV2XinyanDungeonEntry");
      *(_DWORD *)(v2 + 2912) = 2804;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[37],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10904),
        (const char (*)[37])"MarkSummerTimeV2FeixieerDungeonEntry",
        (data::MarkIconType *)(v2 + 2912));
      if ( *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2928, "MarkSummerTimeV2FeixieerDungeonEntry");
      *(_DWORD *)(v2 + 2928) = 2805;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[33],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10944),
        (const char (*)[33])"MarkSummerTimeV2MonaDungeonEntry",
        (data::MarkIconType *)(v2 + 2928));
      if ( *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2944, "MarkSummerTimeV2MonaDungeonEntry");
      *(_DWORD *)(v2 + 2944) = 2806;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[32],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 10984),
        (const char (*)[32])"MarkSummerTimeV2BoatSummonPoint",
        (data::MarkIconType *)(v2 + 2944));
      if ( *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2960, "MarkSummerTimeV2BoatSummonPoint");
      *(_DWORD *)(v2 + 2960) = 2807;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11024),
        (const char (*)[18])"MarkGearGameEntry",
        (data::MarkIconType *)(v2 + 2960));
      if ( *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2976, "MarkGearGameEntry");
      *(_DWORD *)(v2 + 2976) = 2808;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11064),
        (const char (*)[16])"MarkEchoShellV2",
        (data::MarkIconType *)(v2 + 2976));
      if ( *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2992, "MarkEchoShellV2");
      *(_DWORD *)(v2 + 2992) = 2809;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11104),
        (const char (*)[21])"MarkArenaChallengeV3",
        (data::MarkIconType *)(v2 + 2992));
      if ( *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3008, "MarkArenaChallengeV3");
      *(_DWORD *)(v2 + 3008) = 3001;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11144),
        (const char (*)[22])"MarkReputation_Sumeru",
        (data::MarkIconType *)(v2 + 3008));
      if ( *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3024, "MarkReputation_Sumeru");
      *(_DWORD *)(v2 + 3024) = 3002;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11184),
        (const char (*)[22])"MarkBlacksmith_Sumeru",
        (data::MarkIconType *)(v2 + 3024));
      if ( *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3040, "MarkBlacksmith_Sumeru");
      *(_DWORD *)(v2 + 3040) = 3003;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[20],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11224),
        (const char (*)[20])"MarkSouvenir_Sumeru",
        (data::MarkIconType *)(v2 + 3040));
      if ( *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3056, "MarkSouvenir_Sumeru");
      *(_DWORD *)(v2 + 3056) = 3004;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11264),
        (const char (*)[22])"MarkRestaurant_Sumeru",
        (data::MarkIconType *)(v2 + 3056));
      if ( *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3072, "MarkRestaurant_Sumeru");
      *(_DWORD *)(v2 + 3072) = 3005;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11304),
        (const char (*)[28])"MarkGravenInnocenceCarveNPC",
        (data::MarkIconType *)(v2 + 3072));
      if ( *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3088, "MarkGravenInnocenceCarveNPC");
      *(_DWORD *)(v2 + 3088) = 3006;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11344),
        (const char (*)[28])"MarkTreasureHuntExploration",
        (data::MarkIconType *)(v2 + 3088));
      if ( *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3104, "MarkTreasureHuntExploration");
      *(_DWORD *)(v2 + 3104) = 3007;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[27],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11384),
        (const char (*)[27])"MarkTreasureHuntExcavation",
        (data::MarkIconType *)(v2 + 3104));
      if ( *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3120, "MarkTreasureHuntExcavation");
      *(_DWORD *)(v2 + 3120) = 3008;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[30],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11424),
        (const char (*)[30])"MarkInstableSprayDungeonEntry",
        (data::MarkIconType *)(v2 + 3120));
      if ( *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3136, "MarkInstableSprayDungeonEntry");
      *(_DWORD *)(v2 + 3136) = 3009;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[30],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11464),
        (const char (*)[30])"MarkMuqadasPotionDungeonEntry",
        (data::MarkIconType *)(v2 + 3136));
      if ( *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3152, "MarkMuqadasPotionDungeonEntry");
      *(_DWORD *)(v2 + 3152) = 3010;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11504),
        (const char (*)[24])"MarkDeshretObeliskChest",
        (data::MarkIconType *)(v2 + 3152));
      if ( *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3168, "MarkDeshretObeliskChest");
      *(_DWORD *)(v2 + 3168) = 3011;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11544),
        (const char (*)[17])"MarkVanasaraTree",
        (data::MarkIconType *)(v2 + 3168));
      if ( *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3184, "MarkVanasaraTree");
      *(_DWORD *)(v2 + 3184) = 3012;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11584),
        (const char (*)[19])"MarkLibrary_Sumeru",
        (data::MarkIconType *)(v2 + 3184));
      if ( *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3200, "MarkLibrary_Sumeru");
      *(_DWORD *)(v2 + 3200) = 3013;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11624),
        (const char (*)[16])"MarkCafe_Sumeru",
        (data::MarkIconType *)(v2 + 3200));
      if ( *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3216, "MarkCafe_Sumeru");
      *(_DWORD *)(v2 + 3216) = 3014;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[18],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11664),
        (const char (*)[18])"MarkTemple_Sumeru",
        (data::MarkIconType *)(v2 + 3216));
      if ( *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3232, "MarkTemple_Sumeru");
      *(_DWORD *)(v2 + 3232) = 3015;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11704),
        (const char (*)[15])"MarkTalkMainWQ",
        (data::MarkIconType *)(v2 + 3232));
      if ( *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3248, "MarkTalkMainWQ");
      *(_DWORD *)(v2 + 3248) = 3016;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11744),
        (const char (*)[16])"MarkFish_Sumeru",
        (data::MarkIconType *)(v2 + 3248));
      if ( *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3264, "MarkFish_Sumeru");
      *(_DWORD *)(v2 + 3264) = 3101;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[19],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11784),
        (const char (*)[19])"MarkWindFieldEntry",
        (data::MarkIconType *)(v2 + 3264));
      if ( *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3280, "MarkWindFieldEntry");
      *(_DWORD *)(v2 + 3280) = 3102;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[30],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11824),
        (const char (*)[30])"MarkVintageHuntingStageOneNPC",
        (data::MarkIconType *)(v2 + 3280));
      if ( *(_BYTE *)(((v2 + 3296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3296, "MarkVintageHuntingStageOneNPC");
      *(_DWORD *)(v2 + 3296) = 3103;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[30],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11864),
        (const char (*)[30])"MarkVintageHuntingStageTwoNPC",
        (data::MarkIconType *)(v2 + 3296));
      if ( *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3312, "MarkVintageHuntingStageTwoNPC");
      *(_DWORD *)(v2 + 3312) = 3104;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[32],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11904),
        (const char (*)[32])"MarkVintageHuntingStageThreeNPC",
        (data::MarkIconType *)(v2 + 3312));
      if ( *(_BYTE *)(((v2 + 3328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3328, "MarkVintageHuntingStageThreeNPC");
      *(_DWORD *)(v2 + 3328) = 3105;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[28],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11944),
        (const char (*)[28])"MarkVintageMarketDeliverNPC",
        (data::MarkIconType *)(v2 + 3328));
      if ( *(_BYTE *)(((v2 + 3344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3344, "MarkVintageMarketDeliverNPC");
      *(_DWORD *)(v2 + 3344) = 3106;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[27],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 11984),
        (const char (*)[27])"MarkVintageMarketBarginNPC",
        (data::MarkIconType *)(v2 + 3344));
      if ( *(_BYTE *)(((v2 + 3360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3360, "MarkVintageMarketBarginNPC");
      *(_DWORD *)(v2 + 3360) = 3107;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[23],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12024),
        (const char (*)[23])"MarkVintageMarketStore",
        (data::MarkIconType *)(v2 + 3360));
      if ( *(_BYTE *)(((v2 + 3376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3376) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3376, "MarkVintageMarketStore");
      *(_DWORD *)(v2 + 3376) = 3108;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12064),
        (const char (*)[17])"MarkPOIIndicator",
        (data::MarkIconType *)(v2 + 3376));
      if ( *(_BYTE *)(((v2 + 3392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3392) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3392, "MarkPOIIndicator");
      *(_DWORD *)(v2 + 3392) = 3201;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[30],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12104),
        (const char (*)[30])"MarkFungusFighterCultivateNPC",
        (data::MarkIconType *)(v2 + 3392));
      if ( *(_BYTE *)(((v2 + 3408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3408) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3408, "MarkFungusFighterCultivateNPC");
      *(_DWORD *)(v2 + 3408) = 3202;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[13],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12144),
        (const char (*)[13])"MarkEffigyV2",
        (data::MarkIconType *)(v2 + 3408));
      if ( *(_BYTE *)(((v2 + 3424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3424, "MarkEffigyV2");
      *(_DWORD *)(v2 + 3424) = 3203;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[38],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12184),
        (const char (*)[38])"MarkFungusFighterTrainingDungeonEntry",
        (data::MarkIconType *)(v2 + 3424));
      if ( *(_BYTE *)(((v2 + 3440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3440, "MarkFungusFighterTrainingDungeonEntry");
      *(_DWORD *)(v2 + 3440) = 3204;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[34],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12224),
        (const char (*)[34])"MarkFungusFighterPlotDungeonEntry",
        (data::MarkIconType *)(v2 + 3440));
      if ( *(_BYTE *)(((v2 + 3456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3456) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3456, "MarkFungusFighterPlotDungeonEntry");
      *(_DWORD *)(v2 + 3456) = 3301;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12264),
        (const char (*)[17])"MarkGcgNpcNormal",
        (data::MarkIconType *)(v2 + 3456));
      if ( *(_BYTE *)(((v2 + 3472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3472, "MarkGcgNpcNormal");
      *(_DWORD *)(v2 + 3472) = 3302;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[17],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12304),
        (const char (*)[17])"MarkGcgNpcFinish",
        (data::MarkIconType *)(v2 + 3472));
      if ( *(_BYTE *)(((v2 + 3488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3488, "MarkGcgNpcFinish");
      *(_DWORD *)(v2 + 3488) = 3303;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[15],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12344),
        (const char (*)[15])"MarkGcgNpcLock",
        (data::MarkIconType *)(v2 + 3488));
      if ( *(_BYTE *)(((v2 + 3504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3504, "MarkGcgNpcLock");
      *(_DWORD *)(v2 + 3504) = 3304;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[12],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12384),
        (const char (*)[12])"MarkGcgWeek",
        (data::MarkIconType *)(v2 + 3504));
      if ( *(_BYTE *)(((v2 + 3520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3520, "MarkGcgWeek");
      *(_DWORD *)(v2 + 3520) = 3305;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[11],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12424),
        (const char (*)[11])"MarkGcgCat",
        (data::MarkIconType *)(v2 + 3520));
      if ( *(_BYTE *)(((v2 + 3536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3536, "MarkGcgCat");
      *(_DWORD *)(v2 + 3536) = 3306;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[13],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12464),
        (const char (*)[13])"MarkGcgBoard",
        (data::MarkIconType *)(v2 + 3536));
      if ( *(_BYTE *)(((v2 + 3552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3552, "MarkGcgBoard");
      *(_DWORD *)(v2 + 3552) = 3307;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[16],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12504),
        (const char (*)[16])"MarkGcgNpcClear",
        (data::MarkIconType *)(v2 + 3552));
      if ( *(_BYTE *)(((v2 + 3568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3568, "MarkGcgNpcClear");
      *(_DWORD *)(v2 + 3568) = 3308;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[22],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12544),
        (const char (*)[22])"MarkBrickBreakerWorld",
        (data::MarkIconType *)(v2 + 3568));
      if ( *(_BYTE *)(((v2 + 3584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3584) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3584, "MarkBrickBreakerWorld");
      *(_DWORD *)(v2 + 3584) = 3309;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[24],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12584),
        (const char (*)[24])"MarkBrickBreakerDungeon",
        (data::MarkIconType *)(v2 + 3584));
      if ( *(_BYTE *)(((v2 + 3600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3600, "MarkBrickBreakerDungeon");
      *(_DWORD *)(v2 + 3600) = 3401;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[14],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12624),
        (const char (*)[14])"MarkDuelHeart",
        (data::MarkIconType *)(v2 + 3600));
      if ( *(_BYTE *)(((v2 + 3616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3616, "MarkDuelHeart");
      *(_DWORD *)(v2 + 3616) = 3402;
      std::pair<std::string const,data::MarkIconType>::pair<char const(&)[21],data::MarkIconType,true>(
        (std::pair<const std::string,data::MarkIconType> *const)(v2 + 12664),
        (const char (*)[21])"MarkLanV3BoatGameNPC",
        (data::MarkIconType *)(v2 + 3616));
      std::allocator<std::pair<std::string const,data::MarkIconType>>::allocator((std::allocator<std::pair<const std::string,data::MarkIconType> > *const)(v2 + 64));
      std::map<std::string,data::MarkIconType>::map(
        &data::enumStrToVal(std::string const&,data::MarkIconType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MarkIconType> >)__PAIR128__(222LL, v2 + 3824),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::MarkIconType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkIconType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MarkIconType>::~map,
        &data::enumStrToVal(std::string const&,data::MarkIconType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MarkIconType>>::~allocator((std::allocator<std::pair<const std::string,data::MarkIconType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MarkIconType> *)(v2 + 12704);
            i != (std::pair<const std::string,data::MarkIconType> *)(v2 + 3824);
            std::pair<std::string const,data::MarkIconType>::~pair(i) )
      {
        --i;
      }
      e = (data::MarkIconType *)8880;
      __asan_poison_stack_memory(v2 + 3824, 8880LL);
      *(_BYTE *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3600) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3584) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3568) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3536) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3504) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3472) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3456) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3440) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3408) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3376) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3344) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 3632) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 3632) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 3632, e);
    *(std::map<std::string,data::MarkIconType>::iterator *)(v2 + 3632) = std::map<std::string,data::MarkIconType>::find(
                                                                           &data::enumStrToVal(std::string const&,data::MarkIconType &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 3664) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 3664) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 3664, s);
    *(std::map<std::string,data::MarkIconType>::iterator *)(v2 + 3664) = std::map<std::string,data::MarkIconType>::end(&data::enumStrToVal(std::string const&,data::MarkIconType &)::m);
    v7 = (char *)(v2 + 3664);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkIconType> >::_Self *)(v2 + 3632),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkIconType> >::_Self *)(v2 + 3664));
    *(_BYTE *)(((v2 + 3664) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 3760) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 3760) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 3791) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 47) & 7) >= *(_BYTE *)(((v2 + 3791) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 3760, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 3760),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        896);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 3760),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3760));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::MarkIconType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkIconType> > *const)(v2 + 3632));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF864C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 1620) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_8(v2, 12960LL, v16);
  }
  return v13;
};

// Line 904: range 000000001194A321-000000001194AF8D
const char *__cdecl data::getDescription(data::MarkIconType e)
{
  const char *result; // rax

  if ( e == MarkLanV3BoatGameNPC )
    return (const char *)&unk_1A846C20;
  if ( e > MarkLanV3BoatGameNPC )
    return "unknown enum value!";
  if ( e == MarkDuelHeart )
    return (const char *)&unk_1A846BE0;
  if ( e > MarkBrickBreakerDungeon )
    return "unknown enum value!";
  if ( e >= MarkGcgNpcNormal )
  {
    switch ( e )
    {
      case MarkGcgNpcNormal:
        result = (const char *)&unk_1A846920;
        break;
      case MarkGcgNpcFinish:
        result = (const char *)&unk_1A846980;
        break;
      case MarkGcgNpcLock:
        result = (const char *)&unk_1A8469E0;
        break;
      case MarkGcgWeek:
        result = (const char *)&unk_1A846A20;
        break;
      case MarkGcgCat:
        result = (const char *)&unk_1A846A60;
        break;
      case MarkGcgBoard:
        result = (const char *)&unk_1A846AA0;
        break;
      case MarkGcgNpcClear:
        result = (const char *)&unk_1A846AE0;
        break;
      case MarkBrickBreakerWorld:
        result = (const char *)&unk_1A846B40;
        break;
      case MarkBrickBreakerDungeon:
        result = (const char *)&unk_1A846BA0;
        break;
      default:
        return "unknown enum value!";
    }
  }
  else
  {
    if ( e > MarkFungusFighterPlotDungeonEntry )
      return "unknown enum value!";
    if ( e >= MarkReputation_Sumeru )
    {
      switch ( e )
      {
        case MarkReputation_Sumeru:
          result = (const char *)&unk_1A8461C0;
          break;
        case MarkBlacksmith_Sumeru:
          result = (const char *)&unk_1A846200;
          break;
        case MarkSouvenir_Sumeru:
          result = (const char *)&unk_1A846240;
          break;
        case MarkRestaurant_Sumeru:
          result = (const char *)&unk_1A846280;
          break;
        case MarkGravenInnocenceCarveNPC:
          result = (const char *)&unk_1A8462C0;
          break;
        case MarkTreasureHuntExploration:
          result = (const char *)&unk_1A846300;
          break;
        case MarkTreasureHuntExcavation:
          result = (const char *)&unk_1A846340;
          break;
        case MarkInstableSprayDungeonEntry:
          result = (const char *)&unk_1A846380;
          break;
        case MarkMuqadasPotionDungeonEntry:
          result = (const char *)&unk_1A8463C0;
          break;
        case MarkDeshretObeliskChest:
          result = (const char *)&unk_1A83E220;
          break;
        case MarkVanasaraTree:
          result = (const char *)&unk_1A846400;
          break;
        case MarkLibrary_Sumeru:
          result = (const char *)&unk_1A846440;
          break;
        case MarkCafe_Sumeru:
          result = (const char *)&unk_1A846480;
          break;
        case MarkTemple_Sumeru:
          result = (const char *)&unk_1A8464C0;
          break;
        case MarkTalkMainWQ:
          result = (const char *)&unk_1A846500;
          break;
        case MarkFish_Sumeru:
          result = (const char *)&unk_1A846540;
          break;
        case MarkWindFieldEntry:
          result = (const char *)&unk_1A846580;
          break;
        case MarkVintageHuntingStageOneNPC:
          result = (const char *)&unk_1A8465C0;
          break;
        case MarkVintageHuntingStageTwoNPC:
          result = (const char *)&unk_1A846600;
          break;
        case MarkVintageHuntingStageThreeNPC:
          result = (const char *)&unk_1A846640;
          break;
        case MarkVintageMarketDeliverNPC:
          result = (const char *)&unk_1A846680;
          break;
        case MarkVintageMarketBarginNPC:
          result = (const char *)&unk_1A8466E0;
          break;
        case MarkVintageMarketStore:
          result = (const char *)&unk_1A846740;
          break;
        case MarkPOIIndicator:
          result = (const char *)&unk_1A8467A0;
          break;
        case MarkFungusFighterCultivateNPC:
          result = (const char *)&unk_1A8467E0;
          break;
        case MarkEffigyV2:
          result = (const char *)&unk_1A846820;
          break;
        case MarkFungusFighterTrainingDungeonEntry:
          result = (const char *)&unk_1A846860;
          break;
        case MarkFungusFighterPlotDungeonEntry:
          result = (const char *)&unk_1A8468C0;
          break;
        default:
          return "unknown enum value!";
      }
      return result;
    }
    if ( e > MarkArenaChallengeV3 )
      return "unknown enum value!";
    if ( e >= MarkIslandPartyNPC )
    {
      switch ( e )
      {
        case MarkIslandPartyNPC:
          result = (const char *)&unk_1A845EE0;
          break;
        case MarkSummerTimeV2WanyeDungeonEntry:
          result = (const char *)&unk_1A845F20;
          break;
        case MarkSummerTimeV2XinyanDungeonEntry:
          result = (const char *)&unk_1A845F80;
          break;
        case MarkSummerTimeV2FeixieerDungeonEntry:
          result = (const char *)&unk_1A845FE0;
          break;
        case MarkSummerTimeV2MonaDungeonEntry:
          result = (const char *)&unk_1A846040;
          break;
        case MarkSummerTimeV2BoatSummonPoint:
          result = (const char *)&unk_1A8460A0;
          break;
        case MarkGearGameEntry:
          result = (const char *)&unk_1A8460E0;
          break;
        case MarkEchoShellV2:
          result = (const char *)&unk_1A846120;
          break;
        case MarkArenaChallengeV3:
          result = (const char *)&unk_1A846180;
          break;
        default:
          return "unknown enum value!";
      }
    }
    else
    {
      if ( e == MarkCocoonSpace )
        return (const char *)&unk_1A845EA0;
      if ( e > MarkCocoonSpace )
        return "unknown enum value!";
      switch ( e )
      {
        case MarkRogueDiary:
          return (const char *)&unk_1A845E60;
        case MarkActivityGachaNPC:
          return (const char *)&unk_1A845E20;
        case MarkMusicGameV3NPC:
          return (const char *)&unk_1A845DE0;
      }
      if ( e > MarkCustomLevel )
      {
        if ( e > MarkIrodoriChessNPC || e < MarkLuminanceStoneNPC )
          return "unknown enum value!";
        switch ( e )
        {
          case MarkLuminanceStoneNPC:
            result = (const char *)&unk_1A845C20;
            break;
          case MarkCrystalLink:
            result = (const char *)&unk_1A845C60;
            break;
          case MarkQuestAcception:
            result = (const char *)&unk_1A845CA0;
            break;
          case MarkIrodoriFlowerNPC:
            result = (const char *)&unk_1A845CE0;
            break;
          case MarkIrodoriPhotoNPC:
            result = (const char *)&unk_1A845D20;
            break;
          case MarkIrodoriMasterNPC:
            result = (const char *)&unk_1A845D60;
            break;
          case MarkIrodoriChessNPC:
            result = (const char *)&unk_1A845DA0;
            break;
          default:
            return "unknown enum value!";
        }
      }
      else
      {
        if ( e < Default_13 )
          return "unknown enum value!";
        switch ( e )
        {
          case Default_13:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkChurch:
            result = (const char *)&unk_1A843EC0;
            break;
          case MarkKnights:
            result = (const char *)&unk_1A843F00;
            break;
          case MarkPub:
            result = (const char *)&unk_1A843F40;
            break;
          case MarkSouvenir:
            result = (const char *)&unk_1A843F80;
            break;
          case MarkRestaurant:
            result = (const char *)&unk_1A843FC0;
            break;
          case MarkGeneralCargo:
            result = (const char *)&unk_1A844000;
            break;
          case MarkBlacksmith:
            result = (const char *)&unk_1A844040;
            break;
          case MarkTeamArranger:
            result = (const char *)&unk_1A844080;
            break;
          case MarkDailyTask:
            result = (const char *)&unk_1A8440C0;
            break;
          case MarkRandomTask:
            result = (const char *)&unk_1A844100;
            break;
          case MarkAdventurers:
            result = (const char *)&unk_1A844140;
            break;
          case MarkAlchemy:
            result = (const char *)&unk_1A844180;
            break;
          case MarkSeaLampGiving:
            result = (const char *)&unk_1A8441C0;
            break;
          case MarkInvestigationMonster:
            result = (const char *)&unk_1A844200;
            break;
          case MarkBlacksmith_liyue:
            result = (const char *)&unk_1A844040;
            break;
          case MarkSouvenir_liyue:
            result = (const char *)&unk_1A843F80;
            break;
          case MarkRestaurant_liyue:
            result = (const char *)&unk_1A843FC0;
            break;
          case MarkReputation:
            result = (const char *)&unk_1A844240;
            break;
          case MarkReputation_liyue:
            result = (const char *)&unk_1A844280;
            break;
          case MarkReputation_Inazuma:
            result = (const char *)&unk_1A8442C0;
            break;
          case MarkBlacksmith_Inazuma:
            result = (const char *)&unk_1A844300;
            break;
          case MarkSouvenir_Inazuma:
            result = (const char *)&unk_1A844340;
            break;
          case MarkRestaurant_Inazuma:
            result = (const char *)&unk_1A844380;
            break;
          case MarkGroupLink:
            result = (const char *)&unk_1A8443C0;
            break;
          case MarkFish:
            result = (const char *)&unk_1A844400;
            break;
          case MarkFish_liyue:
            result = (const char *)&unk_1A844440;
            break;
          case MarkFish_Inazuma:
            result = (const char *)&unk_1A844480;
            break;
          case MarkGroupLink_Area:
            result = (const char *)&unk_1A8444C0;
            break;
          case MarkGcgPub:
            result = (const char *)&unk_1A844500;
            break;
          case MarkTransPoint:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkTransPointLocked:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkPortal:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkDungeonEntry:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkDungeonEntryLocked:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkWeeklyDungeonEntry:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkWeeklyDungeonEntryLocked:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkDailyDungeonEntry:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkDailyDungeonEntryLocked:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkTowerDungeonEntry:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkTowerDungeonEntryLocked:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkDailyDungeonEntryToBeExplored:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkTowerDungeonEntryToBeExplored:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkEffigyDungeonEntry:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkEffigyDungeonEntryLocked:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkFleurFairDungeonEntry:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkBlitzRushDungeonEntry:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkHachiDungeonEntry:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkMiniEldritchDungeonEntry:
            result = (const char *)&unk_1A844540;
            break;
          case MarkGoddessLocked:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkGoddessUnlocked:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkPacketAnchor:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkQuest:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkDangerousQuest:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkQuestArea:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkDangerousQuestArea:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustom:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomBoss:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomBox:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomCollect:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomCooking:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomMainTask:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomMonster:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomSlime:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomTrap:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomWind:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkCustomFish:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkLocalAvatar:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkPlayer1:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkPlayer2:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkPlayer3:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkPlayer4:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkBoredMonster:
            result = (const char *)&unk_1A83C4E0;
            break;
          case MarkRadarHint:
            result = (const char *)&unk_1A844580;
            break;
          case MarkActivity:
            result = (const char *)&unk_1A8445E0;
            break;
          case MarkTalk:
            result = (const char *)&unk_1A844620;
            break;
          case MarkMiscsMarvs:
            result = (const char *)&unk_1A844660;
            break;
          case MarkActivityAsterLittle:
            result = (const char *)&unk_1A8446A0;
            break;
          case MarkActivityAsterMiddle:
            result = (const char *)&unk_1A8446E0;
            break;
          case MarkRadarHintArea:
            result = (const char *)&unk_1A844720;
            break;
          case MarkActivityAsterlarge:
            result = (const char *)&unk_1A844760;
            break;
          case MarkHuntingArea:
            result = (const char *)&unk_1A8447A0;
            break;
          case MarkActivityAsterMiddleNPC:
            result = (const char *)&unk_1A8447E0;
            break;
          case MarkWidgetSeverDetectorArea:
            result = (const char *)&unk_1A844820;
            break;
          case MarkActivityFlightChallengePoint:
            result = (const char *)&unk_1A83DE60;
            break;
          case MarkElderTree:
            result = (const char *)&unk_1A844880;
            break;
          case MarkElderTreeEvent:
            result = (const char *)&unk_1A8448C0;
            break;
          case MarkWidgetTreasureMapArea:
            result = (const char *)&unk_1A844900;
            break;
          case MarkActivityTreasureMapNPC:
            result = (const char *)&unk_1A844960;
            break;
          case MarkActivityDragonSpineBoss:
            result = (const char *)&unk_1A8449A0;
            break;
          case MarkActivityBlessing:
            result = (const char *)&unk_1A8449E0;
            break;
          case MarkActivityMonsterBannerDrakePrimoRock:
            result = (const char *)&unk_1A844A20;
            break;
          case MarkActivityExpeditionChallengeArea:
            result = (const char *)&unk_1A844A60;
            break;
          case MarkMechanicisNPC:
            result = (const char *)&unk_1A844AA0;
            break;
          case MarkActivityWaterSpriteExploreArea:
            result = (const char *)&unk_1A844AE0;
            break;
          case MarkActivityArenaChallenge:
            result = (const char *)&unk_1A844B20;
            break;
          case MarkActivityFleurFairFall:
            result = (const char *)&unk_1A844B60;
            break;
          case MarkActivityFleurFairBalloon:
            result = (const char *)&unk_1A844BA0;
            break;
          case MarkActivityWaterSpriteBoss:
            result = (const char *)&unk_1A844BE0;
            break;
          case MarkActivitySummerTimeRace:
            result = (const char *)&unk_1A844C20;
            break;
          case MarkActivityRegionSearch:
            result = (const char *)&unk_1A844C60;
            break;
          case MarkGalleryChallenge:
            result = (const char *)&unk_1A844CA0;
            break;
          case MarkActivityFleurFairNPC:
            result = (const char *)&unk_1A844CE0;
            break;
          case MarkChannellerSlabCampLow:
            result = (const char *)&unk_1A844D20;
            break;
          case MarkChannellerSlabCampMiddle:
            result = (const char *)&unk_1A844D60;
            break;
          case MarkChannellerSlabCampHigh:
            result = (const char *)&unk_1A844DA0;
            break;
          case MarkChannellerSlabOneOffDungeon:
            result = (const char *)&unk_1A844DE0;
            break;
          case MarkChannellerSlabLoopDungeon:
            result = (const char *)&unk_1A844E20;
            break;
          case MarkChannellerSlabNPC:
            result = (const char *)&unk_1A844E60;
            break;
          case MarkActivityMiniTomoHiliWeiArea:
            result = (const char *)&unk_1A844EA0;
            break;
          case MarkActivityHideAndSeekNPC:
            result = (const char *)&unk_1A844EE0;
            break;
          case MarkHomeworldDjinn:
            result = (const char *)&unk_1A844F20;
            break;
          case MarkHomeworldDjinnWeekend:
            result = (const char *)&unk_1A844F60;
            break;
          case MarkHomeworldMainHouse:
            result = (const char *)&unk_1A844FA0;
            break;
          case MarkHideAndSeekHunter:
            result = (const char *)&unk_1A844FE0;
            break;
          case MarkActivityBuoyantCombatPoint:
            result = (const char *)&unk_1A845020;
            break;
          case MarkActivityBounceConjuring:
            result = (const char *)&unk_1A845060;
            break;
          case MarkHomeworldNpc:
            result = (const char *)&unk_1A8450A0;
            break;
          case MarkSummerIsleSignalPoint:
            result = (const char *)&unk_1A8450E0;
            break;
          case MarkVehicleSummonPoint:
            result = (const char *)&unk_1A845120;
            break;
          case MarkVehicleSummonPointLocked:
            result = (const char *)&unk_1A845160;
            break;
          case MarkBounceConjuringNPC:
            result = (const char *)&unk_1A8451A0;
            break;
          case MarkVehicleSkiff:
            result = (const char *)&unk_1A8451E0;
            break;
          case MarkHomeworldFurnitureSuite:
            result = (const char *)&unk_1A83E080;
            break;
          case MarkHomeworldTransPoint:
            result = (const char *)&unk_1A845220;
            break;
          case MarkHomeworldSafePoint:
            result = (const char *)&unk_1A845260;
            break;
          case MarkHomeworldFarmField1:
            result = (const char *)&unk_1A8452A0;
            break;
          case MarkHomeworldFarmField2:
            result = (const char *)&unk_1A8452E0;
            break;
          case MarkHomeworldFarmField3:
            result = (const char *)&unk_1A845320;
            break;
          case MarkActivityTreasureMapChallenge:
            result = (const char *)&unk_1A845360;
            break;
          case MarkActivityBlitzRushParkour:
            result = (const char *)&unk_1A8453A0;
            break;
          case MarkActivityPerpetualNPC:
            result = (const char *)&unk_1A8453E0;
            break;
          case MarkOraionokamiTree:
            result = (const char *)&unk_1A845420;
            break;
          case MarkSumoDungeon:
            result = (const char *)&unk_1A845460;
            break;
          case MarkMoonfinTrialChallenge:
            result = (const char *)&unk_1A8454A0;
            break;
          case MarkMoonfinTrialFinal:
            result = (const char *)&unk_1A8454E0;
            break;
          case MarkLunaRiteExploreArea:
            result = (const char *)&unk_1A845520;
            break;
          case MarkLunaRiteNPC:
            result = (const char *)&unk_1A845560;
            break;
          case MarkLunaRiteCrystal:
            result = (const char *)&unk_1A8455A0;
            break;
          case MarkLunaRiteChest:
            result = (const char *)&unk_1A8455E0;
            break;
          case MarkRoguelike:
            result = (const char *)&unk_1A845620;
            break;
          case MarkBugyowu:
            result = (const char *)&unk_1A845660;
            break;
          case MarkChashitsu:
            result = (const char *)&unk_1A8456A0;
            break;
          case MarkHomeworldPaimon:
            result = (const char *)&unk_1A8456E0;
            break;
          case MarkMusicGameNPC:
            result = (const char *)&unk_1A845720;
            break;
          case MarkGrowFlowersNPC:
            result = (const char *)&unk_1A845760;
            break;
          case MarkHachiStealthChallenge:
            result = (const char *)&unk_1A8457A0;
            break;
          case MarkHachiBattleChallenge:
            result = (const char *)&unk_1A8457E0;
            break;
          case MarkWinterCampSnowman:
            result = (const char *)&unk_1A845820;
            break;
          case MarkActivityWinterCampBoss:
            result = (const char *)&unk_1A845880;
            break;
          case MarkAnimalCaptureShop:
            result = (const char *)&unk_1A8458C0;
            break;
          case MarkAlcorTransmit:
            result = (const char *)&unk_1A845900;
            break;
          case MarkQunyugeTransmit:
            result = (const char *)&unk_1A845940;
            break;
          case MarkAshanpoNPC:
            result = (const char *)&unk_1A845980;
            break;
          case MarkPotionDungeonEntry:
            result = (const char *)&unk_1A8459C0;
            break;
          case MarkProjectionGameEntry:
            result = (const char *)&unk_1A845A00;
            break;
          case MarkLanternRiteShipSummonPoint:
            result = (const char *)&unk_1A845A40;
            break;
          case MarkLanternRiteShipSummonPointLocked:
            result = (const char *)&unk_1A845A80;
            break;
          case MarkMichiaeOffering:
            result = (const char *)&unk_1A845AE0;
            break;
          case MarkBartenderNPC:
            result = (const char *)&unk_1A845B20;
            break;
          case MarkMichiaeChest:
            result = (const char *)&unk_1A845B60;
            break;
          case MarkMichiaeChallenge:
            result = (const char *)&unk_1A845BA0;
            break;
          case MarkCustomLevel:
            result = (const char *)&unk_1A845BE0;
            break;
          default:
            return "unknown enum value!";
        }
      }
    }
  }
  return result;
};

// Line 1357: range 000000001194AF8E-000000001194B3DA
const char *__cdecl data::enumValToStr(data::MarkOrder e)
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
  if ( e > QuestAcception_0 )
  {
    if ( e > HomeworldSafePoint || e < HomeworldMainHouse )
      goto LABEL_43;
    switch ( e )
    {
      case HomeworldMainHouse:
        result = "HomeworldMainHouse";
        break;
      case HomeworldFarmField_0:
        result = "HomeworldFarmField";
        break;
      case HomeworldFurnitureSuite_0:
        result = "HomeworldFurnitureSuite";
        break;
      case HomeworldDjinn:
        result = "HomeworldDjinn";
        break;
      case HomeworldNpc:
        result = "HomeworldNpc";
        break;
      case HomeworldTransPoint:
        result = "HomeworldTransPoint";
        break;
      case HomeworldSafePoint:
        result = "HomeworldSafePoint";
        break;
      default:
        goto LABEL_43;
    }
  }
  else
  {
    if ( e < None_57 )
    {
LABEL_43:
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumValToStr",
        1423);
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
      result = (const char *)&unk_1A83C4E0;
      goto LABEL_48;
    }
    switch ( e )
    {
      case None_57:
        result = "None";
        break;
      case LocalPlayer:
        result = "LocalPlayer";
        break;
      case OtherPlayer:
        result = "OtherPlayer";
        break;
      case QuestMain:
        result = "QuestMain";
        break;
      case QuestBranch:
        result = "QuestBranch";
        break;
      case Radar:
        result = "Radar";
        break;
      case TransportGoddess:
        result = "TransportGoddess";
        break;
      case Dungeon:
        result = "Dungeon";
        break;
      case QuestEvent_0:
        result = "QuestEvent";
        break;
      case QuestActivity:
        result = "QuestActivity";
        break;
      case QuestWorld:
        result = "QuestWorld";
        break;
      case QuestRandom:
        result = "QuestRandom";
        break;
      case Ore:
        result = off_1A8480C0;
        break;
      case Activity_1:
        result = "Activity";
        break;
      case Custom_0:
        result = "Custom";
        break;
      case Monster_3:
        result = "Monster";
        break;
      case TransportOther:
        result = "TransportOther";
        break;
      case NpcAdventure:
        result = "NpcAdventure";
        break;
      case NpcActivity:
        result = "NpcActivity";
        break;
      case Area_0:
        result = "Area";
        break;
      case Default_15:
        result = "Default";
        break;
      case NpcOther:
        result = "NpcOther";
        break;
      case Vehicle_2:
        result = "Vehicle";
        break;
      case QuestAcception_0:
        result = "QuestAcception";
        break;
      default:
        goto LABEL_43;
    }
  }
LABEL_48:
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

// Line 1429: range 000000001194B3DB-000000001194CD0E
bool __cdecl data::enumStrToVal(const std::string *s, data::MarkOrder *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::MarkOrder> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MarkOrder> >::pointer v10; // rax
  data::MarkOrder second; // ecx
  char v12; // dl
  bool v13; // bl
  data::MarkOrder *ea; // [rsp+10h] [rbp-8A0h]
  char v16[2192]; // [rsp+20h] [rbp-890h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2144LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "38 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unkn"
                        "own> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> 5"
                        "60 4 9 <unknown> 576 8 7 it:1469 608 8 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 1240 9 <unknown>";
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
  v4[536862734] = -234556924;
  v4[536862735] = -234556924;
  v4[536862736] = -234556924;
  v4[536862737] = -234556924;
  v4[536862738] = -218959360;
  v4[536862739] = -218959360;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862782] = -218103808;
  v4[536862783] = -202116109;
  v4[536862784] = -202116109;
  v4[536862785] = -202116109;
  v4[536862786] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      1432);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 640),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MarkOrder &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkOrder &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[5],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 768),
        (const char (*)[5])"None",
        (data::MarkOrder *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[12],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 808),
        (const char (*)[12])"LocalPlayer",
        (data::MarkOrder *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "LocalPlayer");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[12],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 848),
        (const char (*)[12])"OtherPlayer",
        (data::MarkOrder *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "OtherPlayer");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[10],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 888),
        (const char (*)[10])"QuestMain",
        (data::MarkOrder *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "QuestMain");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[12],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 928),
        (const char (*)[12])"QuestBranch",
        (data::MarkOrder *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "QuestBranch");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[6],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 968),
        (const char (*)[6])"Radar",
        (data::MarkOrder *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "Radar");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[17],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1008),
        (const char (*)[17])"TransportGoddess",
        (data::MarkOrder *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "TransportGoddess");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[8],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1048),
        (const char (*)[8])"Dungeon",
        (data::MarkOrder *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "Dungeon");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[11],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1088),
        (const char (*)[11])"QuestEvent",
        (data::MarkOrder *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "QuestEvent");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[14],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1128),
        (const char (*)[14])"QuestActivity",
        (data::MarkOrder *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "QuestActivity");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[11],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1168),
        (const char (*)[11])"QuestWorld",
        (data::MarkOrder *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "QuestWorld");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[12],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1208),
        (const char (*)[12])"QuestRandom",
        (data::MarkOrder *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "QuestRandom");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[4],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1248),
        (const char (*)[4])off_1A8480C0,
        (data::MarkOrder *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, off_1A8480C0);
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[9],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1288),
        (const char (*)[9])"Activity",
        (data::MarkOrder *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "Activity");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[7],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1328),
        (const char (*)[7])"Custom",
        (data::MarkOrder *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "Custom");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[8],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1368),
        (const char (*)[8])"Monster",
        (data::MarkOrder *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "Monster");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[15],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1408),
        (const char (*)[15])"TransportOther",
        (data::MarkOrder *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "TransportOther");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[13],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1448),
        (const char (*)[13])"NpcAdventure",
        (data::MarkOrder *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "NpcAdventure");
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[12],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1488),
        (const char (*)[12])"NpcActivity",
        (data::MarkOrder *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "NpcActivity");
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[5],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1528),
        (const char (*)[5])"Area",
        (data::MarkOrder *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "Area");
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[8],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1568),
        (const char (*)[8])"Default",
        (data::MarkOrder *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "Default");
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[9],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1608),
        (const char (*)[9])"NpcOther",
        (data::MarkOrder *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "NpcOther");
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[8],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1648),
        (const char (*)[8])"Vehicle",
        (data::MarkOrder *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "Vehicle");
      *(_DWORD *)(v2 + 448) = 23;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[15],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1688),
        (const char (*)[15])"QuestAcception",
        (data::MarkOrder *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "QuestAcception");
      *(_DWORD *)(v2 + 464) = 1001;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[19],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1728),
        (const char (*)[19])"HomeworldMainHouse",
        (data::MarkOrder *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "HomeworldMainHouse");
      *(_DWORD *)(v2 + 480) = 1002;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[19],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1768),
        (const char (*)[19])"HomeworldFarmField",
        (data::MarkOrder *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "HomeworldFarmField");
      *(_DWORD *)(v2 + 496) = 1003;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[24],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1808),
        (const char (*)[24])"HomeworldFurnitureSuite",
        (data::MarkOrder *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "HomeworldFurnitureSuite");
      *(_DWORD *)(v2 + 512) = 1004;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[15],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1848),
        (const char (*)[15])"HomeworldDjinn",
        (data::MarkOrder *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "HomeworldDjinn");
      *(_DWORD *)(v2 + 528) = 1005;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[13],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1888),
        (const char (*)[13])"HomeworldNpc",
        (data::MarkOrder *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "HomeworldNpc");
      *(_DWORD *)(v2 + 544) = 1006;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[20],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1928),
        (const char (*)[20])"HomeworldTransPoint",
        (data::MarkOrder *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "HomeworldTransPoint");
      *(_DWORD *)(v2 + 560) = 1007;
      std::pair<std::string const,data::MarkOrder>::pair<char const(&)[19],data::MarkOrder,true>(
        (std::pair<const std::string,data::MarkOrder> *const)(v2 + 1968),
        (const char (*)[19])"HomeworldSafePoint",
        (data::MarkOrder *)(v2 + 560));
      std::allocator<std::pair<std::string const,data::MarkOrder>>::allocator((std::allocator<std::pair<const std::string,data::MarkOrder> > *const)(v2 + 64));
      std::map<std::string,data::MarkOrder>::map(
        &data::enumStrToVal(std::string const&,data::MarkOrder &)::m,
        (std::initializer_list<std::pair<const std::string,data::MarkOrder> >)__PAIR128__(31LL, v2 + 768),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::MarkOrder>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkOrder &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MarkOrder>::~map,
        &data::enumStrToVal(std::string const&,data::MarkOrder &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MarkOrder>>::~allocator((std::allocator<std::pair<const std::string,data::MarkOrder> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MarkOrder> *)(v2 + 2008);
            i != (std::pair<const std::string,data::MarkOrder> *)(v2 + 768);
            std::pair<std::string const,data::MarkOrder>::~pair(i) )
      {
        --i;
      }
      e = (data::MarkOrder *)1240;
      __asan_poison_stack_memory(v2 + 768, 1240LL);
      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 576, e);
    *(std::map<std::string,data::MarkOrder>::iterator *)(v2 + 576) = std::map<std::string,data::MarkOrder>::find(
                                                                       &data::enumStrToVal(std::string const&,data::MarkOrder &)::m,
                                                                       s);
    *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 608, s);
    *(std::map<std::string,data::MarkOrder>::iterator *)(v2 + 608) = std::map<std::string,data::MarkOrder>::end(&data::enumStrToVal(std::string const&,data::MarkOrder &)::m);
    v7 = (char *)(v2 + 608);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkOrder> >::_Self *)(v2 + 576),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkOrder> >::_Self *)(v2 + 608));
    *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        1472);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 704),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::MarkOrder>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkOrder> > *const)(v2 + 576));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8104) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862745) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450972 - (((_DWORD)v4 + 2147450980) & 0xFFFFFFF8) + 176) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2144LL, v16);
  }
  return v13;
};

// Line 1480: range 000000001194CD0F-000000001194CEF4
const char *__cdecl data::getDescription(data::MarkOrder e)
{
  const char *result; // rax

  if ( e > QuestAcception_0 )
  {
    if ( e > HomeworldSafePoint || e < HomeworldMainHouse )
      return "unknown enum value!";
    switch ( e )
    {
      case HomeworldMainHouse:
        result = (const char *)&unk_1A844FA0;
        break;
      case HomeworldFarmField_0:
        result = (const char *)&unk_1A83E160;
        break;
      case HomeworldFurnitureSuite_0:
        result = (const char *)&unk_1A83E080;
        break;
      case HomeworldDjinn:
        result = (const char *)&unk_1A848CA0;
        break;
      case HomeworldNpc:
        result = (const char *)&unk_1A8450A0;
        break;
      case HomeworldTransPoint:
        result = (const char *)&unk_1A845220;
        break;
      case HomeworldSafePoint:
        result = (const char *)&unk_1A845260;
        break;
      default:
        return "unknown enum value!";
    }
  }
  else
  {
    if ( e < None_57 )
      return "unknown enum value!";
    switch ( e )
    {
      case None_57:
        result = (const char *)&unk_1A8486C0;
        break;
      case LocalPlayer:
        result = (const char *)&unk_1A848700;
        break;
      case OtherPlayer:
        result = (const char *)&unk_1A848740;
        break;
      case QuestMain:
        result = (const char *)&unk_1A848780;
        break;
      case QuestBranch:
        result = (const char *)&unk_1A8487C0;
        break;
      case Radar:
        result = (const char *)&unk_1A848820;
        break;
      case TransportGoddess:
        result = (const char *)&unk_1A848880;
        break;
      case Dungeon:
        result = (const char *)&unk_1A8488C0;
        break;
      case QuestEvent_0:
        result = (const char *)&unk_1A848900;
        break;
      case QuestActivity:
        result = (const char *)&unk_1A848940;
        break;
      case QuestWorld:
        result = (const char *)&unk_1A848980;
        break;
      case QuestRandom:
        result = (const char *)&unk_1A8489C0;
        break;
      case Ore:
        result = (const char *)&unk_1A848A00;
        break;
      case Activity_1:
        result = (const char *)&unk_1A848A40;
        break;
      case Custom_0:
        result = (const char *)&unk_1A848AA0;
        break;
      case Monster_3:
        result = (const char *)&unk_1A848AE0;
        break;
      case TransportOther:
        result = (const char *)&unk_1A848B20;
        break;
      case NpcAdventure:
        result = (const char *)&unk_1A848B60;
        break;
      case NpcActivity:
        result = (const char *)&unk_1A848BA0;
        break;
      case Area_0:
        result = (const char *)&unk_1A848BE0;
        break;
      case Default_15:
        result = (const char *)&unk_1A848C20;
        break;
      case NpcOther:
        result = (const char *)&unk_1A848C60;
        break;
      case Vehicle_2:
        result = (const char *)&unk_1A83E040;
        break;
      case QuestAcception_0:
        result = (const char *)&unk_1A83E1E0;
        break;
      default:
        return "unknown enum value!";
    }
  }
  return result;
};

// Line 1551: range 000000001194CEF5-000000001194D193
const char *__cdecl data::enumValToStr(data::MarkVisibleType e)
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
    case NONE_20:
      result = "NONE";
      break;
    case ALWAYS:
      result = "ALWAYS";
      break;
    case AROUND:
      result = "AROUND";
      break;
    case CONDITION_ONLY:
      result = "CONDITION_ONLY";
      break;
    case OTHER_1:
      result = "OTHER";
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumValToStr",
        1565);
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
      result = (const char *)&unk_1A83C4E0;
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

// Line 1571: range 000000001194D194-000000001194DBFE
bool __cdecl data::enumStrToVal(const std::string *s, data::MarkVisibleType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MarkVisibleType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MarkVisibleType> >::pointer v11; // rax
  data::MarkVisibleType second; // ecx
  char v13; // dl
  data::MarkVisibleType *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 7 it:1585 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unkno"
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      1574);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MarkVisibleType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkVisibleType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::MarkVisibleType>::pair<char const(&)[5],data::MarkVisibleType,true>(
        (std::pair<const std::string,data::MarkVisibleType> *const)(v2 + 336),
        (const char (*)[5])"NONE",
        (data::MarkVisibleType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::MarkVisibleType>::pair<char const(&)[7],data::MarkVisibleType,true>(
        (std::pair<const std::string,data::MarkVisibleType> *const)(v2 + 376),
        (const char (*)[7])"ALWAYS",
        (data::MarkVisibleType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "ALWAYS");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::MarkVisibleType>::pair<char const(&)[7],data::MarkVisibleType,true>(
        (std::pair<const std::string,data::MarkVisibleType> *const)(v2 + 416),
        (const char (*)[7])"AROUND",
        (data::MarkVisibleType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "AROUND");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::MarkVisibleType>::pair<char const(&)[15],data::MarkVisibleType,true>(
        (std::pair<const std::string,data::MarkVisibleType> *const)(v2 + 456),
        (const char (*)[15])"CONDITION_ONLY",
        (data::MarkVisibleType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "CONDITION_ONLY");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::MarkVisibleType>::pair<char const(&)[6],data::MarkVisibleType,true>(
        (std::pair<const std::string,data::MarkVisibleType> *const)(v2 + 496),
        (const char (*)[6])"OTHER",
        (data::MarkVisibleType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::MarkVisibleType>>::allocator((std::allocator<std::pair<const std::string,data::MarkVisibleType> > *const)(v2 + 48));
      std::map<std::string,data::MarkVisibleType>::map(
        &data::enumStrToVal(std::string const&,data::MarkVisibleType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MarkVisibleType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::MarkVisibleType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkVisibleType &)::m);
      e = (data::MarkVisibleType *)&data::enumStrToVal(std::string const&,data::MarkVisibleType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MarkVisibleType>::~map,
        &data::enumStrToVal(std::string const&,data::MarkVisibleType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MarkVisibleType>>::~allocator((std::allocator<std::pair<const std::string,data::MarkVisibleType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MarkVisibleType> *)(v2 + 536);
            i != (std::pair<const std::string,data::MarkVisibleType> *)(v2 + 336);
            std::pair<std::string const,data::MarkVisibleType>::~pair(i) )
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
    *(std::map<std::string,data::MarkVisibleType>::iterator *)(v2 + 144) = std::map<std::string,data::MarkVisibleType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::MarkVisibleType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::MarkVisibleType>::iterator *)(v2 + 176) = std::map<std::string,data::MarkVisibleType>::end(&data::enumStrToVal(std::string const&,data::MarkVisibleType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkVisibleType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkVisibleType> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        1588);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::MarkVisibleType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkVisibleType> > *const)(v2 + 144));
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

// Line 1596: range 000000001194DBFF-000000001194DC64
const char *__cdecl data::getDescription(data::MarkVisibleType e)
{
  const char *result; // rax

  switch ( e )
  {
    case NONE_20:
      result = (const char *)&unk_1A848FA0;
      break;
    case ALWAYS:
      result = (const char *)&unk_1A848FE0;
      break;
    case AROUND:
      result = (const char *)&unk_1A849020;
      break;
    case CONDITION_ONLY:
      result = (const char *)&unk_1A849060;
      break;
    case OTHER_1:
      result = (const char *)&unk_1A8490A0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 1615: range 000000001194DC65-000000001194DF2B
const char *__cdecl data::enumValToStr(data::MarkViewType e)
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
    case NONE_19:
      result = "NONE";
      break;
    case MAP_MARK_NORMAL:
      result = "MAP_MARK_NORMAL";
      break;
    case MAP_MARK_LOCAL_AVATAR:
      result = "MAP_MARK_LOCAL_AVATAR";
      break;
    case MAP_MARK_LOCAL_SIGHT:
      result = "MAP_MARK_LOCAL_SIGHT";
      break;
    case MAP_MARK_SOUTH:
      result = "MAP_MARK_SOUTH";
      break;
    case MAP_MARK_MINI_OTHER:
      result = "MAP_MARK_MINI_OTHER";
      break;
    case MAP_MARK_CUSTOM:
      result = "MAP_MARK_CUSTOM";
      break;
    case OTHER_0:
      result = "OTHER";
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumValToStr",
        1635);
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
      result = (const char *)&unk_1A83C4E0;
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

// Line 1641: range 000000001194DF2C-000000001194EB0F
bool __cdecl data::enumStrToVal(const std::string *s, data::MarkViewType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MarkViewType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MarkViewType> >::pointer v10; // rax
  data::MarkViewType second; // ecx
  char v12; // dl
  data::MarkViewType *ea; // [rsp+10h] [rbp-340h]
  char v14[816]; // [rsp+20h] [rbp-330h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 7 it:165"
                        "8 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 320 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862742] = -202116109;
  v4[536862743] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      1644);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MarkViewType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkViewType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::MarkViewType>::pair<char const(&)[5],data::MarkViewType,true>(
        (std::pair<const std::string,data::MarkViewType> *const)(v2 + 384),
        (const char (*)[5])"NONE",
        (data::MarkViewType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::MarkViewType>::pair<char const(&)[16],data::MarkViewType,true>(
        (std::pair<const std::string,data::MarkViewType> *const)(v2 + 424),
        (const char (*)[16])"MAP_MARK_NORMAL",
        (data::MarkViewType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "MAP_MARK_NORMAL");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::MarkViewType>::pair<char const(&)[22],data::MarkViewType,true>(
        (std::pair<const std::string,data::MarkViewType> *const)(v2 + 464),
        (const char (*)[22])"MAP_MARK_LOCAL_AVATAR",
        (data::MarkViewType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "MAP_MARK_LOCAL_AVATAR");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::MarkViewType>::pair<char const(&)[21],data::MarkViewType,true>(
        (std::pair<const std::string,data::MarkViewType> *const)(v2 + 504),
        (const char (*)[21])"MAP_MARK_LOCAL_SIGHT",
        (data::MarkViewType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "MAP_MARK_LOCAL_SIGHT");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::MarkViewType>::pair<char const(&)[15],data::MarkViewType,true>(
        (std::pair<const std::string,data::MarkViewType> *const)(v2 + 544),
        (const char (*)[15])"MAP_MARK_SOUTH",
        (data::MarkViewType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "MAP_MARK_SOUTH");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::MarkViewType>::pair<char const(&)[20],data::MarkViewType,true>(
        (std::pair<const std::string,data::MarkViewType> *const)(v2 + 584),
        (const char (*)[20])"MAP_MARK_MINI_OTHER",
        (data::MarkViewType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "MAP_MARK_MINI_OTHER");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::MarkViewType>::pair<char const(&)[16],data::MarkViewType,true>(
        (std::pair<const std::string,data::MarkViewType> *const)(v2 + 624),
        (const char (*)[16])"MAP_MARK_CUSTOM",
        (data::MarkViewType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "MAP_MARK_CUSTOM");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::MarkViewType>::pair<char const(&)[6],data::MarkViewType,true>(
        (std::pair<const std::string,data::MarkViewType> *const)(v2 + 664),
        (const char (*)[6])"OTHER",
        (data::MarkViewType *)(v2 + 176));
      std::allocator<std::pair<std::string const,data::MarkViewType>>::allocator((std::allocator<std::pair<const std::string,data::MarkViewType> > *const)(v2 + 48));
      std::map<std::string,data::MarkViewType>::map(
        &data::enumStrToVal(std::string const&,data::MarkViewType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MarkViewType> >)__PAIR128__(8LL, v2 + 384),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::MarkViewType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkViewType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MarkViewType>::~map,
        &data::enumStrToVal(std::string const&,data::MarkViewType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MarkViewType>>::~allocator((std::allocator<std::pair<const std::string,data::MarkViewType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MarkViewType> *)(v2 + 704);
            i != (std::pair<const std::string,data::MarkViewType> *)(v2 + 384);
            std::pair<std::string const,data::MarkViewType>::~pair(i) )
      {
        --i;
      }
      e = (data::MarkViewType *)320;
      __asan_poison_stack_memory(v2 + 384, 320LL);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, e);
    *(std::map<std::string,data::MarkViewType>::iterator *)(v2 + 192) = std::map<std::string,data::MarkViewType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::MarkViewType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, s);
    *(std::map<std::string,data::MarkViewType>::iterator *)(v2 + 224) = std::map<std::string,data::MarkViewType>::end(&data::enumStrToVal(std::string const&,data::MarkViewType &)::m);
    v7 = (char *)(v2 + 224);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkViewType> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkViewType> >::_Self *)(v2 + 224));
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        1661);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::MarkViewType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkViewType> > *const)(v2 + 192));
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

// Line 1669: range 000000001194EB10-000000001194EB90
const char *__cdecl data::getDescription(data::MarkViewType e)
{
  const char *result; // rax

  switch ( e )
  {
    case NONE_19:
      result = (const char *)&unk_1A8493C0;
      break;
    case MAP_MARK_NORMAL:
      result = (const char *)&unk_1A849400;
      break;
    case MAP_MARK_LOCAL_AVATAR:
      result = (const char *)&unk_1A849480;
      break;
    case MAP_MARK_LOCAL_SIGHT:
      result = (const char *)&unk_1A849500;
      break;
    case MAP_MARK_SOUTH:
      result = (const char *)&unk_1A849580;
      break;
    case MAP_MARK_MINI_OTHER:
      result = (const char *)&unk_1A8495C0;
      break;
    case MAP_MARK_CUSTOM:
      result = (const char *)&unk_1A849620;
      break;
    case OTHER_0:
      result = (const char *)&unk_1A8490A0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 1694: range 000000001194EB91-000000001194EE0E
const char *__cdecl data::enumValToStr(data::MarkCustomType e)
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
  if ( e == OTHER_2 )
  {
    result = "OTHER";
  }
  else
  {
    if ( e > OTHER_2 )
      goto LABEL_22;
    if ( e == RedCircle )
    {
      result = "RedCircle";
      goto LABEL_17;
    }
    if ( e == BlueCircle )
    {
      result = "BlueCircle";
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumValToStr",
        1704);
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
      result = (const char *)&unk_1A83C4E0;
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

// Line 1710: range 000000001194EE0F-000000001194F6F0
bool __cdecl data::enumStrToVal(const std::string *s, data::MarkCustomType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MarkCustomType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MarkCustomType> >::pointer v11; // rax
  data::MarkCustomType second; // ecx
  char v13; // dl
  data::MarkCustomType *ea; // [rsp+10h] [rbp-220h]
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
                        " it:1722 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      1713);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MarkCustomType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkCustomType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::MarkCustomType>::pair<char const(&)[10],data::MarkCustomType,true>(
        (std::pair<const std::string,data::MarkCustomType> *const)(v2 + 320),
        (const char (*)[10])"RedCircle",
        (data::MarkCustomType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "RedCircle");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::MarkCustomType>::pair<char const(&)[11],data::MarkCustomType,true>(
        (std::pair<const std::string,data::MarkCustomType> *const)(v2 + 360),
        (const char (*)[11])"BlueCircle",
        (data::MarkCustomType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "BlueCircle");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::MarkCustomType>::pair<char const(&)[6],data::MarkCustomType,true>(
        (std::pair<const std::string,data::MarkCustomType> *const)(v2 + 400),
        (const char (*)[6])"OTHER",
        (data::MarkCustomType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::MarkCustomType>>::allocator((std::allocator<std::pair<const std::string,data::MarkCustomType> > *const)(v2 + 64));
      std::map<std::string,data::MarkCustomType>::map(
        &data::enumStrToVal(std::string const&,data::MarkCustomType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MarkCustomType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::MarkCustomType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkCustomType &)::m);
      e = (data::MarkCustomType *)&data::enumStrToVal(std::string const&,data::MarkCustomType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MarkCustomType>::~map,
        &data::enumStrToVal(std::string const&,data::MarkCustomType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MarkCustomType>>::~allocator((std::allocator<std::pair<const std::string,data::MarkCustomType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MarkCustomType> *)(v2 + 440);
            i != (std::pair<const std::string,data::MarkCustomType> *)(v2 + 320);
            std::pair<std::string const,data::MarkCustomType>::~pair(i) )
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
    *(std::map<std::string,data::MarkCustomType>::iterator *)(v2 + 128) = std::map<std::string,data::MarkCustomType>::find(
                                                                            &data::enumStrToVal(std::string const&,data::MarkCustomType &)::m,
                                                                            s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::MarkCustomType>::iterator *)(v2 + 160) = std::map<std::string,data::MarkCustomType>::end(&data::enumStrToVal(std::string const&,data::MarkCustomType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkCustomType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkCustomType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        1725);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::MarkCustomType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkCustomType> > *const)(v2 + 128));
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

// Line 1733: range 000000001194F6F1-000000001194F735
const char *__cdecl data::getDescription(data::MarkCustomType e)
{
  if ( e == OTHER_2 )
    return (const char *)&unk_1A8490A0;
  if ( e > OTHER_2 )
    return "unknown enum value!";
  if ( e == RedCircle )
    return (const char *)&unk_1A849800;
  if ( e == BlueCircle )
    return (const char *)&unk_1A849840;
  else
    return "unknown enum value!";
};

// Line 1748: range 000000001194F736-000000001194F9B3
const char *__cdecl data::enumValToStr(data::MarkLayerType e)
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
  if ( e == LAST )
  {
    result = "LAST";
  }
  else
  {
    if ( e > LAST )
      goto LABEL_22;
    if ( e == NORMAL_3 )
    {
      result = "NORMAL";
      goto LABEL_17;
    }
    if ( e == FIRST )
    {
      result = "FIRST";
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumValToStr",
        1758);
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
      result = (const char *)&unk_1A83C4E0;
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

// Line 1764: range 000000001194F9B4-0000000011950295
bool __cdecl data::enumStrToVal(const std::string *s, data::MarkLayerType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MarkLayerType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MarkLayerType> >::pointer v11; // rax
  data::MarkLayerType second; // ecx
  char v13; // dl
  data::MarkLayerType *ea; // [rsp+10h] [rbp-220h]
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
                        " it:1776 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      1767);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MarkLayerType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkLayerType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::MarkLayerType>::pair<char const(&)[7],data::MarkLayerType,true>(
        (std::pair<const std::string,data::MarkLayerType> *const)(v2 + 320),
        (const char (*)[7])"NORMAL",
        (data::MarkLayerType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "NORMAL");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::MarkLayerType>::pair<char const(&)[6],data::MarkLayerType,true>(
        (std::pair<const std::string,data::MarkLayerType> *const)(v2 + 360),
        (const char (*)[6])"FIRST",
        (data::MarkLayerType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "FIRST");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::MarkLayerType>::pair<char const(&)[5],data::MarkLayerType,true>(
        (std::pair<const std::string,data::MarkLayerType> *const)(v2 + 400),
        (const char (*)[5])"LAST",
        (data::MarkLayerType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::MarkLayerType>>::allocator((std::allocator<std::pair<const std::string,data::MarkLayerType> > *const)(v2 + 64));
      std::map<std::string,data::MarkLayerType>::map(
        &data::enumStrToVal(std::string const&,data::MarkLayerType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MarkLayerType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::MarkLayerType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkLayerType &)::m);
      e = (data::MarkLayerType *)&data::enumStrToVal(std::string const&,data::MarkLayerType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MarkLayerType>::~map,
        &data::enumStrToVal(std::string const&,data::MarkLayerType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MarkLayerType>>::~allocator((std::allocator<std::pair<const std::string,data::MarkLayerType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MarkLayerType> *)(v2 + 440);
            i != (std::pair<const std::string,data::MarkLayerType> *)(v2 + 320);
            std::pair<std::string const,data::MarkLayerType>::~pair(i) )
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
    *(std::map<std::string,data::MarkLayerType>::iterator *)(v2 + 128) = std::map<std::string,data::MarkLayerType>::find(
                                                                           &data::enumStrToVal(std::string const&,data::MarkLayerType &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::MarkLayerType>::iterator *)(v2 + 160) = std::map<std::string,data::MarkLayerType>::end(&data::enumStrToVal(std::string const&,data::MarkLayerType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkLayerType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkLayerType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        1779);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::MarkLayerType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkLayerType> > *const)(v2 + 128));
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

// Line 1787: range 0000000011950296-00000000119502DA
const char *__cdecl data::getDescription(data::MarkLayerType e)
{
  if ( e == LAST )
    return (const char *)&unk_1A849A80;
  if ( e > LAST )
    return "unknown enum value!";
  if ( e == NORMAL_3 )
    return (const char *)&unk_1A849A00;
  if ( e == FIRST )
    return (const char *)&unk_1A849A40;
  else
    return "unknown enum value!";
};

// Line 1802: range 00000000119502DB-000000001195063C
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigVBaseMarkList *v)
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
  *(_QWORD *)(v2 + 8) = "2 32 16 13 elem_ptr:1808 64 32 9 <unknown>";
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
      data::ConfigVBaseMark::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigVBaseMark>((const std::shared_ptr<data::ConfigVBaseMark> *)(v2 + 32), 0LL) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "vecFromJson",
          1811);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[41])"elem_ptr is nullptr: ConfigVBaseMarkList");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigVBaseMark>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigVBaseMark>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigVBaseMark>::~shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)(v2 + 32));
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

// Line 1821: range 000000001195063D-00000000119508F8
int32_t __cdecl data::getVecHashValue(const data::ConfigVBaseMarkList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigVBaseMark> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1822 64 8 16 __for_begin:1823 96 8 14 __for_end:1823";
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
  *(std::vector<std::shared_ptr<data::ConfigVBaseMark>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigVBaseMark>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigVBaseMark>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigVBaseMark>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigVBaseMark> const*,std::vector<std::shared_ptr<data::ConfigVBaseMark>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVBaseMark>*,std::vector<std::shared_ptr<data::ConfigVBaseMark>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVBaseMark>*,std::vector<std::shared_ptr<data::ConfigVBaseMark>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigVBaseMark> const*,std::vector<std::shared_ptr<data::ConfigVBaseMark>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVBaseMark>*,std::vector<std::shared_ptr<data::ConfigVBaseMark>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigVBaseMark>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigVBaseMark> const*,std::vector<std::shared_ptr<data::ConfigVBaseMark>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVBaseMark>*,std::vector<std::shared_ptr<data::ConfigVBaseMark>> > *const)(v2 + 64));
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

// Line 1835: range 00000000119508F9-0000000011950B2E
data::ConfigLBaseMarkPtr __cdecl data::createConfigLBaseMark(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigLBaseMark>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigLBaseMarkPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > >::_Base_ptr)"2 32 8 7 it:1836 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > >::_Base_ptr)data::createConfigLBaseMark;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigLBaseMark>>::find(
                    &data::g_ConfigLBaseMarkMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigLBaseMark>>::end(&data::g_ConfigLBaseMarkMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigLBaseMark>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigLBaseMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLBaseMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigLBaseMark>::shared_ptr((std::shared_ptr<data::ConfigLBaseMark> *const)name, 0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigLBaseMark,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 1842: range 0000000011950B30-0000000011950CB9
void __cdecl data::ConfigLBaseMark::foreachMember(
        data::ConfigLBaseMark *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 17 priority_any:1843 64 16 14 views_any:1845";
  *(_QWORD *)(v2 + 16) = data::ConfigLBaseMark::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>((std::any *const)(v2 + 32), &this->priority);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::any<std::vector<std::shared_ptr<data::ConfigVBaseMark>> &,std::vector<std::shared_ptr<data::ConfigVBaseMark>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigVBaseMark>>>,true,true>(
    (std::any *const)(v2 + 64),
    &this->views);
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

// Line 1850: range 0000000011950CBA-0000000011950D04
std::shared_ptr<data::ConfigLBaseMark> __cdecl data::ConfigLBaseMark::clone(data::ConfigLBaseMark *const this)
{
  data::ConfigLBaseMark *v1; // rsi
  std::shared_ptr<data::ConfigLBaseMark> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigLBaseMark,data::ConfigLBaseMark&>(
    (common::tools::perf::allocator<data::ConfigLBaseMark,data::ConfigLBaseMark> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 1854: range 0000000011950D06-00000000119512ED
bool __cdecl data::ConfigLBaseMark::fromJson(data::ConfigLBaseMark *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigVBaseMarkList *p_views; // rsi
  const Json::Value *priority_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *views_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigLBaseMark::fromJson;
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
    "priority",
    (const std::allocator<char> *)(v2 + 32));
  priority_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
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
      "./src/json_data_auto/ConfigMark.cpp",
      "fromJson",
      1864);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[30])"fromJson for: priority fails!");
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
      "views",
      (const std::allocator<char> *)(v2 + 48));
    p_views = (data::ConfigVBaseMarkList *)(v2 + 192);
    views_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( views_ptr && (p_views = &this->views, !data::vecFromJson(views_ptr, &this->views)) )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "fromJson",
        1876);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[27])"fromJson for: views fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_views, &this->is_json_loaded);
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

// Line 1883: range 00000000119512EE-0000000011951C43
data::ConfigLBaseMarkPtr __cdecl data::ConfigLBaseMark::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigLBaseMarkPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 8 ptr:1896 96 32 9 <unknown> 160 32 9 <unknown> 224 32 14 type_name:189"
                        "0 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLBaseMark::parseFromJson;
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
        "./src/json_data_auto/ConfigMark.cpp",
        "parseFromJson",
        1893);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[43])"fromJson for: ConfigLBaseMark $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigLBaseMark>::shared_ptr((std::shared_ptr<data::ConfigLBaseMark> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigLBaseMark((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigLBaseMark>((const std::shared_ptr<data::ConfigLBaseMark> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "parseFromJson",
          1899);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[41])"create ConfigLBaseMark fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigLBaseMark>::shared_ptr((std::shared_ptr<data::ConfigLBaseMark> *const)jval, 0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigLBaseMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLBaseMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ConfigMark.cpp",
            "parseFromJson",
            1904);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigLBaseMark>::shared_ptr((std::shared_ptr<data::ConfigLBaseMark> *const)jval, 0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigLBaseMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLBaseMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 56, v1, v12);
          *(_BYTE *)(v10 + 56) = 1;
          std::shared_ptr<data::ConfigLBaseMark>::shared_ptr(
            (std::shared_ptr<data::ConfigLBaseMark> *const)jval,
            (std::shared_ptr<data::ConfigLBaseMark> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigLBaseMark>::~shared_ptr((std::shared_ptr<data::ConfigLBaseMark> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigMark.cpp",
      "parseFromJson",
      1887);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[48])"jsonValueFind for: ConfigLBaseMark $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigLBaseMark>::shared_ptr((std::shared_ptr<data::ConfigLBaseMark> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigLBaseMark,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1912: range 0000000011951C44-0000000011951DCB
int32_t __cdecl data::ConfigLBaseMark::getHashValue(const data::ConfigLBaseMark *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1913";
  *(_QWORD *)(v2 + 16) = data::ConfigLBaseMark::getHashValue;
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
  VecHashValue = data::getVecHashValue(&this->views);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
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

// Line 1923: range 0000000011A50656-0000000011A50897
void __cdecl data::ConfigLMapMarkRegister::ConfigLMapMarkRegister(data::ConfigLMapMarkRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigLBaseMark> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigLMapMarkRegister::ConfigLMapMarkRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigLMapMark>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigLMapMark",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigLBaseMark>>::operator[](
         &data::g_ConfigLBaseMarkMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigLBaseMark>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigLBaseMark>::operator=<data::ConfigLMapMark>(
    v4,
    (std::shared_ptr<data::ConfigLMapMark> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigLMapMark>::~shared_ptr((std::shared_ptr<data::ConfigLMapMark> *const)(v1 + 64));
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

// Line 1926: range 0000000011951DCC-0000000011951EFF
void __cdecl data::ConfigLMapMark::foreachMember(
        data::ConfigLMapMark *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigLMapMark::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigLBaseMark::foreachMember(this, v2 + 1);
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

// Line 1931: range 0000000011951F00-0000000011952010
std::shared_ptr<data::ConfigLBaseMark> __cdecl data::ConfigLMapMark::clone(data::ConfigLMapMark *const this)
{
  data::ConfigLMapMark *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigLBaseMark> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigLMapMark::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigLMapMark,data::ConfigLMapMark&>(
    (common::tools::perf::allocator<data::ConfigLMapMark,data::ConfigLMapMark> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigLBaseMark>::shared_ptr<data::ConfigLMapMark,void>(
    (std::shared_ptr<data::ConfigLBaseMark> *const)this,
    (std::shared_ptr<data::ConfigLMapMark> *)(v2 + 32));
  std::shared_ptr<data::ConfigLMapMark>::~shared_ptr((std::shared_ptr<data::ConfigLMapMark> *const)(v2 + 32));
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

// Line 1935: range 0000000011952012-0000000011952055
data::ConfigLMapMarkPtr __cdecl data::ConfigLMapMarkFactory::create(data::ConfigLMapMarkFactory *const this)
{
  data::ConfigLMapMarkPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigLMapMark>();
  result._M_ptr = (std::__shared_ptr<data::ConfigLMapMark,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1937: range 0000000011952056-0000000011952269
bool __cdecl data::ConfigLMapMark::fromJson(data::ConfigLMapMark *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLMapMark::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigLBaseMark::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigMark.cpp",
      "fromJson",
      1940);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[37])"fromJson for: ConfigLBaseMark fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1947: range 000000001195226A-0000000011952DB0
data::ConfigLMapMarkPtr __cdecl data::ConfigLMapMark::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigLMapMarkPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1960 96 16 8 ptr:1966 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1954 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLMapMark::parseFromJson;
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
        "./src/json_data_auto/ConfigMark.cpp",
        "parseFromJson",
        1957);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[42])"fromJson for: ConfigLMapMark $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigLMapMark>::shared_ptr((std::shared_ptr<data::ConfigLMapMark> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigLBaseMark((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigLBaseMark>((const std::shared_ptr<data::ConfigLBaseMark> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "parseFromJson",
          1963);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigLBaseMark fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigLMapMark>::shared_ptr((std::shared_ptr<data::ConfigLMapMark> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigLMapMark,data::ConfigLBaseMark>((const std::shared_ptr<data::ConfigLBaseMark> *)(v2 + 96));
        if ( std::operator==<data::ConfigLMapMark>((const std::shared_ptr<data::ConfigLMapMark> *)(v2 + 96), 0LL) )
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
            "./src/json_data_auto/ConfigMark.cpp",
            "parseFromJson",
            1969);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[33])"cast to ConfigLMapMarkPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigLMapMark>::shared_ptr((std::shared_ptr<data::ConfigLMapMark> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigLMapMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLMapMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigMark.cpp",
              "parseFromJson",
              1974);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigLMapMark>::shared_ptr((std::shared_ptr<data::ConfigLMapMark> *const)jval, 0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigLMapMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLMapMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigLMapMark>::shared_ptr(
              (std::shared_ptr<data::ConfigLMapMark> *const)jval,
              (std::shared_ptr<data::ConfigLMapMark> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigLMapMark>::~shared_ptr((std::shared_ptr<data::ConfigLMapMark> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigLBaseMark>::~shared_ptr((std::shared_ptr<data::ConfigLBaseMark> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigMark.cpp",
      "parseFromJson",
      1951);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[47])"jsonValueFind for: ConfigLMapMark $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigLMapMark>::shared_ptr((std::shared_ptr<data::ConfigLMapMark> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigLMapMark,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1982: range 0000000011952DB2-0000000011952DD1
int32_t __cdecl data::ConfigLMapMark::getHashValue(const data::ConfigLMapMark *const this)
{
  return data::ConfigLBaseMark::getHashValue(this);
};

// Line 1989: range 0000000011952DD2-0000000011953007
data::ConfigVBaseMarkPtr __cdecl data::createConfigVBaseMark(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigVBaseMarkPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > >::_Base_ptr)"2 32 8 7 it:1990 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > >::_Base_ptr)data::createConfigVBaseMark;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::find(
                    &data::g_ConfigVBaseMarkMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::end(&data::g_ConfigVBaseMarkMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigVBaseMark>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigVBaseMark>::shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)name, 0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 1996: range 0000000011953008-0000000011953191
void __cdecl data::ConfigVBaseMark::foreachMember(
        data::ConfigVBaseMark *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 13 type_any:1997 64 16 17 res_path_any:1999";
  *(_QWORD *)(v2 + 16) = data::ConfigVBaseMark::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::any::any<data::MarkViewType &,data::MarkViewType,std::any::_Manager_internal<data::MarkViewType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 64),
    &this->res_path);
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

// Line 2004: range 0000000011953192-00000000119531DC
std::shared_ptr<data::ConfigVBaseMark> __cdecl data::ConfigVBaseMark::clone(data::ConfigVBaseMark *const this)
{
  data::ConfigVBaseMark *v1; // rsi
  std::shared_ptr<data::ConfigVBaseMark> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVBaseMark,data::ConfigVBaseMark&>(
    (common::tools::perf::allocator<data::ConfigVBaseMark,data::ConfigVBaseMark> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 2008: range 00000000119531DE-00000000119538C2
bool __cdecl data::ConfigVBaseMark::fromJson(data::ConfigVBaseMark *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  std::string *p_res_path; // rsi
  Json::Value *type_ptr; // [rsp+10h] [rbp-1C0h]
  const Json::Value *res_path_ptr; // [rsp+18h] [rbp-1B8h]
  char v11[432]; // [rsp+20h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVBaseMark::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "type",
    (const std::allocator<char> *)(v2 + 32));
  type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->type);
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      "./src/json_data_auto/ConfigMark.cpp",
      "fromJson",
      2018);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[26])"fromJson for: type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "resPath",
      (const std::allocator<char> *)(v2 + 48));
    p_res_path = (std::string *)(v2 + 256);
    res_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( res_path_ptr && (p_res_path = &this->res_path, !fromJson<std::string>(res_path_ptr, &this->res_path)) )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "fromJson",
        2030);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[29])"fromJson for: resPath fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_res_path, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 2037: range 00000000119538C4-0000000011954219
data::ConfigVBaseMarkPtr __cdecl data::ConfigVBaseMark::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigVBaseMarkPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 8 ptr:2050 96 32 9 <unknown> 160 32 9 <unknown> 224 32 14 type_name:204"
                        "4 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVBaseMark::parseFromJson;
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
        "./src/json_data_auto/ConfigMark.cpp",
        "parseFromJson",
        2047);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[43])"fromJson for: ConfigVBaseMark $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigVBaseMark>::shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigVBaseMark((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigVBaseMark>((const std::shared_ptr<data::ConfigVBaseMark> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "parseFromJson",
          2053);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[41])"create ConfigVBaseMark fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigVBaseMark>::shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)jval, 0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ConfigMark.cpp",
            "parseFromJson",
            2058);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigVBaseMark>::shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)jval, 0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 64) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 64, v1, v12);
          *(_BYTE *)(v10 + 64) = 1;
          std::shared_ptr<data::ConfigVBaseMark>::shared_ptr(
            (std::shared_ptr<data::ConfigVBaseMark> *const)jval,
            (std::shared_ptr<data::ConfigVBaseMark> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigVBaseMark>::~shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigMark.cpp",
      "parseFromJson",
      2041);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[48])"jsonValueFind for: ConfigVBaseMark $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigVBaseMark>::shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 2066: range 000000001195421A-0000000011954398
int32_t __cdecl data::ConfigVBaseMark::getHashValue(const data::ConfigVBaseMark *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2067";
  *(_QWORD *)(v2 + 16) = data::ConfigVBaseMark::getHashValue;
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
  common::tools::HashUtils::appendHash(&this->res_path, (int32_t *)(v2 + 32));
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

// Line 2077: range 0000000011A50958-0000000011A50B99
void __cdecl data::ConfigVMapMarkRegister::ConfigVMapMarkRegister(data::ConfigVMapMarkRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigVBaseMark> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigVMapMarkRegister::ConfigVMapMarkRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVMapMark>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigVMapMark",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::operator[](
         &data::g_ConfigVBaseMarkMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigVBaseMark>::operator=<data::ConfigVMapMark>(
    v4,
    (std::shared_ptr<data::ConfigVMapMark> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigVMapMark>::~shared_ptr((std::shared_ptr<data::ConfigVMapMark> *const)(v1 + 64));
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

// Line 2080: range 000000001195439A-0000000011954678
void __cdecl data::ConfigVMapMark::foreachMember(
        data::ConfigVMapMark *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 30 visible_type_mini_map_any:2082 64 16 31 visible_type_level_map_any:2084 96 16 19 laye"
                        "r_type_any:2086 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVMapMark::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 128), p_func);
  data::ConfigVBaseMark::foreachMember((data::ConfigVBaseMark *const)this, (std::function<void(std::any&)> *)(v2 + 128));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::MarkVisibleType &,data::MarkVisibleType,std::any::_Manager_internal<data::MarkVisibleType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->visible_type_mini_map);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::MarkVisibleType &,data::MarkVisibleType,std::any::_Manager_internal<data::MarkVisibleType>,true,true>(
    (std::any *const)(v2 + 64),
    &this->visible_type_level_map);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::MarkLayerType &,data::MarkLayerType,std::any::_Manager_internal<data::MarkLayerType>,true,true>(
    (std::any *const)(v2 + 96),
    &this->layer_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 2091: range 000000001195467A-000000001195478A
std::shared_ptr<data::ConfigVBaseMark> __cdecl data::ConfigVMapMark::clone(data::ConfigVMapMark *const this)
{
  data::ConfigVMapMark *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigVBaseMark> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigVMapMark::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVMapMark,data::ConfigVMapMark&>(
    (common::tools::perf::allocator<data::ConfigVMapMark,data::ConfigVMapMark> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigVBaseMark>::shared_ptr<data::ConfigVMapMark,void>(
    (std::shared_ptr<data::ConfigVBaseMark> *const)this,
    (std::shared_ptr<data::ConfigVMapMark> *)(v2 + 32));
  std::shared_ptr<data::ConfigVMapMark>::~shared_ptr((std::shared_ptr<data::ConfigVMapMark> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2095: range 000000001195478C-0000000011955459
bool __cdecl data::ConfigVMapMark::fromJson(data::ConfigVMapMark *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  bool v7; // r14
  data::MarkLayerType *p_layer_type; // rsi
  bool v9; // r14
  Json::Value *visible_type_mini_map_ptr; // [rsp+18h] [rbp-328h]
  Json::Value *visible_type_level_map_ptr; // [rsp+20h] [rbp-320h]
  Json::Value *layer_type_ptr; // [rsp+28h] [rbp-318h]
  char v14[784]; // [rsp+30h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32"
                        " 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVMapMark::fromJson;
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
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -202116109;
  if ( !data::ConfigVBaseMark::fromJson((data::ConfigVBaseMark *const)this, jval) )
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
      "./src/json_data_auto/ConfigMark.cpp",
      "fromJson",
      2098);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[37])"fromJson for: ConfigVBaseMark fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "visibleTypeMiniMap",
      (const std::allocator<char> *)(v2 + 48));
    visible_type_mini_map_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !visible_type_mini_map_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 224), (Json::Value_0 *)visible_type_mini_map_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 224), &this->visible_type_mini_map);
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "fromJson",
        2110);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[40])"fromJson for: visibleTypeMiniMap fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
LABEL_15:
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "visibleTypeLevelMap",
        (const std::allocator<char> *)(v2 + 64));
      visible_type_level_map_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !visible_type_level_map_ptr )
        goto LABEL_22;
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 416), (Json::Value_0 *)visible_type_level_map_ptr);
      v7 = !data::enumStrToVal((const std::string *)(v2 + 416), &this->visible_type_level_map);
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v7 )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "fromJson",
          2122);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[41])"fromJson for: visibleTypeLevelMap fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = 0;
      }
      else
      {
LABEL_22:
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          "layerType",
          (const std::allocator<char> *)(v2 + 80));
        p_layer_type = (data::MarkLayerType *)(v2 + 544);
        layer_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 544));
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !layer_type_ptr )
          goto LABEL_29;
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 608, 32LL);
        }
        Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 608), (Json::Value_0 *)layer_type_ptr);
        p_layer_type = &this->layer_type;
        v9 = !data::enumStrToVal((const std::string *)(v2 + 608), &this->layer_type);
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        if ( v9 )
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
            "./src/json_data_auto/ConfigMark.cpp",
            "fromJson",
            2134);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[31])"fromJson for: layerType fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          result = 0;
        }
        else
        {
LABEL_29:
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_layer_type, &this->is_json_loaded);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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

// Line 2141: range 000000001195545A-0000000011955FA0
data::ConfigVMapMarkPtr __cdecl data::ConfigVMapMark::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigVMapMarkPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:2154 96 16 8 ptr:2160 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:2148 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVMapMark::parseFromJson;
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
        "./src/json_data_auto/ConfigMark.cpp",
        "parseFromJson",
        2151);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[42])"fromJson for: ConfigVMapMark $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigVMapMark>::shared_ptr((std::shared_ptr<data::ConfigVMapMark> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigVBaseMark((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigVBaseMark>((const std::shared_ptr<data::ConfigVBaseMark> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "parseFromJson",
          2157);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigVBaseMark fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigVMapMark>::shared_ptr((std::shared_ptr<data::ConfigVMapMark> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigVMapMark,data::ConfigVBaseMark>((const std::shared_ptr<data::ConfigVBaseMark> *)(v2 + 96));
        if ( std::operator==<data::ConfigVMapMark>((const std::shared_ptr<data::ConfigVMapMark> *)(v2 + 96), 0LL) )
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
            "./src/json_data_auto/ConfigMark.cpp",
            "parseFromJson",
            2163);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[33])"cast to ConfigVMapMarkPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigVMapMark>::shared_ptr((std::shared_ptr<data::ConfigVMapMark> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVMapMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVMapMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigMark.cpp",
              "parseFromJson",
              2168);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigVMapMark>::shared_ptr((std::shared_ptr<data::ConfigVMapMark> *const)jval, 0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigVMapMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVMapMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 64) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 64, v1, v12);
            *(_BYTE *)(v10 + 64) = 1;
            std::shared_ptr<data::ConfigVMapMark>::shared_ptr(
              (std::shared_ptr<data::ConfigVMapMark> *const)jval,
              (std::shared_ptr<data::ConfigVMapMark> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigVMapMark>::~shared_ptr((std::shared_ptr<data::ConfigVMapMark> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigVBaseMark>::~shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigMark.cpp",
      "parseFromJson",
      2145);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[47])"jsonValueFind for: ConfigVMapMark $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigVMapMark>::shared_ptr((std::shared_ptr<data::ConfigVMapMark> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigVMapMark,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 2176: range 0000000011955FA2-00000000119561B5
int32_t __cdecl data::ConfigVMapMark::getHashValue(const data::ConfigVMapMark *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2177";
  *(_QWORD *)(v2 + 16) = data::ConfigVMapMark::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigVBaseMark::getHashValue((const data::ConfigVBaseMark *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->visible_type_mini_map >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->visible_type_mini_map >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->visible_type_mini_map);
  }
  common::tools::HashUtils::appendHash(this->visible_type_mini_map, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->visible_type_level_map >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->visible_type_level_map >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->visible_type_level_map);
  }
  common::tools::HashUtils::appendHash(this->visible_type_level_map, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->layer_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->layer_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->layer_type);
  }
  common::tools::HashUtils::appendHash(this->layer_type, (int32_t *)(v2 + 32));
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

// Line 2188: range 0000000011A50BD6-0000000011A50E17
void __cdecl data::ConfigVCustomMapMarkRegister::ConfigVCustomMapMarkRegister(
        data::ConfigVCustomMapMarkRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigVBaseMark> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigVCustomMapMarkRegister::ConfigVCustomMapMarkRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVCustomMapMark>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigVCustomMapMark",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::operator[](
         &data::g_ConfigVBaseMarkMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigVBaseMark>::operator=<data::ConfigVCustomMapMark>(
    v4,
    (std::shared_ptr<data::ConfigVCustomMapMark> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigVCustomMapMark>::~shared_ptr((std::shared_ptr<data::ConfigVCustomMapMark> *const)(v1 + 64));
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

// Line 2191: range 00000000119561B6-0000000011956386
void __cdecl data::ConfigVCustomMapMark::foreachMember(
        data::ConfigVCustomMapMark *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 20 custom_type_any:2193 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVCustomMapMark::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigVMapMark::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::MarkCustomType &,data::MarkCustomType,std::any::_Manager_internal<data::MarkCustomType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->custom_type);
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

// Line 2198: range 0000000011956388-0000000011956498
std::shared_ptr<data::ConfigVBaseMark> __cdecl data::ConfigVCustomMapMark::clone(
        data::ConfigVCustomMapMark *const this)
{
  data::ConfigVCustomMapMark *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigVBaseMark> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigVCustomMapMark::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVCustomMapMark,data::ConfigVCustomMapMark&>(
    (common::tools::perf::allocator<data::ConfigVCustomMapMark,data::ConfigVCustomMapMark> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigVBaseMark>::shared_ptr<data::ConfigVCustomMapMark,void>(
    (std::shared_ptr<data::ConfigVBaseMark> *const)this,
    (std::shared_ptr<data::ConfigVCustomMapMark> *)(v2 + 32));
  std::shared_ptr<data::ConfigVCustomMapMark>::~shared_ptr((std::shared_ptr<data::ConfigVCustomMapMark> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigVBaseMark,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2202: range 000000001195649A-00000000119564DD
data::ConfigVCustomMapMarkPtr __cdecl data::ConfigVCustomMapMarkFactory::create(
        data::ConfigVCustomMapMarkFactory *const this)
{
  data::ConfigVCustomMapMarkPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigVCustomMapMark>();
  result._M_ptr = (std::__shared_ptr<data::ConfigVCustomMapMark,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2204: range 00000000119564DE-0000000011956A70
bool __cdecl data::ConfigVCustomMapMark::fromJson(data::ConfigVCustomMapMark *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::MarkCustomType *p_custom_type; // rsi
  bool v7; // r14
  Json::Value *custom_type_ptr; // [rsp+18h] [rbp-178h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigVCustomMapMark::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( !data::ConfigVMapMark::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigMark.cpp",
      "fromJson",
      2207);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[36])"fromJson for: ConfigVMapMark fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "customType",
      (const std::allocator<char> *)(v2 + 48));
    p_custom_type = (data::MarkCustomType *)(v2 + 128);
    custom_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !custom_type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 192), (Json::Value_0 *)custom_type_ptr);
    p_custom_type = &this->custom_type;
    v7 = !data::enumStrToVal((const std::string *)(v2 + 192), &this->custom_type);
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
        "./src/json_data_auto/ConfigMark.cpp",
        "fromJson",
        2219);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[32])"fromJson for: customType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
LABEL_15:
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_custom_type, &this->is_json_loaded);
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

// Line 2226: range 0000000011956A72-00000000119575B8
data::ConfigVCustomMapMarkPtr __cdecl data::ConfigVCustomMapMark::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigVCustomMapMarkPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:2239 96 16 8 ptr:2245 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:2233 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVCustomMapMark::parseFromJson;
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
        "./src/json_data_auto/ConfigMark.cpp",
        "parseFromJson",
        2236);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[48])"fromJson for: ConfigVCustomMapMark $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigVCustomMapMark>::shared_ptr(
        (std::shared_ptr<data::ConfigVCustomMapMark> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigVBaseMark((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigVBaseMark>((const std::shared_ptr<data::ConfigVBaseMark> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "parseFromJson",
          2242);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigVBaseMark fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigVCustomMapMark>::shared_ptr(
          (std::shared_ptr<data::ConfigVCustomMapMark> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigVCustomMapMark,data::ConfigVBaseMark>((const std::shared_ptr<data::ConfigVBaseMark> *)(v2 + 96));
        if ( std::operator==<data::ConfigVCustomMapMark>(
               (const std::shared_ptr<data::ConfigVCustomMapMark> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigMark.cpp",
            "parseFromJson",
            2248);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[39])"cast to ConfigVCustomMapMarkPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigVCustomMapMark>::shared_ptr(
            (std::shared_ptr<data::ConfigVCustomMapMark> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVCustomMapMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVCustomMapMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigMark.cpp",
              "parseFromJson",
              2253);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigVCustomMapMark>::shared_ptr(
              (std::shared_ptr<data::ConfigVCustomMapMark> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigVCustomMapMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVCustomMapMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 64) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 64, v1, v12);
            *(_BYTE *)(v10 + 64) = 1;
            std::shared_ptr<data::ConfigVCustomMapMark>::shared_ptr(
              (std::shared_ptr<data::ConfigVCustomMapMark> *const)jval,
              (std::shared_ptr<data::ConfigVCustomMapMark> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigVCustomMapMark>::~shared_ptr((std::shared_ptr<data::ConfigVCustomMapMark> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigVBaseMark>::~shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigMark.cpp",
      "parseFromJson",
      2230);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[53])"jsonValueFind for: ConfigVCustomMapMark $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigVCustomMapMark>::shared_ptr(
      (std::shared_ptr<data::ConfigVCustomMapMark> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigVCustomMapMark,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 2261: range 00000000119575BA-000000001195772B
int32_t __cdecl data::ConfigVCustomMapMark::getHashValue(const data::ConfigVCustomMapMark *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2262";
  *(_QWORD *)(v2 + 16) = data::ConfigVCustomMapMark::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigVMapMark::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->custom_type);
  }
  common::tools::HashUtils::appendHash(this->custom_type, (int32_t *)(v2 + 32));
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

// Line 2269: range 000000001195772C-00000000119580BC
bool __cdecl data::ConfigMarkID::fromJson(data::ConfigMarkID *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *mark_type_ptr; // [rsp+18h] [rbp-268h]
  const Json::Value *scene_id_ptr; // [rsp+20h] [rbp-260h]
  const Json::Value *mark_id_ptr; // [rsp+28h] [rbp-258h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigMarkID::fromJson;
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
    "markType",
    (const std::allocator<char> *)(v2 + 48));
  mark_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !mark_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 160, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 160), (Json::Value_0 *)mark_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 160), &this->mark_type);
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      "./src/json_data_auto/ConfigMark.cpp",
      "fromJson",
      2279);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[30])"fromJson for: markType fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "sceneID",
      (const std::allocator<char> *)(v2 + 64));
    scene_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( scene_id_ptr && !fromJson<unsigned int>(scene_id_ptr, &this->scene_id) )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "fromJson",
        2291);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[29])"fromJson for: sceneID fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        "markID",
        (const std::allocator<char> *)(v2 + 80));
      mark_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( mark_id_ptr && !fromJson<unsigned int>(mark_id_ptr, &this->mark_id) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "fromJson",
          2303);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[28])"fromJson for: markID fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = 0;
      }
      else
      {
        v7 = ((_BYTE)this + 12) & 7;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
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

// Line 2311: range 00000000119580BE-00000000119582C9
int32_t __cdecl data::ConfigMarkID::getHashValue(const data::ConfigMarkID *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2312";
  *(_QWORD *)(v2 + 16) = data::ConfigMarkID::getHashValue;
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
  common::tools::HashUtils::appendHash(this->mark_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scene_id);
  }
  common::tools::HashUtils::appendHash(this->scene_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mark_id);
  }
  common::tools::HashUtils::appendHash(this->mark_id, (int32_t *)(v2 + 32));
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

// Line 2320: range 00000000119582CA-0000000011958565
const char *__cdecl data::enumValToStr(data::MarkVisibilityType e)
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
  if ( e == Always_1 )
  {
    result = "Always";
  }
  else
  {
    if ( e <= Always_1 )
    {
      switch ( e )
      {
        case Around:
          result = "Around";
          goto LABEL_19;
        case None_58:
          result = "None";
          goto LABEL_19;
        case Invisible:
          result = "Invisible";
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumValToStr",
      2332);
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
    result = (const char *)&unk_1A83C4E0;
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

// Line 2338: range 0000000011958566-0000000011958EEA
bool __cdecl data::enumStrToVal(const std::string *s, data::MarkVisibilityType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MarkVisibilityType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MarkVisibilityType> >::pointer v11; // rax
  data::MarkVisibilityType second; // ecx
  char v13; // dl
  data::MarkVisibilityType *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 7 it:2351 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      2341);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MarkVisibilityType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkVisibilityType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::MarkVisibilityType>::pair<char const(&)[5],data::MarkVisibilityType,true>(
        (std::pair<const std::string,data::MarkVisibilityType> *const)(v2 + 320),
        (const char (*)[5])"None",
        (data::MarkVisibilityType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "None");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::MarkVisibilityType>::pair<char const(&)[10],data::MarkVisibilityType,true>(
        (std::pair<const std::string,data::MarkVisibilityType> *const)(v2 + 360),
        (const char (*)[10])"Invisible",
        (data::MarkVisibilityType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Invisible");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::MarkVisibilityType>::pair<char const(&)[7],data::MarkVisibilityType,true>(
        (std::pair<const std::string,data::MarkVisibilityType> *const)(v2 + 400),
        (const char (*)[7])"Around",
        (data::MarkVisibilityType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Around");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::MarkVisibilityType>::pair<char const(&)[7],data::MarkVisibilityType,true>(
        (std::pair<const std::string,data::MarkVisibilityType> *const)(v2 + 440),
        (const char (*)[7])"Always",
        (data::MarkVisibilityType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::MarkVisibilityType>>::allocator((std::allocator<std::pair<const std::string,data::MarkVisibilityType> > *const)(v2 + 48));
      std::map<std::string,data::MarkVisibilityType>::map(
        &data::enumStrToVal(std::string const&,data::MarkVisibilityType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MarkVisibilityType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::MarkVisibilityType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkVisibilityType &)::m);
      e = (data::MarkVisibilityType *)&data::enumStrToVal(std::string const&,data::MarkVisibilityType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MarkVisibilityType>::~map,
        &data::enumStrToVal(std::string const&,data::MarkVisibilityType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MarkVisibilityType>>::~allocator((std::allocator<std::pair<const std::string,data::MarkVisibilityType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MarkVisibilityType> *)(v2 + 480);
            i != (std::pair<const std::string,data::MarkVisibilityType> *)(v2 + 320);
            std::pair<std::string const,data::MarkVisibilityType>::~pair(i) )
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
    *(std::map<std::string,data::MarkVisibilityType>::iterator *)(v2 + 128) = std::map<std::string,data::MarkVisibilityType>::find(
                                                                                &data::enumStrToVal(std::string const&,data::MarkVisibilityType &)::m,
                                                                                s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::MarkVisibilityType>::iterator *)(v2 + 160) = std::map<std::string,data::MarkVisibilityType>::end(&data::enumStrToVal(std::string const&,data::MarkVisibilityType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkVisibilityType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkVisibilityType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        2354);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::MarkVisibilityType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkVisibilityType> > *const)(v2 + 128));
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

// Line 2362: range 0000000011958EEB-0000000011958F44
const char *__cdecl data::getDescription(data::MarkVisibilityType e)
{
  if ( e == Always_1 )
    return (const char *)&unk_1A83C4E0;
  if ( e <= Always_1 )
  {
    switch ( e )
    {
      case Around:
        return (const char *)&unk_1A83C4E0;
      case None_58:
        return (const char *)&unk_1A83C4E0;
      case Invisible:
        return (const char *)&unk_1A83C4E0;
    }
  }
  return "unknown enum value!";
};

// Line 2379: range 0000000011958F45-00000000119591E0
const char *__cdecl data::enumValToStr(data::MarkPluginIconType e)
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
  if ( e == Paimon_1 )
  {
    result = "Paimon";
  }
  else
  {
    if ( e <= Paimon_1 )
    {
      switch ( e )
      {
        case Character_1:
          result = "Character";
          goto LABEL_19;
        case None_59:
          result = "None";
          goto LABEL_19;
        case Boss_2:
          result = "Boss";
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumValToStr",
      2391);
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
    result = (const char *)&unk_1A83C4E0;
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

// Line 2397: range 00000000119591E1-0000000011959B65
bool __cdecl data::enumStrToVal(const std::string *s, data::MarkPluginIconType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MarkPluginIconType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MarkPluginIconType> >::pointer v11; // rax
  data::MarkPluginIconType second; // ecx
  char v13; // dl
  data::MarkPluginIconType *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 7 it:2410 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      2400);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MarkPluginIconType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkPluginIconType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::MarkPluginIconType>::pair<char const(&)[5],data::MarkPluginIconType,true>(
        (std::pair<const std::string,data::MarkPluginIconType> *const)(v2 + 320),
        (const char (*)[5])"None",
        (data::MarkPluginIconType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "None");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::MarkPluginIconType>::pair<char const(&)[5],data::MarkPluginIconType,true>(
        (std::pair<const std::string,data::MarkPluginIconType> *const)(v2 + 360),
        (const char (*)[5])"Boss",
        (data::MarkPluginIconType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Boss");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::MarkPluginIconType>::pair<char const(&)[10],data::MarkPluginIconType,true>(
        (std::pair<const std::string,data::MarkPluginIconType> *const)(v2 + 400),
        (const char (*)[10])"Character",
        (data::MarkPluginIconType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Character");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::MarkPluginIconType>::pair<char const(&)[7],data::MarkPluginIconType,true>(
        (std::pair<const std::string,data::MarkPluginIconType> *const)(v2 + 440),
        (const char (*)[7])"Paimon",
        (data::MarkPluginIconType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::MarkPluginIconType>>::allocator((std::allocator<std::pair<const std::string,data::MarkPluginIconType> > *const)(v2 + 48));
      std::map<std::string,data::MarkPluginIconType>::map(
        &data::enumStrToVal(std::string const&,data::MarkPluginIconType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MarkPluginIconType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::MarkPluginIconType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MarkPluginIconType &)::m);
      e = (data::MarkPluginIconType *)&data::enumStrToVal(std::string const&,data::MarkPluginIconType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MarkPluginIconType>::~map,
        &data::enumStrToVal(std::string const&,data::MarkPluginIconType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MarkPluginIconType>>::~allocator((std::allocator<std::pair<const std::string,data::MarkPluginIconType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MarkPluginIconType> *)(v2 + 480);
            i != (std::pair<const std::string,data::MarkPluginIconType> *)(v2 + 320);
            std::pair<std::string const,data::MarkPluginIconType>::~pair(i) )
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
    *(std::map<std::string,data::MarkPluginIconType>::iterator *)(v2 + 128) = std::map<std::string,data::MarkPluginIconType>::find(
                                                                                &data::enumStrToVal(std::string const&,data::MarkPluginIconType &)::m,
                                                                                s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::MarkPluginIconType>::iterator *)(v2 + 160) = std::map<std::string,data::MarkPluginIconType>::end(&data::enumStrToVal(std::string const&,data::MarkPluginIconType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkPluginIconType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkPluginIconType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        2413);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::MarkPluginIconType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MarkPluginIconType> > *const)(v2 + 128));
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

// Line 2421: range 0000000011959B66-0000000011959BBF
const char *__cdecl data::getDescription(data::MarkPluginIconType e)
{
  if ( e == Paimon_1 )
    return (const char *)&unk_1A8456E0;
  if ( e <= Paimon_1 )
  {
    switch ( e )
    {
      case Character_1:
        return (const char *)&unk_1A84B660;
      case None_59:
        return (const char *)&unk_1A84B5E0;
      case Boss_2:
        return (const char *)&unk_1A84B620;
    }
  }
  return "unknown enum value!";
};

// Line 2438: range 0000000011959BC0-0000000011959E3D
const char *__cdecl data::enumValToStr(data::FallbackMarkTipsType e)
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
  if ( e == Trace )
  {
    result = "Trace";
  }
  else
  {
    if ( e > Trace )
      goto LABEL_22;
    if ( e == Default_16 )
    {
      result = "Default";
      goto LABEL_17;
    }
    if ( e == Teleport_0 )
    {
      result = "Teleport";
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumValToStr",
        2448);
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
      result = (const char *)&unk_1A83C4E0;
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

// Line 2454: range 0000000011959E3E-000000001195A71F
bool __cdecl data::enumStrToVal(const std::string *s, data::FallbackMarkTipsType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::FallbackMarkTipsType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::FallbackMarkTipsType> >::pointer v11; // rax
  data::FallbackMarkTipsType second; // ecx
  char v13; // dl
  data::FallbackMarkTipsType *ea; // [rsp+10h] [rbp-220h]
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
                        " it:2466 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ConfigMark.cpp",
      "enumStrToVal",
      2457);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::FallbackMarkTipsType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::FallbackMarkTipsType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::FallbackMarkTipsType>::pair<char const(&)[8],data::FallbackMarkTipsType,true>(
        (std::pair<const std::string,data::FallbackMarkTipsType> *const)(v2 + 320),
        (const char (*)[8])"Default",
        (data::FallbackMarkTipsType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Default");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::FallbackMarkTipsType>::pair<char const(&)[9],data::FallbackMarkTipsType,true>(
        (std::pair<const std::string,data::FallbackMarkTipsType> *const)(v2 + 360),
        (const char (*)[9])"Teleport",
        (data::FallbackMarkTipsType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Teleport");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::FallbackMarkTipsType>::pair<char const(&)[6],data::FallbackMarkTipsType,true>(
        (std::pair<const std::string,data::FallbackMarkTipsType> *const)(v2 + 400),
        (const char (*)[6])"Trace",
        (data::FallbackMarkTipsType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::FallbackMarkTipsType>>::allocator((std::allocator<std::pair<const std::string,data::FallbackMarkTipsType> > *const)(v2 + 64));
      std::map<std::string,data::FallbackMarkTipsType>::map(
        &data::enumStrToVal(std::string const&,data::FallbackMarkTipsType &)::m,
        (std::initializer_list<std::pair<const std::string,data::FallbackMarkTipsType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::FallbackMarkTipsType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::FallbackMarkTipsType &)::m);
      e = (data::FallbackMarkTipsType *)&data::enumStrToVal(std::string const&,data::FallbackMarkTipsType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::FallbackMarkTipsType>::~map,
        &data::enumStrToVal(std::string const&,data::FallbackMarkTipsType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::FallbackMarkTipsType>>::~allocator((std::allocator<std::pair<const std::string,data::FallbackMarkTipsType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::FallbackMarkTipsType> *)(v2 + 440);
            i != (std::pair<const std::string,data::FallbackMarkTipsType> *)(v2 + 320);
            std::pair<std::string const,data::FallbackMarkTipsType>::~pair(i) )
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
    *(std::map<std::string,data::FallbackMarkTipsType>::iterator *)(v2 + 128) = std::map<std::string,data::FallbackMarkTipsType>::find(
                                                                                  &data::enumStrToVal(std::string const&,data::FallbackMarkTipsType &)::m,
                                                                                  s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::FallbackMarkTipsType>::iterator *)(v2 + 160) = std::map<std::string,data::FallbackMarkTipsType>::end(&data::enumStrToVal(std::string const&,data::FallbackMarkTipsType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::FallbackMarkTipsType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::FallbackMarkTipsType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ConfigMark.cpp",
        "enumStrToVal",
        2469);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::FallbackMarkTipsType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::FallbackMarkTipsType> > *const)(v2 + 128));
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

// Line 2477: range 000000001195A720-000000001195A764
const char *__cdecl data::getDescription(data::FallbackMarkTipsType e)
{
  if ( e == Trace )
    return (const char *)&unk_1A84B820;
  if ( e > Trace )
    return "unknown enum value!";
  if ( e == Default_16 )
    return (const char *)&unk_1A848C20;
  if ( e == Teleport_0 )
    return (const char *)&unk_1A84B7E0;
  else
    return "unknown enum value!";
};

// Line 2493: range 000000001195A766-000000001195D3B1
bool __cdecl data::ConfigMarkIcon::fromJson(data::ConfigMarkIcon *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  bool v7; // r15
  bool v8; // r15
  bool v9; // r15
  bool v10; // r15
  bool v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool v14; // bl
  const Json::Value *icon_name_ptr; // [rsp+18h] [rbp-AC8h]
  const Json::Value *material_index_ptr; // [rsp+20h] [rbp-AC0h]
  Json::Value *mark_type_ptr; // [rsp+28h] [rbp-AB8h]
  const Json::Value *effect_name_ptr; // [rsp+30h] [rbp-AB0h]
  const Json::Value *ignore_raycast_on_map_ptr; // [rsp+38h] [rbp-AA8h]
  const Json::Value *title_ptr; // [rsp+40h] [rbp-AA0h]
  const Json::Value *desc_ptr; // [rsp+48h] [rbp-A98h]
  Json::Value *mark_layer_ptr; // [rsp+50h] [rbp-A90h]
  Json::Value *visibility_on_radar_ptr; // [rsp+58h] [rbp-A88h]
  Json::Value *visibility_on_map_ptr; // [rsp+60h] [rbp-A80h]
  const Json::Value *show_height_on_radar_ptr; // [rsp+68h] [rbp-A78h]
  const Json::Value *show_on_locked_area_ptr; // [rsp+70h] [rbp-A70h]
  Json::Value *plugin_icon_type_ptr; // [rsp+78h] [rbp-A68h]
  Json::Value *fallback_mark_tips_type_ptr; // [rsp+80h] [rbp-A60h]
  const Json::Value *check_edge_on_radar_ptr; // [rsp+88h] [rbp-A58h]
  char v31[2640]; // [rsp+90h] [rbp-A50h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2592LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "51 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 32 9 <unknown> "
                        "352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 6"
                        "72 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 99"
                        "2 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown>"
                        " 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unkn"
                        "own> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <"
                        "unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32"
                        " 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 252"
                        "8 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigMarkIcon::fromJson;
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
  v4[536862800] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "iconName",
    (const std::allocator<char> *)(v2 + 48));
  icon_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( icon_name_ptr && !fromJson<std::string>(icon_name_ptr, &this->icon_name) )
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
      "./src/json_data_auto/ConfigMark.cpp",
      "fromJson",
      2503);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 352),
      (const char (*)[30])"fromJson for: iconName fails!");
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
      "materialIndex",
      (const std::allocator<char> *)(v2 + 64));
    material_index_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( material_index_ptr && !fromJson<unsigned int>(material_index_ptr, &this->material_index) )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "fromJson",
        2515);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 480),
        (const char (*)[35])"fromJson for: materialIndex fails!");
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
        "markType",
        (const std::allocator<char> *)(v2 + 80));
      mark_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 544));
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !mark_type_ptr )
        goto LABEL_21;
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 608, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 608), (Json::Value_0 *)mark_type_ptr);
      v6 = !data::enumStrToVal((const std::string *)(v2 + 608), &this->mark_type);
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      if ( v6 )
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
          3u,
          "./src/json_data_auto/ConfigMark.cpp",
          "fromJson",
          2527);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 672),
          (const char (*)[30])"fromJson for: markType fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        v5 = 0;
      }
      else
      {
LABEL_21:
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          "effectName",
          (const std::allocator<char> *)(v2 + 96));
        effect_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( effect_name_ptr && !fromJson<std::string>(effect_name_ptr, &this->effect_name) )
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
            3u,
            "./src/json_data_auto/ConfigMark.cpp",
            "fromJson",
            2539);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 800),
            (const char (*)[32])"fromJson for: effectName fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 864),
            "ignoreRaycastOnMap",
            (const std::allocator<char> *)(v2 + 112));
          ignore_raycast_on_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
          std::string::~string((void *)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( ignore_raycast_on_map_ptr && !fromJson<bool>(ignore_raycast_on_map_ptr, &this->ignore_raycast_on_map) )
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
              3u,
              "./src/json_data_auto/ConfigMark.cpp",
              "fromJson",
              2551);
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              (common::milog::MiLogStream *const)(v2 + 928),
              (const char (*)[40])"fromJson for: ignoreRaycastOnMap fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 992),
              "title",
              (const std::allocator<char> *)(v2 + 128));
            title_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( title_ptr && !fromJson<std::string>(title_ptr, &this->title) )
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
                "./src/json_data_auto/ConfigMark.cpp",
                "fromJson",
                2563);
              common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                (common::milog::MiLogStream *const)(v2 + 1056),
                (const char (*)[27])"fromJson for: title fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1120),
                "desc",
                (const std::allocator<char> *)(v2 + 144));
              desc_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
              std::string::~string((void *)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( desc_ptr && !fromJson<std::string>(desc_ptr, &this->desc) )
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1184, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1184),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigMark.cpp",
                  "fromJson",
                  2575);
                common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  (common::milog::MiLogStream *const)(v2 + 1184),
                  (const char (*)[26])"fromJson for: desc fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1248),
                  "markLayer",
                  (const std::allocator<char> *)(v2 + 160));
                mark_layer_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1248));
                std::string::~string((void *)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( !mark_layer_ptr )
                  goto LABEL_48;
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1312, 32LL);
                }
                Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1312), (Json::Value_0 *)mark_layer_ptr);
                v7 = !data::enumStrToVal((const std::string *)(v2 + 1312), &this->mark_layer);
                std::string::~string((void *)(v2 + 1312));
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                if ( v7 )
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
                    "./src/json_data_auto/ConfigMark.cpp",
                    "fromJson",
                    2587);
                  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    (common::milog::MiLogStream *const)(v2 + 1376),
                    (const char (*)[31])"fromJson for: markLayer fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                  v5 = 0;
                }
                else
                {
LABEL_48:
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1440),
                    "visibilityOnRadar",
                    (const std::allocator<char> *)(v2 + 176));
                  visibility_on_radar_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1440));
                  std::string::~string((void *)(v2 + 1440));
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( !visibility_on_radar_ptr )
                    goto LABEL_55;
                  *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1504, 32LL);
                  }
                  Json::Value::asString[abi:cxx11](
                    (Json::String *)(v2 + 1504),
                    (Json::Value_0 *)visibility_on_radar_ptr);
                  v8 = !data::enumStrToVal((const std::string *)(v2 + 1504), &this->visibility_on_radar);
                  std::string::~string((void *)(v2 + 1504));
                  *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                  if ( v8 )
                  {
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1568, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1568),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ConfigMark.cpp",
                      "fromJson",
                      2599);
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      (common::milog::MiLogStream *const)(v2 + 1568),
                      (const char (*)[39])"fromJson for: visibilityOnRadar fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                    v5 = 0;
                  }
                  else
                  {
LABEL_55:
                    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1632),
                      "visibilityOnMap",
                      (const std::allocator<char> *)(v2 + 192));
                    visibility_on_map_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1632));
                    std::string::~string((void *)(v2 + 1632));
                    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( !visibility_on_map_ptr )
                      goto LABEL_62;
                    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1696, 32LL);
                    }
                    Json::Value::asString[abi:cxx11](
                      (Json::String *)(v2 + 1696),
                      (Json::Value_0 *)visibility_on_map_ptr);
                    v9 = !data::enumStrToVal((const std::string *)(v2 + 1696), &this->visibility_on_map);
                    std::string::~string((void *)(v2 + 1696));
                    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                    if ( v9 )
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
                        "./src/json_data_auto/ConfigMark.cpp",
                        "fromJson",
                        2611);
                      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        (common::milog::MiLogStream *const)(v2 + 1760),
                        (const char (*)[37])"fromJson for: visibilityOnMap fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                      v5 = 0;
                    }
                    else
                    {
LABEL_62:
                      *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1824),
                        "showHeightOnRadar",
                        (const std::allocator<char> *)(v2 + 208));
                      show_height_on_radar_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1824));
                      std::string::~string((void *)(v2 + 1824));
                      *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( show_height_on_radar_ptr
                        && !fromJson<bool>(show_height_on_radar_ptr, &this->show_height_on_radar) )
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
                          "./src/json_data_auto/ConfigMark.cpp",
                          "fromJson",
                          2623);
                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          (common::milog::MiLogStream *const)(v2 + 1888),
                          (const char (*)[39])"fromJson for: showHeightOnRadar fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1952),
                          "showOnLockedArea",
                          (const std::allocator<char> *)(v2 + 224));
                        show_on_locked_area_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1952));
                        std::string::~string((void *)(v2 + 1952));
                        *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( show_on_locked_area_ptr
                          && !fromJson<bool>(show_on_locked_area_ptr, &this->show_on_locked_area) )
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
                            "./src/json_data_auto/ConfigMark.cpp",
                            "fromJson",
                            2635);
                          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            (common::milog::MiLogStream *const)(v2 + 2016),
                            (const char (*)[38])"fromJson for: showOnLockedArea fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2080),
                            "pluginIconType",
                            (const std::allocator<char> *)(v2 + 240));
                          plugin_icon_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 2080));
                          std::string::~string((void *)(v2 + 2080));
                          *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( !plugin_icon_type_ptr )
                            goto LABEL_79;
                          *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2144) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2144, 32LL);
                          }
                          Json::Value::asString[abi:cxx11](
                            (Json::String *)(v2 + 2144),
                            (Json::Value_0 *)plugin_icon_type_ptr);
                          v10 = !data::enumStrToVal((const std::string *)(v2 + 2144), &this->plugin_icon_type);
                          std::string::~string((void *)(v2 + 2144));
                          *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                          if ( v10 )
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
                              "./src/json_data_auto/ConfigMark.cpp",
                              "fromJson",
                              2647);
                            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                              (common::milog::MiLogStream *const)(v2 + 2208),
                              (const char (*)[36])"fromJson for: pluginIconType fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                            v5 = 0;
                          }
                          else
                          {
LABEL_79:
                            *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2272),
                              "fallbackMarkTipsType",
                              (const std::allocator<char> *)(v2 + 256));
                            fallback_mark_tips_type_ptr = (Json::Value *)jsonValueFind(
                                                                           jval,
                                                                           (const std::string *)(v2 + 2272));
                            std::string::~string((void *)(v2 + 2272));
                            *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( !fallback_mark_tips_type_ptr )
                              goto LABEL_86;
                            *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2336) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2336, 32LL);
                            }
                            Json::Value::asString[abi:cxx11](
                              (Json::String *)(v2 + 2336),
                              (Json::Value_0 *)fallback_mark_tips_type_ptr);
                            v11 = !data::enumStrToVal((const std::string *)(v2 + 2336), &this->fallback_mark_tips_type);
                            std::string::~string((void *)(v2 + 2336));
                            *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                            if ( v11 )
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
                                3u,
                                "./src/json_data_auto/ConfigMark.cpp",
                                "fromJson",
                                2659);
                              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                (common::milog::MiLogStream *const)(v2 + 2400),
                                (const char (*)[42])"fromJson for: fallbackMarkTipsType fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
                              v5 = 0;
                            }
                            else
                            {
LABEL_86:
                              *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2464),
                                "checkEdgeOnRadar",
                                (const std::allocator<char> *)(v2 + 272));
                              check_edge_on_radar_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2464));
                              std::string::~string((void *)(v2 + 2464));
                              *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( check_edge_on_radar_ptr
                                && !fromJson<bool>(check_edge_on_radar_ptr, &this->check_edge_on_radar) )
                              {
                                *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2528) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2528, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2528),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ConfigMark.cpp",
                                  "fromJson",
                                  2671);
                                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2528),
                                  (const char (*)[38])"fromJson for: checkEdgeOnRadar fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
                                v5 = 0;
                              }
                              else
                              {
                                v12 = ((_BYTE)this - 87) & 7;
                                v13 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                                if ( (_BYTE)v13 )
                                  __asan_report_store1(&this->is_json_loaded, v12, v13);
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
  v14 = v5;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8120) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8128) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8130) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8138) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8140) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2592LL, v31);
  }
  return v14;
};

// Line 2679: range 000000001195D3B2-000000001195D898
int32_t __cdecl data::ConfigMarkIcon::getHashValue(const data::ConfigMarkIcon *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2680";
  *(_QWORD *)(v2 + 16) = data::ConfigMarkIcon::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->icon_name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->material_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_index);
  }
  common::tools::HashUtils::appendHash(this->material_index, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mark_type);
  }
  common::tools::HashUtils::appendHash(this->mark_type, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->effect_name, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->ignore_raycast_on_map >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->ignore_raycast_on_map, v2 + 32, &this->ignore_raycast_on_map);
  common::tools::HashUtils::appendHash(this->ignore_raycast_on_map, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->title, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->desc, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mark_layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mark_layer);
  }
  common::tools::HashUtils::appendHash(this->mark_layer, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->visibility_on_radar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->visibility_on_radar >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->visibility_on_radar);
  }
  common::tools::HashUtils::appendHash(this->visibility_on_radar, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->visibility_on_map >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->visibility_on_map >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->visibility_on_map);
  }
  common::tools::HashUtils::appendHash(this->visibility_on_map, (int32_t *)(v2 + 32));
  v5 = ((_BYTE)this - 100) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->show_height_on_radar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->show_height_on_radar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&this->show_height_on_radar, v5, v6);
  common::tools::HashUtils::appendHash(this->show_height_on_radar, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this - 99) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->show_on_locked_area, v7, v8);
  common::tools::HashUtils::appendHash(this->show_on_locked_area, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->plugin_icon_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->plugin_icon_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->plugin_icon_type);
  }
  common::tools::HashUtils::appendHash(this->plugin_icon_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fallback_mark_tips_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fallback_mark_tips_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fallback_mark_tips_type);
  }
  common::tools::HashUtils::appendHash(this->fallback_mark_tips_type, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->check_edge_on_radar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->check_edge_on_radar, v2 + 32, &this->check_edge_on_radar);
  common::tools::HashUtils::appendHash(this->check_edge_on_radar, (int32_t *)(v2 + 32));
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

// Line 2700: range 000000001195D899-000000001195E800
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigMarkIconMap *m)
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
  data::ConfigMarkIcon *v13; // r8
  common::milog::MiLogStream *v14; // r14
  __int64 v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::MarkIconType,data::ConfigMarkIcon>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // edx
  bool v25; // [rsp+Fh] [rbp-461h]
  char v26[1104]; // [rsp+20h] [rbp-450h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 4 8 key:2706 64 8 9 <unknown> 96 8 9 <unknown> 128 16 8 cit:2703 160 16 9 <unknown> 192 32"
                        " 12 key_str:2707 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512"
                        " 32 9 <unknown> 576 40 13 tmp_jval:2701 656 40 13 key_jval:2705 736 40 15 value_jval:2718 816 176 10 value:2719";
  *(_QWORD *)(v2 + 16) = data::mapFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959360;
  v4[536862740] = 62194;
  v4[536862741] = -234881024;
  v4[536862742] = -218959118;
  v4[536862744] = -218959360;
  v4[536862745] = 62194;
  v4[536862751] = -202116109;
  v4[536862752] = -202116109;
  Json::Value::Value((Json::Value *)(v2 + 576), jval);
  overrideDefault((Json::Value *)(v2 + 576));
  if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v2 + 576));
  while ( 1 )
  {
    *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v2 + 576));
    v5 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v2 + 128),
           (const Json::ValueIteratorBase::SelfType *)(v2 + 160));
    *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
    if ( !v5 )
      break;
    v6 = ((v2 + 656) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_BYTE *)(v6 + 4) = 0;
    if ( *(char *)(((v2 + 656) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 695) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 73) & 7) >= *(_BYTE *)(((v2 + 695) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 656, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v2 + 656));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 192);
    if ( !fromJson<std::string>((const Json::Value *)(v2 + 656), (std::string *)(v2 + 192)) )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "mapFromJson",
        2710);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 320), (Json::Value_0 *)(v2 + 656));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v2 + 320));
      std::string::~string((void *)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v25 = 0;
      v8 = 0;
    }
    else if ( !data::enumStrToVal((const std::string *)(v2 + 192), (data::MarkIconType *)(v2 + 48)) )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "mapFromJson",
        2715);
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[21])"enumStrToVal fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 192));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v25 = 0;
      v8 = 0;
    }
    else
    {
      v10 = ((v2 + 736) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v2 + 128));
      Json::Value::Value((Json::Value *)(v2 + 736), v11);
      v12 = ((v2 + 816) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      *(_DWORD *)(v12 + 12) = 0;
      *(_DWORD *)(v12 + 16) = 0;
      *(_WORD *)(v12 + 20) = 0;
      data::ConfigMarkIcon::ConfigMarkIcon((data::ConfigMarkIcon *const)(v2 + 816));
      if ( !data::ConfigMarkIcon::fromJson((data::ConfigMarkIcon *const)(v2 + 816), (const Json::Value *)(v2 + 736)) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "mapFromJson",
          2722);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        v15 = (__int64)data::enumValToStr((data::MarkIconType)*(_DWORD *)(v2 + 48));
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
          v15 = __asan_report_store8(v2 + 64, "value fromJson fails, key: ");
        *(_QWORD *)(v2 + 64) = v15;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v25 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<data::MarkIconType,data::ConfigMarkIcon>::emplace<data::MarkIconType&,data::ConfigMarkIcon&>(
                m,
                (data::MarkIconType *)(v2 + 48),
                (data::ConfigMarkIcon *)(v2 + 816),
                (data::MarkIconType *)(v2 + 48),
                v13);
        if ( !v17.second )
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
            "./src/json_data_auto/ConfigMark.cpp",
            "mapFromJson",
            2727);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 512),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          v19 = (__int64)data::enumValToStr((data::MarkIconType)*(_DWORD *)(v2 + 48));
          if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_store8(v2 + 96, "key duplicate: ");
          *(_QWORD *)(v2 + 96) = v19;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)(v2 + 96));
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
          *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v25 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      data::ConfigMarkIcon::~ConfigMarkIcon((data::ConfigMarkIcon *const)(v2 + 816));
      Json::Value::~Value((Json::Value_0 *const)(v2 + 736));
      v8 = v16 == 1;
    }
    std::string::~string((void *)(v2 + 192));
    Json::Value::~Value((Json::Value_0 *const)(v2 + 656));
    v20 = ((v2 + 656) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v21 = ((v2 + 736) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    v22 = ((v2 + 816) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_DWORD *)(v22 + 4) = -117901064;
    *(_DWORD *)(v22 + 8) = -117901064;
    *(_DWORD *)(v22 + 12) = -117901064;
    *(_DWORD *)(v22 + 16) = -117901064;
    *(_WORD *)(v22 + 20) = -1800;
    if ( !v8 )
    {
      v23 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v2 + 128));
  }
  v23 = 1;
LABEL_44:
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
  if ( v23 == 1 )
    v25 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v2 + 576));
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
    __asan_stack_free_5(v2, 1056LL, v26);
  }
  return v25;
};

// Line 2736: range 000000001195E801-000000001195EAD1
int32_t __cdecl data::getMapHashValue(const data::ConfigMarkIconMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::MarkIconType,data::ConfigMarkIcon>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::MarkIconType,data::ConfigMarkIcon> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::MarkIconType,data::ConfigMarkIcon> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2737 64 8 16 __for_begin:2738 96 8 14 __for_end:2738";
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
  *(std::unordered_map<data::MarkIconType,data::ConfigMarkIcon>::const_iterator *)(v2 + 64) = std::unordered_map<data::MarkIconType,data::ConfigMarkIcon>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::MarkIconType,data::ConfigMarkIcon>::const_iterator *)(v2 + 96) = std::unordered_map<data::MarkIconType,data::ConfigMarkIcon>::end(map);
  while ( std::__detail::operator!=<std::pair<data::MarkIconType const,data::ConfigMarkIcon>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::MarkIconType,data::ConfigMarkIcon>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::MarkIconType,data::ConfigMarkIcon>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::MarkIconType const,data::ConfigMarkIcon>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::MarkIconType,data::ConfigMarkIcon>,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::MarkIconType const,data::ConfigMarkIcon>(v7);
    val = (std::tuple_element<1,const std::pair<const data::MarkIconType,data::ConfigMarkIcon> >::type *)std::get<1ul,data::MarkIconType const,data::ConfigMarkIcon>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigMarkIcon::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::MarkIconType const,data::ConfigMarkIcon>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::MarkIconType,data::ConfigMarkIcon>,false,false> *const)(v2 + 64));
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

// Line 2749: range 000000001195EAD2-000000001195EDAE
bool __cdecl data::vecFromJson(const Json::Value *jval, data::MarkIconTypeList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::MarkIconType> *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 48 4 9 elem:2755 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
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
      if ( !fromJson<data::MarkIconType>(elem_jval, (data::MarkIconType *)(v3 + 48)) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "vecFromJson",
          2758);
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
        std::vector<data::MarkIconType>::push_back(va, (const std::vector<data::MarkIconType>::value_type *)(v3 + 48));
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

// Line 2768: range 000000001195EDAF-000000001195F030
int32_t __cdecl data::getVecHashValue(const data::MarkIconTypeList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MarkIconType *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2769 64 8 16 __for_begin:2770 96 8 14 __for_end:2770";
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
  *(std::vector<data::MarkIconType>::const_iterator *)(v2 + 64) = std::vector<data::MarkIconType>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::MarkIconType>::const_iterator *)(v2 + 96) = std::vector<data::MarkIconType>::end(vec);
  while ( __gnu_cxx::operator!=<data::MarkIconType const*,std::vector<data::MarkIconType>>(
            (const __gnu_cxx::__normal_iterator<const data::MarkIconType*,std::vector<data::MarkIconType> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::MarkIconType*,std::vector<data::MarkIconType> > *)(v2 + 96)) )
  {
    v5 = (data::MarkIconType *)__gnu_cxx::__normal_iterator<data::MarkIconType const*,std::vector<data::MarkIconType>>::operator*((const __gnu_cxx::__normal_iterator<const data::MarkIconType*,std::vector<data::MarkIconType> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::MarkIconType const*,std::vector<data::MarkIconType>>::operator++((__gnu_cxx::__normal_iterator<const data::MarkIconType*,std::vector<data::MarkIconType> > *const)(v2 + 64));
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

// Line 2778: range 000000001195F031-000000001195FF07
bool __cdecl data::mapFromJson(const Json::Value *jval, data::SceneBuildingMarkMap *m)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  _BOOL4 v9; // r14d
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  const Json::Value *v12; // rax
  data::MarkIconType *v13; // r8
  common::milog::MiLogStream *v14; // r14
  __int64 v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::SceneBuildingType,data::MarkIconType>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  char v24[880]; // [rsp+20h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 4 8 key:2783 64 4 10 value:2796 80 8 9 <unknown> 112 8 9 <unknown> 144 16 8 cit:2780 176 1"
                        "6 9 <unknown> 208 32 12 key_str:2784 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 46"
                        "4 32 9 <unknown> 528 32 9 <unknown> 592 40 13 tmp_jval:2779 672 40 13 key_jval:2782 752 40 15 value_jval:2795";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
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
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862742] = -218959360;
  v5[536862743] = 62194;
  v5[536862744] = -218103808;
  v5[536862745] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 592), jval);
  if ( *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 592));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 592));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 144),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 176));
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 711) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 57) & 7) >= *(_BYTE *)(((v3 + 711) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 672, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 672));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 208);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 672), (std::string *)(v3 + 208)) )
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
        3u,
        "./src/json_data_auto/ConfigMark.cpp",
        "mapFromJson",
        2787);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 336, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 336), (Json::Value_0 *)(v3 + 672));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 336));
      std::string::~string((void *)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( !data::enumStrToVal((const std::string *)(v3 + 208), (data::SceneBuildingType *)(v3 + 48)) )
    {
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigMark.cpp",
        "mapFromJson",
        2792);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v3 + 400),
              (const char (*)[21])"enumStrToVal fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 752) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 144));
      Json::Value::Value((Json::Value *)(v3 + 752), v12);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( !fromJson<data::MarkIconType>((const Json::Value *)(v3 + 752), (data::MarkIconType *)(v3 + 64)) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "mapFromJson",
          2799);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        v15 = (__int64)data::enumValToStr((data::SceneBuildingType)*(_DWORD *)(v3 + 48));
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          v15 = __asan_report_store8(v3 + 80, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 80) = v15;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v3 + 80));
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<data::SceneBuildingType,data::MarkIconType>::emplace<data::SceneBuildingType&,data::MarkIconType&>(
                m,
                (data::SceneBuildingType *)(v3 + 48),
                (data::MarkIconType *)(v3 + 64),
                (data::SceneBuildingType *)(v3 + 48),
                v13);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 528, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 528),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigMark.cpp",
            "mapFromJson",
            2804);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 528),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v19 = (__int64)data::enumValToStr((data::SceneBuildingType)*(_DWORD *)(v3 + 48));
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_store8(v3 + 112, "key duplicate: ");
          *(_QWORD *)(v3 + 112) = v19;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)(v3 + 112));
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
          *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 752));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 208));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 672));
    v20 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
    v21 = ((v3 + 752) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 144));
  }
  v22 = 1;
LABEL_44:
  *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 592));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 2813: range 000000001195FF08-000000001196020A
int32_t __cdecl data::getMapHashValue(const data::SceneBuildingMarkMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::SceneBuildingType,data::MarkIconType>,false,false>::reference v6; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::SceneBuildingType,data::MarkIconType> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::SceneBuildingType,data::MarkIconType> >::type *val; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2814 64 8 16 __for_begin:2815 96 8 14 __for_end:2815";
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
  *(std::unordered_map<data::SceneBuildingType,data::MarkIconType>::const_iterator *)(v2 + 64) = std::unordered_map<data::SceneBuildingType,data::MarkIconType>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::SceneBuildingType,data::MarkIconType>::const_iterator *)(v2 + 96) = std::unordered_map<data::SceneBuildingType,data::MarkIconType>::end(map);
  while ( std::__detail::operator!=<std::pair<data::SceneBuildingType const,data::MarkIconType>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::SceneBuildingType,data::MarkIconType>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::SceneBuildingType,data::MarkIconType>,false> *)(v2 + 96)) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<data::SceneBuildingType const,data::MarkIconType>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::SceneBuildingType,data::MarkIconType>,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::SceneBuildingType const,data::MarkIconType>(v6);
    val = (std::tuple_element<1,const std::pair<const data::SceneBuildingType,data::MarkIconType> >::type *)std::get<1ul,data::SceneBuildingType const,data::MarkIconType>(v6);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(val);
    }
    common::tools::HashUtils::appendHash(*val, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::SceneBuildingType const,data::MarkIconType>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::SceneBuildingType,data::MarkIconType>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
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

// Line 2826: range 000000001196020B-00000000119610E1
bool __cdecl data::mapFromJson(const Json::Value *jval, data::MarkOrderToLayerMap *m)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  _BOOL4 v9; // r14d
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  const Json::Value *v12; // rax
  int *v13; // r8
  common::milog::MiLogStream *v14; // r14
  __int64 v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::MarkOrder,int>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  char v24[880]; // [rsp+20h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 4 8 key:2831 64 4 10 value:2844 80 8 9 <unknown> 112 8 9 <unknown> 144 16 8 cit:2828 176 1"
                        "6 9 <unknown> 208 32 12 key_str:2832 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 46"
                        "4 32 9 <unknown> 528 32 9 <unknown> 592 40 13 tmp_jval:2827 672 40 13 key_jval:2830 752 40 15 value_jval:2843";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
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
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862742] = -218959360;
  v5[536862743] = 62194;
  v5[536862744] = -218103808;
  v5[536862745] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 592), jval);
  if ( *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 592));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 592));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 144),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 176));
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 711) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 57) & 7) >= *(_BYTE *)(((v3 + 711) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 672, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 672));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 208);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 672), (std::string *)(v3 + 208)) )
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
        3u,
        "./src/json_data_auto/ConfigMark.cpp",
        "mapFromJson",
        2835);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 336, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 336), (Json::Value_0 *)(v3 + 672));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 336));
      std::string::~string((void *)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( !data::enumStrToVal((const std::string *)(v3 + 208), (data::MarkOrder *)(v3 + 48)) )
    {
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigMark.cpp",
        "mapFromJson",
        2840);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v3 + 400),
              (const char (*)[21])"enumStrToVal fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 752) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 144));
      Json::Value::Value((Json::Value *)(v3 + 752), v12);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( !fromJson<int>((const Json::Value *)(v3 + 752), (int *)(v3 + 64)) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "mapFromJson",
          2847);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        v15 = (__int64)data::enumValToStr((data::MarkOrder)*(_DWORD *)(v3 + 48));
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          v15 = __asan_report_store8(v3 + 80, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 80) = v15;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v3 + 80));
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<data::MarkOrder,int>::emplace<data::MarkOrder&,int &>(
                m,
                (data::MarkOrder *)(v3 + 48),
                (int *)(v3 + 64),
                (data::MarkOrder *)(v3 + 48),
                v13);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 528, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 528),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigMark.cpp",
            "mapFromJson",
            2852);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 528),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v19 = (__int64)data::enumValToStr((data::MarkOrder)*(_DWORD *)(v3 + 48));
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_store8(v3 + 112, "key duplicate: ");
          *(_QWORD *)(v3 + 112) = v19;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)(v3 + 112));
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
          *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 752));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 208));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 672));
    v20 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
    v21 = ((v3 + 752) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 144));
  }
  v22 = 1;
LABEL_44:
  *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 592));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 2861: range 00000000119610E2-00000000119613E4
int32_t __cdecl data::getMapHashValue(const data::MarkOrderToLayerMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::MarkOrder,int>,false,false>::reference v6; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::MarkOrder,int> >::type *key; // [rsp+20h] [rbp-B0h]
  int32_t *val; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2862 64 8 16 __for_begin:2863 96 8 14 __for_end:2863";
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
  *(std::unordered_map<data::MarkOrder,int>::const_iterator *)(v2 + 64) = std::unordered_map<data::MarkOrder,int>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::MarkOrder,int>::const_iterator *)(v2 + 96) = std::unordered_map<data::MarkOrder,int>::end(map);
  while ( std::__detail::operator!=<std::pair<data::MarkOrder const,int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::MarkOrder,int>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::MarkOrder,int>,false> *)(v2 + 96)) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<data::MarkOrder const,int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::MarkOrder,int>,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::MarkOrder const,int>(v6);
    val = (int32_t *)std::get<1ul,data::MarkOrder const,int>(v6);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(val);
    }
    common::tools::HashUtils::appendHash(*val, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::MarkOrder const,int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::MarkOrder,int>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
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

// Line 2874: range 00000000119613E5-00000000119617BE
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigMarkList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  data::ConfigMarkID *v10; // rdx
  bool result; // al
  std::vector<data::ConfigMarkID> *va; // [rsp+0h] [rbp-D0h]
  Json::Value *jvala; // [rsp+8h] [rbp-C8h]
  uint32_t i; // [rsp+14h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-B8h]
  char v16[176]; // [rsp+20h] [rbp-B0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 elem:2880 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
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
      *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, i);
      *(_DWORD *)(v3 + 32) = 0;
      v7 = (((_BYTE)v3 + 36) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 36, v7);
      }
      *(_DWORD *)(v3 + 36) = 0;
      if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 40, v7);
      *(_DWORD *)(v3 + 40) = 0;
      v8 = ((_BYTE)v3 + 44) & 7;
      v9 = (*(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store1(v3 + 44, v8, v9);
      *(_BYTE *)(v3 + 44) = 0;
      if ( !data::ConfigMarkID::fromJson((data::ConfigMarkID *const)(v3 + 32), elem_jval) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "vecFromJson",
          2883);
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
        v10 = std::move<data::ConfigMarkID &>((data::ConfigMarkID *)(v3 + 32));
        std::vector<data::ConfigMarkID>::emplace_back<data::ConfigMarkID>(va, v10, v10);
        v6 = 2;
      }
    }
    *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v6 && v6 != 2 )
      goto LABEL_25;
  }
  v2 = 1;
LABEL_25:
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 2893: range 00000000119617BF-0000000011961A0B
int32_t __cdecl data::getVecHashValue(const data::ConfigMarkList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigMarkID*,std::vector<data::ConfigMarkID> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2894 64 8 16 __for_begin:2895 96 8 14 __for_end:2895";
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
  *(std::vector<data::ConfigMarkID>::const_iterator *)(v2 + 64) = std::vector<data::ConfigMarkID>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigMarkID>::const_iterator *)(v2 + 96) = std::vector<data::ConfigMarkID>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigMarkID const*,std::vector<data::ConfigMarkID>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigMarkID*,std::vector<data::ConfigMarkID> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigMarkID*,std::vector<data::ConfigMarkID> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigMarkID const*,std::vector<data::ConfigMarkID>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigMarkID*,std::vector<data::ConfigMarkID> > *const)(v2 + 64));
    HashValue = data::ConfigMarkID::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigMarkID const*,std::vector<data::ConfigMarkID>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigMarkID*,std::vector<data::ConfigMarkID> > *const)(v2 + 64));
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

// Line 2904: range 0000000011961A0C-00000000119627B4
bool __cdecl data::ConfigMarkGlobal::fromJson(data::ConfigMarkGlobal *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigMarkList *p_always_loaded_mark_list; // rsi
  const Json::Value *mark_icon_config_ptr; // [rsp+18h] [rbp-348h]
  const Json::Value *custom_mark_icons_ptr; // [rsp+20h] [rbp-340h]
  const Json::Value *scene_building_marks_ptr; // [rsp+28h] [rbp-338h]
  const Json::Value *mark_order_to_layer_map_ptr; // [rsp+30h] [rbp-330h]
  const Json::Value *always_loaded_mark_list_ptr; // [rsp+38h] [rbp-328h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigMarkGlobal::fromJson;
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
    "markIconConfig",
    (const std::allocator<char> *)(v2 + 48));
  mark_icon_config_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( mark_icon_config_ptr && !data::mapFromJson(mark_icon_config_ptr, &this->mark_icon_config) )
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
      "./src/json_data_auto/ConfigMark.cpp",
      "fromJson",
      2914);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[36])"fromJson for: markIconConfig fails!");
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
      "customMarkIcons",
      (const std::allocator<char> *)(v2 + 64));
    custom_mark_icons_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( custom_mark_icons_ptr && !data::vecFromJson(custom_mark_icons_ptr, &this->custom_mark_icons) )
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
        "./src/json_data_auto/ConfigMark.cpp",
        "fromJson",
        2926);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[37])"fromJson for: customMarkIcons fails!");
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
        "sceneBuildingMarks",
        (const std::allocator<char> *)(v2 + 80));
      scene_building_marks_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( scene_building_marks_ptr && !data::mapFromJson(scene_building_marks_ptr, &this->scene_building_marks) )
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
          "./src/json_data_auto/ConfigMark.cpp",
          "fromJson",
          2938);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[40])"fromJson for: sceneBuildingMarks fails!");
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
          "markOrderToLayerMap",
          (const std::allocator<char> *)(v2 + 96));
        mark_order_to_layer_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( mark_order_to_layer_map_ptr
          && !data::mapFromJson(mark_order_to_layer_map_ptr, &this->mark_order_to_layer_map) )
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
            "./src/json_data_auto/ConfigMark.cpp",
            "fromJson",
            2950);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[41])"fromJson for: markOrderToLayerMap fails!");
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
            "alwaysLoadedMarkList",
            (const std::allocator<char> *)(v2 + 112));
          p_always_loaded_mark_list = (data::ConfigMarkList *)(v2 + 640);
          always_loaded_mark_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( always_loaded_mark_list_ptr
            && (p_always_loaded_mark_list = &this->always_loaded_mark_list,
                !data::vecFromJson(always_loaded_mark_list_ptr, &this->always_loaded_mark_list)) )
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
              "./src/json_data_auto/ConfigMark.cpp",
              "fromJson",
              2962);
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[42])"fromJson for: alwaysLoadedMarkList fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->is_json_loaded, p_always_loaded_mark_list, &this->is_json_loaded);
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

// Line 2970: range 00000000119627B6-0000000011962978
int32_t __cdecl data::ConfigMarkGlobal::getHashValue(const data::ConfigMarkGlobal *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
  int32_t VecHashValue; // eax
  int32_t v7; // eax
  int32_t v8; // eax
  int32_t v9; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2971";
  *(_QWORD *)(v2 + 16) = data::ConfigMarkGlobal::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->mark_icon_config);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->custom_mark_icons);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v7 = data::getMapHashValue(&this->scene_building_marks);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::getMapHashValue(&this->mark_order_to_layer_map);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::getVecHashValue(&this->always_loaded_mark_list);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
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

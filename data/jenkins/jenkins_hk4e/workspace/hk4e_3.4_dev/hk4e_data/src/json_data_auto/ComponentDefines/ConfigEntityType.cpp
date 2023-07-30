// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigEntityType.cpp

// Line 19: range 0000000012125992-0000000012125F70
const char *__cdecl data::enumValToStr(data::EntityType e)
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
    case None_10:
      result = "None";
      break;
    case Avatar:
      result = "Avatar";
      break;
    case Monster:
      result = "Monster";
      break;
    case Bullet:
      result = "Bullet";
      break;
    case AttackPhyisicalUnit:
      result = "AttackPhyisicalUnit";
      break;
    case AOE:
      result = off_1A910EC0;
      break;
    case Camera:
      result = "Camera";
      break;
    case EnviroArea:
      result = "EnviroArea";
      break;
    case Equip:
      result = "Equip";
      break;
    case MonsterEquip:
      result = "MonsterEquip";
      break;
    case Grass_1:
      result = "Grass";
      break;
    case Level:
      result = "Level";
      break;
    case NPC:
      result = off_1A8CA2E0;
      break;
    case TransPointFirst:
      result = "TransPointFirst";
      break;
    case TransPointFirstGadget:
      result = "TransPointFirstGadget";
      break;
    case TransPointSecond:
      result = "TransPointSecond";
      break;
    case TransPointSecondGadget:
      result = "TransPointSecondGadget";
      break;
    case DropItem:
      result = "DropItem";
      break;
    case Field:
      result = "Field";
      break;
    case Gadget:
      result = "Gadget";
      break;
    case Water_2:
      result = "Water";
      break;
    case GatherPoint:
      result = "GatherPoint";
      break;
    case GatherObject:
      result = "GatherObject";
      break;
    case AirflowField:
      result = "AirflowField";
      break;
    case SpeedupField:
      result = "SpeedupField";
      break;
    case Gear:
      result = "Gear";
      break;
    case Chest:
      result = "Chest";
      break;
    case EnergyBall:
      result = "EnergyBall";
      break;
    case ElemCrystal:
      result = "ElemCrystal";
      break;
    case Timeline:
      result = "Timeline";
      break;
    case Worktop:
      result = "Worktop";
      break;
    case Team:
      result = "Team";
      break;
    case Platform:
      result = "Platform";
      break;
    case AmberWind:
      result = "AmberWind";
      break;
    case EnvAnimal:
      result = "EnvAnimal";
      break;
    case SealGadget:
      result = "SealGadget";
      break;
    case Tree_0:
      result = "Tree";
      break;
    case Bush:
      result = "Bush";
      break;
    case QuestGadget:
      result = "QuestGadget";
      break;
    case Lightning:
      result = "Lightning";
      break;
    case RewardPoint:
      result = "RewardPoint";
      break;
    case RewardStatue:
      result = "RewardStatue";
      break;
    case MPLevel:
      result = "MPLevel";
      break;
    case WindSeed:
      result = "WindSeed";
      break;
    case MpPlayRewardPoint:
      result = "MpPlayRewardPoint";
      break;
    case ViewPoint:
      result = "ViewPoint";
      break;
    case RemoteAvatar:
      result = "RemoteAvatar";
      break;
    case GeneralRewardPoint:
      result = "GeneralRewardPoint";
      break;
    case PlayTeam:
      result = "PlayTeam";
      break;
    case OfferingGadget:
      result = "OfferingGadget";
      break;
    case EyePoint:
      result = "EyePoint";
      break;
    case MiracleRing:
      result = "MiracleRing";
      break;
    case Foundation:
      result = "Foundation";
      break;
    case WidgetGadget:
      result = "WidgetGadget";
      break;
    case Vehicle:
      result = "Vehicle";
      break;
    case DangerZone:
      result = "DangerZone";
      break;
    case EchoShell:
      result = "EchoShell";
      break;
    case HomeGatherObject:
      result = "HomeGatherObject";
      break;
    case Projector:
      result = "Projector";
      break;
    case Screen:
      result = "Screen";
      break;
    case CustomTile:
      result = "CustomTile";
      break;
    case FishPool:
      result = "FishPool";
      break;
    case FishRod:
      result = "FishRod";
      break;
    case CustomGadget:
      result = "CustomGadget";
      break;
    case RoguelikeOperatorGadget:
      result = "RoguelikeOperatorGadget";
      break;
    case ActivityInteractGadget:
      result = "ActivityInteractGadget";
      break;
    case BlackMud_0:
      result = "BlackMud";
      break;
    case SubEquip:
      result = "SubEquip";
      break;
    case UIInteractGadget:
      result = "UIInteractGadget";
      break;
    case NightCrowGadget:
      result = "NightCrowGadget";
      break;
    case Partner:
      result = "Partner";
      break;
    case DeshretObeliskGadget:
      result = "DeshretObeliskGadget";
      break;
    case CoinCollectLevelGadget:
      result = "CoinCollectLevelGadget";
      break;
    case PlaceHolder:
      result = "PlaceHolder";
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
        "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
        "enumValToStr",
        171);
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

// Line 177: range 0000000012125F71-0000000012129123
bool __cdecl data::enumStrToVal(const std::string *s, data::EntityType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::EntityType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::EntityType> >::pointer v10; // rax
  data::EntityType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::EntityType *ea; // [rsp+10h] [rbp-1200h]
  char v16[4592]; // [rsp+20h] [rbp-11F0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "81 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unkn"
                        "own> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> 5"
                        "60 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 <unknown> 640 4 9"
                        " <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unknown> 720 4 9 <unkn"
                        "own> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 800 4 9 <unknown> 8"
                        "16 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9 <unknown> 896 4 9"
                        " <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unknown> 976 4 9 <unkn"
                        "own> 992 4 9 <unknown> 1008 4 9 <unknown> 1024 4 9 <unknown> 1040 4 9 <unknown> 1056 4 9 <unknow"
                        "n> 1072 4 9 <unknown> 1088 4 9 <unknown> 1104 4 9 <unknown> 1120 4 9 <unknown> 1136 4 9 <unknown"
                        "> 1152 4 9 <unknown> 1168 4 9 <unknown> 1184 4 9 <unknown> 1200 4 9 <unknown> 1216 4 9 <unknown>"
                        " 1232 4 9 <unknown> 1248 4 9 <unknown> 1264 8 6 it:260 1296 8 9 <unknown> 1328 32 9 <unknown> 13"
                        "92 32 9 <unknown> 1456 2960 9 <unknown>";
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
  v4[536862759] = 61956;
  v4[536862759] = -234881024;
  v4[536862760] = 62194;
  v4[536862760] = -234881024;
  v4[536862761] = 62194;
  v4[536862762] = -219021312;
  v4[536862763] = 62194;
  v4[536862764] = -219021312;
  v4[536862765] = 62194;
  v4[536862858] = -202116109;
  v4[536862859] = -202116109;
  v4[536862860] = -202116109;
  v4[536862861] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 1328) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1359) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 1359) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1328, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1328),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
      "enumStrToVal",
      180);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 1328),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1328));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::EntityType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::EntityType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[5],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1456),
        (const char (*)[5])"None",
        (data::EntityType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[7],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1496),
        (const char (*)[7])"Avatar",
        (data::EntityType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Avatar");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[8],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1536),
        (const char (*)[8])"Monster",
        (data::EntityType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Monster");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[7],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1576),
        (const char (*)[7])"Bullet",
        (data::EntityType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Bullet");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[20],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1616),
        (const char (*)[20])"AttackPhyisicalUnit",
        (data::EntityType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "AttackPhyisicalUnit");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[4],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1656),
        (const char (*)[4])off_1A910EC0,
        (data::EntityType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, off_1A910EC0);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[7],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1696),
        (const char (*)[7])"Camera",
        (data::EntityType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Camera");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[11],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1736),
        (const char (*)[11])"EnviroArea",
        (data::EntityType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "EnviroArea");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[6],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1776),
        (const char (*)[6])"Equip",
        (data::EntityType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "Equip");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[13],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1816),
        (const char (*)[13])"MonsterEquip",
        (data::EntityType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "MonsterEquip");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[6],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1856),
        (const char (*)[6])"Grass",
        (data::EntityType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "Grass");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[6],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1896),
        (const char (*)[6])"Level",
        (data::EntityType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "Level");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[4],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1936),
        (const char (*)[4])off_1A8CA2E0,
        (data::EntityType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, off_1A8CA2E0);
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[16],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 1976),
        (const char (*)[16])"TransPointFirst",
        (data::EntityType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "TransPointFirst");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[22],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2016),
        (const char (*)[22])"TransPointFirstGadget",
        (data::EntityType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "TransPointFirstGadget");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[17],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2056),
        (const char (*)[17])"TransPointSecond",
        (data::EntityType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "TransPointSecond");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[23],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2096),
        (const char (*)[23])"TransPointSecondGadget",
        (data::EntityType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "TransPointSecondGadget");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[9],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2136),
        (const char (*)[9])"DropItem",
        (data::EntityType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "DropItem");
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[6],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2176),
        (const char (*)[6])"Field",
        (data::EntityType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "Field");
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[7],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2216),
        (const char (*)[7])"Gadget",
        (data::EntityType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "Gadget");
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[6],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2256),
        (const char (*)[6])"Water",
        (data::EntityType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "Water");
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[12],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2296),
        (const char (*)[12])"GatherPoint",
        (data::EntityType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "GatherPoint");
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[13],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2336),
        (const char (*)[13])"GatherObject",
        (data::EntityType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "GatherObject");
      *(_DWORD *)(v2 + 448) = 23;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[13],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2376),
        (const char (*)[13])"AirflowField",
        (data::EntityType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "AirflowField");
      *(_DWORD *)(v2 + 464) = 24;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[13],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2416),
        (const char (*)[13])"SpeedupField",
        (data::EntityType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "SpeedupField");
      *(_DWORD *)(v2 + 480) = 25;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[5],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2456),
        (const char (*)[5])"Gear",
        (data::EntityType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "Gear");
      *(_DWORD *)(v2 + 496) = 26;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[6],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2496),
        (const char (*)[6])"Chest",
        (data::EntityType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "Chest");
      *(_DWORD *)(v2 + 512) = 27;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[11],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2536),
        (const char (*)[11])"EnergyBall",
        (data::EntityType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "EnergyBall");
      *(_DWORD *)(v2 + 528) = 28;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[12],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2576),
        (const char (*)[12])"ElemCrystal",
        (data::EntityType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "ElemCrystal");
      *(_DWORD *)(v2 + 544) = 29;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[9],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2616),
        (const char (*)[9])"Timeline",
        (data::EntityType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "Timeline");
      *(_DWORD *)(v2 + 560) = 30;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[8],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2656),
        (const char (*)[8])"Worktop",
        (data::EntityType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "Worktop");
      *(_DWORD *)(v2 + 576) = 31;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[5],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2696),
        (const char (*)[5])"Team",
        (data::EntityType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "Team");
      *(_DWORD *)(v2 + 592) = 32;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[9],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2736),
        (const char (*)[9])"Platform",
        (data::EntityType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "Platform");
      *(_DWORD *)(v2 + 608) = 33;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[10],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2776),
        (const char (*)[10])"AmberWind",
        (data::EntityType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "AmberWind");
      *(_DWORD *)(v2 + 624) = 34;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[10],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2816),
        (const char (*)[10])"EnvAnimal",
        (data::EntityType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "EnvAnimal");
      *(_DWORD *)(v2 + 640) = 35;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[11],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2856),
        (const char (*)[11])"SealGadget",
        (data::EntityType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "SealGadget");
      *(_DWORD *)(v2 + 656) = 36;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[5],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2896),
        (const char (*)[5])"Tree",
        (data::EntityType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "Tree");
      *(_DWORD *)(v2 + 672) = 37;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[5],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2936),
        (const char (*)[5])"Bush",
        (data::EntityType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "Bush");
      *(_DWORD *)(v2 + 688) = 38;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[12],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 2976),
        (const char (*)[12])"QuestGadget",
        (data::EntityType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "QuestGadget");
      *(_DWORD *)(v2 + 704) = 39;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[10],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3016),
        (const char (*)[10])"Lightning",
        (data::EntityType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "Lightning");
      *(_DWORD *)(v2 + 720) = 40;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[12],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3056),
        (const char (*)[12])"RewardPoint",
        (data::EntityType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "RewardPoint");
      *(_DWORD *)(v2 + 736) = 41;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[13],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3096),
        (const char (*)[13])"RewardStatue",
        (data::EntityType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "RewardStatue");
      *(_DWORD *)(v2 + 752) = 42;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[8],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3136),
        (const char (*)[8])"MPLevel",
        (data::EntityType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, "MPLevel");
      *(_DWORD *)(v2 + 768) = 43;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[9],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3176),
        (const char (*)[9])"WindSeed",
        (data::EntityType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, "WindSeed");
      *(_DWORD *)(v2 + 784) = 44;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[18],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3216),
        (const char (*)[18])"MpPlayRewardPoint",
        (data::EntityType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, "MpPlayRewardPoint");
      *(_DWORD *)(v2 + 800) = 45;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[10],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3256),
        (const char (*)[10])"ViewPoint",
        (data::EntityType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, "ViewPoint");
      *(_DWORD *)(v2 + 816) = 46;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[13],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3296),
        (const char (*)[13])"RemoteAvatar",
        (data::EntityType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, "RemoteAvatar");
      *(_DWORD *)(v2 + 832) = 47;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[19],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3336),
        (const char (*)[19])"GeneralRewardPoint",
        (data::EntityType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, "GeneralRewardPoint");
      *(_DWORD *)(v2 + 848) = 48;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[9],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3376),
        (const char (*)[9])"PlayTeam",
        (data::EntityType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, "PlayTeam");
      *(_DWORD *)(v2 + 864) = 49;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[15],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3416),
        (const char (*)[15])"OfferingGadget",
        (data::EntityType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, "OfferingGadget");
      *(_DWORD *)(v2 + 880) = 50;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[9],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3456),
        (const char (*)[9])"EyePoint",
        (data::EntityType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, "EyePoint");
      *(_DWORD *)(v2 + 896) = 51;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[12],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3496),
        (const char (*)[12])"MiracleRing",
        (data::EntityType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, "MiracleRing");
      *(_DWORD *)(v2 + 912) = 52;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[11],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3536),
        (const char (*)[11])"Foundation",
        (data::EntityType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, "Foundation");
      *(_DWORD *)(v2 + 928) = 53;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[13],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3576),
        (const char (*)[13])"WidgetGadget",
        (data::EntityType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, "WidgetGadget");
      *(_DWORD *)(v2 + 944) = 54;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[8],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3616),
        (const char (*)[8])"Vehicle",
        (data::EntityType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, "Vehicle");
      *(_DWORD *)(v2 + 960) = 55;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[11],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3656),
        (const char (*)[11])"DangerZone",
        (data::EntityType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, "DangerZone");
      *(_DWORD *)(v2 + 976) = 56;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[10],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3696),
        (const char (*)[10])"EchoShell",
        (data::EntityType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, "EchoShell");
      *(_DWORD *)(v2 + 992) = 57;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[17],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3736),
        (const char (*)[17])"HomeGatherObject",
        (data::EntityType *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, "HomeGatherObject");
      *(_DWORD *)(v2 + 1008) = 58;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[10],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3776),
        (const char (*)[10])"Projector",
        (data::EntityType *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, "Projector");
      *(_DWORD *)(v2 + 1024) = 59;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[7],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3816),
        (const char (*)[7])"Screen",
        (data::EntityType *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, "Screen");
      *(_DWORD *)(v2 + 1040) = 60;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[11],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3856),
        (const char (*)[11])"CustomTile",
        (data::EntityType *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, "CustomTile");
      *(_DWORD *)(v2 + 1056) = 61;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[9],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3896),
        (const char (*)[9])"FishPool",
        (data::EntityType *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, "FishPool");
      *(_DWORD *)(v2 + 1072) = 62;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[8],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3936),
        (const char (*)[8])"FishRod",
        (data::EntityType *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, "FishRod");
      *(_DWORD *)(v2 + 1088) = 63;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[13],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 3976),
        (const char (*)[13])"CustomGadget",
        (data::EntityType *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, "CustomGadget");
      *(_DWORD *)(v2 + 1104) = 64;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[24],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4016),
        (const char (*)[24])"RoguelikeOperatorGadget",
        (data::EntityType *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, "RoguelikeOperatorGadget");
      *(_DWORD *)(v2 + 1120) = 65;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[23],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4056),
        (const char (*)[23])"ActivityInteractGadget",
        (data::EntityType *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, "ActivityInteractGadget");
      *(_DWORD *)(v2 + 1136) = 66;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[9],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4096),
        (const char (*)[9])"BlackMud",
        (data::EntityType *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, "BlackMud");
      *(_DWORD *)(v2 + 1152) = 67;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[9],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4136),
        (const char (*)[9])"SubEquip",
        (data::EntityType *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, "SubEquip");
      *(_DWORD *)(v2 + 1168) = 68;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[17],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4176),
        (const char (*)[17])"UIInteractGadget",
        (data::EntityType *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, "UIInteractGadget");
      *(_DWORD *)(v2 + 1184) = 69;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[16],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4216),
        (const char (*)[16])"NightCrowGadget",
        (data::EntityType *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, "NightCrowGadget");
      *(_DWORD *)(v2 + 1200) = 70;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[8],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4256),
        (const char (*)[8])"Partner",
        (data::EntityType *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, "Partner");
      *(_DWORD *)(v2 + 1216) = 71;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[21],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4296),
        (const char (*)[21])"DeshretObeliskGadget",
        (data::EntityType *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, "DeshretObeliskGadget");
      *(_DWORD *)(v2 + 1232) = 72;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[23],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4336),
        (const char (*)[23])"CoinCollectLevelGadget",
        (data::EntityType *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, "CoinCollectLevelGadget");
      *(_DWORD *)(v2 + 1248) = 99;
      std::pair<std::string const,data::EntityType>::pair<char const(&)[12],data::EntityType,true>(
        (std::pair<const std::string,data::EntityType> *const)(v2 + 4376),
        (const char (*)[12])"PlaceHolder",
        (data::EntityType *)(v2 + 1248));
      std::allocator<std::pair<std::string const,data::EntityType>>::allocator((std::allocator<std::pair<const std::string,data::EntityType> > *const)(v2 + 64));
      std::map<std::string,data::EntityType>::map(
        &data::enumStrToVal(std::string const&,data::EntityType &)::m,
        (std::initializer_list<std::pair<const std::string,data::EntityType> >)__PAIR128__(74LL, v2 + 1456),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::EntityType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::EntityType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::EntityType>::~map,
        &data::enumStrToVal(std::string const&,data::EntityType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::EntityType>>::~allocator((std::allocator<std::pair<const std::string,data::EntityType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::EntityType> *)(v2 + 4416);
            i != (std::pair<const std::string,data::EntityType> *)(v2 + 1456);
            std::pair<std::string const,data::EntityType>::~pair(i) )
      {
        --i;
      }
      e = (data::EntityType *)2960;
      __asan_poison_stack_memory(v2 + 1456, 2960LL);
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
    *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1264, e);
    *(std::map<std::string,data::EntityType>::iterator *)(v2 + 1264) = std::map<std::string,data::EntityType>::find(
                                                                         &data::enumStrToVal(std::string const&,data::EntityType &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1296, s);
    *(std::map<std::string,data::EntityType>::iterator *)(v2 + 1296) = std::map<std::string,data::EntityType>::end(&data::enumStrToVal(std::string const&,data::EntityType &)::m);
    v7 = (char *)(v2 + 1296);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EntityType> >::_Self *)(v2 + 1264),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EntityType> >::_Self *)(v2 + 1296));
    *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 1392) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1392) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1423) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 1423) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1392, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1392),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
        "enumStrToVal",
        263);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 1392),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1392));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::EntityType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::EntityType> > *const)(v2 + 1264));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8230) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 568) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 4544LL, v16);
  }
  return v13;
};

// Line 271: range 0000000012129124-00000000121294AE
const char *__cdecl data::getDescription(data::EntityType e)
{
  const char *result; // rax

  switch ( e )
  {
    case None_10:
      result = (const char *)&unk_1A8C3620;
      break;
    case Avatar:
      result = (const char *)&unk_1A8E0980;
      break;
    case Monster:
      result = (const char *)&unk_1A8CA420;
      break;
    case Bullet:
      result = (const char *)&unk_1A912600;
      break;
    case AttackPhyisicalUnit:
      result = (const char *)&unk_1A912640;
      break;
    case AOE:
      result = off_1A910EC0;
      break;
    case Camera:
      result = (const char *)&unk_1A912680;
      break;
    case EnviroArea:
      result = (const char *)&unk_1A9126C0;
      break;
    case Equip:
      result = (const char *)&unk_1A912700;
      break;
    case MonsterEquip:
      result = (const char *)&unk_1A912740;
      break;
    case Grass_1:
      result = (const char *)&off_1A90F200;
      break;
    case Level:
      result = (const char *)&unk_1A912780;
      break;
    case NPC:
      result = off_1A8CA2E0;
      break;
    case TransPointFirst:
      result = (const char *)&unk_1A9127C0;
      break;
    case TransPointFirstGadget:
      result = (const char *)&unk_1A912800;
      break;
    case TransPointSecond:
      result = (const char *)&unk_1A912840;
      break;
    case TransPointSecondGadget:
      result = (const char *)&unk_1A912880;
      break;
    case DropItem:
      result = (const char *)&unk_1A9128C0;
      break;
    case Field:
      result = (const char *)&unk_1A8CA4A0;
      break;
    case Gadget:
      result = (const char *)&unk_1A8CA460;
      break;
    case Water_2:
      result = (const char *)&off_1A90F1C0;
      break;
    case GatherPoint:
      result = (const char *)&unk_1A912900;
      break;
    case GatherObject:
      result = (const char *)&unk_1A912940;
      break;
    case AirflowField:
      result = (const char *)&unk_1A912980;
      break;
    case SpeedupField:
      result = (const char *)&unk_1A9129C0;
      break;
    case Gear:
      result = (const char *)&unk_1A912A00;
      break;
    case Chest:
      result = (const char *)&unk_1A912A40;
      break;
    case EnergyBall:
      result = (const char *)&unk_1A912A80;
      break;
    case ElemCrystal:
      result = (const char *)&unk_1A912AC0;
      break;
    case Timeline:
      result = (const char *)&unk_1A912B00;
      break;
    case Worktop:
      result = (const char *)&unk_1A912B40;
      break;
    case Team:
      result = (const char *)&unk_1A912B80;
      break;
    case Platform:
      result = (const char *)&unk_1A912BC0;
      break;
    case AmberWind:
      result = (const char *)&unk_1A912C00;
      break;
    case EnvAnimal:
      result = (const char *)&unk_1A912C40;
      break;
    case SealGadget:
      result = (const char *)&unk_1A912C80;
      break;
    case Tree_0:
      result = (const char *)&off_1A912CC0;
      break;
    case Bush:
      result = (const char *)&unk_1A912D00;
      break;
    case QuestGadget:
      result = (const char *)&unk_1A912D40;
      break;
    case Lightning:
      result = (const char *)&unk_1A912D80;
      break;
    case RewardPoint:
      result = (const char *)&unk_1A912DC0;
      break;
    case RewardStatue:
      result = (const char *)&unk_1A912E00;
      break;
    case MPLevel:
      result = (const char *)&unk_1A912E40;
      break;
    case WindSeed:
      result = (const char *)&unk_1A912EA0;
      break;
    case MpPlayRewardPoint:
      result = (const char *)&unk_1A912EE0;
      break;
    case ViewPoint:
      result = (const char *)&unk_1A912F20;
      break;
    case RemoteAvatar:
      result = (const char *)&unk_1A912F60;
      break;
    case GeneralRewardPoint:
      result = (const char *)&unk_1A912FE0;
      break;
    case PlayTeam:
      result = (const char *)&unk_1A913020;
      break;
    case OfferingGadget:
      result = (const char *)&unk_1A913060;
      break;
    case EyePoint:
      result = (const char *)&unk_1A9130A0;
      break;
    case MiracleRing:
      result = (const char *)&unk_1A9130E0;
      break;
    case Foundation:
      result = (const char *)&unk_1A913120;
      break;
    case WidgetGadget:
      result = (const char *)&unk_1A913160;
      break;
    case Vehicle:
      result = (const char *)&unk_1A9131A0;
      break;
    case DangerZone:
      result = (const char *)&unk_1A9131E0;
      break;
    case EchoShell:
      result = (const char *)&unk_1A913220;
      break;
    case HomeGatherObject:
      result = (const char *)&unk_1A913260;
      break;
    case Projector:
      result = (const char *)&unk_1A9132A0;
      break;
    case Screen:
      result = (const char *)&unk_1A9132E0;
      break;
    case CustomTile:
      result = (const char *)&unk_1A913320;
      break;
    case FishPool:
      result = (const char *)&unk_1A913360;
      break;
    case FishRod:
      result = (const char *)&unk_1A9133A0;
      break;
    case CustomGadget:
      result = (const char *)&unk_1A9133E0;
      break;
    case RoguelikeOperatorGadget:
      result = (const char *)&unk_1A913420;
      break;
    case ActivityInteractGadget:
      result = (const char *)&unk_1A913460;
      break;
    case BlackMud_0:
      result = (const char *)&unk_1A9134E0;
      break;
    case SubEquip:
      result = (const char *)&unk_1A913520;
      break;
    case UIInteractGadget:
      result = (const char *)&unk_1A913580;
      break;
    case NightCrowGadget:
      result = (const char *)&unk_1A9135C0;
      break;
    case Partner:
      result = (const char *)&unk_1A913600;
      break;
    case DeshretObeliskGadget:
      result = (const char *)&unk_1A913640;
      break;
    case CoinCollectLevelGadget:
      result = (const char *)&unk_1A913680;
      break;
    case PlaceHolder:
      result = (const char *)&unk_1A9136C0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 428: range 00000000121294AF-000000001212972C
const char *__cdecl data::enumValToStr(data::VehicleType e)
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
  if ( e == Skiff )
  {
    result = "Skiff";
  }
  else
  {
    if ( e > Skiff )
      goto LABEL_22;
    if ( e == None_30 )
    {
      result = "None";
      goto LABEL_17;
    }
    if ( e == Ship )
    {
      result = "Ship";
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
        "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
        "enumValToStr",
        438);
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

// Line 444: range 000000001212972D-000000001212A00E
bool __cdecl data::enumStrToVal(const std::string *s, data::VehicleType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::VehicleType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::VehicleType> >::pointer v11; // rax
  data::VehicleType second; // ecx
  char v13; // dl
  data::VehicleType *ea; // [rsp+10h] [rbp-220h]
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
                        " it:456 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
      "enumStrToVal",
      447);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::VehicleType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::VehicleType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::VehicleType>::pair<char const(&)[5],data::VehicleType,true>(
        (std::pair<const std::string,data::VehicleType> *const)(v2 + 320),
        (const char (*)[5])"None",
        (data::VehicleType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::VehicleType>::pair<char const(&)[5],data::VehicleType,true>(
        (std::pair<const std::string,data::VehicleType> *const)(v2 + 360),
        (const char (*)[5])"Ship",
        (data::VehicleType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Ship");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::VehicleType>::pair<char const(&)[6],data::VehicleType,true>(
        (std::pair<const std::string,data::VehicleType> *const)(v2 + 400),
        (const char (*)[6])"Skiff",
        (data::VehicleType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::VehicleType>>::allocator((std::allocator<std::pair<const std::string,data::VehicleType> > *const)(v2 + 64));
      std::map<std::string,data::VehicleType>::map(
        &data::enumStrToVal(std::string const&,data::VehicleType &)::m,
        (std::initializer_list<std::pair<const std::string,data::VehicleType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::VehicleType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::VehicleType &)::m);
      e = (data::VehicleType *)&data::enumStrToVal(std::string const&,data::VehicleType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::VehicleType>::~map,
        &data::enumStrToVal(std::string const&,data::VehicleType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::VehicleType>>::~allocator((std::allocator<std::pair<const std::string,data::VehicleType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::VehicleType> *)(v2 + 440);
            i != (std::pair<const std::string,data::VehicleType> *)(v2 + 320);
            std::pair<std::string const,data::VehicleType>::~pair(i) )
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
    *(std::map<std::string,data::VehicleType>::iterator *)(v2 + 128) = std::map<std::string,data::VehicleType>::find(
                                                                         &data::enumStrToVal(std::string const&,data::VehicleType &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::VehicleType>::iterator *)(v2 + 160) = std::map<std::string,data::VehicleType>::end(&data::enumStrToVal(std::string const&,data::VehicleType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::VehicleType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::VehicleType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
        "enumStrToVal",
        459);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::VehicleType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::VehicleType> > *const)(v2 + 128));
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

// Line 467: range 000000001212A00F-000000001212A053
const char *__cdecl data::getDescription(data::VehicleType e)
{
  if ( e == Skiff )
    return (const char *)&unk_1A913A20;
  if ( e > Skiff )
    return "unknown enum value!";
  if ( e == None_30 )
    return (const char *)&unk_1A8C3620;
  if ( e == Ship )
    return (const char *)&off_1A9139E0;
  else
    return "unknown enum value!";
};

// Line 482: range 000000001212A054-000000001212A392
const char *__cdecl data::enumValToStr(data::EndureType e)
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
    case None_7:
      result = "None";
      break;
    case Default_3:
      result = "Default";
      break;
    case Avatar_Sword:
      result = "Avatar_Sword";
      break;
    case Avatar_Pole:
      result = "Avatar_Pole";
      break;
    case Avatar_Claymore:
      result = "Avatar_Claymore";
      break;
    case Avatar_Bow:
      result = "Avatar_Bow";
      break;
    case Avatar_Catalyst:
      result = "Avatar_Catalyst";
      break;
    case Monster_Minion:
      result = "Monster_Minion";
      break;
    case Monster_Grunt_Humanoid:
      result = "Monster_Grunt_Humanoid";
      break;
    case Monster_Grunt_Other:
      result = "Monster_Grunt_Other";
      break;
    case Monster_Demiboss_Humanoid:
      result = "Monster_Demiboss_Humanoid";
      break;
    case Monster_Demiboss_Other:
      result = "Monster_Demiboss_Other";
      break;
    case Monster_Boss_Humanoid:
      result = "Monster_Boss_Humanoid";
      break;
    case Monster_Boss_Other:
      result = "Monster_Boss_Other";
      break;
    case Monster_Slime:
      result = "Monster_Slime";
      break;
    case Monster_Tartaglia:
      result = "Monster_Tartaglia";
      break;
    case Monster_Shougun:
      result = "Monster_Shougun";
      break;
    case Monster_Fungus_Battle:
      result = "Monster_Fungus_Battle";
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
        "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
        "enumValToStr",
        522);
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

// Line 528: range 000000001212A393-000000001212B4E5
bool __cdecl data::enumStrToVal(const std::string *s, data::EndureType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::EndureType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::EndureType> >::pointer v10; // rax
  data::EndureType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::EndureType *ea; // [rsp+10h] [rbp-5C0h]
  char v16[1456]; // [rsp+20h] [rbp-5B0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1408LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 8 6 it:555 400 8 9 <u"
                        "nknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 720 9 <unknown>";
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
  v4[536862731] = 61956;
  v4[536862731] = -234881024;
  v4[536862732] = 62194;
  v4[536862732] = -234881024;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862760] = -202116109;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  v4[536862763] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 432, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 432),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
      "enumStrToVal",
      531);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 432),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::EndureType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::EndureType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[5],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 560),
        (const char (*)[5])"None",
        (data::EndureType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[8],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 600),
        (const char (*)[8])"Default",
        (data::EndureType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Default");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[13],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 640),
        (const char (*)[13])"Avatar_Sword",
        (data::EndureType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Avatar_Sword");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[12],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 680),
        (const char (*)[12])"Avatar_Pole",
        (data::EndureType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Avatar_Pole");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[16],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 720),
        (const char (*)[16])"Avatar_Claymore",
        (data::EndureType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "Avatar_Claymore");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[11],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 760),
        (const char (*)[11])"Avatar_Bow",
        (data::EndureType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "Avatar_Bow");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[16],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 800),
        (const char (*)[16])"Avatar_Catalyst",
        (data::EndureType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Avatar_Catalyst");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[15],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 840),
        (const char (*)[15])"Monster_Minion",
        (data::EndureType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "Monster_Minion");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[23],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 880),
        (const char (*)[23])"Monster_Grunt_Humanoid",
        (data::EndureType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "Monster_Grunt_Humanoid");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[20],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 920),
        (const char (*)[20])"Monster_Grunt_Other",
        (data::EndureType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "Monster_Grunt_Other");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[26],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 960),
        (const char (*)[26])"Monster_Demiboss_Humanoid",
        (data::EndureType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "Monster_Demiboss_Humanoid");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[23],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 1000),
        (const char (*)[23])"Monster_Demiboss_Other",
        (data::EndureType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "Monster_Demiboss_Other");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[22],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 1040),
        (const char (*)[22])"Monster_Boss_Humanoid",
        (data::EndureType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "Monster_Boss_Humanoid");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[19],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 1080),
        (const char (*)[19])"Monster_Boss_Other",
        (data::EndureType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "Monster_Boss_Other");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[14],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 1120),
        (const char (*)[14])"Monster_Slime",
        (data::EndureType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "Monster_Slime");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[18],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 1160),
        (const char (*)[18])"Monster_Tartaglia",
        (data::EndureType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "Monster_Tartaglia");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[16],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 1200),
        (const char (*)[16])"Monster_Shougun",
        (data::EndureType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "Monster_Shougun");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::EndureType>::pair<char const(&)[22],data::EndureType,true>(
        (std::pair<const std::string,data::EndureType> *const)(v2 + 1240),
        (const char (*)[22])"Monster_Fungus_Battle",
        (data::EndureType *)(v2 + 352));
      std::allocator<std::pair<std::string const,data::EndureType>>::allocator((std::allocator<std::pair<const std::string,data::EndureType> > *const)(v2 + 64));
      std::map<std::string,data::EndureType>::map(
        &data::enumStrToVal(std::string const&,data::EndureType &)::m,
        (std::initializer_list<std::pair<const std::string,data::EndureType> >)__PAIR128__(18LL, v2 + 560),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::EndureType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::EndureType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::EndureType>::~map,
        &data::enumStrToVal(std::string const&,data::EndureType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::EndureType>>::~allocator((std::allocator<std::pair<const std::string,data::EndureType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::EndureType> *)(v2 + 1280);
            i != (std::pair<const std::string,data::EndureType> *)(v2 + 560);
            std::pair<std::string const,data::EndureType>::~pair(i) )
      {
        --i;
      }
      e = (data::EndureType *)720;
      __asan_poison_stack_memory(v2 + 560, 720LL);
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
    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 368, e);
    *(std::map<std::string,data::EndureType>::iterator *)(v2 + 368) = std::map<std::string,data::EndureType>::find(
                                                                        &data::enumStrToVal(std::string const&,data::EndureType &)::m,
                                                                        s);
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 400, s);
    *(std::map<std::string,data::EndureType>::iterator *)(v2 + 400) = std::map<std::string,data::EndureType>::end(&data::enumStrToVal(std::string const&,data::EndureType &)::m);
    v7 = (char *)(v2 + 400);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EndureType> >::_Self *)(v2 + 368),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EndureType> >::_Self *)(v2 + 400));
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
        "enumStrToVal",
        558);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 496),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::EndureType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::EndureType> > *const)(v2 + 368));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 176) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1408LL, v16);
  }
  return v13;
};

// Line 566: range 000000001212B4E6-000000001212B5D0
const char *__cdecl data::getDescription(data::EndureType e)
{
  const char *result; // rax

  switch ( e )
  {
    case None_7:
      result = (const char *)&unk_1A8C3620;
      break;
    case Default_3:
      result = "Default";
      break;
    case Avatar_Sword:
      result = "Avatar_Sword";
      break;
    case Avatar_Pole:
      result = "Avatar_Pole";
      break;
    case Avatar_Claymore:
      result = "Avatar_Claymore";
      break;
    case Avatar_Bow:
      result = "Avatar_Bow";
      break;
    case Avatar_Catalyst:
      result = "Avatar_Catalyst";
      break;
    case Monster_Minion:
      result = "Monster_Minion";
      break;
    case Monster_Grunt_Humanoid:
      result = "Monster_Grunt_Humanoid";
      break;
    case Monster_Grunt_Other:
      result = "Monster_Grunt_Other";
      break;
    case Monster_Demiboss_Humanoid:
      result = "Monster_Demiboss_Humanoid";
      break;
    case Monster_Demiboss_Other:
      result = "Monster_Demiboss_Other";
      break;
    case Monster_Boss_Humanoid:
      result = "Monster_Boss_Humanoid";
      break;
    case Monster_Boss_Other:
      result = "Monster_Boss_Other";
      break;
    case Monster_Slime:
      result = "Monster_Slime";
      break;
    case Monster_Tartaglia:
      result = "Monster_Tartaglia";
      break;
    case Monster_Shougun:
      result = "Monster_Shougun";
      break;
    case Monster_Fungus_Battle:
      result = "Monster_Fungus_Battle";
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 611: range 000000001212B5D1-000000001212B8D3
const char *__cdecl data::enumValToStr(data::TauntLevel e)
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
    case Ability_TauntLevel_1:
      result = "Ability_TauntLevel_1";
      break;
    case Ability_TauntLevel_2:
      result = "Ability_TauntLevel_2";
      break;
    case Ability_TauntLevel_3:
      result = "Ability_TauntLevel_3";
      break;
    case Ability_TauntLevel_4:
      result = "Ability_TauntLevel_4";
      break;
    case Ability_TauntLevel_5:
      result = "Ability_TauntLevel_5";
      break;
    case Ability_TauntLevel_MAX:
      result = "Ability_TauntLevel_MAX";
      break;
    case Monster_TauntLevel_1:
      result = "Monster_TauntLevel_1";
      break;
    case Monster_TauntLevel_2:
      result = "Monster_TauntLevel_2";
      break;
    case Monster_TauntLevel_3:
      result = "Monster_TauntLevel_3";
      break;
    case Monster_TauntLevel_4:
      result = "Monster_TauntLevel_4";
      break;
    case Monster_TauntLevel_5:
      result = "Monster_TauntLevel_5";
      break;
    case Monster_TauntLevel_6:
      result = "Monster_TauntLevel_6";
      break;
    case Monster_TauntLevel_MAX:
      result = "Monster_TauntLevel_MAX";
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
        "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
        "enumValToStr",
        641);
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

// Line 647: range 000000001212B8D4-000000001212C748
bool __cdecl data::enumStrToVal(const std::string *s, data::TauntLevel *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::TauntLevel> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TauntLevel> >::pointer v10; // rax
  data::TauntLevel second; // ecx
  char v12; // dl
  bool v13; // bl
  data::TauntLevel *ea; // [rsp+10h] [rbp-4A0h]
  char v16[1168]; // [rsp+20h] [rbp-490h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1120LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "20 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 8 6 it:669 304 8"
                        " 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 520 9 <unknown>";
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
  v4[536862728] = 61956;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862750] = -218103808;
  v4[536862751] = -202116109;
  v4[536862752] = -202116109;
  v4[536862753] = -202116109;
  v4[536862754] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
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
      "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
      "enumStrToVal",
      650);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 336),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TauntLevel &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TauntLevel &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 464),
        (const char (*)[21])"Ability_TauntLevel_1",
        (data::TauntLevel *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Ability_TauntLevel_1");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 504),
        (const char (*)[21])"Ability_TauntLevel_2",
        (data::TauntLevel *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Ability_TauntLevel_2");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 544),
        (const char (*)[21])"Ability_TauntLevel_3",
        (data::TauntLevel *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Ability_TauntLevel_3");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 584),
        (const char (*)[21])"Ability_TauntLevel_4",
        (data::TauntLevel *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Ability_TauntLevel_4");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 624),
        (const char (*)[21])"Ability_TauntLevel_5",
        (data::TauntLevel *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Ability_TauntLevel_5");
      *(_DWORD *)(v2 + 144) = 10;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[23],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 664),
        (const char (*)[23])"Ability_TauntLevel_MAX",
        (data::TauntLevel *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "Ability_TauntLevel_MAX");
      *(_DWORD *)(v2 + 160) = 11;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 704),
        (const char (*)[21])"Monster_TauntLevel_1",
        (data::TauntLevel *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "Monster_TauntLevel_1");
      *(_DWORD *)(v2 + 176) = 12;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 744),
        (const char (*)[21])"Monster_TauntLevel_2",
        (data::TauntLevel *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Monster_TauntLevel_2");
      *(_DWORD *)(v2 + 192) = 13;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 784),
        (const char (*)[21])"Monster_TauntLevel_3",
        (data::TauntLevel *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "Monster_TauntLevel_3");
      *(_DWORD *)(v2 + 208) = 14;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 824),
        (const char (*)[21])"Monster_TauntLevel_4",
        (data::TauntLevel *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "Monster_TauntLevel_4");
      *(_DWORD *)(v2 + 224) = 15;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 864),
        (const char (*)[21])"Monster_TauntLevel_5",
        (data::TauntLevel *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "Monster_TauntLevel_5");
      *(_DWORD *)(v2 + 240) = 16;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[21],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 904),
        (const char (*)[21])"Monster_TauntLevel_6",
        (data::TauntLevel *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "Monster_TauntLevel_6");
      *(_DWORD *)(v2 + 256) = 20;
      std::pair<std::string const,data::TauntLevel>::pair<char const(&)[23],data::TauntLevel,true>(
        (std::pair<const std::string,data::TauntLevel> *const)(v2 + 944),
        (const char (*)[23])"Monster_TauntLevel_MAX",
        (data::TauntLevel *)(v2 + 256));
      std::allocator<std::pair<std::string const,data::TauntLevel>>::allocator((std::allocator<std::pair<const std::string,data::TauntLevel> > *const)(v2 + 48));
      std::map<std::string,data::TauntLevel>::map(
        &data::enumStrToVal(std::string const&,data::TauntLevel &)::m,
        (std::initializer_list<std::pair<const std::string,data::TauntLevel> >)__PAIR128__(13LL, v2 + 464),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::TauntLevel>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TauntLevel &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TauntLevel>::~map,
        &data::enumStrToVal(std::string const&,data::TauntLevel &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TauntLevel>>::~allocator((std::allocator<std::pair<const std::string,data::TauntLevel> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TauntLevel> *)(v2 + 984);
            i != (std::pair<const std::string,data::TauntLevel> *)(v2 + 464);
            std::pair<std::string const,data::TauntLevel>::~pair(i) )
      {
        --i;
      }
      e = (data::TauntLevel *)520;
      __asan_poison_stack_memory(v2 + 464, 520LL);
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
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, e);
    *(std::map<std::string,data::TauntLevel>::iterator *)(v2 + 272) = std::map<std::string,data::TauntLevel>::find(
                                                                        &data::enumStrToVal(std::string const&,data::TauntLevel &)::m,
                                                                        s);
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 304, s);
    *(std::map<std::string,data::TauntLevel>::iterator *)(v2 + 304) = std::map<std::string,data::TauntLevel>::end(&data::enumStrToVal(std::string const&,data::TauntLevel &)::m);
    v7 = (char *)(v2 + 304);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TauntLevel> >::_Self *)(v2 + 272),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TauntLevel> >::_Self *)(v2 + 304));
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigEntityType.cpp",
        "enumStrToVal",
        672);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 400),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::TauntLevel>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TauntLevel> > *const)(v2 + 272));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1120LL, v16);
  }
  return v13;
};

// Line 680: range 000000001212C749-000000001212C7FA
const char *__cdecl data::getDescription(data::TauntLevel e)
{
  const char *result; // rax

  switch ( e )
  {
    case Ability_TauntLevel_1:
      result = (const char *)&unk_1A891C40;
      break;
    case Ability_TauntLevel_2:
      result = (const char *)&unk_1A891C40;
      break;
    case Ability_TauntLevel_3:
      result = (const char *)&unk_1A891C40;
      break;
    case Ability_TauntLevel_4:
      result = (const char *)&unk_1A891C40;
      break;
    case Ability_TauntLevel_5:
      result = (const char *)&unk_1A891C40;
      break;
    case Ability_TauntLevel_MAX:
      result = (const char *)&unk_1A891C40;
      break;
    case Monster_TauntLevel_1:
      result = (const char *)&unk_1A891C40;
      break;
    case Monster_TauntLevel_2:
      result = (const char *)&unk_1A891C40;
      break;
    case Monster_TauntLevel_3:
      result = (const char *)&unk_1A891C40;
      break;
    case Monster_TauntLevel_4:
      result = (const char *)&unk_1A891C40;
      break;
    case Monster_TauntLevel_5:
      result = (const char *)&unk_1A891C40;
      break;
    case Monster_TauntLevel_6:
      result = (const char *)&unk_1A891C40;
      break;
    case Monster_TauntLevel_MAX:
      result = (const char *)&unk_1A891C40;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 714: range 00000000121333BE-00000000121333D2
void __cdecl GLOBAL__sub_I_merge_merge_ConfigCombatSpeech_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 714: range 000000001212C7FB-00000000121333BD
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,std::shared_ptr<data::ConfigEntityAudio> > *i; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase> > *j; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  std::pair<const std::string,std::shared_ptr<data::IndicatorCondition> > *k; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigBaseEquipController> > *m; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction> > *n; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigGadgetPattern> > *ii; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigMultiBullet> > *jj; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  std::pair<const std::string,std::shared_ptr<data::TemplateParam> > *kk; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > *mm; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > *nn; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigVODPlayer> > *i1; // rbx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > *i2; // rbx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigAbilityTask> > *i3; // rbx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigAudioOperation> > *i4; // rbx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigMist> > *i5; // rbx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigLevelNpcBornPos> > *i6; // rbx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  std::pair<const std::string,std::shared_ptr<data::NpcActionCondBase> > *i7; // rbx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigNpcBaseAction> > *i8; // rbx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigRecordActorBase> > *i9; // rbx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigRegionalPlayBase> > *i10; // rbx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > *i11; // rbx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigSkin> > *i12; // rbx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigWidgetAction> > *i13; // rbx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigWidgetPredict> > *i14; // rbx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigAICareAbout> > *i15; // rbx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigBaseAttackPattern> > *i16; // rbx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigPolygonZone> > *i17; // rbx
  unsigned __int64 v83; // rax
  _BYTE *v84; // rcx
  char v85; // dl
  std::shared_ptr<data::ConfigFishingZoneFactory> *v86; // rsi
  __int64 v87; // rdx
  _BYTE *v88; // rcx
  char v89; // dl
  __int64 v90; // rdx
  const char *v91; // rcx
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase> > > __l; // [rsp+10h] [rbp-1140h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::IndicatorCondition> > > v93; // [rsp+20h] [rbp-1130h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseEquipController> > > v94; // [rsp+30h] [rbp-1120h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction> > > v95; // [rsp+40h] [rbp-1110h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigGadgetPattern> > > v96; // [rsp+50h] [rbp-1100h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMultiBullet> > > v97; // [rsp+60h] [rbp-10F0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::TemplateParam> > > v98; // [rsp+70h] [rbp-10E0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > > v99; // [rsp+80h] [rbp-10D0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > > v100; // [rsp+90h] [rbp-10C0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigVODPlayer> > > v101; // [rsp+A0h] [rbp-10B0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > > v102; // [rsp+B0h] [rbp-10A0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityTask> > > v103; // [rsp+C0h] [rbp-1090h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAudioOperation> > > v104; // [rsp+D0h] [rbp-1080h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMist> > > v105; // [rsp+E0h] [rbp-1070h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigLevelNpcBornPos> > > v106; // [rsp+F0h] [rbp-1060h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::NpcActionCondBase> > > v107; // [rsp+100h] [rbp-1050h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigNpcBaseAction> > > v108; // [rsp+110h] [rbp-1040h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigRecordActorBase> > > v109; // [rsp+120h] [rbp-1030h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigRegionalPlayBase> > > v110; // [rsp+130h] [rbp-1020h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > > v111; // [rsp+140h] [rbp-1010h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigSkin> > > v112; // [rsp+150h] [rbp-1000h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigWidgetAction> > > v113; // [rsp+160h] [rbp-FF0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigWidgetPredict> > > v114; // [rsp+170h] [rbp-FE0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAICareAbout> > > v115; // [rsp+180h] [rbp-FD0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseAttackPattern> > > v116; // [rsp+190h] [rbp-FC0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigPolygonZone> > > v117; // [rsp+1A0h] [rbp-FB0h]
  unsigned __int64 v118; // [rsp+1B0h] [rbp-FA0h]
  char v119[3984]; // [rsp+1C0h] [rbp-F90h] BYREF

  v118 = (unsigned __int64)v119;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(3936LL);
    if ( v2 )
      v118 = v2;
  }
  *(_QWORD *)v118 = 1102416563LL;
  *(_QWORD *)(v118 + 8) = "108 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 "
                          "1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 "
                          "<unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unk"
                          "nown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown"
                          "> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 46"
                          "4 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 "
                          "9 <unknown> 560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9 <u"
                          "nknown> 640 1 9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unkno"
                          "wn> 720 1 9 <unknown> 736 1 9 <unknown> 752 1 9 <unknown> 768 1 9 <unknown> 784 1 9 <unknown> "
                          "800 1 9 <unknown> 816 1 9 <unknown> 832 1 9 <unknown> 848 1 9 <unknown> 864 1 9 <unknown> 880 "
                          "1 9 <unknown> 896 1 9 <unknown> 912 16 9 <unknown> 944 16 9 <unknown> 976 16 9 <unknown> 1008 "
                          "16 9 <unknown> 1040 16 9 <unknown> 1072 16 9 <unknown> 1104 16 9 <unknown> 1136 16 9 <unknown>"
                          " 1168 16 9 <unknown> 1200 16 9 <unknown> 1232 16 9 <unknown> 1264 16 9 <unknown> 1296 16 9 <un"
                          "known> 1328 16 9 <unknown> 1360 16 9 <unknown> 1392 16 9 <unknown> 1424 16 9 <unknown> 1456 16"
                          " 9 <unknown> 1488 16 9 <unknown> 1520 16 9 <unknown> 1552 16 9 <unknown> 1584 16 9 <unknown> 1"
                          "616 16 9 <unknown> 1648 16 9 <unknown> 1680 16 9 <unknown> 1712 16 9 <unknown> 1744 16 9 <unkn"
                          "own> 1776 48 9 <unknown> 1856 48 9 <unknown> 1936 48 9 <unknown> 2016 48 9 <unknown> 2096 48 9"
                          " <unknown> 2176 48 9 <unknown> 2256 48 9 <unknown> 2336 48 9 <unknown> 2416 48 9 <unknown> 249"
                          "6 48 9 <unknown> 2576 48 9 <unknown> 2656 48 9 <unknown> 2736 48 9 <unknown> 2816 48 9 <unknow"
                          "n> 2896 48 9 <unknown> 2976 48 9 <unknown> 3056 48 9 <unknown> 3136 48 9 <unknown> 3216 48 9 <"
                          "unknown> 3296 48 9 <unknown> 3376 48 9 <unknown> 3456 48 9 <unknown> 3536 48 9 <unknown> 3616 "
                          "48 9 <unknown> 3696 48 9 <unknown> 3776 48 9 <unknown> 3856 48 9 <unknown>";
  *(_QWORD *)(v118 + 16) = __static_initialization_and_destruction_0;
  v3 = (_DWORD *)(v118 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234753535;
  v3[536862724] = -234753535;
  v3[536862725] = -234753535;
  v3[536862726] = -234753535;
  v3[536862727] = -234753535;
  v3[536862728] = -234753535;
  v3[536862729] = -234753535;
  v3[536862730] = -234753535;
  v3[536862731] = -234753535;
  v3[536862732] = -234753535;
  v3[536862733] = -234753535;
  v3[536862734] = -234753535;
  v3[536862735] = -234753535;
  v3[536862736] = -234753535;
  v3[536862737] = -234753535;
  v3[536862738] = -234753535;
  v3[536862739] = -234753535;
  v3[536862740] = -234753535;
  v3[536862741] = -234753535;
  v3[536862742] = -234753535;
  v3[536862743] = -234753535;
  v3[536862744] = -234753535;
  v3[536862745] = -234753535;
  v3[536862746] = -234753535;
  v3[536862747] = -234753535;
  v3[536862748] = 61953;
  v3[536862749] = 62194;
  v3[536862750] = 62194;
  v3[536862751] = 62194;
  v3[536862752] = 62194;
  v3[536862753] = 62194;
  v3[536862754] = 62194;
  v3[536862755] = 62194;
  v3[536862756] = 62194;
  v3[536862757] = 62194;
  v3[536862758] = 62194;
  v3[536862759] = 62194;
  v3[536862760] = 62194;
  v3[536862761] = 62194;
  v3[536862762] = 62194;
  v3[536862763] = 62194;
  v3[536862764] = 62194;
  v3[536862765] = 62194;
  v3[536862766] = 62194;
  v3[536862767] = 62194;
  v3[536862768] = 62194;
  v3[536862769] = 62194;
  v3[536862770] = 62194;
  v3[536862771] = 62194;
  v3[536862772] = 62194;
  v3[536862773] = 62194;
  v3[536862774] = 62194;
  v3[536862775] = 62194;
  v3[536862777] = -218959118;
  v3[536862779] = -219021312;
  v3[536862780] = 62194;
  v3[536862782] = -218959118;
  v3[536862784] = -219021312;
  v3[536862785] = 62194;
  v3[536862787] = -218959118;
  v3[536862789] = -219021312;
  v3[536862790] = 62194;
  v3[536862792] = -218959118;
  v3[536862794] = -219021312;
  v3[536862795] = 62194;
  v3[536862797] = -218959118;
  v3[536862799] = -219021312;
  v3[536862800] = 62194;
  v3[536862802] = -218959118;
  v3[536862804] = -219021312;
  v3[536862805] = 62194;
  v3[536862807] = -218959118;
  v3[536862809] = -219021312;
  v3[536862810] = 62194;
  v3[536862812] = -218959118;
  v3[536862814] = -219021312;
  v3[536862815] = 62194;
  v3[536862817] = -218959118;
  v3[536862819] = -219021312;
  v3[536862820] = 62194;
  v3[536862822] = -218959118;
  v3[536862824] = -219021312;
  v3[536862825] = 62194;
  v3[536862827] = -218959118;
  v3[536862829] = -219021312;
  v3[536862830] = 62194;
  v3[536862832] = -218959118;
  v3[536862834] = -219021312;
  v3[536862835] = 62194;
  v3[536862837] = -218959118;
  v3[536862839] = -219021312;
  v3[536862840] = 62194;
  v3[536862842] = -202116109;
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_ConfigCombatSpeech.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      if ( *(_WORD *)(((v118 + 912) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigEntityAudio>();
      std::pair<std::string const,std::shared_ptr<data::ConfigEntityAudio>>::pair<char const(&)[18],std::shared_ptr<data::ConfigEntityAudio>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigEntityAudio> > *const)(v118 + 1776),
        (const char (*)[18])"ConfigEntityAudio",
        (std::shared_ptr<data::ConfigEntityAudio> *)(v118 + 912));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigEntityAudio>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigEntityAudio> > > *const)(v118 + 64));
      std::map<std::string,std::shared_ptr<data::ConfigEntityAudio>>::map(
        &data::g_ConfigEntityAudioMap[abi:cxx11],
        (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigEntityAudio> > >)__PAIR128__(1LL, v118 + 1776),
        (const std::less<std::string > *)(v118 + 48),
        (const std::map<std::string,std::shared_ptr<data::ConfigEntityAudio>>::allocator_type *)(v118 + 64));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigEntityAudio>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigEntityAudio> > > *const)(v118 + 64));
      *(_BYTE *)(((v118 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,std::shared_ptr<data::ConfigEntityAudio> > *)(v118 + 1824);
            i != (std::pair<const std::string,std::shared_ptr<data::ConfigEntityAudio> > *)(v118 + 1776);
            std::pair<std::string const,std::shared_ptr<data::ConfigEntityAudio>>::~pair(i) )
      {
        --i;
      }
      v5 = ((v118 + 1776) >> 3) + 2147450880;
      *(_DWORD *)v5 = -117901064;
      *(_WORD *)(v5 + 4) = -1800;
      std::shared_ptr<data::ConfigEntityAudio>::~shared_ptr((std::shared_ptr<data::ConfigEntityAudio> *const)(v118 + 912));
      *(_WORD *)(((v118 + 912) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigEntityAudio>>::~map,
        &data::g_ConfigEntityAudioMap[abi:cxx11],
        &_dso_handle);
      data::ConfigGadgetAudioRegister::ConfigGadgetAudioRegister(&data::g_ConfigGadgetAudioRegister);
      data::ConfigVehicleAudioRegister::ConfigVehicleAudioRegister(&data::g_ConfigVehicleAudioRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigVehicleAudioFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigVehicleAudioFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigVehicleAudioFactory>::~shared_ptr,
        &data::ConfigVehicleAudioFactory::instance_ptr,
        &_dso_handle);
      data::ConfigCharacterAudioRegister::ConfigCharacterAudioRegister(&data::g_ConfigCharacterAudioRegister);
      data::ConfigAvatarAudioRegister::ConfigAvatarAudioRegister(&data::g_ConfigAvatarAudioRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAvatarAudioFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAvatarAudioFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAvatarAudioFactory>::~shared_ptr,
        &data::ConfigAvatarAudioFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMonsterAudioRegister::ConfigMonsterAudioRegister(&data::g_ConfigMonsterAudioRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMonsterAudioFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMonsterAudioFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMonsterAudioFactory>::~shared_ptr,
        &data::ConfigMonsterAudioFactory::instance_ptr,
        &_dso_handle);
      v6 = ((v118 + 1856) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      *(_WORD *)(((v118 + 944) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 944) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAudioEventCullingRuleBase>();
      std::pair<std::string const,std::shared_ptr<data::ConfigAudioEventCullingRuleBase>>::pair<char const(&)[32],std::shared_ptr<data::ConfigAudioEventCullingRuleBase>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase> > *const)(v118 + 1856),
        (const char (*)[32])"ConfigAudioEventCullingRuleBase",
        (std::shared_ptr<data::ConfigAudioEventCullingRuleBase> *)(v118 + 944));
      __l._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase> > >::iterator)(v118 + 1856);
      __l._M_len = 1LL;
      *(_BYTE *)(((v118 + 80) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAudioEventCullingRuleBase>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase> > > *const)(v118 + 96));
      std::map<std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase>>::map(
        &data::g_ConfigAudioEventCullingRuleBaseMap[abi:cxx11],
        __l,
        (const std::less<std::string > *)(v118 + 80),
        (const std::map<std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase>>::allocator_type *)(v118 + 96));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAudioEventCullingRuleBase>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase> > > *const)(v118 + 96));
      *(_BYTE *)(((v118 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 80) >> 3) + 0x7FFF8000) = -8;
      for ( j = (std::pair<const std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase> > *)(v118 + 1904);
            j != (std::pair<const std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase> > *)(v118 + 1856);
            std::pair<std::string const,std::shared_ptr<data::ConfigAudioEventCullingRuleBase>>::~pair(j) )
      {
        --j;
      }
      v8 = ((v118 + 1856) >> 3) + 2147450880;
      *(_DWORD *)v8 = -117901064;
      *(_WORD *)(v8 + 4) = -1800;
      std::shared_ptr<data::ConfigAudioEventCullingRuleBase>::~shared_ptr((std::shared_ptr<data::ConfigAudioEventCullingRuleBase> *const)(v118 + 944));
      *(_WORD *)(((v118 + 944) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigAudioEventCullingRuleBase>>::~map,
        &data::g_ConfigAudioEventCullingRuleBaseMap[abi:cxx11],
        &_dso_handle);
      data::ConfigRuleCullingDistanceRegister::ConfigRuleCullingDistanceRegister(&data::g_ConfigRuleCullingDistanceRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRuleCullingDistanceFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRuleCullingDistanceFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRuleCullingDistanceFactory>::~shared_ptr,
        &data::ConfigRuleCullingDistanceFactory::instance_ptr,
        &_dso_handle);
      data::ConfigRuleWaitDistanceRegister::ConfigRuleWaitDistanceRegister(&data::g_ConfigRuleWaitDistanceRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRuleWaitDistanceFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRuleWaitDistanceFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRuleWaitDistanceFactory>::~shared_ptr,
        &data::ConfigRuleWaitDistanceFactory::instance_ptr,
        &_dso_handle);
      data::ConfigRuleLimitFrameGlobalRegister::ConfigRuleLimitFrameGlobalRegister(&data::g_ConfigRuleLimitFrameGlobalRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRuleLimitFrameGlobalFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRuleLimitFrameGlobalFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRuleLimitFrameGlobalFactory>::~shared_ptr,
        &data::ConfigRuleLimitFrameGlobalFactory::instance_ptr,
        &_dso_handle);
      data::ConfigRuleLimitFrameRegister::ConfigRuleLimitFrameRegister(&data::g_ConfigRuleLimitFrameRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRuleLimitFrameFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRuleLimitFrameFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRuleLimitFrameFactory>::~shared_ptr,
        &data::ConfigRuleLimitFrameFactory::instance_ptr,
        &_dso_handle);
      data::ConfigRuleCullingEventNameContainRegister::ConfigRuleCullingEventNameContainRegister(&data::g_ConfigRuleCullingEventNameContainRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRuleCullingEventNameContainFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRuleCullingEventNameContainFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRuleCullingEventNameContainFactory>::~shared_ptr,
        &data::ConfigRuleCullingEventNameContainFactory::instance_ptr,
        &_dso_handle);
      data::ConfigRuleCullingEventRegister::ConfigRuleCullingEventRegister(&data::g_ConfigRuleCullingEventRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRuleCullingEventFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRuleCullingEventFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRuleCullingEventFactory>::~shared_ptr,
        &data::ConfigRuleCullingEventFactory::instance_ptr,
        &_dso_handle);
      v9 = ((v118 + 1936) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_WORD *)(v9 + 4) = 0;
      *(_WORD *)(((v118 + 976) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 976) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::IndicatorCondition>();
      std::pair<std::string const,std::shared_ptr<data::IndicatorCondition>>::pair<char const(&)[19],std::shared_ptr<data::IndicatorCondition>,true>(
        (std::pair<const std::string,std::shared_ptr<data::IndicatorCondition> > *const)(v118 + 1936),
        (const char (*)[19])"IndicatorCondition",
        (std::shared_ptr<data::IndicatorCondition> *)(v118 + 976));
      v93._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::IndicatorCondition> > >::iterator)(v118 + 1936);
      v93._M_len = 1LL;
      *(_BYTE *)(((v118 + 112) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::IndicatorCondition>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::IndicatorCondition> > > *const)(v118 + 128));
      std::map<std::string,std::shared_ptr<data::IndicatorCondition>>::map(
        &data::g_IndicatorConditionMap[abi:cxx11],
        v93,
        (const std::less<std::string > *)(v118 + 112),
        (const std::map<std::string,std::shared_ptr<data::IndicatorCondition>>::allocator_type *)(v118 + 128));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::IndicatorCondition>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::IndicatorCondition> > > *const)(v118 + 128));
      *(_BYTE *)(((v118 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( k = (std::pair<const std::string,std::shared_ptr<data::IndicatorCondition> > *)(v118 + 1984);
            k != (std::pair<const std::string,std::shared_ptr<data::IndicatorCondition> > *)(v118 + 1936);
            std::pair<std::string const,std::shared_ptr<data::IndicatorCondition>>::~pair(k) )
      {
        --k;
      }
      v11 = ((v118 + 1936) >> 3) + 2147450880;
      *(_DWORD *)v11 = -117901064;
      *(_WORD *)(v11 + 4) = -1800;
      std::shared_ptr<data::IndicatorCondition>::~shared_ptr((std::shared_ptr<data::IndicatorCondition> *const)(v118 + 976));
      *(_WORD *)(((v118 + 976) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::IndicatorCondition>>::~map,
        &data::g_IndicatorConditionMap[abi:cxx11],
        &_dso_handle);
      data::IndicatorConditionGadgetStateRegister::IndicatorConditionGadgetStateRegister(&data::g_IndicatorConditionGadgetStateRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::IndicatorConditionGadgetStateFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::IndicatorConditionGadgetStateFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::IndicatorConditionGadgetStateFactory>::~shared_ptr,
        &data::IndicatorConditionGadgetStateFactory::instance_ptr,
        &_dso_handle);
      data::IndicatorConditionAllowInteractRegister::IndicatorConditionAllowInteractRegister(&data::g_IndicatorConditionAllowInteractRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::IndicatorConditionAllowInteractFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::IndicatorConditionAllowInteractFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::IndicatorConditionAllowInteractFactory>::~shared_ptr,
        &data::IndicatorConditionAllowInteractFactory::instance_ptr,
        &_dso_handle);
      data::IndicatorConditionDummyPointDistanceRegister::IndicatorConditionDummyPointDistanceRegister(&data::g_IndicatorConditionDummyPointDistanceRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::IndicatorConditionDummyPointDistanceFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::IndicatorConditionDummyPointDistanceFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::IndicatorConditionDummyPointDistanceFactory>::~shared_ptr,
        &data::IndicatorConditionDummyPointDistanceFactory::instance_ptr,
        &_dso_handle);
      data::IndicatorConditionAvatarDistanceRegister::IndicatorConditionAvatarDistanceRegister(&data::g_IndicatorConditionAvatarDistanceRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::IndicatorConditionAvatarDistanceFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::IndicatorConditionAvatarDistanceFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::IndicatorConditionAvatarDistanceFactory>::~shared_ptr,
        &data::IndicatorConditionAvatarDistanceFactory::instance_ptr,
        &_dso_handle);
      data::IndicatorConditionKilledRegister::IndicatorConditionKilledRegister(&data::g_IndicatorConditionKilledRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::IndicatorConditionKilledFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::IndicatorConditionKilledFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::IndicatorConditionKilledFactory>::~shared_ptr,
        &data::IndicatorConditionKilledFactory::instance_ptr,
        &_dso_handle);
      data::IndicatorConditionPlayerLevelRegister::IndicatorConditionPlayerLevelRegister(&data::g_IndicatorConditionPlayerLevelRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::IndicatorConditionPlayerLevelFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::IndicatorConditionPlayerLevelFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::IndicatorConditionPlayerLevelFactory>::~shared_ptr,
        &data::IndicatorConditionPlayerLevelFactory::instance_ptr,
        &_dso_handle);
      data::IndicatorConditionSceneTransPointLockStateRegister::IndicatorConditionSceneTransPointLockStateRegister(&data::g_IndicatorConditionSceneTransPointLockStateRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::IndicatorConditionSceneTransPointLockStateFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::IndicatorConditionSceneTransPointLockStateFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::IndicatorConditionSceneTransPointLockStateFactory>::~shared_ptr,
        &data::IndicatorConditionSceneTransPointLockStateFactory::instance_ptr,
        &_dso_handle);
      v12 = ((v118 + 2016) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_WORD *)(v12 + 4) = 0;
      *(_WORD *)(((v118 + 1008) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1008) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBaseEquipController>();
      std::pair<std::string const,std::shared_ptr<data::ConfigBaseEquipController>>::pair<char const(&)[26],std::shared_ptr<data::ConfigBaseEquipController>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigBaseEquipController> > *const)(v118 + 2016),
        (const char (*)[26])"ConfigBaseEquipController",
        (std::shared_ptr<data::ConfigBaseEquipController> *)(v118 + 1008));
      v94._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseEquipController> > >::iterator)(v118 + 2016);
      v94._M_len = 1LL;
      *(_BYTE *)(((v118 + 144) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 160) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseEquipController>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseEquipController> > > *const)(v118 + 160));
      std::map<std::string,std::shared_ptr<data::ConfigBaseEquipController>>::map(
        &data::g_ConfigBaseEquipControllerMap[abi:cxx11],
        v94,
        (const std::less<std::string > *)(v118 + 144),
        (const std::map<std::string,std::shared_ptr<data::ConfigBaseEquipController>>::allocator_type *)(v118 + 160));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseEquipController>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseEquipController> > > *const)(v118 + 160));
      *(_BYTE *)(((v118 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 144) >> 3) + 0x7FFF8000) = -8;
      for ( m = (std::pair<const std::string,std::shared_ptr<data::ConfigBaseEquipController> > *)(v118 + 2064);
            m != (std::pair<const std::string,std::shared_ptr<data::ConfigBaseEquipController> > *)(v118 + 2016);
            std::pair<std::string const,std::shared_ptr<data::ConfigBaseEquipController>>::~pair(m) )
      {
        --m;
      }
      v14 = ((v118 + 2016) >> 3) + 2147450880;
      *(_DWORD *)v14 = -117901064;
      *(_WORD *)(v14 + 4) = -1800;
      std::shared_ptr<data::ConfigBaseEquipController>::~shared_ptr((std::shared_ptr<data::ConfigBaseEquipController> *const)(v118 + 1008));
      *(_WORD *)(((v118 + 1008) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigBaseEquipController>>::~map,
        &data::g_ConfigBaseEquipControllerMap[abi:cxx11],
        &_dso_handle);
      data::ConfigEquipControllerRegister::ConfigEquipControllerRegister(&data::g_ConfigEquipControllerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigEquipControllerFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigEquipControllerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigEquipControllerFactory>::~shared_ptr,
        &data::ConfigEquipControllerFactory::instance_ptr,
        &_dso_handle);
      data::ConfigSubEquipControllerRegister::ConfigSubEquipControllerRegister(&data::g_ConfigSubEquipControllerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigSubEquipControllerFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigSubEquipControllerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigSubEquipControllerFactory>::~shared_ptr,
        &data::ConfigSubEquipControllerFactory::instance_ptr,
        &_dso_handle);
      v15 = ((v118 + 2096) >> 3) + 2147450880;
      *(_DWORD *)v15 = 0;
      *(_WORD *)(v15 + 4) = 0;
      *(_WORD *)(((v118 + 1040) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1040) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBaseGadgetTriggerAction>();
      std::pair<std::string const,std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::pair<char const(&)[30],std::shared_ptr<data::ConfigBaseGadgetTriggerAction>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction> > *const)(v118 + 2096),
        (const char (*)[30])"ConfigBaseGadgetTriggerAction",
        (std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *)(v118 + 1040));
      v95._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction> > >::iterator)(v118 + 2096);
      v95._M_len = 1LL;
      *(_BYTE *)(((v118 + 176) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 192) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction> > > *const)(v118 + 192));
      std::map<std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::map(
        &data::g_ConfigBaseGadgetTriggerActionMap[abi:cxx11],
        v95,
        (const std::less<std::string > *)(v118 + 176),
        (const std::map<std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::allocator_type *)(v118 + 192));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction> > > *const)(v118 + 192));
      *(_BYTE *)(((v118 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 176) >> 3) + 0x7FFF8000) = -8;
      for ( n = (std::pair<const std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction> > *)(v118 + 2144);
            n != (std::pair<const std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction> > *)(v118 + 2096);
            std::pair<std::string const,std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::~pair(n) )
      {
        --n;
      }
      v17 = ((v118 + 2096) >> 3) + 2147450880;
      *(_DWORD *)v17 = -117901064;
      *(_WORD *)(v17 + 4) = -1800;
      std::shared_ptr<data::ConfigBaseGadgetTriggerAction>::~shared_ptr((std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *const)(v118 + 1040));
      *(_WORD *)(((v118 + 1040) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::~map,
        &data::g_ConfigBaseGadgetTriggerActionMap[abi:cxx11],
        &_dso_handle);
      data::ConfigGadgetDoAttackEventRegister::ConfigGadgetDoAttackEventRegister(&data::g_ConfigGadgetDoAttackEventRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigGadgetDoAttackEventFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGadgetDoAttackEventFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigGadgetDoAttackEventFactory>::~shared_ptr,
        &data::ConfigGadgetDoAttackEventFactory::instance_ptr,
        &_dso_handle);
      data::ConfigGadgetTriggerAbilityRegister::ConfigGadgetTriggerAbilityRegister(&data::g_ConfigGadgetTriggerAbilityRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigGadgetTriggerAbilityFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGadgetTriggerAbilityFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigGadgetTriggerAbilityFactory>::~shared_ptr,
        &data::ConfigGadgetTriggerAbilityFactory::instance_ptr,
        &_dso_handle);
      data::ConfigGadgetDamageByAttackValueRegister::ConfigGadgetDamageByAttackValueRegister(&data::g_ConfigGadgetDamageByAttackValueRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigGadgetDamageByAttackValueFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGadgetDamageByAttackValueFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigGadgetDamageByAttackValueFactory>::~shared_ptr,
        &data::ConfigGadgetDamageByAttackValueFactory::instance_ptr,
        &_dso_handle);
      v18 = ((v118 + 2176) >> 3) + 2147450880;
      *(_DWORD *)v18 = 0;
      *(_WORD *)(v18 + 4) = 0;
      *(_WORD *)(((v118 + 1072) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1072) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGadgetPattern>();
      std::pair<std::string const,std::shared_ptr<data::ConfigGadgetPattern>>::pair<char const(&)[20],std::shared_ptr<data::ConfigGadgetPattern>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigGadgetPattern> > *const)(v118 + 2176),
        (const char (*)[20])"ConfigGadgetPattern",
        (std::shared_ptr<data::ConfigGadgetPattern> *)(v118 + 1072));
      v96._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigGadgetPattern> > >::iterator)(v118 + 2176);
      v96._M_len = 1LL;
      *(_BYTE *)(((v118 + 208) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 224) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigGadgetPattern>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigGadgetPattern> > > *const)(v118 + 224));
      std::map<std::string,std::shared_ptr<data::ConfigGadgetPattern>>::map(
        &data::g_ConfigGadgetPatternMap[abi:cxx11],
        v96,
        (const std::less<std::string > *)(v118 + 208),
        (const std::map<std::string,std::shared_ptr<data::ConfigGadgetPattern>>::allocator_type *)(v118 + 224));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigGadgetPattern>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigGadgetPattern> > > *const)(v118 + 224));
      *(_BYTE *)(((v118 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 208) >> 3) + 0x7FFF8000) = -8;
      for ( ii = (std::pair<const std::string,std::shared_ptr<data::ConfigGadgetPattern> > *)(v118 + 2224);
            ii != (std::pair<const std::string,std::shared_ptr<data::ConfigGadgetPattern> > *)(v118 + 2176);
            std::pair<std::string const,std::shared_ptr<data::ConfigGadgetPattern>>::~pair(ii) )
      {
        --ii;
      }
      v20 = ((v118 + 2176) >> 3) + 2147450880;
      *(_DWORD *)v20 = -117901064;
      *(_WORD *)(v20 + 4) = -1800;
      std::shared_ptr<data::ConfigGadgetPattern>::~shared_ptr((std::shared_ptr<data::ConfigGadgetPattern> *const)(v118 + 1072));
      *(_WORD *)(((v118 + 1072) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigGadgetPattern>>::~map,
        &data::g_ConfigGadgetPatternMap[abi:cxx11],
        &_dso_handle);
      data::ConfigGadgetCollidedPatternRegister::ConfigGadgetCollidedPatternRegister(&data::g_ConfigGadgetCollidedPatternRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigGadgetCollidedPatternFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGadgetCollidedPatternFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigGadgetCollidedPatternFactory>::~shared_ptr,
        &data::ConfigGadgetCollidedPatternFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBulletPatternRegister::ConfigBulletPatternRegister(&data::g_ConfigBulletPatternRegister);
      v21 = ((v118 + 2256) >> 3) + 2147450880;
      *(_DWORD *)v21 = 0;
      *(_WORD *)(v21 + 4) = 0;
      *(_WORD *)(((v118 + 1104) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1104) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMultiBullet>();
      std::pair<std::string const,std::shared_ptr<data::ConfigMultiBullet>>::pair<char const(&)[18],std::shared_ptr<data::ConfigMultiBullet>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigMultiBullet> > *const)(v118 + 2256),
        (const char (*)[18])"ConfigMultiBullet",
        (std::shared_ptr<data::ConfigMultiBullet> *)(v118 + 1104));
      v97._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMultiBullet> > >::iterator)(v118 + 2256);
      v97._M_len = 1LL;
      *(_BYTE *)(((v118 + 240) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 256) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMultiBullet>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMultiBullet> > > *const)(v118 + 256));
      std::map<std::string,std::shared_ptr<data::ConfigMultiBullet>>::map(
        &data::g_ConfigMultiBulletMap[abi:cxx11],
        v97,
        (const std::less<std::string > *)(v118 + 240),
        (const std::map<std::string,std::shared_ptr<data::ConfigMultiBullet>>::allocator_type *)(v118 + 256));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMultiBullet>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMultiBullet> > > *const)(v118 + 256));
      *(_BYTE *)(((v118 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 240) >> 3) + 0x7FFF8000) = -8;
      for ( jj = (std::pair<const std::string,std::shared_ptr<data::ConfigMultiBullet> > *)(v118 + 2304);
            jj != (std::pair<const std::string,std::shared_ptr<data::ConfigMultiBullet> > *)(v118 + 2256);
            std::pair<std::string const,std::shared_ptr<data::ConfigMultiBullet>>::~pair(jj) )
      {
        --jj;
      }
      v23 = ((v118 + 2256) >> 3) + 2147450880;
      *(_DWORD *)v23 = -117901064;
      *(_WORD *)(v23 + 4) = -1800;
      std::shared_ptr<data::ConfigMultiBullet>::~shared_ptr((std::shared_ptr<data::ConfigMultiBullet> *const)(v118 + 1104));
      *(_WORD *)(((v118 + 1104) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigMultiBullet>>::~map,
        &data::g_ConfigMultiBulletMap[abi:cxx11],
        &_dso_handle);
      data::ConfigEffectItanoCircusBulletRegister::ConfigEffectItanoCircusBulletRegister(&data::g_ConfigEffectItanoCircusBulletRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigEffectItanoCircusBulletFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigEffectItanoCircusBulletFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigEffectItanoCircusBulletFactory>::~shared_ptr,
        &data::ConfigEffectItanoCircusBulletFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMultiBulletPatternRegister::ConfigMultiBulletPatternRegister(&data::g_ConfigMultiBulletPatternRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMultiBulletPatternFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMultiBulletPatternFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMultiBulletPatternFactory>::~shared_ptr,
        &data::ConfigMultiBulletPatternFactory::instance_ptr,
        &_dso_handle);
      v24 = ((v118 + 2336) >> 3) + 2147450880;
      *(_DWORD *)v24 = 0;
      *(_WORD *)(v24 + 4) = 0;
      *(_WORD *)(((v118 + 1136) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1136) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::TemplateParam>();
      std::pair<std::string const,std::shared_ptr<data::TemplateParam>>::pair<char const(&)[14],std::shared_ptr<data::TemplateParam>,true>(
        (std::pair<const std::string,std::shared_ptr<data::TemplateParam> > *const)(v118 + 2336),
        (const char (*)[14])"TemplateParam",
        (std::shared_ptr<data::TemplateParam> *)(v118 + 1136));
      v98._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::TemplateParam> > >::iterator)(v118 + 2336);
      v98._M_len = 1LL;
      *(_BYTE *)(((v118 + 272) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 288) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::TemplateParam>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::TemplateParam> > > *const)(v118 + 288));
      std::map<std::string,std::shared_ptr<data::TemplateParam>>::map(
        &data::g_TemplateParamMap[abi:cxx11],
        v98,
        (const std::less<std::string > *)(v118 + 272),
        (const std::map<std::string,std::shared_ptr<data::TemplateParam>>::allocator_type *)(v118 + 288));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::TemplateParam>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::TemplateParam> > > *const)(v118 + 288));
      *(_BYTE *)(((v118 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 272) >> 3) + 0x7FFF8000) = -8;
      for ( kk = (std::pair<const std::string,std::shared_ptr<data::TemplateParam> > *)(v118 + 2384);
            kk != (std::pair<const std::string,std::shared_ptr<data::TemplateParam> > *)(v118 + 2336);
            std::pair<std::string const,std::shared_ptr<data::TemplateParam>>::~pair(kk) )
      {
        --kk;
      }
      v26 = ((v118 + 2336) >> 3) + 2147450880;
      *(_DWORD *)v26 = -117901064;
      *(_WORD *)(v26 + 4) = -1800;
      std::shared_ptr<data::TemplateParam>::~shared_ptr((std::shared_ptr<data::TemplateParam> *const)(v118 + 1136));
      *(_WORD *)(((v118 + 1136) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::TemplateParam>>::~map,
        &data::g_TemplateParamMap[abi:cxx11],
        &_dso_handle);
      data::TemplateParamFloatRegister::TemplateParamFloatRegister(&data::g_TemplateParamFloatRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::TemplateParamFloatFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::TemplateParamFloatFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::TemplateParamFloatFactory>::~shared_ptr,
        &data::TemplateParamFloatFactory::instance_ptr,
        &_dso_handle);
      data::TemplateParamInt32Register::TemplateParamInt32Register(&data::g_TemplateParamInt32Register);
      if ( *(_WORD *)(((unsigned __int64)&data::TemplateParamInt32Factory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::TemplateParamInt32Factory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::TemplateParamInt32Factory>::~shared_ptr,
        &data::TemplateParamInt32Factory::instance_ptr,
        &_dso_handle);
      data::TemplateParamStringRegister::TemplateParamStringRegister(&data::g_TemplateParamStringRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::TemplateParamStringFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::TemplateParamStringFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::TemplateParamStringFactory>::~shared_ptr,
        &data::TemplateParamStringFactory::instance_ptr,
        &_dso_handle);
      v27 = ((v118 + 2416) >> 3) + 2147450880;
      *(_DWORD *)v27 = 0;
      *(_WORD *)(v27 + 4) = 0;
      *(_WORD *)(((v118 + 1168) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1168) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigDialogGroup>();
      std::pair<std::string const,std::shared_ptr<data::ConfigDialogGroup>>::pair<char const(&)[18],std::shared_ptr<data::ConfigDialogGroup>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > *const)(v118 + 2416),
        (const char (*)[18])"ConfigDialogGroup",
        (std::shared_ptr<data::ConfigDialogGroup> *)(v118 + 1168));
      v99._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > >::iterator)(v118 + 2416);
      v99._M_len = 1LL;
      *(_BYTE *)(((v118 + 304) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 320) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigDialogGroup>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > > *const)(v118 + 320));
      std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::map(
        &data::g_ConfigDialogGroupMap[abi:cxx11],
        v99,
        (const std::less<std::string > *)(v118 + 304),
        (const std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::allocator_type *)(v118 + 320));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigDialogGroup>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > > *const)(v118 + 320));
      *(_BYTE *)(((v118 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 304) >> 3) + 0x7FFF8000) = -8;
      for ( mm = (std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > *)(v118 + 2464);
            mm != (std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > *)(v118 + 2416);
            std::pair<std::string const,std::shared_ptr<data::ConfigDialogGroup>>::~pair(mm) )
      {
        --mm;
      }
      v29 = ((v118 + 2416) >> 3) + 2147450880;
      *(_DWORD *)v29 = -117901064;
      *(_WORD *)(v29 + 4) = -1800;
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v118 + 1168));
      *(_WORD *)(((v118 + 1168) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::~map,
        &data::g_ConfigDialogGroupMap[abi:cxx11],
        &_dso_handle);
      data::ConfigFreeDialogGroupRegister::ConfigFreeDialogGroupRegister(&data::g_ConfigFreeDialogGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigFreeDialogGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigFreeDialogGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigFreeDialogGroupFactory>::~shared_ptr,
        &data::ConfigFreeDialogGroupFactory::instance_ptr,
        &_dso_handle);
      data::ConfigNarratorDialogGroupRegister::ConfigNarratorDialogGroupRegister(&data::g_ConfigNarratorDialogGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigNarratorDialogGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigNarratorDialogGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigNarratorDialogGroupFactory>::~shared_ptr,
        &data::ConfigNarratorDialogGroupFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBlossomDialogGroupRegister::ConfigBlossomDialogGroupRegister(&data::g_ConfigBlossomDialogGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBlossomDialogGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBlossomDialogGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBlossomDialogGroupFactory>::~shared_ptr,
        &data::ConfigBlossomDialogGroupFactory::instance_ptr,
        &_dso_handle);
      data::ConfigActivityDialogGroupRegister::ConfigActivityDialogGroupRegister(&data::g_ConfigActivityDialogGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigActivityDialogGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigActivityDialogGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigActivityDialogGroupFactory>::~shared_ptr,
        &data::ConfigActivityDialogGroupFactory::instance_ptr,
        &_dso_handle);
      data::ConfigCoopDialogGroupRegister::ConfigCoopDialogGroupRegister(&data::g_ConfigCoopDialogGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigCoopDialogGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigCoopDialogGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigCoopDialogGroupFactory>::~shared_ptr,
        &data::ConfigCoopDialogGroupFactory::instance_ptr,
        &_dso_handle);
      data::ConfigGadgetDialogGroupRegister::ConfigGadgetDialogGroupRegister(&data::g_ConfigGadgetDialogGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigGadgetDialogGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGadgetDialogGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigGadgetDialogGroupFactory>::~shared_ptr,
        &data::ConfigGadgetDialogGroupFactory::instance_ptr,
        &_dso_handle);
      data::ConfigNpcOtherDialogGroupRegister::ConfigNpcOtherDialogGroupRegister(&data::g_ConfigNpcOtherDialogGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigNpcOtherDialogGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigNpcOtherDialogGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigNpcOtherDialogGroupFactory>::~shared_ptr,
        &data::ConfigNpcOtherDialogGroupFactory::instance_ptr,
        &_dso_handle);
      data::ConfigCutsceneDialogGroupRegister::ConfigCutsceneDialogGroupRegister(&data::g_ConfigCutsceneDialogGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigCutsceneDialogGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigCutsceneDialogGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigCutsceneDialogGroupFactory>::~shared_ptr,
        &data::ConfigCutsceneDialogGroupFactory::instance_ptr,
        &_dso_handle);
      data::ConfigUIDialogGroupRegister::ConfigUIDialogGroupRegister(&data::g_ConfigUIDialogGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigUIDialogGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigUIDialogGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigUIDialogGroupFactory>::~shared_ptr,
        &data::ConfigUIDialogGroupFactory::instance_ptr,
        &_dso_handle);
      v30 = ((v118 + 2496) >> 3) + 2147450880;
      *(_DWORD *)v30 = 0;
      *(_WORD *)(v30 + 4) = 0;
      *(_WORD *)(((v118 + 1200) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1200) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLocalTriggerMeta>();
      std::pair<std::string const,std::shared_ptr<data::ConfigLocalTriggerMeta>>::pair<char const(&)[23],std::shared_ptr<data::ConfigLocalTriggerMeta>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > *const)(v118 + 2496),
        (const char (*)[23])"ConfigLocalTriggerMeta",
        (std::shared_ptr<data::ConfigLocalTriggerMeta> *)(v118 + 1200));
      v100._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > >::iterator)(v118 + 2496);
      v100._M_len = 1LL;
      *(_BYTE *)(((v118 + 336) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 352) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigLocalTriggerMeta>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > > *const)(v118 + 352));
      std::map<std::string,std::shared_ptr<data::ConfigLocalTriggerMeta>>::map(
        &data::g_ConfigLocalTriggerMetaMap[abi:cxx11],
        v100,
        (const std::less<std::string > *)(v118 + 336),
        (const std::map<std::string,std::shared_ptr<data::ConfigLocalTriggerMeta>>::allocator_type *)(v118 + 352));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigLocalTriggerMeta>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > > *const)(v118 + 352));
      *(_BYTE *)(((v118 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 336) >> 3) + 0x7FFF8000) = -8;
      for ( nn = (std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > *)(v118 + 2544);
            nn != (std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > *)(v118 + 2496);
            std::pair<std::string const,std::shared_ptr<data::ConfigLocalTriggerMeta>>::~pair(nn) )
      {
        --nn;
      }
      v32 = ((v118 + 2496) >> 3) + 2147450880;
      *(_DWORD *)v32 = -117901064;
      *(_WORD *)(v32 + 4) = -1800;
      std::shared_ptr<data::ConfigLocalTriggerMeta>::~shared_ptr((std::shared_ptr<data::ConfigLocalTriggerMeta> *const)(v118 + 1200));
      *(_WORD *)(((v118 + 1200) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigLocalTriggerMeta>>::~map,
        &data::g_ConfigLocalTriggerMetaMap[abi:cxx11],
        &_dso_handle);
      data::ConfigLocalTriggerMetaTeleportV2Register::ConfigLocalTriggerMetaTeleportV2Register(&data::g_ConfigLocalTriggerMetaTeleportV2Register);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigLocalTriggerMetaTeleportV2Factory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLocalTriggerMetaTeleportV2Factory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2Factory>::~shared_ptr,
        &data::ConfigLocalTriggerMetaTeleportV2Factory::instance_ptr,
        &_dso_handle);
      v33 = ((v118 + 2576) >> 3) + 2147450880;
      *(_DWORD *)v33 = 0;
      *(_WORD *)(v33 + 4) = 0;
      *(_WORD *)(((v118 + 1232) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1232) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigVODPlayer>();
      std::pair<std::string const,std::shared_ptr<data::ConfigVODPlayer>>::pair<char const(&)[16],std::shared_ptr<data::ConfigVODPlayer>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigVODPlayer> > *const)(v118 + 2576),
        (const char (*)[16])"ConfigVODPlayer",
        (std::shared_ptr<data::ConfigVODPlayer> *)(v118 + 1232));
      v101._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigVODPlayer> > >::iterator)(v118 + 2576);
      v101._M_len = 1LL;
      *(_BYTE *)(((v118 + 368) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 384) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigVODPlayer>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigVODPlayer> > > *const)(v118 + 384));
      std::map<std::string,std::shared_ptr<data::ConfigVODPlayer>>::map(
        &data::g_ConfigVODPlayerMap[abi:cxx11],
        v101,
        (const std::less<std::string > *)(v118 + 368),
        (const std::map<std::string,std::shared_ptr<data::ConfigVODPlayer>>::allocator_type *)(v118 + 384));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigVODPlayer>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigVODPlayer> > > *const)(v118 + 384));
      *(_BYTE *)(((v118 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 368) >> 3) + 0x7FFF8000) = -8;
      for ( i1 = (std::pair<const std::string,std::shared_ptr<data::ConfigVODPlayer> > *)(v118 + 2624);
            i1 != (std::pair<const std::string,std::shared_ptr<data::ConfigVODPlayer> > *)(v118 + 2576);
            std::pair<std::string const,std::shared_ptr<data::ConfigVODPlayer>>::~pair(i1) )
      {
        --i1;
      }
      v35 = ((v118 + 2576) >> 3) + 2147450880;
      *(_DWORD *)v35 = -117901064;
      *(_WORD *)(v35 + 4) = -1800;
      std::shared_ptr<data::ConfigVODPlayer>::~shared_ptr((std::shared_ptr<data::ConfigVODPlayer> *const)(v118 + 1232));
      *(_WORD *)(((v118 + 1232) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigVODPlayer>>::~map,
        &data::g_ConfigVODPlayerMap[abi:cxx11],
        &_dso_handle);
      data::ConfigLivePlayerRegister::ConfigLivePlayerRegister(&data::g_ConfigLivePlayerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigLivePlayerFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLivePlayerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigLivePlayerFactory>::~shared_ptr,
        &data::ConfigLivePlayerFactory::instance_ptr,
        &_dso_handle);
      v36 = ((v118 + 2656) >> 3) + 2147450880;
      *(_DWORD *)v36 = 0;
      *(_WORD *)(v36 + 4) = 0;
      *(_WORD *)(((v118 + 1264) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1264) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAbility>();
      std::pair<std::string const,std::shared_ptr<data::ConfigAbility>>::pair<char const(&)[14],std::shared_ptr<data::ConfigAbility>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > *const)(v118 + 2656),
        (const char (*)[14])"ConfigAbility",
        (std::shared_ptr<data::ConfigAbility> *)(v118 + 1264));
      v102._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > >::iterator)(v118 + 2656);
      v102._M_len = 1LL;
      *(_BYTE *)(((v118 + 400) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 416) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAbility>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > > *const)(v118 + 416));
      std::map<std::string,std::shared_ptr<data::ConfigAbility>>::map(
        &data::g_ConfigAbilityMap[abi:cxx11],
        v102,
        (const std::less<std::string > *)(v118 + 400),
        (const std::map<std::string,std::shared_ptr<data::ConfigAbility>>::allocator_type *)(v118 + 416));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAbility>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > > *const)(v118 + 416));
      *(_BYTE *)(((v118 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 400) >> 3) + 0x7FFF8000) = -8;
      for ( i2 = (std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > *)(v118 + 2704);
            i2 != (std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > *)(v118 + 2656);
            std::pair<std::string const,std::shared_ptr<data::ConfigAbility>>::~pair(i2) )
      {
        --i2;
      }
      v38 = ((v118 + 2656) >> 3) + 2147450880;
      *(_DWORD *)v38 = -117901064;
      *(_WORD *)(v38 + 4) = -1800;
      std::shared_ptr<data::ConfigAbility>::~shared_ptr((std::shared_ptr<data::ConfigAbility> *const)(v118 + 1264));
      *(_WORD *)(((v118 + 1264) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigAbility>>::~map,
        &data::g_ConfigAbilityMap[abi:cxx11],
        &_dso_handle);
      data::ConfigDummyAbilityRegister::ConfigDummyAbilityRegister(&data::g_ConfigDummyAbilityRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigDummyAbilityFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigDummyAbilityFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigDummyAbilityFactory>::~shared_ptr,
        &data::ConfigDummyAbilityFactory::instance_ptr,
        &_dso_handle);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAbilityModifierFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAbilityModifierFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAbilityModifierFactory>::~shared_ptr,
        &data::ConfigAbilityModifierFactory::instance_ptr,
        &_dso_handle);
      v39 = ((v118 + 2736) >> 3) + 2147450880;
      *(_DWORD *)v39 = 0;
      *(_WORD *)(v39 + 4) = 0;
      *(_WORD *)(((v118 + 1296) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1296) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAbilityTask>();
      std::pair<std::string const,std::shared_ptr<data::ConfigAbilityTask>>::pair<char const(&)[18],std::shared_ptr<data::ConfigAbilityTask>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigAbilityTask> > *const)(v118 + 2736),
        (const char (*)[18])"ConfigAbilityTask",
        (std::shared_ptr<data::ConfigAbilityTask> *)(v118 + 1296));
      v103._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityTask> > >::iterator)(v118 + 2736);
      v103._M_len = 1LL;
      *(_BYTE *)(((v118 + 432) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 448) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAbilityTask>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityTask> > > *const)(v118 + 448));
      std::map<std::string,std::shared_ptr<data::ConfigAbilityTask>>::map(
        &data::g_ConfigAbilityTaskMap[abi:cxx11],
        v103,
        (const std::less<std::string > *)(v118 + 432),
        (const std::map<std::string,std::shared_ptr<data::ConfigAbilityTask>>::allocator_type *)(v118 + 448));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAbilityTask>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityTask> > > *const)(v118 + 448));
      *(_BYTE *)(((v118 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 432) >> 3) + 0x7FFF8000) = -8;
      for ( i3 = (std::pair<const std::string,std::shared_ptr<data::ConfigAbilityTask> > *)(v118 + 2784);
            i3 != (std::pair<const std::string,std::shared_ptr<data::ConfigAbilityTask> > *)(v118 + 2736);
            std::pair<std::string const,std::shared_ptr<data::ConfigAbilityTask>>::~pair(i3) )
      {
        --i3;
      }
      v41 = ((v118 + 2736) >> 3) + 2147450880;
      *(_DWORD *)v41 = -117901064;
      *(_WORD *)(v41 + 4) = -1800;
      std::shared_ptr<data::ConfigAbilityTask>::~shared_ptr((std::shared_ptr<data::ConfigAbilityTask> *const)(v118 + 1296));
      *(_WORD *)(((v118 + 1296) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigAbilityTask>>::~map,
        &data::g_ConfigAbilityTaskMap[abi:cxx11],
        &_dso_handle);
      data::ConfigDummyAbilityTaskRegister::ConfigDummyAbilityTaskRegister(&data::g_ConfigDummyAbilityTaskRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigDummyAbilityTaskFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigDummyAbilityTaskFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigDummyAbilityTaskFactory>::~shared_ptr,
        &data::ConfigDummyAbilityTaskFactory::instance_ptr,
        &_dso_handle);
      data::ConfigTriggerMassiveElementTaskRegister::ConfigTriggerMassiveElementTaskRegister(&data::g_ConfigTriggerMassiveElementTaskRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigTriggerMassiveElementTaskFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigTriggerMassiveElementTaskFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigTriggerMassiveElementTaskFactory>::~shared_ptr,
        &data::ConfigTriggerMassiveElementTaskFactory::instance_ptr,
        &_dso_handle);
      v42 = ((v118 + 2816) >> 3) + 2147450880;
      *(_DWORD *)v42 = 0;
      *(_WORD *)(v42 + 4) = 0;
      *(_WORD *)(((v118 + 1328) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1328) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAudioOperation>();
      std::pair<std::string const,std::shared_ptr<data::ConfigAudioOperation>>::pair<char const(&)[21],std::shared_ptr<data::ConfigAudioOperation>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigAudioOperation> > *const)(v118 + 2816),
        (const char (*)[21])"ConfigAudioOperation",
        (std::shared_ptr<data::ConfigAudioOperation> *)(v118 + 1328));
      v104._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAudioOperation> > >::iterator)(v118 + 2816);
      v104._M_len = 1LL;
      *(_BYTE *)(((v118 + 464) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 480) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAudioOperation>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAudioOperation> > > *const)(v118 + 480));
      std::map<std::string,std::shared_ptr<data::ConfigAudioOperation>>::map(
        &data::g_ConfigAudioOperationMap[abi:cxx11],
        v104,
        (const std::less<std::string > *)(v118 + 464),
        (const std::map<std::string,std::shared_ptr<data::ConfigAudioOperation>>::allocator_type *)(v118 + 480));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAudioOperation>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAudioOperation> > > *const)(v118 + 480));
      *(_BYTE *)(((v118 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 464) >> 3) + 0x7FFF8000) = -8;
      for ( i4 = (std::pair<const std::string,std::shared_ptr<data::ConfigAudioOperation> > *)(v118 + 2864);
            i4 != (std::pair<const std::string,std::shared_ptr<data::ConfigAudioOperation> > *)(v118 + 2816);
            std::pair<std::string const,std::shared_ptr<data::ConfigAudioOperation>>::~pair(i4) )
      {
        --i4;
      }
      v44 = ((v118 + 2816) >> 3) + 2147450880;
      *(_DWORD *)v44 = -117901064;
      *(_WORD *)(v44 + 4) = -1800;
      std::shared_ptr<data::ConfigAudioOperation>::~shared_ptr((std::shared_ptr<data::ConfigAudioOperation> *const)(v118 + 1328));
      *(_WORD *)(((v118 + 1328) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigAudioOperation>>::~map,
        &data::g_ConfigAudioOperationMap[abi:cxx11],
        &_dso_handle);
      data::ConfigAudioEventOpRegister::ConfigAudioEventOpRegister(&data::g_ConfigAudioEventOpRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAudioEventOpFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAudioEventOpFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAudioEventOpFactory>::~shared_ptr,
        &data::ConfigAudioEventOpFactory::instance_ptr,
        &_dso_handle);
      data::ConfigAudioEmitterOpRegister::ConfigAudioEmitterOpRegister(&data::g_ConfigAudioEmitterOpRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAudioEmitterOpFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAudioEmitterOpFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAudioEmitterOpFactory>::~shared_ptr,
        &data::ConfigAudioEmitterOpFactory::instance_ptr,
        &_dso_handle);
      data::ConfigAudioPositionedOpRegister::ConfigAudioPositionedOpRegister(&data::g_ConfigAudioPositionedOpRegister);
      data::ConfigAudioPositionedEventOpRegister::ConfigAudioPositionedEventOpRegister(&data::g_ConfigAudioPositionedEventOpRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAudioPositionedEventOpFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAudioPositionedEventOpFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAudioPositionedEventOpFactory>::~shared_ptr,
        &data::ConfigAudioPositionedEventOpFactory::instance_ptr,
        &_dso_handle);
      data::ConfigAudioPositionedEmitterOpRegister::ConfigAudioPositionedEmitterOpRegister(&data::g_ConfigAudioPositionedEmitterOpRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAudioPositionedEmitterOpFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAudioPositionedEmitterOpFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAudioPositionedEmitterOpFactory>::~shared_ptr,
        &data::ConfigAudioPositionedEmitterOpFactory::instance_ptr,
        &_dso_handle);
      data::ConfigAudioEventOnEffectOpRegister::ConfigAudioEventOnEffectOpRegister(&data::g_ConfigAudioEventOnEffectOpRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAudioEventOnEffectOpFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAudioEventOnEffectOpFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAudioEventOnEffectOpFactory>::~shared_ptr,
        &data::ConfigAudioEventOnEffectOpFactory::instance_ptr,
        &_dso_handle);
      v45 = ((v118 + 2896) >> 3) + 2147450880;
      *(_DWORD *)v45 = 0;
      *(_WORD *)(v45 + 4) = 0;
      *(_WORD *)(((v118 + 1360) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1360) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMist>();
      std::pair<std::string const,std::shared_ptr<data::ConfigMist>>::pair<char const(&)[11],std::shared_ptr<data::ConfigMist>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigMist> > *const)(v118 + 2896),
        (const char (*)[11])"ConfigMist",
        (std::shared_ptr<data::ConfigMist> *)(v118 + 1360));
      v105._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMist> > >::iterator)(v118 + 2896);
      v105._M_len = 1LL;
      *(_BYTE *)(((v118 + 496) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 512) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMist>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMist> > > *const)(v118 + 512));
      std::map<std::string,std::shared_ptr<data::ConfigMist>>::map(
        &data::g_ConfigMistMap[abi:cxx11],
        v105,
        (const std::less<std::string > *)(v118 + 496),
        (const std::map<std::string,std::shared_ptr<data::ConfigMist>>::allocator_type *)(v118 + 512));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMist>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMist> > > *const)(v118 + 512));
      *(_BYTE *)(((v118 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 496) >> 3) + 0x7FFF8000) = -8;
      for ( i5 = (std::pair<const std::string,std::shared_ptr<data::ConfigMist> > *)(v118 + 2944);
            i5 != (std::pair<const std::string,std::shared_ptr<data::ConfigMist> > *)(v118 + 2896);
            std::pair<std::string const,std::shared_ptr<data::ConfigMist>>::~pair(i5) )
      {
        --i5;
      }
      v47 = ((v118 + 2896) >> 3) + 2147450880;
      *(_DWORD *)v47 = -117901064;
      *(_WORD *)(v47 + 4) = -1800;
      std::shared_ptr<data::ConfigMist>::~shared_ptr((std::shared_ptr<data::ConfigMist> *const)(v118 + 1360));
      *(_WORD *)(((v118 + 1360) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigMist>>::~map,
        &data::g_ConfigMistMap[abi:cxx11],
        &_dso_handle);
      data::ConfigErosionAreaRegister::ConfigErosionAreaRegister(&data::g_ConfigErosionAreaRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigErosionAreaFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigErosionAreaFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigErosionAreaFactory>::~shared_ptr,
        &data::ConfigErosionAreaFactory::instance_ptr,
        &_dso_handle);
      data::ConfigLevelTagAreaRegister::ConfigLevelTagAreaRegister(&data::g_ConfigLevelTagAreaRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigLevelTagAreaFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLevelTagAreaFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigLevelTagAreaFactory>::~shared_ptr,
        &data::ConfigLevelTagAreaFactory::instance_ptr,
        &_dso_handle);
      data::ConfigLevelTagAreaV2Register::ConfigLevelTagAreaV2Register(&data::g_ConfigLevelTagAreaV2Register);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigLevelTagAreaV2Factory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLevelTagAreaV2Factory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigLevelTagAreaV2Factory>::~shared_ptr,
        &data::ConfigLevelTagAreaV2Factory::instance_ptr,
        &_dso_handle);
      v48 = ((v118 + 2976) >> 3) + 2147450880;
      *(_DWORD *)v48 = 0;
      *(_WORD *)(v48 + 4) = 0;
      *(_WORD *)(((v118 + 1392) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1392) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLevelNpcBornPos>();
      std::pair<std::string const,std::shared_ptr<data::ConfigLevelNpcBornPos>>::pair<char const(&)[22],std::shared_ptr<data::ConfigLevelNpcBornPos>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigLevelNpcBornPos> > *const)(v118 + 2976),
        (const char (*)[22])"ConfigLevelNpcBornPos",
        (std::shared_ptr<data::ConfigLevelNpcBornPos> *)(v118 + 1392));
      v106._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigLevelNpcBornPos> > >::iterator)(v118 + 2976);
      v106._M_len = 1LL;
      *(_BYTE *)(((v118 + 528) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 544) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigLevelNpcBornPos>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigLevelNpcBornPos> > > *const)(v118 + 544));
      std::map<std::string,std::shared_ptr<data::ConfigLevelNpcBornPos>>::map(
        &data::g_ConfigLevelNpcBornPosMap[abi:cxx11],
        v106,
        (const std::less<std::string > *)(v118 + 528),
        (const std::map<std::string,std::shared_ptr<data::ConfigLevelNpcBornPos>>::allocator_type *)(v118 + 544));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigLevelNpcBornPos>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigLevelNpcBornPos> > > *const)(v118 + 544));
      *(_BYTE *)(((v118 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 528) >> 3) + 0x7FFF8000) = -8;
      for ( i6 = (std::pair<const std::string,std::shared_ptr<data::ConfigLevelNpcBornPos> > *)(v118 + 3024);
            i6 != (std::pair<const std::string,std::shared_ptr<data::ConfigLevelNpcBornPos> > *)(v118 + 2976);
            std::pair<std::string const,std::shared_ptr<data::ConfigLevelNpcBornPos>>::~pair(i6) )
      {
        --i6;
      }
      v50 = ((v118 + 2976) >> 3) + 2147450880;
      *(_DWORD *)v50 = -117901064;
      *(_WORD *)(v50 + 4) = -1800;
      std::shared_ptr<data::ConfigLevelNpcBornPos>::~shared_ptr((std::shared_ptr<data::ConfigLevelNpcBornPos> *const)(v118 + 1392));
      *(_WORD *)(((v118 + 1392) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigLevelNpcBornPos>>::~map,
        &data::g_ConfigLevelNpcBornPosMap[abi:cxx11],
        &_dso_handle);
      data::ConfigLevelNpcBornPosNoGroupRegister::ConfigLevelNpcBornPosNoGroupRegister(&data::g_ConfigLevelNpcBornPosNoGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigLevelNpcBornPosNoGroupFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLevelNpcBornPosNoGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigLevelNpcBornPosNoGroupFactory>::~shared_ptr,
        &data::ConfigLevelNpcBornPosNoGroupFactory::instance_ptr,
        &_dso_handle);
      v51 = ((v118 + 3056) >> 3) + 2147450880;
      *(_DWORD *)v51 = 0;
      *(_WORD *)(v51 + 4) = 0;
      *(_WORD *)(((v118 + 1424) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1424) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::NpcActionCondBase>();
      std::pair<std::string const,std::shared_ptr<data::NpcActionCondBase>>::pair<char const(&)[18],std::shared_ptr<data::NpcActionCondBase>,true>(
        (std::pair<const std::string,std::shared_ptr<data::NpcActionCondBase> > *const)(v118 + 3056),
        (const char (*)[18])"NpcActionCondBase",
        (std::shared_ptr<data::NpcActionCondBase> *)(v118 + 1424));
      v107._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::NpcActionCondBase> > >::iterator)(v118 + 3056);
      v107._M_len = 1LL;
      *(_BYTE *)(((v118 + 560) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 576) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::NpcActionCondBase>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::NpcActionCondBase> > > *const)(v118 + 576));
      std::map<std::string,std::shared_ptr<data::NpcActionCondBase>>::map(
        &data::g_NpcActionCondBaseMap[abi:cxx11],
        v107,
        (const std::less<std::string > *)(v118 + 560),
        (const std::map<std::string,std::shared_ptr<data::NpcActionCondBase>>::allocator_type *)(v118 + 576));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::NpcActionCondBase>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::NpcActionCondBase> > > *const)(v118 + 576));
      *(_BYTE *)(((v118 + 576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 560) >> 3) + 0x7FFF8000) = -8;
      for ( i7 = (std::pair<const std::string,std::shared_ptr<data::NpcActionCondBase> > *)(v118 + 3104);
            i7 != (std::pair<const std::string,std::shared_ptr<data::NpcActionCondBase> > *)(v118 + 3056);
            std::pair<std::string const,std::shared_ptr<data::NpcActionCondBase>>::~pair(i7) )
      {
        --i7;
      }
      v53 = ((v118 + 3056) >> 3) + 2147450880;
      *(_DWORD *)v53 = -117901064;
      *(_WORD *)(v53 + 4) = -1800;
      std::shared_ptr<data::NpcActionCondBase>::~shared_ptr((std::shared_ptr<data::NpcActionCondBase> *const)(v118 + 1424));
      *(_WORD *)(((v118 + 1424) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::NpcActionCondBase>>::~map,
        &data::g_NpcActionCondBaseMap[abi:cxx11],
        &_dso_handle);
      data::NpcActionQuestCondRegister::NpcActionQuestCondRegister(&data::g_NpcActionQuestCondRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::NpcActionQuestCondFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::NpcActionQuestCondFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::NpcActionQuestCondFactory>::~shared_ptr,
        &data::NpcActionQuestCondFactory::instance_ptr,
        &_dso_handle);
      data::NpcActionCondAvatarInAreaRegister::NpcActionCondAvatarInAreaRegister(&data::g_NpcActionCondAvatarInAreaRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::NpcActionCondAvatarInAreaFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::NpcActionCondAvatarInAreaFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::NpcActionCondAvatarInAreaFactory>::~shared_ptr,
        &data::NpcActionCondAvatarInAreaFactory::instance_ptr,
        &_dso_handle);
      v54 = ((v118 + 3136) >> 3) + 2147450880;
      *(_DWORD *)v54 = 0;
      *(_WORD *)(v54 + 4) = 0;
      *(_WORD *)(((v118 + 1456) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1456) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigNpcBaseAction>();
      std::pair<std::string const,std::shared_ptr<data::ConfigNpcBaseAction>>::pair<char const(&)[20],std::shared_ptr<data::ConfigNpcBaseAction>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigNpcBaseAction> > *const)(v118 + 3136),
        (const char (*)[20])"ConfigNpcBaseAction",
        (std::shared_ptr<data::ConfigNpcBaseAction> *)(v118 + 1456));
      v108._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigNpcBaseAction> > >::iterator)(v118 + 3136);
      v108._M_len = 1LL;
      *(_BYTE *)(((v118 + 592) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 608) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigNpcBaseAction>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigNpcBaseAction> > > *const)(v118 + 608));
      std::map<std::string,std::shared_ptr<data::ConfigNpcBaseAction>>::map(
        &data::g_ConfigNpcBaseActionMap[abi:cxx11],
        v108,
        (const std::less<std::string > *)(v118 + 592),
        (const std::map<std::string,std::shared_ptr<data::ConfigNpcBaseAction>>::allocator_type *)(v118 + 608));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigNpcBaseAction>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigNpcBaseAction> > > *const)(v118 + 608));
      *(_BYTE *)(((v118 + 608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 592) >> 3) + 0x7FFF8000) = -8;
      for ( i8 = (std::pair<const std::string,std::shared_ptr<data::ConfigNpcBaseAction> > *)(v118 + 3184);
            i8 != (std::pair<const std::string,std::shared_ptr<data::ConfigNpcBaseAction> > *)(v118 + 3136);
            std::pair<std::string const,std::shared_ptr<data::ConfigNpcBaseAction>>::~pair(i8) )
      {
        --i8;
      }
      v56 = ((v118 + 3136) >> 3) + 2147450880;
      *(_DWORD *)v56 = -117901064;
      *(_WORD *)(v56 + 4) = -1800;
      std::shared_ptr<data::ConfigNpcBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigNpcBaseAction> *const)(v118 + 1456));
      *(_WORD *)(((v118 + 1456) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigNpcBaseAction>>::~map,
        &data::g_ConfigNpcBaseActionMap[abi:cxx11],
        &_dso_handle);
      data::ConfigNpcAttachItemActionRegister::ConfigNpcAttachItemActionRegister(&data::g_ConfigNpcAttachItemActionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigNpcAttachItemActionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigNpcAttachItemActionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigNpcAttachItemActionFactory>::~shared_ptr,
        &data::ConfigNpcAttachItemActionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigNpcDeAttachItemActionRegister::ConfigNpcDeAttachItemActionRegister(&data::g_ConfigNpcDeAttachItemActionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigNpcDeAttachItemActionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigNpcDeAttachItemActionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigNpcDeAttachItemActionFactory>::~shared_ptr,
        &data::ConfigNpcDeAttachItemActionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigShowNpcActionRegister::ConfigShowNpcActionRegister(&data::g_ConfigShowNpcActionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigShowNpcActionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigShowNpcActionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigShowNpcActionFactory>::~shared_ptr,
        &data::ConfigShowNpcActionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigHideNpcActionRegister::ConfigHideNpcActionRegister(&data::g_ConfigHideNpcActionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigHideNpcActionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigHideNpcActionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigHideNpcActionFactory>::~shared_ptr,
        &data::ConfigHideNpcActionFactory::instance_ptr,
        &_dso_handle);
      v57 = ((v118 + 3216) >> 3) + 2147450880;
      *(_DWORD *)v57 = 0;
      *(_WORD *)(v57 + 4) = 0;
      *(_WORD *)(((v118 + 1488) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1488) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRecordActorBase>();
      std::pair<std::string const,std::shared_ptr<data::ConfigRecordActorBase>>::pair<char const(&)[22],std::shared_ptr<data::ConfigRecordActorBase>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigRecordActorBase> > *const)(v118 + 3216),
        (const char (*)[22])"ConfigRecordActorBase",
        (std::shared_ptr<data::ConfigRecordActorBase> *)(v118 + 1488));
      v109._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigRecordActorBase> > >::iterator)(v118 + 3216);
      v109._M_len = 1LL;
      *(_BYTE *)(((v118 + 624) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 640) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigRecordActorBase>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigRecordActorBase> > > *const)(v118 + 640));
      std::map<std::string,std::shared_ptr<data::ConfigRecordActorBase>>::map(
        &data::g_ConfigRecordActorBaseMap[abi:cxx11],
        v109,
        (const std::less<std::string > *)(v118 + 624),
        (const std::map<std::string,std::shared_ptr<data::ConfigRecordActorBase>>::allocator_type *)(v118 + 640));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigRecordActorBase>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigRecordActorBase> > > *const)(v118 + 640));
      *(_BYTE *)(((v118 + 640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 624) >> 3) + 0x7FFF8000) = -8;
      for ( i9 = (std::pair<const std::string,std::shared_ptr<data::ConfigRecordActorBase> > *)(v118 + 3264);
            i9 != (std::pair<const std::string,std::shared_ptr<data::ConfigRecordActorBase> > *)(v118 + 3216);
            std::pair<std::string const,std::shared_ptr<data::ConfigRecordActorBase>>::~pair(i9) )
      {
        --i9;
      }
      v59 = ((v118 + 3216) >> 3) + 2147450880;
      *(_DWORD *)v59 = -117901064;
      *(_WORD *)(v59 + 4) = -1800;
      std::shared_ptr<data::ConfigRecordActorBase>::~shared_ptr((std::shared_ptr<data::ConfigRecordActorBase> *const)(v118 + 1488));
      *(_WORD *)(((v118 + 1488) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigRecordActorBase>>::~map,
        &data::g_ConfigRecordActorBaseMap[abi:cxx11],
        &_dso_handle);
      data::ConfigRecordEntityRegister::ConfigRecordEntityRegister(&data::g_ConfigRecordEntityRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRecordEntityFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRecordEntityFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRecordEntityFactory>::~shared_ptr,
        &data::ConfigRecordEntityFactory::instance_ptr,
        &_dso_handle);
      data::ConfigRecordEffectRegister::ConfigRecordEffectRegister(&data::g_ConfigRecordEffectRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRecordEffectFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRecordEffectFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRecordEffectFactory>::~shared_ptr,
        &data::ConfigRecordEffectFactory::instance_ptr,
        &_dso_handle);
      v60 = ((v118 + 3296) >> 3) + 2147450880;
      *(_DWORD *)v60 = 0;
      *(_WORD *)(v60 + 4) = 0;
      *(_WORD *)(((v118 + 1520) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1520) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRegionalPlayBase>();
      std::pair<std::string const,std::shared_ptr<data::ConfigRegionalPlayBase>>::pair<char const(&)[23],std::shared_ptr<data::ConfigRegionalPlayBase>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigRegionalPlayBase> > *const)(v118 + 3296),
        (const char (*)[23])"ConfigRegionalPlayBase",
        (std::shared_ptr<data::ConfigRegionalPlayBase> *)(v118 + 1520));
      v110._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigRegionalPlayBase> > >::iterator)(v118 + 3296);
      v110._M_len = 1LL;
      *(_BYTE *)(((v118 + 656) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 672) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigRegionalPlayBase>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigRegionalPlayBase> > > *const)(v118 + 672));
      std::map<std::string,std::shared_ptr<data::ConfigRegionalPlayBase>>::map(
        &data::g_ConfigRegionalPlayBaseMap[abi:cxx11],
        v110,
        (const std::less<std::string > *)(v118 + 656),
        (const std::map<std::string,std::shared_ptr<data::ConfigRegionalPlayBase>>::allocator_type *)(v118 + 672));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigRegionalPlayBase>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigRegionalPlayBase> > > *const)(v118 + 672));
      *(_BYTE *)(((v118 + 672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 656) >> 3) + 0x7FFF8000) = -8;
      for ( i10 = (std::pair<const std::string,std::shared_ptr<data::ConfigRegionalPlayBase> > *)(v118 + 3344);
            i10 != (std::pair<const std::string,std::shared_ptr<data::ConfigRegionalPlayBase> > *)(v118 + 3296);
            std::pair<std::string const,std::shared_ptr<data::ConfigRegionalPlayBase>>::~pair(i10) )
      {
        --i10;
      }
      v62 = ((v118 + 3296) >> 3) + 2147450880;
      *(_DWORD *)v62 = -117901064;
      *(_WORD *)(v62 + 4) = -1800;
      std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v118 + 1520));
      *(_WORD *)(((v118 + 1520) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigRegionalPlayBase>>::~map,
        &data::g_ConfigRegionalPlayBaseMap[abi:cxx11],
        &_dso_handle);
      data::ConfigRegionalPlayMichiaeMatsuriRegister::ConfigRegionalPlayMichiaeMatsuriRegister(&data::g_ConfigRegionalPlayMichiaeMatsuriRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRegionalPlayMichiaeMatsuriFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRegionalPlayMichiaeMatsuriFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuriFactory>::~shared_ptr,
        &data::ConfigRegionalPlayMichiaeMatsuriFactory::instance_ptr,
        &_dso_handle);
      data::ConfigRegionalPlayLightStoneRegister::ConfigRegionalPlayLightStoneRegister(&data::g_ConfigRegionalPlayLightStoneRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRegionalPlayLightStoneFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRegionalPlayLightStoneFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRegionalPlayLightStoneFactory>::~shared_ptr,
        &data::ConfigRegionalPlayLightStoneFactory::instance_ptr,
        &_dso_handle);
      data::ConfigRegionalPlayDeathZoneRegister::ConfigRegionalPlayDeathZoneRegister(&data::g_ConfigRegionalPlayDeathZoneRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRegionalPlayDeathZoneFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRegionalPlayDeathZoneFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRegionalPlayDeathZoneFactory>::~shared_ptr,
        &data::ConfigRegionalPlayDeathZoneFactory::instance_ptr,
        &_dso_handle);
      v63 = ((v118 + 3376) >> 3) + 2147450880;
      *(_DWORD *)v63 = 0;
      *(_WORD *)(v63 + 4) = 0;
      *(_WORD *)(((v118 + 1552) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1552) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBaseShape>();
      std::pair<std::string const,std::shared_ptr<data::ConfigBaseShape>>::pair<char const(&)[16],std::shared_ptr<data::ConfigBaseShape>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > *const)(v118 + 3376),
        (const char (*)[16])"ConfigBaseShape",
        (std::shared_ptr<data::ConfigBaseShape> *)(v118 + 1552));
      v111._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > >::iterator)(v118 + 3376);
      v111._M_len = 1LL;
      *(_BYTE *)(((v118 + 688) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 704) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseShape>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > > *const)(v118 + 704));
      std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::map(
        &data::g_ConfigBaseShapeMap[abi:cxx11],
        v111,
        (const std::less<std::string > *)(v118 + 688),
        (const std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::allocator_type *)(v118 + 704));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseShape>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > > *const)(v118 + 704));
      *(_BYTE *)(((v118 + 704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 688) >> 3) + 0x7FFF8000) = -8;
      for ( i11 = (std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > *)(v118 + 3424);
            i11 != (std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > *)(v118 + 3376);
            std::pair<std::string const,std::shared_ptr<data::ConfigBaseShape>>::~pair(i11) )
      {
        --i11;
      }
      v65 = ((v118 + 3376) >> 3) + 2147450880;
      *(_DWORD *)v65 = -117901064;
      *(_WORD *)(v65 + 4) = -1800;
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v118 + 1552));
      *(_WORD *)(((v118 + 1552) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::~map,
        &data::g_ConfigBaseShapeMap[abi:cxx11],
        &_dso_handle);
      data::ConfigShapeCircleRegister::ConfigShapeCircleRegister(&data::g_ConfigShapeCircleRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigShapeCircleFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigShapeCircleFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigShapeCircleFactory>::~shared_ptr,
        &data::ConfigShapeCircleFactory::instance_ptr,
        &_dso_handle);
      data::ConfigShapeRectRegister::ConfigShapeRectRegister(&data::g_ConfigShapeRectRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigShapeRectFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigShapeRectFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigShapeRectFactory>::~shared_ptr,
        &data::ConfigShapeRectFactory::instance_ptr,
        &_dso_handle);
      data::ConfigShapeSectorRegister::ConfigShapeSectorRegister(&data::g_ConfigShapeSectorRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigShapeSectorFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigShapeSectorFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigShapeSectorFactory>::~shared_ptr,
        &data::ConfigShapeSectorFactory::instance_ptr,
        &_dso_handle);
      data::ConfigShapePolygonRegister::ConfigShapePolygonRegister(&data::g_ConfigShapePolygonRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigShapePolygonFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigShapePolygonFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigShapePolygonFactory>::~shared_ptr,
        &data::ConfigShapePolygonFactory::instance_ptr,
        &_dso_handle);
      data::ConfigShapeSphereRegister::ConfigShapeSphereRegister(&data::g_ConfigShapeSphereRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigShapeSphereFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigShapeSphereFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigShapeSphereFactory>::~shared_ptr,
        &data::ConfigShapeSphereFactory::instance_ptr,
        &_dso_handle);
      data::ConfigShapeCubeRegister::ConfigShapeCubeRegister(&data::g_ConfigShapeCubeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigShapeCubeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigShapeCubeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigShapeCubeFactory>::~shared_ptr,
        &data::ConfigShapeCubeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigShapeCylinderRegister::ConfigShapeCylinderRegister(&data::g_ConfigShapeCylinderRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigShapeCylinderFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigShapeCylinderFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigShapeCylinderFactory>::~shared_ptr,
        &data::ConfigShapeCylinderFactory::instance_ptr,
        &_dso_handle);
      v66 = ((v118 + 3456) >> 3) + 2147450880;
      *(_DWORD *)v66 = 0;
      *(_WORD *)(v66 + 4) = 0;
      *(_WORD *)(((v118 + 1584) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1584) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigSkin>();
      std::pair<std::string const,std::shared_ptr<data::ConfigSkin>>::pair<char const(&)[11],std::shared_ptr<data::ConfigSkin>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigSkin> > *const)(v118 + 3456),
        (const char (*)[11])"ConfigSkin",
        (std::shared_ptr<data::ConfigSkin> *)(v118 + 1584));
      v112._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigSkin> > >::iterator)(v118 + 3456);
      v112._M_len = 1LL;
      *(_BYTE *)(((v118 + 720) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 736) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigSkin>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigSkin> > > *const)(v118 + 736));
      std::map<std::string,std::shared_ptr<data::ConfigSkin>>::map(
        &data::g_ConfigSkinMap[abi:cxx11],
        v112,
        (const std::less<std::string > *)(v118 + 720),
        (const std::map<std::string,std::shared_ptr<data::ConfigSkin>>::allocator_type *)(v118 + 736));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigSkin>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigSkin> > > *const)(v118 + 736));
      *(_BYTE *)(((v118 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 720) >> 3) + 0x7FFF8000) = -8;
      for ( i12 = (std::pair<const std::string,std::shared_ptr<data::ConfigSkin> > *)(v118 + 3504);
            i12 != (std::pair<const std::string,std::shared_ptr<data::ConfigSkin> > *)(v118 + 3456);
            std::pair<std::string const,std::shared_ptr<data::ConfigSkin>>::~pair(i12) )
      {
        --i12;
      }
      v68 = ((v118 + 3456) >> 3) + 2147450880;
      *(_DWORD *)v68 = -117901064;
      *(_WORD *)(v68 + 4) = -1800;
      std::shared_ptr<data::ConfigSkin>::~shared_ptr((std::shared_ptr<data::ConfigSkin> *const)(v118 + 1584));
      *(_WORD *)(((v118 + 1584) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigSkin>>::~map,
        &data::g_ConfigSkinMap[abi:cxx11],
        &_dso_handle);
      data::ConfigMonsterSkinRegister::ConfigMonsterSkinRegister(&data::g_ConfigMonsterSkinRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMonsterSkinFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMonsterSkinFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMonsterSkinFactory>::~shared_ptr,
        &data::ConfigMonsterSkinFactory::instance_ptr,
        &_dso_handle);
      v69 = ((v118 + 3536) >> 3) + 2147450880;
      *(_DWORD *)v69 = 0;
      *(_WORD *)(v69 + 4) = 0;
      *(_WORD *)(((v118 + 1616) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1616) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetAction>();
      std::pair<std::string const,std::shared_ptr<data::ConfigWidgetAction>>::pair<char const(&)[19],std::shared_ptr<data::ConfigWidgetAction>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigWidgetAction> > *const)(v118 + 3536),
        (const char (*)[19])"ConfigWidgetAction",
        (std::shared_ptr<data::ConfigWidgetAction> *)(v118 + 1616));
      v113._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigWidgetAction> > >::iterator)(v118 + 3536);
      v113._M_len = 1LL;
      *(_BYTE *)(((v118 + 752) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 768) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigWidgetAction>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigWidgetAction> > > *const)(v118 + 768));
      std::map<std::string,std::shared_ptr<data::ConfigWidgetAction>>::map(
        &data::g_ConfigWidgetActionMap[abi:cxx11],
        v113,
        (const std::less<std::string > *)(v118 + 752),
        (const std::map<std::string,std::shared_ptr<data::ConfigWidgetAction>>::allocator_type *)(v118 + 768));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigWidgetAction>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigWidgetAction> > > *const)(v118 + 768));
      *(_BYTE *)(((v118 + 768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 752) >> 3) + 0x7FFF8000) = -8;
      for ( i13 = (std::pair<const std::string,std::shared_ptr<data::ConfigWidgetAction> > *)(v118 + 3584);
            i13 != (std::pair<const std::string,std::shared_ptr<data::ConfigWidgetAction> > *)(v118 + 3536);
            std::pair<std::string const,std::shared_ptr<data::ConfigWidgetAction>>::~pair(i13) )
      {
        --i13;
      }
      v71 = ((v118 + 3536) >> 3) + 2147450880;
      *(_DWORD *)v71 = -117901064;
      *(_WORD *)(v71 + 4) = -1800;
      std::shared_ptr<data::ConfigWidgetAction>::~shared_ptr((std::shared_ptr<data::ConfigWidgetAction> *const)(v118 + 1616));
      *(_WORD *)(((v118 + 1616) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigWidgetAction>>::~map,
        &data::g_ConfigWidgetActionMap[abi:cxx11],
        &_dso_handle);
      data::ConfigWidgetAction_PrintDebugRegister::ConfigWidgetAction_PrintDebugRegister(&data::g_ConfigWidgetAction_PrintDebugRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetAction_PrintDebugFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetAction_PrintDebugFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetAction_PrintDebugFactory>::~shared_ptr,
        &data::ConfigWidgetAction_PrintDebugFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetAction_CreateLocalGadgetRegister::ConfigWidgetAction_CreateLocalGadgetRegister(&data::g_ConfigWidgetAction_CreateLocalGadgetRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetAction_CreateLocalGadgetFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetAction_CreateLocalGadgetFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetAction_CreateLocalGadgetFactory>::~shared_ptr,
        &data::ConfigWidgetAction_CreateLocalGadgetFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetAction_CreateSeverGadgetRegister::ConfigWidgetAction_CreateSeverGadgetRegister(&data::g_ConfigWidgetAction_CreateSeverGadgetRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetAction_CreateSeverGadgetFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetAction_CreateSeverGadgetFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetAction_CreateSeverGadgetFactory>::~shared_ptr,
        &data::ConfigWidgetAction_CreateSeverGadgetFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetAction_AddAbilityGroupRegister::ConfigWidgetAction_AddAbilityGroupRegister(&data::g_ConfigWidgetAction_AddAbilityGroupRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetAction_AddAbilityGroupFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetAction_AddAbilityGroupFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetAction_AddAbilityGroupFactory>::~shared_ptr,
        &data::ConfigWidgetAction_AddAbilityGroupFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetAction_AddDynamicValueRegister::ConfigWidgetAction_AddDynamicValueRegister(&data::g_ConfigWidgetAction_AddDynamicValueRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetAction_AddDynamicValueFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetAction_AddDynamicValueFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetAction_AddDynamicValueFactory>::~shared_ptr,
        &data::ConfigWidgetAction_AddDynamicValueFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetAction_RemoveDynamicValueRegister::ConfigWidgetAction_RemoveDynamicValueRegister(&data::g_ConfigWidgetAction_RemoveDynamicValueRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetAction_RemoveDynamicValueFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetAction_RemoveDynamicValueFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetAction_RemoveDynamicValueFactory>::~shared_ptr,
        &data::ConfigWidgetAction_RemoveDynamicValueFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetAction_TakePhotoRegister::ConfigWidgetAction_TakePhotoRegister(&data::g_ConfigWidgetAction_TakePhotoRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetAction_TakePhotoFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetAction_TakePhotoFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetAction_TakePhotoFactory>::~shared_ptr,
        &data::ConfigWidgetAction_TakePhotoFactory::instance_ptr,
        &_dso_handle);
      v72 = ((v118 + 3616) >> 3) + 2147450880;
      *(_DWORD *)v72 = 0;
      *(_WORD *)(v72 + 4) = 0;
      *(_WORD *)(((v118 + 1648) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1648) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetPredict>();
      std::pair<std::string const,std::shared_ptr<data::ConfigWidgetPredict>>::pair<char const(&)[20],std::shared_ptr<data::ConfigWidgetPredict>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigWidgetPredict> > *const)(v118 + 3616),
        (const char (*)[20])"ConfigWidgetPredict",
        (std::shared_ptr<data::ConfigWidgetPredict> *)(v118 + 1648));
      v114._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigWidgetPredict> > >::iterator)(v118 + 3616);
      v114._M_len = 1LL;
      *(_BYTE *)(((v118 + 784) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 800) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigWidgetPredict>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigWidgetPredict> > > *const)(v118 + 800));
      std::map<std::string,std::shared_ptr<data::ConfigWidgetPredict>>::map(
        &data::g_ConfigWidgetPredictMap[abi:cxx11],
        v114,
        (const std::less<std::string > *)(v118 + 784),
        (const std::map<std::string,std::shared_ptr<data::ConfigWidgetPredict>>::allocator_type *)(v118 + 800));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigWidgetPredict>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigWidgetPredict> > > *const)(v118 + 800));
      *(_BYTE *)(((v118 + 800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 784) >> 3) + 0x7FFF8000) = -8;
      for ( i14 = (std::pair<const std::string,std::shared_ptr<data::ConfigWidgetPredict> > *)(v118 + 3664);
            i14 != (std::pair<const std::string,std::shared_ptr<data::ConfigWidgetPredict> > *)(v118 + 3616);
            std::pair<std::string const,std::shared_ptr<data::ConfigWidgetPredict>>::~pair(i14) )
      {
        --i14;
      }
      v74 = ((v118 + 3616) >> 3) + 2147450880;
      *(_DWORD *)v74 = -117901064;
      *(_WORD *)(v74 + 4) = -1800;
      std::shared_ptr<data::ConfigWidgetPredict>::~shared_ptr((std::shared_ptr<data::ConfigWidgetPredict> *const)(v118 + 1648));
      *(_WORD *)(((v118 + 1648) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigWidgetPredict>>::~map,
        &data::g_ConfigWidgetPredictMap[abi:cxx11],
        &_dso_handle);
      data::ConfigWidgetPredict_CollisionDetectRegister::ConfigWidgetPredict_CollisionDetectRegister(&data::g_ConfigWidgetPredict_CollisionDetectRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetPredict_CollisionDetectFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetPredict_CollisionDetectFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetPredict_CollisionDetectFactory>::~shared_ptr,
        &data::ConfigWidgetPredict_CollisionDetectFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetPredict_HasDynamicValueRegister::ConfigWidgetPredict_HasDynamicValueRegister(&data::g_ConfigWidgetPredict_HasDynamicValueRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetPredict_HasDynamicValueFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetPredict_HasDynamicValueFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetPredict_HasDynamicValueFactory>::~shared_ptr,
        &data::ConfigWidgetPredict_HasDynamicValueFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetPredict_CheckEqualDynamicValueRegister::ConfigWidgetPredict_CheckEqualDynamicValueRegister(&data::g_ConfigWidgetPredict_CheckEqualDynamicValueRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetPredict_CheckEqualDynamicValueFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetPredict_CheckEqualDynamicValueFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetPredict_CheckEqualDynamicValueFactory>::~shared_ptr,
        &data::ConfigWidgetPredict_CheckEqualDynamicValueFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetPredict_CheckCurrentEquipRegister::ConfigWidgetPredict_CheckCurrentEquipRegister(&data::g_ConfigWidgetPredict_CheckCurrentEquipRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetPredict_CheckCurrentEquipFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetPredict_CheckCurrentEquipFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetPredict_CheckCurrentEquipFactory>::~shared_ptr,
        &data::ConfigWidgetPredict_CheckCurrentEquipFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWidgetPredict_AlwaysPassRegister::ConfigWidgetPredict_AlwaysPassRegister(&data::g_ConfigWidgetPredict_AlwaysPassRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWidgetPredict_AlwaysPassFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWidgetPredict_AlwaysPassFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWidgetPredict_AlwaysPassFactory>::~shared_ptr,
        &data::ConfigWidgetPredict_AlwaysPassFactory::instance_ptr,
        &_dso_handle);
      v75 = ((v118 + 3696) >> 3) + 2147450880;
      *(_DWORD *)v75 = 0;
      *(_WORD *)(v75 + 4) = 0;
      *(_WORD *)(((v118 + 1680) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1680) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      std::make_shared<data::ConfigAICareAbout>();
      std::pair<std::string const,std::shared_ptr<data::ConfigAICareAbout>>::pair<char const(&)[18],std::shared_ptr<data::ConfigAICareAbout>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigAICareAbout> > *const)(v118 + 3696),
        (const char (*)[18])"ConfigAICareAbout",
        (std::shared_ptr<data::ConfigAICareAbout> *)(v118 + 1680));
      v115._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigAICareAbout> > >::iterator)(v118 + 3696);
      v115._M_len = 1LL;
      *(_BYTE *)(((v118 + 816) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 832) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAICareAbout>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAICareAbout> > > *const)(v118 + 832));
      std::map<std::string,std::shared_ptr<data::ConfigAICareAbout>>::map(
        &data::g_ConfigAICareAboutMap[abi:cxx11],
        v115,
        (const std::less<std::string > *)(v118 + 816),
        (const std::map<std::string,std::shared_ptr<data::ConfigAICareAbout>>::allocator_type *)(v118 + 832));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigAICareAbout>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigAICareAbout> > > *const)(v118 + 832));
      *(_BYTE *)(((v118 + 832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 816) >> 3) + 0x7FFF8000) = -8;
      for ( i15 = (std::pair<const std::string,std::shared_ptr<data::ConfigAICareAbout> > *)(v118 + 3744);
            i15 != (std::pair<const std::string,std::shared_ptr<data::ConfigAICareAbout> > *)(v118 + 3696);
            std::pair<std::string const,std::shared_ptr<data::ConfigAICareAbout>>::~pair(i15) )
      {
        --i15;
      }
      v77 = ((v118 + 3696) >> 3) + 2147450880;
      *(_DWORD *)v77 = -117901064;
      *(_WORD *)(v77 + 4) = -1800;
      std::shared_ptr<data::ConfigAICareAbout>::~shared_ptr((std::shared_ptr<data::ConfigAICareAbout> *const)(v118 + 1680));
      *(_WORD *)(((v118 + 1680) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigAICareAbout>>::~map,
        &data::g_ConfigAICareAboutMap[abi:cxx11],
        &_dso_handle);
      data::ConfigAICareAboutCampRegister::ConfigAICareAboutCampRegister(&data::g_ConfigAICareAboutCampRegister);
      data::ConfigAICareAboutTagsRegister::ConfigAICareAboutTagsRegister(&data::g_ConfigAICareAboutTagsRegister);
      v78 = ((v118 + 3776) >> 3) + 2147450880;
      *(_DWORD *)v78 = 0;
      *(_WORD *)(v78 + 4) = 0;
      *(_WORD *)(((v118 + 1712) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1712) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBaseAttackPattern>();
      std::pair<std::string const,std::shared_ptr<data::ConfigBaseAttackPattern>>::pair<char const(&)[24],std::shared_ptr<data::ConfigBaseAttackPattern>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigBaseAttackPattern> > *const)(v118 + 3776),
        (const char (*)[24])"ConfigBaseAttackPattern",
        (std::shared_ptr<data::ConfigBaseAttackPattern> *)(v118 + 1712));
      v116._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseAttackPattern> > >::iterator)(v118 + 3776);
      v116._M_len = 1LL;
      *(_BYTE *)(((v118 + 848) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 864) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseAttackPattern>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseAttackPattern> > > *const)(v118 + 864));
      std::map<std::string,std::shared_ptr<data::ConfigBaseAttackPattern>>::map(
        &data::g_ConfigBaseAttackPatternMap[abi:cxx11],
        v116,
        (const std::less<std::string > *)(v118 + 848),
        (const std::map<std::string,std::shared_ptr<data::ConfigBaseAttackPattern>>::allocator_type *)(v118 + 864));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseAttackPattern>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseAttackPattern> > > *const)(v118 + 864));
      *(_BYTE *)(((v118 + 864) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 848) >> 3) + 0x7FFF8000) = -8;
      for ( i16 = (std::pair<const std::string,std::shared_ptr<data::ConfigBaseAttackPattern> > *)(v118 + 3824);
            i16 != (std::pair<const std::string,std::shared_ptr<data::ConfigBaseAttackPattern> > *)(v118 + 3776);
            std::pair<std::string const,std::shared_ptr<data::ConfigBaseAttackPattern>>::~pair(i16) )
      {
        --i16;
      }
      v80 = ((v118 + 3776) >> 3) + 2147450880;
      *(_DWORD *)v80 = -117901064;
      *(_WORD *)(v80 + 4) = -1800;
      std::shared_ptr<data::ConfigBaseAttackPattern>::~shared_ptr((std::shared_ptr<data::ConfigBaseAttackPattern> *const)(v118 + 1712));
      *(_WORD *)(((v118 + 1712) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigBaseAttackPattern>>::~map,
        &data::g_ConfigBaseAttackPatternMap[abi:cxx11],
        &_dso_handle);
      data::ConfigSimpleAttackPatternRegister::ConfigSimpleAttackPatternRegister(&data::g_ConfigSimpleAttackPatternRegister);
      data::ConfigAttackUsePrefabRegister::ConfigAttackUsePrefabRegister(&data::g_ConfigAttackUsePrefabRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAttackUsePrefabFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAttackUsePrefabFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAttackUsePrefabFactory>::~shared_ptr,
        &data::ConfigAttackUsePrefabFactory::instance_ptr,
        &_dso_handle);
      data::ConfigAttackTrailRegister::ConfigAttackTrailRegister(&data::g_ConfigAttackTrailRegister);
      data::ConfigAttackDoubleTrailRegister::ConfigAttackDoubleTrailRegister(&data::g_ConfigAttackDoubleTrailRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAttackDoubleTrailFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAttackDoubleTrailFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAttackDoubleTrailFactory>::~shared_ptr,
        &data::ConfigAttackDoubleTrailFactory::instance_ptr,
        &_dso_handle);
      data::ConfigAttackBoxRegister::ConfigAttackBoxRegister(&data::g_ConfigAttackBoxRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAttackBoxFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAttackBoxFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAttackBoxFactory>::~shared_ptr,
        &data::ConfigAttackBoxFactory::instance_ptr,
        &_dso_handle);
      data::ConfigAttackCircleRegister::ConfigAttackCircleRegister(&data::g_ConfigAttackCircleRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAttackCircleFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAttackCircleFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAttackCircleFactory>::~shared_ptr,
        &data::ConfigAttackCircleFactory::instance_ptr,
        &_dso_handle);
      data::ConfigAttackSphereRegister::ConfigAttackSphereRegister(&data::g_ConfigAttackSphereRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAttackSphereFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAttackSphereFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAttackSphereFactory>::~shared_ptr,
        &data::ConfigAttackSphereFactory::instance_ptr,
        &_dso_handle);
      v81 = ((v118 + 3856) >> 3) + 2147450880;
      *(_DWORD *)v81 = 0;
      *(_WORD *)(v81 + 4) = 0;
      *(_WORD *)(((v118 + 1744) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v118 + 1744) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigPolygonZone>();
      std::pair<std::string const,std::shared_ptr<data::ConfigPolygonZone>>::pair<char const(&)[18],std::shared_ptr<data::ConfigPolygonZone>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigPolygonZone> > *const)(v118 + 3856),
        (const char (*)[18])"ConfigPolygonZone",
        (std::shared_ptr<data::ConfigPolygonZone> *)(v118 + 1744));
      v117._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigPolygonZone> > >::iterator)(v118 + 3856);
      v117._M_len = 1LL;
      *(_BYTE *)(((v118 + 880) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v118 + 896) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigPolygonZone>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigPolygonZone> > > *const)(v118 + 896));
      std::map<std::string,std::shared_ptr<data::ConfigPolygonZone>>::map(
        &data::g_ConfigPolygonZoneMap[abi:cxx11],
        v117,
        (const std::less<std::string > *)(v118 + 880),
        (const std::map<std::string,std::shared_ptr<data::ConfigPolygonZone>>::allocator_type *)(v118 + 896));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigPolygonZone>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigPolygonZone> > > *const)(v118 + 896));
      *(_BYTE *)(((v118 + 896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v118 + 880) >> 3) + 0x7FFF8000) = -8;
      for ( i17 = (std::pair<const std::string,std::shared_ptr<data::ConfigPolygonZone> > *)(v118 + 3904);
            i17 != (std::pair<const std::string,std::shared_ptr<data::ConfigPolygonZone> > *)(v118 + 3856);
            std::pair<std::string const,std::shared_ptr<data::ConfigPolygonZone>>::~pair(i17) )
      {
        --i17;
      }
      v83 = ((v118 + 3856) >> 3) + 2147450880;
      *(_DWORD *)v83 = -117901064;
      *(_WORD *)(v83 + 4) = -1800;
      std::shared_ptr<data::ConfigPolygonZone>::~shared_ptr((std::shared_ptr<data::ConfigPolygonZone> *const)(v118 + 1744));
      *(_WORD *)(((v118 + 1744) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigPolygonZone>>::~map,
        &data::g_ConfigPolygonZoneMap[abi:cxx11],
        &_dso_handle);
      data::ConfigDangerZoneRegister::ConfigDangerZoneRegister(&data::g_ConfigDangerZoneRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigDangerZoneFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigDangerZoneFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigDangerZoneFactory>::~shared_ptr,
        &data::ConfigDangerZoneFactory::instance_ptr,
        &_dso_handle);
      data::ConfigFishingZoneRegister::ConfigFishingZoneRegister(&data::g_ConfigFishingZoneRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigFishingZoneFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigFishingZoneFactory>();
      v86 = &data::ConfigFishingZoneFactory::instance_ptr;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigFishingZoneFactory>::~shared_ptr,
        &data::ConfigFishingZoneFactory::instance_ptr,
        &_dso_handle);
      v84 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      v85 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                     + 0x7FFF8000);
      LOBYTE(v86) = v85 != 0;
      v87 = (v85 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v85);
      if ( (_BYTE)v87 )
        __asan_report_load1(
          &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
          v86,
          v87);
      if ( !*v84 )
      {
        v88 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v89 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v86) = v89 != 0;
        v90 = (v89 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v89);
        if ( (_BYTE)v90 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v86,
            v90);
        *v88 = 1;
        v91 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v86);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v91;
      }
    }
    __asan_after_dynamic_init();
  }
  if ( v119 == (char *)v118 )
  {
    *(_QWORD *)((v118 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v118 >> 3) + 0x7FFF81E4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 492) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v118 = 1172321806LL;
    __asan_stack_free_6(v118, 3936LL, v119);
  }
};

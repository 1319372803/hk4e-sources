// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigElementReactionType.cpp

// Line 19: range 000000001211BB65-000000001211BF93
const char *__cdecl data::enumValToStr(data::ElementReactionType e)
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
    case None_4:
      result = "None";
      break;
    case Explode:
      result = "Explode";
      break;
    case Stream:
      result = "Stream";
      break;
    case Burning:
      result = "Burning";
      break;
    case Burned:
      result = "Burned";
      break;
    case Wet:
      result = off_1A90DAC0;
      break;
    case Overgrow:
      result = "Overgrow";
      break;
    case Melt:
      result = "Melt";
      break;
    case Freeze:
      result = "Freeze";
      break;
    case AntiFire_0:
      result = "AntiFire";
      break;
    case Rock_0:
      result = "Rock";
      break;
    case SlowDown:
      result = "SlowDown";
      break;
    case Shock:
      result = "Shock";
      break;
    case Wind_0:
      result = "Wind";
      break;
    case Electric_0:
      result = "Electric";
      break;
    case Fire_0:
      result = "Fire";
      break;
    case Superconductor:
      result = "Superconductor";
      break;
    case SwirlFire:
      result = "SwirlFire";
      break;
    case SwirlWater:
      result = "SwirlWater";
      break;
    case SwirlElectric:
      result = "SwirlElectric";
      break;
    case SwirlIce:
      result = "SwirlIce";
      break;
    case SwirlFireAccu:
      result = "SwirlFireAccu";
      break;
    case SwirlWaterAccu:
      result = "SwirlWaterAccu";
      break;
    case SwirlElectricAccu:
      result = "SwirlElectricAccu";
      break;
    case SwirlIceAccu:
      result = "SwirlIceAccu";
      break;
    case StickRock:
      result = "StickRock";
      break;
    case StickWater:
      result = "StickWater";
      break;
    case CrystallizeFire:
      result = "CrystallizeFire";
      break;
    case CrystallizeWater:
      result = "CrystallizeWater";
      break;
    case CrystallizeElectric:
      result = "CrystallizeElectric";
      break;
    case CrystallizeIce:
      result = "CrystallizeIce";
      break;
    case FrozenBroken:
      result = "FrozenBroken";
      break;
    case StickGrass:
      result = "StickGrass";
      break;
    case Overdose_0:
      result = "Overdose";
      break;
    case OverdoseElectric:
      result = "OverdoseElectric";
      break;
    case OverdoseGrass:
      result = "OverdoseGrass";
      break;
    case OvergrowMushroomFire:
      result = "OvergrowMushroomFire";
      break;
    case OvergrowMushroomElectric:
      result = "OvergrowMushroomElectric";
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
        "./src/json_data_auto/ComponentDefines/ConfigElementReactionType.cpp",
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

// Line 105: range 000000001211BF94-000000001211DC76
bool __cdecl data::enumStrToVal(const std::string *s, data::ElementReactionType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::ElementReactionType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ElementReactionType> >::pointer v10; // rax
  data::ElementReactionType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::ElementReactionType *ea; // [rsp+10h] [rbp-A20h]
  char v16[2576]; // [rsp+20h] [rbp-A10h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2528LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "45 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unkn"
                        "own> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> 5"
                        "60 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 <unknown> 640 4 9"
                        " <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 8 6 it:152 720 8 9 <unknown> 752 32 9 <unknow"
                        "n> 816 32 9 <unknown> 880 1520 9 <unknown>";
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
  v4[536862741] = 61956;
  v4[536862741] = -234881024;
  v4[536862742] = 62194;
  v4[536862742] = -234881024;
  v4[536862743] = 62194;
  v4[536862744] = -219021312;
  v4[536862745] = 62194;
  v4[536862746] = -219021312;
  v4[536862747] = 62194;
  v4[536862795] = -202116109;
  v4[536862796] = -202116109;
  v4[536862797] = -202116109;
  v4[536862798] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 752) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 47) & 7) >= *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 752, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 752),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigElementReactionType.cpp",
      "enumStrToVal",
      108);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 752),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 752));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ElementReactionType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ElementReactionType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[5],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 880),
        (const char (*)[5])"None",
        (data::ElementReactionType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[8],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 920),
        (const char (*)[8])"Explode",
        (data::ElementReactionType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Explode");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[7],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 960),
        (const char (*)[7])"Stream",
        (data::ElementReactionType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Stream");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[8],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1000),
        (const char (*)[8])"Burning",
        (data::ElementReactionType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Burning");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[7],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1040),
        (const char (*)[7])"Burned",
        (data::ElementReactionType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "Burned");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[4],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1080),
        (const char (*)[4])off_1A90DAC0,
        (data::ElementReactionType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, off_1A90DAC0);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[9],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1120),
        (const char (*)[9])"Overgrow",
        (data::ElementReactionType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Overgrow");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[5],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1160),
        (const char (*)[5])"Melt",
        (data::ElementReactionType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "Melt");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[7],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1200),
        (const char (*)[7])"Freeze",
        (data::ElementReactionType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "Freeze");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[9],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1240),
        (const char (*)[9])"AntiFire",
        (data::ElementReactionType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "AntiFire");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[5],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1280),
        (const char (*)[5])"Rock",
        (data::ElementReactionType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "Rock");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[9],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1320),
        (const char (*)[9])"SlowDown",
        (data::ElementReactionType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "SlowDown");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[6],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1360),
        (const char (*)[6])"Shock",
        (data::ElementReactionType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "Shock");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[5],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1400),
        (const char (*)[5])"Wind",
        (data::ElementReactionType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "Wind");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[9],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1440),
        (const char (*)[9])"Electric",
        (data::ElementReactionType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "Electric");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[5],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1480),
        (const char (*)[5])"Fire",
        (data::ElementReactionType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "Fire");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[15],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1520),
        (const char (*)[15])"Superconductor",
        (data::ElementReactionType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "Superconductor");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[10],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1560),
        (const char (*)[10])"SwirlFire",
        (data::ElementReactionType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "SwirlFire");
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[11],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1600),
        (const char (*)[11])"SwirlWater",
        (data::ElementReactionType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "SwirlWater");
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[14],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1640),
        (const char (*)[14])"SwirlElectric",
        (data::ElementReactionType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "SwirlElectric");
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[9],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1680),
        (const char (*)[9])"SwirlIce",
        (data::ElementReactionType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "SwirlIce");
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[14],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1720),
        (const char (*)[14])"SwirlFireAccu",
        (data::ElementReactionType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "SwirlFireAccu");
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[15],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1760),
        (const char (*)[15])"SwirlWaterAccu",
        (data::ElementReactionType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "SwirlWaterAccu");
      *(_DWORD *)(v2 + 448) = 23;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[18],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1800),
        (const char (*)[18])"SwirlElectricAccu",
        (data::ElementReactionType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "SwirlElectricAccu");
      *(_DWORD *)(v2 + 464) = 24;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[13],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1840),
        (const char (*)[13])"SwirlIceAccu",
        (data::ElementReactionType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "SwirlIceAccu");
      *(_DWORD *)(v2 + 480) = 25;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[10],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1880),
        (const char (*)[10])"StickRock",
        (data::ElementReactionType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "StickRock");
      *(_DWORD *)(v2 + 496) = 26;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[11],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1920),
        (const char (*)[11])"StickWater",
        (data::ElementReactionType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "StickWater");
      *(_DWORD *)(v2 + 512) = 27;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[16],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 1960),
        (const char (*)[16])"CrystallizeFire",
        (data::ElementReactionType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "CrystallizeFire");
      *(_DWORD *)(v2 + 528) = 28;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[17],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2000),
        (const char (*)[17])"CrystallizeWater",
        (data::ElementReactionType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "CrystallizeWater");
      *(_DWORD *)(v2 + 544) = 29;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[20],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2040),
        (const char (*)[20])"CrystallizeElectric",
        (data::ElementReactionType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "CrystallizeElectric");
      *(_DWORD *)(v2 + 560) = 30;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[15],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2080),
        (const char (*)[15])"CrystallizeIce",
        (data::ElementReactionType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "CrystallizeIce");
      *(_DWORD *)(v2 + 576) = 31;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[13],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2120),
        (const char (*)[13])"FrozenBroken",
        (data::ElementReactionType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "FrozenBroken");
      *(_DWORD *)(v2 + 592) = 32;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[11],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2160),
        (const char (*)[11])"StickGrass",
        (data::ElementReactionType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "StickGrass");
      *(_DWORD *)(v2 + 608) = 33;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[9],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2200),
        (const char (*)[9])"Overdose",
        (data::ElementReactionType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "Overdose");
      *(_DWORD *)(v2 + 624) = 34;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[17],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2240),
        (const char (*)[17])"OverdoseElectric",
        (data::ElementReactionType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "OverdoseElectric");
      *(_DWORD *)(v2 + 640) = 35;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[14],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2280),
        (const char (*)[14])"OverdoseGrass",
        (data::ElementReactionType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "OverdoseGrass");
      *(_DWORD *)(v2 + 656) = 36;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[21],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2320),
        (const char (*)[21])"OvergrowMushroomFire",
        (data::ElementReactionType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "OvergrowMushroomFire");
      *(_DWORD *)(v2 + 672) = 37;
      std::pair<std::string const,data::ElementReactionType>::pair<char const(&)[25],data::ElementReactionType,true>(
        (std::pair<const std::string,data::ElementReactionType> *const)(v2 + 2360),
        (const char (*)[25])"OvergrowMushroomElectric",
        (data::ElementReactionType *)(v2 + 672));
      std::allocator<std::pair<std::string const,data::ElementReactionType>>::allocator((std::allocator<std::pair<const std::string,data::ElementReactionType> > *const)(v2 + 64));
      std::map<std::string,data::ElementReactionType>::map(
        &data::enumStrToVal(std::string const&,data::ElementReactionType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ElementReactionType> >)__PAIR128__(38LL, v2 + 880),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ElementReactionType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ElementReactionType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ElementReactionType>::~map,
        &data::enumStrToVal(std::string const&,data::ElementReactionType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ElementReactionType>>::~allocator((std::allocator<std::pair<const std::string,data::ElementReactionType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ElementReactionType> *)(v2 + 2400);
            i != (std::pair<const std::string,data::ElementReactionType> *)(v2 + 880);
            std::pair<std::string const,data::ElementReactionType>::~pair(i) )
      {
        --i;
      }
      e = (data::ElementReactionType *)1520;
      __asan_poison_stack_memory(v2 + 880, 1520LL);
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
    *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 688, e);
    *(std::map<std::string,data::ElementReactionType>::iterator *)(v2 + 688) = std::map<std::string,data::ElementReactionType>::find(
                                                                                 &data::enumStrToVal(std::string const&,data::ElementReactionType &)::m,
                                                                                 s);
    *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 720, s);
    *(std::map<std::string,data::ElementReactionType>::iterator *)(v2 + 720) = std::map<std::string,data::ElementReactionType>::end(&data::enumStrToVal(std::string const&,data::ElementReactionType &)::m);
    v7 = (char *)(v2 + 720);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ElementReactionType> >::_Self *)(v2 + 688),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ElementReactionType> >::_Self *)(v2 + 720));
    *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 816) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 111) & 7) >= *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 816, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 816),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigElementReactionType.cpp",
        "enumStrToVal",
        155);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 816),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 816));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ElementReactionType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ElementReactionType> > *const)(v2 + 688));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8134) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 316) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2528LL, v16);
  }
  return v13;
};

// Line 163: range 000000001211DC77-000000001211DE51
const char *__cdecl data::getDescription(data::ElementReactionType e)
{
  const char *result; // rax

  switch ( e )
  {
    case None_4:
      result = (const char *)&off_1A8C3E00;
      break;
    case Explode:
      result = "Explode";
      break;
    case Stream:
      result = "Stream";
      break;
    case Burning:
      result = "Burning";
      break;
    case Burned:
      result = "Burned";
      break;
    case Wet:
      result = off_1A90DAC0;
      break;
    case Overgrow:
      result = (const char *)&unk_1A90E760;
      break;
    case Melt:
      result = "Melt";
      break;
    case Freeze:
      result = "Freeze";
      break;
    case AntiFire_0:
      result = "AntiFire";
      break;
    case Rock_0:
      result = "Rock";
      break;
    case SlowDown:
      result = "SlowDown";
      break;
    case Shock:
      result = "Shock";
      break;
    case Wind_0:
      result = "Wind";
      break;
    case Electric_0:
      result = "Electric";
      break;
    case Fire_0:
      result = "Fire";
      break;
    case Superconductor:
      result = (const char *)&unk_1A90E7A0;
      break;
    case SwirlFire:
      result = (const char *)&unk_1A90E7E0;
      break;
    case SwirlWater:
      result = (const char *)&unk_1A90E820;
      break;
    case SwirlElectric:
      result = (const char *)&unk_1A90E860;
      break;
    case SwirlIce:
      result = (const char *)&unk_1A90E8A0;
      break;
    case SwirlFireAccu:
      result = (const char *)&unk_1A90E8E0;
      break;
    case SwirlWaterAccu:
      result = (const char *)&unk_1A90E920;
      break;
    case SwirlElectricAccu:
      result = (const char *)&unk_1A90E960;
      break;
    case SwirlIceAccu:
      result = (const char *)&unk_1A90E9A0;
      break;
    case StickRock:
      result = (const char *)&unk_1A90E9E0;
      break;
    case StickWater:
      result = (const char *)&unk_1A90EA20;
      break;
    case CrystallizeFire:
      result = (const char *)&unk_1A90EA60;
      break;
    case CrystallizeWater:
      result = (const char *)&unk_1A90EAA0;
      break;
    case CrystallizeElectric:
      result = (const char *)&unk_1A90EAE0;
      break;
    case CrystallizeIce:
      result = (const char *)&unk_1A90EB20;
      break;
    case FrozenBroken:
      result = (const char *)&unk_1A90EB60;
      break;
    case StickGrass:
      result = (const char *)&unk_1A90EBA0;
      break;
    case Overdose_0:
      result = (const char *)&unk_1A90EBE0;
      break;
    case OverdoseElectric:
      result = (const char *)&unk_1A90EC20;
      break;
    case OverdoseGrass:
      result = (const char *)&unk_1A90EC60;
      break;
    case OvergrowMushroomFire:
      result = (const char *)&unk_1A90ECA0;
      break;
    case OvergrowMushroomElectric:
      result = (const char *)&unk_1A90ECE0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 248: range 000000001211DE52-000000001211E0ED
const char *__cdecl data::enumValToStr(data::ElementReactionSourceType e)
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
  if ( e == ModifierRemove )
  {
    result = "ModifierRemove";
  }
  else
  {
    if ( e <= ModifierRemove )
    {
      switch ( e )
      {
        case ModifierAdd:
          result = "ModifierAdd";
          goto LABEL_19;
        case None_32:
          result = "None";
          goto LABEL_19;
        case BeingHit:
          result = "BeingHit";
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
      "./src/json_data_auto/ComponentDefines/ConfigElementReactionType.cpp",
      "enumValToStr",
      260);
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

// Line 266: range 000000001211E0EE-000000001211EA72
bool __cdecl data::enumStrToVal(const std::string *s, data::ElementReactionSourceType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ElementReactionSourceType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ElementReactionSourceType> >::pointer v11; // rax
  data::ElementReactionSourceType second; // ecx
  char v13; // dl
  data::ElementReactionSourceType *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 6 it:279 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigElementReactionType.cpp",
      "enumStrToVal",
      269);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ElementReactionSourceType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ElementReactionSourceType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ElementReactionSourceType>::pair<char const(&)[5],data::ElementReactionSourceType,true>(
        (std::pair<const std::string,data::ElementReactionSourceType> *const)(v2 + 320),
        (const char (*)[5])"None",
        (data::ElementReactionSourceType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "None");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ElementReactionSourceType>::pair<char const(&)[9],data::ElementReactionSourceType,true>(
        (std::pair<const std::string,data::ElementReactionSourceType> *const)(v2 + 360),
        (const char (*)[9])"BeingHit",
        (data::ElementReactionSourceType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "BeingHit");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ElementReactionSourceType>::pair<char const(&)[12],data::ElementReactionSourceType,true>(
        (std::pair<const std::string,data::ElementReactionSourceType> *const)(v2 + 400),
        (const char (*)[12])"ModifierAdd",
        (data::ElementReactionSourceType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "ModifierAdd");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ElementReactionSourceType>::pair<char const(&)[15],data::ElementReactionSourceType,true>(
        (std::pair<const std::string,data::ElementReactionSourceType> *const)(v2 + 440),
        (const char (*)[15])"ModifierRemove",
        (data::ElementReactionSourceType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::ElementReactionSourceType>>::allocator((std::allocator<std::pair<const std::string,data::ElementReactionSourceType> > *const)(v2 + 48));
      std::map<std::string,data::ElementReactionSourceType>::map(
        &data::enumStrToVal(std::string const&,data::ElementReactionSourceType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ElementReactionSourceType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ElementReactionSourceType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ElementReactionSourceType &)::m);
      e = (data::ElementReactionSourceType *)&data::enumStrToVal(std::string const&,data::ElementReactionSourceType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ElementReactionSourceType>::~map,
        &data::enumStrToVal(std::string const&,data::ElementReactionSourceType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ElementReactionSourceType>>::~allocator((std::allocator<std::pair<const std::string,data::ElementReactionSourceType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ElementReactionSourceType> *)(v2 + 480);
            i != (std::pair<const std::string,data::ElementReactionSourceType> *)(v2 + 320);
            std::pair<std::string const,data::ElementReactionSourceType>::~pair(i) )
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
    *(std::map<std::string,data::ElementReactionSourceType>::iterator *)(v2 + 128) = std::map<std::string,data::ElementReactionSourceType>::find(
                                                                                       &data::enumStrToVal(std::string const&,data::ElementReactionSourceType &)::m,
                                                                                       s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::ElementReactionSourceType>::iterator *)(v2 + 160) = std::map<std::string,data::ElementReactionSourceType>::end(&data::enumStrToVal(std::string const&,data::ElementReactionSourceType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ElementReactionSourceType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ElementReactionSourceType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigElementReactionType.cpp",
        "enumStrToVal",
        282);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ElementReactionSourceType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ElementReactionSourceType> > *const)(v2 + 128));
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

// Line 290: range 000000001211EA73-000000001211EACC
const char *__cdecl data::getDescription(data::ElementReactionSourceType e)
{
  if ( e == ModifierRemove )
    return "ModifierRemove";
  if ( e <= ModifierRemove )
  {
    switch ( e )
    {
      case ModifierAdd:
        return "ModifierAdd";
      case None_32:
        return "None";
      case BeingHit:
        return "BeingHit";
    }
  }
  return "unknown enum value!";
};

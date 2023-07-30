// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigUI.cpp

// Line 19: range 000000001160D966-000000001160E2EF
const char *__cdecl data::enumValToStr(data::InputActionType e)
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
    case Internal:
      result = "Internal";
      break;
    case MoveForward:
      result = "MoveForward";
      break;
    case MoveBackward:
      result = "MoveBackward";
      break;
    case MoveLeft:
      result = "MoveLeft";
      break;
    case MoveRight:
      result = "MoveRight";
      break;
    case MoveHorizontal:
      result = "MoveHorizontal";
      break;
    case MoveVertical:
      result = "MoveVertical";
      break;
    case Move:
      result = "Move";
      break;
    case ViewHorizontal:
      result = "ViewHorizontal";
      break;
    case ViewVertical:
      result = "ViewVertical";
      break;
    case ChangeView:
      result = "ChangeView";
      break;
    case OpenMap:
      result = "OpenMap";
      break;
    case OpenCharacter:
      result = "OpenCharacter";
      break;
    case OpenBag:
      result = "OpenBag";
      break;
    case OpenGacha:
      result = "OpenGacha";
      break;
    case OpenChat:
      result = "OpenChat";
      break;
    case OpenPaimon:
      result = "OpenPaimon";
      break;
    case ToggleQuestBook:
      result = "ToggleQuestBook";
      break;
    case ToAvatar1:
      result = "ToAvatar1";
      break;
    case ToAvatar2:
      result = "ToAvatar2";
      break;
    case ToAvatar3:
      result = "ToAvatar3";
      break;
    case ToAvatar4:
      result = "ToAvatar4";
      break;
    case ChangeWithSkill:
      result = "ChangeWithSkill";
      break;
    case WheelMenuTrigger:
      result = "WheelMenuTrigger";
      break;
    case Skill1:
      result = "Skill1";
      break;
    case Skill2:
      result = "Skill2";
      break;
    case SprintOrSkill3:
      result = "SprintOrSkill3";
      break;
    case JumpOrSkill4:
      result = "JumpOrSkill4";
      break;
    case Skill5:
      result = "Skill5";
      break;
    case ToggleAttackMode:
      result = "ToggleAttackMode";
      break;
    case EnterFocusMode:
      result = "EnterFocusMode";
      break;
    case TalkOrPick:
      result = "TalkOrPick";
      break;
    case LeftShoulder:
      result = "LeftShoulder";
      break;
    case RightShoulder:
      result = "RightShoulder";
      break;
    case MenuBack:
      result = "MenuBack";
      break;
    case MenuConfirm:
      result = "MenuConfirm";
      break;
    case MenuLeft:
      result = "MenuLeft";
      break;
    case MenuUp:
      result = "MenuUp";
      break;
    case LeftStickLeft:
      result = "LeftStickLeft";
      break;
    case LeftStickRight:
      result = "LeftStickRight";
      break;
    case LeftStickUp:
      result = "LeftStickUp";
      break;
    case LeftStickDown:
      result = "LeftStickDown";
      break;
    case LeftStickVertical:
      result = "LeftStickVertical";
      break;
    case LeftStickHorizontal:
      result = "LeftStickHorizontal";
      break;
    case LeftStickMove:
      result = "LeftStickMove";
      break;
    case LeftStickButton:
      result = "LeftStickButton";
      break;
    case RightStickLeft:
      result = "RightStickLeft";
      break;
    case RightStickRight:
      result = "RightStickRight";
      break;
    case RightStickUp:
      result = "RightStickUp";
      break;
    case RightStickDown:
      result = "RightStickDown";
      break;
    case DPadUp:
      result = "DPadUp";
      break;
    case DPadRight:
      result = "DPadRight";
      break;
    case DPadDown:
      result = "DPadDown";
      break;
    case DPadLeft:
      result = "DPadLeft";
      break;
    case LeftTrigger:
      result = "LeftTrigger";
      break;
    case RightTrigger:
      result = "RightTrigger";
      break;
    case ZoomCamera:
      result = "ZoomCamera";
      break;
    case ResetCamera:
      result = "ResetCamera";
      break;
    case SlowMove:
      result = "SlowMove";
      break;
    case Slip:
      result = "Slip";
      break;
    case DebugMenu:
      result = "DebugMenu";
      break;
    case QuestTransport:
      result = "QuestTransport";
      break;
    case RightStickVertical:
      result = "RightStickVertical";
      break;
    case RightStickHorizontal:
      result = "RightStickHorizontal";
      break;
    case RightStickMove:
      result = "RightStickMove";
      break;
    case RightStickButton:
      result = "RightStickButton";
      break;
    case Help:
      result = "Help";
      break;
    case Multiplayer:
      result = "Multiplayer";
      break;
    case MenuRight:
      result = "MenuRight";
      break;
    case MenuDown:
      result = "MenuDown";
      break;
    case OpenNotify:
      result = "OpenNotify";
      break;
    case OpenDungeonFactor:
      result = "OpenDungeonFactor";
      break;
    case ToAvatar5:
      result = "ToAvatar5";
      break;
    case ToAvatar1TriggerSkill:
      result = "ToAvatar1TriggerSkill";
      break;
    case ToAvatar2TriggerSkill:
      result = "ToAvatar2TriggerSkill";
      break;
    case ToAvatar3TriggerSkill:
      result = "ToAvatar3TriggerSkill";
      break;
    case ToAvatar4TriggerSkill:
      result = "ToAvatar4TriggerSkill";
      break;
    case ToAvatar5TriggerSkill:
      result = "ToAvatar5TriggerSkill";
      break;
    case OpenHandbook:
      result = "OpenHandbook";
      break;
    case TrackQuest:
      result = "TrackQuest";
      break;
    case OpenActivityNormal:
      result = "OpenActivityNormal";
      break;
    case OpenPushTips:
      result = "OpenPushTips";
      break;
    case OpenBattlePass:
      result = "OpenBattlePass";
      break;
    case ChallengeInterrupt:
      result = "ChallengeInterrupt";
      break;
    case ChallengeInterruptJoystick:
      result = "ChallengeInterruptJoystick";
      break;
    case HomeworldCreateCustomSuiteJoystick:
      result = "HomeworldCreateCustomSuiteJoystick";
      break;
    case HomeworldFurnitureSearchJoystick:
      result = "HomeworldFurnitureSearchJoystick";
      break;
    case Hide:
      result = "Hide";
      break;
    case QuickUse:
      result = "QuickUse";
      break;
    case ActivitySkill:
      result = "ActivitySkill";
      break;
    case ExteraSelectUp:
      result = "ExteraSelectUp";
      break;
    case ExteraSelectDown:
      result = "ExteraSelectDown";
      break;
    case ExteraSelectLeft:
      result = "ExteraSelectLeft";
      break;
    case ExteraSelectRight:
      result = "ExteraSelectRight";
      break;
    case MusicGame_Left_Up:
      result = "MusicGame_Left_Up";
      break;
    case MusicGame_Left_Right:
      result = "MusicGame_Left_Right";
      break;
    case MusicGame_Left_Down:
      result = "MusicGame_Left_Down";
      break;
    case MusicGame_Left_Left:
      result = "MusicGame_Left_Left";
      break;
    case MusicGame_Right_Up:
      result = "MusicGame_Right_Up";
      break;
    case MusicGame_Right_Right:
      result = "MusicGame_Right_Right";
      break;
    case MusicGame_Right_Down:
      result = "MusicGame_Right_Down";
      break;
    case MusicGame_Right_Left:
      result = "MusicGame_Right_Left";
      break;
    case MusicGame_Free1:
      result = "MusicGame_Free1";
      break;
    case MusicGame_Free2:
      result = "MusicGame_Free2";
      break;
    case MusicGame_Free3:
      result = "MusicGame_Free3";
      break;
    case MusicGame_Free4:
      result = "MusicGame_Free4";
      break;
    case MusicGame_Free5:
      result = "MusicGame_Free5";
      break;
    case MusicGame_Free6:
      result = "MusicGame_Free6";
      break;
    case MusicGame_Free7:
      result = "MusicGame_Free7";
      break;
    case MusicGame_Free8:
      result = "MusicGame_Free8";
      break;
    case MusicGame_Free9:
      result = "MusicGame_Free9";
      break;
    case MusicGame_Free10:
      result = "MusicGame_Free10";
      break;
    case MusicGame_Free11:
      result = "MusicGame_Free11";
      break;
    case MusicGame_Free12:
      result = "MusicGame_Free12";
      break;
    case MusicGame_Free13:
      result = "MusicGame_Free13";
      break;
    case MusicGame_Free14:
      result = "MusicGame_Free14";
      break;
    case MusicGame_Free15:
      result = "MusicGame_Free15";
      break;
    case MusicGame_Free16:
      result = "MusicGame_Free16";
      break;
    case MusicGame_Free17:
      result = "MusicGame_Free17";
      break;
    case MusicGame_Free18:
      result = "MusicGame_Free18";
      break;
    case MusicGame_Free19:
      result = "MusicGame_Free19";
      break;
    case MusicGame_Free20:
      result = "MusicGame_Free20";
      break;
    case MusicGame_Free21:
      result = "MusicGame_Free21";
      break;
    case MenuNext:
      result = "MenuNext";
      break;
    case F1:
      result = "F1";
      break;
    case F2:
      result = "F2";
      break;
    case F3:
      result = "F3";
      break;
    case Return:
      result = "Return";
      break;
    case OpenHomeworldHandbook:
      result = "OpenHomeworldHandbook";
      break;
    case OpenHomeworldEditor:
      result = "OpenHomeworldEditor";
      break;
    case OpenTeamPage:
      result = "OpenTeamPage";
      break;
    case OpenFriendPage:
      result = "OpenFriendPage";
      break;
    case ObjectTurnUp:
      result = "ObjectTurnUp";
      break;
    case ObjectTurnDown:
      result = "ObjectTurnDown";
      break;
    case ObjectTurnLeft:
      result = "ObjectTurnLeft";
      break;
    case ObjectTurnRight:
      result = "ObjectTurnRight";
      break;
    case MouseLeftButton:
      result = "MouseLeftButton";
      break;
    case MouseRightButton:
      result = "MouseRightButton";
      break;
    case CameraMoveUp:
      result = "CameraMoveUp";
      break;
    case CameraMoveDown:
      result = "CameraMoveDown";
      break;
    case CustomLevelSwitchFloatMode:
      result = "CustomLevelSwitchFloatMode";
      break;
    case CustomLevelDeployConfirm:
      result = "CustomLevelDeployConfirm";
      break;
    case ArrowUp:
      result = "ArrowUp";
      break;
    case ArrowDown:
      result = "ArrowDown";
      break;
    case ArrowLeft:
      result = "ArrowLeft";
      break;
    case ArrowRight:
      result = "ArrowRight";
      break;
    case LeftControl:
      result = "LeftControl";
      break;
    case Space:
      result = "Space";
      break;
    case Undo:
      result = "Undo";
      break;
    case Save:
      result = "Save";
      break;
    case ObjectTurnClockwise:
      result = "ObjectTurnClockwise";
      break;
    case ObjectTurnAntiClockwise:
      result = "ObjectTurnAntiClockwise";
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumValToStr",
        327);
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

// Line 333: range 000000001160E2F0-00000000116141FF
bool __cdecl data::enumStrToVal(const std::string *s, data::InputActionType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::InputActionType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::InputActionType> >::pointer v10; // rax
  data::InputActionType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::InputActionType *ea; // [rsp+10h] [rbp-2380h]
  char v16[9072]; // [rsp+20h] [rbp-2370h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_8(9024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "159 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9"
                        " <unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkn"
                        "own> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 2"
                        "88 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9"
                        " <unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkn"
                        "own> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 5"
                        "44 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9"
                        " <unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkn"
                        "own> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 8"
                        "00 4 9 <unknown> 816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9"
                        " <unknown> 896 4 9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unkn"
                        "own> 976 4 9 <unknown> 992 4 9 <unknown> 1008 4 9 <unknown> 1024 4 9 <unknown> 1040 4 9 <unknown"
                        "> 1056 4 9 <unknown> 1072 4 9 <unknown> 1088 4 9 <unknown> 1104 4 9 <unknown> 1120 4 9 <unknown>"
                        " 1136 4 9 <unknown> 1152 4 9 <unknown> 1168 4 9 <unknown> 1184 4 9 <unknown> 1200 4 9 <unknown> "
                        "1216 4 9 <unknown> 1232 4 9 <unknown> 1248 4 9 <unknown> 1264 4 9 <unknown> 1280 4 9 <unknown> 1"
                        "296 4 9 <unknown> 1312 4 9 <unknown> 1328 4 9 <unknown> 1344 4 9 <unknown> 1360 4 9 <unknown> 13"
                        "76 4 9 <unknown> 1392 4 9 <unknown> 1408 4 9 <unknown> 1424 4 9 <unknown> 1440 4 9 <unknown> 145"
                        "6 4 9 <unknown> 1472 4 9 <unknown> 1488 4 9 <unknown> 1504 4 9 <unknown> 1520 4 9 <unknown> 1536"
                        " 4 9 <unknown> 1552 4 9 <unknown> 1568 4 9 <unknown> 1584 4 9 <unknown> 1600 4 9 <unknown> 1616 "
                        "4 9 <unknown> 1632 4 9 <unknown> 1648 4 9 <unknown> 1664 4 9 <unknown> 1680 4 9 <unknown> 1696 4"
                        " 9 <unknown> 1712 4 9 <unknown> 1728 4 9 <unknown> 1744 4 9 <unknown> 1760 4 9 <unknown> 1776 4 "
                        "9 <unknown> 1792 4 9 <unknown> 1808 4 9 <unknown> 1824 4 9 <unknown> 1840 4 9 <unknown> 1856 4 9"
                        " <unknown> 1872 4 9 <unknown> 1888 4 9 <unknown> 1904 4 9 <unknown> 1920 4 9 <unknown> 1936 4 9 "
                        "<unknown> 1952 4 9 <unknown> 1968 4 9 <unknown> 1984 4 9 <unknown> 2000 4 9 <unknown> 2016 4 9 <"
                        "unknown> 2032 4 9 <unknown> 2048 4 9 <unknown> 2064 4 9 <unknown> 2080 4 9 <unknown> 2096 4 9 <u"
                        "nknown> 2112 4 9 <unknown> 2128 4 9 <unknown> 2144 4 9 <unknown> 2160 4 9 <unknown> 2176 4 9 <un"
                        "known> 2192 4 9 <unknown> 2208 4 9 <unknown> 2224 4 9 <unknown> 2240 4 9 <unknown> 2256 4 9 <unk"
                        "nown> 2272 4 9 <unknown> 2288 4 9 <unknown> 2304 4 9 <unknown> 2320 4 9 <unknown> 2336 4 9 <unkn"
                        "own> 2352 4 9 <unknown> 2368 4 9 <unknown> 2384 4 9 <unknown> 2400 4 9 <unknown> 2416 4 9 <unkno"
                        "wn> 2432 4 9 <unknown> 2448 4 9 <unknown> 2464 4 9 <unknown> 2480 4 9 <unknown> 2496 8 6 it:494 "
                        "2528 8 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 6080 9 <unknown>";
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
  v4[536862798] = -218959360;
  v4[536862799] = -218959360;
  v4[536862801] = -218959118;
  v4[536862803] = -218959118;
  v4[536862994] = -202116109;
  v4[536862995] = -202116109;
  v4[536862996] = -202116109;
  v4[536862997] = -202116109;
  v4[536862998] = -202116109;
  v4[536862999] = -202116109;
  v4[536863000] = -202116109;
  v4[536863001] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ConfigUI.cpp",
      "enumStrToVal",
      336);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 2560),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::InputActionType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::InputActionType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = -1;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 2688),
        (const char (*)[9])"Internal",
        (data::InputActionType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Internal");
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[12],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 2728),
        (const char (*)[12])"MoveForward",
        (data::InputActionType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "MoveForward");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 2768),
        (const char (*)[13])"MoveBackward",
        (data::InputActionType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "MoveBackward");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 2808),
        (const char (*)[9])"MoveLeft",
        (data::InputActionType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "MoveLeft");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 2848),
        (const char (*)[10])"MoveRight",
        (data::InputActionType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "MoveRight");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 2888),
        (const char (*)[15])"MoveHorizontal",
        (data::InputActionType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "MoveHorizontal");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 2928),
        (const char (*)[13])"MoveVertical",
        (data::InputActionType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "MoveVertical");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[5],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 2968),
        (const char (*)[5])"Move",
        (data::InputActionType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Move");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3008),
        (const char (*)[15])"ViewHorizontal",
        (data::InputActionType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "ViewHorizontal");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3048),
        (const char (*)[13])"ViewVertical",
        (data::InputActionType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "ViewVertical");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[11],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3088),
        (const char (*)[11])"ChangeView",
        (data::InputActionType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "ChangeView");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[8],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3128),
        (const char (*)[8])"OpenMap",
        (data::InputActionType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "OpenMap");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[14],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3168),
        (const char (*)[14])"OpenCharacter",
        (data::InputActionType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "OpenCharacter");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[8],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3208),
        (const char (*)[8])"OpenBag",
        (data::InputActionType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "OpenBag");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3248),
        (const char (*)[10])"OpenGacha",
        (data::InputActionType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "OpenGacha");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3288),
        (const char (*)[9])"OpenChat",
        (data::InputActionType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "OpenChat");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[11],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3328),
        (const char (*)[11])"OpenPaimon",
        (data::InputActionType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "OpenPaimon");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3368),
        (const char (*)[16])"ToggleQuestBook",
        (data::InputActionType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "ToggleQuestBook");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3408),
        (const char (*)[10])"ToAvatar1",
        (data::InputActionType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "ToAvatar1");
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3448),
        (const char (*)[10])"ToAvatar2",
        (data::InputActionType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "ToAvatar2");
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3488),
        (const char (*)[10])"ToAvatar3",
        (data::InputActionType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "ToAvatar3");
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3528),
        (const char (*)[10])"ToAvatar4",
        (data::InputActionType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "ToAvatar4");
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3568),
        (const char (*)[16])"ChangeWithSkill",
        (data::InputActionType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "ChangeWithSkill");
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3608),
        (const char (*)[17])"WheelMenuTrigger",
        (data::InputActionType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "WheelMenuTrigger");
      *(_DWORD *)(v2 + 448) = 23;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[7],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3648),
        (const char (*)[7])"Skill1",
        (data::InputActionType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "Skill1");
      *(_DWORD *)(v2 + 464) = 24;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[7],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3688),
        (const char (*)[7])"Skill2",
        (data::InputActionType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "Skill2");
      *(_DWORD *)(v2 + 480) = 25;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3728),
        (const char (*)[15])"SprintOrSkill3",
        (data::InputActionType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "SprintOrSkill3");
      *(_DWORD *)(v2 + 496) = 26;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3768),
        (const char (*)[13])"JumpOrSkill4",
        (data::InputActionType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "JumpOrSkill4");
      *(_DWORD *)(v2 + 512) = 27;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[7],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3808),
        (const char (*)[7])"Skill5",
        (data::InputActionType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "Skill5");
      *(_DWORD *)(v2 + 528) = 28;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3848),
        (const char (*)[17])"ToggleAttackMode",
        (data::InputActionType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "ToggleAttackMode");
      *(_DWORD *)(v2 + 544) = 29;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3888),
        (const char (*)[15])"EnterFocusMode",
        (data::InputActionType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "EnterFocusMode");
      *(_DWORD *)(v2 + 560) = 30;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[11],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3928),
        (const char (*)[11])"TalkOrPick",
        (data::InputActionType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "TalkOrPick");
      *(_DWORD *)(v2 + 576) = 31;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 3968),
        (const char (*)[13])"LeftShoulder",
        (data::InputActionType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "LeftShoulder");
      *(_DWORD *)(v2 + 592) = 32;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[14],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4008),
        (const char (*)[14])"RightShoulder",
        (data::InputActionType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "RightShoulder");
      *(_DWORD *)(v2 + 608) = 33;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4048),
        (const char (*)[9])"MenuBack",
        (data::InputActionType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "MenuBack");
      *(_DWORD *)(v2 + 624) = 34;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[12],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4088),
        (const char (*)[12])"MenuConfirm",
        (data::InputActionType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "MenuConfirm");
      *(_DWORD *)(v2 + 640) = 35;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4128),
        (const char (*)[9])"MenuLeft",
        (data::InputActionType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "MenuLeft");
      *(_DWORD *)(v2 + 656) = 36;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[7],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4168),
        (const char (*)[7])"MenuUp",
        (data::InputActionType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "MenuUp");
      *(_DWORD *)(v2 + 672) = 37;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[14],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4208),
        (const char (*)[14])"LeftStickLeft",
        (data::InputActionType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "LeftStickLeft");
      *(_DWORD *)(v2 + 688) = 38;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4248),
        (const char (*)[15])"LeftStickRight",
        (data::InputActionType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "LeftStickRight");
      *(_DWORD *)(v2 + 704) = 39;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[12],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4288),
        (const char (*)[12])"LeftStickUp",
        (data::InputActionType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "LeftStickUp");
      *(_DWORD *)(v2 + 720) = 40;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[14],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4328),
        (const char (*)[14])"LeftStickDown",
        (data::InputActionType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "LeftStickDown");
      *(_DWORD *)(v2 + 736) = 41;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[18],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4368),
        (const char (*)[18])"LeftStickVertical",
        (data::InputActionType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "LeftStickVertical");
      *(_DWORD *)(v2 + 752) = 42;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[20],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4408),
        (const char (*)[20])"LeftStickHorizontal",
        (data::InputActionType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, "LeftStickHorizontal");
      *(_DWORD *)(v2 + 768) = 43;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[14],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4448),
        (const char (*)[14])"LeftStickMove",
        (data::InputActionType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, "LeftStickMove");
      *(_DWORD *)(v2 + 784) = 44;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4488),
        (const char (*)[16])"LeftStickButton",
        (data::InputActionType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, "LeftStickButton");
      *(_DWORD *)(v2 + 800) = 45;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4528),
        (const char (*)[15])"RightStickLeft",
        (data::InputActionType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, "RightStickLeft");
      *(_DWORD *)(v2 + 816) = 46;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4568),
        (const char (*)[16])"RightStickRight",
        (data::InputActionType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, "RightStickRight");
      *(_DWORD *)(v2 + 832) = 47;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4608),
        (const char (*)[13])"RightStickUp",
        (data::InputActionType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, "RightStickUp");
      *(_DWORD *)(v2 + 848) = 48;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4648),
        (const char (*)[15])"RightStickDown",
        (data::InputActionType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, "RightStickDown");
      *(_DWORD *)(v2 + 864) = 49;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[7],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4688),
        (const char (*)[7])"DPadUp",
        (data::InputActionType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, "DPadUp");
      *(_DWORD *)(v2 + 880) = 50;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4728),
        (const char (*)[10])"DPadRight",
        (data::InputActionType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, "DPadRight");
      *(_DWORD *)(v2 + 896) = 51;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4768),
        (const char (*)[9])"DPadDown",
        (data::InputActionType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, "DPadDown");
      *(_DWORD *)(v2 + 912) = 52;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4808),
        (const char (*)[9])"DPadLeft",
        (data::InputActionType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, "DPadLeft");
      *(_DWORD *)(v2 + 928) = 53;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[12],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4848),
        (const char (*)[12])"LeftTrigger",
        (data::InputActionType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, "LeftTrigger");
      *(_DWORD *)(v2 + 944) = 54;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4888),
        (const char (*)[13])"RightTrigger",
        (data::InputActionType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, "RightTrigger");
      *(_DWORD *)(v2 + 960) = 55;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[11],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4928),
        (const char (*)[11])"ZoomCamera",
        (data::InputActionType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, "ZoomCamera");
      *(_DWORD *)(v2 + 976) = 56;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[12],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 4968),
        (const char (*)[12])"ResetCamera",
        (data::InputActionType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, "ResetCamera");
      *(_DWORD *)(v2 + 992) = 57;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5008),
        (const char (*)[9])"SlowMove",
        (data::InputActionType *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, "SlowMove");
      *(_DWORD *)(v2 + 1008) = 58;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[5],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5048),
        (const char (*)[5])"Slip",
        (data::InputActionType *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, "Slip");
      *(_DWORD *)(v2 + 1024) = 59;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5088),
        (const char (*)[10])"DebugMenu",
        (data::InputActionType *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, "DebugMenu");
      *(_DWORD *)(v2 + 1040) = 60;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5128),
        (const char (*)[15])"QuestTransport",
        (data::InputActionType *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, "QuestTransport");
      *(_DWORD *)(v2 + 1056) = 61;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[19],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5168),
        (const char (*)[19])"RightStickVertical",
        (data::InputActionType *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, "RightStickVertical");
      *(_DWORD *)(v2 + 1072) = 62;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[21],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5208),
        (const char (*)[21])"RightStickHorizontal",
        (data::InputActionType *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, "RightStickHorizontal");
      *(_DWORD *)(v2 + 1088) = 63;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5248),
        (const char (*)[15])"RightStickMove",
        (data::InputActionType *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, "RightStickMove");
      *(_DWORD *)(v2 + 1104) = 64;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5288),
        (const char (*)[17])"RightStickButton",
        (data::InputActionType *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, "RightStickButton");
      *(_DWORD *)(v2 + 1120) = 65;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[5],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5328),
        (const char (*)[5])"Help",
        (data::InputActionType *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, "Help");
      *(_DWORD *)(v2 + 1136) = 66;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[12],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5368),
        (const char (*)[12])"Multiplayer",
        (data::InputActionType *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, "Multiplayer");
      *(_DWORD *)(v2 + 1152) = 67;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5408),
        (const char (*)[10])"MenuRight",
        (data::InputActionType *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, "MenuRight");
      *(_DWORD *)(v2 + 1168) = 68;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5448),
        (const char (*)[9])"MenuDown",
        (data::InputActionType *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, "MenuDown");
      *(_DWORD *)(v2 + 1184) = 69;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[11],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5488),
        (const char (*)[11])"OpenNotify",
        (data::InputActionType *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, "OpenNotify");
      *(_DWORD *)(v2 + 1200) = 70;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[18],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5528),
        (const char (*)[18])"OpenDungeonFactor",
        (data::InputActionType *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, "OpenDungeonFactor");
      *(_DWORD *)(v2 + 1216) = 71;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5568),
        (const char (*)[10])"ToAvatar5",
        (data::InputActionType *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, "ToAvatar5");
      *(_DWORD *)(v2 + 1232) = 1000;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[22],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5608),
        (const char (*)[22])"ToAvatar1TriggerSkill",
        (data::InputActionType *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, "ToAvatar1TriggerSkill");
      *(_DWORD *)(v2 + 1248) = 1001;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[22],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5648),
        (const char (*)[22])"ToAvatar2TriggerSkill",
        (data::InputActionType *)(v2 + 1248));
      if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1264, "ToAvatar2TriggerSkill");
      *(_DWORD *)(v2 + 1264) = 1002;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[22],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5688),
        (const char (*)[22])"ToAvatar3TriggerSkill",
        (data::InputActionType *)(v2 + 1264));
      if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1280, "ToAvatar3TriggerSkill");
      *(_DWORD *)(v2 + 1280) = 1003;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[22],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5728),
        (const char (*)[22])"ToAvatar4TriggerSkill",
        (data::InputActionType *)(v2 + 1280));
      if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1296, "ToAvatar4TriggerSkill");
      *(_DWORD *)(v2 + 1296) = 1004;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[22],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5768),
        (const char (*)[22])"ToAvatar5TriggerSkill",
        (data::InputActionType *)(v2 + 1296));
      if ( *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1312, "ToAvatar5TriggerSkill");
      *(_DWORD *)(v2 + 1312) = 1005;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5808),
        (const char (*)[13])"OpenHandbook",
        (data::InputActionType *)(v2 + 1312));
      if ( *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1328, "OpenHandbook");
      *(_DWORD *)(v2 + 1328) = 1006;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[11],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5848),
        (const char (*)[11])"TrackQuest",
        (data::InputActionType *)(v2 + 1328));
      if ( *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1344, "TrackQuest");
      *(_DWORD *)(v2 + 1344) = 1007;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[19],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5888),
        (const char (*)[19])"OpenActivityNormal",
        (data::InputActionType *)(v2 + 1344));
      if ( *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1360, "OpenActivityNormal");
      *(_DWORD *)(v2 + 1360) = 1008;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5928),
        (const char (*)[13])"OpenPushTips",
        (data::InputActionType *)(v2 + 1360));
      if ( *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1376, "OpenPushTips");
      *(_DWORD *)(v2 + 1376) = 1009;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 5968),
        (const char (*)[15])"OpenBattlePass",
        (data::InputActionType *)(v2 + 1376));
      if ( *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1392, "OpenBattlePass");
      *(_DWORD *)(v2 + 1392) = 1010;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[19],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6008),
        (const char (*)[19])"ChallengeInterrupt",
        (data::InputActionType *)(v2 + 1392));
      if ( *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1408, "ChallengeInterrupt");
      *(_DWORD *)(v2 + 1408) = 1011;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[27],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6048),
        (const char (*)[27])"ChallengeInterruptJoystick",
        (data::InputActionType *)(v2 + 1408));
      if ( *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1424, "ChallengeInterruptJoystick");
      *(_DWORD *)(v2 + 1424) = 1012;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[35],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6088),
        (const char (*)[35])"HomeworldCreateCustomSuiteJoystick",
        (data::InputActionType *)(v2 + 1424));
      if ( *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1440, "HomeworldCreateCustomSuiteJoystick");
      *(_DWORD *)(v2 + 1440) = 1013;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[33],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6128),
        (const char (*)[33])"HomeworldFurnitureSearchJoystick",
        (data::InputActionType *)(v2 + 1440));
      if ( *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1456, "HomeworldFurnitureSearchJoystick");
      *(_DWORD *)(v2 + 1456) = 1014;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[5],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6168),
        (const char (*)[5])"Hide",
        (data::InputActionType *)(v2 + 1456));
      if ( *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1472, "Hide");
      *(_DWORD *)(v2 + 1472) = 1015;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6208),
        (const char (*)[9])"QuickUse",
        (data::InputActionType *)(v2 + 1472));
      if ( *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1488, "QuickUse");
      *(_DWORD *)(v2 + 1488) = 1016;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[14],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6248),
        (const char (*)[14])"ActivitySkill",
        (data::InputActionType *)(v2 + 1488));
      if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1504, "ActivitySkill");
      *(_DWORD *)(v2 + 1504) = 1017;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6288),
        (const char (*)[15])"ExteraSelectUp",
        (data::InputActionType *)(v2 + 1504));
      if ( *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1520, "ExteraSelectUp");
      *(_DWORD *)(v2 + 1520) = 1018;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6328),
        (const char (*)[17])"ExteraSelectDown",
        (data::InputActionType *)(v2 + 1520));
      if ( *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1536, "ExteraSelectDown");
      *(_DWORD *)(v2 + 1536) = 1019;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6368),
        (const char (*)[17])"ExteraSelectLeft",
        (data::InputActionType *)(v2 + 1536));
      if ( *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1552, "ExteraSelectLeft");
      *(_DWORD *)(v2 + 1552) = 1020;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[18],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6408),
        (const char (*)[18])"ExteraSelectRight",
        (data::InputActionType *)(v2 + 1552));
      if ( *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1568, "ExteraSelectRight");
      *(_DWORD *)(v2 + 1568) = 1021;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[18],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6448),
        (const char (*)[18])"MusicGame_Left_Up",
        (data::InputActionType *)(v2 + 1568));
      if ( *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1584, "MusicGame_Left_Up");
      *(_DWORD *)(v2 + 1584) = 1022;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[21],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6488),
        (const char (*)[21])"MusicGame_Left_Right",
        (data::InputActionType *)(v2 + 1584));
      if ( *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1600, "MusicGame_Left_Right");
      *(_DWORD *)(v2 + 1600) = 1023;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[20],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6528),
        (const char (*)[20])"MusicGame_Left_Down",
        (data::InputActionType *)(v2 + 1600));
      if ( *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1616, "MusicGame_Left_Down");
      *(_DWORD *)(v2 + 1616) = 1024;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[20],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6568),
        (const char (*)[20])"MusicGame_Left_Left",
        (data::InputActionType *)(v2 + 1616));
      if ( *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1632, "MusicGame_Left_Left");
      *(_DWORD *)(v2 + 1632) = 1025;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[19],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6608),
        (const char (*)[19])"MusicGame_Right_Up",
        (data::InputActionType *)(v2 + 1632));
      if ( *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1648, "MusicGame_Right_Up");
      *(_DWORD *)(v2 + 1648) = 1026;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[22],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6648),
        (const char (*)[22])"MusicGame_Right_Right",
        (data::InputActionType *)(v2 + 1648));
      if ( *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1664, "MusicGame_Right_Right");
      *(_DWORD *)(v2 + 1664) = 1027;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[21],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6688),
        (const char (*)[21])"MusicGame_Right_Down",
        (data::InputActionType *)(v2 + 1664));
      if ( *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1680, "MusicGame_Right_Down");
      *(_DWORD *)(v2 + 1680) = 1028;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[21],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6728),
        (const char (*)[21])"MusicGame_Right_Left",
        (data::InputActionType *)(v2 + 1680));
      if ( *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1696, "MusicGame_Right_Left");
      *(_DWORD *)(v2 + 1696) = 1029;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6768),
        (const char (*)[16])"MusicGame_Free1",
        (data::InputActionType *)(v2 + 1696));
      if ( *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1712, "MusicGame_Free1");
      *(_DWORD *)(v2 + 1712) = 1030;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6808),
        (const char (*)[16])"MusicGame_Free2",
        (data::InputActionType *)(v2 + 1712));
      if ( *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1728, "MusicGame_Free2");
      *(_DWORD *)(v2 + 1728) = 1031;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6848),
        (const char (*)[16])"MusicGame_Free3",
        (data::InputActionType *)(v2 + 1728));
      if ( *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1744, "MusicGame_Free3");
      *(_DWORD *)(v2 + 1744) = 1032;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6888),
        (const char (*)[16])"MusicGame_Free4",
        (data::InputActionType *)(v2 + 1744));
      if ( *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1760, "MusicGame_Free4");
      *(_DWORD *)(v2 + 1760) = 1033;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6928),
        (const char (*)[16])"MusicGame_Free5",
        (data::InputActionType *)(v2 + 1760));
      if ( *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1776, "MusicGame_Free5");
      *(_DWORD *)(v2 + 1776) = 1034;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 6968),
        (const char (*)[16])"MusicGame_Free6",
        (data::InputActionType *)(v2 + 1776));
      if ( *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1792, "MusicGame_Free6");
      *(_DWORD *)(v2 + 1792) = 1035;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7008),
        (const char (*)[16])"MusicGame_Free7",
        (data::InputActionType *)(v2 + 1792));
      if ( *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1808, "MusicGame_Free7");
      *(_DWORD *)(v2 + 1808) = 1036;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7048),
        (const char (*)[16])"MusicGame_Free8",
        (data::InputActionType *)(v2 + 1808));
      if ( *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1824, "MusicGame_Free8");
      *(_DWORD *)(v2 + 1824) = 1037;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7088),
        (const char (*)[16])"MusicGame_Free9",
        (data::InputActionType *)(v2 + 1824));
      if ( *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1840, "MusicGame_Free9");
      *(_DWORD *)(v2 + 1840) = 1038;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7128),
        (const char (*)[17])"MusicGame_Free10",
        (data::InputActionType *)(v2 + 1840));
      if ( *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1856, "MusicGame_Free10");
      *(_DWORD *)(v2 + 1856) = 1039;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7168),
        (const char (*)[17])"MusicGame_Free11",
        (data::InputActionType *)(v2 + 1856));
      if ( *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1872, "MusicGame_Free11");
      *(_DWORD *)(v2 + 1872) = 1040;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7208),
        (const char (*)[17])"MusicGame_Free12",
        (data::InputActionType *)(v2 + 1872));
      if ( *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1888, "MusicGame_Free12");
      *(_DWORD *)(v2 + 1888) = 1041;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7248),
        (const char (*)[17])"MusicGame_Free13",
        (data::InputActionType *)(v2 + 1888));
      if ( *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1904, "MusicGame_Free13");
      *(_DWORD *)(v2 + 1904) = 1042;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7288),
        (const char (*)[17])"MusicGame_Free14",
        (data::InputActionType *)(v2 + 1904));
      if ( *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1920, "MusicGame_Free14");
      *(_DWORD *)(v2 + 1920) = 1043;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7328),
        (const char (*)[17])"MusicGame_Free15",
        (data::InputActionType *)(v2 + 1920));
      if ( *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1936, "MusicGame_Free15");
      *(_DWORD *)(v2 + 1936) = 1044;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7368),
        (const char (*)[17])"MusicGame_Free16",
        (data::InputActionType *)(v2 + 1936));
      if ( *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1952, "MusicGame_Free16");
      *(_DWORD *)(v2 + 1952) = 1045;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7408),
        (const char (*)[17])"MusicGame_Free17",
        (data::InputActionType *)(v2 + 1952));
      if ( *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1968, "MusicGame_Free17");
      *(_DWORD *)(v2 + 1968) = 1046;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7448),
        (const char (*)[17])"MusicGame_Free18",
        (data::InputActionType *)(v2 + 1968));
      if ( *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1984, "MusicGame_Free18");
      *(_DWORD *)(v2 + 1984) = 1047;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7488),
        (const char (*)[17])"MusicGame_Free19",
        (data::InputActionType *)(v2 + 1984));
      if ( *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2000, "MusicGame_Free19");
      *(_DWORD *)(v2 + 2000) = 1048;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7528),
        (const char (*)[17])"MusicGame_Free20",
        (data::InputActionType *)(v2 + 2000));
      if ( *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2016, "MusicGame_Free20");
      *(_DWORD *)(v2 + 2016) = 1049;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7568),
        (const char (*)[17])"MusicGame_Free21",
        (data::InputActionType *)(v2 + 2016));
      if ( *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2032, "MusicGame_Free21");
      *(_DWORD *)(v2 + 2032) = 1050;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[9],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7608),
        (const char (*)[9])"MenuNext",
        (data::InputActionType *)(v2 + 2032));
      if ( *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2048, "MenuNext");
      *(_DWORD *)(v2 + 2048) = 1051;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[3],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7648),
        (const char (*)[3])"F1",
        (data::InputActionType *)(v2 + 2048));
      if ( *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2064, "F1");
      *(_DWORD *)(v2 + 2064) = 1052;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[3],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7688),
        (const char (*)[3])"F2",
        (data::InputActionType *)(v2 + 2064));
      if ( *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2080, "F2");
      *(_DWORD *)(v2 + 2080) = 1053;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[3],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7728),
        (const char (*)[3])"F3",
        (data::InputActionType *)(v2 + 2080));
      if ( *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2096, "F3");
      *(_DWORD *)(v2 + 2096) = 1054;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[7],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7768),
        (const char (*)[7])"Return",
        (data::InputActionType *)(v2 + 2096));
      if ( *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2112, "Return");
      *(_DWORD *)(v2 + 2112) = 1055;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[22],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7808),
        (const char (*)[22])"OpenHomeworldHandbook",
        (data::InputActionType *)(v2 + 2112));
      if ( *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2128, "OpenHomeworldHandbook");
      *(_DWORD *)(v2 + 2128) = 1056;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[20],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7848),
        (const char (*)[20])"OpenHomeworldEditor",
        (data::InputActionType *)(v2 + 2128));
      if ( *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2144, "OpenHomeworldEditor");
      *(_DWORD *)(v2 + 2144) = 1057;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7888),
        (const char (*)[13])"OpenTeamPage",
        (data::InputActionType *)(v2 + 2144));
      if ( *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2160, "OpenTeamPage");
      *(_DWORD *)(v2 + 2160) = 1058;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7928),
        (const char (*)[15])"OpenFriendPage",
        (data::InputActionType *)(v2 + 2160));
      if ( *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2176, "OpenFriendPage");
      *(_DWORD *)(v2 + 2176) = 1059;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 7968),
        (const char (*)[13])"ObjectTurnUp",
        (data::InputActionType *)(v2 + 2176));
      if ( *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2192, "ObjectTurnUp");
      *(_DWORD *)(v2 + 2192) = 1060;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8008),
        (const char (*)[15])"ObjectTurnDown",
        (data::InputActionType *)(v2 + 2192));
      if ( *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2208, "ObjectTurnDown");
      *(_DWORD *)(v2 + 2208) = 1061;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8048),
        (const char (*)[15])"ObjectTurnLeft",
        (data::InputActionType *)(v2 + 2208));
      if ( *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2224, "ObjectTurnLeft");
      *(_DWORD *)(v2 + 2224) = 1062;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8088),
        (const char (*)[16])"ObjectTurnRight",
        (data::InputActionType *)(v2 + 2224));
      if ( *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2240, "ObjectTurnRight");
      *(_DWORD *)(v2 + 2240) = 1063;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[16],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8128),
        (const char (*)[16])"MouseLeftButton",
        (data::InputActionType *)(v2 + 2240));
      if ( *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2256, "MouseLeftButton");
      *(_DWORD *)(v2 + 2256) = 1064;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[17],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8168),
        (const char (*)[17])"MouseRightButton",
        (data::InputActionType *)(v2 + 2256));
      if ( *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2272, "MouseRightButton");
      *(_DWORD *)(v2 + 2272) = 1065;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[13],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8208),
        (const char (*)[13])"CameraMoveUp",
        (data::InputActionType *)(v2 + 2272));
      if ( *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2288, "CameraMoveUp");
      *(_DWORD *)(v2 + 2288) = 1066;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[15],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8248),
        (const char (*)[15])"CameraMoveDown",
        (data::InputActionType *)(v2 + 2288));
      if ( *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2304, "CameraMoveDown");
      *(_DWORD *)(v2 + 2304) = 1067;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[27],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8288),
        (const char (*)[27])"CustomLevelSwitchFloatMode",
        (data::InputActionType *)(v2 + 2304));
      if ( *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2320, "CustomLevelSwitchFloatMode");
      *(_DWORD *)(v2 + 2320) = 1068;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[25],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8328),
        (const char (*)[25])"CustomLevelDeployConfirm",
        (data::InputActionType *)(v2 + 2320));
      if ( *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2336, "CustomLevelDeployConfirm");
      *(_DWORD *)(v2 + 2336) = 1069;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[8],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8368),
        (const char (*)[8])"ArrowUp",
        (data::InputActionType *)(v2 + 2336));
      if ( *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2352, "ArrowUp");
      *(_DWORD *)(v2 + 2352) = 1070;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8408),
        (const char (*)[10])"ArrowDown",
        (data::InputActionType *)(v2 + 2352));
      if ( *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2368, "ArrowDown");
      *(_DWORD *)(v2 + 2368) = 1071;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[10],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8448),
        (const char (*)[10])"ArrowLeft",
        (data::InputActionType *)(v2 + 2368));
      if ( *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2384, "ArrowLeft");
      *(_DWORD *)(v2 + 2384) = 1072;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[11],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8488),
        (const char (*)[11])"ArrowRight",
        (data::InputActionType *)(v2 + 2384));
      if ( *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2400, "ArrowRight");
      *(_DWORD *)(v2 + 2400) = 1073;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[12],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8528),
        (const char (*)[12])"LeftControl",
        (data::InputActionType *)(v2 + 2400));
      if ( *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2416, "LeftControl");
      *(_DWORD *)(v2 + 2416) = 1074;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[6],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8568),
        (const char (*)[6])"Space",
        (data::InputActionType *)(v2 + 2416));
      if ( *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2432, "Space");
      *(_DWORD *)(v2 + 2432) = 1075;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[5],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8608),
        (const char (*)[5])"Undo",
        (data::InputActionType *)(v2 + 2432));
      if ( *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2448, "Undo");
      *(_DWORD *)(v2 + 2448) = 1076;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[5],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8648),
        (const char (*)[5])"Save",
        (data::InputActionType *)(v2 + 2448));
      if ( *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2464, "Save");
      *(_DWORD *)(v2 + 2464) = 1077;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[20],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8688),
        (const char (*)[20])"ObjectTurnClockwise",
        (data::InputActionType *)(v2 + 2464));
      if ( *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2480, "ObjectTurnClockwise");
      *(_DWORD *)(v2 + 2480) = 1078;
      std::pair<std::string const,data::InputActionType>::pair<char const(&)[24],data::InputActionType,true>(
        (std::pair<const std::string,data::InputActionType> *const)(v2 + 8728),
        (const char (*)[24])"ObjectTurnAntiClockwise",
        (data::InputActionType *)(v2 + 2480));
      std::allocator<std::pair<std::string const,data::InputActionType>>::allocator((std::allocator<std::pair<const std::string,data::InputActionType> > *const)(v2 + 48));
      std::map<std::string,data::InputActionType>::map(
        &data::enumStrToVal(std::string const&,data::InputActionType &)::m,
        (std::initializer_list<std::pair<const std::string,data::InputActionType> >)__PAIR128__(152LL, v2 + 2688),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::InputActionType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::InputActionType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::InputActionType>::~map,
        &data::enumStrToVal(std::string const&,data::InputActionType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::InputActionType>>::~allocator((std::allocator<std::pair<const std::string,data::InputActionType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::InputActionType> *)(v2 + 8768);
            i != (std::pair<const std::string,data::InputActionType> *)(v2 + 2688);
            std::pair<std::string const,data::InputActionType>::~pair(i) )
      {
        --i;
      }
      e = (data::InputActionType *)6080;
      __asan_poison_stack_memory(v2 + 2688, 6080LL);
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
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 2496, e);
    *(std::map<std::string,data::InputActionType>::iterator *)(v2 + 2496) = std::map<std::string,data::InputActionType>::find(
                                                                              &data::enumStrToVal(std::string const&,data::InputActionType &)::m,
                                                                              s);
    *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 2528, s);
    *(std::map<std::string,data::InputActionType>::iterator *)(v2 + 2528) = std::map<std::string,data::InputActionType>::end(&data::enumStrToVal(std::string const&,data::InputActionType &)::m);
    v7 = (char *)(v2 + 2528);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InputActionType> >::_Self *)(v2 + 2496),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InputActionType> >::_Self *)(v2 + 2528));
    *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumStrToVal",
        497);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 2624),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2624));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::InputActionType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::InputActionType> > *const)(v2 + 2496));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8138) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 320) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8144) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF814C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8460) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862805) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147451212 - (((_DWORD)v4 + 2147451220) & 0xFFFFFFF8) + 796) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_8(v2, 9024LL, v16);
  }
  return v13;
};

// Line 505: range 0000000011614200-0000000011614938
const char *__cdecl data::getDescription(data::InputActionType e)
{
  const char *result; // rax

  switch ( e )
  {
    case Internal:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MoveForward:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MoveBackward:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MoveLeft:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MoveRight:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MoveHorizontal:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MoveVertical:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Move:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ViewHorizontal:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ViewVertical:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ChangeView:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenMap:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenCharacter:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenBag:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenGacha:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenChat:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenPaimon:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToggleQuestBook:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar1:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar2:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar3:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar4:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ChangeWithSkill:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case WheelMenuTrigger:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Skill1:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Skill2:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SprintOrSkill3:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case JumpOrSkill4:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Skill5:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToggleAttackMode:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case EnterFocusMode:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TalkOrPick:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftShoulder:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightShoulder:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuBack:
      result = (const char *)&unk_1A80F680;
      break;
    case MenuConfirm:
      result = (const char *)&unk_1A80F6C0;
      break;
    case MenuLeft:
      result = (const char *)&unk_1A80F700;
      break;
    case MenuUp:
      result = (const char *)&unk_1A80F760;
      break;
    case LeftStickLeft:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickRight:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickUp:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickDown:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickVertical:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickHorizontal:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickMove:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickButton:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickLeft:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickRight:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickUp:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickDown:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadUp:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadRight:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadDown:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadLeft:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftTrigger:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightTrigger:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ZoomCamera:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ResetCamera:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SlowMove:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Slip:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DebugMenu:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case QuestTransport:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickVertical:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickHorizontal:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickMove:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickButton:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Help:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Multiplayer:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuRight:
      result = (const char *)&unk_1A80F7C0;
      break;
    case MenuDown:
      result = (const char *)&unk_1A80F820;
      break;
    case OpenNotify:
      result = (const char *)&unk_1A80F880;
      break;
    case OpenDungeonFactor:
      result = (const char *)&unk_1A80F8C0;
      break;
    case ToAvatar5:
      result = (const char *)&unk_1A80F900;
      break;
    case ToAvatar1TriggerSkill:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar2TriggerSkill:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar3TriggerSkill:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar4TriggerSkill:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar5TriggerSkill:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenHandbook:
      result = (const char *)&unk_1A80F960;
      break;
    case TrackQuest:
      result = (const char *)&unk_1A80F9A0;
      break;
    case OpenActivityNormal:
      result = (const char *)&unk_1A80F9E0;
      break;
    case OpenPushTips:
      result = (const char *)&unk_1A80FA20;
      break;
    case OpenBattlePass:
      result = (const char *)&unk_1A80FA60;
      break;
    case ChallengeInterrupt:
      result = (const char *)&unk_1A80FAA0;
      break;
    case ChallengeInterruptJoystick:
      result = (const char *)&unk_1A80FAA0;
      break;
    case HomeworldCreateCustomSuiteJoystick:
      result = (const char *)&unk_1A80FAE0;
      break;
    case HomeworldFurnitureSearchJoystick:
      result = (const char *)&unk_1A80FB40;
      break;
    case Hide:
      result = (const char *)&unk_1A7E2560;
      break;
    case QuickUse:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ActivitySkill:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ExteraSelectUp:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ExteraSelectDown:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ExteraSelectLeft:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ExteraSelectRight:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Left_Up:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Left_Right:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Left_Down:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Left_Left:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Right_Up:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Right_Right:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Right_Down:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Right_Left:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free1:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free2:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free3:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free4:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free5:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free6:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free7:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free8:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free9:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free10:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free11:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free12:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free13:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free14:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free15:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free16:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free17:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free18:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free19:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free20:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGame_Free21:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuNext:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case F1:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case F2:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case F3:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Return:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenHomeworldHandbook:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenHomeworldEditor:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenTeamPage:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenFriendPage:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnUp:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnDown:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnLeft:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnRight:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MouseLeftButton:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MouseRightButton:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CameraMoveUp:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CameraMoveDown:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CustomLevelSwitchFloatMode:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CustomLevelDeployConfirm:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowUp:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowDown:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowLeft:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowRight:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftControl:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Space:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Undo:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Save:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnClockwise:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnAntiClockwise:
      result = (const char *)&unk_1A7E0BE0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 818: range 0000000011614939-0000000011614BB6
const char *__cdecl data::enumValToStr(data::InputValueType e)
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
  if ( e == TwoAxisInput )
  {
    result = "TwoAxisInput";
  }
  else
  {
    if ( e > TwoAxisInput )
      goto LABEL_22;
    if ( e == ButtonInput )
    {
      result = "ButtonInput";
      goto LABEL_17;
    }
    if ( e == OneAxisInput )
    {
      result = "OneAxisInput";
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumValToStr",
        828);
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

// Line 834: range 0000000011614BB7-0000000011615498
bool __cdecl data::enumStrToVal(const std::string *s, data::InputValueType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::InputValueType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::InputValueType> >::pointer v11; // rax
  data::InputValueType second; // ecx
  char v13; // dl
  data::InputValueType *ea; // [rsp+10h] [rbp-220h]
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
                        " it:846 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ConfigUI.cpp",
      "enumStrToVal",
      837);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::InputValueType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::InputValueType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::InputValueType>::pair<char const(&)[12],data::InputValueType,true>(
        (std::pair<const std::string,data::InputValueType> *const)(v2 + 320),
        (const char (*)[12])"ButtonInput",
        (data::InputValueType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "ButtonInput");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::InputValueType>::pair<char const(&)[13],data::InputValueType,true>(
        (std::pair<const std::string,data::InputValueType> *const)(v2 + 360),
        (const char (*)[13])"OneAxisInput",
        (data::InputValueType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "OneAxisInput");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::InputValueType>::pair<char const(&)[13],data::InputValueType,true>(
        (std::pair<const std::string,data::InputValueType> *const)(v2 + 400),
        (const char (*)[13])"TwoAxisInput",
        (data::InputValueType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::InputValueType>>::allocator((std::allocator<std::pair<const std::string,data::InputValueType> > *const)(v2 + 64));
      std::map<std::string,data::InputValueType>::map(
        &data::enumStrToVal(std::string const&,data::InputValueType &)::m,
        (std::initializer_list<std::pair<const std::string,data::InputValueType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::InputValueType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::InputValueType &)::m);
      e = (data::InputValueType *)&data::enumStrToVal(std::string const&,data::InputValueType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::InputValueType>::~map,
        &data::enumStrToVal(std::string const&,data::InputValueType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::InputValueType>>::~allocator((std::allocator<std::pair<const std::string,data::InputValueType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::InputValueType> *)(v2 + 440);
            i != (std::pair<const std::string,data::InputValueType> *)(v2 + 320);
            std::pair<std::string const,data::InputValueType>::~pair(i) )
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
    *(std::map<std::string,data::InputValueType>::iterator *)(v2 + 128) = std::map<std::string,data::InputValueType>::find(
                                                                            &data::enumStrToVal(std::string const&,data::InputValueType &)::m,
                                                                            s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::InputValueType>::iterator *)(v2 + 160) = std::map<std::string,data::InputValueType>::end(&data::enumStrToVal(std::string const&,data::InputValueType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InputValueType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InputValueType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumStrToVal",
        849);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::InputValueType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::InputValueType> > *const)(v2 + 128));
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

// Line 857: range 0000000011615499-00000000116154DD
const char *__cdecl data::getDescription(data::InputValueType e)
{
  if ( e == TwoAxisInput )
    return (const char *)&unk_1A7E0BE0;
  if ( e > TwoAxisInput )
    return "unknown enum value!";
  if ( e == ButtonInput )
    return (const char *)&unk_1A7E0BE0;
  if ( e == OneAxisInput )
    return (const char *)&unk_1A7E0BE0;
  else
    return "unknown enum value!";
};

// Line 872: range 00000000116154DE-00000000116157D4
const char *__cdecl data::enumValToStr(data::ActionEventType e)
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
    case Any_2:
      result = off_1A810DE0;
      break;
    case ButtonPressed:
      result = "ButtonPressed";
      break;
    case ButtonReleased:
      result = "ButtonReleased";
      break;
    case ButtonPressing:
      result = "ButtonPressing";
      break;
    case ButtonUnpressing:
      result = "ButtonUnpressing";
      break;
    case ButtonLongPressed:
      result = "ButtonLongPressed";
      break;
    case ButtonLongPressing:
      result = "ButtonLongPressing";
      break;
    case ButtonLongReleased:
      result = "ButtonLongReleased";
      break;
    case ButtonShortPressUp:
      result = "ButtonShortPressUp";
      break;
    case ButtonRepeating:
      result = "ButtonRepeating";
      break;
    case AxisActive:
      result = "AxisActive";
      break;
    case NegativeButtonRepeating:
      result = "NegativeButtonRepeating";
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumValToStr",
        900);
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

// Line 906: range 00000000116157D5-000000001161665A
bool __cdecl data::enumStrToVal(const std::string *s, data::ActionEventType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ActionEventType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ActionEventType> >::pointer v10; // rax
  data::ActionEventType second; // ecx
  char v12; // dl
  data::ActionEventType *ea; // [rsp+10h] [rbp-420h]
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
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 8 6 it:927 288 8 9 <unknown> 320 3"
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
      "./src/json_data_auto/ConfigUI.cpp",
      "enumStrToVal",
      909);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ActionEventType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ActionEventType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[4],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 448),
        (const char (*)[4])off_1A810DE0,
        (data::ActionEventType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, off_1A810DE0);
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[14],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 488),
        (const char (*)[14])"ButtonPressed",
        (data::ActionEventType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "ButtonPressed");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[15],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 528),
        (const char (*)[15])"ButtonReleased",
        (data::ActionEventType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "ButtonReleased");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[15],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 568),
        (const char (*)[15])"ButtonPressing",
        (data::ActionEventType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "ButtonPressing");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[17],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 608),
        (const char (*)[17])"ButtonUnpressing",
        (data::ActionEventType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "ButtonUnpressing");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[18],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 648),
        (const char (*)[18])"ButtonLongPressed",
        (data::ActionEventType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "ButtonLongPressed");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[19],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 688),
        (const char (*)[19])"ButtonLongPressing",
        (data::ActionEventType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "ButtonLongPressing");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[19],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 728),
        (const char (*)[19])"ButtonLongReleased",
        (data::ActionEventType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "ButtonLongReleased");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[19],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 768),
        (const char (*)[19])"ButtonShortPressUp",
        (data::ActionEventType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "ButtonShortPressUp");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[16],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 808),
        (const char (*)[16])"ButtonRepeating",
        (data::ActionEventType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "ButtonRepeating");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[11],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 848),
        (const char (*)[11])"AxisActive",
        (data::ActionEventType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "AxisActive");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::ActionEventType>::pair<char const(&)[24],data::ActionEventType,true>(
        (std::pair<const std::string,data::ActionEventType> *const)(v2 + 888),
        (const char (*)[24])"NegativeButtonRepeating",
        (data::ActionEventType *)(v2 + 240));
      std::allocator<std::pair<std::string const,data::ActionEventType>>::allocator((std::allocator<std::pair<const std::string,data::ActionEventType> > *const)(v2 + 48));
      std::map<std::string,data::ActionEventType>::map(
        &data::enumStrToVal(std::string const&,data::ActionEventType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ActionEventType> >)__PAIR128__(12LL, v2 + 448),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ActionEventType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ActionEventType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ActionEventType>::~map,
        &data::enumStrToVal(std::string const&,data::ActionEventType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ActionEventType>>::~allocator((std::allocator<std::pair<const std::string,data::ActionEventType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ActionEventType> *)(v2 + 928);
            i != (std::pair<const std::string,data::ActionEventType> *)(v2 + 448);
            std::pair<std::string const,data::ActionEventType>::~pair(i) )
      {
        --i;
      }
      e = (data::ActionEventType *)480;
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
    *(std::map<std::string,data::ActionEventType>::iterator *)(v2 + 256) = std::map<std::string,data::ActionEventType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::ActionEventType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, s);
    *(std::map<std::string,data::ActionEventType>::iterator *)(v2 + 288) = std::map<std::string,data::ActionEventType>::end(&data::enumStrToVal(std::string const&,data::ActionEventType &)::m);
    v7 = (char *)(v2 + 288);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionEventType> >::_Self *)(v2 + 256),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionEventType> >::_Self *)(v2 + 288));
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumStrToVal",
        930);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ActionEventType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionEventType> > *const)(v2 + 256));
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

// Line 938: range 000000001161665B-0000000011616703
const char *__cdecl data::getDescription(data::ActionEventType e)
{
  const char *result; // rax

  switch ( e )
  {
    case Any_2:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ButtonPressed:
      result = (const char *)&unk_1A811280;
      break;
    case ButtonReleased:
      result = (const char *)&unk_1A8112C0;
      break;
    case ButtonPressing:
      result = (const char *)&unk_1A811300;
      break;
    case ButtonUnpressing:
      result = (const char *)&unk_1A811340;
      break;
    case ButtonLongPressed:
      result = (const char *)&unk_1A811380;
      break;
    case ButtonLongPressing:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ButtonLongReleased:
      result = (const char *)&unk_1A8113E0;
      break;
    case ButtonShortPressUp:
      result = (const char *)&unk_1A811440;
      break;
    case ButtonRepeating:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case AxisActive:
      result = "every frame the axis value is non-zero";
      break;
    case NegativeButtonRepeating:
      result = (const char *)&unk_1A7E0BE0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 971: range 0000000011616704-0000000011617315
const char *__cdecl data::enumValToStr(data::InputEventType e)
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
    case Invalid_3:
      result = "Invalid";
      break;
    case MoveEvent:
      result = "MoveEvent";
      break;
    case ChangeViewEvent:
      result = "ChangeViewEvent";
      break;
    case OpenMapEvent:
      result = "OpenMapEvent";
      break;
    case OpenCharacterEvent:
      result = "OpenCharacterEvent";
      break;
    case OpenBagEvent:
      result = "OpenBagEvent";
      break;
    case OpenGachaEvent:
      result = "OpenGachaEvent";
      break;
    case OpenChatEvent:
      result = "OpenChatEvent";
      break;
    case OpenPaimonEvent:
      result = "OpenPaimonEvent";
      break;
    case ToggleQuestBookEvent:
      result = "ToggleQuestBookEvent";
      break;
    case ToAvatar1Event:
      result = "ToAvatar1Event";
      break;
    case ToAvatar2Event:
      result = "ToAvatar2Event";
      break;
    case ToAvatar3Event:
      result = "ToAvatar3Event";
      break;
    case ToAvatar4Event:
      result = "ToAvatar4Event";
      break;
    case TriggerChangeWithSkillEvent:
      result = "TriggerChangeWithSkillEvent";
      break;
    case CancelChangeWithSkillEvent:
      result = "CancelChangeWithSkillEvent";
      break;
    case TriggerWheelMenuEvent:
      result = "TriggerWheelMenuEvent";
      break;
    case CloseWheelMenuEvent:
      result = "CloseWheelMenuEvent";
      break;
    case TriggerSkill1Event:
      result = "TriggerSkill1Event";
      break;
    case TriggerSkill2Event:
      result = "TriggerSkill2Event";
      break;
    case TriggerSkill3Event:
      result = "TriggerSkill3Event";
      break;
    case TriggerSkill4Event:
      result = "TriggerSkill4Event";
      break;
    case TriggerSkill5Event:
      result = "TriggerSkill5Event";
      break;
    case ReleaseSkill1Event:
      result = "ReleaseSkill1Event";
      break;
    case ReleaseSkill2Event:
      result = "ReleaseSkill2Event";
      break;
    case ReleaseSkill3Event:
      result = "ReleaseSkill3Event";
      break;
    case ReleaseSkill4Event:
      result = "ReleaseSkill4Event";
      break;
    case ReleaseSkill5Event:
      result = "ReleaseSkill5Event";
      break;
    case SelectingEvent:
      result = "SelectingEvent";
      break;
    case CancelSelectingEvent:
      result = "CancelSelectingEvent";
      break;
    case ToggleAttackModeEvent:
      result = "ToggleAttackModeEvent";
      break;
    case EnterFocusModeEvent:
      result = "EnterFocusModeEvent";
      break;
    case ExitFocusModeEvent:
      result = "ExitFocusModeEvent";
      break;
    case TalkOrPickEvent:
      result = "TalkOrPickEvent";
      break;
    case LeftShoulderEvent:
      result = "LeftShoulderEvent";
      break;
    case LeftShoulderReleaseEvent:
      result = "LeftShoulderReleaseEvent";
      break;
    case RightShoulderEvent:
      result = "RightShoulderEvent";
      break;
    case RightShoulderReleaseEvent:
      result = "RightShoulderReleaseEvent";
      break;
    case MenuBackEvent:
      result = "MenuBackEvent";
      break;
    case MenuBackingEvent:
      result = "MenuBackingEvent";
      break;
    case MenuBackingCancelEvent:
      result = "MenuBackingCancelEvent";
      break;
    case MenuConfirmEvent:
      result = "MenuConfirmEvent";
      break;
    case MenuConfirmingEvent:
      result = "MenuConfirmingEvent";
      break;
    case MenuConfirmingCancelEvent:
      result = "MenuConfirmingCancelEvent";
      break;
    case MenuLeftEvent:
      result = "MenuLeftEvent";
      break;
    case MenuLeftPressingEvent:
      result = "MenuLeftPressingEvent";
      break;
    case MenuLeftJustReleasedEvent:
      result = "MenuLeftJustReleasedEvent";
      break;
    case MenuUpEvent:
      result = "MenuUpEvent";
      break;
    case MenuRightEvent:
      result = "MenuRightEvent";
      break;
    case MenuDownEvent:
      result = "MenuDownEvent";
      break;
    case LeftStickLeftEvent:
      result = "LeftStickLeftEvent";
      break;
    case LeftStickRightEvent:
      result = "LeftStickRightEvent";
      break;
    case LeftStickUpEvent:
      result = "LeftStickUpEvent";
      break;
    case LeftStickDownEvent:
      result = "LeftStickDownEvent";
      break;
    case LeftStickEvent:
      result = "LeftStickEvent";
      break;
    case RightStickEvent:
      result = "RightStickEvent";
      break;
    case LeftTriggerEvent:
      result = "LeftTriggerEvent";
      break;
    case LeftTriggerReleaseEvent:
      result = "LeftTriggerReleaseEvent";
      break;
    case LeftTriggerAxisEvent:
      result = "LeftTriggerAxisEvent";
      break;
    case RightTriggerEvent:
      result = "RightTriggerEvent";
      break;
    case RightTriggerReleaseEvent:
      result = "RightTriggerReleaseEvent";
      break;
    case RightTriggerAxisEvent:
      result = "RightTriggerAxisEvent";
      break;
    case ZoomCameraEvent:
      result = "ZoomCameraEvent";
      break;
    case ResetCameraEvent:
      result = "ResetCameraEvent";
      break;
    case EnterElementViewEvent:
      result = "EnterElementViewEvent";
      break;
    case ExitElementViewEvent:
      result = "ExitElementViewEvent";
      break;
    case ToggleSlowMoveEvent:
      result = "ToggleSlowMoveEvent";
      break;
    case ToggleSlowMoveTempEvent:
      result = "ToggleSlowMoveTempEvent";
      break;
    case ResetTempSlowMoveEvent:
      result = "ResetTempSlowMoveEvent";
      break;
    case SlipEvent:
      result = "SlipEvent";
      break;
    case DebugMenuEvent:
      result = "DebugMenuEvent";
      break;
    case LeftStickButtonEvent:
      result = "LeftStickButtonEvent";
      break;
    case RightStickButtonEvent:
      result = "RightStickButtonEvent";
      break;
    case QuestTransportEvent:
      result = "QuestTransportEvent";
      break;
    case LeftStickVerticalEvent:
      result = "LeftStickVerticalEvent";
      break;
    case LeftStickHorizontalEvent:
      result = "LeftStickHorizontalEvent";
      break;
    case LeftStickMoveEvent:
      result = "LeftStickMoveEvent";
      break;
    case RightStickVerticalEvent:
      result = "RightStickVerticalEvent";
      break;
    case RightStickHorizontalEvent:
      result = "RightStickHorizontalEvent";
      break;
    case RightStickMoveEvent:
      result = "RightStickMoveEvent";
      break;
    case RightStickLeftEvent:
      result = "RightStickLeftEvent";
      break;
    case RightStickRightEvent:
      result = "RightStickRightEvent";
      break;
    case RightStickUpEvent:
      result = "RightStickUpEvent";
      break;
    case RightStickDownEvent:
      result = "RightStickDownEvent";
      break;
    case DPadUpEvent:
      result = "DPadUpEvent";
      break;
    case DPadRightEvent:
      result = "DPadRightEvent";
      break;
    case DPadDownEvent:
      result = "DPadDownEvent";
      break;
    case DPadLeftEvent:
      result = "DPadLeftEvent";
      break;
    case KeyUpEvent:
      result = "KeyUpEvent";
      break;
    case KeyDownEvent:
      result = "KeyDownEvent";
      break;
    case KeyLeftEvent:
      result = "KeyLeftEvent";
      break;
    case KeyRightEvent:
      result = "KeyRightEvent";
      break;
    case DPadUpPressingEvent:
      result = "DPadUpPressingEvent";
      break;
    case DPadRightPressingEvent:
      result = "DPadRightPressingEvent";
      break;
    case DPadDownPressingEvent:
      result = "DPadDownPressingEvent";
      break;
    case DPadLeftPressingEvent:
      result = "DPadLeftPressingEvent";
      break;
    case DPadUpReleaseEvent:
      result = "DPadUpReleaseEvent";
      break;
    case DPadRightReleaseEvent:
      result = "DPadRightReleaseEvent";
      break;
    case DPadDownReleaseEvent:
      result = "DPadDownReleaseEvent";
      break;
    case DPadLeftReleaseEvent:
      result = "DPadLeftReleaseEvent";
      break;
    case HelpEvent:
      result = "HelpEvent";
      break;
    case MultiplayerEvent:
      result = "MultiplayerEvent";
      break;
    case ToPrevInteeEvent:
      result = "ToPrevInteeEvent";
      break;
    case ToNextInteeEvent:
      result = "ToNextInteeEvent";
      break;
    case JoypadToggleInteeEvent:
      result = "JoypadToggleInteeEvent";
      break;
    case OpenNotifyEvent:
      result = "OpenNotifyEvent";
      break;
    case OpenDungeonFactorEvent:
      result = "OpenDungeonFactorEvent";
      break;
    case OpenHandbookEvent:
      result = "OpenHandbookEvent";
      break;
    case TrackQuestEvent:
      result = "TrackQuestEvent";
      break;
    case OpenActivityNormalEvent:
      result = "OpenActivityNormalEvent";
      break;
    case OpenPushTipsEvent:
      result = "OpenPushTipsEvent";
      break;
    case OpenBattlePassEvent:
      result = "OpenBattlePassEvent";
      break;
    case ToAvatar5Event:
      result = "ToAvatar5Event";
      break;
    case OpenChatJoystickEvent:
      result = "OpenChatJoystickEvent";
      break;
    case OpenChatCancelJoystickEvent:
      result = "OpenChatCancelJoystickEvent";
      break;
    case ChallengeInterruptEvent:
      result = "ChallengeInterruptEvent";
      break;
    case ChallengeInterruptJoystickEvent:
      result = "ChallengeInterruptJoystickEvent";
      break;
    case HomeworldCreateCustomSuiteJoystickEvent:
      result = "HomeworldCreateCustomSuiteJoystickEvent";
      break;
    case HomeworldFurnitureSearchJoystickEvent:
      result = "HomeworldFurnitureSearchJoystickEvent";
      break;
    case HideEvent:
      result = "HideEvent";
      break;
    case TriggerQuickUseEvent:
      result = "TriggerQuickUseEvent";
      break;
    case ReleaseQuickUseEvent:
      result = "ReleaseQuickUseEvent";
      break;
    case TriggerActivitySkillEvent:
      result = "TriggerActivitySkillEvent";
      break;
    case ReleaseActivitySkillEvent:
      result = "ReleaseActivitySkillEvent";
      break;
    case ExteraSelectUpEvent:
      result = "ExteraSelectUpEvent";
      break;
    case ExteraSelectDownEvent:
      result = "ExteraSelectDownEvent";
      break;
    case ExteraSelectLeftEvent:
      result = "ExteraSelectLeftEvent";
      break;
    case ExteraSelectRightEvent:
      result = "ExteraSelectRightEvent";
      break;
    case MusicGameLeftUpEvent:
      result = "MusicGameLeftUpEvent";
      break;
    case MusicGameLeftRightEvent:
      result = "MusicGameLeftRightEvent";
      break;
    case MusicGameLeftDownEvent:
      result = "MusicGameLeftDownEvent";
      break;
    case MusicGameLeftLeftEvent:
      result = "MusicGameLeftLeftEvent";
      break;
    case MusicGameRightUpEvent:
      result = "MusicGameRightUpEvent";
      break;
    case MusicGameRightRightEvent:
      result = "MusicGameRightRightEvent";
      break;
    case MusicGameRightDownEvent:
      result = "MusicGameRightDownEvent";
      break;
    case MusicGameRightLeftEvent:
      result = "MusicGameRightLeftEvent";
      break;
    case MusicGameLeftUpReleasedEvent:
      result = "MusicGameLeftUpReleasedEvent";
      break;
    case MusicGameLeftRightReleasedEvent:
      result = "MusicGameLeftRightReleasedEvent";
      break;
    case MusicGameLeftDownReleasedEvent:
      result = "MusicGameLeftDownReleasedEvent";
      break;
    case MusicGameLeftLeftReleasedEvent:
      result = "MusicGameLeftLeftReleasedEvent";
      break;
    case MusicGameRightUpReleasedEvent:
      result = "MusicGameRightUpReleasedEvent";
      break;
    case MusicGameRightRightReleasedEvent:
      result = "MusicGameRightRightReleasedEvent";
      break;
    case MusicGameRightDownReleasedEvent:
      result = "MusicGameRightDownReleasedEvent";
      break;
    case MusicGameRightLeftReleasedEvent:
      result = "MusicGameRightLeftReleasedEvent";
      break;
    case MusicGameFree1Event:
      result = "MusicGameFree1Event";
      break;
    case MusicGameFree2Event:
      result = "MusicGameFree2Event";
      break;
    case MusicGameFree3Event:
      result = "MusicGameFree3Event";
      break;
    case MusicGameFree4Event:
      result = "MusicGameFree4Event";
      break;
    case MusicGameFree5Event:
      result = "MusicGameFree5Event";
      break;
    case MusicGameFree6Event:
      result = "MusicGameFree6Event";
      break;
    case MusicGameFree7Event:
      result = "MusicGameFree7Event";
      break;
    case MusicGameFree8Event:
      result = "MusicGameFree8Event";
      break;
    case MusicGameFree9Event:
      result = "MusicGameFree9Event";
      break;
    case MusicGameFree10Event:
      result = "MusicGameFree10Event";
      break;
    case MusicGameFree11Event:
      result = "MusicGameFree11Event";
      break;
    case MusicGameFree12Event:
      result = "MusicGameFree12Event";
      break;
    case MusicGameFree13Event:
      result = "MusicGameFree13Event";
      break;
    case MusicGameFree14Event:
      result = "MusicGameFree14Event";
      break;
    case MusicGameFree15Event:
      result = "MusicGameFree15Event";
      break;
    case MusicGameFree16Event:
      result = "MusicGameFree16Event";
      break;
    case MusicGameFree17Event:
      result = "MusicGameFree17Event";
      break;
    case MusicGameFree18Event:
      result = "MusicGameFree18Event";
      break;
    case MusicGameFree19Event:
      result = "MusicGameFree19Event";
      break;
    case MusicGameFree20Event:
      result = "MusicGameFree20Event";
      break;
    case MusicGameFree21Event:
      result = "MusicGameFree21Event";
      break;
    case MenuNextEvent:
      result = "MenuNextEvent";
      break;
    case F1Event:
      result = "F1Event";
      break;
    case F2Event:
      result = "F2Event";
      break;
    case F3Event:
      result = "F3Event";
      break;
    case ReturnEvent:
      result = "ReturnEvent";
      break;
    case OpenHomeworldHandbookEvent:
      result = "OpenHomeworldHandbookEvent";
      break;
    case OpenHomeworldEditorEvent:
      result = "OpenHomeworldEditorEvent";
      break;
    case OpenTeamPageEvent:
      result = "OpenTeamPageEvent";
      break;
    case OpenFriendPageEvent:
      result = "OpenFriendPageEvent";
      break;
    case ObjectTurnUpEvent:
      result = "ObjectTurnUpEvent";
      break;
    case ObjectTurnDownEvent:
      result = "ObjectTurnDownEvent";
      break;
    case ObjectTurnLeftEvent:
      result = "ObjectTurnLeftEvent";
      break;
    case ObjectTurnRightEvent:
      result = "ObjectTurnRightEvent";
      break;
    case CameraMoveUpPressedEvent:
      result = "CameraMoveUpPressedEvent";
      break;
    case CameraMoveUpReleasedEvent:
      result = "CameraMoveUpReleasedEvent";
      break;
    case CameraMoveDownPressedEvent:
      result = "CameraMoveDownPressedEvent";
      break;
    case CameraMoveDownReleasedEvent:
      result = "CameraMoveDownReleasedEvent";
      break;
    case CustomLevelSwitchFloatModeEvent:
      result = "CustomLevelSwitchFloatModeEvent";
      break;
    case CustomLevelDeployConfirmEvent:
      result = "CustomLevelDeployConfirmEvent";
      break;
    case ArrowUpEvent:
      result = "ArrowUpEvent";
      break;
    case ArrowDownEvent:
      result = "ArrowDownEvent";
      break;
    case ArrowLeftEvent:
      result = "ArrowLeftEvent";
      break;
    case ArrowRightEvent:
      result = "ArrowRightEvent";
      break;
    case LeftControlEvent:
      result = "LeftControlEvent";
      break;
    case LeftControlReleasedEvent:
      result = "LeftControlReleasedEvent";
      break;
    case SpaceEvent:
      result = "SpaceEvent";
      break;
    case SpaceReleasedEvent:
      result = "SpaceReleasedEvent";
      break;
    case UndoEvent:
      result = "UndoEvent";
      break;
    case SaveEvent:
      result = "SaveEvent";
      break;
    case ObjectTurnUpReleaseEvent:
      result = "ObjectTurnUpReleaseEvent";
      break;
    case ObjectTurnDownReleaseEvent:
      result = "ObjectTurnDownReleaseEvent";
      break;
    case ObjectTurnLeftReleaseEvent:
      result = "ObjectTurnLeftReleaseEvent";
      break;
    case ObjectTurnRightReleaseEvent:
      result = "ObjectTurnRightReleaseEvent";
      break;
    case ObjectTurnClockwiseEvent:
      result = "ObjectTurnClockwiseEvent";
      break;
    case ObjectTurnAntiClockwiseEvent:
      result = "ObjectTurnAntiClockwiseEvent";
      break;
    case ObjectTurnClockwiseReleaseEvent:
      result = "ObjectTurnClockwiseReleaseEvent";
      break;
    case ObjectTurnAntiClockwiseReleaseEvent:
      result = "ObjectTurnAntiClockwiseReleaseEvent";
      break;
    case OpenMenuEvent:
      result = "OpenMenuEvent";
      break;
    case OpenMenuReleaseEvent:
      result = "OpenMenuReleaseEvent";
      break;
    case MouseLeftButtonEvent:
      result = "MouseLeftButtonEvent";
      break;
    case Count_0:
      result = "Count";
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumValToStr",
        1387);
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

// Line 1393: range 0000000011617316-000000001161F148
bool __cdecl data::enumStrToVal(const std::string *s, data::InputEventType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::InputEventType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::InputEventType> >::pointer v10; // rax
  data::InputEventType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::InputEventType *ea; // [rsp+10h] [rbp-2F60h]
  char v16[12112]; // [rsp+20h] [rbp-2F50h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_8(12064LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "213 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 "
                        "9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unk"
                        "nown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> "
                        "304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 "
                        "9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unk"
                        "nown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> "
                        "560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 <unknown> 640 4 "
                        "9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unknown> 720 4 9 <unk"
                        "nown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 800 4 9 <unknown> "
                        "816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9 <unknown> 896 4 "
                        "9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unknown> 976 4 9 <unk"
                        "nown> 992 4 9 <unknown> 1008 4 9 <unknown> 1024 4 9 <unknown> 1040 4 9 <unknown> 1056 4 9 <unkno"
                        "wn> 1072 4 9 <unknown> 1088 4 9 <unknown> 1104 4 9 <unknown> 1120 4 9 <unknown> 1136 4 9 <unknow"
                        "n> 1152 4 9 <unknown> 1168 4 9 <unknown> 1184 4 9 <unknown> 1200 4 9 <unknown> 1216 4 9 <unknown"
                        "> 1232 4 9 <unknown> 1248 4 9 <unknown> 1264 4 9 <unknown> 1280 4 9 <unknown> 1296 4 9 <unknown>"
                        " 1312 4 9 <unknown> 1328 4 9 <unknown> 1344 4 9 <unknown> 1360 4 9 <unknown> 1376 4 9 <unknown> "
                        "1392 4 9 <unknown> 1408 4 9 <unknown> 1424 4 9 <unknown> 1440 4 9 <unknown> 1456 4 9 <unknown> 1"
                        "472 4 9 <unknown> 1488 4 9 <unknown> 1504 4 9 <unknown> 1520 4 9 <unknown> 1536 4 9 <unknown> 15"
                        "52 4 9 <unknown> 1568 4 9 <unknown> 1584 4 9 <unknown> 1600 4 9 <unknown> 1616 4 9 <unknown> 163"
                        "2 4 9 <unknown> 1648 4 9 <unknown> 1664 4 9 <unknown> 1680 4 9 <unknown> 1696 4 9 <unknown> 1712"
                        " 4 9 <unknown> 1728 4 9 <unknown> 1744 4 9 <unknown> 1760 4 9 <unknown> 1776 4 9 <unknown> 1792 "
                        "4 9 <unknown> 1808 4 9 <unknown> 1824 4 9 <unknown> 1840 4 9 <unknown> 1856 4 9 <unknown> 1872 4"
                        " 9 <unknown> 1888 4 9 <unknown> 1904 4 9 <unknown> 1920 4 9 <unknown> 1936 4 9 <unknown> 1952 4 "
                        "9 <unknown> 1968 4 9 <unknown> 1984 4 9 <unknown> 2000 4 9 <unknown> 2016 4 9 <unknown> 2032 4 9"
                        " <unknown> 2048 4 9 <unknown> 2064 4 9 <unknown> 2080 4 9 <unknown> 2096 4 9 <unknown> 2112 4 9 "
                        "<unknown> 2128 4 9 <unknown> 2144 4 9 <unknown> 2160 4 9 <unknown> 2176 4 9 <unknown> 2192 4 9 <"
                        "unknown> 2208 4 9 <unknown> 2224 4 9 <unknown> 2240 4 9 <unknown> 2256 4 9 <unknown> 2272 4 9 <u"
                        "nknown> 2288 4 9 <unknown> 2304 4 9 <unknown> 2320 4 9 <unknown> 2336 4 9 <unknown> 2352 4 9 <un"
                        "known> 2368 4 9 <unknown> 2384 4 9 <unknown> 2400 4 9 <unknown> 2416 4 9 <unknown> 2432 4 9 <unk"
                        "nown> 2448 4 9 <unknown> 2464 4 9 <unknown> 2480 4 9 <unknown> 2496 4 9 <unknown> 2512 4 9 <unkn"
                        "own> 2528 4 9 <unknown> 2544 4 9 <unknown> 2560 4 9 <unknown> 2576 4 9 <unknown> 2592 4 9 <unkno"
                        "wn> 2608 4 9 <unknown> 2624 4 9 <unknown> 2640 4 9 <unknown> 2656 4 9 <unknown> 2672 4 9 <unknow"
                        "n> 2688 4 9 <unknown> 2704 4 9 <unknown> 2720 4 9 <unknown> 2736 4 9 <unknown> 2752 4 9 <unknown"
                        "> 2768 4 9 <unknown> 2784 4 9 <unknown> 2800 4 9 <unknown> 2816 4 9 <unknown> 2832 4 9 <unknown>"
                        " 2848 4 9 <unknown> 2864 4 9 <unknown> 2880 4 9 <unknown> 2896 4 9 <unknown> 2912 4 9 <unknown> "
                        "2928 4 9 <unknown> 2944 4 9 <unknown> 2960 4 9 <unknown> 2976 4 9 <unknown> 2992 4 9 <unknown> 3"
                        "008 4 9 <unknown> 3024 4 9 <unknown> 3040 4 9 <unknown> 3056 4 9 <unknown> 3072 4 9 <unknown> 30"
                        "88 4 9 <unknown> 3104 4 9 <unknown> 3120 4 9 <unknown> 3136 4 9 <unknown> 3152 4 9 <unknown> 316"
                        "8 4 9 <unknown> 3184 4 9 <unknown> 3200 4 9 <unknown> 3216 4 9 <unknown> 3232 4 9 <unknown> 3248"
                        " 4 9 <unknown> 3264 4 9 <unknown> 3280 4 9 <unknown> 3296 4 9 <unknown> 3312 4 9 <unknown> 3328 "
                        "4 9 <unknown> 3344 4 9 <unknown> 3360 4 9 <unknown> 3376 8 7 it:1608 3408 8 9 <unknown> 3440 32 "
                        "9 <unknown> 3504 32 9 <unknown> 3568 8240 9 <unknown>";
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
  v4[536862825] = 61956;
  v4[536862825] = -234881024;
  v4[536862826] = 62194;
  v4[536862826] = -234881024;
  v4[536862827] = 62194;
  v4[536862828] = -219021312;
  v4[536862829] = 62194;
  v4[536862830] = -219021312;
  v4[536862831] = 62194;
  v4[536863089] = -202116109;
  v4[536863090] = -202116109;
  v4[536863091] = -202116109;
  v4[536863092] = -202116109;
  v4[536863093] = -202116109;
  v4[536863094] = -202116109;
  v4[536863095] = -202116109;
  v4[536863096] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 3440) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3471) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 3471) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3440, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3440),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigUI.cpp",
      "enumStrToVal",
      1396);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 3440),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3440));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::InputEventType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::InputEventType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[8],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3568),
        (const char (*)[8])"Invalid",
        (data::InputEventType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Invalid");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[10],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3608),
        (const char (*)[10])"MoveEvent",
        (data::InputEventType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "MoveEvent");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[16],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3648),
        (const char (*)[16])"ChangeViewEvent",
        (data::InputEventType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "ChangeViewEvent");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[13],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3688),
        (const char (*)[13])"OpenMapEvent",
        (data::InputEventType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "OpenMapEvent");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3728),
        (const char (*)[19])"OpenCharacterEvent",
        (data::InputEventType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "OpenCharacterEvent");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[13],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3768),
        (const char (*)[13])"OpenBagEvent",
        (data::InputEventType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "OpenBagEvent");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3808),
        (const char (*)[15])"OpenGachaEvent",
        (data::InputEventType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "OpenGachaEvent");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[14],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3848),
        (const char (*)[14])"OpenChatEvent",
        (data::InputEventType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "OpenChatEvent");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[16],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3888),
        (const char (*)[16])"OpenPaimonEvent",
        (data::InputEventType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "OpenPaimonEvent");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3928),
        (const char (*)[21])"ToggleQuestBookEvent",
        (data::InputEventType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "ToggleQuestBookEvent");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 3968),
        (const char (*)[15])"ToAvatar1Event",
        (data::InputEventType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "ToAvatar1Event");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4008),
        (const char (*)[15])"ToAvatar2Event",
        (data::InputEventType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "ToAvatar2Event");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4048),
        (const char (*)[15])"ToAvatar3Event",
        (data::InputEventType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "ToAvatar3Event");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4088),
        (const char (*)[15])"ToAvatar4Event",
        (data::InputEventType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "ToAvatar4Event");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[28],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4128),
        (const char (*)[28])"TriggerChangeWithSkillEvent",
        (data::InputEventType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "TriggerChangeWithSkillEvent");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[27],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4168),
        (const char (*)[27])"CancelChangeWithSkillEvent",
        (data::InputEventType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "CancelChangeWithSkillEvent");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4208),
        (const char (*)[22])"TriggerWheelMenuEvent",
        (data::InputEventType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "TriggerWheelMenuEvent");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4248),
        (const char (*)[20])"CloseWheelMenuEvent",
        (data::InputEventType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "CloseWheelMenuEvent");
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4288),
        (const char (*)[19])"TriggerSkill1Event",
        (data::InputEventType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "TriggerSkill1Event");
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4328),
        (const char (*)[19])"TriggerSkill2Event",
        (data::InputEventType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "TriggerSkill2Event");
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4368),
        (const char (*)[19])"TriggerSkill3Event",
        (data::InputEventType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "TriggerSkill3Event");
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4408),
        (const char (*)[19])"TriggerSkill4Event",
        (data::InputEventType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "TriggerSkill4Event");
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4448),
        (const char (*)[19])"TriggerSkill5Event",
        (data::InputEventType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "TriggerSkill5Event");
      *(_DWORD *)(v2 + 448) = 23;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4488),
        (const char (*)[19])"ReleaseSkill1Event",
        (data::InputEventType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "ReleaseSkill1Event");
      *(_DWORD *)(v2 + 464) = 24;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4528),
        (const char (*)[19])"ReleaseSkill2Event",
        (data::InputEventType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "ReleaseSkill2Event");
      *(_DWORD *)(v2 + 480) = 25;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4568),
        (const char (*)[19])"ReleaseSkill3Event",
        (data::InputEventType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "ReleaseSkill3Event");
      *(_DWORD *)(v2 + 496) = 26;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4608),
        (const char (*)[19])"ReleaseSkill4Event",
        (data::InputEventType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "ReleaseSkill4Event");
      *(_DWORD *)(v2 + 512) = 27;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4648),
        (const char (*)[19])"ReleaseSkill5Event",
        (data::InputEventType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "ReleaseSkill5Event");
      *(_DWORD *)(v2 + 528) = 28;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4688),
        (const char (*)[15])"SelectingEvent",
        (data::InputEventType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "SelectingEvent");
      *(_DWORD *)(v2 + 544) = 29;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4728),
        (const char (*)[21])"CancelSelectingEvent",
        (data::InputEventType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "CancelSelectingEvent");
      *(_DWORD *)(v2 + 560) = 30;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4768),
        (const char (*)[22])"ToggleAttackModeEvent",
        (data::InputEventType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "ToggleAttackModeEvent");
      *(_DWORD *)(v2 + 576) = 31;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4808),
        (const char (*)[20])"EnterFocusModeEvent",
        (data::InputEventType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "EnterFocusModeEvent");
      *(_DWORD *)(v2 + 592) = 32;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4848),
        (const char (*)[19])"ExitFocusModeEvent",
        (data::InputEventType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "ExitFocusModeEvent");
      *(_DWORD *)(v2 + 608) = 33;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[16],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4888),
        (const char (*)[16])"TalkOrPickEvent",
        (data::InputEventType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "TalkOrPickEvent");
      *(_DWORD *)(v2 + 624) = 34;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[18],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4928),
        (const char (*)[18])"LeftShoulderEvent",
        (data::InputEventType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "LeftShoulderEvent");
      *(_DWORD *)(v2 + 640) = 35;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[25],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 4968),
        (const char (*)[25])"LeftShoulderReleaseEvent",
        (data::InputEventType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "LeftShoulderReleaseEvent");
      *(_DWORD *)(v2 + 656) = 36;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5008),
        (const char (*)[19])"RightShoulderEvent",
        (data::InputEventType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "RightShoulderEvent");
      *(_DWORD *)(v2 + 672) = 37;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[26],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5048),
        (const char (*)[26])"RightShoulderReleaseEvent",
        (data::InputEventType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "RightShoulderReleaseEvent");
      *(_DWORD *)(v2 + 688) = 38;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[14],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5088),
        (const char (*)[14])"MenuBackEvent",
        (data::InputEventType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "MenuBackEvent");
      *(_DWORD *)(v2 + 704) = 39;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[17],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5128),
        (const char (*)[17])"MenuBackingEvent",
        (data::InputEventType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "MenuBackingEvent");
      *(_DWORD *)(v2 + 720) = 40;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[23],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5168),
        (const char (*)[23])"MenuBackingCancelEvent",
        (data::InputEventType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "MenuBackingCancelEvent");
      *(_DWORD *)(v2 + 736) = 41;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[17],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5208),
        (const char (*)[17])"MenuConfirmEvent",
        (data::InputEventType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "MenuConfirmEvent");
      *(_DWORD *)(v2 + 752) = 42;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5248),
        (const char (*)[20])"MenuConfirmingEvent",
        (data::InputEventType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, "MenuConfirmingEvent");
      *(_DWORD *)(v2 + 768) = 43;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[26],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5288),
        (const char (*)[26])"MenuConfirmingCancelEvent",
        (data::InputEventType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, "MenuConfirmingCancelEvent");
      *(_DWORD *)(v2 + 784) = 44;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[14],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5328),
        (const char (*)[14])"MenuLeftEvent",
        (data::InputEventType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, "MenuLeftEvent");
      *(_DWORD *)(v2 + 800) = 45;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5368),
        (const char (*)[22])"MenuLeftPressingEvent",
        (data::InputEventType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, "MenuLeftPressingEvent");
      *(_DWORD *)(v2 + 816) = 46;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[26],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5408),
        (const char (*)[26])"MenuLeftJustReleasedEvent",
        (data::InputEventType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, "MenuLeftJustReleasedEvent");
      *(_DWORD *)(v2 + 832) = 47;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[12],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5448),
        (const char (*)[12])"MenuUpEvent",
        (data::InputEventType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, "MenuUpEvent");
      *(_DWORD *)(v2 + 848) = 48;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5488),
        (const char (*)[15])"MenuRightEvent",
        (data::InputEventType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, "MenuRightEvent");
      *(_DWORD *)(v2 + 864) = 49;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[14],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5528),
        (const char (*)[14])"MenuDownEvent",
        (data::InputEventType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, "MenuDownEvent");
      *(_DWORD *)(v2 + 880) = 50;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5568),
        (const char (*)[19])"LeftStickLeftEvent",
        (data::InputEventType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, "LeftStickLeftEvent");
      *(_DWORD *)(v2 + 896) = 51;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5608),
        (const char (*)[20])"LeftStickRightEvent",
        (data::InputEventType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, "LeftStickRightEvent");
      *(_DWORD *)(v2 + 912) = 52;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[17],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5648),
        (const char (*)[17])"LeftStickUpEvent",
        (data::InputEventType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, "LeftStickUpEvent");
      *(_DWORD *)(v2 + 928) = 53;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5688),
        (const char (*)[19])"LeftStickDownEvent",
        (data::InputEventType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, "LeftStickDownEvent");
      *(_DWORD *)(v2 + 944) = 54;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5728),
        (const char (*)[15])"LeftStickEvent",
        (data::InputEventType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, "LeftStickEvent");
      *(_DWORD *)(v2 + 960) = 55;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[16],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5768),
        (const char (*)[16])"RightStickEvent",
        (data::InputEventType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, "RightStickEvent");
      *(_DWORD *)(v2 + 976) = 56;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[17],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5808),
        (const char (*)[17])"LeftTriggerEvent",
        (data::InputEventType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, "LeftTriggerEvent");
      *(_DWORD *)(v2 + 992) = 57;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[24],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5848),
        (const char (*)[24])"LeftTriggerReleaseEvent",
        (data::InputEventType *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, "LeftTriggerReleaseEvent");
      *(_DWORD *)(v2 + 1008) = 58;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5888),
        (const char (*)[21])"LeftTriggerAxisEvent",
        (data::InputEventType *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, "LeftTriggerAxisEvent");
      *(_DWORD *)(v2 + 1024) = 59;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[18],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5928),
        (const char (*)[18])"RightTriggerEvent",
        (data::InputEventType *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, "RightTriggerEvent");
      *(_DWORD *)(v2 + 1040) = 60;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[25],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 5968),
        (const char (*)[25])"RightTriggerReleaseEvent",
        (data::InputEventType *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, "RightTriggerReleaseEvent");
      *(_DWORD *)(v2 + 1056) = 61;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6008),
        (const char (*)[22])"RightTriggerAxisEvent",
        (data::InputEventType *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, "RightTriggerAxisEvent");
      *(_DWORD *)(v2 + 1072) = 62;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[16],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6048),
        (const char (*)[16])"ZoomCameraEvent",
        (data::InputEventType *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, "ZoomCameraEvent");
      *(_DWORD *)(v2 + 1088) = 63;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[17],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6088),
        (const char (*)[17])"ResetCameraEvent",
        (data::InputEventType *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, "ResetCameraEvent");
      *(_DWORD *)(v2 + 1104) = 64;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6128),
        (const char (*)[22])"EnterElementViewEvent",
        (data::InputEventType *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, "EnterElementViewEvent");
      *(_DWORD *)(v2 + 1120) = 65;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6168),
        (const char (*)[21])"ExitElementViewEvent",
        (data::InputEventType *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, "ExitElementViewEvent");
      *(_DWORD *)(v2 + 1136) = 66;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6208),
        (const char (*)[20])"ToggleSlowMoveEvent",
        (data::InputEventType *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, "ToggleSlowMoveEvent");
      *(_DWORD *)(v2 + 1152) = 67;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[24],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6248),
        (const char (*)[24])"ToggleSlowMoveTempEvent",
        (data::InputEventType *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, "ToggleSlowMoveTempEvent");
      *(_DWORD *)(v2 + 1168) = 68;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[23],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6288),
        (const char (*)[23])"ResetTempSlowMoveEvent",
        (data::InputEventType *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, "ResetTempSlowMoveEvent");
      *(_DWORD *)(v2 + 1184) = 69;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[10],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6328),
        (const char (*)[10])"SlipEvent",
        (data::InputEventType *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, "SlipEvent");
      *(_DWORD *)(v2 + 1200) = 70;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6368),
        (const char (*)[15])"DebugMenuEvent",
        (data::InputEventType *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, "DebugMenuEvent");
      *(_DWORD *)(v2 + 1216) = 71;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6408),
        (const char (*)[21])"LeftStickButtonEvent",
        (data::InputEventType *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, "LeftStickButtonEvent");
      *(_DWORD *)(v2 + 1232) = 72;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6448),
        (const char (*)[22])"RightStickButtonEvent",
        (data::InputEventType *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, "RightStickButtonEvent");
      *(_DWORD *)(v2 + 1248) = 73;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6488),
        (const char (*)[20])"QuestTransportEvent",
        (data::InputEventType *)(v2 + 1248));
      if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1264, "QuestTransportEvent");
      *(_DWORD *)(v2 + 1264) = 74;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[23],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6528),
        (const char (*)[23])"LeftStickVerticalEvent",
        (data::InputEventType *)(v2 + 1264));
      if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1280, "LeftStickVerticalEvent");
      *(_DWORD *)(v2 + 1280) = 75;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[25],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6568),
        (const char (*)[25])"LeftStickHorizontalEvent",
        (data::InputEventType *)(v2 + 1280));
      if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1296, "LeftStickHorizontalEvent");
      *(_DWORD *)(v2 + 1296) = 76;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6608),
        (const char (*)[19])"LeftStickMoveEvent",
        (data::InputEventType *)(v2 + 1296));
      if ( *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1312, "LeftStickMoveEvent");
      *(_DWORD *)(v2 + 1312) = 77;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[24],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6648),
        (const char (*)[24])"RightStickVerticalEvent",
        (data::InputEventType *)(v2 + 1312));
      if ( *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1328, "RightStickVerticalEvent");
      *(_DWORD *)(v2 + 1328) = 78;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[26],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6688),
        (const char (*)[26])"RightStickHorizontalEvent",
        (data::InputEventType *)(v2 + 1328));
      if ( *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1344, "RightStickHorizontalEvent");
      *(_DWORD *)(v2 + 1344) = 79;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6728),
        (const char (*)[20])"RightStickMoveEvent",
        (data::InputEventType *)(v2 + 1344));
      if ( *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1360, "RightStickMoveEvent");
      *(_DWORD *)(v2 + 1360) = 80;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6768),
        (const char (*)[20])"RightStickLeftEvent",
        (data::InputEventType *)(v2 + 1360));
      if ( *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1376, "RightStickLeftEvent");
      *(_DWORD *)(v2 + 1376) = 81;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6808),
        (const char (*)[21])"RightStickRightEvent",
        (data::InputEventType *)(v2 + 1376));
      if ( *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1392, "RightStickRightEvent");
      *(_DWORD *)(v2 + 1392) = 82;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[18],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6848),
        (const char (*)[18])"RightStickUpEvent",
        (data::InputEventType *)(v2 + 1392));
      if ( *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1408, "RightStickUpEvent");
      *(_DWORD *)(v2 + 1408) = 83;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6888),
        (const char (*)[20])"RightStickDownEvent",
        (data::InputEventType *)(v2 + 1408));
      if ( *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1424, "RightStickDownEvent");
      *(_DWORD *)(v2 + 1424) = 84;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[12],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6928),
        (const char (*)[12])"DPadUpEvent",
        (data::InputEventType *)(v2 + 1424));
      if ( *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1440, "DPadUpEvent");
      *(_DWORD *)(v2 + 1440) = 85;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 6968),
        (const char (*)[15])"DPadRightEvent",
        (data::InputEventType *)(v2 + 1440));
      if ( *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1456, "DPadRightEvent");
      *(_DWORD *)(v2 + 1456) = 86;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[14],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7008),
        (const char (*)[14])"DPadDownEvent",
        (data::InputEventType *)(v2 + 1456));
      if ( *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1472, "DPadDownEvent");
      *(_DWORD *)(v2 + 1472) = 87;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[14],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7048),
        (const char (*)[14])"DPadLeftEvent",
        (data::InputEventType *)(v2 + 1472));
      if ( *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1488, "DPadLeftEvent");
      *(_DWORD *)(v2 + 1488) = 88;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[11],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7088),
        (const char (*)[11])"KeyUpEvent",
        (data::InputEventType *)(v2 + 1488));
      if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1504, "KeyUpEvent");
      *(_DWORD *)(v2 + 1504) = 89;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[13],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7128),
        (const char (*)[13])"KeyDownEvent",
        (data::InputEventType *)(v2 + 1504));
      if ( *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1520, "KeyDownEvent");
      *(_DWORD *)(v2 + 1520) = 90;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[13],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7168),
        (const char (*)[13])"KeyLeftEvent",
        (data::InputEventType *)(v2 + 1520));
      if ( *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1536, "KeyLeftEvent");
      *(_DWORD *)(v2 + 1536) = 91;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[14],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7208),
        (const char (*)[14])"KeyRightEvent",
        (data::InputEventType *)(v2 + 1536));
      if ( *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1552, "KeyRightEvent");
      *(_DWORD *)(v2 + 1552) = 92;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7248),
        (const char (*)[20])"DPadUpPressingEvent",
        (data::InputEventType *)(v2 + 1552));
      if ( *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1568, "DPadUpPressingEvent");
      *(_DWORD *)(v2 + 1568) = 93;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[23],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7288),
        (const char (*)[23])"DPadRightPressingEvent",
        (data::InputEventType *)(v2 + 1568));
      if ( *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1584, "DPadRightPressingEvent");
      *(_DWORD *)(v2 + 1584) = 94;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7328),
        (const char (*)[22])"DPadDownPressingEvent",
        (data::InputEventType *)(v2 + 1584));
      if ( *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1600, "DPadDownPressingEvent");
      *(_DWORD *)(v2 + 1600) = 95;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7368),
        (const char (*)[22])"DPadLeftPressingEvent",
        (data::InputEventType *)(v2 + 1600));
      if ( *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1616, "DPadLeftPressingEvent");
      *(_DWORD *)(v2 + 1616) = 96;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7408),
        (const char (*)[19])"DPadUpReleaseEvent",
        (data::InputEventType *)(v2 + 1616));
      if ( *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1632, "DPadUpReleaseEvent");
      *(_DWORD *)(v2 + 1632) = 97;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7448),
        (const char (*)[22])"DPadRightReleaseEvent",
        (data::InputEventType *)(v2 + 1632));
      if ( *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1648, "DPadRightReleaseEvent");
      *(_DWORD *)(v2 + 1648) = 98;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7488),
        (const char (*)[21])"DPadDownReleaseEvent",
        (data::InputEventType *)(v2 + 1648));
      if ( *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1664, "DPadDownReleaseEvent");
      *(_DWORD *)(v2 + 1664) = 99;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7528),
        (const char (*)[21])"DPadLeftReleaseEvent",
        (data::InputEventType *)(v2 + 1664));
      if ( *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1680, "DPadLeftReleaseEvent");
      *(_DWORD *)(v2 + 1680) = 100;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[10],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7568),
        (const char (*)[10])"HelpEvent",
        (data::InputEventType *)(v2 + 1680));
      if ( *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1696, "HelpEvent");
      *(_DWORD *)(v2 + 1696) = 101;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[17],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7608),
        (const char (*)[17])"MultiplayerEvent",
        (data::InputEventType *)(v2 + 1696));
      if ( *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1712, "MultiplayerEvent");
      *(_DWORD *)(v2 + 1712) = 102;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[17],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7648),
        (const char (*)[17])"ToPrevInteeEvent",
        (data::InputEventType *)(v2 + 1712));
      if ( *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1728, "ToPrevInteeEvent");
      *(_DWORD *)(v2 + 1728) = 103;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[17],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7688),
        (const char (*)[17])"ToNextInteeEvent",
        (data::InputEventType *)(v2 + 1728));
      if ( *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1744, "ToNextInteeEvent");
      *(_DWORD *)(v2 + 1744) = 104;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[23],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7728),
        (const char (*)[23])"JoypadToggleInteeEvent",
        (data::InputEventType *)(v2 + 1744));
      if ( *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1760, "JoypadToggleInteeEvent");
      *(_DWORD *)(v2 + 1760) = 105;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[16],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7768),
        (const char (*)[16])"OpenNotifyEvent",
        (data::InputEventType *)(v2 + 1760));
      if ( *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1776, "OpenNotifyEvent");
      *(_DWORD *)(v2 + 1776) = 106;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[23],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7808),
        (const char (*)[23])"OpenDungeonFactorEvent",
        (data::InputEventType *)(v2 + 1776));
      if ( *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1792, "OpenDungeonFactorEvent");
      *(_DWORD *)(v2 + 1792) = 107;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[18],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7848),
        (const char (*)[18])"OpenHandbookEvent",
        (data::InputEventType *)(v2 + 1792));
      if ( *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1808, "OpenHandbookEvent");
      *(_DWORD *)(v2 + 1808) = 108;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[16],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7888),
        (const char (*)[16])"TrackQuestEvent",
        (data::InputEventType *)(v2 + 1808));
      if ( *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1824, "TrackQuestEvent");
      *(_DWORD *)(v2 + 1824) = 109;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[24],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7928),
        (const char (*)[24])"OpenActivityNormalEvent",
        (data::InputEventType *)(v2 + 1824));
      if ( *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1840, "OpenActivityNormalEvent");
      *(_DWORD *)(v2 + 1840) = 110;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[18],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 7968),
        (const char (*)[18])"OpenPushTipsEvent",
        (data::InputEventType *)(v2 + 1840));
      if ( *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1856, "OpenPushTipsEvent");
      *(_DWORD *)(v2 + 1856) = 111;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8008),
        (const char (*)[20])"OpenBattlePassEvent",
        (data::InputEventType *)(v2 + 1856));
      if ( *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1872, "OpenBattlePassEvent");
      *(_DWORD *)(v2 + 1872) = 112;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8048),
        (const char (*)[15])"ToAvatar5Event",
        (data::InputEventType *)(v2 + 1872));
      if ( *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1888, "ToAvatar5Event");
      *(_DWORD *)(v2 + 1888) = 113;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8088),
        (const char (*)[22])"OpenChatJoystickEvent",
        (data::InputEventType *)(v2 + 1888));
      if ( *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1904, "OpenChatJoystickEvent");
      *(_DWORD *)(v2 + 1904) = 114;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[28],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8128),
        (const char (*)[28])"OpenChatCancelJoystickEvent",
        (data::InputEventType *)(v2 + 1904));
      if ( *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1920, "OpenChatCancelJoystickEvent");
      *(_DWORD *)(v2 + 1920) = 115;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[24],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8168),
        (const char (*)[24])"ChallengeInterruptEvent",
        (data::InputEventType *)(v2 + 1920));
      if ( *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1936, "ChallengeInterruptEvent");
      *(_DWORD *)(v2 + 1936) = 116;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[32],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8208),
        (const char (*)[32])"ChallengeInterruptJoystickEvent",
        (data::InputEventType *)(v2 + 1936));
      if ( *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1952, "ChallengeInterruptJoystickEvent");
      *(_DWORD *)(v2 + 1952) = 117;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[40],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8248),
        (const char (*)[40])"HomeworldCreateCustomSuiteJoystickEvent",
        (data::InputEventType *)(v2 + 1952));
      if ( *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1968, "HomeworldCreateCustomSuiteJoystickEvent");
      *(_DWORD *)(v2 + 1968) = 118;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[38],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8288),
        (const char (*)[38])"HomeworldFurnitureSearchJoystickEvent",
        (data::InputEventType *)(v2 + 1968));
      if ( *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1984, "HomeworldFurnitureSearchJoystickEvent");
      *(_DWORD *)(v2 + 1984) = 119;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[10],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8328),
        (const char (*)[10])"HideEvent",
        (data::InputEventType *)(v2 + 1984));
      if ( *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2000, "HideEvent");
      *(_DWORD *)(v2 + 2000) = 120;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8368),
        (const char (*)[21])"TriggerQuickUseEvent",
        (data::InputEventType *)(v2 + 2000));
      if ( *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2016, "TriggerQuickUseEvent");
      *(_DWORD *)(v2 + 2016) = 121;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8408),
        (const char (*)[21])"ReleaseQuickUseEvent",
        (data::InputEventType *)(v2 + 2016));
      if ( *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2032, "ReleaseQuickUseEvent");
      *(_DWORD *)(v2 + 2032) = 122;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[26],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8448),
        (const char (*)[26])"TriggerActivitySkillEvent",
        (data::InputEventType *)(v2 + 2032));
      if ( *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2048, "TriggerActivitySkillEvent");
      *(_DWORD *)(v2 + 2048) = 123;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[26],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8488),
        (const char (*)[26])"ReleaseActivitySkillEvent",
        (data::InputEventType *)(v2 + 2048));
      if ( *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2064, "ReleaseActivitySkillEvent");
      *(_DWORD *)(v2 + 2064) = 124;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8528),
        (const char (*)[20])"ExteraSelectUpEvent",
        (data::InputEventType *)(v2 + 2064));
      if ( *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2080, "ExteraSelectUpEvent");
      *(_DWORD *)(v2 + 2080) = 125;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8568),
        (const char (*)[22])"ExteraSelectDownEvent",
        (data::InputEventType *)(v2 + 2080));
      if ( *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2096, "ExteraSelectDownEvent");
      *(_DWORD *)(v2 + 2096) = 126;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8608),
        (const char (*)[22])"ExteraSelectLeftEvent",
        (data::InputEventType *)(v2 + 2096));
      if ( *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2112, "ExteraSelectLeftEvent");
      *(_DWORD *)(v2 + 2112) = 127;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[23],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8648),
        (const char (*)[23])"ExteraSelectRightEvent",
        (data::InputEventType *)(v2 + 2112));
      if ( *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2128, "ExteraSelectRightEvent");
      *(_DWORD *)(v2 + 2128) = 128;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8688),
        (const char (*)[21])"MusicGameLeftUpEvent",
        (data::InputEventType *)(v2 + 2128));
      if ( *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2144, "MusicGameLeftUpEvent");
      *(_DWORD *)(v2 + 2144) = 129;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[24],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8728),
        (const char (*)[24])"MusicGameLeftRightEvent",
        (data::InputEventType *)(v2 + 2144));
      if ( *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2160, "MusicGameLeftRightEvent");
      *(_DWORD *)(v2 + 2160) = 130;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[23],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8768),
        (const char (*)[23])"MusicGameLeftDownEvent",
        (data::InputEventType *)(v2 + 2160));
      if ( *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2176, "MusicGameLeftDownEvent");
      *(_DWORD *)(v2 + 2176) = 131;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[23],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8808),
        (const char (*)[23])"MusicGameLeftLeftEvent",
        (data::InputEventType *)(v2 + 2176));
      if ( *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2192, "MusicGameLeftLeftEvent");
      *(_DWORD *)(v2 + 2192) = 132;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[22],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8848),
        (const char (*)[22])"MusicGameRightUpEvent",
        (data::InputEventType *)(v2 + 2192));
      if ( *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2208, "MusicGameRightUpEvent");
      *(_DWORD *)(v2 + 2208) = 133;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[25],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8888),
        (const char (*)[25])"MusicGameRightRightEvent",
        (data::InputEventType *)(v2 + 2208));
      if ( *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2224, "MusicGameRightRightEvent");
      *(_DWORD *)(v2 + 2224) = 134;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[24],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8928),
        (const char (*)[24])"MusicGameRightDownEvent",
        (data::InputEventType *)(v2 + 2224));
      if ( *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2240, "MusicGameRightDownEvent");
      *(_DWORD *)(v2 + 2240) = 135;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[24],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 8968),
        (const char (*)[24])"MusicGameRightLeftEvent",
        (data::InputEventType *)(v2 + 2240));
      if ( *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2256, "MusicGameRightLeftEvent");
      *(_DWORD *)(v2 + 2256) = 136;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[29],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9008),
        (const char (*)[29])"MusicGameLeftUpReleasedEvent",
        (data::InputEventType *)(v2 + 2256));
      if ( *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2272, "MusicGameLeftUpReleasedEvent");
      *(_DWORD *)(v2 + 2272) = 137;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[32],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9048),
        (const char (*)[32])"MusicGameLeftRightReleasedEvent",
        (data::InputEventType *)(v2 + 2272));
      if ( *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2288, "MusicGameLeftRightReleasedEvent");
      *(_DWORD *)(v2 + 2288) = 138;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[31],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9088),
        (const char (*)[31])"MusicGameLeftDownReleasedEvent",
        (data::InputEventType *)(v2 + 2288));
      if ( *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2304, "MusicGameLeftDownReleasedEvent");
      *(_DWORD *)(v2 + 2304) = 139;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[31],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9128),
        (const char (*)[31])"MusicGameLeftLeftReleasedEvent",
        (data::InputEventType *)(v2 + 2304));
      if ( *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2320, "MusicGameLeftLeftReleasedEvent");
      *(_DWORD *)(v2 + 2320) = 140;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[30],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9168),
        (const char (*)[30])"MusicGameRightUpReleasedEvent",
        (data::InputEventType *)(v2 + 2320));
      if ( *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2336, "MusicGameRightUpReleasedEvent");
      *(_DWORD *)(v2 + 2336) = 141;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[33],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9208),
        (const char (*)[33])"MusicGameRightRightReleasedEvent",
        (data::InputEventType *)(v2 + 2336));
      if ( *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2352, "MusicGameRightRightReleasedEvent");
      *(_DWORD *)(v2 + 2352) = 142;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[32],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9248),
        (const char (*)[32])"MusicGameRightDownReleasedEvent",
        (data::InputEventType *)(v2 + 2352));
      if ( *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2368, "MusicGameRightDownReleasedEvent");
      *(_DWORD *)(v2 + 2368) = 143;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[32],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9288),
        (const char (*)[32])"MusicGameRightLeftReleasedEvent",
        (data::InputEventType *)(v2 + 2368));
      if ( *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2384, "MusicGameRightLeftReleasedEvent");
      *(_DWORD *)(v2 + 2384) = 144;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9328),
        (const char (*)[20])"MusicGameFree1Event",
        (data::InputEventType *)(v2 + 2384));
      if ( *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2400, "MusicGameFree1Event");
      *(_DWORD *)(v2 + 2400) = 145;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9368),
        (const char (*)[20])"MusicGameFree2Event",
        (data::InputEventType *)(v2 + 2400));
      if ( *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2416, "MusicGameFree2Event");
      *(_DWORD *)(v2 + 2416) = 146;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9408),
        (const char (*)[20])"MusicGameFree3Event",
        (data::InputEventType *)(v2 + 2416));
      if ( *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2432, "MusicGameFree3Event");
      *(_DWORD *)(v2 + 2432) = 147;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9448),
        (const char (*)[20])"MusicGameFree4Event",
        (data::InputEventType *)(v2 + 2432));
      if ( *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2448, "MusicGameFree4Event");
      *(_DWORD *)(v2 + 2448) = 148;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9488),
        (const char (*)[20])"MusicGameFree5Event",
        (data::InputEventType *)(v2 + 2448));
      if ( *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2464, "MusicGameFree5Event");
      *(_DWORD *)(v2 + 2464) = 149;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9528),
        (const char (*)[20])"MusicGameFree6Event",
        (data::InputEventType *)(v2 + 2464));
      if ( *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2480, "MusicGameFree6Event");
      *(_DWORD *)(v2 + 2480) = 150;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9568),
        (const char (*)[20])"MusicGameFree7Event",
        (data::InputEventType *)(v2 + 2480));
      if ( *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2496, "MusicGameFree7Event");
      *(_DWORD *)(v2 + 2496) = 151;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9608),
        (const char (*)[20])"MusicGameFree8Event",
        (data::InputEventType *)(v2 + 2496));
      if ( *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2512, "MusicGameFree8Event");
      *(_DWORD *)(v2 + 2512) = 152;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9648),
        (const char (*)[20])"MusicGameFree9Event",
        (data::InputEventType *)(v2 + 2512));
      if ( *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2528, "MusicGameFree9Event");
      *(_DWORD *)(v2 + 2528) = 153;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9688),
        (const char (*)[21])"MusicGameFree10Event",
        (data::InputEventType *)(v2 + 2528));
      if ( *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2544, "MusicGameFree10Event");
      *(_DWORD *)(v2 + 2544) = 154;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9728),
        (const char (*)[21])"MusicGameFree11Event",
        (data::InputEventType *)(v2 + 2544));
      if ( *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2560, "MusicGameFree11Event");
      *(_DWORD *)(v2 + 2560) = 155;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9768),
        (const char (*)[21])"MusicGameFree12Event",
        (data::InputEventType *)(v2 + 2560));
      if ( *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2576, "MusicGameFree12Event");
      *(_DWORD *)(v2 + 2576) = 156;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9808),
        (const char (*)[21])"MusicGameFree13Event",
        (data::InputEventType *)(v2 + 2576));
      if ( *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2592, "MusicGameFree13Event");
      *(_DWORD *)(v2 + 2592) = 157;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9848),
        (const char (*)[21])"MusicGameFree14Event",
        (data::InputEventType *)(v2 + 2592));
      if ( *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2608, "MusicGameFree14Event");
      *(_DWORD *)(v2 + 2608) = 158;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9888),
        (const char (*)[21])"MusicGameFree15Event",
        (data::InputEventType *)(v2 + 2608));
      if ( *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2624, "MusicGameFree15Event");
      *(_DWORD *)(v2 + 2624) = 159;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9928),
        (const char (*)[21])"MusicGameFree16Event",
        (data::InputEventType *)(v2 + 2624));
      if ( *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2640, "MusicGameFree16Event");
      *(_DWORD *)(v2 + 2640) = 160;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 9968),
        (const char (*)[21])"MusicGameFree17Event",
        (data::InputEventType *)(v2 + 2640));
      if ( *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2656, "MusicGameFree17Event");
      *(_DWORD *)(v2 + 2656) = 161;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10008),
        (const char (*)[21])"MusicGameFree18Event",
        (data::InputEventType *)(v2 + 2656));
      if ( *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2672, "MusicGameFree18Event");
      *(_DWORD *)(v2 + 2672) = 162;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10048),
        (const char (*)[21])"MusicGameFree19Event",
        (data::InputEventType *)(v2 + 2672));
      if ( *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2688, "MusicGameFree19Event");
      *(_DWORD *)(v2 + 2688) = 163;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10088),
        (const char (*)[21])"MusicGameFree20Event",
        (data::InputEventType *)(v2 + 2688));
      if ( *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2704, "MusicGameFree20Event");
      *(_DWORD *)(v2 + 2704) = 164;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10128),
        (const char (*)[21])"MusicGameFree21Event",
        (data::InputEventType *)(v2 + 2704));
      if ( *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2720, "MusicGameFree21Event");
      *(_DWORD *)(v2 + 2720) = 165;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[14],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10168),
        (const char (*)[14])"MenuNextEvent",
        (data::InputEventType *)(v2 + 2720));
      if ( *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2736, "MenuNextEvent");
      *(_DWORD *)(v2 + 2736) = 166;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[8],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10208),
        (const char (*)[8])"F1Event",
        (data::InputEventType *)(v2 + 2736));
      if ( *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2752, "F1Event");
      *(_DWORD *)(v2 + 2752) = 167;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[8],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10248),
        (const char (*)[8])"F2Event",
        (data::InputEventType *)(v2 + 2752));
      if ( *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2768, "F2Event");
      *(_DWORD *)(v2 + 2768) = 168;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[8],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10288),
        (const char (*)[8])"F3Event",
        (data::InputEventType *)(v2 + 2768));
      if ( *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2784, "F3Event");
      *(_DWORD *)(v2 + 2784) = 169;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[12],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10328),
        (const char (*)[12])"ReturnEvent",
        (data::InputEventType *)(v2 + 2784));
      if ( *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2800, "ReturnEvent");
      *(_DWORD *)(v2 + 2800) = 170;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[27],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10368),
        (const char (*)[27])"OpenHomeworldHandbookEvent",
        (data::InputEventType *)(v2 + 2800));
      if ( *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2816, "OpenHomeworldHandbookEvent");
      *(_DWORD *)(v2 + 2816) = 171;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[25],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10408),
        (const char (*)[25])"OpenHomeworldEditorEvent",
        (data::InputEventType *)(v2 + 2816));
      if ( *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2832, "OpenHomeworldEditorEvent");
      *(_DWORD *)(v2 + 2832) = 172;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[18],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10448),
        (const char (*)[18])"OpenTeamPageEvent",
        (data::InputEventType *)(v2 + 2832));
      if ( *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2848, "OpenTeamPageEvent");
      *(_DWORD *)(v2 + 2848) = 173;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10488),
        (const char (*)[20])"OpenFriendPageEvent",
        (data::InputEventType *)(v2 + 2848));
      if ( *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2864, "OpenFriendPageEvent");
      *(_DWORD *)(v2 + 2864) = 174;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[18],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10528),
        (const char (*)[18])"ObjectTurnUpEvent",
        (data::InputEventType *)(v2 + 2864));
      if ( *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2880, "ObjectTurnUpEvent");
      *(_DWORD *)(v2 + 2880) = 175;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10568),
        (const char (*)[20])"ObjectTurnDownEvent",
        (data::InputEventType *)(v2 + 2880));
      if ( *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2896, "ObjectTurnDownEvent");
      *(_DWORD *)(v2 + 2896) = 176;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[20],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10608),
        (const char (*)[20])"ObjectTurnLeftEvent",
        (data::InputEventType *)(v2 + 2896));
      if ( *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2912, "ObjectTurnLeftEvent");
      *(_DWORD *)(v2 + 2912) = 177;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10648),
        (const char (*)[21])"ObjectTurnRightEvent",
        (data::InputEventType *)(v2 + 2912));
      if ( *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2928, "ObjectTurnRightEvent");
      *(_DWORD *)(v2 + 2928) = 178;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[25],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10688),
        (const char (*)[25])"CameraMoveUpPressedEvent",
        (data::InputEventType *)(v2 + 2928));
      if ( *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2944, "CameraMoveUpPressedEvent");
      *(_DWORD *)(v2 + 2944) = 179;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[26],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10728),
        (const char (*)[26])"CameraMoveUpReleasedEvent",
        (data::InputEventType *)(v2 + 2944));
      if ( *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2960, "CameraMoveUpReleasedEvent");
      *(_DWORD *)(v2 + 2960) = 180;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[27],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10768),
        (const char (*)[27])"CameraMoveDownPressedEvent",
        (data::InputEventType *)(v2 + 2960));
      if ( *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2976, "CameraMoveDownPressedEvent");
      *(_DWORD *)(v2 + 2976) = 181;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[28],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10808),
        (const char (*)[28])"CameraMoveDownReleasedEvent",
        (data::InputEventType *)(v2 + 2976));
      if ( *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2992, "CameraMoveDownReleasedEvent");
      *(_DWORD *)(v2 + 2992) = 182;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[32],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10848),
        (const char (*)[32])"CustomLevelSwitchFloatModeEvent",
        (data::InputEventType *)(v2 + 2992));
      if ( *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3008, "CustomLevelSwitchFloatModeEvent");
      *(_DWORD *)(v2 + 3008) = 183;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[30],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10888),
        (const char (*)[30])"CustomLevelDeployConfirmEvent",
        (data::InputEventType *)(v2 + 3008));
      if ( *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3024, "CustomLevelDeployConfirmEvent");
      *(_DWORD *)(v2 + 3024) = 184;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[13],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10928),
        (const char (*)[13])"ArrowUpEvent",
        (data::InputEventType *)(v2 + 3024));
      if ( *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3040, "ArrowUpEvent");
      *(_DWORD *)(v2 + 3040) = 185;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 10968),
        (const char (*)[15])"ArrowDownEvent",
        (data::InputEventType *)(v2 + 3040));
      if ( *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3056, "ArrowDownEvent");
      *(_DWORD *)(v2 + 3056) = 186;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[15],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11008),
        (const char (*)[15])"ArrowLeftEvent",
        (data::InputEventType *)(v2 + 3056));
      if ( *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3072, "ArrowLeftEvent");
      *(_DWORD *)(v2 + 3072) = 187;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[16],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11048),
        (const char (*)[16])"ArrowRightEvent",
        (data::InputEventType *)(v2 + 3072));
      if ( *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3088, "ArrowRightEvent");
      *(_DWORD *)(v2 + 3088) = 188;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[17],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11088),
        (const char (*)[17])"LeftControlEvent",
        (data::InputEventType *)(v2 + 3088));
      if ( *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3104, "LeftControlEvent");
      *(_DWORD *)(v2 + 3104) = 189;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[25],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11128),
        (const char (*)[25])"LeftControlReleasedEvent",
        (data::InputEventType *)(v2 + 3104));
      if ( *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3120, "LeftControlReleasedEvent");
      *(_DWORD *)(v2 + 3120) = 190;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[11],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11168),
        (const char (*)[11])"SpaceEvent",
        (data::InputEventType *)(v2 + 3120));
      if ( *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3136, "SpaceEvent");
      *(_DWORD *)(v2 + 3136) = 191;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[19],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11208),
        (const char (*)[19])"SpaceReleasedEvent",
        (data::InputEventType *)(v2 + 3136));
      if ( *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3152, "SpaceReleasedEvent");
      *(_DWORD *)(v2 + 3152) = 192;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[10],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11248),
        (const char (*)[10])"UndoEvent",
        (data::InputEventType *)(v2 + 3152));
      if ( *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3168, "UndoEvent");
      *(_DWORD *)(v2 + 3168) = 193;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[10],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11288),
        (const char (*)[10])"SaveEvent",
        (data::InputEventType *)(v2 + 3168));
      if ( *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3184, "SaveEvent");
      *(_DWORD *)(v2 + 3184) = 194;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[25],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11328),
        (const char (*)[25])"ObjectTurnUpReleaseEvent",
        (data::InputEventType *)(v2 + 3184));
      if ( *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3200, "ObjectTurnUpReleaseEvent");
      *(_DWORD *)(v2 + 3200) = 195;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[27],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11368),
        (const char (*)[27])"ObjectTurnDownReleaseEvent",
        (data::InputEventType *)(v2 + 3200));
      if ( *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3216, "ObjectTurnDownReleaseEvent");
      *(_DWORD *)(v2 + 3216) = 196;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[27],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11408),
        (const char (*)[27])"ObjectTurnLeftReleaseEvent",
        (data::InputEventType *)(v2 + 3216));
      if ( *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3232, "ObjectTurnLeftReleaseEvent");
      *(_DWORD *)(v2 + 3232) = 197;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[28],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11448),
        (const char (*)[28])"ObjectTurnRightReleaseEvent",
        (data::InputEventType *)(v2 + 3232));
      if ( *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3248, "ObjectTurnRightReleaseEvent");
      *(_DWORD *)(v2 + 3248) = 198;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[25],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11488),
        (const char (*)[25])"ObjectTurnClockwiseEvent",
        (data::InputEventType *)(v2 + 3248));
      if ( *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3264, "ObjectTurnClockwiseEvent");
      *(_DWORD *)(v2 + 3264) = 199;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[29],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11528),
        (const char (*)[29])"ObjectTurnAntiClockwiseEvent",
        (data::InputEventType *)(v2 + 3264));
      if ( *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3280, "ObjectTurnAntiClockwiseEvent");
      *(_DWORD *)(v2 + 3280) = 200;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[32],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11568),
        (const char (*)[32])"ObjectTurnClockwiseReleaseEvent",
        (data::InputEventType *)(v2 + 3280));
      if ( *(_BYTE *)(((v2 + 3296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3296, "ObjectTurnClockwiseReleaseEvent");
      *(_DWORD *)(v2 + 3296) = 201;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[36],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11608),
        (const char (*)[36])"ObjectTurnAntiClockwiseReleaseEvent",
        (data::InputEventType *)(v2 + 3296));
      if ( *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3312, "ObjectTurnAntiClockwiseReleaseEvent");
      *(_DWORD *)(v2 + 3312) = 202;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[14],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11648),
        (const char (*)[14])"OpenMenuEvent",
        (data::InputEventType *)(v2 + 3312));
      if ( *(_BYTE *)(((v2 + 3328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3328, "OpenMenuEvent");
      *(_DWORD *)(v2 + 3328) = 203;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11688),
        (const char (*)[21])"OpenMenuReleaseEvent",
        (data::InputEventType *)(v2 + 3328));
      if ( *(_BYTE *)(((v2 + 3344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3344, "OpenMenuReleaseEvent");
      *(_DWORD *)(v2 + 3344) = 204;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[21],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11728),
        (const char (*)[21])"MouseLeftButtonEvent",
        (data::InputEventType *)(v2 + 3344));
      if ( *(_BYTE *)(((v2 + 3360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3360, "MouseLeftButtonEvent");
      *(_DWORD *)(v2 + 3360) = 205;
      std::pair<std::string const,data::InputEventType>::pair<char const(&)[6],data::InputEventType,true>(
        (std::pair<const std::string,data::InputEventType> *const)(v2 + 11768),
        (const char (*)[6])"Count",
        (data::InputEventType *)(v2 + 3360));
      std::allocator<std::pair<std::string const,data::InputEventType>>::allocator((std::allocator<std::pair<const std::string,data::InputEventType> > *const)(v2 + 64));
      std::map<std::string,data::InputEventType>::map(
        &data::enumStrToVal(std::string const&,data::InputEventType &)::m,
        (std::initializer_list<std::pair<const std::string,data::InputEventType> >)__PAIR128__(206LL, v2 + 3568),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::InputEventType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::InputEventType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::InputEventType>::~map,
        &data::enumStrToVal(std::string const&,data::InputEventType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::InputEventType>>::~allocator((std::allocator<std::pair<const std::string,data::InputEventType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::InputEventType> *)(v2 + 11808);
            i != (std::pair<const std::string,data::InputEventType> *)(v2 + 3568);
            std::pair<std::string const,data::InputEventType>::~pair(i) )
      {
        --i;
      }
      e = (data::InputEventType *)8240;
      __asan_poison_stack_memory(v2 + 3568, 8240LL);
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
    *(_BYTE *)(((v2 + 3376) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 3376) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 3376, e);
    *(std::map<std::string,data::InputEventType>::iterator *)(v2 + 3376) = std::map<std::string,data::InputEventType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::InputEventType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 3408) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 3408) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 3408, s);
    *(std::map<std::string,data::InputEventType>::iterator *)(v2 + 3408) = std::map<std::string,data::InputEventType>::end(&data::enumStrToVal(std::string const&,data::InputEventType &)::m);
    v7 = (char *)(v2 + 3408);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InputEventType> >::_Self *)(v2 + 3376),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InputEventType> >::_Self *)(v2 + 3408));
    *(_BYTE *)(((v2 + 3408) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 3504) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 3504) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 3535) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 3535) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 3504, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 3504),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigUI.cpp",
        "enumStrToVal",
        1611);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 3504),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3504));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::InputEventType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::InputEventType> > *const)(v2 + 3376));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF85DC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 1508) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_8(v2, 12064LL, v16);
  }
  return v13;
};

// Line 1619: range 000000001161F149-000000001161FB06
const char *__cdecl data::getDescription(data::InputEventType e)
{
  const char *result; // rax

  switch ( e )
  {
    case Invalid_3:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MoveEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ChangeViewEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenMapEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenCharacterEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenBagEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenGachaEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenChatEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenPaimonEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToggleQuestBookEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar1Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar2Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar3Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar4Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TriggerChangeWithSkillEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CancelChangeWithSkillEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TriggerWheelMenuEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CloseWheelMenuEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TriggerSkill1Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TriggerSkill2Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TriggerSkill3Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TriggerSkill4Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TriggerSkill5Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ReleaseSkill1Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ReleaseSkill2Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ReleaseSkill3Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ReleaseSkill4Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ReleaseSkill5Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SelectingEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CancelSelectingEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToggleAttackModeEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case EnterFocusModeEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ExitFocusModeEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TalkOrPickEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftShoulderEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftShoulderReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightShoulderEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightShoulderReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuBackEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuBackingEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuBackingCancelEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuConfirmEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuConfirmingEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuConfirmingCancelEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuLeftPressingEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuLeftJustReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftTriggerEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftTriggerReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftTriggerAxisEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightTriggerEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightTriggerReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightTriggerAxisEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ZoomCameraEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ResetCameraEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case EnterElementViewEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ExitElementViewEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToggleSlowMoveEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToggleSlowMoveTempEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ResetTempSlowMoveEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SlipEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DebugMenuEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickButtonEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickButtonEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case QuestTransportEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickVerticalEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickHorizontalEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftStickMoveEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickVerticalEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickHorizontalEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickMoveEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RightStickDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case KeyUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case KeyDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case KeyLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case KeyRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadUpPressingEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadRightPressingEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadDownPressingEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadLeftPressingEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadUpReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadRightReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadDownReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case DPadLeftReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case HelpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MultiplayerEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToPrevInteeEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToNextInteeEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case JoypadToggleInteeEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenNotifyEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenDungeonFactorEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenHandbookEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TrackQuestEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenActivityNormalEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenPushTipsEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenBattlePassEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ToAvatar5Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenChatJoystickEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenChatCancelJoystickEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ChallengeInterruptEvent:
      result = (const char *)&unk_1A815C20;
      break;
    case ChallengeInterruptJoystickEvent:
      result = (const char *)&unk_1A815C20;
      break;
    case HomeworldCreateCustomSuiteJoystickEvent:
      result = (const char *)&unk_1A80FAE0;
      break;
    case HomeworldFurnitureSearchJoystickEvent:
      result = (const char *)&unk_1A80FB40;
      break;
    case HideEvent:
      result = (const char *)&unk_1A7E2560;
      break;
    case TriggerQuickUseEvent:
      result = (const char *)&unk_1A815C60;
      break;
    case ReleaseQuickUseEvent:
      result = (const char *)&unk_1A815CA0;
      break;
    case TriggerActivitySkillEvent:
      result = (const char *)&unk_1A815CE0;
      break;
    case ReleaseActivitySkillEvent:
      result = (const char *)&unk_1A815D20;
      break;
    case ExteraSelectUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ExteraSelectDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ExteraSelectLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ExteraSelectRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftUpReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftRightReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftDownReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftLeftReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightUpReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightRightReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightDownReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightLeftReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree1Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree2Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree3Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree4Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree5Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree6Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree7Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree8Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree9Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree10Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree11Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree12Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree13Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree14Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree15Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree16Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree17Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree18Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree19Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree20Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree21Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MenuNextEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case F1Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case F2Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case F3Event:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ReturnEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenHomeworldHandbookEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenHomeworldEditorEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenTeamPageEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenFriendPageEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CameraMoveUpPressedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CameraMoveUpReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CameraMoveDownPressedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CameraMoveDownReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CustomLevelSwitchFloatModeEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CustomLevelDeployConfirmEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowUpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowDownEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowLeftEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowRightEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftControlEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftControlReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SpaceEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SpaceReleasedEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case UndoEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SaveEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnUpReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnDownReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnLeftReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnRightReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnClockwiseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnAntiClockwiseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnClockwiseReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ObjectTurnAntiClockwiseReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenMenuEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenMenuReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MouseLeftButtonEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case Count_0:
      result = (const char *)&unk_1A815D60;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 2040: range 000000001161FB07-000000001161FDA2
const char *__cdecl data::enumValToStr(data::InputDeviceType e)
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
  if ( e == Joypad_0 )
  {
    result = "Joypad";
  }
  else
  {
    if ( e <= Joypad_0 )
    {
      switch ( e )
      {
        case KeyboardWithMouse:
          result = "KeyboardWithMouse";
          goto LABEL_19;
        case TouchScreen:
          result = "TouchScreen";
          goto LABEL_19;
        case KeyboardWithTouchScreen:
          result = "KeyboardWithTouchScreen";
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
      "./src/json_data_auto/ConfigUI.cpp",
      "enumValToStr",
      2052);
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

// Line 2058: range 000000001161FDA3-0000000011620727
bool __cdecl data::enumStrToVal(const std::string *s, data::InputDeviceType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::InputDeviceType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::InputDeviceType> >::pointer v11; // rax
  data::InputDeviceType second; // ecx
  char v13; // dl
  data::InputDeviceType *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 7 it:2071 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ConfigUI.cpp",
      "enumStrToVal",
      2061);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::InputDeviceType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::InputDeviceType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::InputDeviceType>::pair<char const(&)[12],data::InputDeviceType,true>(
        (std::pair<const std::string,data::InputDeviceType> *const)(v2 + 320),
        (const char (*)[12])"TouchScreen",
        (data::InputDeviceType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "TouchScreen");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::InputDeviceType>::pair<char const(&)[24],data::InputDeviceType,true>(
        (std::pair<const std::string,data::InputDeviceType> *const)(v2 + 360),
        (const char (*)[24])"KeyboardWithTouchScreen",
        (data::InputDeviceType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "KeyboardWithTouchScreen");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::InputDeviceType>::pair<char const(&)[18],data::InputDeviceType,true>(
        (std::pair<const std::string,data::InputDeviceType> *const)(v2 + 400),
        (const char (*)[18])"KeyboardWithMouse",
        (data::InputDeviceType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "KeyboardWithMouse");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::InputDeviceType>::pair<char const(&)[7],data::InputDeviceType,true>(
        (std::pair<const std::string,data::InputDeviceType> *const)(v2 + 440),
        (const char (*)[7])"Joypad",
        (data::InputDeviceType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::InputDeviceType>>::allocator((std::allocator<std::pair<const std::string,data::InputDeviceType> > *const)(v2 + 48));
      std::map<std::string,data::InputDeviceType>::map(
        &data::enumStrToVal(std::string const&,data::InputDeviceType &)::m,
        (std::initializer_list<std::pair<const std::string,data::InputDeviceType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::InputDeviceType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::InputDeviceType &)::m);
      e = (data::InputDeviceType *)&data::enumStrToVal(std::string const&,data::InputDeviceType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::InputDeviceType>::~map,
        &data::enumStrToVal(std::string const&,data::InputDeviceType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::InputDeviceType>>::~allocator((std::allocator<std::pair<const std::string,data::InputDeviceType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::InputDeviceType> *)(v2 + 480);
            i != (std::pair<const std::string,data::InputDeviceType> *)(v2 + 320);
            std::pair<std::string const,data::InputDeviceType>::~pair(i) )
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
    *(std::map<std::string,data::InputDeviceType>::iterator *)(v2 + 128) = std::map<std::string,data::InputDeviceType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::InputDeviceType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::InputDeviceType>::iterator *)(v2 + 160) = std::map<std::string,data::InputDeviceType>::end(&data::enumStrToVal(std::string const&,data::InputDeviceType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InputDeviceType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InputDeviceType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumStrToVal",
        2074);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::InputDeviceType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::InputDeviceType> > *const)(v2 + 128));
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

// Line 2082: range 0000000011620728-0000000011620781
const char *__cdecl data::getDescription(data::InputDeviceType e)
{
  if ( e == Joypad_0 )
    return (const char *)&unk_1A7E0BE0;
  if ( e <= Joypad_0 )
  {
    switch ( e )
    {
      case KeyboardWithMouse:
        return (const char *)&unk_1A7E0BE0;
      case TouchScreen:
        return (const char *)&unk_1A7E0BE0;
      case KeyboardWithTouchScreen:
        return (const char *)&unk_1A7E0BE0;
    }
  }
  return "unknown enum value!";
};

// Line 2100: range 0000000011620782-00000000116209B7
data::ConfigBaseInputActionPtr __cdecl data::createConfigBaseInputAction(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigBaseInputAction>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseInputAction> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseInputAction> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigBaseInputActionPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseInputAction> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseInputAction> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseInputAction> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseInputAction> > >::_Base_ptr)"2 32 8 7 it:2101 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseInputAction> > >::_Base_ptr)data::createConfigBaseInputAction;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseInputAction>>::find(
                    &data::g_ConfigBaseInputActionMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseInputAction>>::end(&data::g_ConfigBaseInputActionMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseInputAction>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigBaseInputAction>::shared_ptr(
      (std::shared_ptr<data::ConfigBaseInputAction> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseInputAction> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 2107: range 00000000116209B8-0000000011620B41
void __cdecl data::ConfigBaseInputAction::foreachMember(
        data::ConfigBaseInputAction *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 19 value_type_any:2108 64 16 28 description_text_id_any:2110";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseInputAction::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::any::any<data::InputValueType &,data::InputValueType,std::any::_Manager_internal<data::InputValueType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->value_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 64),
    &this->description_text_id);
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

// Line 2115: range 0000000011620B42-0000000011620B8C
std::shared_ptr<data::ConfigBaseInputAction> __cdecl data::ConfigBaseInputAction::clone(
        data::ConfigBaseInputAction *const this)
{
  data::ConfigBaseInputAction *v1; // rsi
  std::shared_ptr<data::ConfigBaseInputAction> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseInputAction,data::ConfigBaseInputAction&>(
    (common::tools::perf::allocator<data::ConfigBaseInputAction,data::ConfigBaseInputAction> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 2119: range 0000000011620B8E-0000000011621272
bool __cdecl data::ConfigBaseInputAction::fromJson(data::ConfigBaseInputAction *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  std::string *p_description_text_id; // rsi
  Json::Value *value_type_ptr; // [rsp+10h] [rbp-1C0h]
  const Json::Value *description_text_id_ptr; // [rsp+18h] [rbp-1B8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigBaseInputAction::fromJson;
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
    "valueType",
    (const std::allocator<char> *)(v2 + 32));
  value_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !value_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)value_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->value_type);
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      2129);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[31])"fromJson for: valueType fails!");
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
      "descriptionTextID",
      (const std::allocator<char> *)(v2 + 48));
    p_description_text_id = (std::string *)(v2 + 256);
    description_text_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( description_text_id_ptr
      && (p_description_text_id = &this->description_text_id,
          !fromJson<std::string>(description_text_id_ptr, &this->description_text_id)) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        2141);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[39])"fromJson for: descriptionTextID fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_description_text_id, &this->is_json_loaded);
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

// Line 2148: range 0000000011621274-0000000011621BC9
data::ConfigBaseInputActionPtr __cdecl data::ConfigBaseInputAction::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBaseInputActionPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 8 ptr:2161 96 32 9 <unknown> 160 32 9 <unknown> 224 32 14 type_name:215"
                        "5 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseInputAction::parseFromJson;
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
        "./src/json_data_auto/ConfigUI.cpp",
        "parseFromJson",
        2158);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[49])"fromJson for: ConfigBaseInputAction $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBaseInputAction>::shared_ptr(
        (std::shared_ptr<data::ConfigBaseInputAction> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseInputAction((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseInputAction>(
             (const std::shared_ptr<data::ConfigBaseInputAction> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigUI.cpp",
          "parseFromJson",
          2164);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[47])"create ConfigBaseInputAction fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBaseInputAction>::shared_ptr(
          (std::shared_ptr<data::ConfigBaseInputAction> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ConfigUI.cpp",
            "parseFromJson",
            2169);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBaseInputAction>::shared_ptr(
            (std::shared_ptr<data::ConfigBaseInputAction> *const)jval,
            0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 64) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 64, v1, v12);
          *(_BYTE *)(v10 + 64) = 1;
          std::shared_ptr<data::ConfigBaseInputAction>::shared_ptr(
            (std::shared_ptr<data::ConfigBaseInputAction> *const)jval,
            (std::shared_ptr<data::ConfigBaseInputAction> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigBaseInputAction>::~shared_ptr((std::shared_ptr<data::ConfigBaseInputAction> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigUI.cpp",
      "parseFromJson",
      2152);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[54])"jsonValueFind for: ConfigBaseInputAction $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBaseInputAction>::shared_ptr(
      (std::shared_ptr<data::ConfigBaseInputAction> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 2177: range 0000000011621BCA-0000000011621D48
int32_t __cdecl data::ConfigBaseInputAction::getHashValue(const data::ConfigBaseInputAction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2178";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseInputAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->value_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->value_type);
  }
  common::tools::HashUtils::appendHash(this->value_type, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->description_text_id, (int32_t *)(v2 + 32));
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

// Line 2185: range 0000000011621D49-0000000011622C92
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigIputActionMap *m)
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
  std::shared_ptr<data::ConfigBaseInputAction> *v13; // r8
  common::milog::MiLogStream *v14; // r14
  __int64 v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction> >,false,false>,bool> v17; // rax
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
  *(_QWORD *)(v3 + 8) = "15 32 4 8 key:2190 48 8 9 <unknown> 80 8 9 <unknown> 112 16 8 cit:2187 144 16 9 <unknown> 176 16"
                        " 10 value:2203 208 32 12 key_str:2191 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 4"
                        "64 32 9 <unknown> 528 32 9 <unknown> 592 40 13 tmp_jval:2186 672 40 13 key_jval:2189 752 40 15 value_jval:2202";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
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
  if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 592));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 592));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 112),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 144));
    *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
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
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
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
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        2194);
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
    else if ( !data::enumStrToVal((const std::string *)(v3 + 208), (data::InputActionType *)(v3 + 32)) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        2199);
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
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 112));
      Json::Value::Value((Json::Value *)(v3 + 752), v12);
      *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigBaseInputAction::parseFromJson((const Json::Value *)(v3 + 176));
      if ( std::operator==<data::ConfigBaseInputAction>(
             (const std::shared_ptr<data::ConfigBaseInputAction> *)(v3 + 176),
             0LL) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "mapFromJson",
          2206);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        v15 = (__int64)data::enumValToStr((data::InputActionType)*(_DWORD *)(v3 + 32));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
          v15 = __asan_report_store8(v3 + 48, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 48) = v15;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v3 + 48));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction>>::emplace<data::InputActionType&,std::shared_ptr<data::ConfigBaseInputAction>&>(
                m,
                (data::InputActionType *)(v3 + 32),
                (std::shared_ptr<data::ConfigBaseInputAction> *)(v3 + 176),
                (data::InputActionType *)(v3 + 32),
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
            "./src/json_data_auto/ConfigUI.cpp",
            "mapFromJson",
            2211);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 528),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v19 = (__int64)data::enumValToStr((data::InputActionType)*(_DWORD *)(v3 + 32));
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_store8(v3 + 80, "key duplicate: ");
          *(_QWORD *)(v3 + 80) = v19;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)(v3 + 80));
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
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
      std::shared_ptr<data::ConfigBaseInputAction>::~shared_ptr((std::shared_ptr<data::ConfigBaseInputAction> *const)(v3 + 176));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 752));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 208));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 672));
    v20 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
    v21 = ((v3 + 752) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -1800;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_46;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 112));
  }
  v22 = 1;
LABEL_46:
  *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
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

// Line 2220: range 0000000011622C93-0000000011622FCB
int32_t __cdecl data::getMapHashValue(const data::ConfigIputActionMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction> >,false,false>::reference v9; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2221 64 8 16 __for_begin:2222 96 8 14 __for_end:2222";
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
  *(std::unordered_map<data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction>>::const_iterator *)(v2 + 64) = std::unordered_map<data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction>>::const_iterator *)(v2 + 96) = std::unordered_map<data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction>>::end(map);
  while ( std::__detail::operator!=<std::pair<data::InputActionType const,std::shared_ptr<data::ConfigBaseInputAction>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction> >,false> *)(v2 + 96)) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<data::InputActionType const,std::shared_ptr<data::ConfigBaseInputAction>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction> >,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::InputActionType const,std::shared_ptr<data::ConfigBaseInputAction>>(v9);
    val = (std::tuple_element<1,const std::pair<const data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction> > >::type *)std::get<1ul,data::InputActionType const,std::shared_ptr<data::ConfigBaseInputAction>>(v9);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    if ( std::operator!=<data::ConfigBaseInputAction>(0LL, val) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)val);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    std::__detail::_Node_const_iterator<std::pair<data::InputActionType const,std::shared_ptr<data::ConfigBaseInputAction>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::InputActionType,std::shared_ptr<data::ConfigBaseInputAction> >,false,false> *const)(v2 + 64));
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

// Line 2236: range 0000000011622FCC-000000001162322B
const char *__cdecl data::enumValToStr(data::ActionCompoundType e)
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
    if ( e == AllPress )
    {
      result = "AllPress";
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumValToStr",
        2244);
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
    result = "TwoAxis";
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

// Line 2250: range 000000001162322C-0000000011623A63
bool __cdecl data::enumStrToVal(const std::string *s, data::ActionCompoundType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ActionCompoundType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ActionCompoundType> >::pointer v11; // rax
  data::ActionCompoundType second; // ecx
  char v13; // dl
  data::ActionCompoundType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 7 it:2261 144 8 9 <u"
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
      "./src/json_data_auto/ConfigUI.cpp",
      "enumStrToVal",
      2253);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ActionCompoundType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ActionCompoundType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ActionCompoundType>::pair<char const(&)[8],data::ActionCompoundType,true>(
        (std::pair<const std::string,data::ActionCompoundType> *const)(v2 + 304),
        (const char (*)[8])"TwoAxis",
        (data::ActionCompoundType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "TwoAxis");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ActionCompoundType>::pair<char const(&)[9],data::ActionCompoundType,true>(
        (std::pair<const std::string,data::ActionCompoundType> *const)(v2 + 344),
        (const char (*)[9])"AllPress",
        (data::ActionCompoundType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::ActionCompoundType>>::allocator((std::allocator<std::pair<const std::string,data::ActionCompoundType> > *const)(v2 + 64));
      std::map<std::string,data::ActionCompoundType>::map(
        &data::enumStrToVal(std::string const&,data::ActionCompoundType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ActionCompoundType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ActionCompoundType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ActionCompoundType &)::m);
      e = (data::ActionCompoundType *)&data::enumStrToVal(std::string const&,data::ActionCompoundType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ActionCompoundType>::~map,
        &data::enumStrToVal(std::string const&,data::ActionCompoundType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ActionCompoundType>>::~allocator((std::allocator<std::pair<const std::string,data::ActionCompoundType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ActionCompoundType> *)(v2 + 384);
            i != (std::pair<const std::string,data::ActionCompoundType> *)(v2 + 304);
            std::pair<std::string const,data::ActionCompoundType>::~pair(i) )
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
    *(std::map<std::string,data::ActionCompoundType>::iterator *)(v2 + 112) = std::map<std::string,data::ActionCompoundType>::find(
                                                                                &data::enumStrToVal(std::string const&,data::ActionCompoundType &)::m,
                                                                                s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::ActionCompoundType>::iterator *)(v2 + 144) = std::map<std::string,data::ActionCompoundType>::end(&data::enumStrToVal(std::string const&,data::ActionCompoundType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionCompoundType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionCompoundType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumStrToVal",
        2264);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ActionCompoundType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionCompoundType> > *const)(v2 + 112));
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

// Line 2272: range 0000000011623A64-0000000011623A93
const char *__cdecl data::getDescription(data::ActionCompoundType e)
{
  if ( e == TwoAxis )
    return (const char *)&unk_1A816940;
  if ( e == AllPress )
    return (const char *)&unk_1A8169A0;
  return "unknown enum value!";
};

// Line 2288: range 000000001169CFAE-000000001169D1EF
void __cdecl data::ConfigCompoundInputActionRegister::ConfigCompoundInputActionRegister(
        data::ConfigCompoundInputActionRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseInputAction> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigCompoundInputActionRegister::ConfigCompoundInputActionRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCompoundInputAction>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigCompoundInputAction",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseInputAction>>::operator[](
         &data::g_ConfigBaseInputActionMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseInputAction>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseInputAction>::operator=<data::ConfigCompoundInputAction>(
    v4,
    (std::shared_ptr<data::ConfigCompoundInputAction> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigCompoundInputAction>::~shared_ptr((std::shared_ptr<data::ConfigCompoundInputAction> *const)(v1 + 64));
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

// Line 2291: range 0000000011623A94-0000000011623D72
void __cdecl data::ConfigCompoundInputAction::foreachMember(
        data::ConfigCompoundInputAction *const this,
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
  *(_QWORD *)(v2 + 8) = "4 32 16 16 action1_any:2293 64 16 16 action2_any:2295 96 16 22 compound_type_any:2297 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCompoundInputAction::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 128), p_func);
  data::ConfigBaseInputAction::foreachMember(
    (data::ConfigBaseInputAction *const)this,
    (std::function<void(std::any&)> *)(v2 + 128));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::InputActionType &,data::InputActionType,std::any::_Manager_internal<data::InputActionType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->action1);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::InputActionType &,data::InputActionType,std::any::_Manager_internal<data::InputActionType>,true,true>(
    (std::any *const)(v2 + 64),
    &this->action2);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::ActionCompoundType &,data::ActionCompoundType,std::any::_Manager_internal<data::ActionCompoundType>,true,true>(
    (std::any *const)(v2 + 96),
    &this->compound_type);
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

// Line 2302: range 0000000011623D74-0000000011623E84
std::shared_ptr<data::ConfigBaseInputAction> __cdecl data::ConfigCompoundInputAction::clone(
        data::ConfigCompoundInputAction *const this)
{
  data::ConfigCompoundInputAction *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseInputAction> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigCompoundInputAction::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCompoundInputAction,data::ConfigCompoundInputAction&>(
    (common::tools::perf::allocator<data::ConfigCompoundInputAction,data::ConfigCompoundInputAction> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseInputAction>::shared_ptr<data::ConfigCompoundInputAction,void>(
    (std::shared_ptr<data::ConfigBaseInputAction> *const)this,
    (std::shared_ptr<data::ConfigCompoundInputAction> *)(v2 + 32));
  std::shared_ptr<data::ConfigCompoundInputAction>::~shared_ptr((std::shared_ptr<data::ConfigCompoundInputAction> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseInputAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2306: range 0000000011623E86-0000000011623EC9
data::ConfigCompoundInputActionPtr __cdecl data::ConfigCompoundInputActionFactory::create(
        data::ConfigCompoundInputActionFactory *const this)
{
  data::ConfigCompoundInputActionPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigCompoundInputAction>();
  result._M_ptr = (std::__shared_ptr<data::ConfigCompoundInputAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2308: range 0000000011623ECA-0000000011624B97
bool __cdecl data::ConfigCompoundInputAction::fromJson(
        data::ConfigCompoundInputAction *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  bool v7; // r14
  data::ActionCompoundType *p_compound_type; // rsi
  bool v9; // r14
  Json::Value *action1_ptr; // [rsp+18h] [rbp-328h]
  Json::Value *action2_ptr; // [rsp+20h] [rbp-320h]
  Json::Value *compound_type_ptr; // [rsp+28h] [rbp-318h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigCompoundInputAction::fromJson;
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
  if ( !data::ConfigBaseInputAction::fromJson((data::ConfigBaseInputAction *const)this, jval) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      2311);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[43])"fromJson for: ConfigBaseInputAction fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "action1",
      (const std::allocator<char> *)(v2 + 48));
    action1_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !action1_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 224), (Json::Value_0 *)action1_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 224), &this->action1);
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        2323);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[29])"fromJson for: action1 fails!");
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
        "action2",
        (const std::allocator<char> *)(v2 + 64));
      action2_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !action2_ptr )
        goto LABEL_22;
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 416), (Json::Value_0 *)action2_ptr);
      v7 = !data::enumStrToVal((const std::string *)(v2 + 416), &this->action2);
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
          "./src/json_data_auto/ConfigUI.cpp",
          "fromJson",
          2335);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[29])"fromJson for: action2 fails!");
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
          "compoundType",
          (const std::allocator<char> *)(v2 + 80));
        p_compound_type = (data::ActionCompoundType *)(v2 + 544);
        compound_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 544));
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !compound_type_ptr )
          goto LABEL_29;
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 608, 32LL);
        }
        Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 608), (Json::Value_0 *)compound_type_ptr);
        p_compound_type = &this->compound_type;
        v9 = !data::enumStrToVal((const std::string *)(v2 + 608), &this->compound_type);
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
            "./src/json_data_auto/ConfigUI.cpp",
            "fromJson",
            2347);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[34])"fromJson for: compoundType fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          result = 0;
        }
        else
        {
LABEL_29:
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_compound_type, &this->is_json_loaded);
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

// Line 2354: range 0000000011624B98-00000000116256DE
data::ConfigCompoundInputActionPtr __cdecl data::ConfigCompoundInputAction::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigCompoundInputActionPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:2367 96 16 8 ptr:2373 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:2361 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCompoundInputAction::parseFromJson;
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
        "./src/json_data_auto/ConfigUI.cpp",
        "parseFromJson",
        2364);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[53])"fromJson for: ConfigCompoundInputAction $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigCompoundInputAction>::shared_ptr(
        (std::shared_ptr<data::ConfigCompoundInputAction> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseInputAction((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseInputAction>(
             (const std::shared_ptr<data::ConfigBaseInputAction> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigUI.cpp",
          "parseFromJson",
          2370);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[47])"create ConfigBaseInputAction fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigCompoundInputAction>::shared_ptr(
          (std::shared_ptr<data::ConfigCompoundInputAction> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigCompoundInputAction,data::ConfigBaseInputAction>((const std::shared_ptr<data::ConfigBaseInputAction> *)(v2 + 96));
        if ( std::operator==<data::ConfigCompoundInputAction>(
               (const std::shared_ptr<data::ConfigCompoundInputAction> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigUI.cpp",
            "parseFromJson",
            2376);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[44])"cast to ConfigCompoundInputActionPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigCompoundInputAction>::shared_ptr(
            (std::shared_ptr<data::ConfigCompoundInputAction> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigCompoundInputAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCompoundInputAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigUI.cpp",
              "parseFromJson",
              2381);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigCompoundInputAction>::shared_ptr(
              (std::shared_ptr<data::ConfigCompoundInputAction> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigCompoundInputAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCompoundInputAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 64) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 64, v1, v12);
            *(_BYTE *)(v10 + 64) = 1;
            std::shared_ptr<data::ConfigCompoundInputAction>::shared_ptr(
              (std::shared_ptr<data::ConfigCompoundInputAction> *const)jval,
              (std::shared_ptr<data::ConfigCompoundInputAction> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigCompoundInputAction>::~shared_ptr((std::shared_ptr<data::ConfigCompoundInputAction> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseInputAction>::~shared_ptr((std::shared_ptr<data::ConfigBaseInputAction> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigUI.cpp",
      "parseFromJson",
      2358);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[58])"jsonValueFind for: ConfigCompoundInputAction $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigCompoundInputAction>::shared_ptr(
      (std::shared_ptr<data::ConfigCompoundInputAction> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigCompoundInputAction,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 2389: range 00000000116256E0-00000000116258F3
int32_t __cdecl data::ConfigCompoundInputAction::getHashValue(const data::ConfigCompoundInputAction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2390";
  *(_QWORD *)(v2 + 16) = data::ConfigCompoundInputAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseInputAction::getHashValue((const data::ConfigBaseInputAction *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->action1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->action1);
  }
  common::tools::HashUtils::appendHash(this->action1, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->action2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action2);
  }
  common::tools::HashUtils::appendHash(this->action2, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->compound_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compound_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->compound_type);
  }
  common::tools::HashUtils::appendHash(this->compound_type, (int32_t *)(v2 + 32));
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

// Line 2399: range 00000000116258F4-00000000116260E6
bool __cdecl data::ConfigBaseInputEvent::fromJson(data::ConfigBaseInputEvent *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  bool v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  Json::Value *action_type_ptr; // [rsp+10h] [rbp-200h]
  Json::Value *action_event_ptr; // [rsp+18h] [rbp-1F8h]
  char v12[496]; // [rsp+20h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseInputEvent::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "actionType",
    (const std::allocator<char> *)(v2 + 32));
  action_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !action_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)action_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->action_type);
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      2409);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[32])"fromJson for: actionType fails!");
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
      "actionEvent",
      (const std::allocator<char> *)(v2 + 48));
    action_event_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !action_event_ptr )
      goto LABEL_18;
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 320), (Json::Value_0 *)action_event_ptr);
    v7 = !data::enumStrToVal((const std::string *)(v2 + 320), &this->action_event);
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    if ( v7 )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        2421);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 384),
        (const char (*)[33])"fromJson for: actionEvent fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
LABEL_18:
      v8 = ((_BYTE)this + 8) & 7;
      v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store1(&this->is_json_loaded, v8, v9);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  return result;
};

// Line 2429: range 00000000116260E8-00000000116262A2
int32_t __cdecl data::ConfigBaseInputEvent::getHashValue(const data::ConfigBaseInputEvent *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2430";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseInputEvent::getHashValue;
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
  common::tools::HashUtils::appendHash(this->action_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->action_event >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_event >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->action_event);
  }
  common::tools::HashUtils::appendHash(this->action_event, (int32_t *)(v2 + 32));
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

// Line 2437: range 00000000116262A3-000000001162724C
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigInputEventMap *m)
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
  const Json::Value *v12; // rsi
  __int64 v13; // rsi
  data::ConfigBaseInputEvent *v14; // r8
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::InputEventType,data::ConfigBaseInputEvent>,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // edx
  char v26[880]; // [rsp+20h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 8 key:2442 48 8 9 <unknown> 80 8 9 <unknown> 112 12 10 value:2455 144 16 8 cit:2439 176 "
                        "16 9 <unknown> 208 32 12 key_str:2443 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 4"
                        "64 32 9 <unknown> 528 32 9 <unknown> 592 40 13 tmp_jval:2438 672 40 13 key_jval:2441 752 40 15 value_jval:2454";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = 0x4000000;
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
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
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
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        2446);
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
    else if ( !data::enumStrToVal((const std::string *)(v3 + 208), (data::InputEventType *)(v3 + 32)) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        2451);
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
      *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 1024;
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 112, v12);
      *(_DWORD *)(v3 + 112) = 0;
      v13 = (((_BYTE)v3 + 116) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 116) & 7) + 3) >= *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 116, v13);
      }
      *(_DWORD *)(v3 + 116) = 0;
      if ( *(char *)(((v3 + 120) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 120, v13, v3 + 120);
      *(_BYTE *)(v3 + 120) = 0;
      if ( !data::ConfigBaseInputEvent::fromJson(
              (data::ConfigBaseInputEvent *const)(v3 + 112),
              (const Json::Value *)(v3 + 752)) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "mapFromJson",
          2458);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        v16 = (__int64)data::enumValToStr((data::InputEventType)*(_DWORD *)(v3 + 32));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8(v3 + 48, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 48) = v16;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)(v3 + 48));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v17 = 0;
      }
      else
      {
        v18 = std::unordered_map<data::InputEventType,data::ConfigBaseInputEvent>::emplace<data::InputEventType&,data::ConfigBaseInputEvent&>(
                m,
                (data::InputEventType *)(v3 + 32),
                (data::ConfigBaseInputEvent *)(v3 + 112),
                (data::InputEventType *)(v3 + 32),
                v14);
        if ( !v18.second )
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
            "./src/json_data_auto/ConfigUI.cpp",
            "mapFromJson",
            2463);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 528),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v20 = (__int64)data::enumValToStr((data::InputEventType)*(_DWORD *)(v3 + 32));
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
            v20 = __asan_report_store8(v3 + 80, "key duplicate: ");
          *(_QWORD *)(v3 + 80) = v20;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v3 + 80));
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
          *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 752));
      v9 = v17 == 1;
    }
    std::string::~string((void *)(v3 + 208));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 672));
    v21 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
    v22 = ((v3 + 752) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_BYTE *)(v22 + 4) = -8;
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !v9 )
    {
      v23 = 0;
      goto LABEL_50;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 144));
  }
  v23 = 1;
LABEL_50:
  *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
  if ( v23 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 592));
  if ( v26 == (char *)v3 )
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

// Line 2472: range 000000001162724D-000000001162751D
int32_t __cdecl data::getMapHashValue(const data::ConfigInputEventMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::InputEventType,data::ConfigBaseInputEvent>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::InputEventType,data::ConfigBaseInputEvent> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::InputEventType,data::ConfigBaseInputEvent> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2473 64 8 16 __for_begin:2474 96 8 14 __for_end:2474";
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
  *(std::unordered_map<data::InputEventType,data::ConfigBaseInputEvent>::const_iterator *)(v2 + 64) = std::unordered_map<data::InputEventType,data::ConfigBaseInputEvent>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::InputEventType,data::ConfigBaseInputEvent>::const_iterator *)(v2 + 96) = std::unordered_map<data::InputEventType,data::ConfigBaseInputEvent>::end(map);
  while ( std::__detail::operator!=<std::pair<data::InputEventType const,data::ConfigBaseInputEvent>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::InputEventType,data::ConfigBaseInputEvent>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::InputEventType,data::ConfigBaseInputEvent>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::InputEventType const,data::ConfigBaseInputEvent>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::InputEventType,data::ConfigBaseInputEvent>,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::InputEventType const,data::ConfigBaseInputEvent>(v7);
    val = (std::tuple_element<1,const std::pair<const data::InputEventType,data::ConfigBaseInputEvent> >::type *)std::get<1ul,data::InputEventType const,data::ConfigBaseInputEvent>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigBaseInputEvent::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::InputEventType const,data::ConfigBaseInputEvent>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::InputEventType,data::ConfigBaseInputEvent>,false,false> *const)(v2 + 64));
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

// Line 2485: range 000000001162751E-00000000116280F3
const char *__cdecl data::enumValToStr(data::ContextEventType e)
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
    case Invalid_5:
      result = "Invalid";
      break;
    case ContextEnd:
      result = "ContextEnd";
      break;
    case FrameEnd:
      result = "FrameEnd";
      break;
    case CloseEvent:
      result = "CloseEvent";
      break;
    case BackEvent:
      result = "BackEvent";
      break;
    case ConfirmEvent:
      result = "ConfirmEvent";
      break;
    case ConfirmingEvent:
      result = "ConfirmingEvent";
      break;
    case ConfirmingCancelEvent:
      result = "ConfirmingCancelEvent";
      break;
    case ToPrevPrimaryTabEvent:
      result = "ToPrevPrimaryTabEvent";
      break;
    case ToNextPrimaryTabEvent:
      result = "ToNextPrimaryTabEvent";
      break;
    case ToPrevSecondaryTabEvent:
      result = "ToPrevSecondaryTabEvent";
      break;
    case ToNextSecondaryTabEvent:
      result = "ToNextSecondaryTabEvent";
      break;
    case MenuNavigationUp:
      result = "MenuNavigationUp";
      break;
    case MenuNavigationDown:
      result = "MenuNavigationDown";
      break;
    case MenuNavigationLeft:
      result = "MenuNavigationLeft";
      break;
    case MenuNavigationRight:
      result = "MenuNavigationRight";
      break;
    case IncreaseCountEvent:
      result = "IncreaseCountEvent";
      break;
    case DecreaseCountEvent:
      result = "DecreaseCountEvent";
      break;
    case TriggerInputEvent:
      result = "TriggerInputEvent";
      break;
    case LogoutConfirmingEvent:
      result = "LogoutConfirmingEvent";
      break;
    case LogoutConfirmEndEvent:
      result = "LogoutConfirmEndEvent";
      break;
    case BackingEvent:
      result = "BackingEvent";
      break;
    case BackingCancelEvent:
      result = "BackingCancelEvent";
      break;
    case OpenSortingDropdownEvent:
      result = "OpenSortingDropdownEvent";
      break;
    case OpenScreenDropdownEvent:
      result = "OpenScreenDropdownEvent";
      break;
    case RevertSortingOrderEvent:
      result = "RevertSortingOrderEvent";
      break;
    case OpenDropdownEvent:
      result = "OpenDropdownEvent";
      break;
    case ToNextDropdownOptionEvent:
      result = "ToNextDropdownOptionEvent";
      break;
    case ToPrevDropdownOptionEvent:
      result = "ToPrevDropdownOptionEvent";
      break;
    case ConfirmDropdownSelectEvent:
      result = "ConfirmDropdownSelectEvent";
      break;
    case CancelDropdownSelectEvent:
      result = "CancelDropdownSelectEvent";
      break;
    case ScrollPrimaryScrollerEvent:
      result = "ScrollPrimaryScrollerEvent";
      break;
    case ReturnToQuestEvent:
      result = "ReturnToQuestEvent";
      break;
    case ToAvatar1Event_0:
      result = "ToAvatar1Event";
      break;
    case ToAvatar2Event_0:
      result = "ToAvatar2Event";
      break;
    case ToAvatar3Event_0:
      result = "ToAvatar3Event";
      break;
    case ToAvatar4Event_0:
      result = "ToAvatar4Event";
      break;
    case OpenChatEvent_0:
      result = "OpenChatEvent";
      break;
    case ToAvatar5Event_0:
      result = "ToAvatar5Event";
      break;
    case ActionNorthEvent:
      result = "ActionNorthEvent";
      break;
    case ActionEastEvent:
      result = "ActionEastEvent";
      break;
    case ActionSouthEvent:
      result = "ActionSouthEvent";
      break;
    case ActionWestEvent:
      result = "ActionWestEvent";
      break;
    case ShowItemDetailEvent:
      result = "ShowItemDetailEvent";
      break;
    case ShowPlayerLevelRewardEvent:
      result = "ShowPlayerLevelRewardEvent";
      break;
    case ChangeTeamEvent:
      result = "ChangeTeamEvent";
      break;
    case ChangeTeamNameEvent:
      result = "ChangeTeamNameEvent";
      break;
    case FastTeamSelectEvent:
      result = "FastTeamSelectEvent";
      break;
    case SubmitFastTeamSelect:
      result = "SubmitFastTeamSelect";
      break;
    case ShowHelpTips:
      result = "ShowHelpTips";
      break;
    case BuyResin:
      result = "BuyResin";
      break;
    case ChangeFocusZone:
      result = "ChangeFocusZone";
      break;
    case ShowCycleDungeonOnly:
      result = "ShowCycleDungeonOnly";
      break;
    case ChangeCustomMarkName:
      result = "ChangeCustomMarkName";
      break;
    case RemoveCustomMark:
      result = "RemoveCustomMark";
      break;
    case OpenChatCancelEvent:
      result = "OpenChatCancelEvent";
      break;
    case IncreaseCountReleaseEvent:
      result = "IncreaseCountReleaseEvent";
      break;
    case DecreaseCountReleaseEvent:
      result = "DecreaseCountReleaseEvent";
      break;
    case ItemSourceSelectEvent:
      result = "ItemSourceSelectEvent";
      break;
    case ChallengeInterruptEvent_0:
      result = "ChallengeInterruptEvent";
      break;
    case ToNextScrollerOptionEvent:
      result = "ToNextScrollerOptionEvent";
      break;
    case ToPrevScrollerOptionEvent:
      result = "ToPrevScrollerOptionEvent";
      break;
    case ConfirmScrollerSelectEvent:
      result = "ConfirmScrollerSelectEvent";
      break;
    case CancelScrollerSelectEvent:
      result = "CancelScrollerSelectEvent";
      break;
    case HomeworldCreateCustomSuiteEvent:
      result = "HomeworldCreateCustomSuiteEvent";
      break;
    case HomeworldFurnitureSearchEvent:
      result = "HomeworldFurnitureSearchEvent";
      break;
    case ToRewardDetailEvent:
      result = "ToRewardDetailEvent";
      break;
    case ToPrevRewardEvent:
      result = "ToPrevRewardEvent";
      break;
    case ToNextRewardEvent:
      result = "ToNextRewardEvent";
      break;
    case ToPrevMainQuestEvent:
      result = "ToPrevMainQuestEvent";
      break;
    case ToNextMainQuestEvent:
      result = "ToNextMainQuestEvent";
      break;
    case ToggleChapterFold:
      result = "ToggleChapterFold";
      break;
    case NavigateToQuestEvent:
      result = "NavigateToQuestEvent";
      break;
    case ScrollSubQuestEvent:
      result = "ScrollSubQuestEvent";
      break;
    case ChapterSelectEvent:
      result = "ChapterSelectEvent";
      break;
    case ChoosePrevChapterEvent:
      result = "ChoosePrevChapterEvent";
      break;
    case ChooseNextChapterEvent:
      result = "ChooseNextChapterEvent";
      break;
    case ShowSubQuestDetailEvent:
      result = "ShowSubQuestDetailEvent";
      break;
    case ToRewardPageEvent:
      result = "ToRewardPageEvent";
      break;
    case ToggleQuestTrackingEvent:
      result = "ToggleQuestTrackingEvent";
      break;
    case ToPrevTabEvent:
      result = "ToPrevTabEvent";
      break;
    case ToNextTabEvent:
      result = "ToNextTabEvent";
      break;
    case UseEvent:
      result = "UseEvent";
      break;
    case DropEvent:
      result = "DropEvent";
      break;
    case ToPrevRowEvent:
      result = "ToPrevRowEvent";
      break;
    case ToNextRowEvent:
      result = "ToNextRowEvent";
      break;
    case ToPrevSlotEvent:
      result = "ToPrevSlotEvent";
      break;
    case ToNextSlotEvent:
      result = "ToNextSlotEvent";
      break;
    case ReNameEvent:
      result = "ReNameEvent";
      break;
    case UIZoomCameraEvent:
      result = "UIZoomCameraEvent";
      break;
    case UIDetails:
      result = "UIDetails";
      break;
    case MoveCursorEvent:
      result = "MoveCursorEvent";
      break;
    case ZoomInMapEvent:
      result = "ZoomInMapEvent";
      break;
    case ZoomOutMapEvent:
      result = "ZoomOutMapEvent";
      break;
    case CommonLeftStickUpEvent:
      result = "CommonLeftStickUpEvent";
      break;
    case CommonLeftStickDownEvent:
      result = "CommonLeftStickDownEvent";
      break;
    case CommonLeftStickLeftEvent:
      result = "CommonLeftStickLeftEvent";
      break;
    case CommonLeftStickRightEvent:
      result = "CommonLeftStickRightEvent";
      break;
    case CommonChangeViewEvent:
      result = "CommonChangeViewEvent";
      break;
    case CommonMenuUpEvent:
      result = "CommonMenuUpEvent";
      break;
    case CommonMenuLeftEvent:
      result = "CommonMenuLeftEvent";
      break;
    case CommonRightStickLeftEvent:
      result = "CommonRightStickLeftEvent";
      break;
    case CommonRightStickRightEvent:
      result = "CommonRightStickRightEvent";
      break;
    case CommonLeftStickButtonEvent:
      result = "CommonLeftStickButtonEvent";
      break;
    case CommonRightStickButtonEvent:
      result = "CommonRightStickButtonEvent";
      break;
    case CommonRightTriggerEvent:
      result = "CommonRightTriggerEvent";
      break;
    case CommonLeftTriggerEvent:
      result = "CommonLeftTriggerEvent";
      break;
    case CommonRightShoulderEvent:
      result = "CommonRightShoulderEvent";
      break;
    case CommonLeftShoulderEvent:
      result = "CommonLeftShoulderEvent";
      break;
    case CommonLeftShoulderReleaseEvent:
      result = "CommonLeftShoulderReleaseEvent";
      break;
    case CommonRightShoulderReleaseEvent:
      result = "CommonRightShoulderReleaseEvent";
      break;
    case CommonLeftStickVerticalEvent:
      result = "CommonLeftStickVerticalEvent";
      break;
    case CommonRightStickVerticalEvent:
      result = "CommonRightStickVerticalEvent";
      break;
    case CommonLeftStickHorizontalEvent:
      result = "CommonLeftStickHorizontalEvent";
      break;
    case CommonRightStickHorizontalEvent:
      result = "CommonRightStickHorizontalEvent";
      break;
    case CommonRightStickUpEvent:
      result = "CommonRightStickUpEvent";
      break;
    case CommonRightStickDownEvent:
      result = "CommonRightStickDownEvent";
      break;
    case Revive:
      result = "Revive";
      break;
    case Goddess_ContributeSome:
      result = "Goddess_ContributeSome";
      break;
    case Goddess_ContributeAll:
      result = "Goddess_ContributeAll";
      break;
    case Goddess_ScrollUpgradeReward:
      result = "Goddess_ScrollUpgradeReward";
      break;
    case ToggleSpringAutoUseEvent:
      result = "ToggleSpringAutoUseEvent";
      break;
    case DialogSelectEvent:
      result = "DialogSelectEvent";
      break;
    case ToNextDialogEvent:
      result = "ToNextDialogEvent";
      break;
    case VisitorLoginEvent:
      result = "VisitorLoginEvent";
      break;
    case SwitchServerLoginEvent:
      result = "SwitchServerLoginEvent";
      break;
    case GachaNoticeEvent:
      result = "GachaNoticeEvent";
      break;
    case GachaHistoryEvent:
      result = "GachaHistoryEvent";
      break;
    case GachaOnceEvent:
      result = "GachaOnceEvent";
      break;
    case GachaTenTimesEvent:
      result = "GachaTenTimesEvent";
      break;
    case GachaNextEvent:
      result = "GachaNextEvent";
      break;
    case BuyEvent:
      result = "BuyEvent";
      break;
    case TipsEvent:
      result = "TipsEvent";
      break;
    case BuyInfoEvent:
      result = "BuyInfoEvent";
      break;
    case MallHelpEvent:
      result = "MallHelpEvent";
      break;
    case MaterialAddEvent:
      result = "MaterialAddEvent";
      break;
    case McoinAddEvent:
      result = "McoinAddEvent";
      break;
    case HideEvent_0:
      result = "HideEvent";
      break;
    case PhotographOpenEmotion:
      result = "PhotographOpenEmotion";
      break;
    case QuickUseEvent:
      result = "QuickUseEvent";
      break;
    case ActivitySkillEvent:
      result = "ActivitySkillEvent";
      break;
    case ExteraSelectUpEvent_0:
      result = "ExteraSelectUpEvent";
      break;
    case ExteraSelectDownEvent_0:
      result = "ExteraSelectDownEvent";
      break;
    case ExteraSelectLeftEvent_0:
      result = "ExteraSelectLeftEvent";
      break;
    case ExteraSelectRightEvent_0:
      result = "ExteraSelectRightEvent";
      break;
    case MusicGameLeftUpEvent_0:
      result = "MusicGameLeftUpEvent";
      break;
    case MusicGameLeftRightEvent_0:
      result = "MusicGameLeftRightEvent";
      break;
    case MusicGameLeftDownEvent_0:
      result = "MusicGameLeftDownEvent";
      break;
    case MusicGameLeftLeftEvent_0:
      result = "MusicGameLeftLeftEvent";
      break;
    case MusicGameRightUpEvent_0:
      result = "MusicGameRightUpEvent";
      break;
    case MusicGameRightRightEvent_0:
      result = "MusicGameRightRightEvent";
      break;
    case MusicGameRightDownEvent_0:
      result = "MusicGameRightDownEvent";
      break;
    case MusicGameRightLeftEvent_0:
      result = "MusicGameRightLeftEvent";
      break;
    case MusicGameLeftUpReleasedEvent_0:
      result = "MusicGameLeftUpReleasedEvent";
      break;
    case MusicGameLeftRightReleasedEvent_0:
      result = "MusicGameLeftRightReleasedEvent";
      break;
    case MusicGameLeftDownReleasedEvent_0:
      result = "MusicGameLeftDownReleasedEvent";
      break;
    case MusicGameLeftLeftReleasedEvent_0:
      result = "MusicGameLeftLeftReleasedEvent";
      break;
    case MusicGameRightUpReleasedEvent_0:
      result = "MusicGameRightUpReleasedEvent";
      break;
    case MusicGameRightRightReleasedEvent_0:
      result = "MusicGameRightRightReleasedEvent";
      break;
    case MusicGameRightDownReleasedEvent_0:
      result = "MusicGameRightDownReleasedEvent";
      break;
    case MusicGameRightLeftReleasedEvent_0:
      result = "MusicGameRightLeftReleasedEvent";
      break;
    case MusicGameFree1Event_0:
      result = "MusicGameFree1Event";
      break;
    case MusicGameFree2Event_0:
      result = "MusicGameFree2Event";
      break;
    case MusicGameFree3Event_0:
      result = "MusicGameFree3Event";
      break;
    case MusicGameFree4Event_0:
      result = "MusicGameFree4Event";
      break;
    case MusicGameFree5Event_0:
      result = "MusicGameFree5Event";
      break;
    case MusicGameFree6Event_0:
      result = "MusicGameFree6Event";
      break;
    case MusicGameFree7Event_0:
      result = "MusicGameFree7Event";
      break;
    case MusicGameFree8Event_0:
      result = "MusicGameFree8Event";
      break;
    case MusicGameFree9Event_0:
      result = "MusicGameFree9Event";
      break;
    case MusicGameFree10Event_0:
      result = "MusicGameFree10Event";
      break;
    case MusicGameFree11Event_0:
      result = "MusicGameFree11Event";
      break;
    case MusicGameFree12Event_0:
      result = "MusicGameFree12Event";
      break;
    case MusicGameFree13Event_0:
      result = "MusicGameFree13Event";
      break;
    case MusicGameFree14Event_0:
      result = "MusicGameFree14Event";
      break;
    case MusicGameFree15Event_0:
      result = "MusicGameFree15Event";
      break;
    case MusicGameFree16Event_0:
      result = "MusicGameFree16Event";
      break;
    case MusicGameFree17Event_0:
      result = "MusicGameFree17Event";
      break;
    case MusicGameFree18Event_0:
      result = "MusicGameFree18Event";
      break;
    case MusicGameFree19Event_0:
      result = "MusicGameFree19Event";
      break;
    case MusicGameFree20Event_0:
      result = "MusicGameFree20Event";
      break;
    case MusicGameFree21Event_0:
      result = "MusicGameFree21Event";
      break;
    case MusicGamePauseEvent:
      result = "MusicGamePauseEvent";
      break;
    case OpenTeamPageEvent_0:
      result = "OpenTeamPageEvent";
      break;
    case OpenFriendPageEvent_0:
      result = "OpenFriendPageEvent";
      break;
    case CommonLeftTriggerPressEvent:
      result = "CommonLeftTriggerPressEvent";
      break;
    case CommonLeftTriggerReleaseEvent:
      result = "CommonLeftTriggerReleaseEvent";
      break;
    case CommonRightTriggerPressEvent:
      result = "CommonRightTriggerPressEvent";
      break;
    case CommonRightTriggerReleaseEvent:
      result = "CommonRightTriggerReleaseEvent";
      break;
    case ArrowUpEvent_0:
      result = "ArrowUpEvent";
      break;
    case ArrowDownEvent_0:
      result = "ArrowDownEvent";
      break;
    case ArrowLeftEvent_0:
      result = "ArrowLeftEvent";
      break;
    case ArrowRightEvent_0:
      result = "ArrowRightEvent";
      break;
    case LeftControlEvent_0:
      result = "LeftControlEvent";
      break;
    case LeftControlReleasedEvent_0:
      result = "LeftControlReleasedEvent";
      break;
    case SpaceEvent_0:
      result = "SpaceEvent";
      break;
    case SpaceReleasedEvent_0:
      result = "SpaceReleasedEvent";
      break;
    case UndoEvent_0:
      result = "UndoEvent";
      break;
    case SaveEvent_0:
      result = "SaveEvent";
      break;
    case OpenMenuEvent_0:
      result = "OpenMenuEvent";
      break;
    case OpenMenuReleaseEvent_0:
      result = "OpenMenuReleaseEvent";
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumValToStr",
        2891);
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

// Line 2897: range 00000000116280F4-000000001162FC48
bool __cdecl data::enumStrToVal(const std::string *s, data::ContextEventType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::ContextEventType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ContextEventType> >::pointer v10; // rax
  data::ContextEventType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::ContextEventType *ea; // [rsp+10h] [rbp-2E40h]
  char v16[11824]; // [rsp+20h] [rbp-2E30h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_8(11776LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "208 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9"
                        " <unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkn"
                        "own> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 2"
                        "88 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9"
                        " <unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkn"
                        "own> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 5"
                        "44 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9"
                        " <unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkn"
                        "own> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 8"
                        "00 4 9 <unknown> 816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9"
                        " <unknown> 896 4 9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unkn"
                        "own> 976 4 9 <unknown> 992 4 9 <unknown> 1008 4 9 <unknown> 1024 4 9 <unknown> 1040 4 9 <unknown"
                        "> 1056 4 9 <unknown> 1072 4 9 <unknown> 1088 4 9 <unknown> 1104 4 9 <unknown> 1120 4 9 <unknown>"
                        " 1136 4 9 <unknown> 1152 4 9 <unknown> 1168 4 9 <unknown> 1184 4 9 <unknown> 1200 4 9 <unknown> "
                        "1216 4 9 <unknown> 1232 4 9 <unknown> 1248 4 9 <unknown> 1264 4 9 <unknown> 1280 4 9 <unknown> 1"
                        "296 4 9 <unknown> 1312 4 9 <unknown> 1328 4 9 <unknown> 1344 4 9 <unknown> 1360 4 9 <unknown> 13"
                        "76 4 9 <unknown> 1392 4 9 <unknown> 1408 4 9 <unknown> 1424 4 9 <unknown> 1440 4 9 <unknown> 145"
                        "6 4 9 <unknown> 1472 4 9 <unknown> 1488 4 9 <unknown> 1504 4 9 <unknown> 1520 4 9 <unknown> 1536"
                        " 4 9 <unknown> 1552 4 9 <unknown> 1568 4 9 <unknown> 1584 4 9 <unknown> 1600 4 9 <unknown> 1616 "
                        "4 9 <unknown> 1632 4 9 <unknown> 1648 4 9 <unknown> 1664 4 9 <unknown> 1680 4 9 <unknown> 1696 4"
                        " 9 <unknown> 1712 4 9 <unknown> 1728 4 9 <unknown> 1744 4 9 <unknown> 1760 4 9 <unknown> 1776 4 "
                        "9 <unknown> 1792 4 9 <unknown> 1808 4 9 <unknown> 1824 4 9 <unknown> 1840 4 9 <unknown> 1856 4 9"
                        " <unknown> 1872 4 9 <unknown> 1888 4 9 <unknown> 1904 4 9 <unknown> 1920 4 9 <unknown> 1936 4 9 "
                        "<unknown> 1952 4 9 <unknown> 1968 4 9 <unknown> 1984 4 9 <unknown> 2000 4 9 <unknown> 2016 4 9 <"
                        "unknown> 2032 4 9 <unknown> 2048 4 9 <unknown> 2064 4 9 <unknown> 2080 4 9 <unknown> 2096 4 9 <u"
                        "nknown> 2112 4 9 <unknown> 2128 4 9 <unknown> 2144 4 9 <unknown> 2160 4 9 <unknown> 2176 4 9 <un"
                        "known> 2192 4 9 <unknown> 2208 4 9 <unknown> 2224 4 9 <unknown> 2240 4 9 <unknown> 2256 4 9 <unk"
                        "nown> 2272 4 9 <unknown> 2288 4 9 <unknown> 2304 4 9 <unknown> 2320 4 9 <unknown> 2336 4 9 <unkn"
                        "own> 2352 4 9 <unknown> 2368 4 9 <unknown> 2384 4 9 <unknown> 2400 4 9 <unknown> 2416 4 9 <unkno"
                        "wn> 2432 4 9 <unknown> 2448 4 9 <unknown> 2464 4 9 <unknown> 2480 4 9 <unknown> 2496 4 9 <unknow"
                        "n> 2512 4 9 <unknown> 2528 4 9 <unknown> 2544 4 9 <unknown> 2560 4 9 <unknown> 2576 4 9 <unknown"
                        "> 2592 4 9 <unknown> 2608 4 9 <unknown> 2624 4 9 <unknown> 2640 4 9 <unknown> 2656 4 9 <unknown>"
                        " 2672 4 9 <unknown> 2688 4 9 <unknown> 2704 4 9 <unknown> 2720 4 9 <unknown> 2736 4 9 <unknown> "
                        "2752 4 9 <unknown> 2768 4 9 <unknown> 2784 4 9 <unknown> 2800 4 9 <unknown> 2816 4 9 <unknown> 2"
                        "832 4 9 <unknown> 2848 4 9 <unknown> 2864 4 9 <unknown> 2880 4 9 <unknown> 2896 4 9 <unknown> 29"
                        "12 4 9 <unknown> 2928 4 9 <unknown> 2944 4 9 <unknown> 2960 4 9 <unknown> 2976 4 9 <unknown> 299"
                        "2 4 9 <unknown> 3008 4 9 <unknown> 3024 4 9 <unknown> 3040 4 9 <unknown> 3056 4 9 <unknown> 3072"
                        " 4 9 <unknown> 3088 4 9 <unknown> 3104 4 9 <unknown> 3120 4 9 <unknown> 3136 4 9 <unknown> 3152 "
                        "4 9 <unknown> 3168 4 9 <unknown> 3184 4 9 <unknown> 3200 4 9 <unknown> 3216 4 9 <unknown> 3232 4"
                        " 9 <unknown> 3248 4 9 <unknown> 3264 4 9 <unknown> 3280 8 7 it:3107 3312 8 9 <unknown> 3344 32 9"
                        " <unknown> 3408 32 9 <unknown> 3472 8040 9 <unknown>";
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
  v4[536862822] = 61956;
  v4[536862822] = -234881024;
  v4[536862823] = 62194;
  v4[536862823] = -234881024;
  v4[536862824] = 62194;
  v4[536862825] = -219021312;
  v4[536862826] = 62194;
  v4[536862827] = -219021312;
  v4[536862828] = 62194;
  v4[536863079] = -218103808;
  v4[536863080] = -202116109;
  v4[536863081] = -202116109;
  v4[536863082] = -202116109;
  v4[536863083] = -202116109;
  v4[536863084] = -202116109;
  v4[536863085] = -202116109;
  v4[536863086] = -202116109;
  v4[536863087] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 3344) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3375) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 3375) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3344, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3344),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigUI.cpp",
      "enumStrToVal",
      2900);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 3344),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3344));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ContextEventType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ContextEventType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[8],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3472),
        (const char (*)[8])"Invalid",
        (data::ContextEventType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Invalid");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[11],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3512),
        (const char (*)[11])"ContextEnd",
        (data::ContextEventType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "ContextEnd");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[9],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3552),
        (const char (*)[9])"FrameEnd",
        (data::ContextEventType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "FrameEnd");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[11],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3592),
        (const char (*)[11])"CloseEvent",
        (data::ContextEventType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "CloseEvent");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[10],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3632),
        (const char (*)[10])"BackEvent",
        (data::ContextEventType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "BackEvent");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[13],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3672),
        (const char (*)[13])"ConfirmEvent",
        (data::ContextEventType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "ConfirmEvent");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3712),
        (const char (*)[16])"ConfirmingEvent",
        (data::ContextEventType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "ConfirmingEvent");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3752),
        (const char (*)[22])"ConfirmingCancelEvent",
        (data::ContextEventType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "ConfirmingCancelEvent");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3792),
        (const char (*)[22])"ToPrevPrimaryTabEvent",
        (data::ContextEventType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "ToPrevPrimaryTabEvent");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3832),
        (const char (*)[22])"ToNextPrimaryTabEvent",
        (data::ContextEventType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "ToNextPrimaryTabEvent");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3872),
        (const char (*)[24])"ToPrevSecondaryTabEvent",
        (data::ContextEventType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "ToPrevSecondaryTabEvent");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3912),
        (const char (*)[24])"ToNextSecondaryTabEvent",
        (data::ContextEventType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "ToNextSecondaryTabEvent");
      *(_DWORD *)(v2 + 256) = 12;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[17],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3952),
        (const char (*)[17])"MenuNavigationUp",
        (data::ContextEventType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "MenuNavigationUp");
      *(_DWORD *)(v2 + 272) = 13;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 3992),
        (const char (*)[19])"MenuNavigationDown",
        (data::ContextEventType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "MenuNavigationDown");
      *(_DWORD *)(v2 + 288) = 14;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4032),
        (const char (*)[19])"MenuNavigationLeft",
        (data::ContextEventType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "MenuNavigationLeft");
      *(_DWORD *)(v2 + 304) = 15;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4072),
        (const char (*)[20])"MenuNavigationRight",
        (data::ContextEventType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "MenuNavigationRight");
      *(_DWORD *)(v2 + 320) = 16;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4112),
        (const char (*)[19])"IncreaseCountEvent",
        (data::ContextEventType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "IncreaseCountEvent");
      *(_DWORD *)(v2 + 336) = 17;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4152),
        (const char (*)[19])"DecreaseCountEvent",
        (data::ContextEventType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "DecreaseCountEvent");
      *(_DWORD *)(v2 + 352) = 18;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4192),
        (const char (*)[18])"TriggerInputEvent",
        (data::ContextEventType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "TriggerInputEvent");
      *(_DWORD *)(v2 + 368) = 19;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4232),
        (const char (*)[22])"LogoutConfirmingEvent",
        (data::ContextEventType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "LogoutConfirmingEvent");
      *(_DWORD *)(v2 + 384) = 20;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4272),
        (const char (*)[22])"LogoutConfirmEndEvent",
        (data::ContextEventType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "LogoutConfirmEndEvent");
      *(_DWORD *)(v2 + 400) = 21;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[13],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4312),
        (const char (*)[13])"BackingEvent",
        (data::ContextEventType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "BackingEvent");
      *(_DWORD *)(v2 + 416) = 22;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4352),
        (const char (*)[19])"BackingCancelEvent",
        (data::ContextEventType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "BackingCancelEvent");
      *(_DWORD *)(v2 + 432) = 23;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[25],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4392),
        (const char (*)[25])"OpenSortingDropdownEvent",
        (data::ContextEventType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "OpenSortingDropdownEvent");
      *(_DWORD *)(v2 + 448) = 24;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4432),
        (const char (*)[24])"OpenScreenDropdownEvent",
        (data::ContextEventType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "OpenScreenDropdownEvent");
      *(_DWORD *)(v2 + 464) = 25;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4472),
        (const char (*)[24])"RevertSortingOrderEvent",
        (data::ContextEventType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "RevertSortingOrderEvent");
      *(_DWORD *)(v2 + 480) = 26;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4512),
        (const char (*)[18])"OpenDropdownEvent",
        (data::ContextEventType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "OpenDropdownEvent");
      *(_DWORD *)(v2 + 496) = 27;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4552),
        (const char (*)[26])"ToNextDropdownOptionEvent",
        (data::ContextEventType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "ToNextDropdownOptionEvent");
      *(_DWORD *)(v2 + 512) = 28;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4592),
        (const char (*)[26])"ToPrevDropdownOptionEvent",
        (data::ContextEventType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "ToPrevDropdownOptionEvent");
      *(_DWORD *)(v2 + 528) = 29;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[27],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4632),
        (const char (*)[27])"ConfirmDropdownSelectEvent",
        (data::ContextEventType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "ConfirmDropdownSelectEvent");
      *(_DWORD *)(v2 + 544) = 30;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4672),
        (const char (*)[26])"CancelDropdownSelectEvent",
        (data::ContextEventType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "CancelDropdownSelectEvent");
      *(_DWORD *)(v2 + 560) = 31;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[27],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4712),
        (const char (*)[27])"ScrollPrimaryScrollerEvent",
        (data::ContextEventType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "ScrollPrimaryScrollerEvent");
      *(_DWORD *)(v2 + 576) = 32;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4752),
        (const char (*)[19])"ReturnToQuestEvent",
        (data::ContextEventType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "ReturnToQuestEvent");
      *(_DWORD *)(v2 + 592) = 33;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4792),
        (const char (*)[15])"ToAvatar1Event",
        (data::ContextEventType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "ToAvatar1Event");
      *(_DWORD *)(v2 + 608) = 34;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4832),
        (const char (*)[15])"ToAvatar2Event",
        (data::ContextEventType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "ToAvatar2Event");
      *(_DWORD *)(v2 + 624) = 35;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4872),
        (const char (*)[15])"ToAvatar3Event",
        (data::ContextEventType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "ToAvatar3Event");
      *(_DWORD *)(v2 + 640) = 36;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4912),
        (const char (*)[15])"ToAvatar4Event",
        (data::ContextEventType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "ToAvatar4Event");
      *(_DWORD *)(v2 + 656) = 37;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[14],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4952),
        (const char (*)[14])"OpenChatEvent",
        (data::ContextEventType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "OpenChatEvent");
      *(_DWORD *)(v2 + 672) = 38;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 4992),
        (const char (*)[15])"ToAvatar5Event",
        (data::ContextEventType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "ToAvatar5Event");
      *(_DWORD *)(v2 + 688) = 39;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[17],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5032),
        (const char (*)[17])"ActionNorthEvent",
        (data::ContextEventType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "ActionNorthEvent");
      *(_DWORD *)(v2 + 704) = 40;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5072),
        (const char (*)[16])"ActionEastEvent",
        (data::ContextEventType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "ActionEastEvent");
      *(_DWORD *)(v2 + 720) = 41;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[17],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5112),
        (const char (*)[17])"ActionSouthEvent",
        (data::ContextEventType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "ActionSouthEvent");
      *(_DWORD *)(v2 + 736) = 42;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5152),
        (const char (*)[16])"ActionWestEvent",
        (data::ContextEventType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "ActionWestEvent");
      *(_DWORD *)(v2 + 752) = 43;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5192),
        (const char (*)[20])"ShowItemDetailEvent",
        (data::ContextEventType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, "ShowItemDetailEvent");
      *(_DWORD *)(v2 + 768) = 44;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[27],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5232),
        (const char (*)[27])"ShowPlayerLevelRewardEvent",
        (data::ContextEventType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, "ShowPlayerLevelRewardEvent");
      *(_DWORD *)(v2 + 784) = 45;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5272),
        (const char (*)[16])"ChangeTeamEvent",
        (data::ContextEventType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, "ChangeTeamEvent");
      *(_DWORD *)(v2 + 800) = 46;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5312),
        (const char (*)[20])"ChangeTeamNameEvent",
        (data::ContextEventType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, "ChangeTeamNameEvent");
      *(_DWORD *)(v2 + 816) = 47;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5352),
        (const char (*)[20])"FastTeamSelectEvent",
        (data::ContextEventType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, "FastTeamSelectEvent");
      *(_DWORD *)(v2 + 832) = 48;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5392),
        (const char (*)[21])"SubmitFastTeamSelect",
        (data::ContextEventType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, "SubmitFastTeamSelect");
      *(_DWORD *)(v2 + 848) = 49;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[13],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5432),
        (const char (*)[13])"ShowHelpTips",
        (data::ContextEventType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, "ShowHelpTips");
      *(_DWORD *)(v2 + 864) = 51;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[9],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5472),
        (const char (*)[9])"BuyResin",
        (data::ContextEventType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, "BuyResin");
      *(_DWORD *)(v2 + 880) = 52;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5512),
        (const char (*)[16])"ChangeFocusZone",
        (data::ContextEventType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, "ChangeFocusZone");
      *(_DWORD *)(v2 + 896) = 53;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5552),
        (const char (*)[21])"ShowCycleDungeonOnly",
        (data::ContextEventType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, "ShowCycleDungeonOnly");
      *(_DWORD *)(v2 + 912) = 54;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5592),
        (const char (*)[21])"ChangeCustomMarkName",
        (data::ContextEventType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, "ChangeCustomMarkName");
      *(_DWORD *)(v2 + 928) = 55;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[17],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5632),
        (const char (*)[17])"RemoveCustomMark",
        (data::ContextEventType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, "RemoveCustomMark");
      *(_DWORD *)(v2 + 944) = 56;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5672),
        (const char (*)[20])"OpenChatCancelEvent",
        (data::ContextEventType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, "OpenChatCancelEvent");
      *(_DWORD *)(v2 + 960) = 57;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5712),
        (const char (*)[26])"IncreaseCountReleaseEvent",
        (data::ContextEventType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, "IncreaseCountReleaseEvent");
      *(_DWORD *)(v2 + 976) = 58;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5752),
        (const char (*)[26])"DecreaseCountReleaseEvent",
        (data::ContextEventType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, "DecreaseCountReleaseEvent");
      *(_DWORD *)(v2 + 992) = 59;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5792),
        (const char (*)[22])"ItemSourceSelectEvent",
        (data::ContextEventType *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, "ItemSourceSelectEvent");
      *(_DWORD *)(v2 + 1008) = 60;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5832),
        (const char (*)[24])"ChallengeInterruptEvent",
        (data::ContextEventType *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, "ChallengeInterruptEvent");
      *(_DWORD *)(v2 + 1024) = 61;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5872),
        (const char (*)[26])"ToNextScrollerOptionEvent",
        (data::ContextEventType *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, "ToNextScrollerOptionEvent");
      *(_DWORD *)(v2 + 1040) = 62;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5912),
        (const char (*)[26])"ToPrevScrollerOptionEvent",
        (data::ContextEventType *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, "ToPrevScrollerOptionEvent");
      *(_DWORD *)(v2 + 1056) = 63;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[27],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5952),
        (const char (*)[27])"ConfirmScrollerSelectEvent",
        (data::ContextEventType *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, "ConfirmScrollerSelectEvent");
      *(_DWORD *)(v2 + 1072) = 64;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 5992),
        (const char (*)[26])"CancelScrollerSelectEvent",
        (data::ContextEventType *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, "CancelScrollerSelectEvent");
      *(_DWORD *)(v2 + 1088) = 65;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[32],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6032),
        (const char (*)[32])"HomeworldCreateCustomSuiteEvent",
        (data::ContextEventType *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, "HomeworldCreateCustomSuiteEvent");
      *(_DWORD *)(v2 + 1104) = 66;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[30],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6072),
        (const char (*)[30])"HomeworldFurnitureSearchEvent",
        (data::ContextEventType *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, "HomeworldFurnitureSearchEvent");
      *(_DWORD *)(v2 + 1120) = 100;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6112),
        (const char (*)[20])"ToRewardDetailEvent",
        (data::ContextEventType *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, "ToRewardDetailEvent");
      *(_DWORD *)(v2 + 1136) = 101;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6152),
        (const char (*)[18])"ToPrevRewardEvent",
        (data::ContextEventType *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, "ToPrevRewardEvent");
      *(_DWORD *)(v2 + 1152) = 102;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6192),
        (const char (*)[18])"ToNextRewardEvent",
        (data::ContextEventType *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, "ToNextRewardEvent");
      *(_DWORD *)(v2 + 1168) = 103;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6232),
        (const char (*)[21])"ToPrevMainQuestEvent",
        (data::ContextEventType *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, "ToPrevMainQuestEvent");
      *(_DWORD *)(v2 + 1184) = 104;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6272),
        (const char (*)[21])"ToNextMainQuestEvent",
        (data::ContextEventType *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, "ToNextMainQuestEvent");
      *(_DWORD *)(v2 + 1200) = 105;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6312),
        (const char (*)[18])"ToggleChapterFold",
        (data::ContextEventType *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, "ToggleChapterFold");
      *(_DWORD *)(v2 + 1216) = 106;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6352),
        (const char (*)[21])"NavigateToQuestEvent",
        (data::ContextEventType *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, "NavigateToQuestEvent");
      *(_DWORD *)(v2 + 1232) = 107;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6392),
        (const char (*)[20])"ScrollSubQuestEvent",
        (data::ContextEventType *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, "ScrollSubQuestEvent");
      *(_DWORD *)(v2 + 1248) = 108;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6432),
        (const char (*)[19])"ChapterSelectEvent",
        (data::ContextEventType *)(v2 + 1248));
      if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1264, "ChapterSelectEvent");
      *(_DWORD *)(v2 + 1264) = 109;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[23],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6472),
        (const char (*)[23])"ChoosePrevChapterEvent",
        (data::ContextEventType *)(v2 + 1264));
      if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1280, "ChoosePrevChapterEvent");
      *(_DWORD *)(v2 + 1280) = 110;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[23],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6512),
        (const char (*)[23])"ChooseNextChapterEvent",
        (data::ContextEventType *)(v2 + 1280));
      if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1296, "ChooseNextChapterEvent");
      *(_DWORD *)(v2 + 1296) = 111;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6552),
        (const char (*)[24])"ShowSubQuestDetailEvent",
        (data::ContextEventType *)(v2 + 1296));
      if ( *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1312, "ShowSubQuestDetailEvent");
      *(_DWORD *)(v2 + 1312) = 112;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6592),
        (const char (*)[18])"ToRewardPageEvent",
        (data::ContextEventType *)(v2 + 1312));
      if ( *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1328, "ToRewardPageEvent");
      *(_DWORD *)(v2 + 1328) = 113;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[25],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6632),
        (const char (*)[25])"ToggleQuestTrackingEvent",
        (data::ContextEventType *)(v2 + 1328));
      if ( *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1344, "ToggleQuestTrackingEvent");
      *(_DWORD *)(v2 + 1344) = 200;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6672),
        (const char (*)[15])"ToPrevTabEvent",
        (data::ContextEventType *)(v2 + 1344));
      if ( *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1360, "ToPrevTabEvent");
      *(_DWORD *)(v2 + 1360) = 201;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6712),
        (const char (*)[15])"ToNextTabEvent",
        (data::ContextEventType *)(v2 + 1360));
      if ( *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1376, "ToNextTabEvent");
      *(_DWORD *)(v2 + 1376) = 202;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[9],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6752),
        (const char (*)[9])"UseEvent",
        (data::ContextEventType *)(v2 + 1376));
      if ( *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1392, "UseEvent");
      *(_DWORD *)(v2 + 1392) = 203;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[10],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6792),
        (const char (*)[10])"DropEvent",
        (data::ContextEventType *)(v2 + 1392));
      if ( *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1408, "DropEvent");
      *(_DWORD *)(v2 + 1408) = 204;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6832),
        (const char (*)[15])"ToPrevRowEvent",
        (data::ContextEventType *)(v2 + 1408));
      if ( *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1424, "ToPrevRowEvent");
      *(_DWORD *)(v2 + 1424) = 205;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6872),
        (const char (*)[15])"ToNextRowEvent",
        (data::ContextEventType *)(v2 + 1424));
      if ( *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1440, "ToNextRowEvent");
      *(_DWORD *)(v2 + 1440) = 206;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6912),
        (const char (*)[16])"ToPrevSlotEvent",
        (data::ContextEventType *)(v2 + 1440));
      if ( *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1456, "ToPrevSlotEvent");
      *(_DWORD *)(v2 + 1456) = 207;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6952),
        (const char (*)[16])"ToNextSlotEvent",
        (data::ContextEventType *)(v2 + 1456));
      if ( *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1472, "ToNextSlotEvent");
      *(_DWORD *)(v2 + 1472) = 300;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[12],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 6992),
        (const char (*)[12])"ReNameEvent",
        (data::ContextEventType *)(v2 + 1472));
      if ( *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1488, "ReNameEvent");
      *(_DWORD *)(v2 + 1488) = 400;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7032),
        (const char (*)[18])"UIZoomCameraEvent",
        (data::ContextEventType *)(v2 + 1488));
      if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1504, "UIZoomCameraEvent");
      *(_DWORD *)(v2 + 1504) = 401;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[10],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7072),
        (const char (*)[10])"UIDetails",
        (data::ContextEventType *)(v2 + 1504));
      if ( *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1520, "UIDetails");
      *(_DWORD *)(v2 + 1520) = 500;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7112),
        (const char (*)[16])"MoveCursorEvent",
        (data::ContextEventType *)(v2 + 1520));
      if ( *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1536, "MoveCursorEvent");
      *(_DWORD *)(v2 + 1536) = 501;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7152),
        (const char (*)[15])"ZoomInMapEvent",
        (data::ContextEventType *)(v2 + 1536));
      if ( *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1552, "ZoomInMapEvent");
      *(_DWORD *)(v2 + 1552) = 502;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7192),
        (const char (*)[16])"ZoomOutMapEvent",
        (data::ContextEventType *)(v2 + 1552));
      if ( *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1568, "ZoomOutMapEvent");
      *(_DWORD *)(v2 + 1568) = 600;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[23],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7232),
        (const char (*)[23])"CommonLeftStickUpEvent",
        (data::ContextEventType *)(v2 + 1568));
      if ( *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1584, "CommonLeftStickUpEvent");
      *(_DWORD *)(v2 + 1584) = 601;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[25],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7272),
        (const char (*)[25])"CommonLeftStickDownEvent",
        (data::ContextEventType *)(v2 + 1584));
      if ( *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1600, "CommonLeftStickDownEvent");
      *(_DWORD *)(v2 + 1600) = 602;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[25],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7312),
        (const char (*)[25])"CommonLeftStickLeftEvent",
        (data::ContextEventType *)(v2 + 1600));
      if ( *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1616, "CommonLeftStickLeftEvent");
      *(_DWORD *)(v2 + 1616) = 603;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7352),
        (const char (*)[26])"CommonLeftStickRightEvent",
        (data::ContextEventType *)(v2 + 1616));
      if ( *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1632, "CommonLeftStickRightEvent");
      *(_DWORD *)(v2 + 1632) = 604;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7392),
        (const char (*)[22])"CommonChangeViewEvent",
        (data::ContextEventType *)(v2 + 1632));
      if ( *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1648, "CommonChangeViewEvent");
      *(_DWORD *)(v2 + 1648) = 605;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7432),
        (const char (*)[18])"CommonMenuUpEvent",
        (data::ContextEventType *)(v2 + 1648));
      if ( *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1664, "CommonMenuUpEvent");
      *(_DWORD *)(v2 + 1664) = 606;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7472),
        (const char (*)[20])"CommonMenuLeftEvent",
        (data::ContextEventType *)(v2 + 1664));
      if ( *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1680, "CommonMenuLeftEvent");
      *(_DWORD *)(v2 + 1680) = 607;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7512),
        (const char (*)[26])"CommonRightStickLeftEvent",
        (data::ContextEventType *)(v2 + 1680));
      if ( *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1696, "CommonRightStickLeftEvent");
      *(_DWORD *)(v2 + 1696) = 608;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[27],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7552),
        (const char (*)[27])"CommonRightStickRightEvent",
        (data::ContextEventType *)(v2 + 1696));
      if ( *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1712, "CommonRightStickRightEvent");
      *(_DWORD *)(v2 + 1712) = 630;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7592),
        (const char (*)[24])"CommonRightStickUpEvent",
        (data::ContextEventType *)(v2 + 1712));
      if ( *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1728, "CommonRightStickUpEvent");
      *(_DWORD *)(v2 + 1728) = 631;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[26],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7632),
        (const char (*)[26])"CommonRightStickDownEvent",
        (data::ContextEventType *)(v2 + 1728));
      if ( *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1744, "CommonRightStickDownEvent");
      *(_DWORD *)(v2 + 1744) = 610;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[27],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7672),
        (const char (*)[27])"CommonLeftStickButtonEvent",
        (data::ContextEventType *)(v2 + 1744));
      if ( *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1760, "CommonLeftStickButtonEvent");
      *(_DWORD *)(v2 + 1760) = 611;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[28],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7712),
        (const char (*)[28])"CommonRightStickButtonEvent",
        (data::ContextEventType *)(v2 + 1760));
      if ( *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1776, "CommonRightStickButtonEvent");
      *(_DWORD *)(v2 + 1776) = 612;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7752),
        (const char (*)[24])"CommonRightTriggerEvent",
        (data::ContextEventType *)(v2 + 1776));
      if ( *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1792, "CommonRightTriggerEvent");
      *(_DWORD *)(v2 + 1792) = 613;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[23],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7792),
        (const char (*)[23])"CommonLeftTriggerEvent",
        (data::ContextEventType *)(v2 + 1792));
      if ( *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1808, "CommonLeftTriggerEvent");
      *(_DWORD *)(v2 + 1808) = 614;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[25],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7832),
        (const char (*)[25])"CommonRightShoulderEvent",
        (data::ContextEventType *)(v2 + 1808));
      if ( *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1824, "CommonRightShoulderEvent");
      *(_DWORD *)(v2 + 1824) = 615;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7872),
        (const char (*)[24])"CommonLeftShoulderEvent",
        (data::ContextEventType *)(v2 + 1824));
      if ( *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1840, "CommonLeftShoulderEvent");
      *(_DWORD *)(v2 + 1840) = 616;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[31],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7912),
        (const char (*)[31])"CommonLeftShoulderReleaseEvent",
        (data::ContextEventType *)(v2 + 1840));
      if ( *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1856, "CommonLeftShoulderReleaseEvent");
      *(_DWORD *)(v2 + 1856) = 617;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[32],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7952),
        (const char (*)[32])"CommonRightShoulderReleaseEvent",
        (data::ContextEventType *)(v2 + 1856));
      if ( *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1872, "CommonRightShoulderReleaseEvent");
      *(_DWORD *)(v2 + 1872) = 620;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[29],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 7992),
        (const char (*)[29])"CommonLeftStickVerticalEvent",
        (data::ContextEventType *)(v2 + 1872));
      if ( *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1888, "CommonLeftStickVerticalEvent");
      *(_DWORD *)(v2 + 1888) = 621;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[30],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8032),
        (const char (*)[30])"CommonRightStickVerticalEvent",
        (data::ContextEventType *)(v2 + 1888));
      if ( *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1904, "CommonRightStickVerticalEvent");
      *(_DWORD *)(v2 + 1904) = 622;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[31],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8072),
        (const char (*)[31])"CommonLeftStickHorizontalEvent",
        (data::ContextEventType *)(v2 + 1904));
      if ( *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1920, "CommonLeftStickHorizontalEvent");
      *(_DWORD *)(v2 + 1920) = 623;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[32],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8112),
        (const char (*)[32])"CommonRightStickHorizontalEvent",
        (data::ContextEventType *)(v2 + 1920));
      if ( *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1936, "CommonRightStickHorizontalEvent");
      *(_DWORD *)(v2 + 1936) = 700;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[7],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8152),
        (const char (*)[7])"Revive",
        (data::ContextEventType *)(v2 + 1936));
      if ( *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1952, "Revive");
      *(_DWORD *)(v2 + 1952) = 800;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[23],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 0x2000),
        (const char (*)[23])"Goddess_ContributeSome",
        (data::ContextEventType *)(v2 + 1952));
      if ( *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1968, "Goddess_ContributeSome");
      *(_DWORD *)(v2 + 1968) = 801;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8232),
        (const char (*)[22])"Goddess_ContributeAll",
        (data::ContextEventType *)(v2 + 1968));
      if ( *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1984, "Goddess_ContributeAll");
      *(_DWORD *)(v2 + 1984) = 802;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[28],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8272),
        (const char (*)[28])"Goddess_ScrollUpgradeReward",
        (data::ContextEventType *)(v2 + 1984));
      if ( *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2000, "Goddess_ScrollUpgradeReward");
      *(_DWORD *)(v2 + 2000) = 803;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[25],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8312),
        (const char (*)[25])"ToggleSpringAutoUseEvent",
        (data::ContextEventType *)(v2 + 2000));
      if ( *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2016, "ToggleSpringAutoUseEvent");
      *(_DWORD *)(v2 + 2016) = 900;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8352),
        (const char (*)[18])"DialogSelectEvent",
        (data::ContextEventType *)(v2 + 2016));
      if ( *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2032, "DialogSelectEvent");
      *(_DWORD *)(v2 + 2032) = 901;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8392),
        (const char (*)[18])"ToNextDialogEvent",
        (data::ContextEventType *)(v2 + 2032));
      if ( *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2048, "ToNextDialogEvent");
      *(_DWORD *)(v2 + 2048) = 1000;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8432),
        (const char (*)[18])"VisitorLoginEvent",
        (data::ContextEventType *)(v2 + 2048));
      if ( *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2064, "VisitorLoginEvent");
      *(_DWORD *)(v2 + 2064) = 1001;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[23],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8472),
        (const char (*)[23])"SwitchServerLoginEvent",
        (data::ContextEventType *)(v2 + 2064));
      if ( *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2080, "SwitchServerLoginEvent");
      *(_DWORD *)(v2 + 2080) = 1020;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[17],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8512),
        (const char (*)[17])"GachaNoticeEvent",
        (data::ContextEventType *)(v2 + 2080));
      if ( *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2096, "GachaNoticeEvent");
      *(_DWORD *)(v2 + 2096) = 1021;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8552),
        (const char (*)[18])"GachaHistoryEvent",
        (data::ContextEventType *)(v2 + 2096));
      if ( *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2112, "GachaHistoryEvent");
      *(_DWORD *)(v2 + 2112) = 1022;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8592),
        (const char (*)[15])"GachaOnceEvent",
        (data::ContextEventType *)(v2 + 2112));
      if ( *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2128, "GachaOnceEvent");
      *(_DWORD *)(v2 + 2128) = 1023;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8632),
        (const char (*)[19])"GachaTenTimesEvent",
        (data::ContextEventType *)(v2 + 2128));
      if ( *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2144, "GachaTenTimesEvent");
      *(_DWORD *)(v2 + 2144) = 1024;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8672),
        (const char (*)[15])"GachaNextEvent",
        (data::ContextEventType *)(v2 + 2144));
      if ( *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2160, "GachaNextEvent");
      *(_DWORD *)(v2 + 2160) = 1101;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[9],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8712),
        (const char (*)[9])"BuyEvent",
        (data::ContextEventType *)(v2 + 2160));
      if ( *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2176, "BuyEvent");
      *(_DWORD *)(v2 + 2176) = 1102;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[10],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8752),
        (const char (*)[10])"TipsEvent",
        (data::ContextEventType *)(v2 + 2176));
      if ( *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2192, "TipsEvent");
      *(_DWORD *)(v2 + 2192) = 1103;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[13],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8792),
        (const char (*)[13])"BuyInfoEvent",
        (data::ContextEventType *)(v2 + 2192));
      if ( *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2208, "BuyInfoEvent");
      *(_DWORD *)(v2 + 2208) = 1104;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[14],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8832),
        (const char (*)[14])"MallHelpEvent",
        (data::ContextEventType *)(v2 + 2208));
      if ( *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2224, "MallHelpEvent");
      *(_DWORD *)(v2 + 2224) = 1201;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[17],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8872),
        (const char (*)[17])"MaterialAddEvent",
        (data::ContextEventType *)(v2 + 2224));
      if ( *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2240, "MaterialAddEvent");
      *(_DWORD *)(v2 + 2240) = 1202;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[14],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8912),
        (const char (*)[14])"McoinAddEvent",
        (data::ContextEventType *)(v2 + 2240));
      if ( *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2256, "McoinAddEvent");
      *(_DWORD *)(v2 + 2256) = 1301;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[10],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8952),
        (const char (*)[10])"HideEvent",
        (data::ContextEventType *)(v2 + 2256));
      if ( *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2272, "HideEvent");
      *(_DWORD *)(v2 + 2272) = 1302;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 8992),
        (const char (*)[22])"PhotographOpenEmotion",
        (data::ContextEventType *)(v2 + 2272));
      if ( *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2288, "PhotographOpenEmotion");
      *(_DWORD *)(v2 + 2288) = 1401;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[14],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9032),
        (const char (*)[14])"QuickUseEvent",
        (data::ContextEventType *)(v2 + 2288));
      if ( *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2304, "QuickUseEvent");
      *(_DWORD *)(v2 + 2304) = 1402;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9072),
        (const char (*)[19])"ActivitySkillEvent",
        (data::ContextEventType *)(v2 + 2304));
      if ( *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2320, "ActivitySkillEvent");
      *(_DWORD *)(v2 + 2320) = 1403;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9112),
        (const char (*)[20])"ExteraSelectUpEvent",
        (data::ContextEventType *)(v2 + 2320));
      if ( *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2336, "ExteraSelectUpEvent");
      *(_DWORD *)(v2 + 2336) = 1404;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9152),
        (const char (*)[22])"ExteraSelectDownEvent",
        (data::ContextEventType *)(v2 + 2336));
      if ( *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2352, "ExteraSelectDownEvent");
      *(_DWORD *)(v2 + 2352) = 1405;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9192),
        (const char (*)[22])"ExteraSelectLeftEvent",
        (data::ContextEventType *)(v2 + 2352));
      if ( *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2368, "ExteraSelectLeftEvent");
      *(_DWORD *)(v2 + 2368) = 1406;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[23],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9232),
        (const char (*)[23])"ExteraSelectRightEvent",
        (data::ContextEventType *)(v2 + 2368));
      if ( *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2384, "ExteraSelectRightEvent");
      *(_DWORD *)(v2 + 2384) = 1407;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9272),
        (const char (*)[21])"MusicGameLeftUpEvent",
        (data::ContextEventType *)(v2 + 2384));
      if ( *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2400, "MusicGameLeftUpEvent");
      *(_DWORD *)(v2 + 2400) = 1408;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9312),
        (const char (*)[24])"MusicGameLeftRightEvent",
        (data::ContextEventType *)(v2 + 2400));
      if ( *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2416, "MusicGameLeftRightEvent");
      *(_DWORD *)(v2 + 2416) = 1409;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[23],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9352),
        (const char (*)[23])"MusicGameLeftDownEvent",
        (data::ContextEventType *)(v2 + 2416));
      if ( *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2432, "MusicGameLeftDownEvent");
      *(_DWORD *)(v2 + 2432) = 1410;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[23],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9392),
        (const char (*)[23])"MusicGameLeftLeftEvent",
        (data::ContextEventType *)(v2 + 2432));
      if ( *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2448, "MusicGameLeftLeftEvent");
      *(_DWORD *)(v2 + 2448) = 1411;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[22],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9432),
        (const char (*)[22])"MusicGameRightUpEvent",
        (data::ContextEventType *)(v2 + 2448));
      if ( *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2464, "MusicGameRightUpEvent");
      *(_DWORD *)(v2 + 2464) = 1412;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[25],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9472),
        (const char (*)[25])"MusicGameRightRightEvent",
        (data::ContextEventType *)(v2 + 2464));
      if ( *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2480, "MusicGameRightRightEvent");
      *(_DWORD *)(v2 + 2480) = 1413;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9512),
        (const char (*)[24])"MusicGameRightDownEvent",
        (data::ContextEventType *)(v2 + 2480));
      if ( *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2496, "MusicGameRightDownEvent");
      *(_DWORD *)(v2 + 2496) = 1414;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[24],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9552),
        (const char (*)[24])"MusicGameRightLeftEvent",
        (data::ContextEventType *)(v2 + 2496));
      if ( *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2512, "MusicGameRightLeftEvent");
      *(_DWORD *)(v2 + 2512) = 1415;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[29],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9592),
        (const char (*)[29])"MusicGameLeftUpReleasedEvent",
        (data::ContextEventType *)(v2 + 2512));
      if ( *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2528, "MusicGameLeftUpReleasedEvent");
      *(_DWORD *)(v2 + 2528) = 1416;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[32],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9632),
        (const char (*)[32])"MusicGameLeftRightReleasedEvent",
        (data::ContextEventType *)(v2 + 2528));
      if ( *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2544, "MusicGameLeftRightReleasedEvent");
      *(_DWORD *)(v2 + 2544) = 1417;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[31],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9672),
        (const char (*)[31])"MusicGameLeftDownReleasedEvent",
        (data::ContextEventType *)(v2 + 2544));
      if ( *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2560, "MusicGameLeftDownReleasedEvent");
      *(_DWORD *)(v2 + 2560) = 1418;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[31],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9712),
        (const char (*)[31])"MusicGameLeftLeftReleasedEvent",
        (data::ContextEventType *)(v2 + 2560));
      if ( *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2576, "MusicGameLeftLeftReleasedEvent");
      *(_DWORD *)(v2 + 2576) = 1419;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[30],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9752),
        (const char (*)[30])"MusicGameRightUpReleasedEvent",
        (data::ContextEventType *)(v2 + 2576));
      if ( *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2592, "MusicGameRightUpReleasedEvent");
      *(_DWORD *)(v2 + 2592) = 1420;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[33],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9792),
        (const char (*)[33])"MusicGameRightRightReleasedEvent",
        (data::ContextEventType *)(v2 + 2592));
      if ( *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2608, "MusicGameRightRightReleasedEvent");
      *(_DWORD *)(v2 + 2608) = 1421;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[32],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9832),
        (const char (*)[32])"MusicGameRightDownReleasedEvent",
        (data::ContextEventType *)(v2 + 2608));
      if ( *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2624, "MusicGameRightDownReleasedEvent");
      *(_DWORD *)(v2 + 2624) = 1422;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[32],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9872),
        (const char (*)[32])"MusicGameRightLeftReleasedEvent",
        (data::ContextEventType *)(v2 + 2624));
      if ( *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2640, "MusicGameRightLeftReleasedEvent");
      *(_DWORD *)(v2 + 2640) = 1423;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9912),
        (const char (*)[20])"MusicGameFree1Event",
        (data::ContextEventType *)(v2 + 2640));
      if ( *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2656, "MusicGameFree1Event");
      *(_DWORD *)(v2 + 2656) = 1424;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9952),
        (const char (*)[20])"MusicGameFree2Event",
        (data::ContextEventType *)(v2 + 2656));
      if ( *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2672, "MusicGameFree2Event");
      *(_DWORD *)(v2 + 2672) = 1425;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 9992),
        (const char (*)[20])"MusicGameFree3Event",
        (data::ContextEventType *)(v2 + 2672));
      if ( *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2688, "MusicGameFree3Event");
      *(_DWORD *)(v2 + 2688) = 1426;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10032),
        (const char (*)[20])"MusicGameFree4Event",
        (data::ContextEventType *)(v2 + 2688));
      if ( *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2704, "MusicGameFree4Event");
      *(_DWORD *)(v2 + 2704) = 1427;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10072),
        (const char (*)[20])"MusicGameFree5Event",
        (data::ContextEventType *)(v2 + 2704));
      if ( *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2720, "MusicGameFree5Event");
      *(_DWORD *)(v2 + 2720) = 1428;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10112),
        (const char (*)[20])"MusicGameFree6Event",
        (data::ContextEventType *)(v2 + 2720));
      if ( *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2736, "MusicGameFree6Event");
      *(_DWORD *)(v2 + 2736) = 1429;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10152),
        (const char (*)[20])"MusicGameFree7Event",
        (data::ContextEventType *)(v2 + 2736));
      if ( *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2752, "MusicGameFree7Event");
      *(_DWORD *)(v2 + 2752) = 1430;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10192),
        (const char (*)[20])"MusicGameFree8Event",
        (data::ContextEventType *)(v2 + 2752));
      if ( *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2768, "MusicGameFree8Event");
      *(_DWORD *)(v2 + 2768) = 1431;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10232),
        (const char (*)[20])"MusicGameFree9Event",
        (data::ContextEventType *)(v2 + 2768));
      if ( *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2784, "MusicGameFree9Event");
      *(_DWORD *)(v2 + 2784) = 1432;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10272),
        (const char (*)[21])"MusicGameFree10Event",
        (data::ContextEventType *)(v2 + 2784));
      if ( *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2800, "MusicGameFree10Event");
      *(_DWORD *)(v2 + 2800) = 1433;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10312),
        (const char (*)[21])"MusicGameFree11Event",
        (data::ContextEventType *)(v2 + 2800));
      if ( *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2816, "MusicGameFree11Event");
      *(_DWORD *)(v2 + 2816) = 1434;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10352),
        (const char (*)[21])"MusicGameFree12Event",
        (data::ContextEventType *)(v2 + 2816));
      if ( *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2832, "MusicGameFree12Event");
      *(_DWORD *)(v2 + 2832) = 1435;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10392),
        (const char (*)[21])"MusicGameFree13Event",
        (data::ContextEventType *)(v2 + 2832));
      if ( *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2848, "MusicGameFree13Event");
      *(_DWORD *)(v2 + 2848) = 1436;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10432),
        (const char (*)[21])"MusicGameFree14Event",
        (data::ContextEventType *)(v2 + 2848));
      if ( *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2864, "MusicGameFree14Event");
      *(_DWORD *)(v2 + 2864) = 1437;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10472),
        (const char (*)[21])"MusicGameFree15Event",
        (data::ContextEventType *)(v2 + 2864));
      if ( *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2880, "MusicGameFree15Event");
      *(_DWORD *)(v2 + 2880) = 1438;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10512),
        (const char (*)[21])"MusicGameFree16Event",
        (data::ContextEventType *)(v2 + 2880));
      if ( *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2896, "MusicGameFree16Event");
      *(_DWORD *)(v2 + 2896) = 1439;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10552),
        (const char (*)[21])"MusicGameFree17Event",
        (data::ContextEventType *)(v2 + 2896));
      if ( *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2912, "MusicGameFree17Event");
      *(_DWORD *)(v2 + 2912) = 1440;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10592),
        (const char (*)[21])"MusicGameFree18Event",
        (data::ContextEventType *)(v2 + 2912));
      if ( *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2928, "MusicGameFree18Event");
      *(_DWORD *)(v2 + 2928) = 1441;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10632),
        (const char (*)[21])"MusicGameFree19Event",
        (data::ContextEventType *)(v2 + 2928));
      if ( *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2944, "MusicGameFree19Event");
      *(_DWORD *)(v2 + 2944) = 1442;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10672),
        (const char (*)[21])"MusicGameFree20Event",
        (data::ContextEventType *)(v2 + 2944));
      if ( *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2960, "MusicGameFree20Event");
      *(_DWORD *)(v2 + 2960) = 1443;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10712),
        (const char (*)[21])"MusicGameFree21Event",
        (data::ContextEventType *)(v2 + 2960));
      if ( *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2976, "MusicGameFree21Event");
      *(_DWORD *)(v2 + 2976) = 1444;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10752),
        (const char (*)[20])"MusicGamePauseEvent",
        (data::ContextEventType *)(v2 + 2976));
      if ( *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2992, "MusicGamePauseEvent");
      *(_DWORD *)(v2 + 2992) = 1445;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[18],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10792),
        (const char (*)[18])"OpenTeamPageEvent",
        (data::ContextEventType *)(v2 + 2992));
      if ( *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3008, "OpenTeamPageEvent");
      *(_DWORD *)(v2 + 3008) = 1446;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[20],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10832),
        (const char (*)[20])"OpenFriendPageEvent",
        (data::ContextEventType *)(v2 + 3008));
      if ( *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3024, "OpenFriendPageEvent");
      *(_DWORD *)(v2 + 3024) = 1447;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[28],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10872),
        (const char (*)[28])"CommonLeftTriggerPressEvent",
        (data::ContextEventType *)(v2 + 3024));
      if ( *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3040, "CommonLeftTriggerPressEvent");
      *(_DWORD *)(v2 + 3040) = 1448;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[30],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10912),
        (const char (*)[30])"CommonLeftTriggerReleaseEvent",
        (data::ContextEventType *)(v2 + 3040));
      if ( *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3056, "CommonLeftTriggerReleaseEvent");
      *(_DWORD *)(v2 + 3056) = 1449;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[29],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10952),
        (const char (*)[29])"CommonRightTriggerPressEvent",
        (data::ContextEventType *)(v2 + 3056));
      if ( *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3072, "CommonRightTriggerPressEvent");
      *(_DWORD *)(v2 + 3072) = 1450;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[31],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 10992),
        (const char (*)[31])"CommonRightTriggerReleaseEvent",
        (data::ContextEventType *)(v2 + 3072));
      if ( *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3088, "CommonRightTriggerReleaseEvent");
      *(_DWORD *)(v2 + 3088) = 1451;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[13],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11032),
        (const char (*)[13])"ArrowUpEvent",
        (data::ContextEventType *)(v2 + 3088));
      if ( *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3104, "ArrowUpEvent");
      *(_DWORD *)(v2 + 3104) = 1452;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11072),
        (const char (*)[15])"ArrowDownEvent",
        (data::ContextEventType *)(v2 + 3104));
      if ( *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3120, "ArrowDownEvent");
      *(_DWORD *)(v2 + 3120) = 1453;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[15],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11112),
        (const char (*)[15])"ArrowLeftEvent",
        (data::ContextEventType *)(v2 + 3120));
      if ( *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3136, "ArrowLeftEvent");
      *(_DWORD *)(v2 + 3136) = 1454;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[16],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11152),
        (const char (*)[16])"ArrowRightEvent",
        (data::ContextEventType *)(v2 + 3136));
      if ( *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3152, "ArrowRightEvent");
      *(_DWORD *)(v2 + 3152) = 1455;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[17],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11192),
        (const char (*)[17])"LeftControlEvent",
        (data::ContextEventType *)(v2 + 3152));
      if ( *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3168, "LeftControlEvent");
      *(_DWORD *)(v2 + 3168) = 1456;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[25],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11232),
        (const char (*)[25])"LeftControlReleasedEvent",
        (data::ContextEventType *)(v2 + 3168));
      if ( *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3184, "LeftControlReleasedEvent");
      *(_DWORD *)(v2 + 3184) = 1457;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[11],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11272),
        (const char (*)[11])"SpaceEvent",
        (data::ContextEventType *)(v2 + 3184));
      if ( *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3200, "SpaceEvent");
      *(_DWORD *)(v2 + 3200) = 1458;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[19],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11312),
        (const char (*)[19])"SpaceReleasedEvent",
        (data::ContextEventType *)(v2 + 3200));
      if ( *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3216, "SpaceReleasedEvent");
      *(_DWORD *)(v2 + 3216) = 1459;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[10],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11352),
        (const char (*)[10])"UndoEvent",
        (data::ContextEventType *)(v2 + 3216));
      if ( *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3232, "UndoEvent");
      *(_DWORD *)(v2 + 3232) = 1460;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[10],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11392),
        (const char (*)[10])"SaveEvent",
        (data::ContextEventType *)(v2 + 3232));
      if ( *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3248, "SaveEvent");
      *(_DWORD *)(v2 + 3248) = 1461;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[14],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11432),
        (const char (*)[14])"OpenMenuEvent",
        (data::ContextEventType *)(v2 + 3248));
      if ( *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3264, "OpenMenuEvent");
      *(_DWORD *)(v2 + 3264) = 1462;
      std::pair<std::string const,data::ContextEventType>::pair<char const(&)[21],data::ContextEventType,true>(
        (std::pair<const std::string,data::ContextEventType> *const)(v2 + 11472),
        (const char (*)[21])"OpenMenuReleaseEvent",
        (data::ContextEventType *)(v2 + 3264));
      std::allocator<std::pair<std::string const,data::ContextEventType>>::allocator((std::allocator<std::pair<const std::string,data::ContextEventType> > *const)(v2 + 48));
      std::map<std::string,data::ContextEventType>::map(
        &data::enumStrToVal(std::string const&,data::ContextEventType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ContextEventType> >)__PAIR128__(201LL, v2 + 3472),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ContextEventType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ContextEventType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ContextEventType>::~map,
        &data::enumStrToVal(std::string const&,data::ContextEventType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ContextEventType>>::~allocator((std::allocator<std::pair<const std::string,data::ContextEventType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ContextEventType> *)(v2 + 11512);
            i != (std::pair<const std::string,data::ContextEventType> *)(v2 + 3472);
            std::pair<std::string const,data::ContextEventType>::~pair(i) )
      {
        --i;
      }
      e = (data::ContextEventType *)8040;
      __asan_poison_stack_memory(v2 + 3472, 8040LL);
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
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 3280, e);
    *(std::map<std::string,data::ContextEventType>::iterator *)(v2 + 3280) = std::map<std::string,data::ContextEventType>::find(
                                                                               &data::enumStrToVal(std::string const&,data::ContextEventType &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 3312, s);
    *(std::map<std::string,data::ContextEventType>::iterator *)(v2 + 3312) = std::map<std::string,data::ContextEventType>::end(&data::enumStrToVal(std::string const&,data::ContextEventType &)::m);
    v7 = (char *)(v2 + 3312);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ContextEventType> >::_Self *)(v2 + 3280),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ContextEventType> >::_Self *)(v2 + 3312));
    *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 3408) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 3408) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 3439) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 3439) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 3408, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 3408),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigUI.cpp",
        "enumStrToVal",
        3110);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 3408),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3408));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ContextEventType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ContextEventType> > *const)(v2 + 3280));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF85B8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 1472) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_8(v2, 11776LL, v16);
  }
  return v13;
};

// Line 3118: range 000000001162FC49-00000000116305CA
const char *__cdecl data::getDescription(data::ContextEventType e)
{
  const char *result; // rax

  switch ( e )
  {
    case Invalid_5:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ContextEnd:
      result = (const char *)&unk_1A81BB40;
      break;
    case FrameEnd:
      result = (const char *)&unk_1A81BBA0;
      break;
    case CloseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case BackEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ConfirmEvent:
      result = (const char *)&unk_1A81BBE0;
      break;
    case ConfirmingEvent:
      result = (const char *)&unk_1A81BC20;
      break;
    case ConfirmingCancelEvent:
      result = (const char *)&unk_1A81BC60;
      break;
    case ToPrevPrimaryTabEvent:
      result = (const char *)&unk_1A81BCA0;
      break;
    case ToNextPrimaryTabEvent:
      result = (const char *)&unk_1A81BD00;
      break;
    case ToPrevSecondaryTabEvent:
      result = (const char *)&unk_1A81BD60;
      break;
    case ToNextSecondaryTabEvent:
      result = (const char *)&unk_1A81BDC0;
      break;
    case MenuNavigationUp:
      result = (const char *)&unk_1A81BE20;
      break;
    case MenuNavigationDown:
      result = (const char *)&unk_1A81BE60;
      break;
    case MenuNavigationLeft:
      result = (const char *)&unk_1A81BEA0;
      break;
    case MenuNavigationRight:
      result = (const char *)&unk_1A81BEE0;
      break;
    case IncreaseCountEvent:
      result = (const char *)&unk_1A81BF20;
      break;
    case DecreaseCountEvent:
      result = (const char *)&unk_1A81BF60;
      break;
    case TriggerInputEvent:
      result = (const char *)&unk_1A81BFA0;
      break;
    case LogoutConfirmingEvent:
      result = (const char *)&unk_1A81BFE0;
      break;
    case LogoutConfirmEndEvent:
      result = (const char *)&unk_1A81C020;
      break;
    case BackingEvent:
      result = (const char *)&unk_1A81C060;
      break;
    case BackingCancelEvent:
      result = (const char *)&unk_1A81C0A0;
      break;
    case OpenSortingDropdownEvent:
      result = (const char *)&unk_1A81C0E0;
      break;
    case OpenScreenDropdownEvent:
      result = (const char *)&unk_1A81C120;
      break;
    case RevertSortingOrderEvent:
      result = (const char *)&unk_1A81C160;
      break;
    case OpenDropdownEvent:
      result = (const char *)&unk_1A81C1A0;
      break;
    case ToNextDropdownOptionEvent:
      result = (const char *)&unk_1A81C1E0;
      break;
    case ToPrevDropdownOptionEvent:
      result = (const char *)&unk_1A81C240;
      break;
    case ConfirmDropdownSelectEvent:
      result = (const char *)&unk_1A81C2A0;
      break;
    case CancelDropdownSelectEvent:
      result = (const char *)&unk_1A81C2E0;
      break;
    case ScrollPrimaryScrollerEvent:
      result = (const char *)&unk_1A81C320;
      break;
    case ReturnToQuestEvent:
      result = (const char *)&unk_1A81C360;
      break;
    case ToAvatar1Event_0:
      result = (const char *)&unk_1A81C3A0;
      break;
    case ToAvatar2Event_0:
      result = (const char *)&unk_1A81C400;
      break;
    case ToAvatar3Event_0:
      result = (const char *)&unk_1A81C460;
      break;
    case ToAvatar4Event_0:
      result = (const char *)&unk_1A81C4C0;
      break;
    case OpenChatEvent_0:
      result = "Chat";
      break;
    case ToAvatar5Event_0:
      result = (const char *)&unk_1A81C560;
      break;
    case ActionNorthEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ActionEastEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ActionSouthEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ActionWestEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ShowItemDetailEvent:
      result = (const char *)&unk_1A81C5C0;
      break;
    case ShowPlayerLevelRewardEvent:
      result = (const char *)&unk_1A81C600;
      break;
    case ChangeTeamEvent:
      result = (const char *)&unk_1A81C640;
      break;
    case ChangeTeamNameEvent:
      result = (const char *)&unk_1A81C6A0;
      break;
    case FastTeamSelectEvent:
      result = (const char *)&unk_1A81C6E0;
      break;
    case SubmitFastTeamSelect:
      result = (const char *)&unk_1A81C720;
      break;
    case ShowHelpTips:
      result = (const char *)&unk_1A81C760;
      break;
    case BuyResin:
      result = (const char *)&unk_1A81C7A0;
      break;
    case ChangeFocusZone:
      result = (const char *)&unk_1A81C7E0;
      break;
    case ShowCycleDungeonOnly:
      result = (const char *)&unk_1A81C820;
      break;
    case ChangeCustomMarkName:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case RemoveCustomMark:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenChatCancelEvent:
      result = "ChatLongPressCancel";
      break;
    case IncreaseCountReleaseEvent:
      result = (const char *)&unk_1A81C8A0;
      break;
    case DecreaseCountReleaseEvent:
      result = (const char *)&unk_1A81C8E0;
      break;
    case ItemSourceSelectEvent:
      result = (const char *)&unk_1A81C920;
      break;
    case ChallengeInterruptEvent_0:
      result = (const char *)&unk_1A815C20;
      break;
    case ToNextScrollerOptionEvent:
      result = (const char *)&unk_1A81C960;
      break;
    case ToPrevScrollerOptionEvent:
      result = (const char *)&unk_1A81C9A0;
      break;
    case ConfirmScrollerSelectEvent:
      result = (const char *)&unk_1A81C9E0;
      break;
    case CancelScrollerSelectEvent:
      result = (const char *)&unk_1A81CA20;
      break;
    case HomeworldCreateCustomSuiteEvent:
      result = (const char *)&unk_1A80FAE0;
      break;
    case HomeworldFurnitureSearchEvent:
      result = (const char *)&unk_1A80FB40;
      break;
    case ToRewardDetailEvent:
      result = (const char *)&unk_1A81CA60;
      break;
    case ToPrevRewardEvent:
      result = (const char *)&unk_1A81CAC0;
      break;
    case ToNextRewardEvent:
      result = (const char *)&unk_1A81CB20;
      break;
    case ToPrevMainQuestEvent:
      result = (const char *)&unk_1A81CB80;
      break;
    case ToNextMainQuestEvent:
      result = (const char *)&unk_1A81CBC0;
      break;
    case ToggleChapterFold:
      result = (const char *)&unk_1A81CC00;
      break;
    case NavigateToQuestEvent:
      result = (const char *)&unk_1A81CC40;
      break;
    case ScrollSubQuestEvent:
      result = (const char *)&unk_1A81CC80;
      break;
    case ChapterSelectEvent:
      result = (const char *)&unk_1A81CCC0;
      break;
    case ChoosePrevChapterEvent:
      result = (const char *)&unk_1A81CD20;
      break;
    case ChooseNextChapterEvent:
      result = (const char *)&unk_1A81CD60;
      break;
    case ShowSubQuestDetailEvent:
      result = (const char *)&unk_1A81CDA0;
      break;
    case ToRewardPageEvent:
      result = (const char *)&unk_1A81CDE0;
      break;
    case ToggleQuestTrackingEvent:
      result = (const char *)&unk_1A81CE20;
      break;
    case ToPrevTabEvent:
      result = (const char *)&unk_1A81CE60;
      break;
    case ToNextTabEvent:
      result = (const char *)&unk_1A81CEA0;
      break;
    case UseEvent:
      result = (const char *)&unk_1A81CEE0;
      break;
    case DropEvent:
      result = (const char *)&unk_1A81CF20;
      break;
    case ToPrevRowEvent:
      result = (const char *)&unk_1A81CF60;
      break;
    case ToNextRowEvent:
      result = (const char *)&unk_1A81CFC0;
      break;
    case ToPrevSlotEvent:
      result = (const char *)&unk_1A81D020;
      break;
    case ToNextSlotEvent:
      result = (const char *)&unk_1A81D060;
      break;
    case ReNameEvent:
      result = (const char *)&unk_1A81D0A0;
      break;
    case UIZoomCameraEvent:
      result = (const char *)&unk_1A81D0E0;
      break;
    case UIDetails:
      result = (const char *)&unk_1A81D120;
      break;
    case MoveCursorEvent:
      result = (const char *)&unk_1A81D160;
      break;
    case ZoomInMapEvent:
      result = (const char *)&unk_1A81D1A0;
      break;
    case ZoomOutMapEvent:
      result = (const char *)&unk_1A81D1E0;
      break;
    case CommonLeftStickUpEvent:
      result = (const char *)&unk_1A81D220;
      break;
    case CommonLeftStickDownEvent:
      result = (const char *)&unk_1A81D260;
      break;
    case CommonLeftStickLeftEvent:
      result = (const char *)&unk_1A81D2A0;
      break;
    case CommonLeftStickRightEvent:
      result = (const char *)&unk_1A81D2E0;
      break;
    case CommonChangeViewEvent:
      result = (const char *)&unk_1A81D320;
      break;
    case CommonMenuUpEvent:
      result = (const char *)&unk_1A81D360;
      break;
    case CommonMenuLeftEvent:
      result = (const char *)&unk_1A81D3A0;
      break;
    case CommonRightStickLeftEvent:
      result = (const char *)&unk_1A81D3E0;
      break;
    case CommonRightStickRightEvent:
      result = (const char *)&unk_1A81D420;
      break;
    case CommonLeftStickButtonEvent:
      result = (const char *)&unk_1A81D4E0;
      break;
    case CommonRightStickButtonEvent:
      result = (const char *)&unk_1A81D520;
      break;
    case CommonRightTriggerEvent:
      result = (const char *)&unk_1A81D560;
      break;
    case CommonLeftTriggerEvent:
      result = (const char *)&unk_1A81D5A0;
      break;
    case CommonRightShoulderEvent:
      result = (const char *)&unk_1A81D5E0;
      break;
    case CommonLeftShoulderEvent:
      result = (const char *)&unk_1A81D620;
      break;
    case CommonLeftShoulderReleaseEvent:
      result = (const char *)&unk_1A81D660;
      break;
    case CommonRightShoulderReleaseEvent:
      result = (const char *)&unk_1A81D6A0;
      break;
    case CommonLeftStickVerticalEvent:
      result = (const char *)&unk_1A81D6E0;
      break;
    case CommonRightStickVerticalEvent:
      result = (const char *)&unk_1A81D720;
      break;
    case CommonLeftStickHorizontalEvent:
      result = (const char *)&unk_1A81D760;
      break;
    case CommonRightStickHorizontalEvent:
      result = (const char *)&unk_1A81D7A0;
      break;
    case CommonRightStickUpEvent:
      result = (const char *)&unk_1A81D460;
      break;
    case CommonRightStickDownEvent:
      result = (const char *)&unk_1A81D4A0;
      break;
    case Revive:
      result = (const char *)&unk_1A81D7E0;
      break;
    case Goddess_ContributeSome:
      result = (const char *)&unk_1A81D820;
      break;
    case Goddess_ContributeAll:
      result = (const char *)&unk_1A81D860;
      break;
    case Goddess_ScrollUpgradeReward:
      result = (const char *)&unk_1A81D8A0;
      break;
    case ToggleSpringAutoUseEvent:
      result = (const char *)&unk_1A81D8E0;
      break;
    case DialogSelectEvent:
      result = (const char *)&unk_1A81D8A0;
      break;
    case ToNextDialogEvent:
      result = (const char *)&unk_1A81D940;
      break;
    case VisitorLoginEvent:
      result = (const char *)&unk_1A81D980;
      break;
    case SwitchServerLoginEvent:
      result = (const char *)&unk_1A81D9C0;
      break;
    case GachaNoticeEvent:
      result = (const char *)&unk_1A81DA00;
      break;
    case GachaHistoryEvent:
      result = (const char *)&unk_1A81DA40;
      break;
    case GachaOnceEvent:
      result = (const char *)&unk_1A81DA80;
      break;
    case GachaTenTimesEvent:
      result = (const char *)&unk_1A81DAC0;
      break;
    case GachaNextEvent:
      result = (const char *)&unk_1A81DB00;
      break;
    case BuyEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case TipsEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case BuyInfoEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MallHelpEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MaterialAddEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case McoinAddEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case HideEvent_0:
      result = (const char *)&unk_1A7E2560;
      break;
    case PhotographOpenEmotion:
      result = (const char *)&unk_1A81DB40;
      break;
    case QuickUseEvent:
      result = (const char *)&unk_1A81DB80;
      break;
    case ActivitySkillEvent:
      result = (const char *)&unk_1A81DBC0;
      break;
    case ExteraSelectUpEvent_0:
      result = (const char *)&unk_1A81DC00;
      break;
    case ExteraSelectDownEvent_0:
      result = (const char *)&unk_1A81DC40;
      break;
    case ExteraSelectLeftEvent_0:
      result = (const char *)&unk_1A81DC80;
      break;
    case ExteraSelectRightEvent_0:
      result = (const char *)&unk_1A81DCC0;
      break;
    case MusicGameLeftUpEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftRightEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftDownEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftLeftEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightUpEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightRightEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightDownEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightLeftEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftUpReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftRightReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftDownReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameLeftLeftReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightUpReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightRightReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightDownReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameRightLeftReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree1Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree2Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree3Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree4Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree5Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree6Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree7Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree8Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree9Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree10Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree11Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree12Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree13Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree14Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree15Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree16Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree17Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree18Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree19Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree20Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGameFree21Event_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case MusicGamePauseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenTeamPageEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenFriendPageEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CommonLeftTriggerPressEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CommonLeftTriggerReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CommonRightTriggerPressEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case CommonRightTriggerReleaseEvent:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowUpEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowDownEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowLeftEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case ArrowRightEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftControlEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case LeftControlReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SpaceEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SpaceReleasedEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case UndoEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case SaveEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenMenuEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case OpenMenuReleaseEvent_0:
      result = (const char *)&unk_1A7E0BE0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 3530: range 00000000116305CC-0000000011631975
bool __cdecl data::InputActionEvent::fromJson(data::InputActionEvent *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  bool v7; // r15
  bool v8; // r15
  bool v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool v12; // bl
  const Json::Value *priority_ptr; // [rsp+10h] [rbp-4E0h]
  Json::Value *event_type_ptr; // [rsp+18h] [rbp-4D8h]
  Json::Value *next_to_handle_ptr; // [rsp+20h] [rbp-4D0h]
  const Json::Value *event_config_ptr; // [rsp+28h] [rbp-4C8h]
  Json::Value *proxy_event_type_ptr; // [rsp+30h] [rbp-4C0h]
  Json::Value *context_event_ptr; // [rsp+38h] [rbp-4B8h]
  char v20[1200]; // [rsp+40h] [rbp-4B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "22 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <"
                        "unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <u"
                        "nknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <u"
                        "nknown> 1088 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InputActionEvent::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
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
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "priority",
    (const std::allocator<char> *)(v2 + 32));
  priority_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( priority_ptr && !fromJson<int>(priority_ptr, &this->priority) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      3540);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[30])"fromJson for: priority fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "eventType",
      (const std::allocator<char> *)(v2 + 48));
    event_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !event_type_ptr )
      goto LABEL_16;
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 320), (Json::Value_0 *)event_type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 320), &this->event_type);
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        3552);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 384),
        (const char (*)[31])"fromJson for: eventType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      v5 = 0;
    }
    else
    {
LABEL_16:
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        "nextToHandle",
        (const std::allocator<char> *)(v2 + 64));
      next_to_handle_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 448));
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !next_to_handle_ptr )
        goto LABEL_23;
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 512), (Json::Value_0 *)next_to_handle_ptr);
      v7 = !data::enumStrToVal((const std::string *)(v2 + 512), &this->next_to_handle);
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      if ( v7 )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "fromJson",
          3564);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[34])"fromJson for: nextToHandle fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        v5 = 0;
      }
      else
      {
LABEL_23:
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 640),
          "eventConfig",
          (const std::allocator<char> *)(v2 + 80));
        event_config_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
        std::string::~string((void *)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( event_config_ptr && !data::ConfigBaseInputEvent::fromJson(&this->event_config, event_config_ptr) )
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
            "./src/json_data_auto/ConfigUI.cpp",
            "fromJson",
            3576);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)(v2 + 704),
            (const char (*)[33])"fromJson for: eventConfig fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 768),
            "proxyEventType",
            (const std::allocator<char> *)(v2 + 96));
          proxy_event_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 768));
          std::string::~string((void *)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( !proxy_event_type_ptr )
            goto LABEL_35;
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 832, 32LL);
          }
          Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 832), (Json::Value_0 *)proxy_event_type_ptr);
          v8 = !data::enumStrToVal((const std::string *)(v2 + 832), &this->proxy_event_type);
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          if ( v8 )
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
              "./src/json_data_auto/ConfigUI.cpp",
              "fromJson",
              3588);
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)(v2 + 896),
              (const char (*)[36])"fromJson for: proxyEventType fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            v5 = 0;
          }
          else
          {
LABEL_35:
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 960),
              "contextEvent",
              (const std::allocator<char> *)(v2 + 112));
            context_event_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 960));
            std::string::~string((void *)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( !context_event_ptr )
              goto LABEL_42;
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1024, 32LL);
            }
            Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1024), (Json::Value_0 *)context_event_ptr);
            v9 = !data::enumStrToVal((const std::string *)(v2 + 1024), &this->context_event);
            std::string::~string((void *)(v2 + 1024));
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            if ( v9 )
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
                "./src/json_data_auto/ConfigUI.cpp",
                "fromJson",
                3600);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v2 + 1088),
                (const char (*)[34])"fromJson for: contextEvent fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
              v5 = 0;
            }
            else
            {
LABEL_42:
              v10 = ((_BYTE)this + 32) & 7;
              v11 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
              if ( (_BYTE)v11 )
                __asan_report_store1(&this->is_json_loaded, v10, v11);
              this->is_json_loaded = 1;
              v5 = 1;
            }
          }
        }
      }
    }
  }
  v12 = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v20);
  }
  return v12;
};

// Line 3608: range 0000000011631976-0000000011631B35
int32_t __cdecl data::InputActionEvent::getHashValue(const data::InputActionEvent *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3609";
  *(_QWORD *)(v2 + 16) = data::InputActionEvent::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_to_handle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_to_handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->next_to_handle);
  }
  common::tools::HashUtils::appendHash(this->next_to_handle, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->proxy_event_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->proxy_event_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->proxy_event_type);
  }
  common::tools::HashUtils::appendHash(this->proxy_event_type, (int32_t *)(v2 + 32));
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

// Line 3616: range 0000000011631B36-0000000011631F11
bool __cdecl data::vecFromJson(const Json::Value *jval, data::InputActionEventList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rax
  data::InputActionEvent *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  std::vector<data::InputActionEvent> *va; // [rsp+0h] [rbp-110h]
  Json::Value *jvala; // [rsp+8h] [rbp-108h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-F8h]
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 9 <unknown> 112 36 9 elem:3622";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -217841664;
  v5[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      v7 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v7 = 0;
      *(_BYTE *)(v7 + 4) = 4;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 147) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 109) & 7) >= *(_BYTE *)(((v3 + 147) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 36LL);
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      *(_QWORD *)(v3 + 120) = 0LL;
      *(_QWORD *)(v3 + 128) = 0LL;
      *(_QWORD *)(v3 + 136) = 0LL;
      *(_DWORD *)(v3 + 144) = 0;
      if ( !data::InputActionEvent::fromJson((data::InputActionEvent *const)(v3 + 112), elem_jval) )
      {
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigUI.cpp",
          "vecFromJson",
          3625);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        v8 = std::move<data::InputActionEvent &>((data::InputActionEvent *)(v3 + 112));
        std::vector<data::InputActionEvent>::emplace_back<data::InputActionEvent>(va, v8, v8);
        v6 = 2;
      }
    }
    v9 = ((v3 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_BYTE *)(v9 + 4) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_19;
  }
  v2 = 1;
LABEL_19:
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3635: range 0000000011631F12-000000001163215E
int32_t __cdecl data::getVecHashValue(const data::InputActionEventList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::InputActionEvent*,std::vector<data::InputActionEvent> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:3636 64 8 16 __for_begin:3637 96 8 14 __for_end:3637";
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
  *(std::vector<data::InputActionEvent>::const_iterator *)(v2 + 64) = std::vector<data::InputActionEvent>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::InputActionEvent>::const_iterator *)(v2 + 96) = std::vector<data::InputActionEvent>::end(vec);
  while ( __gnu_cxx::operator!=<data::InputActionEvent const*,std::vector<data::InputActionEvent>>(
            (const __gnu_cxx::__normal_iterator<const data::InputActionEvent*,std::vector<data::InputActionEvent> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::InputActionEvent*,std::vector<data::InputActionEvent> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::InputActionEvent const*,std::vector<data::InputActionEvent>>::operator*((const __gnu_cxx::__normal_iterator<const data::InputActionEvent*,std::vector<data::InputActionEvent> > *const)(v2 + 64));
    HashValue = data::InputActionEvent::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::InputActionEvent const*,std::vector<data::InputActionEvent>>::operator++((__gnu_cxx::__normal_iterator<const data::InputActionEvent*,std::vector<data::InputActionEvent> > *const)(v2 + 64));
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

// Line 3645: range 000000001163215F-0000000011632D4C
bool __cdecl data::mapFromJson(const Json::Value *jval, data::RootActionGroupMap *m)
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
  std::vector<data::InputActionEvent> *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::vector<data::InputActionEvent> >,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v23[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 8 cit:3647 80 16 9 <unknown> 112 24 10 value:3657 176 32 8 key:3650 240 32 9 <unknown> "
                        "304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 40 13 tmp_jval:3646 576 40 13 key_j"
                        "val:3649 656 40 15 value_jval:3656";
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
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        3653);
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
      std::vector<data::InputActionEvent>::vector((std::vector<data::InputActionEvent> *const)(v3 + 112));
      if ( !data::vecFromJson((const Json::Value *)(v3 + 656), (data::InputActionEventList *)(v3 + 112)) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "mapFromJson",
          3660);
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
        v16 = std::unordered_map<std::string,std::vector<data::InputActionEvent>>::emplace<std::string&,std::vector<data::InputActionEvent>&>(
                m,
                (std::string *)(v3 + 176),
                (std::vector<data::InputActionEvent> *)(v3 + 112),
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
            "./src/json_data_auto/ConfigUI.cpp",
            "mapFromJson",
            3665);
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
      std::vector<data::InputActionEvent>::~vector((std::vector<data::InputActionEvent> *const)(v3 + 112));
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
      goto LABEL_32;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v21 = 1;
LABEL_32:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
  if ( v23 == (char *)v3 )
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

// Line 3674: range 0000000011632D4D-0000000011632FF4
int32_t __cdecl data::getMapHashValue(const data::RootActionGroupMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t VecHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<data::InputActionEvent> >,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::vector<data::InputActionEvent> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::vector<data::InputActionEvent> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:3675 64 8 16 __for_begin:3676 96 8 14 __for_end:3676";
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
  *(std::unordered_map<std::string,std::vector<data::InputActionEvent>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::vector<data::InputActionEvent>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::vector<data::InputActionEvent>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::vector<data::InputActionEvent>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::vector<data::InputActionEvent>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<data::InputActionEvent> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<data::InputActionEvent> >,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<data::InputActionEvent>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<data::InputActionEvent> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::vector<data::InputActionEvent>>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,std::vector<data::InputActionEvent> > >::type *)std::get<1ul,std::string const,std::vector<data::InputActionEvent>>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    VecHashValue = data::getVecHashValue(val);
    common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<data::InputActionEvent>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<data::InputActionEvent> >,false,true> *const)(v2 + 64));
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

// Line 3688: range 0000000011632FF6-0000000011633884
bool __cdecl data::DeviceAction::fromJson(data::DeviceAction *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_joypad; // rsi
  const Json::Value *keyboard_touch_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *keyboard_mouse_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *joypad_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::DeviceAction::fromJson;
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
    "keyboardTouch",
    (const std::allocator<char> *)(v2 + 48));
  keyboard_touch_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( keyboard_touch_ptr && !fromJson<std::string>(keyboard_touch_ptr, &this->keyboard_touch) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      3698);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[35])"fromJson for: keyboardTouch fails!");
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
      "keyboardMouse",
      (const std::allocator<char> *)(v2 + 64));
    keyboard_mouse_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( keyboard_mouse_ptr && !fromJson<std::string>(keyboard_mouse_ptr, &this->keyboard_mouse) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        3710);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[35])"fromJson for: keyboardMouse fails!");
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
        "joypad",
        (const std::allocator<char> *)(v2 + 80));
      p_joypad = (std::string *)(v2 + 352);
      joypad_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( joypad_ptr && (p_joypad = &this->joypad, !fromJson<std::string>(joypad_ptr, &this->joypad)) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "fromJson",
          3722);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[28])"fromJson for: joypad fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_joypad, &this->is_json_loaded);
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

// Line 3730: range 0000000011633886-00000000116339E7
int32_t __cdecl data::DeviceAction::getHashValue(const data::DeviceAction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3731";
  *(_QWORD *)(v2 + 16) = data::DeviceAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->keyboard_touch, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->keyboard_mouse, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->joypad, (int32_t *)(v2 + 32));
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

// Line 3739: range 00000000116339E8-00000000116347FB
bool __cdecl data::mapFromJson(const Json::Value *jval, data::StateActionMap *m)
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
  unsigned __int64 v13; // rax
  data::DeviceAction *v14; // r8
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<int const,data::DeviceAction>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  bool result; // al
  char v24[944]; // [rsp+20h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 8 key:3744 64 16 8 cit:3741 96 16 9 <unknown> 128 32 12 key_str:3745 192 32 9 <unknown> "
                        "256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 40 13 tmp_jval:3"
                        "740 592 40 13 key_jval:3743 672 40 15 value_jval:3756 752 104 10 value:3757";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959360;
  v5[536862738] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862742] = -218959360;
  v5[536862743] = 62194;
  v5[536862746] = -218103808;
  v5[536862747] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 512), jval);
  if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 512));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 512));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 64),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 96));
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 631) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 631) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 592, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 592));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 128);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 592), (std::string *)(v3 + 128)) )
    {
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        3748);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 256), (Json::Value_0 *)(v3 + 592));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 256));
      std::string::~string((void *)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v3 + 128), (int *)(v3 + 48), 1) )
    {
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        3753);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 672) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 64));
      Json::Value::Value((Json::Value *)(v3 + 672), v12);
      v13 = ((v3 + 752) >> 3) + 2147450880;
      *(_DWORD *)v13 = 0;
      *(_DWORD *)(v13 + 4) = 0;
      *(_DWORD *)(v13 + 8) = 0;
      *(_BYTE *)(v13 + 12) = 0;
      data::DeviceAction::DeviceAction((data::DeviceAction *const)(v3 + 752));
      if ( !data::DeviceAction::fromJson((data::DeviceAction *const)(v3 + 752), (const Json::Value *)(v3 + 672)) )
      {
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigUI.cpp",
          "mapFromJson",
          3760);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<int,data::DeviceAction>::emplace<int &,data::DeviceAction&>(
                m,
                (int *)(v3 + 48),
                (data::DeviceAction *)(v3 + 752),
                (int *)(v3 + 48),
                v14);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigUI.cpp",
            "mapFromJson",
            3765);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      data::DeviceAction::~DeviceAction((data::DeviceAction *const)(v3 + 752));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 672));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 128));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 592));
    v19 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
    v20 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    v21 = ((v3 + 752) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_DWORD *)(v21 + 4) = -117901064;
    *(_DWORD *)(v21 + 8) = -117901064;
    *(_BYTE *)(v21 + 12) = -8;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_36;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 64));
  }
  v22 = 1;
LABEL_36:
  *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 512));
  result = v2;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF806C) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3774: range 00000000116347FC-0000000011634ACC
int32_t __cdecl data::getMapHashValue(const data::StateActionMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<int const,data::DeviceAction>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  int32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<int const,data::DeviceAction> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:3775 64 8 16 __for_begin:3776 96 8 14 __for_end:3776";
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
  *(std::unordered_map<int,data::DeviceAction>::const_iterator *)(v2 + 64) = std::unordered_map<int,data::DeviceAction>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<int,data::DeviceAction>::const_iterator *)(v2 + 96) = std::unordered_map<int,data::DeviceAction>::end(map);
  while ( std::__detail::operator!=<std::pair<int const,data::DeviceAction>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,data::DeviceAction>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<int const,data::DeviceAction>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<int const,data::DeviceAction>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<int const,data::DeviceAction>,false,false> *const)(v2 + 64));
    key = std::get<0ul,int const,data::DeviceAction>(v7);
    val = (std::tuple_element<1,const std::pair<int const,data::DeviceAction> >::type *)std::get<1ul,int const,data::DeviceAction>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::DeviceAction::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<int const,data::DeviceAction>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<int const,data::DeviceAction>,false,false> *const)(v2 + 64));
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

// Line 3788: range 0000000011634ACE-00000000116355E8
bool __cdecl data::ConfigBaseContext::fromJson(data::ConfigBaseContext *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *action_groups_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *state_actions_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *enable_input_penetrate_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *enable_joypad_virtual_cursor_ptr; // [rsp+28h] [rbp-288h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigBaseContext::fromJson;
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
    "actionGroups",
    (const std::allocator<char> *)(v2 + 32));
  action_groups_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( action_groups_ptr && !data::mapFromJson(action_groups_ptr, &this->action_groups) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      3798);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[34])"fromJson for: actionGroups fails!");
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
      "stateActions",
      (const std::allocator<char> *)(v2 + 48));
    state_actions_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( state_actions_ptr && !data::mapFromJson(state_actions_ptr, &this->state_actions) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        3810);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[34])"fromJson for: stateActions fails!");
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
        "enableInputPenetrate",
        (const std::allocator<char> *)(v2 + 64));
      enable_input_penetrate_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( enable_input_penetrate_ptr && !fromJson<bool>(enable_input_penetrate_ptr, &this->enable_input_penetrate) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "fromJson",
          3822);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[42])"fromJson for: enableInputPenetrate fails!");
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
          "enableJoypadVirtualCursor",
          (const std::allocator<char> *)(v2 + 80));
        enable_joypad_virtual_cursor_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( enable_joypad_virtual_cursor_ptr
          && !fromJson<bool>(enable_joypad_virtual_cursor_ptr, &this->enable_joypad_virtual_cursor) )
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
            "./src/json_data_auto/ConfigUI.cpp",
            "fromJson",
            3834);
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[47])"fromJson for: enableJoypadVirtualCursor fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v6 = ((_BYTE)this + 114) & 7;
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

// Line 3842: range 00000000116355EA-00000000116357E4
int32_t __cdecl data::ConfigBaseContext::getHashValue(const data::ConfigBaseContext *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3843";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseContext::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->action_groups);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v6 = data::getMapHashValue(&this->state_actions);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->enable_input_penetrate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enable_input_penetrate, v2 + 32, &this->enable_input_penetrate);
  common::tools::HashUtils::appendHash(this->enable_input_penetrate, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this + 113) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->enable_joypad_virtual_cursor >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->enable_joypad_virtual_cursor >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->enable_joypad_virtual_cursor, v7, v8);
  common::tools::HashUtils::appendHash(this->enable_joypad_virtual_cursor, (int32_t *)(v2 + 32));
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

// Line 3852: range 00000000116357E5-000000001163642C
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigBaseContextMap *m)
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
  data::ConfigBaseContext *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigBaseContext>,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v23[880]; // [rsp+20h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 8 cit:3854 80 16 9 <unknown> 112 32 8 key:3857 176 32 9 <unknown> 240 32 9 <unknown> 30"
                        "4 32 9 <unknown> 368 32 9 <unknown> 432 40 13 tmp_jval:3853 512 40 13 key_jval:3856 592 40 15 va"
                        "lue_jval:3863 672 120 10 value:3864";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862737] = -218959360;
  v5[536862738] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862744] = -218103808;
  v5[536862745] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 432), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 432));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 432));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 512) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 551) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 39) & 7) >= *(_BYTE *)(((v3 + 551) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 512, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 512));
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 112);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 512), (std::string *)(v3 + 112)) )
    {
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        3860);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 176),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 240), (Json::Value_0 *)(v3 + 512));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 240));
      std::string::~string((void *)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 592) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 592), v11);
      v12 = ((v3 + 672) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      *(_WORD *)(v12 + 12) = 0;
      *(_BYTE *)(v12 + 14) = 0;
      data::ConfigBaseContext::ConfigBaseContext((data::ConfigBaseContext *const)(v3 + 672));
      if ( !data::ConfigBaseContext::fromJson(
              (data::ConfigBaseContext *const)(v3 + 672),
              (const Json::Value *)(v3 + 592)) )
      {
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigUI.cpp",
          "mapFromJson",
          3867);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<std::string,data::ConfigBaseContext>::emplace<std::string&,data::ConfigBaseContext&>(
                m,
                (std::string *)(v3 + 112),
                (data::ConfigBaseContext *)(v3 + 672),
                (std::string *)(v3 + 112),
                v13);
        if ( !v16.second )
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
            "./src/json_data_auto/ConfigUI.cpp",
            "mapFromJson",
            3872);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      data::ConfigBaseContext::~ConfigBaseContext((data::ConfigBaseContext *const)(v3 + 672));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 592));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 112));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 512));
    v18 = ((v3 + 512) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_DWORD *)(v20 + 4) = -117901064;
    *(_DWORD *)(v20 + 8) = -117901064;
    *(_WORD *)(v20 + 12) = -1800;
    *(_BYTE *)(v20 + 14) = -8;
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_32;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v21 = 1;
LABEL_32:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 432));
  if ( v23 == (char *)v3 )
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

// Line 3881: range 000000001163642D-00000000116366D4
int32_t __cdecl data::getMapHashValue(const data::ConfigBaseContextMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigBaseContext>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigBaseContext> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigBaseContext> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:3882 64 8 16 __for_begin:3883 96 8 14 __for_end:3883";
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
  *(std::unordered_map<std::string,data::ConfigBaseContext>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigBaseContext>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ConfigBaseContext>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConfigBaseContext>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigBaseContext>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigBaseContext>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigBaseContext>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigBaseContext>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigBaseContext>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ConfigBaseContext>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ConfigBaseContext> >::type *)std::get<1ul,std::string const,data::ConfigBaseContext>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigBaseContext::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigBaseContext>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigBaseContext>,false,true> *const)(v2 + 64));
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

// Line 3895: range 00000000116366D6-0000000011636F69
bool __cdecl data::ConfigUI::fromJson(data::ConfigUI *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigBaseContextMap *p_context; // rsi
  const Json::Value *input_events_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *action_groups_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *context_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigUI::fromJson;
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
    "inputEvents",
    (const std::allocator<char> *)(v2 + 48));
  input_events_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( input_events_ptr && !data::mapFromJson(input_events_ptr, &this->input_events) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      3905);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[33])"fromJson for: inputEvents fails!");
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
      "actionGroups",
      (const std::allocator<char> *)(v2 + 64));
    action_groups_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( action_groups_ptr && !data::mapFromJson(action_groups_ptr, &this->action_groups) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        3917);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[34])"fromJson for: actionGroups fails!");
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
        "context",
        (const std::allocator<char> *)(v2 + 80));
      p_context = (data::ConfigBaseContextMap *)(v2 + 352);
      context_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( context_ptr && (p_context = &this->context, !data::mapFromJson(context_ptr, &this->context)) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "fromJson",
          3929);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[29])"fromJson for: context fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_context, &this->is_json_loaded);
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

// Line 3937: range 0000000011636F6A-00000000116370E6
int32_t __cdecl data::ConfigUI::getHashValue(const data::ConfigUI *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3938";
  *(_QWORD *)(v2 + 16) = data::ConfigUI::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->input_events);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v6 = data::getMapHashValue(&this->action_groups);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::getMapHashValue(&this->context);
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

// Line 3947: range 00000000116370E8-000000001163882A
bool __cdecl data::ConfigUIPhotograph::fromJson(data::ConfigUIPhotograph *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *fov_max_ptr; // [rsp+18h] [rbp-5A8h]
  const Json::Value *fov_min_ptr; // [rsp+20h] [rbp-5A0h]
  const Json::Value *camera_shift_up_ptr; // [rsp+28h] [rbp-598h]
  const Json::Value *camera_shift_down_ptr; // [rsp+30h] [rbp-590h]
  const Json::Value *camera_shift_left_ptr; // [rsp+38h] [rbp-588h]
  const Json::Value *camera_shift_right_ptr; // [rsp+40h] [rbp-580h]
  const Json::Value *blur_distance_ptr; // [rsp+48h] [rbp-578h]
  const Json::Value *blur_range_ptr; // [rsp+50h] [rbp-570h]
  const Json::Value *blur_amount_ptr; // [rsp+58h] [rbp-568h]
  char v19[1376]; // [rsp+60h] [rbp-560h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1344LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "27 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 32 9 <unknown> 256 32 9 <un"
                        "known> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unk"
                        "nown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unkn"
                        "own> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <u"
                        "nknown> 1280 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigUIPhotograph::fromJson;
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
  v4[536862761] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "fovMax",
    (const std::allocator<char> *)(v2 + 48));
  fov_max_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( fov_max_ptr && !fromJson<float>(fov_max_ptr, &this->fov_max) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      3957);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[28])"fromJson for: fovMax fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 320),
      "fovMin",
      (const std::allocator<char> *)(v2 + 64));
    fov_min_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( fov_min_ptr && !fromJson<float>(fov_min_ptr, &this->fov_min) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        3969);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 384),
        (const char (*)[28])"fromJson for: fovMin fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        "cameraShiftUp",
        (const std::allocator<char> *)(v2 + 80));
      camera_shift_up_ptr = jsonValueFind(jval, (const std::string *)(v2 + 448));
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( camera_shift_up_ptr && !fromJson<float>(camera_shift_up_ptr, &this->camera_shift_up) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "fromJson",
          3981);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 512),
          (const char (*)[35])"fromJson for: cameraShiftUp fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 576),
          "cameraShiftDown",
          (const std::allocator<char> *)(v2 + 96));
        camera_shift_down_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
        std::string::~string((void *)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( camera_shift_down_ptr && !fromJson<float>(camera_shift_down_ptr, &this->camera_shift_down) )
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
            "./src/json_data_auto/ConfigUI.cpp",
            "fromJson",
            3993);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            (common::milog::MiLogStream *const)(v2 + 640),
            (const char (*)[37])"fromJson for: cameraShiftDown fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 704),
            "cameraShiftLeft",
            (const std::allocator<char> *)(v2 + 112));
          camera_shift_left_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
          std::string::~string((void *)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( camera_shift_left_ptr && !fromJson<float>(camera_shift_left_ptr, &this->camera_shift_left) )
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
              3u,
              "./src/json_data_auto/ConfigUI.cpp",
              "fromJson",
              4005);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 768),
              (const char (*)[37])"fromJson for: cameraShiftLeft fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 832),
              "cameraShiftRight",
              (const std::allocator<char> *)(v2 + 128));
            camera_shift_right_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
            std::string::~string((void *)(v2 + 832));
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( camera_shift_right_ptr && !fromJson<float>(camera_shift_right_ptr, &this->camera_shift_right) )
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
                "./src/json_data_auto/ConfigUI.cpp",
                "fromJson",
                4017);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[38])"fromJson for: cameraShiftRight fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 960),
                "blurDistance",
                (const std::allocator<char> *)(v2 + 144));
              blur_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
              std::string::~string((void *)(v2 + 960));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( blur_distance_ptr && !fromJson<float>(blur_distance_ptr, &this->blur_distance) )
              {
                *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1024, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1024),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigUI.cpp",
                  "fromJson",
                  4029);
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)(v2 + 1024),
                  (const char (*)[34])"fromJson for: blurDistance fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1088),
                  "blurRange",
                  (const std::allocator<char> *)(v2 + 160));
                blur_range_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
                std::string::~string((void *)(v2 + 1088));
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( blur_range_ptr && !fromJson<float>(blur_range_ptr, &this->blur_range) )
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
                    "./src/json_data_auto/ConfigUI.cpp",
                    "fromJson",
                    4041);
                  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    (common::milog::MiLogStream *const)(v2 + 1152),
                    (const char (*)[31])"fromJson for: blurRange fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1216),
                    "blurAmount",
                    (const std::allocator<char> *)(v2 + 176));
                  blur_amount_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
                  std::string::~string((void *)(v2 + 1216));
                  *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( blur_amount_ptr && !fromJson<float>(blur_amount_ptr, &this->blur_amount) )
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
                      "./src/json_data_auto/ConfigUI.cpp",
                      "fromJson",
                      4053);
                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      (common::milog::MiLogStream *const)(v2 + 1280),
                      (const char (*)[32])"fromJson for: blurAmount fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                    v5 = 0;
                  }
                  else
                  {
                    v6 = ((_BYTE)this + 36) & 7;
                    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                    if ( (_BYTE)v7 )
                      __asan_report_store1(&this->is_json_loaded, v6, v7);
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
  v8 = v5;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A4) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1344LL, v19);
  }
  return v8;
};

// Line 4061: range 000000001163882C-0000000011638C25
int32_t __cdecl data::ConfigUIPhotograph::getHashValue(const data::ConfigUIPhotograph *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:4062";
  *(_QWORD *)(v2 + 16) = data::ConfigUIPhotograph::getHashValue;
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
  common::tools::HashUtils::appendHash(this->fov_max, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fov_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fov_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fov_min);
  }
  common::tools::HashUtils::appendHash(this->fov_min, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_shift_up >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->camera_shift_up);
  }
  common::tools::HashUtils::appendHash(this->camera_shift_up, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_down >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_shift_down >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->camera_shift_down);
  }
  common::tools::HashUtils::appendHash(this->camera_shift_down, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_left >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_shift_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->camera_shift_left);
  }
  common::tools::HashUtils::appendHash(this->camera_shift_left, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_right >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_shift_right >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->camera_shift_right);
  }
  common::tools::HashUtils::appendHash(this->camera_shift_right, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->blur_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blur_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->blur_distance);
  }
  common::tools::HashUtils::appendHash(this->blur_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->blur_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blur_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->blur_range);
  }
  common::tools::HashUtils::appendHash(this->blur_range, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->blur_amount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blur_amount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->blur_amount);
  }
  common::tools::HashUtils::appendHash(this->blur_amount, (int32_t *)(v2 + 32));
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

// Line 4077: range 0000000011638C26-0000000011639740
bool __cdecl data::TouchpadFocusAccelerationSigmoidPara::fromJson(
        data::TouchpadFocusAccelerationSigmoidPara *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *phase_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *slope_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *amplitude_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *clip_ptr; // [rsp+28h] [rbp-288h]
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
  *(_QWORD *)(v2 + 16) = data::TouchpadFocusAccelerationSigmoidPara::fromJson;
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
    "phase",
    (const std::allocator<char> *)(v2 + 32));
  phase_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( phase_ptr && !fromJson<float>(phase_ptr, &this->phase) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      4087);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[27])"fromJson for: phase fails!");
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
      "slope",
      (const std::allocator<char> *)(v2 + 48));
    slope_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( slope_ptr && !fromJson<float>(slope_ptr, &this->slope) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        4099);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[27])"fromJson for: slope fails!");
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
        "amplitude",
        (const std::allocator<char> *)(v2 + 64));
      amplitude_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( amplitude_ptr && !fromJson<float>(amplitude_ptr, &this->amplitude) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "fromJson",
          4111);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[31])"fromJson for: amplitude fails!");
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
          "clip",
          (const std::allocator<char> *)(v2 + 80));
        clip_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( clip_ptr && !fromJson<float>(clip_ptr, &this->clip) )
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
            "./src/json_data_auto/ConfigUI.cpp",
            "fromJson",
            4123);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[26])"fromJson for: clip fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v6 = ((_BYTE)this + 16) & 7;
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

// Line 4131: range 0000000011639742-00000000116399A6
int32_t __cdecl data::TouchpadFocusAccelerationSigmoidPara::getHashValue(
        const data::TouchpadFocusAccelerationSigmoidPara *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:4132";
  *(_QWORD *)(v2 + 16) = data::TouchpadFocusAccelerationSigmoidPara::getHashValue;
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
  common::tools::HashUtils::appendHash(this->phase, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->slope >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slope >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->slope);
  }
  common::tools::HashUtils::appendHash(this->slope, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->amplitude >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->amplitude >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->amplitude);
  }
  common::tools::HashUtils::appendHash(this->amplitude, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->clip >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clip >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->clip);
  }
  common::tools::HashUtils::appendHash(this->clip, (int32_t *)(v2 + 32));
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

// Line 4141: range 00000000116399A7-000000001163A8E8
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigContextInputEventWhiteListMap *m)
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
  unsigned __int64 v13; // rax
  std::vector<std::string> *v14; // r8
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::InputEventType,std::vector<std::string> >,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  char v26[912]; // [rsp+20h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 8 key:4146 48 8 9 <unknown> 80 8 9 <unknown> 112 16 8 cit:4143 144 16 9 <unknown> 176 24"
                        " 10 value:4159 240 32 12 key_str:4147 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 4"
                        "96 32 9 <unknown> 560 32 9 <unknown> 624 40 13 tmp_jval:4142 704 40 13 key_jval:4145 784 40 15 value_jval:4158";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -234881024;
  v5[536862741] = -218959118;
  v5[536862743] = -218959360;
  v5[536862744] = 62194;
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 624), jval);
  if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 624));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 624));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 112),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 144));
    *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 704) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 743) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 743) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 704, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 704));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 240);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 704), (std::string *)(v3 + 240)) )
    {
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        4150);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 304),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 368, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 368), (Json::Value_0 *)(v3 + 704));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 368));
      std::string::~string((void *)(v3 + 368));
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( !data::enumStrToVal((const std::string *)(v3 + 240), (data::InputEventType *)(v3 + 32)) )
    {
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        4155);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[21])"enumStrToVal fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 240));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 784) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 112));
      Json::Value::Value((Json::Value *)(v3 + 784), v12);
      v13 = ((v3 + 176) >> 3) + 2147450880;
      *(_WORD *)v13 = 0;
      *(_BYTE *)(v13 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 176));
      if ( !data::arrFromJson((const Json::Value *)(v3 + 784), (data::StringArray *)(v3 + 176)) )
      {
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigUI.cpp",
          "mapFromJson",
          4162);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 496),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        v16 = (__int64)data::enumValToStr((data::InputEventType)*(_DWORD *)(v3 + 32));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8(v3 + 48, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 48) = v16;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)(v3 + 48));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v17 = 0;
      }
      else
      {
        v18 = std::unordered_map<data::InputEventType,std::vector<std::string>>::emplace<data::InputEventType&,std::vector<std::string>&>(
                m,
                (data::InputEventType *)(v3 + 32),
                (std::vector<std::string> *)(v3 + 176),
                (data::InputEventType *)(v3 + 32),
                v14);
        if ( !v18.second )
        {
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 560, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 560),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigUI.cpp",
            "mapFromJson",
            4167);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 560),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v20 = (__int64)data::enumValToStr((data::InputEventType)*(_DWORD *)(v3 + 32));
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
            v20 = __asan_report_store8(v3 + 80, "key duplicate: ");
          *(_QWORD *)(v3 + 80) = v20;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v3 + 80));
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 176));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 784));
      v9 = v17 == 1;
    }
    std::string::~string((void *)(v3 + 240));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 704));
    v21 = ((v3 + 704) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v22 = ((v3 + 784) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_BYTE *)(v22 + 4) = -8;
    v23 = ((v3 + 176) >> 3) + 2147450880;
    *(_WORD *)v23 = -1800;
    *(_BYTE *)(v23 + 2) = -8;
    if ( !v9 )
    {
      v24 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 112));
  }
  v24 = 1;
LABEL_44:
  *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
  if ( v24 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 624));
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v2;
};

// Line 4176: range 000000001163A8E9-000000001163ABB9
int32_t __cdecl data::getMapHashValue(const data::ConfigContextInputEventWhiteListMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::InputEventType,std::vector<std::string> >,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::InputEventType,std::vector<std::string> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::InputEventType,std::vector<std::string> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:4177 64 8 16 __for_begin:4178 96 8 14 __for_end:4178";
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
  *(std::unordered_map<data::InputEventType,std::vector<std::string>>::const_iterator *)(v2 + 64) = std::unordered_map<data::InputEventType,std::vector<std::string>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::InputEventType,std::vector<std::string>>::const_iterator *)(v2 + 96) = std::unordered_map<data::InputEventType,std::vector<std::string>>::end(map);
  while ( std::__detail::operator!=<std::pair<data::InputEventType const,std::vector<std::string>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::InputEventType,std::vector<std::string> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::InputEventType,std::vector<std::string> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::InputEventType const,std::vector<std::string>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::InputEventType,std::vector<std::string> >,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::InputEventType const,std::vector<std::string>>(v7);
    val = (std::tuple_element<1,const std::pair<const data::InputEventType,std::vector<std::string> > >::type *)std::get<1ul,data::InputEventType const,std::vector<std::string>>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    ArrHashValue = data::getArrHashValue(val);
    common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::InputEventType const,std::vector<std::string>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::InputEventType,std::vector<std::string> >,false,false> *const)(v2 + 64));
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

// Line 4189: range 000000001163ABBA-000000001163AE96
bool __cdecl data::vecFromJson(const Json::Value *jval, data::InputEventList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  data::InputEventList *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 48 4 9 elem:4195 64 32 9 <unknown>";
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
      if ( !fromJson<data::InputEventType>(elem_jval, (data::InputEventType *)(v3 + 48)) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "vecFromJson",
          4198);
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
        std::vector<data::InputEventType>::push_back(
          va,
          (const std::vector<data::InputEventType>::value_type *)(v3 + 48));
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

// Line 4208: range 000000001163AE97-000000001163B118
int32_t __cdecl data::getVecHashValue(const data::InputEventList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InputEventType *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:4209 64 8 16 __for_begin:4210 96 8 14 __for_end:4210";
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
  *(std::vector<data::InputEventType>::const_iterator *)(v2 + 64) = std::vector<data::InputEventType>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::InputEventType>::const_iterator *)(v2 + 96) = std::vector<data::InputEventType>::end(vec);
  while ( __gnu_cxx::operator!=<data::InputEventType const*,std::vector<data::InputEventType>>(
            (const __gnu_cxx::__normal_iterator<const data::InputEventType*,std::vector<data::InputEventType> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::InputEventType*,std::vector<data::InputEventType> > *)(v2 + 96)) )
  {
    v5 = (data::InputEventType *)__gnu_cxx::__normal_iterator<data::InputEventType const*,std::vector<data::InputEventType>>::operator*((const __gnu_cxx::__normal_iterator<const data::InputEventType*,std::vector<data::InputEventType> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::InputEventType const*,std::vector<data::InputEventType>>::operator++((__gnu_cxx::__normal_iterator<const data::InputEventType*,std::vector<data::InputEventType> > *const)(v2 + 64));
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

// Line 4219: range 000000001163B11A-000000001163B6FD
bool __cdecl data::ConfigInputEventCheckWhiteList::fromJson(
        data::ConfigInputEventCheckWhiteList *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigContextInputEventWhiteListMap *p_config_context_input_event_white_list_map; // rsi
  const Json::Value *global_white_list_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *config_context_input_event_white_list_map_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigInputEventCheckWhiteList::fromJson;
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
    "globalWhiteList",
    (const std::allocator<char> *)(v2 + 32));
  global_white_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( global_white_list_ptr && !data::vecFromJson(global_white_list_ptr, &this->global_white_list) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      4229);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[37])"fromJson for: globalWhiteList fails!");
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
      "configContextInputEventWhiteListMap",
      (const std::allocator<char> *)(v2 + 48));
    p_config_context_input_event_white_list_map = (data::ConfigContextInputEventWhiteListMap *)(v2 + 192);
    config_context_input_event_white_list_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( config_context_input_event_white_list_map_ptr
      && (p_config_context_input_event_white_list_map = &this->config_context_input_event_white_list_map,
          !data::mapFromJson(
             config_context_input_event_white_list_map_ptr,
             &this->config_context_input_event_white_list_map)) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        4241);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[57])"fromJson for: configContextInputEventWhiteListMap fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_config_context_input_event_white_list_map, &this->is_json_loaded);
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

// Line 4249: range 000000001163B6FE-000000001163B859
int32_t __cdecl data::ConfigInputEventCheckWhiteList::getHashValue(
        const data::ConfigInputEventCheckWhiteList *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:4250";
  *(_QWORD *)(v2 + 16) = data::ConfigInputEventCheckWhiteList::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->global_white_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->config_context_input_event_white_list_map);
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

// Line 4258: range 000000001163B85A-000000001163BBAF
bool __cdecl data::ConfigInputCheck::fromJson(data::ConfigInputCheck *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const Json::Value *v5; // rsi
  bool result; // al
  const Json::Value *config_input_event_check_white_list_ptr; // [rsp+18h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigInputCheck::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "configInputEventCheckWhiteList",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (const Json::Value *)(v2 + 64);
  config_input_event_check_white_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( config_input_event_check_white_list_ptr
    && (v5 = config_input_event_check_white_list_ptr,
        !data::ConfigInputEventCheckWhiteList::fromJson(
           &this->config_input_event_check_white_list,
           config_input_event_check_white_list_ptr)) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      4268);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[52])"fromJson for: configInputEventCheckWhiteList fails!");
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

// Line 4276: range 000000001163BBB0-000000001163BCEA
int32_t __cdecl data::ConfigInputCheck::getHashValue(const data::ConfigInputCheck *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:4277";
  *(_QWORD *)(v2 + 16) = data::ConfigInputCheck::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigInputEventCheckWhiteList::getHashValue(&this->config_input_event_check_white_list);
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

// Line 4284: range 000000001163BCEC-000000001163E5D2
bool __cdecl data::ConfigUIGlobal::fromJson(data::ConfigUIGlobal *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  const Json::Value *v6; // rsi
  bool v7; // bl
  const Json::Value *input_actions_ptr; // [rsp+10h] [rbp-9C0h]
  const Json::Value *input_events_ptr; // [rsp+18h] [rbp-9B8h]
  const Json::Value *action_groups_ptr; // [rsp+20h] [rbp-9B0h]
  const Json::Value *input_modes_ptr; // [rsp+28h] [rbp-9A8h]
  const Json::Value *joypad_change_view_scale_ptr; // [rsp+30h] [rbp-9A0h]
  const Json::Value *joypad_long_press_duration_ptr; // [rsp+38h] [rbp-998h]
  const Json::Value *joypad_sense_scales_ptr; // [rsp+40h] [rbp-990h]
  const Json::Value *joypad_focus_sense_scales_ptr; // [rsp+48h] [rbp-988h]
  const Json::Value *mouse_sense_scales_ptr; // [rsp+50h] [rbp-980h]
  const Json::Value *mouse_focus_sense_scales_ptr; // [rsp+58h] [rbp-978h]
  const Json::Value *touchpad_sense_scales_ptr; // [rsp+60h] [rbp-970h]
  const Json::Value *touchpad_focus_sense_scales_ptr; // [rsp+68h] [rbp-968h]
  const Json::Value *touchpad_focus_acceleration_scales_ptr; // [rsp+70h] [rbp-960h]
  const Json::Value *touchpad_focus_acceleration_para_ptr; // [rsp+78h] [rbp-958h]
  const Json::Value *config_uiphotograph_ptr; // [rsp+80h] [rbp-950h]
  const Json::Value *config_input_check_ptr; // [rsp+88h] [rbp-948h]
  char v26[2368]; // [rsp+90h] [rbp-940h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2336LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "48 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608"
                        " 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 "
                        "32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 12"
                        "48 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown"
                        "> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unk"
                        "nown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 "
                        "<unknown> 2208 32 9 <unknown> 2272 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigUIGlobal::fromJson;
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
  v4[536862792] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "inputActions",
    (const std::allocator<char> *)(v2 + 32));
  input_actions_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( input_actions_ptr && !data::mapFromJson(input_actions_ptr, &this->input_actions) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      4294);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 352),
      (const char (*)[34])"fromJson for: inputActions fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 416),
      "inputEvents",
      (const std::allocator<char> *)(v2 + 48));
    input_events_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( input_events_ptr && !data::mapFromJson(input_events_ptr, &this->input_events) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        4306);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 480),
        (const char (*)[33])"fromJson for: inputEvents fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 544),
        "actionGroups",
        (const std::allocator<char> *)(v2 + 64));
      action_groups_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( action_groups_ptr && !data::mapFromJson(action_groups_ptr, &this->action_groups) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "fromJson",
          4318);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v2 + 608),
          (const char (*)[34])"fromJson for: actionGroups fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 672),
          "inputModes",
          (const std::allocator<char> *)(v2 + 80));
        input_modes_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
        std::string::~string((void *)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( input_modes_ptr && !data::mapFromJson(input_modes_ptr, &this->input_modes) )
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
            "./src/json_data_auto/ConfigUI.cpp",
            "fromJson",
            4330);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 736),
            (const char (*)[32])"fromJson for: inputModes fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 800),
            "joypadChangeViewScale",
            (const std::allocator<char> *)(v2 + 96));
          joypad_change_view_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
          std::string::~string((void *)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( joypad_change_view_scale_ptr
            && !data::Point2D::fromJson(&this->joypad_change_view_scale, joypad_change_view_scale_ptr) )
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
              "./src/json_data_auto/ConfigUI.cpp",
              "fromJson",
              4342);
            common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)(v2 + 864),
              (const char (*)[43])"fromJson for: joypadChangeViewScale fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 928),
              "joypadLongPressDuration",
              (const std::allocator<char> *)(v2 + 112));
            joypad_long_press_duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
            std::string::~string((void *)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( joypad_long_press_duration_ptr
              && !fromJson<float>(joypad_long_press_duration_ptr, &this->joypad_long_press_duration) )
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
                "./src/json_data_auto/ConfigUI.cpp",
                "fromJson",
                4354);
              common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                (common::milog::MiLogStream *const)(v2 + 992),
                (const char (*)[45])"fromJson for: joypadLongPressDuration fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1056),
                "joypadSenseScales",
                (const std::allocator<char> *)(v2 + 128));
              joypad_sense_scales_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1056));
              std::string::~string((void *)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( joypad_sense_scales_ptr && !data::vecFromJson(joypad_sense_scales_ptr, &this->joypad_sense_scales) )
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
                  "./src/json_data_auto/ConfigUI.cpp",
                  "fromJson",
                  4366);
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  (common::milog::MiLogStream *const)(v2 + 1120),
                  (const char (*)[39])"fromJson for: joypadSenseScales fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1184),
                  "joypadFocusSenseScales",
                  (const std::allocator<char> *)(v2 + 144));
                joypad_focus_sense_scales_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1184));
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( joypad_focus_sense_scales_ptr
                  && !data::vecFromJson(joypad_focus_sense_scales_ptr, &this->joypad_focus_sense_scales) )
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
                    "./src/json_data_auto/ConfigUI.cpp",
                    "fromJson",
                    4378);
                  common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    (common::milog::MiLogStream *const)(v2 + 1248),
                    (const char (*)[44])"fromJson for: joypadFocusSenseScales fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1312),
                    "mouseSenseScales",
                    (const std::allocator<char> *)(v2 + 160));
                  mouse_sense_scales_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1312));
                  std::string::~string((void *)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( mouse_sense_scales_ptr && !data::vecFromJson(mouse_sense_scales_ptr, &this->mouse_sense_scales) )
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
                      "./src/json_data_auto/ConfigUI.cpp",
                      "fromJson",
                      4390);
                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      (common::milog::MiLogStream *const)(v2 + 1376),
                      (const char (*)[38])"fromJson for: mouseSenseScales fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1440),
                      "mouseFocusSenseScales",
                      (const std::allocator<char> *)(v2 + 176));
                    mouse_focus_sense_scales_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1440));
                    std::string::~string((void *)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( mouse_focus_sense_scales_ptr
                      && !data::vecFromJson(mouse_focus_sense_scales_ptr, &this->mouse_focus_sense_scales) )
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
                        "./src/json_data_auto/ConfigUI.cpp",
                        "fromJson",
                        4402);
                      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                        (common::milog::MiLogStream *const)(v2 + 1504),
                        (const char (*)[43])"fromJson for: mouseFocusSenseScales fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1568),
                        "touchpadSenseScales",
                        (const std::allocator<char> *)(v2 + 192));
                      touchpad_sense_scales_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1568));
                      std::string::~string((void *)(v2 + 1568));
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( touchpad_sense_scales_ptr
                        && !data::vecFromJson(touchpad_sense_scales_ptr, &this->touchpad_sense_scales) )
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
                          "./src/json_data_auto/ConfigUI.cpp",
                          "fromJson",
                          4414);
                        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                          (common::milog::MiLogStream *const)(v2 + 1632),
                          (const char (*)[41])"fromJson for: touchpadSenseScales fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1696),
                          "touchpadFocusSenseScales",
                          (const std::allocator<char> *)(v2 + 208));
                        touchpad_focus_sense_scales_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1696));
                        std::string::~string((void *)(v2 + 1696));
                        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( touchpad_focus_sense_scales_ptr
                          && !data::vecFromJson(touchpad_focus_sense_scales_ptr, &this->touchpad_focus_sense_scales) )
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
                            "./src/json_data_auto/ConfigUI.cpp",
                            "fromJson",
                            4426);
                          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                            (common::milog::MiLogStream *const)(v2 + 1760),
                            (const char (*)[46])"fromJson for: touchpadFocusSenseScales fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1824),
                            "touchpadFocusAccelerationScales",
                            (const std::allocator<char> *)(v2 + 224));
                          touchpad_focus_acceleration_scales_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1824));
                          std::string::~string((void *)(v2 + 1824));
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( touchpad_focus_acceleration_scales_ptr
                            && !data::vecFromJson(
                                  touchpad_focus_acceleration_scales_ptr,
                                  &this->touchpad_focus_acceleration_scales) )
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
                              "./src/json_data_auto/ConfigUI.cpp",
                              "fromJson",
                              4438);
                            common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                              (common::milog::MiLogStream *const)(v2 + 1888),
                              (const char (*)[53])"fromJson for: touchpadFocusAccelerationScales fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 1952),
                              "touchpadFocusAccelerationPara",
                              (const std::allocator<char> *)(v2 + 240));
                            touchpad_focus_acceleration_para_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1952));
                            std::string::~string((void *)(v2 + 1952));
                            *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( touchpad_focus_acceleration_para_ptr
                              && !data::TouchpadFocusAccelerationSigmoidPara::fromJson(
                                    &this->touchpad_focus_acceleration_para,
                                    touchpad_focus_acceleration_para_ptr) )
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
                                "./src/json_data_auto/ConfigUI.cpp",
                                "fromJson",
                                4450);
                              common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                                (common::milog::MiLogStream *const)(v2 + 2016),
                                (const char (*)[51])"fromJson for: touchpadFocusAccelerationPara fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2080),
                                "configUIPhotograph",
                                (const std::allocator<char> *)(v2 + 256));
                              config_uiphotograph_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2080));
                              std::string::~string((void *)(v2 + 2080));
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( config_uiphotograph_ptr
                                && !data::ConfigUIPhotograph::fromJson(
                                      &this->config_uiphotograph,
                                      config_uiphotograph_ptr) )
                              {
                                *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2144) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2144, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2144),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ConfigUI.cpp",
                                  "fromJson",
                                  4462);
                                common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2144),
                                  (const char (*)[40])"fromJson for: configUIPhotograph fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 272);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2208),
                                  "configInputCheck",
                                  (const std::allocator<char> *)(v2 + 272));
                                v6 = (const Json::Value *)(v2 + 2208);
                                config_input_check_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2208));
                                std::string::~string((void *)(v2 + 2208));
                                *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( config_input_check_ptr
                                  && (v6 = config_input_check_ptr,
                                      !data::ConfigInputCheck::fromJson(
                                         &this->config_input_check,
                                         config_input_check_ptr)) )
                                {
                                  *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2272) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2272, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2272),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ConfigUI.cpp",
                                    "fromJson",
                                    4474);
                                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2272),
                                    (const char (*)[38])"fromJson for: configInputCheck fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                                  v5 = 0;
                                }
                                else
                                {
                                  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                                    __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
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
  v7 = v5;
  if ( v26 == (char *)v2 )
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8108) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8110) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8118) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8120) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2336LL, v26);
  }
  return v7;
};

// Line 4482: range 000000001163E5D4-000000001163E93B
int32_t __cdecl data::ConfigUIGlobal::getHashValue(const data::ConfigUIGlobal *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t v8; // eax
  int32_t HashValue; // eax
  int32_t VecHashValue; // eax
  int32_t v11; // eax
  int32_t v12; // eax
  int32_t v13; // eax
  int32_t v14; // eax
  int32_t v15; // eax
  int32_t v16; // eax
  int32_t v17; // eax
  int32_t v18; // eax
  int32_t v19; // eax
  int32_t result; // eax
  char v21[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:4483";
  *(_QWORD *)(v2 + 16) = data::ConfigUIGlobal::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->input_actions);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v6 = data::getMapHashValue(&this->input_events);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::getMapHashValue(&this->action_groups);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::getMapHashValue(&this->input_modes);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  HashValue = data::Point2D::getHashValue(&this->joypad_change_view_scale);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->joypad_long_press_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->joypad_long_press_duration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->joypad_long_press_duration);
  }
  common::tools::HashUtils::appendHash(this->joypad_long_press_duration, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->joypad_sense_scales);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v11 = data::getVecHashValue(&this->joypad_focus_sense_scales);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  v12 = data::getVecHashValue(&this->mouse_sense_scales);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  v13 = data::getVecHashValue(&this->mouse_focus_sense_scales);
  common::tools::HashUtils::appendHash(v13, (int32_t *)(v2 + 32));
  v14 = data::getVecHashValue(&this->touchpad_sense_scales);
  common::tools::HashUtils::appendHash(v14, (int32_t *)(v2 + 32));
  v15 = data::getVecHashValue(&this->touchpad_focus_sense_scales);
  common::tools::HashUtils::appendHash(v15, (int32_t *)(v2 + 32));
  v16 = data::getVecHashValue(&this->touchpad_focus_acceleration_scales);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  v17 = data::TouchpadFocusAccelerationSigmoidPara::getHashValue(&this->touchpad_focus_acceleration_para);
  common::tools::HashUtils::appendHash(v17, (int32_t *)(v2 + 32));
  v18 = data::ConfigUIPhotograph::getHashValue(&this->config_uiphotograph);
  common::tools::HashUtils::appendHash(v18, (int32_t *)(v2 + 32));
  v19 = data::ConfigInputCheck::getHashValue(&this->config_input_check);
  common::tools::HashUtils::appendHash(v19, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v21 == (char *)v2 )
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

// Line 4504: range 000000001163E93C-000000001163EC62
const char *__cdecl data::enumValToStr(data::MainPageUIDisableType e)
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
    case NONE_18:
      result = "NONE";
      break;
    case EASY_TOUCH:
      result = "EASY_TOUCH";
      break;
    case ACTION_PANEL:
      result = "ACTION_PANEL";
      break;
    case TEAM_BTN:
      result = "TEAM_BTN";
      break;
    case MESSAGE_TIPS:
      result = "MESSAGE_TIPS";
      break;
    case INTEE_PANEL:
      result = "INTEE_PANEL";
      break;
    case AIM_CONTAINER:
      result = "AIM_CONTAINER";
      break;
    case SELF_RTT:
      result = "SELF_RTT";
      break;
    case TOP_BTNS:
      result = "TOP_BTNS";
      break;
    case MAP_INFO:
      result = "MAP_INFO";
      break;
    case CHAT_INFO:
      result = "CHAT_INFO";
      break;
    case MOVE:
      result = "MOVE";
      break;
    case GAME_INFO:
      result = "GAME_INFO";
      break;
    case DIALOG_0:
      result = "DIALOG";
      break;
    case MAIN_BTN:
      result = "MAIN_BTN";
      break;
    case HP_BAR:
      result = "HP_BAR";
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumValToStr",
        4540);
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

// Line 4546: range 000000001163EC63-000000001163FCA8
bool __cdecl data::enumStrToVal(const std::string *s, data::MainPageUIDisableType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::MainPageUIDisableType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MainPageUIDisableType> >::pointer v10; // rax
  data::MainPageUIDisableType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::MainPageUIDisableType *ea; // [rsp+10h] [rbp-540h]
  char v16[1328]; // [rsp+20h] [rbp-530h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "23 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 8 7 it:4571 352 8 9 <unknown> 384 32 9 <unknown> 448 32 9 "
                        "<unknown> 512 640 9 <unknown>";
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
  v4[536862728] = -234556924;
  v4[536862729] = -234556924;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "enumStrToVal",
      4549);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MainPageUIDisableType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MainPageUIDisableType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[5],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 512),
        (const char (*)[5])"NONE",
        (data::MainPageUIDisableType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[11],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 552),
        (const char (*)[11])"EASY_TOUCH",
        (data::MainPageUIDisableType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "EASY_TOUCH");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[13],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 592),
        (const char (*)[13])"ACTION_PANEL",
        (data::MainPageUIDisableType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "ACTION_PANEL");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[9],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 632),
        (const char (*)[9])"TEAM_BTN",
        (data::MainPageUIDisableType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "TEAM_BTN");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[13],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 672),
        (const char (*)[13])"MESSAGE_TIPS",
        (data::MainPageUIDisableType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "MESSAGE_TIPS");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[12],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 712),
        (const char (*)[12])"INTEE_PANEL",
        (data::MainPageUIDisableType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "INTEE_PANEL");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[14],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 752),
        (const char (*)[14])"AIM_CONTAINER",
        (data::MainPageUIDisableType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "AIM_CONTAINER");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[9],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 792),
        (const char (*)[9])"SELF_RTT",
        (data::MainPageUIDisableType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "SELF_RTT");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[9],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 832),
        (const char (*)[9])"TOP_BTNS",
        (data::MainPageUIDisableType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "TOP_BTNS");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[9],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 872),
        (const char (*)[9])"MAP_INFO",
        (data::MainPageUIDisableType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "MAP_INFO");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[10],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 912),
        (const char (*)[10])"CHAT_INFO",
        (data::MainPageUIDisableType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "CHAT_INFO");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[5],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 952),
        (const char (*)[5])"MOVE",
        (data::MainPageUIDisableType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "MOVE");
      *(_DWORD *)(v2 + 256) = 12;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[10],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 992),
        (const char (*)[10])"GAME_INFO",
        (data::MainPageUIDisableType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "GAME_INFO");
      *(_DWORD *)(v2 + 272) = 13;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[7],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 1032),
        (const char (*)[7])"DIALOG",
        (data::MainPageUIDisableType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "DIALOG");
      *(_DWORD *)(v2 + 288) = 14;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[9],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 1072),
        (const char (*)[9])"MAIN_BTN",
        (data::MainPageUIDisableType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "MAIN_BTN");
      *(_DWORD *)(v2 + 304) = 15;
      std::pair<std::string const,data::MainPageUIDisableType>::pair<char const(&)[7],data::MainPageUIDisableType,true>(
        (std::pair<const std::string,data::MainPageUIDisableType> *const)(v2 + 1112),
        (const char (*)[7])"HP_BAR",
        (data::MainPageUIDisableType *)(v2 + 304));
      std::allocator<std::pair<std::string const,data::MainPageUIDisableType>>::allocator((std::allocator<std::pair<const std::string,data::MainPageUIDisableType> > *const)(v2 + 48));
      std::map<std::string,data::MainPageUIDisableType>::map(
        &data::enumStrToVal(std::string const&,data::MainPageUIDisableType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MainPageUIDisableType> >)__PAIR128__(16LL, v2 + 512),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::MainPageUIDisableType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MainPageUIDisableType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MainPageUIDisableType>::~map,
        &data::enumStrToVal(std::string const&,data::MainPageUIDisableType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MainPageUIDisableType>>::~allocator((std::allocator<std::pair<const std::string,data::MainPageUIDisableType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MainPageUIDisableType> *)(v2 + 1152);
            i != (std::pair<const std::string,data::MainPageUIDisableType> *)(v2 + 512);
            std::pair<std::string const,data::MainPageUIDisableType>::~pair(i) )
      {
        --i;
      }
      e = (data::MainPageUIDisableType *)640;
      __asan_poison_stack_memory(v2 + 512, 640LL);
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
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, e);
    *(std::map<std::string,data::MainPageUIDisableType>::iterator *)(v2 + 320) = std::map<std::string,data::MainPageUIDisableType>::find(
                                                                                   &data::enumStrToVal(std::string const&,data::MainPageUIDisableType &)::m,
                                                                                   s);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, s);
    *(std::map<std::string,data::MainPageUIDisableType>::iterator *)(v2 + 352) = std::map<std::string,data::MainPageUIDisableType>::end(&data::enumStrToVal(std::string const&,data::MainPageUIDisableType &)::m);
    v7 = (char *)(v2 + 352);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MainPageUIDisableType> >::_Self *)(v2 + 320),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MainPageUIDisableType> >::_Self *)(v2 + 352));
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "enumStrToVal",
        4574);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::MainPageUIDisableType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MainPageUIDisableType> > *const)(v2 + 320));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862737) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450940 - (((_DWORD)v4 + 2147450948) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v16);
  }
  return v13;
};

// Line 4582: range 000000001163FCA9-000000001163FD7B
const char *__cdecl data::getDescription(data::MainPageUIDisableType e)
{
  const char *result; // rax

  switch ( e )
  {
    case NONE_18:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case EASY_TOUCH:
      result = (const char *)&unk_1A822300;
      break;
    case ACTION_PANEL:
      result = (const char *)&unk_1A822340;
      break;
    case TEAM_BTN:
      result = (const char *)&unk_1A822380;
      break;
    case MESSAGE_TIPS:
      result = (const char *)&unk_1A8223C0;
      break;
    case INTEE_PANEL:
      result = (const char *)&unk_1A822400;
      break;
    case AIM_CONTAINER:
      result = (const char *)&unk_1A822440;
      break;
    case SELF_RTT:
      result = (const char *)&unk_1A822480;
      break;
    case TOP_BTNS:
      result = (const char *)&unk_1A8224C0;
      break;
    case MAP_INFO:
      result = (const char *)&unk_1A822500;
      break;
    case CHAT_INFO:
      result = (const char *)&unk_1A822540;
      break;
    case MOVE:
      result = (const char *)&unk_1A822580;
      break;
    case GAME_INFO:
      result = (const char *)&unk_1A8225C0;
      break;
    case DIALOG_0:
      result = "dialog";
      break;
    case MAIN_BTN:
      result = (const char *)&unk_1A822640;
      break;
    case HP_BAR:
      result = (const char *)&unk_1A8226A0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 4623: range 000000001163FD7C-0000000011640058
bool __cdecl data::vecFromJson(const Json::Value *jval, data::MainPageUIDisableList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  data::MainPageUIDisableList *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 48 4 9 elem:4629 64 32 9 <unknown>";
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
      if ( !fromJson<data::MainPageUIDisableType>(elem_jval, (data::MainPageUIDisableType *)(v3 + 48)) )
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
          "./src/json_data_auto/ConfigUI.cpp",
          "vecFromJson",
          4632);
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
        std::vector<data::MainPageUIDisableType>::push_back(
          va,
          (const std::vector<data::MainPageUIDisableType>::value_type *)(v3 + 48));
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

// Line 4642: range 0000000011640059-00000000116402DA
int32_t __cdecl data::getVecHashValue(const data::MainPageUIDisableList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MainPageUIDisableType *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:4643 64 8 16 __for_begin:4644 96 8 14 __for_end:4644";
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
  *(std::vector<data::MainPageUIDisableType>::const_iterator *)(v2 + 64) = std::vector<data::MainPageUIDisableType>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::MainPageUIDisableType>::const_iterator *)(v2 + 96) = std::vector<data::MainPageUIDisableType>::end(vec);
  while ( __gnu_cxx::operator!=<data::MainPageUIDisableType const*,std::vector<data::MainPageUIDisableType>>(
            (const __gnu_cxx::__normal_iterator<const data::MainPageUIDisableType*,std::vector<data::MainPageUIDisableType> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::MainPageUIDisableType*,std::vector<data::MainPageUIDisableType> > *)(v2 + 96)) )
  {
    v5 = (data::MainPageUIDisableType *)__gnu_cxx::__normal_iterator<data::MainPageUIDisableType const*,std::vector<data::MainPageUIDisableType>>::operator*((const __gnu_cxx::__normal_iterator<const data::MainPageUIDisableType*,std::vector<data::MainPageUIDisableType> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::MainPageUIDisableType const*,std::vector<data::MainPageUIDisableType>>::operator++((__gnu_cxx::__normal_iterator<const data::MainPageUIDisableType*,std::vector<data::MainPageUIDisableType> > *const)(v2 + 64));
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

// Line 4653: range 00000000116402DC-00000000116408BF
bool __cdecl data::ConfigMainPageDisableInfo::fromJson(
        data::ConfigMainPageDisableInfo *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::InputEventList *p_enabled_input_event_list; // rsi
  const Json::Value *ui_disable_list_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *enabled_input_event_list_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigMainPageDisableInfo::fromJson;
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
    "uiDisableList",
    (const std::allocator<char> *)(v2 + 32));
  ui_disable_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( ui_disable_list_ptr && !data::vecFromJson(ui_disable_list_ptr, &this->ui_disable_list) )
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
      "./src/json_data_auto/ConfigUI.cpp",
      "fromJson",
      4663);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[35])"fromJson for: uiDisableList fails!");
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
      "enabledInputEventList",
      (const std::allocator<char> *)(v2 + 48));
    p_enabled_input_event_list = (data::InputEventList *)(v2 + 192);
    enabled_input_event_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( enabled_input_event_list_ptr
      && (p_enabled_input_event_list = &this->enabled_input_event_list,
          !data::vecFromJson(enabled_input_event_list_ptr, &this->enabled_input_event_list)) )
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
        "./src/json_data_auto/ConfigUI.cpp",
        "fromJson",
        4675);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[43])"fromJson for: enabledInputEventList fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_enabled_input_event_list, &this->is_json_loaded);
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

// Line 4683: range 00000000116408C0-0000000011640A1B
int32_t __cdecl data::ConfigMainPageDisableInfo::getHashValue(const data::ConfigMainPageDisableInfo *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:4684";
  *(_QWORD *)(v2 + 16) = data::ConfigMainPageDisableInfo::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->ui_disable_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->enabled_input_event_list);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
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

// Line 4691: range 0000000011640A1C-000000001164160F
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigMainPageDisableMap *m)
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
  data::ConfigMainPageDisableInfo *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigMainPageDisableInfo>,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v23[816]; // [rsp+20h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 8 cit:4693 80 16 9 <unknown> 112 32 8 key:4696 176 32 9 <unknown> 240 32 9 <unknown> 30"
                        "4 32 9 <unknown> 368 32 9 <unknown> 432 40 13 tmp_jval:4692 512 40 13 key_jval:4695 592 40 15 va"
                        "lue_jval:4702 672 56 10 value:4703";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862737] = -218959360;
  v5[536862738] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862742] = -218103808;
  v5[536862743] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 432), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 432));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 432));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 512) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 551) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 39) & 7) >= *(_BYTE *)(((v3 + 551) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 512, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 512));
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 112);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 512), (std::string *)(v3 + 112)) )
    {
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigUI.cpp",
        "mapFromJson",
        4699);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 176),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 240), (Json::Value_0 *)(v3 + 512));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 240));
      std::string::~string((void *)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 592) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 592), v11);
      v12 = ((v3 + 672) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_WORD *)(v12 + 4) = 0;
      *(_BYTE *)(v12 + 6) = 0;
      data::ConfigMainPageDisableInfo::ConfigMainPageDisableInfo((data::ConfigMainPageDisableInfo *const)(v3 + 672));
      if ( !data::ConfigMainPageDisableInfo::fromJson(
              (data::ConfigMainPageDisableInfo *const)(v3 + 672),
              (const Json::Value *)(v3 + 592)) )
      {
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigUI.cpp",
          "mapFromJson",
          4706);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<std::string,data::ConfigMainPageDisableInfo>::emplace<std::string&,data::ConfigMainPageDisableInfo&>(
                m,
                (std::string *)(v3 + 112),
                (data::ConfigMainPageDisableInfo *)(v3 + 672),
                (std::string *)(v3 + 112),
                v13);
        if ( !v16.second )
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
            "./src/json_data_auto/ConfigUI.cpp",
            "mapFromJson",
            4711);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      data::ConfigMainPageDisableInfo::~ConfigMainPageDisableInfo((data::ConfigMainPageDisableInfo *const)(v3 + 672));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 592));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 112));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 512));
    v18 = ((v3 + 512) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_WORD *)(v20 + 4) = -1800;
    *(_BYTE *)(v20 + 6) = -8;
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_32;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v21 = 1;
LABEL_32:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 432));
  if ( v23 == (char *)v3 )
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

// Line 4720: range 0000000011641610-00000000116418B7
int32_t __cdecl data::getMapHashValue(const data::ConfigMainPageDisableMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigMainPageDisableInfo>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigMainPageDisableInfo> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigMainPageDisableInfo> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:4721 64 8 16 __for_begin:4722 96 8 14 __for_end:4722";
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
  *(std::unordered_map<std::string,data::ConfigMainPageDisableInfo>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigMainPageDisableInfo>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ConfigMainPageDisableInfo>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConfigMainPageDisableInfo>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigMainPageDisableInfo>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigMainPageDisableInfo>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigMainPageDisableInfo>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigMainPageDisableInfo>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigMainPageDisableInfo>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ConfigMainPageDisableInfo>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ConfigMainPageDisableInfo> >::type *)std::get<1ul,std::string const,data::ConfigMainPageDisableInfo>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigMainPageDisableInfo::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigMainPageDisableInfo>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigMainPageDisableInfo>,false,true> *const)(v2 + 64));
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

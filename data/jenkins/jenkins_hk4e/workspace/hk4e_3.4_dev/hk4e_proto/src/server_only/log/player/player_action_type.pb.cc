// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/player/player_action_type.pb.cc

// Line 50: range 00000000174337D9-00000000174339B9
// local variable allocation has failed, the output may be wrong!
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
{
  unsigned __int64 p_filename; // r12
  __int64 v1; // rax
  _DWORD *v2; // r13
  int v3; // r15d
  int v4; // r14d
  int v5; // [rsp+0h] [rbp-D0h]
  const char **v6; // [rsp+8h] [rbp-C8h]
  int v7; // [rsp+10h] [rbp-C0h]
  google::protobuf::internal::LogMessage_0 factory; // [rsp+18h] [rbp-B8h] OVERLAPPED BYREF

  p_filename = (unsigned __int64)&factory.filename_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_1(128LL);
    if ( v1 )
      p_filename = v1;
  }
  *(_QWORD *)p_filename = 1102416563LL;
  *(_QWORD *)(p_filename + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(p_filename + 16) = proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(p_filename >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::AddDescriptors();
  *(_QWORD *)&factory.level_ = 0LL;
  v3 = (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::file_default_instances;
  v4 = (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::schemas;
  std::allocator<char>::allocator(p_filename + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(p_filename + 64),
    "server_only/log/player/player_action_type.proto",
    (const std::allocator<char> *)(p_filename + 48));
  google::protobuf::internal::AssignDescriptors(
    p_filename + 64,
    v4,
    v3,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::TableStruct::offsets,
    0,
    0,
    (__int64)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors,
    0LL,
    v5,
    (int)&factory.filename_,
    v7,
    factory);
  std::string::~string((void *)(p_filename + 64));
  *(_DWORD *)(((p_filename + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(p_filename + 48);
  if ( v6 == (const char **)p_filename )
  {
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_filename = 1172321806LL;
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 58: range 00000000174339BA-00000000174339D3
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 64: range 00000000174339D4-00000000174339E7
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
};

// Line 69: range 00000000174339E8-0000000017433A09
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/player/player_action_type.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
};

// Line 75: range 0000000017433A0A-0000000017433A26
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 80: range 0000000017433A27-0000000017433A56
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 604: range 0000000017433A57-0000000017433A70
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 610: range 00000000178BCD32-00000000178BCD45
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::AddDescriptors();
};

// Line 617: range 0000000017433A71-0000000017433A82
const google::protobuf::EnumDescriptor *__cdecl proto_log::PlayerActionType_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 621: range 0000000017433A83-0000000017433F24
bool __cdecl proto_log::PlayerActionType_IsValid(int value)
{
  if ( value > 3778 )
    return 0;
  if ( value >= 3250 )
  {
    switch ( value )
    {
      case 3250:
      case 3251:
      case 3252:
      case 3253:
      case 3254:
      case 3261:
      case 3270:
      case 3271:
      case 3300:
      case 3301:
      case 3302:
      case 3303:
      case 3304:
      case 3305:
      case 3306:
      case 3307:
      case 3308:
      case 3309:
      case 3310:
      case 3311:
      case 3312:
      case 3313:
      case 3314:
      case 3315:
      case 3316:
      case 3400:
      case 3450:
      case 3451:
      case 3452:
      case 3460:
      case 3461:
      case 3462:
      case 3463:
      case 3464:
      case 3465:
      case 3470:
      case 3471:
      case 3476:
      case 3480:
      case 3481:
      case 3490:
      case 3491:
      case 3496:
      case 3497:
      case 3498:
      case 3499:
      case 3500:
      case 3510:
      case 3511:
      case 3512:
      case 3513:
      case 3514:
      case 3515:
      case 3516:
      case 3517:
      case 3518:
      case 3519:
      case 3520:
      case 3521:
      case 3525:
      case 3527:
      case 3528:
      case 3529:
      case 3530:
      case 3531:
      case 3536:
      case 3537:
      case 3538:
      case 3539:
      case 3540:
      case 3541:
      case 3542:
      case 3543:
      case 3544:
      case 3545:
      case 3550:
      case 3551:
      case 3552:
      case 3553:
      case 3554:
      case 3555:
      case 3556:
      case 3557:
      case 3558:
      case 3559:
      case 3560:
      case 3561:
      case 3562:
      case 3563:
      case 3564:
      case 3565:
      case 3566:
      case 3576:
      case 3577:
      case 3578:
      case 3580:
      case 3581:
      case 3582:
      case 3583:
      case 3584:
      case 3585:
      case 3588:
      case 3589:
      case 3590:
      case 3591:
      case 3592:
      case 3593:
      case 3594:
      case 3595:
      case 3596:
      case 3597:
      case 3598:
      case 3599:
      case 3600:
      case 3601:
      case 3602:
      case 3603:
      case 3604:
      case 3605:
      case 3606:
      case 3607:
      case 3611:
      case 3612:
      case 3613:
      case 3614:
      case 3615:
      case 3616:
      case 3620:
      case 3621:
      case 3630:
      case 3631:
      case 3632:
      case 3633:
      case 3634:
      case 3640:
      case 3650:
      case 3660:
      case 3670:
      case 3671:
      case 3672:
      case 3673:
      case 3674:
      case 3680:
      case 3681:
      case 3682:
      case 3690:
      case 3691:
      case 3692:
      case 3693:
      case 3694:
      case 3695:
      case 3696:
      case 3701:
      case 3702:
      case 3710:
      case 3715:
      case 3720:
      case 3721:
      case 3722:
      case 3725:
      case 3726:
      case 3727:
      case 3728:
      case 3729:
      case 3735:
      case 3736:
      case 3737:
      case 3738:
      case 3745:
      case 3746:
      case 3747:
      case 3748:
      case 3749:
      case 3750:
      case 3751:
      case 3755:
      case 3756:
      case 3758:
      case 3759:
      case 3760:
      case 3761:
      case 3762:
      case 3763:
      case 3764:
      case 3765:
      case 3766:
      case 3767:
      case 3768:
      case 3769:
      case 3770:
      case 3771:
      case 3772:
      case 3773:
      case 3774:
      case 3775:
      case 3776:
      case 3777:
      case 3778:
        return 1;
      default:
        return 0;
    }
  }
  if ( value > 3201 )
    return 0;
  if ( value >= 3000 )
  {
    switch ( value )
    {
      case 3000:
      case 3001:
      case 3010:
      case 3011:
      case 3020:
      case 3021:
      case 3030:
      case 3031:
      case 3032:
      case 3033:
      case 3034:
      case 3035:
      case 3036:
      case 3040:
      case 3041:
      case 3042:
      case 3051:
      case 3061:
      case 3062:
      case 3063:
      case 3064:
      case 3065:
      case 3066:
      case 3070:
      case 3080:
      case 3081:
      case 3082:
      case 3090:
      case 3091:
      case 3100:
      case 3111:
      case 3112:
      case 3113:
      case 3114:
      case 3120:
      case 3121:
      case 3122:
      case 3123:
      case 3124:
      case 3140:
      case 3141:
      case 3142:
      case 3143:
      case 3144:
      case 3150:
      case 3151:
      case 3152:
      case 3153:
      case 3154:
      case 3155:
      case 3156:
      case 3157:
      case 3171:
      case 3172:
      case 3173:
      case 3174:
      case 3175:
      case 3176:
      case 3177:
      case 3178:
      case 3201:
        return 1;
      default:
        return 0;
    }
  }
  if ( value > 2919 )
    return 0;
  if ( value >= 2800 )
  {
    switch ( value )
    {
      case 2800:
      case 2802:
      case 2803:
      case 2820:
      case 2821:
      case 2830:
      case 2831:
      case 2832:
      case 2833:
      case 2834:
      case 2840:
      case 2841:
      case 2845:
      case 2850:
      case 2851:
      case 2860:
      case 2861:
      case 2862:
      case 2900:
      case 2901:
      case 2910:
      case 2911:
      case 2912:
      case 2913:
      case 2914:
      case 2915:
      case 2916:
      case 2917:
      case 2918:
      case 2919:
        return 1;
      default:
        return 0;
    }
  }
  if ( value > 2727 )
    return 0;
  if ( value >= 2700 )
    return ((1LL << ((unsigned __int8)value + 116)) & 0xDF01FFF) != 0;
  if ( value <= 2611 )
  {
    if ( value >= 2610 )
      return 1;
    if ( value <= 2602 )
    {
      if ( value >= 2600 )
        return 1;
      if ( value <= 2501 )
      {
        if ( value >= 2500 )
          return 1;
        if ( value > 2427 )
          return 0;
        if ( value >= 2400 )
        {
          switch ( value )
          {
            case 2400:
            case 2410:
            case 2420:
            case 2421:
            case 2422:
            case 2423:
            case 2425:
            case 2427:
              return 1;
            default:
              return 0;
          }
        }
        if ( value > 2314 )
          return 0;
        if ( value >= 2310 || value == 2300 )
          return 1;
        if ( value <= 2201 )
        {
          if ( value >= 2200 )
            return 1;
          if ( value <= 2110 )
          {
            if ( value >= 2101 )
              return 1;
            if ( value <= 2002 )
            {
              if ( value >= 2001 )
                return 1;
              if ( value <= 1954 )
              {
                if ( value >= 1951 )
                  return 1;
                if ( value <= 1907 )
                {
                  if ( value >= 1901 )
                    return 1;
                  if ( value <= 1809 )
                  {
                    if ( value >= 1801 )
                      return 1;
                    if ( value <= 1718 )
                    {
                      if ( value >= 1711 )
                        return 1;
                      if ( value <= 1702 )
                      {
                        if ( value >= 1701 )
                          return 1;
                        if ( value > 1626 )
                          return 0;
                        if ( value >= 1501 )
                        {
                          switch ( value )
                          {
                            case 1501:
                            case 1502:
                            case 1504:
                            case 1509:
                            case 1510:
                            case 1511:
                            case 1512:
                            case 1513:
                            case 1514:
                            case 1515:
                            case 1516:
                            case 1518:
                            case 1520:
                            case 1521:
                            case 1522:
                            case 1523:
                            case 1525:
                            case 1526:
                            case 1527:
                            case 1528:
                            case 1529:
                            case 1530:
                            case 1531:
                            case 1532:
                            case 1550:
                            case 1551:
                            case 1552:
                            case 1553:
                            case 1554:
                            case 1555:
                            case 1556:
                            case 1557:
                            case 1558:
                            case 1559:
                            case 1560:
                            case 1601:
                            case 1602:
                            case 1603:
                            case 1605:
                            case 1606:
                            case 1607:
                            case 1608:
                            case 1609:
                            case 1610:
                            case 1613:
                            case 1614:
                            case 1615:
                            case 1616:
                            case 1617:
                            case 1618:
                            case 1619:
                            case 1620:
                            case 1621:
                            case 1622:
                            case 1623:
                            case 1624:
                            case 1625:
                            case 1626:
                              return 1;
                            default:
                              return 0;
                          }
                        }
                        if ( value > 1407 )
                          return 0;
                        if ( value >= 1406 )
                          return 1;
                        if ( value <= 1403 )
                        {
                          if ( value >= 1401 )
                            return 1;
                          if ( value <= 1317 )
                          {
                            if ( value >= 1301 )
                              return ((1LL << ((unsigned __int8)value - 21)) & 0x1E6C3) != 0;
                            if ( value == 1207 )
                              return 1;
                            if ( value <= 1202 )
                            {
                              if ( value >= 1201 )
                                return 1;
                              if ( value > 1121 )
                                return 0;
                              if ( value >= 1101 )
                              {
                                switch ( value )
                                {
                                  case 1101:
                                  case 1102:
                                  case 1105:
                                  case 1107:
                                  case 1108:
                                  case 1109:
                                  case 1110:
                                  case 1114:
                                  case 1115:
                                  case 1116:
                                  case 1118:
                                  case 1119:
                                  case 1120:
                                  case 1121:
                                    return 1;
                                  default:
                                    return 0;
                                }
                              }
                              if ( value > 1012 )
                                return 0;
                              if ( value >= 1001 )
                                return ((1LL << ((unsigned __int8)value + 23)) & 0xFE5) != 0;
                              if ( value <= 205 )
                              {
                                if ( value >= 201 )
                                  return 1;
                                if ( value <= 7 )
                                  return value >= 0;
                                if ( (unsigned int)(value - 101) <= 2 )
                                  return 1;
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
  return 0;
};

// Line 1118: range 0000000017433F25-0000000017433F36
const google::protobuf::EnumDescriptor *__cdecl proto_log::AntiCheatLogType_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors[1];
};

// Line 1122: range 0000000017433F37-0000000017433F5A
bool __cdecl proto_log::AntiCheatLogType_IsValid(int value)
{
  return !value || value == 1001;
};

// Line 1132: range 0000000017433F5B-0000000017433F6C
const google::protobuf::EnumDescriptor *__cdecl proto_log::FlightChallengeResultType_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors[2];
};

// Line 1136: range 0000000017433F6D-0000000017433F89
bool __cdecl proto_log::FlightChallengeResultType_IsValid(int value)
{
  return (unsigned int)value <= 2;
};

// Line 1147: range 0000000017433F8A-0000000017433F9B
const google::protobuf::EnumDescriptor *__cdecl proto_log::SummerTimeBoatSprintResultType_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors[3];
};

// Line 1151: range 0000000017433F9C-0000000017433FB8
bool __cdecl proto_log::SummerTimeBoatSprintResultType_IsValid(int value)
{
  return (unsigned int)value <= 2;
};

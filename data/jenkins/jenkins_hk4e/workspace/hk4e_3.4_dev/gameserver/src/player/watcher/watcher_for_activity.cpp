// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/watcher_for_activity.cpp

// Line 96: range 0000000016384752-0000000016384787
int32_t __cdecl EffigyChallengeScoreWatcher::tryUpdateProgressImpl(
        EffigyChallengeScoreWatcher *const this,
        Player *player,
        const EffigyChallengeScoreEvent *event,
        const EffigyChallengeScoreWatcherParam *param)
{
  EffigyChallengeScoreWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 102: range 0000000016384788-00000000163848D2
int32_t __cdecl EffigyChallengeScoreWatcher::refreshProgressImpl(
        EffigyChallengeScoreWatcher *const this,
        Player *player,
        const EffigyChallengeScoreWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<EffigyActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t CurScore; // eax
  int32_t result; // eax
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:103";
  *(_QWORD *)(v3 + 16) = EffigyChallengeScoreWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<EffigyActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<EffigyActivity>(0LL, (const std::shared_ptr<EffigyActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<EffigyActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EffigyActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    CurScore = EffigyActivity::getCurScore(v6);
    BaseWatcher::tryCorrectProgress(this, CurScore);
  }
  std::shared_ptr<EffigyActivity>::~shared_ptr((std::shared_ptr<EffigyActivity> *const)(v3 + 32));
  result = 0;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 115: range 00000000163848D4-0000000016384982
int32_t __cdecl CrucibleElementScoreWatcher::tryUpdateProgressImpl(
        CrucibleElementScoreWatcher *const this,
        Player *player,
        const MpPlayBattleSettleEvent *event,
        const CrucibleElementScoreWatcherParam *param)
{
  CrucibleElementScoreWatcher *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&event->mp_play_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->mp_play_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->mp_play_type);
  }
  if ( event->mp_play_type == 1 )
  {
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->score);
    }
    BaseWatcher::addProgress(v4, event->score);
  }
  return 0;
};

// Line 127: range 0000000016384984-00000000163849B3
int32_t __cdecl CrucibleMaxBallWatcher::tryUpdateProgressImpl(
        CrucibleMaxBallWatcher *const this,
        Player *player,
        const CrucibleSubmitMaxBall *event,
        const CrucibleMaxBallWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 136: range 00000000163849B4-00000000163849E3
int32_t __cdecl CrucibleMaxScoreWatcher::tryUpdateProgressImpl(
        CrucibleMaxScoreWatcher *const this,
        Player *player,
        const CrucibleMaxElementScore *event,
        const CrucibleMaxScoreWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 145: range 00000000163849E4-0000000016384AD9
int32_t __cdecl CrucibleSubmitBallWatcher::tryUpdateProgressImpl(
        CrucibleSubmitBallWatcher *const this,
        Player *player,
        const CrucibleSubmitBall *event,
        const CrucibleSubmitBallWatcherParam *param)
{
  uint32_t element_type; // ecx
  CrucibleSubmitBallWatcher *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( !param->element_type )
    goto LABEL_7;
  element_type = param->element_type;
  if ( *(_BYTE *)(((unsigned __int64)&event->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->element_type);
  }
  if ( element_type == event->element_type )
  {
LABEL_7:
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->num);
    }
    BaseWatcher::addProgress(v5, event->num);
  }
  return 0;
};

// Line 157: range 0000000016384ADA-0000000016384D67
int32_t __cdecl CrucibleWorldLevelScoreWatcher::tryUpdateProgressImpl(
        CrucibleWorldLevelScoreWatcher *const this,
        Player *player,
        const MpPlayBattleSettleEvent *event,
        const CrucibleWorldLevelScoreWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t team_score; // ecx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Level; // ecx
  char v10; // al
  int32_t result; // eax
  char v14[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 world_ptr:158";
  *(_QWORD *)(v4 + 16) = CrucibleWorldLevelScoreWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 32));
  if ( !std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 32), 0LL) )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_win);
  }
  if ( !event->is_win )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&event->team_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->team_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->team_score);
  }
  team_score = event->team_score;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( team_score < param->min_team_score )
    goto LABEL_17;
  v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  Level = PlayerWorld::getLevel(v8);
  if ( *(_BYTE *)(((unsigned __int64)&event->battle_world_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->battle_world_level >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&event->battle_world_level);
  }
  if ( Level == event->battle_world_level )
    v10 = 1;
  else
LABEL_17:
    v10 = 0;
  if ( v10 )
    BaseWatcher::addProgress(this, 1u);
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 32));
  result = 0;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 171: range 0000000016384D68-0000000016384D97
int32_t __cdecl BlessingExchangePicNumWatcher::tryUpdateProgressImpl(
        BlessingExchangePicNumWatcher *const this,
        Player *player,
        const BlessingExchangePicEvent *event,
        const BlessingExchangePicNumWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 178: range 0000000016384D98-0000000016384DC7
int32_t __cdecl BlessingRedeemRewardWatcher::tryUpdateProgressImpl(
        BlessingRedeemRewardWatcher *const this,
        Player *player,
        const BlessingRedeemRewardEvent *event,
        const BlessingRedeemRewardWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 186: range 0000000016384DC8-0000000016384E26
int32_t __cdecl MechanicusUnlockGearWatcher::refreshProgressImpl(
        MechanicusUnlockGearWatcher *const this,
        Player *player,
        const MechanicusUnlockGearWatcherParam *param)
{
  PlayerMechanicusComp *MechanicusComp; // rax
  uint32_t unlock_gear_num; // [rsp+2Ch] [rbp-4h]

  if ( !BaseWatcher::getProgress(this) )
  {
    MechanicusComp = Player::getMechanicusComp(player);
    unlock_gear_num = PlayerMechanicusComp::getUnlockGearNum(MechanicusComp);
    BaseWatcher::addProgress(this, unlock_gear_num);
  }
  return 0;
};

// Line 197: range 0000000016384E28-0000000016384E57
int32_t __cdecl MechanicusUnlockGearWatcher::tryUpdateProgressImpl(
        MechanicusUnlockGearWatcher *const this,
        Player *player,
        const MechanicusUnlockGearEvent *event,
        const MechanicusUnlockGearWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 205: range 0000000016384E58-0000000016384EF9
int32_t __cdecl MechanicusLevelupGearWatcher::refreshProgressImpl(
        MechanicusLevelupGearWatcher *const this,
        Player *player,
        const MechanicusLevelupGearWatcherParam *param)
{
  PlayerMechanicusComp *MechanicusComp; // rcx
  uint32_t gear_level_num; // [rsp+2Ch] [rbp-4h]

  if ( BaseWatcher::getProgress(this) )
    return 0;
  MechanicusComp = Player::getMechanicusComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  gear_level_num = PlayerMechanicusComp::getGearLevelNum(MechanicusComp, param->gear_level);
  BaseWatcher::addProgress(this, gear_level_num);
  return 0;
};

// Line 216: range 0000000016384EFA-0000000016384FAD
int32_t __cdecl MechanicusLevelupGearWatcher::tryUpdateProgressImpl(
        MechanicusLevelupGearWatcher *const this,
        Player *player,
        const MechanicusLevelupGearEvent *event,
        const MechanicusLevelupGearWatcherParam *param)
{
  uint32_t after_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->after_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->after_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->after_level);
  }
  after_level = event->after_level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( after_level == param->gear_level )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 227: range 0000000016384FAE-0000000016385155
int32_t __cdecl MechanicusDifficultWatcher::tryUpdateProgressImpl(
        MechanicusDifficultWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusDifficultWatcherParam *param)
{
  bool *p_is_success; // rdx
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  uint32_t difficult_level; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<Config> v10[2]; // [rsp+30h] [rbp-20h] BYREF

  p_is_success = &event->is_success;
  if ( *(char *)(((unsigned __int64)p_is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_success);
  if ( event->is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_teach_difficult_level);
    }
    if ( !event->is_teach_difficult_level )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v10);
      p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.mechanicus_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->dungeon_id);
      }
      difficult_level = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(
                          p_mechanicus_config_mgr,
                          event->dungeon_id);
      std::shared_ptr<Config>::~shared_ptr(v10);
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( difficult_level >= param->difficult_level )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 242: range 0000000016385156-00000000163852FC
int32_t __cdecl MechanicusDifficultScoreWatcher::tryUpdateProgressImpl(
        MechanicusDifficultScoreWatcher *const this,
        Player *player,
        const MechanicusBattleScoreEvent *event,
        const MechanicusDifficultScoreWatcherParam *param)
{
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  uint32_t settle_points; // ecx
  uint32_t difficult_level; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<Config> v10[2]; // [rsp+30h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.mechanicus_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->dungeon_id);
  }
  difficult_level = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(
                      p_mechanicus_config_mgr,
                      event->dungeon_id);
  std::shared_ptr<Config>::~shared_ptr(v10);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( difficult_level >= param->difficult_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->settle_points >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->settle_points >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->settle_points);
    }
    settle_points = event->settle_points;
    if ( *(_BYTE *)(((unsigned __int64)&param->min_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->min_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->min_score);
    }
    if ( settle_points >= param->min_score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 254: range 00000000163852FE-00000000163854A5
int32_t __cdecl MechanicusDifficultEqWatcher::tryUpdateProgressImpl(
        MechanicusDifficultEqWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusDifficultEqWatcherParam *param)
{
  bool *p_is_success; // rdx
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  uint32_t difficult_level; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<Config> v10[2]; // [rsp+30h] [rbp-20h] BYREF

  p_is_success = &event->is_success;
  if ( *(char *)(((unsigned __int64)p_is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_success);
  if ( event->is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_teach_difficult_level);
    }
    if ( !event->is_teach_difficult_level )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v10);
      p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.mechanicus_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->dungeon_id);
      }
      difficult_level = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(
                          p_mechanicus_config_mgr,
                          event->dungeon_id);
      std::shared_ptr<Config>::~shared_ptr(v10);
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( difficult_level == param->difficult_level )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 269: range 00000000163854A6-0000000016385554
int32_t __cdecl MechanicusKillMonsterWatcher::tryUpdateProgressImpl(
        MechanicusKillMonsterWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusKillMonsterWatcherParam *param)
{
  MechanicusKillMonsterWatcher *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_teach_difficult_level);
  }
  if ( !event->is_teach_difficult_level )
  {
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->kill_monsters >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->kill_monsters >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->kill_monsters);
    }
    BaseWatcher::addProgress(v4, event->kill_monsters);
  }
  return 0;
};

// Line 280: range 0000000016385556-000000001638560C
int32_t __cdecl MechanicusBuildingPointWatcher::tryUpdateProgressImpl(
        MechanicusBuildingPointWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusBuildingPointWatcherParam *param)
{
  MechanicusBuildingPointWatcher *v4; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_teach_difficult_level);
  }
  if ( !event->is_teach_difficult_level )
  {
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->cost_building_points >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cost_building_points >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&event->cost_building_points);
    }
    BaseWatcher::addProgress(v4, event->cost_building_points);
  }
  return 0;
};

// Line 291: range 000000001638560E-00000000163856C3
int32_t __cdecl MechanicusBattleEndWatcher::tryUpdateProgressImpl(
        MechanicusBattleEndWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusBattleEndWatcherParam *param)
{
  bool *p_is_success; // rdx

  p_is_success = &event->is_success;
  if ( *(char *)(((unsigned __int64)p_is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_success);
  if ( event->is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_teach_difficult_level);
    }
    if ( !event->is_teach_difficult_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 302: range 00000000163856C4-0000000016385805
int32_t __cdecl MechanicusBattleEndEscapeMonsterWatcher::tryUpdateProgressImpl(
        MechanicusBattleEndEscapeMonsterWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusBattleEndEscapeMonsterWatcherParam *param)
{
  bool *p_is_success; // rdx
  uint32_t escape_monsters; // ecx

  p_is_success = &event->is_success;
  if ( *(char *)(((unsigned __int64)p_is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_success);
  if ( event->is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_teach_difficult_level);
    }
    if ( !event->is_teach_difficult_level )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->escape_monsters >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->escape_monsters >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&event->escape_monsters);
      }
      escape_monsters = event->escape_monsters;
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( escape_monsters <= param->monster_num )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 313: range 0000000016385806-000000001638593F
int32_t __cdecl MechanicusBattleBuildingPointGteqWatcher::tryUpdateProgressImpl(
        MechanicusBattleBuildingPointGteqWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusBattleBuildingPointGteqWatcherParam *param)
{
  bool *p_is_success; // rdx
  uint32_t building_points; // ecx

  p_is_success = &event->is_success;
  if ( *(char *)(((unsigned __int64)p_is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_success);
  if ( event->is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_teach_difficult_level);
    }
    if ( !event->is_teach_difficult_level )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->building_points >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->building_points >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->building_points);
      }
      building_points = event->building_points;
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( building_points >= param->building_point )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 324: range 0000000016385940-0000000016385A36
int32_t __cdecl MechanicusBattleRoundGteqWatcher::tryUpdateProgressImpl(
        MechanicusBattleRoundGteqWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusBattleRoundGteqWatcherParam *param)
{
  uint32_t cur_round; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_teach_difficult_level);
  }
  if ( !event->is_teach_difficult_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->cur_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->cur_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->cur_round);
    }
    cur_round = event->cur_round;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( cur_round >= param->rounds )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 335: range 0000000016385A38-0000000016385B3E
int32_t __cdecl MechanicusBattleLastRoundWatcher::tryUpdateProgressImpl(
        MechanicusBattleLastRoundWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusBattleLastRoundWatcherParam *param)
{
  uint32_t cur_round; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_teach_difficult_level);
  }
  if ( !event->is_teach_difficult_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->cur_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->cur_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->cur_round);
    }
    cur_round = event->cur_round;
    if ( *(_BYTE *)(((unsigned __int64)&event->total_round >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->total_round >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->total_round);
    }
    if ( cur_round == event->total_round && event->total_round )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 346: range 0000000016385B40-0000000016385BEB
int32_t __cdecl MechanicusBattleWatcherFinishWatcher::tryUpdateProgressImpl(
        MechanicusBattleWatcherFinishWatcher *const this,
        Player *player,
        const MechanicusBattleWatcherFinishEvent *event,
        const MechanicusBattleWatcherFinishWatcherParam *param)
{
  uint32_t *p_watcher_id; // rdx
  uint32_t watcher_id; // ecx

  p_watcher_id = &event->watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)p_watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_watcher_id);
  }
  watcher_id = event->watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( watcher_id == param->watcher_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 356: range 0000000016385BEC-0000000016385E8A
int32_t __cdecl FleurFairDungeonFinishInLimitTimeWatcher::tryUpdateProgressImpl(
        FleurFairDungeonFinishInLimitTimeWatcher *const this,
        Player *player,
        const FleurFairDungeonFinishEvent *event,
        const FleurFairDungeonFinishInLimitTimeWatcherParam *param)
{
  bool *p_is_succ; // rdx
  uint32_t gallery_stage_cost_time; // ecx
  uint32_t v6; // ecx
  uint32_t boss_stage_cost_time; // ecx

  p_is_succ = &event->is_succ;
  if ( *(char *)(((unsigned __int64)p_is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_succ);
  if ( event->is_succ )
  {
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( param->type == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->gallery_stage_cost_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->gallery_stage_cost_time >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&event->gallery_stage_cost_time);
      }
      gallery_stage_cost_time = event->gallery_stage_cost_time;
      if ( *(_BYTE *)(((unsigned __int64)&event->boss_stage_cost_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->boss_stage_cost_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->boss_stage_cost_time);
      }
      v6 = event->boss_stage_cost_time + gallery_stage_cost_time;
      if ( *(_BYTE *)(((unsigned __int64)&param->limit_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->limit_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->limit_time);
      }
      if ( v6 <= param->limit_time )
        goto LABEL_25;
    }
  }
  if ( *(char *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_succ);
  if ( event->is_succ )
  {
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( param->type == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->boss_stage_cost_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->boss_stage_cost_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->boss_stage_cost_time);
      }
      boss_stage_cost_time = event->boss_stage_cost_time;
      if ( *(_BYTE *)(((unsigned __int64)&param->limit_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->limit_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->limit_time);
      }
      if ( boss_stage_cost_time <= param->limit_time )
LABEL_25:
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 370: range 0000000016385E8C-0000000016385F82
int32_t __cdecl FleurFairDungeonFinishKeepEnergyWatcher::tryUpdateProgressImpl(
        FleurFairDungeonFinishKeepEnergyWatcher *const this,
        Player *player,
        const FleurFairDungeonFinishEvent *event,
        const FleurFairDungeonFinishKeepEnergyWatcherParam *param)
{
  bool *p_is_succ; // rdx
  uint32_t min_energy; // ecx

  p_is_succ = &event->is_succ;
  if ( *(char *)(((unsigned __int64)p_is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_succ);
  if ( event->is_succ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->min_energy >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->min_energy >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->min_energy);
    }
    min_energy = event->min_energy;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( min_energy >= param->target_energy )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 380: range 0000000016385F84-00000000163862CD
int32_t __cdecl FleurFairDungeonFinishWithGroupVariableWatcher::tryUpdateProgressImpl(
        FleurFairDungeonFinishWithGroupVariableWatcher *const this,
        Player *player,
        const FleurFairDungeonFinishEvent *event,
        const FleurFairDungeonFinishWithGroupVariableWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int32_t result; // eax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v9; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::pointer v11; // rax
  data::OrderingType ordering_type; // edx
  int32_t value; // [rsp+34h] [rbp-7Ch]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+38h] [rbp-78h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 iter:392";
  *(_QWORD *)(v4 + 16) = FleurFairDungeonFinishWithGroupVariableWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(char *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_succ);
  if ( !event->is_succ )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(param);
    }
    if ( param->gallery_id
      && (__rhs._M_current = std::vector<unsigned int>::end(&event->gallery_id_vec)._M_current,
          M_current = std::vector<unsigned int>::end(&event->gallery_id_vec)._M_current,
          v9._M_current = std::vector<unsigned int>::begin(&event->gallery_id_vec)._M_current,
          *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 32) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(v9, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current, &param->gallery_id),
          __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 32),
            &__rhs)) )
    {
      result = 0;
    }
    else
    {
      value = 0;
      *(std::map<std::string,int>::const_iterator *)(v4 + 32) = std::map<std::string,int>::find(
                                                                  &event->group_variable_map,
                                                                  &param->variable_name);
      __rhs._M_current = (const unsigned int *)std::map<std::string,int>::end(&event->group_variable_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::_Self *)(v4 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::_Self *)&__rhs) )
      {
        v11 = std::_Rb_tree_const_iterator<std::pair<std::string const,int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::string,int> > *const)(v4 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) <= 3 )
        {
          v11 = (std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::pointer)__asan_report_load4(&v11->second);
        }
        value = v11->second;
      }
      if ( *(_BYTE *)(((unsigned __int64)&param->ordering_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->ordering_type >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&param->ordering_type);
      }
      ordering_type = param->ordering_type;
      if ( *(_BYTE *)(((unsigned __int64)&param->variable_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&param->variable_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&param->variable_value);
      }
      if ( FleurFairMultistagePlay::isValueMeetByOrderingType(value, param->variable_value, ordering_type) )
        BaseWatcher::addProgress(this, 1u);
      result = 0;
    }
  }
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 408: range 00000000163862CE-00000000163863BC
int32_t __cdecl FleurFairDungeonFinishWithBuffNumWatcher::tryUpdateProgressImpl(
        FleurFairDungeonFinishWithBuffNumWatcher *const this,
        Player *player,
        const FleurFairDungeonFinishEvent *event,
        const FleurFairDungeonFinishWithBuffNumWatcherParam *param)
{
  bool *p_is_succ; // rdx
  uint32_t buff_num; // ecx

  p_is_succ = &event->is_succ;
  if ( *(char *)(((unsigned __int64)p_is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_succ);
  if ( event->is_succ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->buff_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->buff_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->buff_num);
    }
    buff_num = event->buff_num;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( buff_num >= param->target_buff_num )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 418: range 00000000163863BE-00000000163863ED
int32_t __cdecl FleurFairDungeonMissionFinishWatcher::tryUpdateProgressImpl(
        FleurFairDungeonMissionFinishWatcher *const this,
        Player *player,
        const FleurFairDungeonMissionFinishEvent *event,
        const FleurFairDungeonMissionFinishWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 427: range 00000000163863EE-000000001638641D
int32_t __cdecl HuntingFinishWatcher::tryUpdateProgressImpl(
        HuntingFinishWatcher *const this,
        Player *player,
        const HuntingFinishEvent *event,
        const HuntingFinishWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 436: range 000000001638641E-000000001638644D
int32_t __cdecl HuntingFailWatcher::tryUpdateProgressImpl(
        HuntingFailWatcher *const this,
        Player *player,
        const HuntingFailEvent *event,
        const HuntingFailWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 445: range 000000001638644E-000000001638647D
int32_t __cdecl DeliveryFinishWatcher::tryUpdateProgressImpl(
        DeliveryFinishWatcher *const this,
        Player *player,
        const DeliveryFinishEvent *event,
        const DeliveryFinishWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 454: range 000000001638647E-000000001638663B
int32_t __cdecl TreasureMapDoneRegionWatcher::tryUpdateProgressImpl(
        TreasureMapDoneRegionWatcher *const this,
        Player *player,
        const TreasureMapDoneRegionEvent *event,
        const TreasureMapDoneRegionWatcherParam *param)
{
  uint32_t *p_activity_id; // rdx
  uint32_t activity_id; // ecx
  uint32_t schedule_id; // ecx
  uint32_t region_id; // ecx

  p_activity_id = &event->activity_id;
  if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_activity_id);
  }
  activity_id = event->activity_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( activity_id == param->activity_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->schedule_id);
    }
    schedule_id = event->schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->schedule_id);
    }
    if ( schedule_id == param->schedule_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->region_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->region_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->region_id);
      }
      region_id = event->region_id;
      if ( *(_BYTE *)(((unsigned __int64)&param->region_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->region_id);
      }
      if ( region_id == param->region_id )
        BaseWatcher::tryCorrectProgress(this, 1u);
    }
  }
  return 0;
};

// Line 464: range 000000001638663C-00000000163867F9
int32_t __cdecl TreasureSeelieDoneRegionWatcher::tryUpdateProgressImpl(
        TreasureSeelieDoneRegionWatcher *const this,
        Player *player,
        const TreasureSeelieDoneRegionEvent *event,
        const TreasureSeelieDoneRegionWatcherParam *param)
{
  uint32_t *p_activity_id; // rdx
  uint32_t activity_id; // ecx
  uint32_t schedule_id; // ecx
  uint32_t region_id; // ecx

  p_activity_id = &event->activity_id;
  if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_activity_id);
  }
  activity_id = event->activity_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( activity_id == param->activity_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->schedule_id);
    }
    schedule_id = event->schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->schedule_id);
    }
    if ( schedule_id == param->schedule_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->region_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->region_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->region_id);
      }
      region_id = event->region_id;
      if ( *(_BYTE *)(((unsigned __int64)&param->region_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->region_id);
      }
      if ( region_id == param->region_id )
        BaseWatcher::tryCorrectProgress(this, 1u);
    }
  }
  return 0;
};

// Line 475: range 00000000163867FA-0000000016386B82
int32_t __cdecl SeaLampMiniQuestWatcher::refreshProgressImpl(
        SeaLampMiniQuestWatcher *const this,
        Player *player,
        const SeaLampMiniQuestWatcherParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char v10; // al
  std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  unsigned int Progress; // [rsp+28h] [rbp-B8h] BYREF
  unsigned int WatcherId; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 finish_num:479 64 16 16 activity_ptr:476";
  *(_QWORD *)(v3 + 16) = SeaLampMiniQuestWatcher::refreshProgressImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<SeaLampActivity>((PlayerActivityComp *const)(v3 + 64));
  if ( !std::operator!=<SeaLampActivity>((const std::shared_ptr<SeaLampActivity> *)(v3 + 64), 0LL) )
    goto LABEL_13;
  v6 = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( !BaseActivity::isOpening((const BaseActivity *const)v6, 0) )
    goto LABEL_13;
  v7 = (unsigned __int64)std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  v8 = *(_QWORD *)v7 + 136LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)v7 + 136LL);
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1
    && (v9 = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
        !BaseActivity::isSettled((const BaseActivity *const)v9)) )
  {
    v10 = 1;
  }
  else
  {
LABEL_13:
    v10 = 0;
  }
  if ( v10 )
  {
    v11 = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    *(_DWORD *)(v3 + 48) = SeaLampActivity::getFinishMiniParentQuestNum(v11);
    if ( BaseWatcher::getProgress(this) != *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/watcher_for_activity.cpp",
        "refreshProgressImpl",
        482);
      v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v23, (const char (*)[5])"uid:");
      val = Player::getUid(player);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" progress:");
      Progress = BaseWatcher::getProgress(this);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &Progress);
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" correct to:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])" ");
      WatcherId = BaseWatcher::getWatcherId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &WatcherId);
      common::milog::MiLogStream::~MiLogStream(&v23);
      BaseWatcher::tryCorrectProgress(this, *(_DWORD *)(v3 + 48));
    }
  }
  std::shared_ptr<SeaLampActivity>::~shared_ptr((std::shared_ptr<SeaLampActivity> *const)(v3 + 64));
  result = 0;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 489: range 0000000016386B84-0000000016386C40
int32_t __cdecl SeaLampMiniQuestWatcher::tryUpdateProgressImpl(
        SeaLampMiniQuestWatcher *const this,
        Player *player,
        const SeaLampMiniQuestFinishEvent *event,
        const SeaLampMiniQuestWatcherParam *param)
{
  uint32_t *p_finish_num; // rdx
  uint32_t finish_num; // ebx
  SeaLampMiniQuestWatcher *v6; // rdx

  p_finish_num = &event->finish_num;
  if ( *(_BYTE *)(((unsigned __int64)p_finish_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_finish_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_finish_num);
  }
  finish_num = event->finish_num;
  if ( finish_num != BaseWatcher::getProgress(this) )
  {
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->finish_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->finish_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->finish_num);
    }
    BaseWatcher::tryCorrectProgress(v6, event->finish_num);
  }
  return 0;
};

// Line 499: range 0000000016386C42-0000000016386CF6
int32_t __cdecl FindHilichurlFinishLevelWatcher::tryUpdateProgressImpl(
        FindHilichurlFinishLevelWatcher *const this,
        Player *player,
        const FindHilichurlFinishLevelEvent *event,
        const FindHilichurlFinishLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( !param->day_index )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)&event->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->day_index);
  }
  if ( event->day_index == param->day_index )
LABEL_7:
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 509: range 0000000016386CF8-0000000016386EEB
int32_t __cdecl MechanicusBattleEndGearMoreThanWatcher::tryUpdateProgressImpl(
        MechanicusBattleEndGearMoreThanWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleEndGearMoreThanWatcherParam *param)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  uint32_t end_gear_num; // ecx
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/watcher_for_activity.cpp",
    "tryUpdateProgressImpl",
    510);
  v4 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
         &v13,
         (const char (*)[22])"[MECH] end_gear_num: ");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->end_gear_num);
  v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])" param limit:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &param->limit);
  v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" is_succ:");
  if ( *(char *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_succ);
  common::milog::MiLogStream::operator<<(v8, event->is_succ);
  common::milog::MiLogStream::~MiLogStream(&v13);
  if ( *(_BYTE *)(((unsigned __int64)&event->end_gear_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->end_gear_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->end_gear_num);
  }
  end_gear_num = event->end_gear_num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( end_gear_num >= param->limit )
  {
    if ( *(char *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_succ);
    if ( event->is_succ )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 520: range 0000000016386EEC-00000000163872A1
int32_t __cdecl MechanicusBattleEndBuildGearMoreThanWatcher::tryUpdateProgressImpl(
        MechanicusBattleEndBuildGearMoreThanWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleEndBuildGearMoreThanWatcherParam *param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v7; // rax
  _DWORD *v8; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int32_t result; // eax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+30h] [rbp-B0h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+60h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 15 build_count:521 48 4 20 target_gadget_id:522 64 8 8 iter:524";
  *(_QWORD *)(v4 + 16) = MechanicusBattleEndBuildGearMoreThanWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 32) = 0;
  __for_range = &param->gadget_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->gadget_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->gadget_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 48) = *v8;
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    &event->gadget_build_num_map,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&event->gadget_build_num_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 64),
           &__y) )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 64));
      p_second = &v9->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      *(_DWORD *)(v4 + 32) += v9->second;
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/watcher_for_activity.cpp",
    "tryUpdateProgressImpl",
    530);
  v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v25,
          (const char (*)[23])"[MECH WATCHER] count: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" param_set:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, &param->gadget_set);
  v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" count_map: ");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v15, &event->gadget_build_num_map);
  v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &param->limit);
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( param->limit <= *(_DWORD *)(v4 + 32) )
    BaseWatcher::addProgress(this, 1u);
  result = 0;
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 540: range 00000000163872A2-0000000016387465
int32_t __cdecl MechanicusBattleEndPureGearDamageWatcher::tryUpdateProgressImpl(
        MechanicusBattleEndPureGearDamageWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleEndPureGearDamageWatcherParam *param)
{
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/watcher_for_activity.cpp",
    "tryUpdateProgressImpl",
    541);
  v4 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v9,
         (const char (*)[37])"[MECH WATCHER] is_pure_gear_damage: ");
  if ( *(char *)(((unsigned __int64)&event->is_pure_gear_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_pure_gear_damage);
  v5 = common::milog::MiLogStream::operator<<(v4, event->is_pure_gear_damage);
  v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v5, (const char (*)[10])" is_succ:");
  if ( *(char *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_succ);
  common::milog::MiLogStream::operator<<(v6, event->is_succ);
  common::milog::MiLogStream::~MiLogStream(&v9);
  if ( *(char *)(((unsigned __int64)&event->is_pure_gear_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_pure_gear_damage);
  if ( event->is_pure_gear_damage )
  {
    if ( *(char *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_succ);
    if ( event->is_succ )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 551: range 0000000016387466-000000001638786D
int32_t __cdecl MechanicusBattleEndCardPickGteqWatcher::tryUpdateProgressImpl(
        MechanicusBattleEndCardPickGteqWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleEndCardPickGteqWatcherParam *param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t result; // eax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v8; // rax
  _DWORD *v9; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+30h] [rbp-B0h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+60h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 14 pick_count:556 48 4 11 card_id:557 64 8 8 iter:559";
  *(_QWORD *)(v4 + 16) = MechanicusBattleEndCardPickGteqWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  if ( *(char *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_succ);
  if ( !event->is_succ )
  {
    result = 0;
  }
  else
  {
    *(_DWORD *)(v4 + 32) = 0;
    __for_range = &param->card_set;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->card_set)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->card_set)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v8 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v4 + 48) = *v9;
      *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                      &event->pick_card_num_map,
                                                                                      (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
      __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&event->pick_card_num_map)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 64),
             &__y) )
      {
        v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 64));
        p_second = &v10->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        *(_DWORD *)(v4 + 32) += v10->second;
      }
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher_for_activity.cpp",
      "tryUpdateProgressImpl",
      565);
    v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v25,
            (const char (*)[23])"[MECH WATCHER] count: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" param_set:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int>(v14, &param->card_set);
    v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" count_map: ");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v16, &event->pick_card_num_map);
    v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &param->limit);
    common::milog::MiLogStream::~MiLogStream(&v25);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(param);
    }
    if ( param->limit <= *(_DWORD *)(v4 + 32) )
      BaseWatcher::addProgress(this, 1u);
    result = 0;
  }
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 575: range 000000001638786E-0000000016387C2A
int32_t __cdecl MechanicusBattleEndCardTargetGteqWatcher::tryUpdateProgressImpl(
        MechanicusBattleEndCardTargetGteqWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleEndCardTargetGteqWatcherParam *param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v7; // rax
  _DWORD *v8; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int32_t result; // eax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+30h] [rbp-B0h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+60h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 9 count:576 48 4 11 card_id:577 64 8 8 iter:579";
  *(_QWORD *)(v4 + 16) = MechanicusBattleEndCardTargetGteqWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 32) = 0;
  __for_range = &param->effect_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->effect_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->effect_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 48) = *v8;
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    &event->card_target_num_map,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&event->card_target_num_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 64),
           &__y) )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 64));
      p_second = &v9->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      *(_DWORD *)(v4 + 32) += v9->second;
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/watcher_for_activity.cpp",
    "tryUpdateProgressImpl",
    585);
  v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v25,
          (const char (*)[23])"[MECH WATCHER] count: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" param_set:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, &param->effect_set);
  v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" count_map: ");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v15, &event->card_target_num_map);
  v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &param->limit);
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( param->limit <= *(_DWORD *)(v4 + 32) )
    BaseWatcher::addProgress(this, 1u);
  result = 0;
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 595: range 0000000016387C2C-0000000016387D85
int32_t __cdecl MechanicusBattleEndGearKillGteqWatcher::tryUpdateProgressImpl(
        MechanicusBattleEndGearKillGteqWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleEndGearKillGteqWatcherParam *param)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  uint32_t gear_kill_num; // ecx
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/watcher_for_activity.cpp",
    "tryUpdateProgressImpl",
    596);
  v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v11,
         (const char (*)[31])"[MECH WATCHER] gear_kill_num: ");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->gear_kill_num);
  v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v5, (const char (*)[8])" limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &param->limit);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&event->gear_kill_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->gear_kill_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->gear_kill_num);
  }
  gear_kill_num = event->gear_kill_num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gear_kill_num >= param->limit )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 606: range 0000000016387D86-0000000016387EDF
int32_t __cdecl MechanicusBattleEndFinChallengeGteqWatcher::tryUpdateProgressImpl(
        MechanicusBattleEndFinChallengeGteqWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleEndFinChallengeGteqWatcherParam *param)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  uint32_t fin_challenge_num; // ecx
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/watcher_for_activity.cpp",
    "tryUpdateProgressImpl",
    607);
  v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v11,
         (const char (*)[35])"[MECH WATCHER] fin_challenge_num: ");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->fin_challenge_num);
  v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v5, (const char (*)[8])" limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &param->limit);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&event->fin_challenge_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->fin_challenge_num >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&event->fin_challenge_num);
  }
  fin_challenge_num = event->fin_challenge_num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( fin_challenge_num >= param->limit )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 617: range 0000000016387EE0-0000000016388031
int32_t __cdecl MechanicusBattleInteractGteqWatcher::tryUpdateProgressImpl(
        MechanicusBattleInteractGteqWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleInteractGteqWatcherParam *param)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  uint32_t interact_num; // ecx
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/watcher_for_activity.cpp",
    "tryUpdateProgressImpl",
    618);
  v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v11,
         (const char (*)[30])"[MECH WATCHER] interact_num: ");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->interact_num);
  v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v5, (const char (*)[8])" count:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &param->count);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&event->interact_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->interact_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->interact_num);
  }
  interact_num = event->interact_num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( interact_num >= param->count )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 629: range 0000000016388032-0000000016388266
int32_t __cdecl MechanicusBattleDifficultEscapeWatcher::tryUpdateProgressImpl(
        MechanicusBattleDifficultEscapeWatcher *const this,
        Player *player,
        const MechanicusDungeonSettleEvent *event,
        const MechanicusBattleDifficultEscapeWatcherParam *param)
{
  bool *p_is_success; // rdx
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  uint32_t escape_monsters; // ecx
  uint32_t difficult_level; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<Config> v11[2]; // [rsp+30h] [rbp-20h] BYREF

  p_is_success = &event->is_success;
  if ( *(char *)(((unsigned __int64)p_is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_success);
  if ( event->is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_teach_difficult_level >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_teach_difficult_level);
    }
    if ( !event->is_teach_difficult_level )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v11);
      p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11)->design_config.txt_config_mgr.mechanicus_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->dungeon_id);
      }
      difficult_level = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(
                          p_mechanicus_config_mgr,
                          event->dungeon_id);
      std::shared_ptr<Config>::~shared_ptr(v11);
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( difficult_level >= param->difficult_level )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->escape_monsters >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->escape_monsters >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&event->escape_monsters);
        }
        escape_monsters = event->escape_monsters;
        if ( *(_BYTE *)(((unsigned __int64)&param->escape_monster >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->escape_monster >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&param->escape_monster);
        }
        if ( escape_monsters <= param->escape_monster )
          BaseWatcher::addProgress(this, 1u);
      }
    }
  }
  return 0;
};

// Line 644: range 0000000016388268-00000000163884CE
int32_t __cdecl MechanicusBattleDifficultGearNumWatcher::tryUpdateProgressImpl(
        MechanicusBattleDifficultGearNumWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleDifficultGearNumWatcherParam *param)
{
  char v4; // bl
  bool *p_is_succ; // rdx
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  char v7; // r12
  uint32_t difficult_level; // ecx
  uint32_t max_gear_num; // ecx
  std::shared_ptr<Config> v13[2]; // [rsp+20h] [rbp-20h] BYREF

  v4 = 0;
  p_is_succ = &event->is_succ;
  if ( *(char *)(((unsigned __int64)p_is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_succ);
  if ( !event->is_succ )
    goto LABEL_8;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v13);
  v4 = 1;
  p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.mechanicus_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->difficult_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->difficult_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->difficult_level);
  }
  if ( !TreatreMechanicusExcelConfigMgr::isTeachDifficultLevel(p_mechanicus_config_mgr, event->difficult_level) )
    v7 = 1;
  else
LABEL_8:
    v7 = 0;
  if ( v4 )
    std::shared_ptr<Config>::~shared_ptr(v13);
  if ( v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->difficult_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->difficult_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->difficult_level);
    }
    difficult_level = event->difficult_level;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( difficult_level >= param->difficult_level )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->max_gear_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->max_gear_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->max_gear_num);
      }
      max_gear_num = event->max_gear_num;
      if ( *(_BYTE *)(((unsigned __int64)&param->gear_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->gear_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->gear_num);
      }
      if ( max_gear_num <= param->gear_num )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 658: range 00000000163884D0-000000001638872E
int32_t __cdecl MechanicusBattleDifficultGearIdNumWatcher::tryUpdateProgressImpl(
        MechanicusBattleDifficultGearIdNumWatcher *const this,
        Player *player,
        const MechanicusBattleEndEvent *event,
        const MechanicusBattleDifficultGearIdNumWatcherParam *param)
{
  char v4; // bl
  bool *p_is_succ; // rdx
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  char v7; // r12
  uint32_t difficult_level; // ecx
  uint32_t used_gear_id_num; // ecx
  std::shared_ptr<Config> v13[2]; // [rsp+20h] [rbp-20h] BYREF

  v4 = 0;
  p_is_succ = &event->is_succ;
  if ( *(char *)(((unsigned __int64)p_is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_succ);
  if ( !event->is_succ )
    goto LABEL_8;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v13);
  v4 = 1;
  p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.mechanicus_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->difficult_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->difficult_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->difficult_level);
  }
  if ( !TreatreMechanicusExcelConfigMgr::isTeachDifficultLevel(p_mechanicus_config_mgr, event->difficult_level) )
    v7 = 1;
  else
LABEL_8:
    v7 = 0;
  if ( v4 )
    std::shared_ptr<Config>::~shared_ptr(v13);
  if ( v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->difficult_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->difficult_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->difficult_level);
    }
    difficult_level = event->difficult_level;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( difficult_level >= param->difficult_level )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->used_gear_id_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->used_gear_id_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->used_gear_id_num);
      }
      used_gear_id_num = event->used_gear_id_num;
      if ( *(_BYTE *)(((unsigned __int64)&param->gear_id_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->gear_id_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->gear_id_num);
      }
      if ( used_gear_id_num <= param->gear_id_num )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 671: range 0000000016388730-0000000016388A7B
int32_t __cdecl GalleryBalloonReachScoreWatcher::tryUpdateProgressImpl(
        GalleryBalloonReachScoreWatcher *const this,
        Player *player,
        const GalleryBalloonSettleEvent *event,
        const GalleryBalloonReachScoreWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t gallery_id; // ecx
  common::milog::MiLogStream *v8; // r13
  int32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BalloonSettleInfo> >::pointer v10; // rax
  uint32_t v11; // ecx
  std::map<unsigned int,proto::BalloonSettleInfo>::key_type __x; // [rsp+24h] [rbp-9Ch] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BalloonSettleInfo> >::_Self __y; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 iter:676";
  *(_QWORD *)(v4 + 16) = GalleryBalloonReachScoreWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_single >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_single >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_single);
    }
    if ( event->is_single )
    {
      __x = Player::getUid(player);
      *(std::map<unsigned int,proto::BalloonSettleInfo>::const_iterator *)(v4 + 32) = std::map<unsigned int,proto::BalloonSettleInfo>::find(
                                                                                        &event->player_settle_info_map,
                                                                                        &__x);
      __y._M_node = std::map<unsigned int,proto::BalloonSettleInfo>::end(&event->player_settle_info_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BalloonSettleInfo> >::_Self *)(v4 + 32),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/watcher_for_activity.cpp",
          "tryUpdateProgressImpl",
          679);
        v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v16,
               (const char (*)[50])"[GALLERY] uid not in player_settle_info_map, uid:");
        __x = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = -1;
        goto LABEL_19;
      }
      v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BalloonSettleInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BalloonSettleInfo> > *const)(v4 + 32));
      v11 = proto::BalloonSettleInfo::final_score(&v10->second);
      if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->score);
      }
      if ( v11 >= param->score )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  result = 0;
LABEL_19:
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 693: range 0000000016388A7C-0000000016388DC7
int32_t __cdecl GalleryFallReachScoreWatcher::tryUpdateProgressImpl(
        GalleryFallReachScoreWatcher *const this,
        Player *player,
        const GalleryFallSettleEvent *event,
        const GalleryFallReachScoreWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t gallery_id; // ecx
  common::milog::MiLogStream *v8; // r13
  int32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FallSettleInfo> >::pointer v10; // rax
  uint32_t v11; // ecx
  std::map<unsigned int,proto::FallSettleInfo>::key_type __x; // [rsp+24h] [rbp-9Ch] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FallSettleInfo> >::_Self __y; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 iter:698";
  *(_QWORD *)(v4 + 16) = GalleryFallReachScoreWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_single >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_single >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_single);
    }
    if ( event->is_single )
    {
      __x = Player::getUid(player);
      *(std::map<unsigned int,proto::FallSettleInfo>::const_iterator *)(v4 + 32) = std::map<unsigned int,proto::FallSettleInfo>::find(
                                                                                     &event->player_settle_info_map,
                                                                                     &__x);
      __y._M_node = std::map<unsigned int,proto::FallSettleInfo>::end(&event->player_settle_info_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FallSettleInfo> >::_Self *)(v4 + 32),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/watcher_for_activity.cpp",
          "tryUpdateProgressImpl",
          701);
        v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v16,
               (const char (*)[50])"[GALLERY] uid not in player_settle_info_map, uid:");
        __x = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = -1;
        goto LABEL_19;
      }
      v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FallSettleInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FallSettleInfo> > *const)(v4 + 32));
      v11 = proto::FallSettleInfo::final_score(&v10->second);
      if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->score);
      }
      if ( v11 >= param->score )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  result = 0;
LABEL_19:
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 715: range 0000000016388DC8-0000000016388F9F
int32_t __cdecl FleurFairMusicGameReachScoreWatcher::tryUpdateProgressImpl(
        FleurFairMusicGameReachScoreWatcher *const this,
        Player *player,
        const FleurFairMusicGameSettleEvent *event,
        const FleurFairMusicGameReachScoreWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t score; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  char v10; // al
  int32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-78h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 iter:716";
  *(_QWORD *)(v4 + 16) = FleurFairMusicGameReachScoreWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 32) = std::map<unsigned int,unsigned int>::find(
                                                                        &param->music_basic_id_2_score_map,
                                                                        &event->music_basic_id);
  __y._M_node = std::map<unsigned int,unsigned int>::end(&param->music_basic_id_2_score_map)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 32),
          &__y) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->score);
  }
  score = event->score;
  v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 32));
  p_second = &v8->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_second);
  }
  if ( score >= v8->second )
    v10 = 1;
  else
LABEL_11:
    v10 = 0;
  if ( v10 )
    BaseWatcher::addProgress(this, 1u);
  result = 0;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 726: range 0000000016388FA0-0000000016389898
int32_t __cdecl FinishAllArenaChallengeWatcherInScheduleWatcher::tryUpdateProgressImpl(
        FinishAllArenaChallengeWatcherInScheduleWatcher *const this,
        Player *player,
        const ChallengeFinishEvent *event,
        const FinishAllArenaChallengeWatcherInScheduleWatcherParam *param)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  uint32_t challenge_index; // ecx
  uint32_t group_id; // edx
  std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  const BaseActivity *p_watcher_id; // rdi
  unsigned int *v26; // rax
  uint32_t *v27; // rdx
  std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  int32_t result; // eax
  uint32_t watcher_id; // [rsp+2Ch] [rbp-174h]
  std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::const_iterator __for_begin_0; // [rsp+40h] [rbp-160h] BYREF
  std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::const_iterator __for_end_0; // [rsp+48h] [rbp-158h] BYREF
  const ActivityArenaChallengeExcelConfigMgr *arena_challenge_config_mgr; // [rsp+50h] [rbp-150h]
  const std::unordered_set<unsigned int> *__for_range_1; // [rsp+58h] [rbp-148h]
  const std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> *__for_range; // [rsp+60h] [rbp-140h]
  const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > *v41; // [rsp+68h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *_; // [rsp+70h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *arena_challenge_level_config_map; // [rsp+78h] [rbp-128h]
  const std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> *__for_range_0; // [rsp+80h] [rbp-120h]
  const std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> *v45; // [rsp+88h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::type *__0; // [rsp+90h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::type *config; // [rsp+98h] [rbp-108h]
  std::shared_ptr<Config> v48; // [rsp+A0h] [rbp-100h] BYREF
  common::milog::MiLogStream v49; // [rsp+B0h] [rbp-F0h] BYREF
  char v50[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 15 schedule_id:738 64 4 22 arena_challenge_id:739 80 4 25 arena_challenge_level:740 96 8 "
                        "8 iter:757 128 16 16 activity_ptr:732";
  *(_QWORD *)(v4 + 16) = FinishAllArenaChallengeWatcherInScheduleWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_success);
  }
  if ( !event->is_success )
  {
    v7 = 0;
    goto LABEL_46;
  }
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<ArenaChallengeActivity>((PlayerActivityComp *const)(v4 + 128));
  if ( std::operator==<ArenaChallengeActivity>(0LL, (const std::shared_ptr<ArenaChallengeActivity> *)(v4 + 128)) )
  {
    v7 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v48);
    arena_challenge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->design_config.txt_config_mgr.activity_arena_challenge_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v48);
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 64) = 0;
    *(_DWORD *)(v4 + 80) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->challenge_index);
    }
    challenge_index = event->challenge_index;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->group_id);
    }
    group_id = event->group_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->scene_id);
    }
    if ( ActivityArenaChallengeExcelConfigMgr::findLevelByChallengeIndex(
           arena_challenge_config_mgr,
           event->scene_id,
           group_id,
           challenge_index,
           (uint32_t *)(v4 + 48),
           (uint32_t *)(v4 + 64),
           (uint32_t *)(v4 + 80)) )
    {
      v7 = 0;
    }
    else
    {
      v10 = std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( BaseActivity::getScheduleId((const BaseActivity *const)v10) == *(_DWORD *)(v4 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(param);
        }
        if ( param->arena_challenge_schedule_id == *(_DWORD *)(v4 + 48) )
        {
          if ( std::unordered_set<unsigned int>::empty(&param->watcher_id_set) )
          {
            *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::find(&arena_challenge_config_mgr->arena_challenge_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::key_type *)(v4 + 48));
            __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::_Base_ptr)std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::end(&arena_challenge_config_mgr->arena_challenge_config_map)._M_cur;
            if ( std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false>(
                   (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)(v4 + 96),
                   (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)&__for_end_0) )
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/watcher/watcher_for_activity.cpp",
                "tryUpdateProgressImpl",
                760);
              v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      &v49,
                      (const char (*)[13])"schedule_id:");
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v4 + 48));
              v23 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      v22,
                      (const char (*)[46])" not in arena_challenge_config_map, activity:");
              v24 = std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v23, v24);
              common::milog::MiLogStream::~MiLogStream(&v49);
              v7 = -1;
              goto LABEL_45;
            }
            __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false,false> *const)(v4 + 96))->second;
            __for_begin._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::begin(__for_range)._M_cur;
            __for_end._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::end(__for_range)._M_cur;
            while ( std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false>(
                      &__for_begin,
                      &__for_end) )
            {
              v41 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false,false>::operator*(&__for_begin);
              _ = std::get<0ul,unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>(v41);
              arena_challenge_level_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>(v41);
              __for_range_0 = arena_challenge_level_config_map;
              __for_begin_0._M_node = std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::begin(arena_challenge_level_config_map)._M_node;
              __for_end_0._M_node = std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::end(__for_range_0)._M_node;
              while ( std::operator!=(&__for_begin_0, &__for_end_0) )
              {
                v45 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig>>::operator*(&__for_begin_0);
                __0 = std::get<0ul,unsigned int const,data::ActivityArenaChallengeExcelConfig>(v45);
                config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityArenaChallengeExcelConfig>(v45);
                p_watcher_id = (const BaseActivity *)std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&config->watcher_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->watcher_id >> 3)
                                                                        + 0x7FFF8000) )
                {
                  p_watcher_id = (const BaseActivity *)&config->watcher_id;
                  __asan_report_load4(&config->watcher_id);
                }
                if ( !BaseActivity::isWatcherFinished(p_watcher_id, config->watcher_id) )
                {
                  v7 = 0;
                  goto LABEL_45;
                }
                std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig>>::operator++(&__for_begin_0);
              }
              std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false,false>::operator++(&__for_begin);
            }
          }
          else
          {
            __for_range_1 = &param->watcher_id_set;
            __for_begin_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::_Base_ptr)std::unordered_set<unsigned int>::begin(&param->watcher_id_set)._M_cur;
            __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::_Base_ptr)std::unordered_set<unsigned int>::end(&param->watcher_id_set)._M_cur;
            while ( std::__detail::operator!=<unsigned int,false>(
                      (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin_0,
                      (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_0) )
            {
              v26 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin_0);
              v27 = v26;
              if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v26);
              }
              watcher_id = *v27;
              v28 = std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              if ( !BaseActivity::isWatcherFinished((const BaseActivity *const)v28, watcher_id) )
              {
                v7 = 0;
                goto LABEL_45;
              }
              std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin_0);
            }
          }
          BaseWatcher::addProgress(this, 1u);
          v7 = 0;
          goto LABEL_45;
        }
        v7 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/watcher/watcher_for_activity.cpp",
          "tryUpdateProgressImpl",
          747);
        v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v49,
                (const char (*)[33])"schedule_id not match! scene_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->scene_id);
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" group_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &event->group_id);
        v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v14,
                (const char (*)[18])" challenge_index:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &event->challenge_index);
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" schedule_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" activity:");
        v20 = std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v19, v20);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v7 = -1;
      }
    }
  }
LABEL_45:
  std::shared_ptr<ArenaChallengeActivity>::~shared_ptr((std::shared_ptr<ArenaChallengeActivity> *const)(v4 + 128));
LABEL_46:
  result = v7;
  if ( v50 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 791: range 000000001638989A-0000000016389A0A
int32_t __cdecl MistTrialDungeonStatWatcher::tryUpdateProgressImpl(
        MistTrialDungeonStatWatcher *const this,
        Player *player,
        const MistTrialStatUpdateEvent *event,
        const MistTrialDungeonStatWatcherParam *param)
{
  uint32_t *p_dungeon_id; // rdx
  uint32_t dungeon_id; // ecx
  uint32_t stat_id; // ecx
  MistTrialDungeonStatWatcher *v7; // rdx

  p_dungeon_id = &event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_dungeon_id);
  }
  dungeon_id = event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( dungeon_id == param->dungeon_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->stat_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->stat_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->stat_id);
    }
    stat_id = event->stat_id;
    if ( *(_BYTE *)(((unsigned __int64)&param->stat_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->stat_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->stat_id);
    }
    if ( stat_id == param->stat_id )
    {
      v7 = this;
      if ( *(_BYTE *)(((unsigned __int64)&event->delta_val >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->delta_val >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->delta_val);
      }
      BaseWatcher::addProgress(v7, event->delta_val);
    }
  }
  return 0;
};

// Line 801: range 0000000016389A0C-0000000016389F8B
int32_t __cdecl FinishDungeonMistTrialStatWatcher::tryUpdateProgressImpl(
        FinishDungeonMistTrialStatWatcher *const this,
        Player *player,
        const FinishMistTrialDungeonEvent *event,
        const FinishDungeonMistTrialStatWatcherParam *param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t dungeon_id; // ecx
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 val:806 64 8 8 iter:807";
  *(_QWORD *)(v4 + 16) = FinishDungeonMistTrialStatWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->dungeon_id);
  }
  dungeon_id = event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( dungeon_id == param->dungeon_id )
  {
    *(_DWORD *)(v4 + 48) = 0;
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    &event->stat_id_map,
                                                                                    &param->stat_id);
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&event->stat_id_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 64),
           &__y) )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 64));
      p_second = &v9->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      *(_DWORD *)(v4 + 48) = v9->second;
    }
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher_for_activity.cpp",
      "tryUpdateProgressImpl",
      812);
    v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            &v17,
            (const char (*)[63])"[MIST_TRIAL] FinishDungeonMistTrialStatWatcher, param.stat_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &param->stat_id);
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" val:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    if ( *(_BYTE *)(((unsigned __int64)&param->ordering_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->ordering_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->ordering_type);
    }
    switch ( param->ordering_type )
    {
      case Less_0:
        if ( *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->stat_value);
        }
        if ( param->stat_value <= *(_DWORD *)(v4 + 48) )
          goto LABEL_38;
        goto LABEL_36;
      case Equal_0:
        if ( *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->stat_value);
        }
        if ( param->stat_value == *(_DWORD *)(v4 + 48) )
          goto LABEL_36;
        goto LABEL_38;
      case Greater_1:
        if ( *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->stat_value);
        }
        if ( param->stat_value < *(_DWORD *)(v4 + 48) )
          goto LABEL_36;
        goto LABEL_38;
      case LessOrEqual:
        if ( *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->stat_value);
        }
        if ( param->stat_value >= *(_DWORD *)(v4 + 48) )
          goto LABEL_36;
        goto LABEL_38;
      case GreaterOrEqual:
        if ( *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->stat_value >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->stat_value);
        }
        if ( param->stat_value <= *(_DWORD *)(v4 + 48) )
LABEL_36:
          BaseWatcher::addProgress(this, 1u);
LABEL_38:
        result = 0;
        break;
      default:
        result = -1;
        break;
    }
  }
  else
  {
    result = 0;
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 863: range 0000000016389F8C-000000001638A216
int32_t __cdecl ActivityScoreExceedValueWatcher::tryUpdateProgressImpl(
        ActivityScoreExceedValueWatcher *const this,
        Player *player,
        const ActivityScoreExceedValueEvent *event,
        const ActivityScoreExceedValueWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t activity_id; // ecx
  uint32_t ActivityComp; // ecx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  ActivityScoreExceedValueWatcher *v11; // rcx
  int32_t result; // eax
  char v15[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:869";
  *(_QWORD *)(v4 + 16) = ActivityScoreExceedValueWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  activity_id = param->activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->activity_id);
  }
  if ( activity_id == event->activity_id )
  {
    ActivityComp = (unsigned int)Player::getActivityComp(player);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v4 + 32), ActivityComp);
    if ( std::operator!=<BaseActivity>(0LL, (const std::shared_ptr<BaseActivity> *)(v4 + 32)) )
    {
      v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( BaseActivity::isOpening(v9, 0) )
      {
        v11 = this;
        if ( *(_BYTE *)(((unsigned __int64)&event->add_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->add_score >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&event->add_score);
        }
        BaseWatcher::addProgress(v11, event->add_score);
      }
    }
    std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v4 + 32));
  }
  result = 0;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 880: range 000000001638A218-000000001638A36A
int32_t __cdecl GroupSummerTimeSprintBoatReachPointsWatcher::tryUpdateProgressImpl(
        GroupSummerTimeSprintBoatReachPointsWatcher *const this,
        Player *player,
        const GroupSummerTimeSprintBoatReachPointsEvent *event,
        const GroupSummerTimeSprintBoatReachPointsWatcherParam *param)
{
  uint32_t *p_group_id; // rdx
  uint32_t group_id; // ecx
  uint32_t total_points; // ebx
  GroupSummerTimeSprintBoatReachPointsWatcher *v8; // rcx

  p_group_id = &event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_group_id);
  }
  group_id = event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( group_id != param->group_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->total_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->total_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->total_points);
  }
  total_points = event->total_points;
  if ( total_points > BaseWatcher::getProgress(this) )
  {
    v8 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->total_points >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->total_points >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->total_points);
    }
    BaseWatcher::tryCorrectProgress(v8, event->total_points);
  }
  return 0;
};

// Line 893: range 000000001638A36C-000000001638A539
int32_t __cdecl ActivityScoreExceedValueWatcher::refreshProgressImpl(
        ActivityScoreExceedValueWatcher *const this,
        Player *player,
        const ActivityScoreExceedValueWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t ActivityComp; // ecx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t CurScore; // eax
  int32_t result; // eax
  char v13[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:894";
  *(_QWORD *)(v3 + 16) = ActivityScoreExceedValueWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ActivityComp = (unsigned int)Player::getActivityComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), ActivityComp);
  if ( std::operator!=<BaseActivity>(0LL, (const std::shared_ptr<BaseActivity> *)(v3 + 32)) )
  {
    v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( BaseActivity::isOpening(v7, 0) && !BaseWatcher::getProgress(this) )
    {
      v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      CurScore = BaseActivity::getCurScore(v9);
      BaseWatcher::addProgress(this, CurScore);
    }
  }
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  result = 0;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 905: range 000000001638A53A-000000001638A643
int32_t __cdecl GalleryBuoyantCombatReachScoreWatcher::tryUpdateProgressImpl(
        GalleryBuoyantCombatReachScoreWatcher *const this,
        Player *player,
        const GalleryBuoyantCombatSettleEvent *event,
        const GalleryBuoyantCombatReachScoreWatcherParam *param)
{
  uint32_t *p_gallery_id; // rdx
  uint32_t gallery_id; // ecx
  uint32_t v6; // ecx

  p_gallery_id = &event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
  {
    v6 = proto::BuoyantCombatGallerySettleInfo::final_score(&event->gallery_settle_info);
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( v6 >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 918: range 000000001638A644-000000001638A73C
int32_t __cdecl BuoyantCombatReachNewScoreLevelWatcher::tryUpdateProgressImpl(
        BuoyantCombatReachNewScoreLevelWatcher *const this,
        Player *player,
        const BuoyantCombatReachNewScoreLevelEvent *event,
        const BuoyantCombatReachNewScoreLevelWatcherParam *param)
{
  uint32_t old_score_level; // ecx
  uint32_t score_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->old_score_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->old_score_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->old_score_level);
  }
  old_score_level = event->old_score_level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( old_score_level < param->score_level )
  {
    score_level = param->score_level;
    if ( *(_BYTE *)(((unsigned __int64)&event->new_score_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->new_score_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->new_score_level);
    }
    if ( score_level <= event->new_score_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 928: range 000000001638A73E-000000001638A7E9
int32_t __cdecl BounceConjuringFinishCountWatcher::tryUpdateProgressImpl(
        BounceConjuringFinishCountWatcher *const this,
        Player *player,
        const GalleryTimeUpEvent *event,
        const BounceConjuringFinishCountWatcherParam *param)
{
  uint32_t *p_gallery_id; // rdx
  uint32_t gallery_id; // ecx

  p_gallery_id = &event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 938: range 000000001638A7EA-000000001638A91A
int32_t __cdecl BounceConjuringScoreWatcher::tryUpdateProgressImpl(
        BounceConjuringScoreWatcher *const this,
        Player *player,
        const GalleryBounceConjuringSettleEvent *event,
        const BounceConjuringScoreWatcherParam *param)
{
  uint32_t *p_gallery_id; // rdx
  uint32_t gallery_id; // ecx
  uint32_t total_score; // ecx

  p_gallery_id = &event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->total_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->total_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->total_score);
    }
    total_score = event->total_score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( total_score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 947: range 000000001638A91C-000000001638AB2A
int32_t __cdecl BounceConjuringScoreWatcher::refreshProgressImpl(
        BounceConjuringScoreWatcher *const this,
        Player *player,
        const BounceConjuringScoreWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<BounceConjuringActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  uint32_t BestScoreByGalleryId; // ecx
  int32_t result; // eax
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:953";
  *(_QWORD *)(v3 + 16) = BounceConjuringScoreWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !BaseWatcher::getProgress(this) )
  {
    Player::getActivityComp(player);
    PlayerActivityComp::findOpenningActivity<BounceConjuringActivity>((PlayerActivityComp *const)(v3 + 32));
    if ( std::operator!=<BounceConjuringActivity>(0LL, (const std::shared_ptr<BounceConjuringActivity> *)(v3 + 32)) )
    {
      v6 = std::__shared_ptr_access<BounceConjuringActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BounceConjuringActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      BestScoreByGalleryId = BounceConjuringActivity::getBestScoreByGalleryId(v6, param->gallery_id);
      if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->score);
      }
      if ( BestScoreByGalleryId >= param->score )
        BaseWatcher::addProgress(this, 1u);
    }
    std::shared_ptr<BounceConjuringActivity>::~shared_ptr((std::shared_ptr<BounceConjuringActivity> *const)(v3 + 32));
  }
  result = 0;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 967: range 000000001638AB2C-000000001638AB93
int32_t __cdecl ChessKillMonstersWatcher::tryUpdateProgressImpl(
        ChessKillMonstersWatcher *const this,
        Player *player,
        const ChessDungeonSettleEvent *event,
        const ChessKillMonstersWatcherParam *param)
{
  ChessKillMonstersWatcher *v4; // rdx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->kill_monsters >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->kill_monsters >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->kill_monsters);
  }
  BaseWatcher::addProgress(v4, event->kill_monsters);
  return 0;
};

// Line 975: range 000000001638AB94-000000001638AC03
int32_t __cdecl ChessCostBuildingPointsWatcher::tryUpdateProgressImpl(
        ChessCostBuildingPointsWatcher *const this,
        Player *player,
        const ChessDungeonSettleEvent *event,
        const ChessCostBuildingPointsWatcherParam *param)
{
  ChessCostBuildingPointsWatcher *v4; // rcx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->cost_building_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cost_building_points >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&event->cost_building_points);
  }
  BaseWatcher::addProgress(v4, event->cost_building_points);
  return 0;
};

// Line 983: range 000000001638AC04-000000001638AD8A
int32_t __cdecl ChessDungeonAddScoreWatcher::tryUpdateProgressImpl(
        ChessDungeonAddScoreWatcher *const this,
        Player *player,
        const ChessDungeonSettleEvent *event,
        const ChessDungeonAddScoreWatcherParam *param)
{
  bool *p_is_teach; // rdx
  uint32_t chess_map_id; // ecx
  uint32_t add_score; // ecx

  p_is_teach = &event->is_teach;
  if ( *(char *)(((unsigned __int64)p_is_teach >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_teach);
  if ( !event->is_teach )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->chess_map_id);
    }
    chess_map_id = event->chess_map_id;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( chess_map_id == param->min_map_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->add_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->add_score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->add_score);
      }
      add_score = event->add_score;
      if ( *(_BYTE *)(((unsigned __int64)&param->need_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->need_score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->need_score);
      }
      if ( add_score >= param->need_score )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 994: range 000000001638AD8C-000000001638AF52
int32_t __cdecl ChessDungeonEscapedMonstersWatcher::tryUpdateProgressImpl(
        ChessDungeonEscapedMonstersWatcher *const this,
        Player *player,
        const ChessDungeonSettleEvent *event,
        const ChessDungeonEscapedMonstersWatcherParam *param)
{
  uint32_t chess_map_id; // ecx
  uint32_t escaped_monsters; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_succ);
  }
  if ( event->is_succ )
  {
    if ( *(char *)(((unsigned __int64)&event->is_teach >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_teach);
    if ( !event->is_teach )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->chess_map_id);
      }
      chess_map_id = event->chess_map_id;
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( chess_map_id == param->min_map_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->escaped_monsters >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->escaped_monsters >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->escaped_monsters);
        }
        escaped_monsters = event->escaped_monsters;
        if ( *(_BYTE *)(((unsigned __int64)&param->monster_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->monster_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->monster_num);
        }
        if ( escaped_monsters < param->monster_num )
          BaseWatcher::addProgress(this, 1u);
      }
    }
  }
  return 0;
};

// Line 1005: range 000000001638AF54-000000001638B122
int32_t __cdecl ChessDungeonTowerCountWatcher::tryUpdateProgressImpl(
        ChessDungeonTowerCountWatcher *const this,
        Player *player,
        const ChessDungeonSettleEvent *event,
        const ChessDungeonTowerCountWatcherParam *param)
{
  uint32_t chess_map_id; // ecx
  uint32_t tower_count; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_succ);
  }
  if ( event->is_succ )
  {
    if ( *(char *)(((unsigned __int64)&event->is_teach >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_teach);
    if ( !event->is_teach )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->chess_map_id);
      }
      chess_map_id = event->chess_map_id;
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( chess_map_id >= param->min_map_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->tower_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->tower_count >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&event->tower_count);
        }
        tower_count = event->tower_count;
        if ( *(_BYTE *)(((unsigned __int64)&param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->count);
        }
        if ( tower_count <= param->count )
          BaseWatcher::addProgress(this, 1u);
      }
    }
  }
  return 0;
};

// Line 1016: range 000000001638B124-000000001638B403
int32_t __cdecl ChessDungeonCardCountLessOrEqualWatcher::tryUpdateProgressImpl(
        ChessDungeonCardCountLessOrEqualWatcher *const this,
        Player *player,
        const ChessDungeonSettleEvent *event,
        const ChessDungeonCardCountLessOrEqualWatcherParam *param)
{
  uint32_t chess_map_id; // ecx
  uint32_t v5; // ecx
  uint32_t card_count; // [rsp+2Ch] [rbp-34h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-28h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v13; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *card_quality; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_succ);
  }
  if ( event->is_succ )
  {
    if ( *(char *)(((unsigned __int64)&event->is_teach >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_teach);
    if ( !event->is_teach )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->chess_map_id);
      }
      chess_map_id = event->chess_map_id;
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( chess_map_id >= param->min_map_id )
      {
        card_count = 0;
        __for_range = &event->selected_card_quality_count_map;
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&event->selected_card_quality_count_map)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(&event->selected_card_quality_count_map)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          card_quality = std::get<0ul,unsigned int const,unsigned int>(v13);
          count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
          if ( *(_BYTE *)(((unsigned __int64)card_quality >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)card_quality & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_quality >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(card_quality);
          }
          v5 = *card_quality;
          if ( *(_BYTE *)(((unsigned __int64)&param->quality >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->quality >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&param->quality);
          }
          if ( v5 >= param->quality )
          {
            if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(count);
            }
            card_count += *count;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->count);
        }
        if ( card_count <= param->count )
          BaseWatcher::addProgress(this, 1u);
      }
    }
  }
  return 0;
};

// Line 1038: range 000000001638B404-000000001638B6E3
int32_t __cdecl ChessDungeonCardCountGreaterThanWatcher::tryUpdateProgressImpl(
        ChessDungeonCardCountGreaterThanWatcher *const this,
        Player *player,
        const ChessDungeonSettleEvent *event,
        const ChessDungeonCardCountGreaterThanWatcherParam *param)
{
  uint32_t chess_map_id; // ecx
  uint32_t v5; // ecx
  uint32_t card_count; // [rsp+2Ch] [rbp-34h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-28h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v13; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *card_quality; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_succ);
  }
  if ( event->is_succ )
  {
    if ( *(char *)(((unsigned __int64)&event->is_teach >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_teach);
    if ( !event->is_teach )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->chess_map_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->chess_map_id);
      }
      chess_map_id = event->chess_map_id;
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( chess_map_id >= param->min_map_id )
      {
        card_count = 0;
        __for_range = &event->selected_card_quality_count_map;
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&event->selected_card_quality_count_map)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(&event->selected_card_quality_count_map)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          card_quality = std::get<0ul,unsigned int const,unsigned int>(v13);
          count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
          if ( *(_BYTE *)(((unsigned __int64)card_quality >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)card_quality & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_quality >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(card_quality);
          }
          v5 = *card_quality;
          if ( *(_BYTE *)(((unsigned __int64)&param->quality >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->quality >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&param->quality);
          }
          if ( v5 >= param->quality )
          {
            if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(count);
            }
            card_count += *count;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->count);
        }
        if ( card_count > param->count )
          BaseWatcher::addProgress(this, 1u);
      }
    }
  }
  return 0;
};

// Line 1060: range 000000001638B6E4-000000001638B78F
int32_t __cdecl ChessLevelWatcher::tryUpdateProgressImpl(
        ChessLevelWatcher *const this,
        Player *player,
        const ChessLevelUpEvent *event,
        const ChessLevelWatcherParam *param)
{
  uint32_t *p_level; // rdx
  uint32_t level; // ecx

  p_level = &event->level;
  if ( *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level);
  }
  level = event->level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level >= param->need_level )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1071: range 000000001638B790-000000001638B841
int32_t __cdecl LunaRiteSearchWatcher::tryUpdateProgressImpl(
        LunaRiteSearchWatcher *const this,
        Player *player,
        const LunaRiteSearchEvent *event,
        const LunaRiteSearchWatcherParam *param)
{
  uint32_t *p_area_id; // rdx
  uint32_t area_id; // ecx

  p_area_id = &event->area_id;
  if ( *(_BYTE *)(((unsigned __int64)p_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_area_id);
  }
  area_id = event->area_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( area_id == param->area_id )
    LunaRiteSearchWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 1080: range 000000001638B842-000000001638BA3D
int32_t __cdecl LunaRiteSearchWatcher::refreshProgressImpl(
        LunaRiteSearchWatcher *const this,
        Player *player,
        const LunaRiteSearchWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<LunaRiteActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  LunaRiteActivity *v8; // rcx
  int32_t result; // eax
  uint32_t percent; // [rsp+2Ch] [rbp-74h]
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 27 luna_rite_activity_ptr:1081";
  *(_QWORD *)(v3 + 16) = LunaRiteSearchWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<LunaRiteActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( !std::operator==<LunaRiteActivity>((const std::shared_ptr<LunaRiteActivity> *)(v3 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<LunaRiteActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LunaRiteActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( BaseActivity::isOpening((const BaseActivity *const)v6, 0) )
    {
      v8 = std::__shared_ptr_access<LunaRiteActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LunaRiteActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      percent = LunaRiteActivity::getSearchingPercent(v8, param->area_id);
      if ( percent > BaseWatcher::getProgress(this) )
        BaseWatcher::tryCorrectProgress(this, percent);
    }
  }
  std::shared_ptr<LunaRiteActivity>::~shared_ptr((std::shared_ptr<LunaRiteActivity> *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1096: range 000000001638BA3E-000000001638BD95
int32_t __cdecl SumoStageScoreReachWatcher::tryUpdateProgressImpl(
        SumoStageScoreReachWatcher *const this,
        Player *player,
        const SumoGallerySettleEvent *event,
        const SumoStageScoreReachWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t ActivityComp; // ecx
  std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t stage_id; // ecx
  uint32_t score; // ecx
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 22 sumo_activity_ptr:1097";
  *(_QWORD *)(v4 + 16) = SumoStageScoreReachWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  ActivityComp = (unsigned int)Player::getActivityComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->activity_id);
  }
  PlayerActivityComp::findActivity<SumoActivity>((PlayerActivityComp *const)(v4 + 32), ActivityComp);
  if ( std::operator==<SumoActivity>((const std::shared_ptr<SumoActivity> *)(v4 + 32), 0LL)
    || (v8 = std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32)),
        !BaseActivity::isOpening(v8, 0)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher_for_activity.cpp",
      "tryUpdateProgressImpl",
      1100);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v15,
      (const char (*)[33])"[SUMO] sumo activity not opening");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->stage_id);
    }
    stage_id = event->stage_id;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( stage_id == param->stage_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->score);
      }
      score = event->score;
      if ( *(_BYTE *)(((unsigned __int64)&param->target_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->target_score);
      }
      if ( score >= param->target_score )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  std::shared_ptr<SumoActivity>::~shared_ptr((std::shared_ptr<SumoActivity> *const)(v4 + 32));
  result = 0;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1115: range 000000001638BD96-000000001638C00F
int32_t __cdecl SumoTotalMaxScoreReachWatcher::tryUpdateProgressImpl(
        SumoTotalMaxScoreReachWatcher *const this,
        Player *player,
        const SumoGallerySettleEvent *event,
        const SumoTotalMaxScoreReachWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t ActivityComp; // ecx
  std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  SumoTotalMaxScoreReachWatcher *v10; // rcx
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 22 sumo_activity_ptr:1116";
  *(_QWORD *)(v4 + 16) = SumoTotalMaxScoreReachWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  ActivityComp = (unsigned int)Player::getActivityComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->activity_id);
  }
  PlayerActivityComp::findActivity<SumoActivity>((PlayerActivityComp *const)(v4 + 32), ActivityComp);
  if ( std::operator==<SumoActivity>((const std::shared_ptr<SumoActivity> *)(v4 + 32), 0LL)
    || (v8 = std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32)),
        !BaseActivity::isOpening(v8, 0)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher_for_activity.cpp",
      "tryUpdateProgressImpl",
      1119);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v13,
      (const char (*)[33])"[SUMO] sumo activity not opening");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v10 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->all_stage_max_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->all_stage_max_score >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&event->all_stage_max_score);
    }
    BaseWatcher::tryCorrectProgress(v10, event->all_stage_max_score);
  }
  std::shared_ptr<SumoActivity>::~shared_ptr((std::shared_ptr<SumoActivity> *const)(v4 + 32));
  result = 0;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1128: range 000000001638C010-000000001638C03F
int32_t __cdecl PlantFlowerSetWishWatcher::tryUpdateProgressImpl(
        PlantFlowerSetWishWatcher *const this,
        Player *player,
        const PlantFlowerSetWishEvent *event,
        const PlantFlowerSetWishWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1135: range 000000001638C040-000000001638C06F
int32_t __cdecl PlantFlowerGiveFlowerWatcher::tryUpdateProgressImpl(
        PlantFlowerGiveFlowerWatcher *const this,
        Player *player,
        const PlantFlowerGiveFlowerEvent *event,
        const PlantFlowerGiveFlowerWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1142: range 000000001638C070-000000001638C1E5
int32_t __cdecl PlantFlowerObtainFlowerTypeWatcher::refreshProgressImpl(
        PlantFlowerObtainFlowerTypeWatcher *const this,
        Player *player,
        const PlantFlowerObtainFlowerTypeWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  uint32_t obtained_flower_type_num; // [rsp+2Ch] [rbp-74h]
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:1143";
  *(_QWORD *)(v3 + 16) = PlantFlowerObtainFlowerTypeWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<PlantFlowerActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<PlantFlowerActivity>(0LL, (const std::shared_ptr<PlantFlowerActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    obtained_flower_type_num = PlantFlowerActivity::getPlantObtainedFlowerTypeNum(v6);
    if ( obtained_flower_type_num != BaseWatcher::getProgress(this) )
      BaseWatcher::tryCorrectProgress(this, obtained_flower_type_num);
  }
  std::shared_ptr<PlantFlowerActivity>::~shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)(v3 + 32));
  result = 0;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1155: range 000000001638C1E6-000000001638C216
int32_t __cdecl PlantFlowerObtainFlowerTypeWatcher::tryUpdateProgressImpl(
        PlantFlowerObtainFlowerTypeWatcher *const this,
        Player *player,
        const PlantFlowerObtainFlowerEvent *event,
        const PlantFlowerObtainFlowerTypeWatcherParam *param)
{
  return PlantFlowerObtainFlowerTypeWatcher::refreshProgressImpl(this, player, param);
};

// Line 1161: range 000000001638C218-000000001638C38D
int32_t __cdecl PlantFlowerCommonObtainFlowerTypeWatcher::refreshProgressImpl(
        PlantFlowerCommonObtainFlowerTypeWatcher *const this,
        Player *player,
        const PlantFlowerCommonObtainFlowerTypeWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  uint32_t obtained_flower_type_num; // [rsp+2Ch] [rbp-74h]
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:1162";
  *(_QWORD *)(v3 + 16) = PlantFlowerCommonObtainFlowerTypeWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<PlantFlowerActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<PlantFlowerActivity>(0LL, (const std::shared_ptr<PlantFlowerActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    obtained_flower_type_num = PlantFlowerActivity::getCommonObtainedFlowerTypeNum(v6);
    if ( obtained_flower_type_num != BaseWatcher::getProgress(this) )
      BaseWatcher::tryCorrectProgress(this, obtained_flower_type_num);
  }
  std::shared_ptr<PlantFlowerActivity>::~shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)(v3 + 32));
  result = 0;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1174: range 000000001638C38E-000000001638C3BE
int32_t __cdecl PlantFlowerCommonObtainFlowerTypeWatcher::tryUpdateProgressImpl(
        PlantFlowerCommonObtainFlowerTypeWatcher *const this,
        Player *player,
        const PlantFlowerCommonObtainFlowerEvent *event,
        const PlantFlowerCommonObtainFlowerTypeWatcherParam *param)
{
  return PlantFlowerCommonObtainFlowerTypeWatcher::refreshProgressImpl(this, player, param);
};

// Line 1180: range 000000001638C3C0-000000001638C763
int32_t __cdecl RogueDestoryGadgetNumWatcher::tryUpdateProgressImpl(
        RogueDestoryGadgetNumWatcher *const this,
        Player *player,
        const RogueDungeonGadgetDieEvent *event,
        const RogueDestoryGadgetNumWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t result; // eax
  bool is_triggered_by_finish; // cl
  std::map<data::RogueCreateGadgetType,unsigned int> *p_die_gadget_count_map; // rcx
  std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,unsigned int> >::pointer v10; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,unsigned int> >::pointer v12; // rdx
  unsigned int *v13; // rax
  std::map<data::RogueCreateGadgetType,unsigned int>::key_type __x; // [rsp+24h] [rbp-7Ch] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,unsigned int> >::_Self __y; // [rsp+28h] [rbp-78h] BYREF
  char v18[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 iter:1188";
  *(_QWORD *)(v4 + 16) = RogueDestoryGadgetNumWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( !param->stage_id )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->stage_id);
  }
  if ( event->stage_id == param->stage_id )
  {
LABEL_11:
    if ( *(char *)(((unsigned __int64)&event->is_triggered_by_finish >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_triggered_by_finish);
    is_triggered_by_finish = event->is_triggered_by_finish;
    if ( *(_BYTE *)(((unsigned __int64)&param->is_acc >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_acc >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&param->is_acc);
    }
    if ( is_triggered_by_finish != param->is_acc )
    {
      p_die_gadget_count_map = &event->die_gadget_count_map;
      if ( *(_BYTE *)(((unsigned __int64)&param->gadget_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->gadget_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->gadget_type);
      }
      __x = param->gadget_type;
      *(std::map<data::RogueCreateGadgetType,unsigned int>::const_iterator *)(v4 + 32) = std::map<data::RogueCreateGadgetType,unsigned int>::find(
                                                                                           p_die_gadget_count_map,
                                                                                           &__x);
      __y._M_node = std::map<data::RogueCreateGadgetType,unsigned int>::end(&event->die_gadget_count_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,unsigned int> >::_Self *)(v4 + 32),
             &__y) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&param->is_acc >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_acc >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&param->is_acc);
        }
        if ( !param->is_acc )
        {
          v10 = std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,unsigned int> > *const)(v4 + 32));
          p_second = &v10->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          BaseWatcher::tryCorrectProgress(this, v10->second);
        }
        else
        {
          v12 = std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,unsigned int> > *const)(v4 + 32));
          v13 = &v12->second;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          BaseWatcher::addProgress(this, v12->second);
        }
      }
    }
    result = 0;
  }
  else
  {
    result = 0;
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1206: range 000000001638C764-000000001638C948
int32_t __cdecl RogueKillMonsterNumWatcher::tryUpdateProgressImpl(
        RogueKillMonsterNumWatcher *const this,
        Player *player,
        const RogueMonsterDieDieEvent *event,
        const RogueKillMonsterNumWatcherParam *param)
{
  bool is_triggered_by_finish; // cl
  RogueKillMonsterNumWatcher *v6; // rcx
  RogueKillMonsterNumWatcher *v7; // rcx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( param->stage_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->stage_id);
    }
    if ( event->stage_id != param->stage_id )
      return 0;
  }
  if ( *(char *)(((unsigned __int64)&event->is_triggered_by_finish >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_triggered_by_finish);
  is_triggered_by_finish = event->is_triggered_by_finish;
  if ( *(_BYTE *)(((unsigned __int64)&param->is_acc >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_acc >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_acc);
  }
  if ( is_triggered_by_finish != param->is_acc )
  {
    if ( !param->is_acc )
    {
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)&event->die_monster_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->die_monster_num >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&event->die_monster_num);
      }
      BaseWatcher::tryCorrectProgress(v6, event->die_monster_num);
    }
    else
    {
      v7 = this;
      if ( *(_BYTE *)(((unsigned __int64)&event->die_monster_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->die_monster_num >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&event->die_monster_num);
      }
      BaseWatcher::addProgress(v7, event->die_monster_num);
    }
  }
  return 0;
};

// Line 1228: range 000000001638C94A-000000001638CA8F
int32_t __cdecl RogueFinishWithoutUsingSpringCellWatcher::tryUpdateProgressImpl(
        RogueFinishWithoutUsingSpringCellWatcher *const this,
        Player *player,
        const RogueDungeonSettleEvent *event,
        const RogueFinishWithoutUsingSpringCellWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id != param->stage_id )
    return 0;
  if ( *(char *)(((unsigned __int64)&event->is_stage_passed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_stage_passed);
  if ( !event->is_stage_passed )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->is_using_spring_cell >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_using_spring_cell >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_using_spring_cell);
  }
  if ( !event->is_using_spring_cell )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1246: range 000000001638CA90-000000001638CBD2
int32_t __cdecl RogueFinishAllChallengeCellWatcher::tryUpdateProgressImpl(
        RogueFinishAllChallengeCellWatcher *const this,
        Player *player,
        const RogueDungeonSettleEvent *event,
        const RogueFinishAllChallengeCellWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id != param->stage_id )
    return 0;
  if ( *(char *)(((unsigned __int64)&event->is_stage_passed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_stage_passed);
  if ( !event->is_stage_passed )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->is_finished_all_challenge_cell >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 45) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_finished_all_challenge_cell >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_finished_all_challenge_cell);
  }
  if ( event->is_finished_all_challenge_cell )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1264: range 000000001638CBD4-000000001638CD19
int32_t __cdecl RogueFinishNoAvatarDeadWatcher::tryUpdateProgressImpl(
        RogueFinishNoAvatarDeadWatcher *const this,
        Player *player,
        const RogueDungeonSettleEvent *event,
        const RogueFinishNoAvatarDeadWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id != param->stage_id )
    return 0;
  if ( *(char *)(((unsigned __int64)&event->is_stage_passed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_stage_passed);
  if ( !event->is_stage_passed )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->is_any_avatar_dead >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 46) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_any_avatar_dead >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_any_avatar_dead);
  }
  if ( !event->is_any_avatar_dead )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1282: range 000000001638CD1A-000000001638CE9C
int32_t __cdecl RogueFinishWithAvatarElementTypeNumLessThanWatcher::tryUpdateProgressImpl(
        RogueFinishWithAvatarElementTypeNumLessThanWatcher *const this,
        Player *player,
        const RogueDungeonSettleEvent *event,
        const RogueFinishWithAvatarElementTypeNumLessThanWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx
  uint32_t avatar_element_type_count; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->stage_id);
  }
  if ( stage_id != param->stage_id )
    return 0;
  if ( *(char *)(((unsigned __int64)&event->is_stage_passed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_stage_passed);
  if ( !event->is_stage_passed )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->avatar_element_type_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->avatar_element_type_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->avatar_element_type_count);
  }
  avatar_element_type_count = event->avatar_element_type_count;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( avatar_element_type_count <= param->element_num )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1300: range 000000001638CE9E-000000001638D028
int32_t __cdecl RogueFinishWithAvatarNumLessThanWatcher::tryUpdateProgressImpl(
        RogueFinishWithAvatarNumLessThanWatcher *const this,
        Player *player,
        const RogueDungeonSettleEvent *event,
        const RogueFinishWithAvatarNumLessThanWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx
  uint32_t avatar_count; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->stage_id);
  }
  if ( stage_id != param->stage_id )
    return 0;
  if ( *(char *)(((unsigned __int64)&event->is_stage_passed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_stage_passed);
  if ( !event->is_stage_passed )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->avatar_count);
  }
  avatar_count = event->avatar_count;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( avatar_count <= param->avatar_num )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1318: range 000000001638D02A-000000001638D11C
int32_t __cdecl RogueShikigamiUpgradeWatcher::tryUpdateProgressImpl(
        RogueShikigamiUpgradeWatcher *const this,
        Player *player,
        const RogueShikigamiUpgradeEvent *event,
        const RogueShikigamiUpgradeWatcherParam *param)
{
  uint32_t *p_shikigami_id; // rdx
  uint32_t shikigami_id; // ecx
  RogueShikigamiUpgradeWatcher *v7; // rcx

  p_shikigami_id = &event->shikigami_id;
  if ( *(_BYTE *)(((unsigned __int64)p_shikigami_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_shikigami_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_shikigami_id);
  }
  shikigami_id = event->shikigami_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( shikigami_id != param->shikigami_id )
    return 0;
  v7 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->shikigami_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->shikigami_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->shikigami_level);
  }
  BaseWatcher::tryCorrectProgress(v7, event->shikigami_level);
  return 0;
};

// Line 1329: range 000000001638D11E-000000001638D14D
int32_t __cdecl RogueCurseNumWatcher::tryUpdateProgressImpl(
        RogueCurseNumWatcher *const this,
        Player *player,
        const RogueTriggerCurseEvent *event,
        const RogueCurseNumWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1336: range 000000001638D14E-000000001638D389
int32_t __cdecl RogueSelectCardWatcher::tryUpdateProgressImpl(
        RogueSelectCardWatcher *const this,
        Player *player,
        const RogueSelectCardEvent *event,
        const RogueSelectCardWatcherParam *param)
{
  uint32_t *p_card_type; // rdx
  uint32_t card_type; // ecx
  RogueSelectCardWatcher *v8; // rcx
  RogueSelectCardWatcher *v9; // rcx

  p_card_type = &event->card_type;
  if ( *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_card_type);
  }
  card_type = event->card_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( card_type != param->card_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&param->is_replaceable >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_replaceable >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_replaceable);
  }
  if ( param->is_replaceable )
  {
    if ( *(char *)(((unsigned __int64)&event->is_settle_event >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_settle_event);
    if ( event->is_settle_event && !BaseWatcher::isFinished(this) )
    {
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)&event->card_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->card_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->card_count);
      }
      BaseWatcher::tryCorrectProgress(v8, event->card_count);
    }
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&event->is_settle_event >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_settle_event);
    if ( !event->is_settle_event )
    {
      v9 = this;
      if ( *(_BYTE *)(((unsigned __int64)&event->card_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->card_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->card_count);
      }
      BaseWatcher::addProgress(v9, event->card_count);
    }
  }
  return 0;
};

// Line 1364: range 000000001638D38A-000000001638D3BF
int32_t __cdecl WinterCampSnowmanCompleteWatcher::tryUpdateProgressImpl(
        WinterCampSnowmanCompleteWatcher *const this,
        Player *player,
        const WinterCampSnomanEditEvent *event,
        const WinterCampSnowmanCompleteWatcherParam *param)
{
  WinterCampSnowmanCompleteWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 1370: range 000000001638D3C0-000000001638D582
int32_t __cdecl WinterCampSnowmanCompleteWatcher::refreshProgressImpl(
        WinterCampSnowmanCompleteWatcher *const this,
        Player *player,
        const WinterCampSnowmanCompleteWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  WinterCampActivity *v6; // rcx
  int32_t result; // eax
  uint32_t num; // [rsp+2Ch] [rbp-74h]
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:1371";
  *(_QWORD *)(v3 + 16) = WinterCampSnowmanCompleteWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<WinterCampActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<WinterCampActivity>(0LL, (const std::shared_ptr<WinterCampActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    num = WinterCampActivity::getSnowmanCompleteNum(v6, param->snowman_node_num);
    if ( num >= BaseWatcher::getProgress(this) )
      BaseWatcher::tryCorrectProgress(this, num);
  }
  std::shared_ptr<WinterCampActivity>::~shared_ptr((std::shared_ptr<WinterCampActivity> *const)(v3 + 32));
  result = 0;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1385: range 000000001638D584-000000001638D62F
int32_t __cdecl ProjectionFinishLevelWatcher::tryUpdateProgressImpl(
        ProjectionFinishLevelWatcher *const this,
        Player *player,
        const ProjectionFinishLevelEvent *event,
        const ProjectionFinishLevelWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1395: range 000000001638D630-000000001638D768
int32_t __cdecl GallerySalvageReachScoreWatcher::tryUpdateProgressImpl(
        GallerySalvageReachScoreWatcher *const this,
        Player *player,
        const GallerySalvageSettleEvent *event,
        const GallerySalvageReachScoreWatcherParam *param)
{
  uint32_t *p_gallery_id; // rdx
  uint32_t gallery_id; // ecx
  uint32_t final_score; // ecx

  p_gallery_id = &event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->final_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->final_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->final_score);
    }
    final_score = event->final_score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( final_score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1408: range 000000001638D76A-000000001638D8A2
int32_t __cdecl FireworksChallengeReachScoreWatcher::tryUpdateProgressImpl(
        FireworksChallengeReachScoreWatcher *const this,
        Player *player,
        const FireworksChallengeSettleEvent *event,
        const FireworksChallengeReachScoreWatcherParam *param)
{
  uint32_t *p_challenge_id; // rdx
  uint32_t challenge_id; // ecx
  uint32_t final_score; // ecx

  p_challenge_id = &event->challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)p_challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_challenge_id);
  }
  challenge_id = event->challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( challenge_id == param->challenge_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->final_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->final_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->final_score);
    }
    final_score = event->final_score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( final_score >= param->score )
      BaseWatcher::tryCorrectProgress(this, 1u);
  }
  return 0;
};

// Line 1421: range 000000001638D8A4-000000001638D955
int32_t __cdecl PotionStageLevelPassNumWatcher::tryUpdateProgressImpl(
        PotionStageLevelPassNumWatcher *const this,
        Player *player,
        const PotionStageLevelPassEvent *event,
        const PotionStageLevelPassNumWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id == param->stage_id )
    PotionStageLevelPassNumWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 1430: range 000000001638D956-000000001638DB18
int32_t __cdecl PotionStageLevelPassNumWatcher::refreshProgressImpl(
        PotionStageLevelPassNumWatcher *const this,
        Player *player,
        const PotionStageLevelPassNumWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PotionActivity *v6; // rcx
  int32_t result; // eax
  uint32_t num; // [rsp+2Ch] [rbp-74h]
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:1431";
  *(_QWORD *)(v3 + 16) = PotionStageLevelPassNumWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<PotionActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<PotionActivity>(0LL, (const std::shared_ptr<PotionActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    num = PotionActivity::getStageLevelPassNum(v6, param->stage_id);
    if ( num > BaseWatcher::getProgress(this) )
      BaseWatcher::tryCorrectProgress(this, num);
  }
  std::shared_ptr<PotionActivity>::~shared_ptr((std::shared_ptr<PotionActivity> *const)(v3 + 32));
  result = 0;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1445: range 000000001638DB1A-000000001638DBCB
int32_t __cdecl PotionStageObtainMedalNumWatcher::tryUpdateProgressImpl(
        PotionStageObtainMedalNumWatcher *const this,
        Player *player,
        const PotionStageLevelPassEvent *event,
        const PotionStageObtainMedalNumWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id == param->stage_id )
    PotionStageObtainMedalNumWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 1454: range 000000001638DBCC-000000001638DDD7
int32_t __cdecl PotionStageObtainMedalNumWatcher::refreshProgressImpl(
        PotionStageObtainMedalNumWatcher *const this,
        Player *player,
        const PotionStageObtainMedalNumWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PotionActivity *p_medal_type; // rdi
  uint32_t medal_type; // ecx
  int32_t result; // eax
  uint32_t num; // [rsp+2Ch] [rbp-74h]
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:1455";
  *(_QWORD *)(v3 + 16) = PotionStageObtainMedalNumWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<PotionActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<PotionActivity>(0LL, (const std::shared_ptr<PotionActivity> *)(v3 + 32)) )
  {
    p_medal_type = std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&param->medal_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->medal_type >> 3) + 0x7FFF8000) )
    {
      p_medal_type = (PotionActivity *)&param->medal_type;
      __asan_report_load4(&param->medal_type);
    }
    medal_type = param->medal_type;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      p_medal_type = (PotionActivity *)param;
      __asan_report_load4(param);
    }
    num = PotionActivity::getStageObtainMedalNum(p_medal_type, param->stage_id, medal_type);
    if ( num > BaseWatcher::getProgress(this) )
      BaseWatcher::tryCorrectProgress(this, num);
  }
  std::shared_ptr<PotionActivity>::~shared_ptr((std::shared_ptr<PotionActivity> *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1469: range 000000001638DDD8-000000001638DE89
int32_t __cdecl PotionStageReachTotalScoreWatcher::tryUpdateProgressImpl(
        PotionStageReachTotalScoreWatcher *const this,
        Player *player,
        const PotionStageScoreChangeEvent *event,
        const PotionStageReachTotalScoreWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id == param->stage_id )
    PotionStageReachTotalScoreWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 1478: range 000000001638DE8A-000000001638E055
int32_t __cdecl PotionStageReachTotalScoreWatcher::refreshProgressImpl(
        PotionStageReachTotalScoreWatcher *const this,
        Player *player,
        const PotionStageReachTotalScoreWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PotionActivity *v7; // rcx
  int32_t result; // eax
  uint32_t total_score; // [rsp+2Ch] [rbp-74h]
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:1479";
  *(_QWORD *)(v3 + 16) = PotionStageReachTotalScoreWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<PotionActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<PotionActivity>(0LL, (const std::shared_ptr<PotionActivity> *)(v3 + 32))
    && !BaseWatcher::isFinished(this) )
  {
    v7 = std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    total_score = PotionActivity::getStageTotalScore(v7, param->stage_id);
    BaseWatcher::tryCorrectProgress(this, total_score);
  }
  std::shared_ptr<PotionActivity>::~shared_ptr((std::shared_ptr<PotionActivity> *const)(v3 + 32));
  result = 0;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1491: range 000000001638E056-000000001638E085
int32_t __cdecl MichiaeMatsuriUnlockCrystalSkillReachNumWatcher::tryUpdateProgressImpl(
        MichiaeMatsuriUnlockCrystalSkillReachNumWatcher *const this,
        Player *player,
        const MichiaeMatsuriUnlockCrystalSkillEvent *event,
        const MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1499: range 000000001638E086-000000001638E0B5
int32_t __cdecl MichiaeMatsuriFinishDarkChallengeReachNumWatcher::tryUpdateProgressImpl(
        MichiaeMatsuriFinishDarkChallengeReachNumWatcher *const this,
        Player *player,
        const FinishActivityMichiaeDarkChallengeEvent *event,
        const MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1506: range 000000001638E0B6-000000001638E100
int32_t __cdecl BartenderFinishStoryModuleWatcher::tryUpdateProgressImpl(
        BartenderFinishStoryModuleWatcher *const this,
        Player *player,
        const BartenderFinishStoryModuleEvent *event,
        const BartenderFinishStoryModuleWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         &param->task_set,
         &event->task_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1516: range 000000001638E102-000000001638E23A
int32_t __cdecl BartenderChallengeModuleLevelScoreWatcher::tryUpdateProgressImpl(
        BartenderChallengeModuleLevelScoreWatcher *const this,
        Player *player,
        const BartenderChallengeModuleLevelScoreEvent *event,
        const BartenderChallengeModuleLevelScoreWatcherParam *param)
{
  uint32_t level_id; // ecx
  uint32_t score; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  level_id = param->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->level_id);
  }
  if ( level_id == event->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    score = param->score;
    if ( *(_BYTE *)(((unsigned __int64)&event->level_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->level_score);
    }
    if ( score <= event->level_score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1526: range 000000001638E23C-000000001638E26B
int32_t __cdecl BartenderUnlockFormulaWatcher::tryUpdateProgressImpl(
        BartenderUnlockFormulaWatcher *const this,
        Player *player,
        const BartenderUnlockFormulaEvent *event,
        const BartenderUnlockFormulaWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1533: range 000000001638E26C-000000001638E317
int32_t __cdecl IrodoriFinishFlowerThemeWatcher::tryUpdateProgressImpl(
        IrodoriFinishFlowerThemeWatcher *const this,
        Player *player,
        const IrodoriFinishFlowerThemeEvent *event,
        const IrodoriFinishFlowerThemeWatcherParam *param)
{
  uint32_t theme_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  theme_id = param->theme_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->theme_id);
  }
  if ( theme_id == event->theme_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1543: range 000000001638E318-000000001638E3C3
int32_t __cdecl IrodoriFinishPoetryThemeWatcher::tryUpdateProgressImpl(
        IrodoriFinishPoetryThemeWatcher *const this,
        Player *player,
        const IrodoriFinishPoetryThemeEvent *event,
        const IrodoriFinishPoetryThemeWatcherParam *param)
{
  uint32_t theme_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  theme_id = param->theme_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->theme_id);
  }
  if ( theme_id == event->theme_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1553: range 000000001638E3C4-000000001638E46F
int32_t __cdecl SpiceMakeFormulaTimesWatcher::tryUpdateProgressImpl(
        SpiceMakeFormulaTimesWatcher *const this,
        Player *player,
        const SpiceMakeFormulaTimesEvent *event,
        const SpiceMakeFormulaTimesWatcherParam *param)
{
  uint32_t stage_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  stage_id = param->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->stage_id);
  }
  if ( stage_id == event->stage_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1563: range 000000001638E470-000000001638E49F
int32_t __cdecl SpiceGiveFoodTimesWatcher::tryUpdateProgressImpl(
        SpiceGiveFoodTimesWatcher *const this,
        Player *player,
        const SpiceGiveFoodTimesEvent *event,
        const SpiceGiveFoodTimesWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1570: range 000000001638E4A0-000000001638E54B
int32_t __cdecl SpiceMakeFormulaSuccessfulTimesWatcher::tryUpdateProgressImpl(
        SpiceMakeFormulaSuccessfulTimesWatcher *const this,
        Player *player,
        const SpiceMakeFormulaSuccessfulTimesEvent *event,
        const SpiceMakeFormulaSuccessfulTimesWatcherParam *param)
{
  uint32_t stage_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  stage_id = param->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->stage_id);
  }
  if ( stage_id == event->stage_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1580: range 000000001638E54C-000000001638E5F7
int32_t __cdecl PhotoFinishPosWatcher::tryUpdateProgressImpl(
        PhotoFinishPosWatcher *const this,
        Player *player,
        const PhotoFinishPosEvent *event,
        const PhotoFinishPosWatcherParam *param)
{
  uint32_t *p_pos_id; // rdx
  uint32_t pos_id; // ecx

  p_pos_id = &event->pos_id;
  if ( *(_BYTE *)(((unsigned __int64)p_pos_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_pos_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_pos_id);
  }
  pos_id = event->pos_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( pos_id == param->pos_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1590: range 000000001638E5F8-000000001638E86D
int32_t __cdecl CrystalLinkLevelScoreReachWatcher::tryUpdateProgressImpl(
        CrystalLinkLevelScoreReachWatcher *const this,
        Player *player,
        const CrystalLinkDungeonSettleEvent *event,
        const CrystalLinkLevelScoreReachWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t level_id; // ecx
  char v8; // al
  uint32_t best_score; // ecx
  int32_t result; // eax
  char v13[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 activity_ptr:1591";
  *(_QWORD *)(v4 + 16) = CrystalLinkLevelScoreReachWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<CrystalLinkActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( !std::operator!=<CrystalLinkActivity>(0LL, (const std::shared_ptr<CrystalLinkActivity> *)(v4 + 32)) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
    v8 = 1;
  else
LABEL_11:
    v8 = 0;
  if ( v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->best_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->best_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->best_score);
    }
    best_score = event->best_score;
    if ( *(_BYTE *)(((unsigned __int64)&param->target_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->target_score);
    }
    if ( best_score >= param->target_score )
      BaseWatcher::addProgress(this, 1u);
  }
  std::shared_ptr<CrystalLinkActivity>::~shared_ptr((std::shared_ptr<CrystalLinkActivity> *const)(v4 + 32));
  result = 0;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1604: range 000000001638E86E-000000001638E9EC
int32_t __cdecl CrystalLinkTotalMaxScoreReachWatcher::tryUpdateProgressImpl(
        CrystalLinkTotalMaxScoreReachWatcher *const this,
        Player *player,
        const CrystalLinkDungeonSettleEvent *event,
        const CrystalLinkTotalMaxScoreReachWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  CrystalLinkTotalMaxScoreReachWatcher *v7; // rdx
  int32_t result; // eax
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 activity_ptr:1605";
  *(_QWORD *)(v4 + 16) = CrystalLinkTotalMaxScoreReachWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<CrystalLinkActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<CrystalLinkActivity>(0LL, (const std::shared_ptr<CrystalLinkActivity> *)(v4 + 32)) )
  {
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->total_best_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->total_best_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->total_best_score);
    }
    BaseWatcher::tryCorrectProgress(v7, event->total_best_score);
  }
  std::shared_ptr<CrystalLinkActivity>::~shared_ptr((std::shared_ptr<CrystalLinkActivity> *const)(v4 + 32));
  result = 0;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1617: range 000000001638E9EE-000000001638EC36
int32_t __cdecl IrodoriChessStageReachScoreWatcher::tryUpdateProgressImpl(
        IrodoriChessStageReachScoreWatcher *const this,
        Player *player,
        const IrodoriChessSettleNewRecordEvent *event,
        const IrodoriChessStageReachScoreWatcherParam *param)
{
  bool is_hard_map; // cl
  uint32_t level_id; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->is_hard_map_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_hard_map_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_hard_map_);
  }
  is_hard_map = event->is_hard_map_;
  if ( *(_BYTE *)(((unsigned __int64)&param->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_hard_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_hard_map);
  }
  if ( is_hard_map == param->is_hard_map )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->level_id_);
    }
    level_id = event->level_id_;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( level_id == param->level_id )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/watcher_for_activity.cpp",
        "tryUpdateProgressImpl",
        1620);
      v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v14, (const char (*)[8])" level:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->level_id_);
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])", is_hard_map:");
      if ( *(_BYTE *)(((unsigned __int64)&event->is_hard_map_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_hard_map_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&event->is_hard_map_);
      }
      v9 = common::milog::MiLogStream::operator<<(v8, event->is_hard_map_);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])", settle_score:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->settle_score_);
      common::milog::MiLogStream::~MiLogStream(&v14);
      IrodoriChessStageReachScoreWatcher::refreshProgressImpl(this, player, param);
    }
  }
  return 0;
};

// Line 1627: range 000000001638EC38-000000001638EFD5
int32_t __cdecl IrodoriChessStageReachScoreWatcher::refreshProgressImpl(
        IrodoriChessStageReachScoreWatcher *const this,
        Player *player,
        const IrodoriChessStageReachScoreWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const IrodoriActivity *p_is_hard_map; // rdi
  bool is_hard_map; // cl
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 map_best_score:1631 64 16 17 activity_ptr:1628";
  *(_QWORD *)(v3 + 16) = IrodoriChessStageReachScoreWatcher::refreshProgressImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<IrodoriActivity>((PlayerActivityComp *const)(v3 + 64));
  if ( std::operator!=<IrodoriActivity>(0LL, (const std::shared_ptr<IrodoriActivity> *)(v3 + 64)) )
  {
    p_is_hard_map = std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&param->is_hard_map >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_hard_map >> 3) + 0x7FFF8000) )
    {
      p_is_hard_map = (const IrodoriActivity *)&param->is_hard_map;
      __asan_report_load1(&param->is_hard_map);
    }
    is_hard_map = param->is_hard_map;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      p_is_hard_map = (const IrodoriActivity *)param;
      __asan_report_load4(param);
    }
    *(_DWORD *)(v3 + 48) = IrodoriActivity::getChessMapBestScore(p_is_hard_map, param->level_id, is_hard_map);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher_for_activity.cpp",
      "refreshProgressImpl",
      1632);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v18, (const char (*)[8])" level:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &param->level_id);
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])", is_hard_map:");
    if ( *(_BYTE *)(((unsigned __int64)&param->is_hard_map >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_hard_map >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&param->is_hard_map);
    }
    v11 = common::milog::MiLogStream::operator<<(v10, param->is_hard_map);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])", best_score:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])off_25C5CE00);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &param->target_score);
    common::milog::MiLogStream::~MiLogStream(&v18);
    if ( *(_BYTE *)(((unsigned __int64)&param->target_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->target_score);
    }
    if ( param->target_score <= *(_DWORD *)(v3 + 48) )
      BaseWatcher::tryCorrectProgress(this, 1u);
  }
  std::shared_ptr<IrodoriActivity>::~shared_ptr((std::shared_ptr<IrodoriActivity> *const)(v3 + 64));
  result = 0;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1643: range 000000001638EFD6-000000001638F337
int32_t __cdecl IrodoriFinishMasterStageWatcher::tryUpdateProgressImpl(
        IrodoriFinishMasterStageWatcher *const this,
        Player *player,
        const IrodoriMasterLevelEvent *event,
        const IrodoriFinishMasterStageWatcherParam *param)
{
  uint32_t level_id; // ecx
  uint32_t difficulty; // ecx
  bool is_finish; // cl
  uint32_t finish_time; // ecx
  bool v8; // cl

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  level_id = param->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->level_id);
  }
  if ( level_id == event->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->difficulty);
    }
    difficulty = event->difficulty;
    if ( *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->difficulty);
    }
    if ( difficulty >= param->difficulty )
    {
      if ( *(_BYTE *)(((unsigned __int64)&param->is_finish >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)param + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&param->is_finish);
      }
      if ( !param->is_finish )
        goto LABEL_26;
      is_finish = param->is_finish;
      if ( *(char *)(((unsigned __int64)&event->is_finish >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&event->is_finish);
      if ( is_finish == event->is_finish )
      {
        if ( *(_BYTE *)(((unsigned __int64)&param->finish_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->finish_time >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&param->finish_time);
        }
        if ( !param->finish_time )
          goto LABEL_32;
        if ( *(_BYTE *)(((unsigned __int64)&param->finish_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->finish_time >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&param->finish_time);
        }
        finish_time = param->finish_time;
        if ( *(_BYTE *)(((unsigned __int64)&event->finish_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->finish_time >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&event->finish_time);
        }
        if ( finish_time >= event->finish_time )
LABEL_32:
          BaseWatcher::addProgress(this, 1u);
      }
      else
      {
LABEL_26:
        if ( *(_BYTE *)(((unsigned __int64)&param->is_finish >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)param + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_finish >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&param->is_finish);
        }
        if ( !param->is_finish )
        {
          v8 = param->is_finish;
          if ( *(char *)(((unsigned __int64)&event->is_finish >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&event->is_finish);
          if ( v8 == event->is_finish )
            goto LABEL_32;
        }
      }
    }
  }
  return 0;
};

// Line 1672: range 000000001638F338-000000001638F3E3
int32_t __cdecl LuminanceStoneChallengeReachScoreWatcher::tryUpdateProgressImpl(
        LuminanceStoneChallengeReachScoreWatcher *const this,
        Player *player,
        const LuminanceStoneChallengeReachNewScoreEvent *event,
        const LuminanceStoneChallengeReachScoreWatcherParam *param)
{
  uint32_t *p_new_score; // rdx
  uint32_t new_score; // ecx

  p_new_score = &event->new_score;
  if ( *(_BYTE *)(((unsigned __int64)p_new_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_new_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_new_score);
  }
  new_score = event->new_score;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( new_score >= param->target_score )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1682: range 000000001638F3E4-000000001638F48F
int32_t __cdecl GachaFinishStageWatcher::tryUpdateProgressImpl(
        GachaFinishStageWatcher *const this,
        Player *player,
        const GachaFinishStageEvent *event,
        const GachaFinishStageWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id == param->stage_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1692: range 000000001638F490-000000001638F4BF
int32_t __cdecl GachaMakeRobotWatcher::tryUpdateProgressImpl(
        GachaMakeRobotWatcher *const this,
        Player *player,
        const GachaMakeRobotEvent *event,
        const GachaMakeRobotWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1699: range 000000001638F4C0-000000001638F527
int32_t __cdecl GachaGetRobotWatcher::tryUpdateProgressImpl(
        GachaGetRobotWatcher *const this,
        Player *player,
        const GachaGetRobotEvent *event,
        const GachaGetRobotWatcherParam *param)
{
  GachaGetRobotWatcher *v4; // rdx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->num);
  }
  BaseWatcher::addProgress(v4, event->num);
  return 0;
};

// Line 1706: range 000000001638F528-000000001638F58F
int32_t __cdecl GachaGiveRobotWatcher::tryUpdateProgressImpl(
        GachaGiveRobotWatcher *const this,
        Player *player,
        const GachaGiveRobotEvent *event,
        const GachaGiveRobotWatcherParam *param)
{
  GachaGiveRobotWatcher *v4; // rdx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->num);
  }
  BaseWatcher::addProgress(v4, event->num);
  return 0;
};

// Line 1713: range 000000001638F590-000000001638F5F7
int32_t __cdecl GachaConvertRobotWatcher::tryUpdateProgressImpl(
        GachaConvertRobotWatcher *const this,
        Player *player,
        const GachaConvertRobotEvent *event,
        const GachaConvertRobotWatcherParam *param)
{
  GachaConvertRobotWatcher *v4; // rdx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->num);
  }
  BaseWatcher::addProgress(v4, event->num);
  return 0;
};

// Line 1720: range 000000001638F5F8-000000001638F6A3
int32_t __cdecl GearFinishStageWatcher::tryUpdateProgressImpl(
        GearFinishStageWatcher *const this,
        Player *player,
        const GearFinishStageEvent *event,
        const GearFinishStageWatcherParam *param)
{
  uint32_t stage_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  stage_id = param->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->stage_id);
  }
  if ( stage_id == event->stage_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1730: range 000000001638F6A4-000000001638F6D3
int32_t __cdecl GearFinishJigsawPictureWatcher::tryUpdateProgressImpl(
        GearFinishJigsawPictureWatcher *const this,
        Player *player,
        const GearFinishJigsawPictureEvent *event,
        const GearFinishJigsawPictureWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1737: range 000000001638F6D4-000000001638FA13
int32_t __cdecl FinishRogueDiaryStageWatcher::tryUpdateProgressImpl(
        FinishRogueDiaryStageWatcher *const this,
        Player *player,
        const FinishRogueDiaryStageEvent *event,
        const FinishRogueDiaryStageWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx
  uint32_t difficulty; // ecx
  uint32_t time; // ecx
  uint32_t v8; // ecx
  uint32_t v9; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id != param->stage_id )
    goto LABEL_20;
  if ( *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->difficulty);
  }
  difficulty = event->difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->difficulty);
  }
  if ( difficulty == param->difficulty )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->time);
    }
    if ( !param->time )
      goto LABEL_30;
    if ( *(_BYTE *)(((unsigned __int64)&event->time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->time);
    }
    time = event->time;
    if ( *(_BYTE *)(((unsigned __int64)&param->time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->time);
    }
    if ( time <= param->time )
LABEL_30:
      BaseWatcher::addProgress(this, 1u);
  }
  else
  {
LABEL_20:
    if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->stage_id);
    }
    v8 = event->stage_id;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( v8 == param->stage_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->difficulty);
      }
      v9 = event->difficulty;
      if ( *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->difficulty);
      }
      if ( v9 > param->difficulty )
        goto LABEL_30;
    }
  }
  return 0;
};

// Line 1761: range 000000001638FA14-000000001638FBD1
int32_t __cdecl FinishRogueDiaryStageRoundWatcher::tryUpdateProgressImpl(
        FinishRogueDiaryStageRoundWatcher *const this,
        Player *player,
        const FinishRogueDiaryStageRoundEvent *event,
        const FinishRogueDiaryStageRoundWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx
  uint32_t difficulty; // ecx
  uint32_t round; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id == param->stage_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->difficulty);
    }
    difficulty = event->difficulty;
    if ( *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->difficulty);
    }
    if ( difficulty >= param->difficulty )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->round);
      }
      round = event->round;
      if ( *(_BYTE *)(((unsigned __int64)&param->round >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->round >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->round);
      }
      if ( round >= param->round )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 1771: range 000000001638FBD2-000000001638FC01
int32_t __cdecl MusicGameSettleOthersUgcWatcher::tryUpdateProgressImpl(
        MusicGameSettleOthersUgcWatcher *const this,
        Player *player,
        const MusicGameSettleOthersUgcEvent *event,
        const MusicGameSettleOthersUgcWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1778: range 000000001638FC02-000000001638FC31
int32_t __cdecl MusicGameSaveUgcWatcher::tryUpdateProgressImpl(
        MusicGameSaveUgcWatcher *const this,
        Player *player,
        const MusicGameSaveUgcEvent *event,
        const MusicGameSaveUgcWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1785: range 000000001638FC32-000000001638FD6A
int32_t __cdecl IslandPartyReachScoreWatcher::tryUpdateProgressImpl(
        IslandPartyReachScoreWatcher *const this,
        Player *player,
        const IslandPartyReachScoreEvent *event,
        const IslandPartyReachScoreWatcherParam *param)
{
  uint32_t id; // ecx
  uint32_t score; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  id = param->id;
  if ( *(_BYTE *)(((unsigned __int64)&event->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->id);
  }
  if ( id == event->id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1795: range 000000001638FD6C-000000001638FEA4
int32_t __cdecl MuqadasPotionLevelScoreWatcher::tryUpdateProgressImpl(
        MuqadasPotionLevelScoreWatcher *const this,
        Player *player,
        const MuqadasPotionLevelScoreEvent *event,
        const MuqadasPotionLevelScoreWatcherParam *param)
{
  uint32_t level_id; // ecx
  uint32_t score; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  level_id = param->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->level_id);
  }
  if ( level_id == event->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1805: range 000000001638FEA6-000000001638FFDE
int32_t __cdecl MuqadasPotionLevelWeaknessNumWatcher::tryUpdateProgressImpl(
        MuqadasPotionLevelWeaknessNumWatcher *const this,
        Player *player,
        const MuqadasPotionLevelWeaknessNumEvent *event,
        const MuqadasPotionLevelWeaknessNumWatcherParam *param)
{
  uint32_t level_id; // ecx
  uint32_t weakness_num; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  level_id = param->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->level_id);
  }
  if ( level_id == event->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->weakness_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->weakness_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->weakness_num);
    }
    weakness_num = event->weakness_num;
    if ( *(_BYTE *)(((unsigned __int64)&param->weakness_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->weakness_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->weakness_num);
    }
    if ( weakness_num >= param->weakness_num )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1815: range 000000001638FFE0-0000000016390118
int32_t __cdecl MuqadasPotionLevelOnceWeaknessNumWatcher::tryUpdateProgressImpl(
        MuqadasPotionLevelOnceWeaknessNumWatcher *const this,
        Player *player,
        const MuqadasPotionLevelOnceWeaknessNumEvent *event,
        const MuqadasPotionLevelOnceWeaknessNumWatcherParam *param)
{
  uint32_t level_id; // ecx
  uint32_t once_weakness_num; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  level_id = param->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->level_id);
  }
  if ( level_id == event->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->once_weakness_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->once_weakness_num >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&event->once_weakness_num);
    }
    once_weakness_num = event->once_weakness_num;
    if ( *(_BYTE *)(((unsigned __int64)&param->once_weakness_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->once_weakness_num >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&param->once_weakness_num);
    }
    if ( once_weakness_num >= param->once_weakness_num )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1825: range 000000001639011A-0000000016390252
int32_t __cdecl InstableSprayReachScoreWatcher::tryUpdateProgressImpl(
        InstableSprayReachScoreWatcher *const this,
        Player *player,
        const InstableSprayScoreEvent *event,
        const InstableSprayReachScoreWatcherParam *param)
{
  uint32_t stage_id; // ecx
  uint32_t score; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  stage_id = param->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->stage_id);
  }
  if ( stage_id == event->stage_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1835: range 0000000016390254-0000000016390289
int32_t __cdecl GravenInnocenceCarveCompleteWatcher::tryUpdateProgressImpl(
        GravenInnocenceCarveCompleteWatcher *const this,
        Player *player,
        const GravenInnocenceCarveEditEvent *event,
        const GravenInnocenceCarveCompleteWatcherParam *param)
{
  GravenInnocenceCarveCompleteWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 1841: range 000000001639028A-000000001639044C
int32_t __cdecl GravenInnocenceCarveCompleteWatcher::refreshProgressImpl(
        GravenInnocenceCarveCompleteWatcher *const this,
        Player *player,
        const GravenInnocenceCarveCompleteWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<GravenInnocenceActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  int32_t result; // eax
  uint32_t num; // [rsp+2Ch] [rbp-74h]
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:1842";
  *(_QWORD *)(v3 + 16) = GravenInnocenceCarveCompleteWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<GravenInnocenceActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<GravenInnocenceActivity>(0LL, (const std::shared_ptr<GravenInnocenceActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<GravenInnocenceActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GravenInnocenceActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    num = GravenInnocenceActivity::getCarveCompleteNum(v6, param->carve_node_num);
    if ( num >= BaseWatcher::getProgress(this) )
      BaseWatcher::tryCorrectProgress(this, num);
  }
  std::shared_ptr<GravenInnocenceActivity>::~shared_ptr((std::shared_ptr<GravenInnocenceActivity> *const)(v3 + 32));
  result = 0;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1856: range 000000001639044E-0000000016390498
int32_t __cdecl GravenInnocencePhotoFinishWatcher::tryUpdateProgressImpl(
        GravenInnocencePhotoFinishWatcher *const this,
        Player *player,
        const GravenInnocencePhotoFinishEvent *event,
        const GravenInnocencePhotoFinishWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->object_id_set,
         &event->object_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1866: range 000000001639049A-0000000016390545
int32_t __cdecl GravenInnocenceCampFinishLevelWatcher::tryUpdateProgressImpl(
        GravenInnocenceCampFinishLevelWatcher *const this,
        Player *player,
        const GravenInnocenceCampFinishLevelEvent *event,
        const GravenInnocenceCampFinishLevelWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1876: range 0000000016390546-00000000163905F1
int32_t __cdecl VintageHuntingScoreWatcher::tryUpdateProgressImpl(
        VintageHuntingScoreWatcher *const this,
        Player *player,
        const VintageHuntingScoreEvent *event,
        const VintageHuntingScoreWatcherParam *param)
{
  uint32_t *p_score; // rdx
  uint32_t score; // ecx

  p_score = &event->score;
  if ( *(_BYTE *)(((unsigned __int64)p_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_score);
  }
  score = event->score;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( score >= param->score )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1886: range 00000000163905F2-000000001639069D
int32_t __cdecl VintageHuntingCaptureNumWatcher::tryUpdateProgressImpl(
        VintageHuntingCaptureNumWatcher *const this,
        Player *player,
        const VintageHuntingCaptureNumEvent *event,
        const VintageHuntingCaptureNumWatcherParam *param)
{
  uint32_t *p_num; // rdx
  uint32_t num; // ecx

  p_num = &event->num;
  if ( *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_num);
  }
  num = event->num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( num >= param->num )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1896: range 000000001639069E-0000000016390749
int32_t __cdecl VintageHuntingCaptureNoBattleNumWatcher::tryUpdateProgressImpl(
        VintageHuntingCaptureNoBattleNumWatcher *const this,
        Player *player,
        const VintageHuntingCaptureNoBattleNumEvent *event,
        const VintageHuntingCaptureNoBattleNumWatcherParam *param)
{
  uint32_t *p_num; // rdx
  uint32_t num; // ecx

  p_num = &event->num;
  if ( *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_num);
  }
  num = event->num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( num >= param->num )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1906: range 000000001639074A-00000000163907F5
int32_t __cdecl VintageHuntingCaptureTypeNumWatcher::tryUpdateProgressImpl(
        VintageHuntingCaptureTypeNumWatcher *const this,
        Player *player,
        const VintageHuntingCaptureTypeNumEvent *event,
        const VintageHuntingCaptureTypeNumWatcherParam *param)
{
  uint32_t *p_type_num; // rdx
  uint32_t type_num; // ecx

  p_type_num = &event->type_num;
  if ( *(_BYTE *)(((unsigned __int64)p_type_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_type_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_type_num);
  }
  type_num = event->type_num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( type_num >= param->num )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1916: range 00000000163907F6-0000000016390825
int32_t __cdecl VintageHuntingFinishBossWatcher::tryUpdateProgressImpl(
        VintageHuntingFinishBossWatcher *const this,
        Player *player,
        const VintageHuntingFinishBossEvent *event,
        const VintageHuntingFinishBossWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1923: range 0000000016390826-00000000163908D1
int32_t __cdecl VintageHuntingFinishBossInTimeWatcher::tryUpdateProgressImpl(
        VintageHuntingFinishBossInTimeWatcher *const this,
        Player *player,
        const VintageHuntingFinishBossInTimeEvent *event,
        const VintageHuntingFinishBossInTimeWatcherParam *param)
{
  uint32_t *p_left_time; // rdx
  uint32_t left_time; // ecx

  p_left_time = &event->left_time;
  if ( *(_BYTE *)(((unsigned __int64)p_left_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_left_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_left_time);
  }
  left_time = event->left_time;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( left_time >= param->left_time )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1933: range 00000000163908D2-000000001639097D
int32_t __cdecl VintageHuntingBossWeakTimesWatcher::tryUpdateProgressImpl(
        VintageHuntingBossWeakTimesWatcher *const this,
        Player *player,
        const VintageHuntingBossWeakTimesEvent *event,
        const VintageHuntingBossWeakTimesWatcherParam *param)
{
  uint32_t *p_boss_weak_times; // rdx
  uint32_t boss_weak_times; // ecx

  p_boss_weak_times = &event->boss_weak_times;
  if ( *(_BYTE *)(((unsigned __int64)p_boss_weak_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_boss_weak_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_boss_weak_times);
  }
  boss_weak_times = event->boss_weak_times;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( boss_weak_times >= param->boss_weak_times )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1943: range 000000001639097E-0000000016390A29
int32_t __cdecl VintageDecorationCompleteWatcher::tryUpdateProgressImpl(
        VintageDecorationCompleteWatcher *const this,
        Player *player,
        const VintageDecorationCompleteEvent *event,
        const VintageDecorationCompleteWatcherParam *param)
{
  uint32_t *p_node_num; // rdx
  uint32_t node_num; // ecx

  p_node_num = &event->node_num;
  if ( *(_BYTE *)(((unsigned __int64)p_node_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_node_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_node_num);
  }
  node_num = event->node_num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( node_num >= param->node_num )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1954: range 0000000016390A2A-0000000016390AD5
int32_t __cdecl VintageCollectDecorationNumWatcher::tryUpdateProgressImpl(
        VintageCollectDecorationNumWatcher *const this,
        Player *player,
        const VintageCollectDecorationNumEvent *event,
        const VintageCollectDecorationNumWatcherParam *param)
{
  uint32_t *p_num; // rdx
  uint32_t num; // ecx

  p_num = &event->num;
  if ( *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_num);
  }
  num = event->num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( num >= param->num )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1964: range 0000000016390AD6-0000000016390B81
int32_t __cdecl VintageFinishCampWatcher::tryUpdateProgressImpl(
        VintageFinishCampWatcher *const this,
        Player *player,
        const VintageFinishCampEvent *event,
        const VintageFinishCampWatcherParam *param)
{
  uint32_t *p_camp_level_id; // rdx
  uint32_t camp_level_id; // ecx

  p_camp_level_id = &event->camp_level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_camp_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_camp_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_camp_level_id);
  }
  camp_level_id = event->camp_level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( camp_level_id == param->camp_level_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1974: range 0000000016390B82-0000000016390C2D
int32_t __cdecl VintageMarketCoinAWatcher::tryUpdateProgressImpl(
        VintageMarketCoinAWatcher *const this,
        Player *player,
        const VintageMarketCoinAChangeEvent *event,
        const VintageMarketCoinAWatcherParam *param)
{
  uint32_t *p_count; // rdx
  uint32_t count; // ecx

  p_count = &event->count;
  if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_count);
  }
  count = event->count;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( count >= param->count )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1984: range 0000000016390C2E-0000000016390C5D
int32_t __cdecl VintageMarketContentFinishWatcher::tryUpdateProgressImpl(
        VintageMarketContentFinishWatcher *const this,
        Player *player,
        const VintageMarketContentFinishEvent *event,
        const VintageMarketContentFinishWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1990: range 0000000016390C5E-0000000016390D09
int32_t __cdecl RockBoardExploreFinishStageWatcher::tryUpdateProgressImpl(
        RockBoardExploreFinishStageWatcher *const this,
        Player *player,
        const RockBoardExploreFinishStageEvent *event,
        const RockBoardExploreFinishStageWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id == param->stage_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2000: range 0000000016390D0A-0000000016390DB5
int32_t __cdecl FungusFighterCaptureFungusWatcher::tryUpdateProgressImpl(
        FungusFighterCaptureFungusWatcher *const this,
        Player *player,
        const FungusFighterCaptureFungusEvent *event,
        const FungusFighterCaptureFungusWatcherParam *param)
{
  uint32_t *p_fungus_id; // rdx
  uint32_t fungus_id; // ecx

  p_fungus_id = &event->fungus_id;
  if ( *(_BYTE *)(((unsigned __int64)p_fungus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_fungus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_fungus_id);
  }
  fungus_id = event->fungus_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( fungus_id == param->fungus_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2010: range 0000000016390DB6-0000000016390EF8
int32_t __cdecl FungusFighterCultivateFungusWatcher::tryUpdateProgressImpl(
        FungusFighterCultivateFungusWatcher *const this,
        Player *player,
        const FungusFighterCultivateFungusEvent *event,
        const FungusFighterCultivateFungusWatcherParam *param)
{
  uint32_t *p_cultivate_id; // rdx
  uint32_t cultivate_id; // ecx

  p_cultivate_id = &event->cultivate_id;
  if ( *(_BYTE *)(((unsigned __int64)p_cultivate_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_cultivate_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_cultivate_id);
  }
  cultivate_id = event->cultivate_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( cultivate_id == param->cultivate_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->step_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->step_limit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->step_limit);
    }
    if ( !param->step_limit )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)&event->cultivate_step >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cultivate_step >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->cultivate_step);
    }
    if ( event->cultivate_step <= param->step_limit )
LABEL_12:
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2024: range 0000000016390EFA-0000000016391032
int32_t __cdecl FungusFighterTrainingReachScoreWatcher::tryUpdateProgressImpl(
        FungusFighterTrainingReachScoreWatcher *const this,
        Player *player,
        const FungusFighterTrainingNewRecordScoreEvent *event,
        const FungusFighterTrainingReachScoreWatcherParam *param)
{
  uint32_t *p_dungeon_id; // rdx
  uint32_t dungeon_id; // ecx
  uint32_t score; // ecx

  p_dungeon_id = &event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_dungeon_id);
  }
  dungeon_id = event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( dungeon_id == param->dungeon_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    if ( *(_BYTE *)(((unsigned __int64)&param->target_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->target_score);
    }
    if ( score >= param->target_score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2034: range 0000000016391034-000000001639116C
int32_t __cdecl EffigyChallengeV2FinishRoomWatcher::tryUpdateProgressImpl(
        EffigyChallengeV2FinishRoomWatcher *const this,
        Player *player,
        const EffigyChallengeV2FinishRoomEvent *event,
        const EffigyChallengeV2FinishRoomWatcherParam *param)
{
  uint32_t *p_gallery_id; // rdx
  uint32_t gallery_id; // ecx
  uint32_t difficulty; // ecx

  p_gallery_id = &event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->difficulty);
    }
    difficulty = event->difficulty;
    if ( *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->difficulty);
    }
    if ( difficulty >= param->difficulty )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2044: range 000000001639116E-0000000016391219
int32_t __cdecl CharAmusementFinishStageWatcher::tryUpdateProgressImpl(
        CharAmusementFinishStageWatcher *const this,
        Player *player,
        const CharAmusementFinishStageEvent *event,
        const CharAmusementFinishStageWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id == param->stage_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2054: range 000000001639121A-00000000163913D7
int32_t __cdecl CoinCollectResultReachWatcher::tryUpdateProgressImpl(
        CoinCollectResultReachWatcher *const this,
        Player *player,
        const CoinCollectGalleryFinishEvent *event,
        const CoinCollectResultReachWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx
  uint32_t coin_num; // ecx
  uint32_t time_ms; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->coin_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->coin_num);
    }
    coin_num = event->coin_num;
    if ( *(_BYTE *)(((unsigned __int64)&param->coin_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->coin_num);
    }
    if ( coin_num >= param->coin_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->time_ms >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->time_ms >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->time_ms);
      }
      time_ms = event->time_ms;
      if ( *(_BYTE *)(((unsigned __int64)&param->time_ms >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->time_ms >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->time_ms);
      }
      if ( time_ms <= param->time_ms )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 2064: range 00000000163913D8-0000000016391483
int32_t __cdecl BrickBreakerFinishWorldLevelWatcher::tryUpdateProgressImpl(
        BrickBreakerFinishWorldLevelWatcher *const this,
        Player *player,
        const BrickBreakerWorldLevelFinishEvent *event,
        const BrickBreakerFinishWorldLevelWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2074: range 0000000016391484-00000000163915BC
int32_t __cdecl BrickBreakerWorldLevelScoreWatcher::tryUpdateProgressImpl(
        BrickBreakerWorldLevelScoreWatcher *const this,
        Player *player,
        const BrickBreakerWorldLevelFinishEvent *event,
        const BrickBreakerWorldLevelScoreWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx
  uint32_t score; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2084: range 00000000163915BE-00000000163916EE
int32_t __cdecl BrickBreakerWorldLevelComboWatcher::tryUpdateProgressImpl(
        BrickBreakerWorldLevelComboWatcher *const this,
        Player *player,
        const BrickBreakerWorldLevelFinishEvent *event,
        const BrickBreakerWorldLevelComboWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx
  uint32_t combo; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->combo >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->combo >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->combo);
    }
    combo = event->combo;
    if ( *(_BYTE *)(((unsigned __int64)&param->combo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->combo >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->combo);
    }
    if ( combo >= param->combo )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2094: range 00000000163916F0-000000001639179B
int32_t __cdecl BrickBreakerFinishDungeonLevelWatcher::tryUpdateProgressImpl(
        BrickBreakerFinishDungeonLevelWatcher *const this,
        Player *player,
        const BrickBreakerDungeonLevelFinishEvent *event,
        const BrickBreakerFinishDungeonLevelWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2104: range 000000001639179C-00000000163918D4
int32_t __cdecl BrickBreakerDungeonLevelScoreWatcher::tryUpdateProgressImpl(
        BrickBreakerDungeonLevelScoreWatcher *const this,
        Player *player,
        const BrickBreakerDungeonLevelFinishEvent *event,
        const BrickBreakerDungeonLevelScoreWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx
  uint32_t score; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2114: range 00000000163918D6-0000000016391A06
int32_t __cdecl BrickBreakerDungeonLevelComboWatcher::tryUpdateProgressImpl(
        BrickBreakerDungeonLevelComboWatcher *const this,
        Player *player,
        const BrickBreakerDungeonLevelFinishEvent *event,
        const BrickBreakerDungeonLevelComboWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx
  uint32_t combo; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->combo >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->combo >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->combo);
    }
    combo = event->combo;
    if ( *(_BYTE *)(((unsigned __int64)&param->combo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->combo >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->combo);
    }
    if ( combo >= param->combo )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2124: range 0000000016391A08-0000000016391B88
int32_t __cdecl BrickBreakerWorldLevelElemReactionWatcher::tryUpdateProgressImpl(
        BrickBreakerWorldLevelElemReactionWatcher *const this,
        Player *player,
        const BrickBreakerWorldLevelFinishEvent *event,
        const BrickBreakerWorldLevelElemReactionWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx
  google::protobuf::uint32 v6; // ecx
  uint32_t v7; // eax
  std::vector<proto::BreakoutElementReactionCounter>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<proto::BreakoutElementReactionCounter>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::vector<proto::BreakoutElementReactionCounter> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::BreakoutElementReactionCounter *element_reaction; // [rsp+38h] [rbp-18h]

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
  {
    __for_range = &event->brick_element_reaction_vec;
    __for_begin._M_current = std::vector<proto::BreakoutElementReactionCounter>::begin(&event->brick_element_reaction_vec)._M_current;
    __for_end._M_current = std::vector<proto::BreakoutElementReactionCounter>::end(&event->brick_element_reaction_vec)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>(
              &__for_begin,
              &__for_end) )
    {
      element_reaction = __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator*(&__for_begin);
      v6 = proto::BreakoutElementReactionCounter::element_reaction(element_reaction);
      if ( *(_BYTE *)(((unsigned __int64)&param->elem_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->elem_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->elem_type);
      }
      if ( v6 == param->elem_type )
      {
        v7 = proto::BreakoutElementReactionCounter::count(element_reaction);
        BaseWatcher::addProgress(this, v7);
      }
      __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator++(&__for_begin);
    }
  }
  return 0;
};

// Line 2140: range 0000000016391B8A-0000000016391D0A
int32_t __cdecl BrickBreakerWorldLevelBallElemReactionWatcher::tryUpdateProgressImpl(
        BrickBreakerWorldLevelBallElemReactionWatcher *const this,
        Player *player,
        const BrickBreakerWorldLevelFinishEvent *event,
        const BrickBreakerWorldLevelBallElemReactionWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx
  google::protobuf::uint32 v6; // ecx
  uint32_t v7; // eax
  std::vector<proto::BreakoutElementReactionCounter>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<proto::BreakoutElementReactionCounter>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::vector<proto::BreakoutElementReactionCounter> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::BreakoutElementReactionCounter *element_reaction; // [rsp+38h] [rbp-18h]

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
  {
    __for_range = &event->ball_element_reaction_vec;
    __for_begin._M_current = std::vector<proto::BreakoutElementReactionCounter>::begin(&event->ball_element_reaction_vec)._M_current;
    __for_end._M_current = std::vector<proto::BreakoutElementReactionCounter>::end(&event->ball_element_reaction_vec)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>(
              &__for_begin,
              &__for_end) )
    {
      element_reaction = __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator*(&__for_begin);
      v6 = proto::BreakoutElementReactionCounter::element_reaction(element_reaction);
      if ( *(_BYTE *)(((unsigned __int64)&param->elem_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->elem_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->elem_type);
      }
      if ( v6 == param->elem_type )
      {
        v7 = proto::BreakoutElementReactionCounter::count(element_reaction);
        BaseWatcher::addProgress(this, v7);
      }
      __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator++(&__for_begin);
    }
  }
  return 0;
};

// Line 2156: range 0000000016391D0C-0000000016391E8C
int32_t __cdecl BrickBreakerDungeonLevelElemReactionWatcher::tryUpdateProgressImpl(
        BrickBreakerDungeonLevelElemReactionWatcher *const this,
        Player *player,
        const BrickBreakerDungeonLevelFinishEvent *event,
        const BrickBreakerDungeonLevelElemReactionWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx
  google::protobuf::uint32 v6; // ecx
  uint32_t v7; // eax
  std::vector<proto::BreakoutElementReactionCounter>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<proto::BreakoutElementReactionCounter>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::vector<proto::BreakoutElementReactionCounter> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::BreakoutElementReactionCounter *element_reaction; // [rsp+38h] [rbp-18h]

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
  {
    __for_range = &event->brick_element_reaction_vec;
    __for_begin._M_current = std::vector<proto::BreakoutElementReactionCounter>::begin(&event->brick_element_reaction_vec)._M_current;
    __for_end._M_current = std::vector<proto::BreakoutElementReactionCounter>::end(&event->brick_element_reaction_vec)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>(
              &__for_begin,
              &__for_end) )
    {
      element_reaction = __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator*(&__for_begin);
      v6 = proto::BreakoutElementReactionCounter::element_reaction(element_reaction);
      if ( *(_BYTE *)(((unsigned __int64)&param->elem_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->elem_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->elem_type);
      }
      if ( v6 == param->elem_type )
      {
        v7 = proto::BreakoutElementReactionCounter::count(element_reaction);
        BaseWatcher::addProgress(this, v7);
      }
      __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator++(&__for_begin);
    }
  }
  return 0;
};

// Line 2172: range 0000000016391E8E-000000001639200E
int32_t __cdecl BrickBreakerDungeonLevelBallElemReactionWatcher::tryUpdateProgressImpl(
        BrickBreakerDungeonLevelBallElemReactionWatcher *const this,
        Player *player,
        const BrickBreakerDungeonLevelFinishEvent *event,
        const BrickBreakerDungeonLevelBallElemReactionWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx
  google::protobuf::uint32 v6; // ecx
  uint32_t v7; // eax
  std::vector<proto::BreakoutElementReactionCounter>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<proto::BreakoutElementReactionCounter>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::vector<proto::BreakoutElementReactionCounter> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::BreakoutElementReactionCounter *element_reaction; // [rsp+38h] [rbp-18h]

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
  {
    __for_range = &event->ball_element_reaction_vec;
    __for_begin._M_current = std::vector<proto::BreakoutElementReactionCounter>::begin(&event->ball_element_reaction_vec)._M_current;
    __for_end._M_current = std::vector<proto::BreakoutElementReactionCounter>::end(&event->ball_element_reaction_vec)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>(
              &__for_begin,
              &__for_end) )
    {
      element_reaction = __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator*(&__for_begin);
      v6 = proto::BreakoutElementReactionCounter::element_reaction(element_reaction);
      if ( *(_BYTE *)(((unsigned __int64)&param->elem_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->elem_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->elem_type);
      }
      if ( v6 == param->elem_type )
      {
        v7 = proto::BreakoutElementReactionCounter::count(element_reaction);
        BaseWatcher::addProgress(this, v7);
      }
      __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator++(&__for_begin);
    }
  }
  return 0;
};

// Line 2188: range 0000000016392010-0000000016392148
int32_t __cdecl TeamChainScoreReachWatcher::tryUpdateProgressImpl(
        TeamChainScoreReachWatcher *const this,
        Player *player,
        const TeamChainStageSuccessFinishEvent *event,
        const TeamChainScoreReachWatcherParam *param)
{
  uint32_t *p_stage_id; // rdx
  uint32_t stage_id; // ecx
  uint32_t score; // ecx

  p_stage_id = &event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_stage_id);
  }
  stage_id = event->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( stage_id == param->stage_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2198: range 000000001639214A-00000000163922EE
int32_t __cdecl TeamChainFinishStageCntWatcher::tryUpdateProgressImpl(
        TeamChainFinishStageCntWatcher *const this,
        Player *player,
        const TeamChainStageSuccessFinishEvent *event,
        const TeamChainFinishStageCntWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<TeamChainActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  uint32_t Progress; // eax
  int32_t result; // eax
  uint32_t count; // [rsp+2Ch] [rbp-74h]
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 28 team_chain_activity_ptr:2199";
  *(_QWORD *)(v4 + 16) = TeamChainFinishStageCntWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<TeamChainActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( !std::operator==<TeamChainActivity>((const std::shared_ptr<TeamChainActivity> *)(v4 + 32), 0LL) )
  {
    v7 = std::__shared_ptr_access<TeamChainActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TeamChainActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    count = TeamChainActivity::getSuccessFinishStageCnt(v7, &param->stage_id_set);
    if ( count > BaseWatcher::getProgress(this) )
    {
      Progress = BaseWatcher::getProgress(this);
      BaseWatcher::addProgress(this, count - Progress);
    }
  }
  std::shared_ptr<TeamChainActivity>::~shared_ptr((std::shared_ptr<TeamChainActivity> *const)(v4 + 32));
  result = 0;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2215: range 00000000163922F0-00000000163923A3
int32_t __cdecl ElectroherculesBattleFinishLevelWatcher::tryUpdateProgressImpl(
        ElectroherculesBattleFinishLevelWatcher *const this,
        Player *player,
        const GalleryElectroherculesBattleSettleEvent *event,
        const ElectroherculesBattleFinishLevelWatcherParam *param)
{
  uint32_t level_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2225: range 00000000163923A4-00000000163926AD
int32_t __cdecl DuelHeartFinishLevelWatcher::tryUpdateProgressImpl(
        DuelHeartFinishLevelWatcher *const this,
        Player *player,
        const DuelHeartGallerySettleEvent *event,
        const DuelHeartFinishLevelWatcherParam *param)
{
  uint32_t level_id; // ecx
  uint32_t difficulty; // ecx
  uint32_t cost_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  level_id = param->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->level_id);
  }
  if ( level_id == event->level_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->difficulty >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->difficulty);
    }
    difficulty = event->difficulty;
    if ( *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->difficulty >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->difficulty);
    }
    if ( difficulty >= param->difficulty )
    {
      if ( *(_BYTE *)(((unsigned __int64)&param->is_succ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)param + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_succ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&param->is_succ);
      }
      if ( !param->is_succ )
        goto LABEL_26;
      if ( *(char *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&event->is_succ);
      if ( event->is_succ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&param->cost_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->cost_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->cost_time);
        }
        if ( !param->cost_time )
          goto LABEL_29;
        if ( *(_BYTE *)(((unsigned __int64)&param->cost_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->cost_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->cost_time);
        }
        cost_time = param->cost_time;
        if ( *(_BYTE *)(((unsigned __int64)&event->cost_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cost_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&event->cost_time);
        }
        if ( cost_time >= event->cost_time )
LABEL_29:
          BaseWatcher::addProgress(this, 1u);
      }
      else
      {
LABEL_26:
        if ( *(_BYTE *)(((unsigned __int64)&param->is_succ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)param + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_succ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&param->is_succ);
        }
        if ( !param->is_succ )
          goto LABEL_29;
      }
    }
  }
  return 0;
};

// Line 2254: range 00000000163926AE-00000000163927E6
int32_t __cdecl LanV3RaceWatcher::tryUpdateProgressImpl(
        LanV3RaceWatcher *const this,
        Player *player,
        const LanV3RaceScoreEvent *event,
        const LanV3RaceWatcherParam *param)
{
  uint32_t *p_gallery_id; // rdx
  uint32_t gallery_id; // ecx
  uint32_t score; // ecx

  p_gallery_id = &event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2264: range 00000000163927E8-0000000016392893
int32_t __cdecl LanV3ShadowFinishLevelWatcher::tryUpdateProgressImpl(
        LanV3ShadowFinishLevelWatcher *const this,
        Player *player,
        const LanV3ShadowFinishLevelEvent *event,
        const LanV3ShadowFinishLevelWatcherParam *param)
{
  uint32_t *p_level_id; // rdx
  uint32_t level_id; // ecx

  p_level_id = &event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level_id);
  }
  level_id = event->level_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level_id == param->level_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2270: range 00000000163942DA-00000000163942EE
void __cdecl GLOBAL__sub_I_merge_single_watcher_for_activity_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 2270: range 0000000016392894-00000000163942D9
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  __int64 v11; // rsi
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  char v31; // dl
  __int64 v32; // rdx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_watcher_for_activity.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      WatcherFactoryMarker<EffigyChallengeScoreWatcher>::WatcherFactoryMarker(
        &maker_EffigyChallengeScoreWatcher,
        TRIGGER_EFFIGY_CHALLENGE_SCORE);
      ListenEventMarker<EffigyChallengeScoreWatcher>::ListenEventMarker(
        &listen_maker_EffigyChallengeScoreWatcher,
        TRIGGER_EFFIGY_CHALLENGE_SCORE);
      WatcherFactoryMarker<CrucibleElementScoreWatcher>::WatcherFactoryMarker(
        &maker_CrucibleElementScoreWatcher,
        TRIGGER_CRUCIBLE_ELEMENT_SCORE);
      ListenEventMarker<CrucibleElementScoreWatcher>::ListenEventMarker(
        &listen_maker_CrucibleElementScoreWatcher,
        TRIGGER_CRUCIBLE_ELEMENT_SCORE);
      WatcherFactoryMarker<CrucibleMaxBallWatcher>::WatcherFactoryMarker(
        &maker_CrucibleMaxBallWatcher,
        TRIGGER_CRUCIBLE_MAX_BALL);
      ListenEventMarker<CrucibleMaxBallWatcher>::ListenEventMarker(
        &listen_maker_CrucibleMaxBallWatcher,
        TRIGGER_CRUCIBLE_MAX_BALL);
      WatcherFactoryMarker<CrucibleMaxScoreWatcher>::WatcherFactoryMarker(
        &maker_CrucibleMaxScoreWatcher,
        TRIGGER_CRUCIBLE_MAX_SCORE);
      ListenEventMarker<CrucibleMaxScoreWatcher>::ListenEventMarker(
        &listen_maker_CrucibleMaxScoreWatcher,
        TRIGGER_CRUCIBLE_MAX_SCORE);
      WatcherFactoryMarker<CrucibleSubmitBallWatcher>::WatcherFactoryMarker(
        &maker_CrucibleSubmitBallWatcher,
        TRIGGER_CRUCIBLE_SUBMIT_BALL);
      ListenEventMarker<CrucibleSubmitBallWatcher>::ListenEventMarker(
        &listen_maker_CrucibleSubmitBallWatcher,
        TRIGGER_CRUCIBLE_SUBMIT_BALL);
      WatcherFactoryMarker<CrucibleWorldLevelScoreWatcher>::WatcherFactoryMarker(
        &maker_CrucibleWorldLevelScoreWatcher,
        TRIGGER_CRUCIBLE_WORLD_LEVEL_SCORE);
      ListenEventMarker<CrucibleWorldLevelScoreWatcher>::ListenEventMarker(
        &listen_maker_CrucibleWorldLevelScoreWatcher,
        TRIGGER_CRUCIBLE_WORLD_LEVEL_SCORE);
      WatcherFactoryMarker<BlessingExchangePicNumWatcher>::WatcherFactoryMarker(
        &maker_BlessingExchangePicNumWatcher,
        TRIGGER_BLESSING_EXCHANGE_PIC_NUM);
      ListenEventMarker<BlessingExchangePicNumWatcher>::ListenEventMarker(
        &listen_maker_BlessingExchangePicNumWatcher,
        TRIGGER_BLESSING_EXCHANGE_PIC_NUM);
      WatcherFactoryMarker<BlessingRedeemRewardWatcher>::WatcherFactoryMarker(
        &maker_BlessingRedeemRewardWatcher,
        TRIGGER_BLESSING_REDEEM_REWARD_NUM);
      ListenEventMarker<BlessingRedeemRewardWatcher>::ListenEventMarker(
        &listen_maker_BlessingRedeemRewardWatcher,
        TRIGGER_BLESSING_REDEEM_REWARD_NUM);
      WatcherFactoryMarker<MechanicusUnlockGearWatcher>::WatcherFactoryMarker(
        &maker_MechanicusUnlockGearWatcher,
        TRIGGER_MECHANICUS_UNLOCK_GEAR);
      ListenEventMarker<MechanicusUnlockGearWatcher>::ListenEventMarker(
        &listen_maker_MechanicusUnlockGearWatcher,
        TRIGGER_MECHANICUS_UNLOCK_GEAR);
      WatcherFactoryMarker<MechanicusLevelupGearWatcher>::WatcherFactoryMarker(
        &maker_MechanicusLevelupGearWatcher,
        TRIGGER_MECHANICUS_LEVELUP_GEAR);
      ListenEventMarker<MechanicusLevelupGearWatcher>::ListenEventMarker(
        &listen_maker_MechanicusLevelupGearWatcher,
        TRIGGER_MECHANICUS_LEVELUP_GEAR);
      WatcherFactoryMarker<MechanicusDifficultWatcher>::WatcherFactoryMarker(
        &maker_MechanicusDifficultWatcher,
        TRIGGER_MECHANICUS_DIFFICULT);
      ListenEventMarker<MechanicusDifficultWatcher>::ListenEventMarker(
        &listen_maker_MechanicusDifficultWatcher,
        TRIGGER_MECHANICUS_DIFFICULT);
      WatcherFactoryMarker<MechanicusDifficultScoreWatcher>::WatcherFactoryMarker(
        &maker_MechanicusDifficultScoreWatcher,
        TRIGGER_MECHANICUS_DIFFICULT_SCORE);
      ListenEventMarker<MechanicusDifficultScoreWatcher>::ListenEventMarker(
        &listen_maker_MechanicusDifficultScoreWatcher,
        TRIGGER_MECHANICUS_DIFFICULT_SCORE);
      WatcherFactoryMarker<MechanicusDifficultEqWatcher>::WatcherFactoryMarker(
        &maker_MechanicusDifficultEqWatcher,
        TRIGGER_MECHANICUS_DIFFICULT_EQ);
      ListenEventMarker<MechanicusDifficultEqWatcher>::ListenEventMarker(
        &listen_maker_MechanicusDifficultEqWatcher,
        TRIGGER_MECHANICUS_DIFFICULT_EQ);
      WatcherFactoryMarker<MechanicusKillMonsterWatcher>::WatcherFactoryMarker(
        &maker_MechanicusKillMonsterWatcher,
        TRIGGER_MECHANICUS_KILL_MONSTER);
      ListenEventMarker<MechanicusKillMonsterWatcher>::ListenEventMarker(
        &listen_maker_MechanicusKillMonsterWatcher,
        TRIGGER_MECHANICUS_KILL_MONSTER);
      WatcherFactoryMarker<MechanicusBuildingPointWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBuildingPointWatcher,
        TRIGGER_MECHANICUS_BUILDING_POINT);
      ListenEventMarker<MechanicusBuildingPointWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBuildingPointWatcher,
        TRIGGER_MECHANICUS_BUILDING_POINT);
      WatcherFactoryMarker<MechanicusBattleEndWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleEndWatcher,
        TRIGGER_MECHANICUS_BATTLE_END);
      ListenEventMarker<MechanicusBattleEndWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleEndWatcher,
        TRIGGER_MECHANICUS_BATTLE_END);
      WatcherFactoryMarker<MechanicusBattleEndEscapeMonsterWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleEndEscapeMonsterWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_EXCAPED_LESS_THAN);
      ListenEventMarker<MechanicusBattleEndEscapeMonsterWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleEndEscapeMonsterWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_EXCAPED_LESS_THAN);
      WatcherFactoryMarker<MechanicusBattleBuildingPointGteqWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleBuildingPointGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_POINTS_MORE_THAN);
      ListenEventMarker<MechanicusBattleBuildingPointGteqWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleBuildingPointGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_POINTS_MORE_THAN);
      WatcherFactoryMarker<MechanicusBattleRoundGteqWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleRoundGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_ROUND_MORE_THAN);
      ListenEventMarker<MechanicusBattleRoundGteqWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleRoundGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_ROUND_MORE_THAN);
      WatcherFactoryMarker<MechanicusBattleLastRoundWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleLastRoundWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_ROUND);
      ListenEventMarker<MechanicusBattleLastRoundWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleLastRoundWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_ROUND);
      WatcherFactoryMarker<MechanicusBattleWatcherFinishWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleWatcherFinishWatcher,
        TRIGGER_MECHANICUS_BATTLE_WATCHER_FINISH_COUNT);
      ListenEventMarker<MechanicusBattleWatcherFinishWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleWatcherFinishWatcher,
        TRIGGER_MECHANICUS_BATTLE_WATCHER_FINISH_COUNT);
      WatcherFactoryMarker<FleurFairDungeonFinishInLimitTimeWatcher>::WatcherFactoryMarker(
        &maker_FleurFairDungeonFinishInLimitTimeWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_IN_LIMIT_TIME);
      ListenEventMarker<FleurFairDungeonFinishInLimitTimeWatcher>::ListenEventMarker(
        &listen_maker_FleurFairDungeonFinishInLimitTimeWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_IN_LIMIT_TIME);
      WatcherFactoryMarker<FleurFairDungeonFinishKeepEnergyWatcher>::WatcherFactoryMarker(
        &maker_FleurFairDungeonFinishKeepEnergyWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_KEEP_ENERGY);
      ListenEventMarker<FleurFairDungeonFinishKeepEnergyWatcher>::ListenEventMarker(
        &listen_maker_FleurFairDungeonFinishKeepEnergyWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_KEEP_ENERGY);
      WatcherFactoryMarker<FleurFairDungeonFinishWithGroupVariableWatcher>::WatcherFactoryMarker(
        &maker_FleurFairDungeonFinishWithGroupVariableWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_WITH_GROUP_VARIABLE);
      ListenEventMarker<FleurFairDungeonFinishWithGroupVariableWatcher>::ListenEventMarker(
        &listen_maker_FleurFairDungeonFinishWithGroupVariableWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_WITH_GROUP_VARIABLE);
      WatcherFactoryMarker<FleurFairDungeonFinishWithBuffNumWatcher>::WatcherFactoryMarker(
        &maker_FleurFairDungeonFinishWithBuffNumWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_WITH_BUFF_NUM);
      ListenEventMarker<FleurFairDungeonFinishWithBuffNumWatcher>::ListenEventMarker(
        &listen_maker_FleurFairDungeonFinishWithBuffNumWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_WITH_BUFF_NUM);
      WatcherFactoryMarker<FleurFairDungeonMissionFinishWatcher>::WatcherFactoryMarker(
        &maker_FleurFairDungeonMissionFinishWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_MISSION_FINISH);
      ListenEventMarker<FleurFairDungeonMissionFinishWatcher>::ListenEventMarker(
        &listen_maker_FleurFairDungeonMissionFinishWatcher,
        TRIGGER_FLEUR_FAIR_DUNGEON_MISSION_FINISH);
      WatcherFactoryMarker<HuntingFinishWatcher>::WatcherFactoryMarker(
        &maker_HuntingFinishWatcher,
        TRIGGER_HUNTING_FINISH_NUM);
      ListenEventMarker<HuntingFinishWatcher>::ListenEventMarker(
        &listen_maker_HuntingFinishWatcher,
        TRIGGER_HUNTING_FINISH_NUM);
      WatcherFactoryMarker<HuntingFailWatcher>::WatcherFactoryMarker(
        &maker_HuntingFailWatcher,
        TRIGGER_HUNTING_FAIL_NUM);
      ListenEventMarker<HuntingFailWatcher>::ListenEventMarker(
        &listen_maker_HuntingFailWatcher,
        TRIGGER_HUNTING_FAIL_NUM);
      WatcherFactoryMarker<DeliveryFinishWatcher>::WatcherFactoryMarker(
        &maker_DeliveryFinishWatcher,
        TRIGGER_FINISH_DAILY_DELIVERY_NUM);
      ListenEventMarker<DeliveryFinishWatcher>::ListenEventMarker(
        &listen_maker_DeliveryFinishWatcher,
        TRIGGER_FINISH_DAILY_DELIVERY_NUM);
      WatcherFactoryMarker<TreasureMapDoneRegionWatcher>::WatcherFactoryMarker(
        &maker_TreasureMapDoneRegionWatcher,
        TRIGGER_TREASURE_MAP_DONE_REGION);
      ListenEventMarker<TreasureMapDoneRegionWatcher>::ListenEventMarker(
        &listen_maker_TreasureMapDoneRegionWatcher,
        TRIGGER_TREASURE_MAP_DONE_REGION);
      WatcherFactoryMarker<TreasureSeelieDoneRegionWatcher>::WatcherFactoryMarker(
        &maker_TreasureSeelieDoneRegionWatcher,
        TRIGGER_TREASURE_SEELIE_DONE_REGION);
      ListenEventMarker<TreasureSeelieDoneRegionWatcher>::ListenEventMarker(
        &listen_maker_TreasureSeelieDoneRegionWatcher,
        TRIGGER_TREASURE_SEELIE_DONE_REGION);
      WatcherFactoryMarker<SeaLampMiniQuestWatcher>::WatcherFactoryMarker(
        &maker_SeaLampMiniQuestWatcher,
        TRIGGER_SEA_LAMP_MINI_QUEST);
      ListenEventMarker<SeaLampMiniQuestWatcher>::ListenEventMarker(
        &listen_maker_SeaLampMiniQuestWatcher,
        TRIGGER_SEA_LAMP_MINI_QUEST);
      WatcherFactoryMarker<FindHilichurlFinishLevelWatcher>::WatcherFactoryMarker(
        &maker_FindHilichurlFinishLevelWatcher,
        TRIGGER_FINISH_FIND_HILICHURL_LEVEL);
      ListenEventMarker<FindHilichurlFinishLevelWatcher>::ListenEventMarker(
        &listen_maker_FindHilichurlFinishLevelWatcher,
        TRIGGER_FINISH_FIND_HILICHURL_LEVEL);
      WatcherFactoryMarker<MechanicusBattleEndGearMoreThanWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleEndGearMoreThanWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_GEAR_MORE_THAN);
      ListenEventMarker<MechanicusBattleEndGearMoreThanWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleEndGearMoreThanWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_GEAR_MORE_THAN);
      WatcherFactoryMarker<MechanicusBattleEndBuildGearMoreThanWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleEndBuildGearMoreThanWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_BUILD_GEAR_MORE_THAN);
      ListenEventMarker<MechanicusBattleEndBuildGearMoreThanWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleEndBuildGearMoreThanWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_BUILD_GEAR_MORE_THAN);
      WatcherFactoryMarker<MechanicusBattleEndPureGearDamageWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleEndPureGearDamageWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_PURE_GEAR_DAMAGE);
      ListenEventMarker<MechanicusBattleEndPureGearDamageWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleEndPureGearDamageWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_PURE_GEAR_DAMAGE);
      WatcherFactoryMarker<MechanicusBattleEndCardPickGteqWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleEndCardPickGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_CARD_PICK_MORE_THAN);
      ListenEventMarker<MechanicusBattleEndCardPickGteqWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleEndCardPickGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_CARD_PICK_MORE_THAN);
      WatcherFactoryMarker<MechanicusBattleEndCardTargetGteqWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleEndCardTargetGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_CARD_TARGET_MORE_THAN);
      ListenEventMarker<MechanicusBattleEndCardTargetGteqWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleEndCardTargetGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_CARD_TARGET_MORE_THAN);
      WatcherFactoryMarker<MechanicusBattleEndGearKillGteqWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleEndGearKillGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_GEAR_KILL_MORE_THAN);
      ListenEventMarker<MechanicusBattleEndGearKillGteqWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleEndGearKillGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_END_GEAR_KILL_MORE_THAN);
      WatcherFactoryMarker<MechanicusBattleEndFinChallengeGteqWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleEndFinChallengeGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_FIN_CHALLENGE_MORE_THAN);
      ListenEventMarker<MechanicusBattleEndFinChallengeGteqWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleEndFinChallengeGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_FIN_CHALLENGE_MORE_THAN);
      WatcherFactoryMarker<MechanicusBattleInteractGteqWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleInteractGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_INTERACT_COUNT);
      ListenEventMarker<MechanicusBattleInteractGteqWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleInteractGteqWatcher,
        TRIGGER_MECHANICUS_BATTLE_INTERACT_COUNT);
      WatcherFactoryMarker<MechanicusBattleDifficultEscapeWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleDifficultEscapeWatcher,
        TRIGGER_MECHANICUS_BATTLE_DIFFICULT_ESCAPE);
      ListenEventMarker<MechanicusBattleDifficultEscapeWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleDifficultEscapeWatcher,
        TRIGGER_MECHANICUS_BATTLE_DIFFICULT_ESCAPE);
      WatcherFactoryMarker<MechanicusBattleDifficultGearNumWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleDifficultGearNumWatcher,
        TRIGGER_MECHANICUS_BATTLE_DIFFICULT_GEAR_NUM);
      ListenEventMarker<MechanicusBattleDifficultGearNumWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleDifficultGearNumWatcher,
        TRIGGER_MECHANICUS_BATTLE_DIFFICULT_GEAR_NUM);
      WatcherFactoryMarker<MechanicusBattleDifficultGearIdNumWatcher>::WatcherFactoryMarker(
        &maker_MechanicusBattleDifficultGearIdNumWatcher,
        TRIGGER_MECHANICUS_BATTLE_DIFFICULT_GEAR_ID_NUM);
      ListenEventMarker<MechanicusBattleDifficultGearIdNumWatcher>::ListenEventMarker(
        &listen_maker_MechanicusBattleDifficultGearIdNumWatcher,
        TRIGGER_MECHANICUS_BATTLE_DIFFICULT_GEAR_ID_NUM);
      WatcherFactoryMarker<GalleryBalloonReachScoreWatcher>::WatcherFactoryMarker(
        &maker_GalleryBalloonReachScoreWatcher,
        TRIGGER_GALLERY_BALLOON_REACH_SCORE);
      ListenEventMarker<GalleryBalloonReachScoreWatcher>::ListenEventMarker(
        &listen_maker_GalleryBalloonReachScoreWatcher,
        TRIGGER_GALLERY_BALLOON_REACH_SCORE);
      WatcherFactoryMarker<GalleryFallReachScoreWatcher>::WatcherFactoryMarker(
        &maker_GalleryFallReachScoreWatcher,
        TRIGGER_GALLERY_FALL_REACH_SCORE);
      ListenEventMarker<GalleryFallReachScoreWatcher>::ListenEventMarker(
        &listen_maker_GalleryFallReachScoreWatcher,
        TRIGGER_GALLERY_FALL_REACH_SCORE);
      WatcherFactoryMarker<FleurFairMusicGameReachScoreWatcher>::WatcherFactoryMarker(
        &maker_FleurFairMusicGameReachScoreWatcher,
        TRIGGER_FLEUR_FAIR_MUSIC_GAME_REACH_SCORE);
      ListenEventMarker<FleurFairMusicGameReachScoreWatcher>::ListenEventMarker(
        &listen_maker_FleurFairMusicGameReachScoreWatcher,
        TRIGGER_FLEUR_FAIR_MUSIC_GAME_REACH_SCORE);
      WatcherFactoryMarker<FinishAllArenaChallengeWatcherInScheduleWatcher>::WatcherFactoryMarker(
        &maker_FinishAllArenaChallengeWatcherInScheduleWatcher,
        TRIGGER_FINISH_ALL_ARENA_CHALLENGE_WATCHER_IN_SCHEDULE);
      ListenEventMarker<FinishAllArenaChallengeWatcherInScheduleWatcher>::ListenEventMarker(
        &listen_maker_FinishAllArenaChallengeWatcherInScheduleWatcher,
        TRIGGER_FINISH_ALL_ARENA_CHALLENGE_WATCHER_IN_SCHEDULE);
      WatcherFactoryMarker<MistTrialDungeonStatWatcher>::WatcherFactoryMarker(
        &maker_MistTrialDungeonStatWatcher,
        TRIGGER_DUNGEON_MIST_TRIAL_STAT);
      ListenEventMarker<MistTrialDungeonStatWatcher>::ListenEventMarker(
        &listen_maker_MistTrialDungeonStatWatcher,
        TRIGGER_DUNGEON_MIST_TRIAL_STAT);
      WatcherFactoryMarker<FinishDungeonMistTrialStatWatcher>::WatcherFactoryMarker(
        &maker_FinishDungeonMistTrialStatWatcher,
        TRIGGER_FINISH_DUNGEON_WITH_MIST_TRIAL_STAT);
      ListenEventMarker<FinishDungeonMistTrialStatWatcher>::ListenEventMarker(
        &listen_maker_FinishDungeonMistTrialStatWatcher,
        TRIGGER_FINISH_DUNGEON_WITH_MIST_TRIAL_STAT);
      WatcherFactoryMarker<ActivityScoreExceedValueWatcher>::WatcherFactoryMarker(
        &maker_ActivityScoreExceedValueWatcher,
        TRIGGER_ACTIVITY_SCORE_EXCEED_VALUE);
      ListenEventMarker<ActivityScoreExceedValueWatcher>::ListenEventMarker(
        &listen_maker_ActivityScoreExceedValueWatcher,
        TRIGGER_ACTIVITY_SCORE_EXCEED_VALUE);
      WatcherFactoryMarker<GroupSummerTimeSprintBoatReachPointsWatcher>::WatcherFactoryMarker(
        &maker_GroupSummerTimeSprintBoatReachPointsWatcher,
        TRIGGER_GROUP_SUMMER_TIME_SPRINT_BOAT_REACH_POINTS);
      ListenEventMarker<GroupSummerTimeSprintBoatReachPointsWatcher>::ListenEventMarker(
        &listen_maker_GroupSummerTimeSprintBoatReachPointsWatcher,
        TRIGGER_GROUP_SUMMER_TIME_SPRINT_BOAT_REACH_POINTS);
      WatcherFactoryMarker<GalleryBuoyantCombatReachScoreWatcher>::WatcherFactoryMarker(
        &maker_GalleryBuoyantCombatReachScoreWatcher,
        TRIGGER_GALLERY_BUOYANT_COMBAT_REACH_SCORE);
      ListenEventMarker<GalleryBuoyantCombatReachScoreWatcher>::ListenEventMarker(
        &listen_maker_GalleryBuoyantCombatReachScoreWatcher,
        TRIGGER_GALLERY_BUOYANT_COMBAT_REACH_SCORE);
      WatcherFactoryMarker<BuoyantCombatReachNewScoreLevelWatcher>::WatcherFactoryMarker(
        &maker_BuoyantCombatReachNewScoreLevelWatcher,
        TRIGGER_BUOYANT_COMBAT_REACH_NEW_SCORE_LEVEL);
      ListenEventMarker<BuoyantCombatReachNewScoreLevelWatcher>::ListenEventMarker(
        &listen_maker_BuoyantCombatReachNewScoreLevelWatcher,
        TRIGGER_BUOYANT_COMBAT_REACH_NEW_SCORE_LEVEL);
      WatcherFactoryMarker<BounceConjuringFinishCountWatcher>::WatcherFactoryMarker(
        &maker_BounceConjuringFinishCountWatcher,
        TRIGGER_BOUNCE_CONJURING_FINISH_COUNT);
      ListenEventMarker<BounceConjuringFinishCountWatcher>::ListenEventMarker(
        &listen_maker_BounceConjuringFinishCountWatcher,
        TRIGGER_BOUNCE_CONJURING_FINISH_COUNT);
      WatcherFactoryMarker<BounceConjuringScoreWatcher>::WatcherFactoryMarker(
        &maker_BounceConjuringScoreWatcher,
        TRIGGER_BOUNCE_CONJURING_SCORE);
      ListenEventMarker<BounceConjuringScoreWatcher>::ListenEventMarker(
        &listen_maker_BounceConjuringScoreWatcher,
        TRIGGER_BOUNCE_CONJURING_SCORE);
      WatcherFactoryMarker<ChessKillMonstersWatcher>::WatcherFactoryMarker(
        &maker_ChessKillMonstersWatcher,
        TRIGGER_CHESS_KILL_MONSTERS);
      ListenEventMarker<ChessKillMonstersWatcher>::ListenEventMarker(
        &listen_maker_ChessKillMonstersWatcher,
        TRIGGER_CHESS_KILL_MONSTERS);
      WatcherFactoryMarker<ChessCostBuildingPointsWatcher>::WatcherFactoryMarker(
        &maker_ChessCostBuildingPointsWatcher,
        TRIGGER_CHESS_COST_BUILDING_POINTS);
      ListenEventMarker<ChessCostBuildingPointsWatcher>::ListenEventMarker(
        &listen_maker_ChessCostBuildingPointsWatcher,
        TRIGGER_CHESS_COST_BUILDING_POINTS);
      WatcherFactoryMarker<ChessDungeonAddScoreWatcher>::WatcherFactoryMarker(
        &maker_ChessDungeonAddScoreWatcher,
        TRIGGER_CHESS_DUNGEON_ADD_SCORE);
      ListenEventMarker<ChessDungeonAddScoreWatcher>::ListenEventMarker(
        &listen_maker_ChessDungeonAddScoreWatcher,
        TRIGGER_CHESS_DUNGEON_ADD_SCORE);
      WatcherFactoryMarker<ChessDungeonEscapedMonstersWatcher>::WatcherFactoryMarker(
        &maker_ChessDungeonEscapedMonstersWatcher,
        TRIGGER_CHESS_DUNGEON_SUCC_WITH_ESCAPED_MONSTERS_LESS_THAN);
      ListenEventMarker<ChessDungeonEscapedMonstersWatcher>::ListenEventMarker(
        &listen_maker_ChessDungeonEscapedMonstersWatcher,
        TRIGGER_CHESS_DUNGEON_SUCC_WITH_ESCAPED_MONSTERS_LESS_THAN);
      WatcherFactoryMarker<ChessDungeonTowerCountWatcher>::WatcherFactoryMarker(
        &maker_ChessDungeonTowerCountWatcher,
        TRIGGER_CHESS_DUNGEON_SUCC_WITH_TOWER_COUNT_LESS_OR_EQUAL);
      ListenEventMarker<ChessDungeonTowerCountWatcher>::ListenEventMarker(
        &listen_maker_ChessDungeonTowerCountWatcher,
        TRIGGER_CHESS_DUNGEON_SUCC_WITH_TOWER_COUNT_LESS_OR_EQUAL);
      WatcherFactoryMarker<ChessDungeonCardCountLessOrEqualWatcher>::WatcherFactoryMarker(
        &maker_ChessDungeonCardCountLessOrEqualWatcher,
        TRIGGER_CHESS_DUNGEON_SUCC_WITH_CARD_COUNT_LESS_OR_EQUAL);
      ListenEventMarker<ChessDungeonCardCountLessOrEqualWatcher>::ListenEventMarker(
        &listen_maker_ChessDungeonCardCountLessOrEqualWatcher,
        TRIGGER_CHESS_DUNGEON_SUCC_WITH_CARD_COUNT_LESS_OR_EQUAL);
      WatcherFactoryMarker<ChessDungeonCardCountGreaterThanWatcher>::WatcherFactoryMarker(
        &maker_ChessDungeonCardCountGreaterThanWatcher,
        TRIGGER_CHESS_DUNGEON_SUCC_WITH_CARD_COUNT_GREATER_THAN);
      ListenEventMarker<ChessDungeonCardCountGreaterThanWatcher>::ListenEventMarker(
        &listen_maker_ChessDungeonCardCountGreaterThanWatcher,
        TRIGGER_CHESS_DUNGEON_SUCC_WITH_CARD_COUNT_GREATER_THAN);
      WatcherFactoryMarker<ChessLevelWatcher>::WatcherFactoryMarker(&maker_ChessLevelWatcher, TRIGGER_CHESS_REACH_LEVEL);
      ListenEventMarker<ChessLevelWatcher>::ListenEventMarker(
        &listen_maker_ChessLevelWatcher,
        TRIGGER_CHESS_REACH_LEVEL);
      WatcherFactoryMarker<LunaRiteSearchWatcher>::WatcherFactoryMarker(
        &maker_LunaRiteSearchWatcher,
        TRIGGER_LUNA_RITE_SEARCH);
      ListenEventMarker<LunaRiteSearchWatcher>::ListenEventMarker(
        &listen_maker_LunaRiteSearchWatcher,
        TRIGGER_LUNA_RITE_SEARCH);
      WatcherFactoryMarker<SumoStageScoreReachWatcher>::WatcherFactoryMarker(
        &maker_SumoStageScoreReachWatcher,
        TRIGGER_SUMO_STAGE_SCORE_REACH);
      ListenEventMarker<SumoStageScoreReachWatcher>::ListenEventMarker(
        &listen_maker_SumoStageScoreReachWatcher,
        TRIGGER_SUMO_STAGE_SCORE_REACH);
      WatcherFactoryMarker<SumoTotalMaxScoreReachWatcher>::WatcherFactoryMarker(
        &maker_SumoTotalMaxScoreReachWatcher,
        TRIGGER_SUMO_TOTAL_MAX_SCORE_REACH);
      ListenEventMarker<SumoTotalMaxScoreReachWatcher>::ListenEventMarker(
        &listen_maker_SumoTotalMaxScoreReachWatcher,
        TRIGGER_SUMO_TOTAL_MAX_SCORE_REACH);
      WatcherFactoryMarker<PlantFlowerSetWishWatcher>::WatcherFactoryMarker(
        &maker_PlantFlowerSetWishWatcher,
        TRIGGER_PLANT_FLOWER_SET_WISH);
      ListenEventMarker<PlantFlowerSetWishWatcher>::ListenEventMarker(
        &listen_maker_PlantFlowerSetWishWatcher,
        TRIGGER_PLANT_FLOWER_SET_WISH);
      WatcherFactoryMarker<PlantFlowerGiveFlowerWatcher>::WatcherFactoryMarker(
        &maker_PlantFlowerGiveFlowerWatcher,
        TRIGGER_PLANT_FLOWER_GIVE_FLOWER);
      ListenEventMarker<PlantFlowerGiveFlowerWatcher>::ListenEventMarker(
        &listen_maker_PlantFlowerGiveFlowerWatcher,
        TRIGGER_PLANT_FLOWER_GIVE_FLOWER);
      WatcherFactoryMarker<PlantFlowerObtainFlowerTypeWatcher>::WatcherFactoryMarker(
        &maker_PlantFlowerObtainFlowerTypeWatcher,
        TRIGGER_PLANT_FLOWER_OBTAIN_FLOWER_TYPE);
      ListenEventMarker<PlantFlowerObtainFlowerTypeWatcher>::ListenEventMarker(
        &listen_maker_PlantFlowerObtainFlowerTypeWatcher,
        TRIGGER_PLANT_FLOWER_OBTAIN_FLOWER_TYPE);
      WatcherFactoryMarker<PlantFlowerCommonObtainFlowerTypeWatcher>::WatcherFactoryMarker(
        &maker_PlantFlowerCommonObtainFlowerTypeWatcher,
        TRIGGER_PLANT_FLOWER_COMMON_OBTAIN_FLOWER_TYPE);
      ListenEventMarker<PlantFlowerCommonObtainFlowerTypeWatcher>::ListenEventMarker(
        &listen_maker_PlantFlowerCommonObtainFlowerTypeWatcher,
        TRIGGER_PLANT_FLOWER_COMMON_OBTAIN_FLOWER_TYPE);
      WatcherFactoryMarker<RogueDestoryGadgetNumWatcher>::WatcherFactoryMarker(
        &maker_RogueDestoryGadgetNumWatcher,
        TRIGGER_ROGUE_DESTROY_GADGET_NUM);
      ListenEventMarker<RogueDestoryGadgetNumWatcher>::ListenEventMarker(
        &listen_maker_RogueDestoryGadgetNumWatcher,
        TRIGGER_ROGUE_DESTROY_GADGET_NUM);
      WatcherFactoryMarker<RogueKillMonsterNumWatcher>::WatcherFactoryMarker(
        &maker_RogueKillMonsterNumWatcher,
        TRIGGER_ROGUE_KILL_MONSTER_NUM);
      ListenEventMarker<RogueKillMonsterNumWatcher>::ListenEventMarker(
        &listen_maker_RogueKillMonsterNumWatcher,
        TRIGGER_ROGUE_KILL_MONSTER_NUM);
      WatcherFactoryMarker<RogueFinishWithoutUsingSpringCellWatcher>::WatcherFactoryMarker(
        &maker_RogueFinishWithoutUsingSpringCellWatcher,
        TRIGGER_ROGUE_FINISH_WITHOUT_USING_SPRING_CELL);
      ListenEventMarker<RogueFinishWithoutUsingSpringCellWatcher>::ListenEventMarker(
        &listen_maker_RogueFinishWithoutUsingSpringCellWatcher,
        TRIGGER_ROGUE_FINISH_WITHOUT_USING_SPRING_CELL);
      WatcherFactoryMarker<RogueFinishAllChallengeCellWatcher>::WatcherFactoryMarker(
        &maker_RogueFinishAllChallengeCellWatcher,
        TRIGGER_ROGUE_FINISH_ALL_CHALLENGE_CELL);
      ListenEventMarker<RogueFinishAllChallengeCellWatcher>::ListenEventMarker(
        &listen_maker_RogueFinishAllChallengeCellWatcher,
        TRIGGER_ROGUE_FINISH_ALL_CHALLENGE_CELL);
      WatcherFactoryMarker<RogueFinishNoAvatarDeadWatcher>::WatcherFactoryMarker(
        &maker_RogueFinishNoAvatarDeadWatcher,
        TRIGGER_ROGUE_FINISH_NO_AVATAR_DEAD);
      ListenEventMarker<RogueFinishNoAvatarDeadWatcher>::ListenEventMarker(
        &listen_maker_RogueFinishNoAvatarDeadWatcher,
        TRIGGER_ROGUE_FINISH_NO_AVATAR_DEAD);
      WatcherFactoryMarker<RogueFinishWithAvatarElementTypeNumLessThanWatcher>::WatcherFactoryMarker(
        &maker_RogueFinishWithAvatarElementTypeNumLessThanWatcher,
        TRIGGER_ROGUE_FINISH_WITH_AVATAR_ELEMENT_TYPE_NUM_LESS_THAN);
      ListenEventMarker<RogueFinishWithAvatarElementTypeNumLessThanWatcher>::ListenEventMarker(
        &listen_maker_RogueFinishWithAvatarElementTypeNumLessThanWatcher,
        TRIGGER_ROGUE_FINISH_WITH_AVATAR_ELEMENT_TYPE_NUM_LESS_THAN);
      WatcherFactoryMarker<RogueFinishWithAvatarNumLessThanWatcher>::WatcherFactoryMarker(
        &maker_RogueFinishWithAvatarNumLessThanWatcher,
        TRIGGER_ROGUE_FINISH_WITH_AVATAR_NUM_LESS_THAN);
      ListenEventMarker<RogueFinishWithAvatarNumLessThanWatcher>::ListenEventMarker(
        &listen_maker_RogueFinishWithAvatarNumLessThanWatcher,
        TRIGGER_ROGUE_FINISH_WITH_AVATAR_NUM_LESS_THAN);
      WatcherFactoryMarker<RogueShikigamiUpgradeWatcher>::WatcherFactoryMarker(
        &maker_RogueShikigamiUpgradeWatcher,
        TRIGGER_ROGUE_SHIKIGAMI_UPGRADE);
      ListenEventMarker<RogueShikigamiUpgradeWatcher>::ListenEventMarker(
        &listen_maker_RogueShikigamiUpgradeWatcher,
        TRIGGER_ROGUE_SHIKIGAMI_UPGRADE);
      WatcherFactoryMarker<RogueCurseNumWatcher>::WatcherFactoryMarker(
        &maker_RogueCurseNumWatcher,
        TRIGGER_ROGUE_CURSE_NUM);
      ListenEventMarker<RogueCurseNumWatcher>::ListenEventMarker(
        &listen_maker_RogueCurseNumWatcher,
        TRIGGER_ROGUE_CURSE_NUM);
      WatcherFactoryMarker<RogueSelectCardWatcher>::WatcherFactoryMarker(
        &maker_RogueSelectCardWatcher,
        TRIGGER_ROGUE_SELECT_CARD_NUM);
      ListenEventMarker<RogueSelectCardWatcher>::ListenEventMarker(
        &listen_maker_RogueSelectCardWatcher,
        TRIGGER_ROGUE_SELECT_CARD_NUM);
      WatcherFactoryMarker<WinterCampSnowmanCompleteWatcher>::WatcherFactoryMarker(
        &maker_WinterCampSnowmanCompleteWatcher,
        TRIGGER_WINTER_CAMP_SNOWMAN_COMPLEIET);
      ListenEventMarker<WinterCampSnowmanCompleteWatcher>::ListenEventMarker(
        &listen_maker_WinterCampSnowmanCompleteWatcher,
        TRIGGER_WINTER_CAMP_SNOWMAN_COMPLEIET);
      WatcherFactoryMarker<ProjectionFinishLevelWatcher>::WatcherFactoryMarker(
        &maker_ProjectionFinishLevelWatcher,
        TRIGGER_FINISH_LANV2_PROJECTION_LEVEL);
      ListenEventMarker<ProjectionFinishLevelWatcher>::ListenEventMarker(
        &listen_maker_ProjectionFinishLevelWatcher,
        TRIGGER_FINISH_LANV2_PROJECTION_LEVEL);
      WatcherFactoryMarker<GallerySalvageReachScoreWatcher>::WatcherFactoryMarker(
        &maker_GallerySalvageReachScoreWatcher,
        TRIGGER_GALLERY_SALVAGE_REACH_SCORE);
      ListenEventMarker<GallerySalvageReachScoreWatcher>::ListenEventMarker(
        &listen_maker_GallerySalvageReachScoreWatcher,
        TRIGGER_GALLERY_SALVAGE_REACH_SCORE);
      WatcherFactoryMarker<FireworksChallengeReachScoreWatcher>::WatcherFactoryMarker(
        &maker_FireworksChallengeReachScoreWatcher,
        TRIGGER_LANV2_FIREWORKS_CHALLENGE_REACH_SCORE);
      ListenEventMarker<FireworksChallengeReachScoreWatcher>::ListenEventMarker(
        &listen_maker_FireworksChallengeReachScoreWatcher,
        TRIGGER_LANV2_FIREWORKS_CHALLENGE_REACH_SCORE);
      WatcherFactoryMarker<PotionStageLevelPassNumWatcher>::WatcherFactoryMarker(
        &maker_PotionStageLevelPassNumWatcher,
        TRIGGER_POTION_STAGE_LEVEL_PASS_NUM);
      ListenEventMarker<PotionStageLevelPassNumWatcher>::ListenEventMarker(
        &listen_maker_PotionStageLevelPassNumWatcher,
        TRIGGER_POTION_STAGE_LEVEL_PASS_NUM);
      WatcherFactoryMarker<PotionStageObtainMedalNumWatcher>::WatcherFactoryMarker(
        &maker_PotionStageObtainMedalNumWatcher,
        TRIGGER_POTION_STAGE_OBTAIN_MEDAL_NUM);
      ListenEventMarker<PotionStageObtainMedalNumWatcher>::ListenEventMarker(
        &listen_maker_PotionStageObtainMedalNumWatcher,
        TRIGGER_POTION_STAGE_OBTAIN_MEDAL_NUM);
      WatcherFactoryMarker<PotionStageReachTotalScoreWatcher>::WatcherFactoryMarker(
        &maker_PotionStageReachTotalScoreWatcher,
        TRIGGER_POTION_STAGE_REACH_TOTAL_SCORE);
      ListenEventMarker<PotionStageReachTotalScoreWatcher>::ListenEventMarker(
        &listen_maker_PotionStageReachTotalScoreWatcher,
        TRIGGER_POTION_STAGE_REACH_TOTAL_SCORE);
      WatcherFactoryMarker<MichiaeMatsuriUnlockCrystalSkillReachNumWatcher>::WatcherFactoryMarker(
        &maker_MichiaeMatsuriUnlockCrystalSkillReachNumWatcher,
        TRIGGER_MICHIAE_MATSURI_UNLOCK_CRYSTAL_SKILL_REACH_NUM);
      ListenEventMarker<MichiaeMatsuriUnlockCrystalSkillReachNumWatcher>::ListenEventMarker(
        &listen_maker_MichiaeMatsuriUnlockCrystalSkillReachNumWatcher,
        TRIGGER_MICHIAE_MATSURI_UNLOCK_CRYSTAL_SKILL_REACH_NUM);
      WatcherFactoryMarker<MichiaeMatsuriFinishDarkChallengeReachNumWatcher>::WatcherFactoryMarker(
        &maker_MichiaeMatsuriFinishDarkChallengeReachNumWatcher,
        TRIGGER_MICHIAE_MATSURI_FINISH_DARK_CHALLENGE_REACH_NUM);
      ListenEventMarker<MichiaeMatsuriFinishDarkChallengeReachNumWatcher>::ListenEventMarker(
        &listen_maker_MichiaeMatsuriFinishDarkChallengeReachNumWatcher,
        TRIGGER_MICHIAE_MATSURI_FINISH_DARK_CHALLENGE_REACH_NUM);
      WatcherFactoryMarker<BartenderFinishStoryModuleWatcher>::WatcherFactoryMarker(
        &maker_BartenderFinishStoryModuleWatcher,
        TRIGGER_BARTENDER_FINISH_STORY_MODULE);
      ListenEventMarker<BartenderFinishStoryModuleWatcher>::ListenEventMarker(
        &listen_maker_BartenderFinishStoryModuleWatcher,
        TRIGGER_BARTENDER_FINISH_STORY_MODULE);
      WatcherFactoryMarker<BartenderChallengeModuleLevelScoreWatcher>::WatcherFactoryMarker(
        &maker_BartenderChallengeModuleLevelScoreWatcher,
        TRIGGER_BARTENDER_CHALLENGE_MODULE_LEVEL_SCORE);
      ListenEventMarker<BartenderChallengeModuleLevelScoreWatcher>::ListenEventMarker(
        &listen_maker_BartenderChallengeModuleLevelScoreWatcher,
        TRIGGER_BARTENDER_CHALLENGE_MODULE_LEVEL_SCORE);
      WatcherFactoryMarker<BartenderUnlockFormulaWatcher>::WatcherFactoryMarker(
        &maker_BartenderUnlockFormulaWatcher,
        TRIGGER_BARTENDER_UNLOCK_FORMULA);
      ListenEventMarker<BartenderUnlockFormulaWatcher>::ListenEventMarker(
        &listen_maker_BartenderUnlockFormulaWatcher,
        TRIGGER_BARTENDER_UNLOCK_FORMULA);
      WatcherFactoryMarker<IrodoriFinishFlowerThemeWatcher>::WatcherFactoryMarker(
        &maker_IrodoriFinishFlowerThemeWatcher,
        TRIGGER_IRODORI_FINISH_FLOWER_THEME);
      ListenEventMarker<IrodoriFinishFlowerThemeWatcher>::ListenEventMarker(
        &listen_maker_IrodoriFinishFlowerThemeWatcher,
        TRIGGER_IRODORI_FINISH_FLOWER_THEME);
      WatcherFactoryMarker<IrodoriFinishPoetryThemeWatcher>::WatcherFactoryMarker(
        &maker_IrodoriFinishPoetryThemeWatcher,
        TRIGGER_IRODORI_FINISH_POETRY_THEME);
      ListenEventMarker<IrodoriFinishPoetryThemeWatcher>::ListenEventMarker(
        &listen_maker_IrodoriFinishPoetryThemeWatcher,
        TRIGGER_IRODORI_FINISH_POETRY_THEME);
      WatcherFactoryMarker<SpiceMakeFormulaTimesWatcher>::WatcherFactoryMarker(
        &maker_SpiceMakeFormulaTimesWatcher,
        TRIGGER_SPICE_MAKE_FORMULA_TIMES);
      ListenEventMarker<SpiceMakeFormulaTimesWatcher>::ListenEventMarker(
        &listen_maker_SpiceMakeFormulaTimesWatcher,
        TRIGGER_SPICE_MAKE_FORMULA_TIMES);
      WatcherFactoryMarker<SpiceGiveFoodTimesWatcher>::WatcherFactoryMarker(
        &maker_SpiceGiveFoodTimesWatcher,
        TRIGGER_SPICE_GIVE_FOOD_TIMES);
      ListenEventMarker<SpiceGiveFoodTimesWatcher>::ListenEventMarker(
        &listen_maker_SpiceGiveFoodTimesWatcher,
        TRIGGER_SPICE_GIVE_FOOD_TIMES);
      WatcherFactoryMarker<SpiceMakeFormulaSuccessfulTimesWatcher>::WatcherFactoryMarker(
        &maker_SpiceMakeFormulaSuccessfulTimesWatcher,
        TRIGGER_SPICE_MAKE_FORMULA_SUCCESSFUL_TIMES);
      ListenEventMarker<SpiceMakeFormulaSuccessfulTimesWatcher>::ListenEventMarker(
        &listen_maker_SpiceMakeFormulaSuccessfulTimesWatcher,
        TRIGGER_SPICE_MAKE_FORMULA_SUCCESSFUL_TIMES);
      WatcherFactoryMarker<PhotoFinishPosWatcher>::WatcherFactoryMarker(
        &maker_PhotoFinishPosWatcher,
        TRIGGER_PHOTO_FINISH_POS_ID);
      ListenEventMarker<PhotoFinishPosWatcher>::ListenEventMarker(
        &listen_maker_PhotoFinishPosWatcher,
        TRIGGER_PHOTO_FINISH_POS_ID);
      WatcherFactoryMarker<CrystalLinkLevelScoreReachWatcher>::WatcherFactoryMarker(
        &maker_CrystalLinkLevelScoreReachWatcher,
        TRIGGER_CRYSTAL_LINK_LEVEL_SCORE_REACH);
      ListenEventMarker<CrystalLinkLevelScoreReachWatcher>::ListenEventMarker(
        &listen_maker_CrystalLinkLevelScoreReachWatcher,
        TRIGGER_CRYSTAL_LINK_LEVEL_SCORE_REACH);
      WatcherFactoryMarker<CrystalLinkTotalMaxScoreReachWatcher>::WatcherFactoryMarker(
        &maker_CrystalLinkTotalMaxScoreReachWatcher,
        TRIGGER_CRYSTAL_LINK_TOTAL_MAX_SCORE_REACH);
      ListenEventMarker<CrystalLinkTotalMaxScoreReachWatcher>::ListenEventMarker(
        &listen_maker_CrystalLinkTotalMaxScoreReachWatcher,
        TRIGGER_CRYSTAL_LINK_TOTAL_MAX_SCORE_REACH);
      WatcherFactoryMarker<IrodoriChessStageReachScoreWatcher>::WatcherFactoryMarker(
        &maker_IrodoriChessStageReachScoreWatcher,
        TRIGGER_IRODORI_CHESS_STAGE_REACH_SCORE);
      ListenEventMarker<IrodoriChessStageReachScoreWatcher>::ListenEventMarker(
        &listen_maker_IrodoriChessStageReachScoreWatcher,
        TRIGGER_IRODORI_CHESS_STAGE_REACH_SCORE);
      WatcherFactoryMarker<IrodoriFinishMasterStageWatcher>::WatcherFactoryMarker(
        &maker_IrodoriFinishMasterStageWatcher,
        TRIGGER_IRODORI_FINISH_MASTER_STAGE);
      ListenEventMarker<IrodoriFinishMasterStageWatcher>::ListenEventMarker(
        &listen_maker_IrodoriFinishMasterStageWatcher,
        TRIGGER_IRODORI_FINISH_MASTER_STAGE);
      WatcherFactoryMarker<LuminanceStoneChallengeReachScoreWatcher>::WatcherFactoryMarker(
        &maker_LuminanceStoneChallengeReachScoreWatcher,
        TRIGGER_LUMINANCE_STONE_CHALLENGE_SCORE_REACH);
      ListenEventMarker<LuminanceStoneChallengeReachScoreWatcher>::ListenEventMarker(
        &listen_maker_LuminanceStoneChallengeReachScoreWatcher,
        TRIGGER_LUMINANCE_STONE_CHALLENGE_SCORE_REACH);
      WatcherFactoryMarker<GachaFinishStageWatcher>::WatcherFactoryMarker(
        &maker_GachaFinishStageWatcher,
        TRIGGER_GACHA_FINISH_STAGE_ID);
      ListenEventMarker<GachaFinishStageWatcher>::ListenEventMarker(
        &listen_maker_GachaFinishStageWatcher,
        TRIGGER_GACHA_FINISH_STAGE_ID);
      WatcherFactoryMarker<GachaMakeRobotWatcher>::WatcherFactoryMarker(
        &maker_GachaMakeRobotWatcher,
        TRIGGER_GACHA_MAKE_ROBOT_NUM);
      ListenEventMarker<GachaMakeRobotWatcher>::ListenEventMarker(
        &listen_maker_GachaMakeRobotWatcher,
        TRIGGER_GACHA_MAKE_ROBOT_NUM);
      WatcherFactoryMarker<GachaGetRobotWatcher>::WatcherFactoryMarker(
        &maker_GachaGetRobotWatcher,
        TRIGGER_GACHA_GET_ROBOT_NUM);
      ListenEventMarker<GachaGetRobotWatcher>::ListenEventMarker(
        &listen_maker_GachaGetRobotWatcher,
        TRIGGER_GACHA_GET_ROBOT_NUM);
      WatcherFactoryMarker<GachaGiveRobotWatcher>::WatcherFactoryMarker(
        &maker_GachaGiveRobotWatcher,
        TRIGGER_GACHA_GIVE_ROBOT_NUM);
      ListenEventMarker<GachaGiveRobotWatcher>::ListenEventMarker(
        &listen_maker_GachaGiveRobotWatcher,
        TRIGGER_GACHA_GIVE_ROBOT_NUM);
      WatcherFactoryMarker<GachaConvertRobotWatcher>::WatcherFactoryMarker(
        &maker_GachaConvertRobotWatcher,
        TRIGGER_GACHA_CONVERT_ROBOT_NUM);
      ListenEventMarker<GachaConvertRobotWatcher>::ListenEventMarker(
        &listen_maker_GachaConvertRobotWatcher,
        TRIGGER_GACHA_CONVERT_ROBOT_NUM);
      WatcherFactoryMarker<GearFinishStageWatcher>::WatcherFactoryMarker(
        &maker_GearFinishStageWatcher,
        TRIGGER_GEAR_FINISH_LEVEL_ID);
      ListenEventMarker<GearFinishStageWatcher>::ListenEventMarker(
        &listen_maker_GearFinishStageWatcher,
        TRIGGER_GEAR_FINISH_LEVEL_ID);
      WatcherFactoryMarker<GearFinishJigsawPictureWatcher>::WatcherFactoryMarker(
        &maker_GearFinishJigsawPictureWatcher,
        TRIGGER_GEAR_FINISH_JIGSAW_PICTURE);
      ListenEventMarker<GearFinishJigsawPictureWatcher>::ListenEventMarker(
        &listen_maker_GearFinishJigsawPictureWatcher,
        TRIGGER_GEAR_FINISH_JIGSAW_PICTURE);
      WatcherFactoryMarker<FinishRogueDiaryStageWatcher>::WatcherFactoryMarker(
        &maker_FinishRogueDiaryStageWatcher,
        TRIGGER_FINISH_ROGUE_DIARY_STAGE);
      ListenEventMarker<FinishRogueDiaryStageWatcher>::ListenEventMarker(
        &listen_maker_FinishRogueDiaryStageWatcher,
        TRIGGER_FINISH_ROGUE_DIARY_STAGE);
      WatcherFactoryMarker<FinishRogueDiaryStageRoundWatcher>::WatcherFactoryMarker(
        &maker_FinishRogueDiaryStageRoundWatcher,
        TRIGGER_FINISH_ROGUE_DIARY_STAGE_ROUND);
      ListenEventMarker<FinishRogueDiaryStageRoundWatcher>::ListenEventMarker(
        &listen_maker_FinishRogueDiaryStageRoundWatcher,
        TRIGGER_FINISH_ROGUE_DIARY_STAGE_ROUND);
      WatcherFactoryMarker<MusicGameSettleOthersUgcWatcher>::WatcherFactoryMarker(
        &maker_MusicGameSettleOthersUgcWatcher,
        TRIGGER_MUSIC_GAME_SETTLE_OTHERS_UGC);
      ListenEventMarker<MusicGameSettleOthersUgcWatcher>::ListenEventMarker(
        &listen_maker_MusicGameSettleOthersUgcWatcher,
        TRIGGER_MUSIC_GAME_SETTLE_OTHERS_UGC);
      WatcherFactoryMarker<MusicGameSaveUgcWatcher>::WatcherFactoryMarker(
        &maker_MusicGameSaveUgcWatcher,
        TRIGGER_MUSIC_GAME_SAVE_UGC);
      ListenEventMarker<MusicGameSaveUgcWatcher>::ListenEventMarker(
        &listen_maker_MusicGameSaveUgcWatcher,
        TRIGGER_MUSIC_GAME_SAVE_UGC);
      WatcherFactoryMarker<IslandPartyReachScoreWatcher>::WatcherFactoryMarker(
        &maker_IslandPartyReachScoreWatcher,
        TRIGGER_ISLAND_PARTY_REACH_SCORE);
      ListenEventMarker<IslandPartyReachScoreWatcher>::ListenEventMarker(
        &listen_maker_IslandPartyReachScoreWatcher,
        TRIGGER_ISLAND_PARTY_REACH_SCORE);
      WatcherFactoryMarker<MuqadasPotionLevelScoreWatcher>::WatcherFactoryMarker(
        &maker_MuqadasPotionLevelScoreWatcher,
        TRIGGER_MUQADAS_POTION_LEVEL_SCORE);
      ListenEventMarker<MuqadasPotionLevelScoreWatcher>::ListenEventMarker(
        &listen_maker_MuqadasPotionLevelScoreWatcher,
        TRIGGER_MUQADAS_POTION_LEVEL_SCORE);
      WatcherFactoryMarker<MuqadasPotionLevelWeaknessNumWatcher>::WatcherFactoryMarker(
        &maker_MuqadasPotionLevelWeaknessNumWatcher,
        TRIGGER_MUQADAS_POTION_LEVEL_WEAKNESS_NUM);
      ListenEventMarker<MuqadasPotionLevelWeaknessNumWatcher>::ListenEventMarker(
        &listen_maker_MuqadasPotionLevelWeaknessNumWatcher,
        TRIGGER_MUQADAS_POTION_LEVEL_WEAKNESS_NUM);
      WatcherFactoryMarker<MuqadasPotionLevelOnceWeaknessNumWatcher>::WatcherFactoryMarker(
        &maker_MuqadasPotionLevelOnceWeaknessNumWatcher,
        TRIGGER_MUQADAS_POTION_LEVEL_ONCE_WEAKNESS_NUM);
      ListenEventMarker<MuqadasPotionLevelOnceWeaknessNumWatcher>::ListenEventMarker(
        &listen_maker_MuqadasPotionLevelOnceWeaknessNumWatcher,
        TRIGGER_MUQADAS_POTION_LEVEL_ONCE_WEAKNESS_NUM);
      WatcherFactoryMarker<InstableSprayReachScoreWatcher>::WatcherFactoryMarker(
        &maker_InstableSprayReachScoreWatcher,
        TRIGGER_INSTABLE_SPRAY_REACH_SCORE);
      ListenEventMarker<InstableSprayReachScoreWatcher>::ListenEventMarker(
        &listen_maker_InstableSprayReachScoreWatcher,
        TRIGGER_INSTABLE_SPRAY_REACH_SCORE);
      WatcherFactoryMarker<GravenInnocenceCarveCompleteWatcher>::WatcherFactoryMarker(
        &maker_GravenInnocenceCarveCompleteWatcher,
        TRIGGER_GRAVEN_INNOCENCE_CARVE_COMPLETE_NUM);
      ListenEventMarker<GravenInnocenceCarveCompleteWatcher>::ListenEventMarker(
        &listen_maker_GravenInnocenceCarveCompleteWatcher,
        TRIGGER_GRAVEN_INNOCENCE_CARVE_COMPLETE_NUM);
      WatcherFactoryMarker<GravenInnocencePhotoFinishWatcher>::WatcherFactoryMarker(
        &maker_GravenInnocencePhotoFinishWatcher,
        TRIGGER_GRAVEN_INNOCENCE_PHOTO_COMPLETE_NUM);
      ListenEventMarker<GravenInnocencePhotoFinishWatcher>::ListenEventMarker(
        &listen_maker_GravenInnocencePhotoFinishWatcher,
        TRIGGER_GRAVEN_INNOCENCE_PHOTO_COMPLETE_NUM);
      WatcherFactoryMarker<GravenInnocenceCampFinishLevelWatcher>::WatcherFactoryMarker(
        &maker_GravenInnocenceCampFinishLevelWatcher,
        TRIGGER_GRAVEN_INNOCENCE_CAMP_FINISH_LEVEL);
      ListenEventMarker<GravenInnocenceCampFinishLevelWatcher>::ListenEventMarker(
        &listen_maker_GravenInnocenceCampFinishLevelWatcher,
        TRIGGER_GRAVEN_INNOCENCE_CAMP_FINISH_LEVEL);
      WatcherFactoryMarker<VintageHuntingScoreWatcher>::WatcherFactoryMarker(
        &maker_VintageHuntingScoreWatcher,
        TRIGGER_VINTAGE_HUNTING_SCORE);
      ListenEventMarker<VintageHuntingScoreWatcher>::ListenEventMarker(
        &listen_maker_VintageHuntingScoreWatcher,
        TRIGGER_VINTAGE_HUNTING_SCORE);
      WatcherFactoryMarker<VintageHuntingCaptureNumWatcher>::WatcherFactoryMarker(
        &maker_VintageHuntingCaptureNumWatcher,
        TRIGGER_VINTAGE_HUNTING_CAPTURE_NUM);
      ListenEventMarker<VintageHuntingCaptureNumWatcher>::ListenEventMarker(
        &listen_maker_VintageHuntingCaptureNumWatcher,
        TRIGGER_VINTAGE_HUNTING_CAPTURE_NUM);
      WatcherFactoryMarker<VintageHuntingCaptureNoBattleNumWatcher>::WatcherFactoryMarker(
        &maker_VintageHuntingCaptureNoBattleNumWatcher,
        TRIGGER_VINTAGE_HUNTING_CAPTURE_NO_BATTLE_NUM);
      ListenEventMarker<VintageHuntingCaptureNoBattleNumWatcher>::ListenEventMarker(
        &listen_maker_VintageHuntingCaptureNoBattleNumWatcher,
        TRIGGER_VINTAGE_HUNTING_CAPTURE_NO_BATTLE_NUM);
      WatcherFactoryMarker<VintageHuntingCaptureTypeNumWatcher>::WatcherFactoryMarker(
        &maker_VintageHuntingCaptureTypeNumWatcher,
        TRIGGER_VINTAGE_HUNTING_CAPTURE_TYPE);
      ListenEventMarker<VintageHuntingCaptureTypeNumWatcher>::ListenEventMarker(
        &listen_maker_VintageHuntingCaptureTypeNumWatcher,
        TRIGGER_VINTAGE_HUNTING_CAPTURE_TYPE);
      WatcherFactoryMarker<VintageHuntingFinishBossWatcher>::WatcherFactoryMarker(
        &maker_VintageHuntingFinishBossWatcher,
        TRIGGER_VINTAGE_HUNTING_FINISH_BOSS);
      ListenEventMarker<VintageHuntingFinishBossWatcher>::ListenEventMarker(
        &listen_maker_VintageHuntingFinishBossWatcher,
        TRIGGER_VINTAGE_HUNTING_FINISH_BOSS);
      WatcherFactoryMarker<VintageHuntingFinishBossInTimeWatcher>::WatcherFactoryMarker(
        &maker_VintageHuntingFinishBossInTimeWatcher,
        TRIGGER_VINTAGE_HUNTING_FINISH_BOSS_IN_TIME);
      ListenEventMarker<VintageHuntingFinishBossInTimeWatcher>::ListenEventMarker(
        &listen_maker_VintageHuntingFinishBossInTimeWatcher,
        TRIGGER_VINTAGE_HUNTING_FINISH_BOSS_IN_TIME);
      WatcherFactoryMarker<VintageHuntingBossWeakTimesWatcher>::WatcherFactoryMarker(
        &maker_VintageHuntingBossWeakTimesWatcher,
        TRIGGER_VINTAGE_HUNTING_BOSS_GO_WEAK);
      ListenEventMarker<VintageHuntingBossWeakTimesWatcher>::ListenEventMarker(
        &listen_maker_VintageHuntingBossWeakTimesWatcher,
        TRIGGER_VINTAGE_HUNTING_BOSS_GO_WEAK);
      WatcherFactoryMarker<VintageDecorationCompleteWatcher>::WatcherFactoryMarker(
        &maker_VintageDecorationCompleteWatcher,
        TRIGGER_VINTAGE_DECORATION_COMPLETE);
      ListenEventMarker<VintageDecorationCompleteWatcher>::ListenEventMarker(
        &listen_maker_VintageDecorationCompleteWatcher,
        TRIGGER_VINTAGE_DECORATION_COMPLETE);
      WatcherFactoryMarker<VintageCollectDecorationNumWatcher>::WatcherFactoryMarker(
        &maker_VintageCollectDecorationNumWatcher,
        TRIGGER_VINTAGE_COLLECT_DECORATION_NUM);
      ListenEventMarker<VintageCollectDecorationNumWatcher>::ListenEventMarker(
        &listen_maker_VintageCollectDecorationNumWatcher,
        TRIGGER_VINTAGE_COLLECT_DECORATION_NUM);
      WatcherFactoryMarker<VintageFinishCampWatcher>::WatcherFactoryMarker(
        &maker_VintageFinishCampWatcher,
        TRIGGER_VINTAGE_FINISH_CAMP);
      ListenEventMarker<VintageFinishCampWatcher>::ListenEventMarker(
        &listen_maker_VintageFinishCampWatcher,
        TRIGGER_VINTAGE_FINISH_CAMP);
      WatcherFactoryMarker<VintageMarketCoinAWatcher>::WatcherFactoryMarker(
        &maker_VintageMarketCoinAWatcher,
        TRIGGER_VINTAGE_MARKET_COIN_A);
      ListenEventMarker<VintageMarketCoinAWatcher>::ListenEventMarker(
        &listen_maker_VintageMarketCoinAWatcher,
        TRIGGER_VINTAGE_MARKET_COIN_A);
      WatcherFactoryMarker<VintageMarketContentFinishWatcher>::WatcherFactoryMarker(
        &maker_VintageMarketContentFinishWatcher,
        TRIGGER_VINTAGE_MARKET_CONTENT_FINISH);
      ListenEventMarker<VintageMarketContentFinishWatcher>::ListenEventMarker(
        &listen_maker_VintageMarketContentFinishWatcher,
        TRIGGER_VINTAGE_MARKET_CONTENT_FINISH);
      WatcherFactoryMarker<RockBoardExploreFinishStageWatcher>::WatcherFactoryMarker(
        &maker_RockBoardExploreFinishStageWatcher,
        TRIGGER_ROCK_BOARD_EXPLORE_FINISH_STAGE_ID);
      ListenEventMarker<RockBoardExploreFinishStageWatcher>::ListenEventMarker(
        &listen_maker_RockBoardExploreFinishStageWatcher,
        TRIGGER_ROCK_BOARD_EXPLORE_FINISH_STAGE_ID);
      WatcherFactoryMarker<FungusFighterCaptureFungusWatcher>::WatcherFactoryMarker(
        &maker_FungusFighterCaptureFungusWatcher,
        TRIGGER_FUNGUS_FIGHTER_CAPTURE_FUNGUS);
      ListenEventMarker<FungusFighterCaptureFungusWatcher>::ListenEventMarker(
        &listen_maker_FungusFighterCaptureFungusWatcher,
        TRIGGER_FUNGUS_FIGHTER_CAPTURE_FUNGUS);
      WatcherFactoryMarker<FungusFighterCultivateFungusWatcher>::WatcherFactoryMarker(
        &maker_FungusFighterCultivateFungusWatcher,
        TRIGGER_FUNGUS_FIGHTER_CULTIVATE_FUNGUS);
      ListenEventMarker<FungusFighterCultivateFungusWatcher>::ListenEventMarker(
        &listen_maker_FungusFighterCultivateFungusWatcher,
        TRIGGER_FUNGUS_FIGHTER_CULTIVATE_FUNGUS);
      WatcherFactoryMarker<FungusFighterTrainingReachScoreWatcher>::WatcherFactoryMarker(
        &maker_FungusFighterTrainingReachScoreWatcher,
        TRIGGER_FUNGUS_FIGHTER_TRAINING_REACH_SCORE);
      ListenEventMarker<FungusFighterTrainingReachScoreWatcher>::ListenEventMarker(
        &listen_maker_FungusFighterTrainingReachScoreWatcher,
        TRIGGER_FUNGUS_FIGHTER_TRAINING_REACH_SCORE);
      WatcherFactoryMarker<EffigyChallengeV2FinishRoomWatcher>::WatcherFactoryMarker(
        &maker_EffigyChallengeV2FinishRoomWatcher,
        TRIGGER_EFFIGY_CHALLENGE_V2_FINISH_ROOM);
      ListenEventMarker<EffigyChallengeV2FinishRoomWatcher>::ListenEventMarker(
        &listen_maker_EffigyChallengeV2FinishRoomWatcher,
        TRIGGER_EFFIGY_CHALLENGE_V2_FINISH_ROOM);
      WatcherFactoryMarker<CharAmusementFinishStageWatcher>::WatcherFactoryMarker(
        &maker_CharAmusementFinishStageWatcher,
        TRIGGER_CHAR_AMUSEMENT_FINISH_STAGE_ID);
      ListenEventMarker<CharAmusementFinishStageWatcher>::ListenEventMarker(
        &listen_maker_CharAmusementFinishStageWatcher,
        TRIGGER_CHAR_AMUSEMENT_FINISH_STAGE_ID);
      WatcherFactoryMarker<CoinCollectResultReachWatcher>::WatcherFactoryMarker(
        &maker_CoinCollectResultReachWatcher,
        TRIGGER_COIN_COLLECT_RESULT_REACH);
      ListenEventMarker<CoinCollectResultReachWatcher>::ListenEventMarker(
        &listen_maker_CoinCollectResultReachWatcher,
        TRIGGER_COIN_COLLECT_RESULT_REACH);
      WatcherFactoryMarker<BrickBreakerFinishWorldLevelWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerFinishWorldLevelWatcher,
        TRIGGER_BRICK_BREAKER_FINISH_WORLD_LEVEL);
      ListenEventMarker<BrickBreakerFinishWorldLevelWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerFinishWorldLevelWatcher,
        TRIGGER_BRICK_BREAKER_FINISH_WORLD_LEVEL);
      WatcherFactoryMarker<BrickBreakerWorldLevelScoreWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerWorldLevelScoreWatcher,
        TRIGGER_BRICK_BREAKER_WORLD_LEVEL_SCORE);
      ListenEventMarker<BrickBreakerWorldLevelScoreWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerWorldLevelScoreWatcher,
        TRIGGER_BRICK_BREAKER_WORLD_LEVEL_SCORE);
      WatcherFactoryMarker<BrickBreakerWorldLevelComboWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerWorldLevelComboWatcher,
        TRIGGER_BRICK_BREAKER_WORLD_LEVEL_COMBO);
      ListenEventMarker<BrickBreakerWorldLevelComboWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerWorldLevelComboWatcher,
        TRIGGER_BRICK_BREAKER_WORLD_LEVEL_COMBO);
      WatcherFactoryMarker<BrickBreakerFinishDungeonLevelWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerFinishDungeonLevelWatcher,
        TRIGGER_BRICK_BREAKER_FINISH_DUNGEON_LEVEL);
      ListenEventMarker<BrickBreakerFinishDungeonLevelWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerFinishDungeonLevelWatcher,
        TRIGGER_BRICK_BREAKER_FINISH_DUNGEON_LEVEL);
      WatcherFactoryMarker<BrickBreakerDungeonLevelScoreWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerDungeonLevelScoreWatcher,
        TRIGGER_BRICK_BREAKER_DUNGEON_LEVEL_SCORE);
      ListenEventMarker<BrickBreakerDungeonLevelScoreWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerDungeonLevelScoreWatcher,
        TRIGGER_BRICK_BREAKER_DUNGEON_LEVEL_SCORE);
      WatcherFactoryMarker<BrickBreakerDungeonLevelComboWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerDungeonLevelComboWatcher,
        TRIGGER_BRICK_BREAKER_DUNGEON_LEVEL_COMBO);
      ListenEventMarker<BrickBreakerDungeonLevelComboWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerDungeonLevelComboWatcher,
        TRIGGER_BRICK_BREAKER_DUNGEON_LEVEL_COMBO);
      WatcherFactoryMarker<BrickBreakerWorldLevelElemReactionWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerWorldLevelElemReactionWatcher,
        TRIGGER_BRICK_BREAKER_WORLD_LEVEL_ELEM_REACTION);
      ListenEventMarker<BrickBreakerWorldLevelElemReactionWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerWorldLevelElemReactionWatcher,
        TRIGGER_BRICK_BREAKER_WORLD_LEVEL_ELEM_REACTION);
      WatcherFactoryMarker<BrickBreakerWorldLevelBallElemReactionWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerWorldLevelBallElemReactionWatcher,
        TRIGGER_BRICK_BREAKER_WORLD_LEVEL_BALL_ELEM_REACTION);
      ListenEventMarker<BrickBreakerWorldLevelBallElemReactionWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerWorldLevelBallElemReactionWatcher,
        TRIGGER_BRICK_BREAKER_WORLD_LEVEL_BALL_ELEM_REACTION);
      WatcherFactoryMarker<BrickBreakerDungeonLevelElemReactionWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerDungeonLevelElemReactionWatcher,
        TRIGGER_BRICK_BREAKER_DUNGEON_LEVEL_ELEM_REACTION);
      ListenEventMarker<BrickBreakerDungeonLevelElemReactionWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerDungeonLevelElemReactionWatcher,
        TRIGGER_BRICK_BREAKER_DUNGEON_LEVEL_ELEM_REACTION);
      WatcherFactoryMarker<BrickBreakerDungeonLevelBallElemReactionWatcher>::WatcherFactoryMarker(
        &maker_BrickBreakerDungeonLevelBallElemReactionWatcher,
        TRIGGER_BRICK_BREAKER_DUNGEON_LEVEL_BALL_ELEM_REACTION);
      ListenEventMarker<BrickBreakerDungeonLevelBallElemReactionWatcher>::ListenEventMarker(
        &listen_maker_BrickBreakerDungeonLevelBallElemReactionWatcher,
        TRIGGER_BRICK_BREAKER_DUNGEON_LEVEL_BALL_ELEM_REACTION);
      WatcherFactoryMarker<TeamChainScoreReachWatcher>::WatcherFactoryMarker(
        &maker_TeamChainScoreReachWatcher,
        TRIGGER_TEAM_CHAIN_SCORE_REACH);
      ListenEventMarker<TeamChainScoreReachWatcher>::ListenEventMarker(
        &listen_maker_TeamChainScoreReachWatcher,
        TRIGGER_TEAM_CHAIN_SCORE_REACH);
      WatcherFactoryMarker<TeamChainFinishStageCntWatcher>::WatcherFactoryMarker(
        &maker_TeamChainFinishStageCntWatcher,
        TRIGGER_TEAM_CHAIN_FINISH_STAGE_CNT);
      ListenEventMarker<TeamChainFinishStageCntWatcher>::ListenEventMarker(
        &listen_maker_TeamChainFinishStageCntWatcher,
        TRIGGER_TEAM_CHAIN_FINISH_STAGE_CNT);
      WatcherFactoryMarker<ElectroherculesBattleFinishLevelWatcher>::WatcherFactoryMarker(
        &maker_ElectroherculesBattleFinishLevelWatcher,
        TRIGGER_ELECTROHERCULES_BATTLE_FINISH_LEVEL);
      ListenEventMarker<ElectroherculesBattleFinishLevelWatcher>::ListenEventMarker(
        &listen_maker_ElectroherculesBattleFinishLevelWatcher,
        TRIGGER_ELECTROHERCULES_BATTLE_FINISH_LEVEL);
      WatcherFactoryMarker<DuelHeartFinishLevelWatcher>::WatcherFactoryMarker(
        &maker_DuelHeartFinishLevelWatcher,
        TRIGGER_DUEL_HEART_FINISH_LEVEL);
      ListenEventMarker<DuelHeartFinishLevelWatcher>::ListenEventMarker(
        &listen_maker_DuelHeartFinishLevelWatcher,
        TRIGGER_DUEL_HEART_FINISH_LEVEL);
      WatcherFactoryMarker<LanV3RaceWatcher>::WatcherFactoryMarker(
        &maker_LanV3RaceWatcher,
        TRIGGER_LAN_V3_RACE_REACH_SCORE);
      ListenEventMarker<LanV3RaceWatcher>::ListenEventMarker(
        &listen_maker_LanV3RaceWatcher,
        TRIGGER_LAN_V3_RACE_REACH_SCORE);
      WatcherFactoryMarker<LanV3ShadowFinishLevelWatcher>::WatcherFactoryMarker(
        &maker_LanV3ShadowFinishLevelWatcher,
        TRIGGER_LAN_V3_SHADOW_FINISH_LEVEL);
      v11 = 3407LL;
      ListenEventMarker<LanV3ShadowFinishLevelWatcher>::ListenEventMarker(
        &listen_maker_LanV3ShadowFinishLevelWatcher,
        TRIGGER_LAN_V3_SHADOW_FINISH_LEVEL);
      v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v11,
            v15);
        *v13 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v11 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v18 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v11,
            v19);
        *v17 = 1;
        v11 = (__int64)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v20 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v22 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v22 != 0;
        v23 = (v22 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v22);
        if ( (_BYTE)v23 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v11,
            v23);
        *v21 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v11);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v24;
      }
      v25 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v27 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v11,
            v28);
        *v26 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v11 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v29 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v31 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v11,
            v32);
        *v30 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_scene.h

// Line 41: range 0000000015F2D764-0000000015F2D7C0
void __cdecl DungeonFightStatistic::DungeonFightStatistic(DungeonFightStatistic *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->kill_count_map);
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->max_single_damage_pair);
  std::map<unsigned int,float>::map(&this->take_damage_count_map);
  std::map<unsigned int,unsigned int>::map(&this->normal_skill_count_map);
  std::map<unsigned int,unsigned int>::map(&this->energy_skill_count_map);
};

// Line 41: range 0000000015F2D7C2-0000000015F2D80E
void __cdecl DungeonFightStatistic::~DungeonFightStatistic(DungeonFightStatistic *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->energy_skill_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->normal_skill_count_map);
  std::map<unsigned int,float>::~map(&this->take_damage_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->kill_count_map);
};

// Line 53: range 0000000015F2D810-0000000015F2D82A
void __cdecl DungeonSettleSnapshot::DungeonSettleSnapshot(DungeonSettleSnapshot *const this)
{
  std::unordered_map<unsigned int,std::vector<unsigned long>>::unordered_map(&this->settle_team_avatar_map);
};

// Line 53: range 0000000015F2D82C-0000000015F2D846
void __cdecl DungeonSettleSnapshot::~DungeonSettleSnapshot(DungeonSettleSnapshot *const this)
{
  std::unordered_map<unsigned int,std::vector<unsigned long>>::~unordered_map(&this->settle_team_avatar_map);
};

// Line 63: range 0000000015F2E37A-0000000015F2E589
void __cdecl DungeonScene::~DungeonScene(DungeonScene *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'DungeonScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  std::weak_ptr<Player>::~weak_ptr(&this->create_player_wtr_);
  std::vector<unsigned int>::~vector(&this->exhibition_card_vec_);
  std::map<unsigned int,proto::DungeonSettleExhibitionInfo>::~map(&this->dungeon_settle_exhibition_info_map_);
  MistTrialDungeonStatProxy::~MistTrialDungeonStatProxy(&this->mist_trial_stat_proxy_);
  std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::~function(&this->challenge_settle_callback_);
  std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function(&this->dungeon_settle_callback_);
  std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::~function(&this->init_enter_scene_avatar_callback_);
  std::set<unsigned int>::~set(&this->team_uid_set_);
  std::set<unsigned int>::~set(&this->payed_uid_set_);
  DungeonSettleSnapshot::~DungeonSettleSnapshot(&this->settle_snapshot_);
  DungeonFightStatistic::~DungeonFightStatistic(&this->fight_statistics_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->player_quit_reason_map_);
  std::map<unsigned int,proto::GroupBin>::~map(&this->group_bin_map_);
  std::any::~any(&this->dungeon_extra_data_);
  std::map<unsigned int,unsigned int>::~map(&this->level_config_id_map_);
  std::string::~string(&this->transaction_);
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->settle_timer_ptr_);
  DungeonSceneTeam::~DungeonSceneTeam(&this->dungeon_scene_team_);
  std::map<unsigned int,unsigned int>::~map(&this->player_all_avatar_die_time_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map(&this->challenge_left_time_map_);
  std::map<unsigned int,unsigned int>::~map(&this->revive_count_map_);
  std::map<unsigned int,std::map<data::SettleShowType,unsigned int>>::~map(&this->settle_show_map_);
  std::vector<std::shared_ptr<DungeonCondition>>::~vector(&this->cond_vec_);
  std::map<unsigned int,unsigned int>::~map(&this->activated_slip_revive_map_);
  std::map<unsigned int,unsigned int>::~map(&this->activated_way_point_map_);
  Scene::~Scene((Scene *const)this);
};

// Line 66: range 0000000015F2D9F8-0000000015F2E378
void __fastcall ZN12DungeonSceneCI25SceneEj(DungeonScene *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12DungeonSceneCI25SceneEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  Scene::Scene((Scene *const)this, *(_DWORD *)(v2 + 32));
  v5 = &`vtable for'DungeonScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id_);
  }
  this->dungeon_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_begin_time_);
  }
  this->dungeon_begin_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_settle_time_);
  }
  this->dungeon_settle_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_result_);
  }
  this->dungeon_result_ = DUNGEON_RESULT_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->inst_id_);
  }
  this->inst_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_last_count_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tower_last_count_time_ms_);
  this->tower_last_count_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_total_count_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tower_total_count_time_ms_);
  this->tower_total_count_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->enable_fight_statistics_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_fight_statistics_);
  this->enable_fight_statistics_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_settle_snapshot_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 119) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_settle_snapshot_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_has_settle_snapshot_);
  }
  this->is_has_settle_snapshot_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_restart_process_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 118) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_restart_process_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_in_restart_process_);
  }
  this->is_in_restart_process_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_force_quit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_force_quit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_force_quit_);
  }
  this->is_force_quit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_scene_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_begin_scene_time_);
  }
  this->dungeon_begin_scene_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_settle_scene_time_);
  }
  this->dungeon_settle_scene_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_player_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->create_player_uid_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->create_player_uid_);
  }
  this->create_player_uid_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->activated_way_point_map_);
  std::map<unsigned int,unsigned int>::map(&this->activated_slip_revive_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_close_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->dungeon_close_time_);
  this->dungeon_close_time_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_reset_ban_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reset_ban_);
  this->is_reset_ban_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic_type_);
  }
  this->logic_type_ = LOGIC_NONE;
  std::vector<std::shared_ptr<DungeonCondition>>::vector(&this->cond_vec_);
  std::map<unsigned int,std::map<data::SettleShowType,unsigned int>>::map(&this->settle_show_map_);
  std::map<unsigned int,unsigned int>::map(&this->revive_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_die_count_);
  }
  this->monster_die_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revise_level_);
  }
  this->revise_level_ = 0;
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(&this->challenge_left_time_map_);
  std::map<unsigned int,unsigned int>::map(&this->player_all_avatar_die_time_map_);
  DungeonSceneTeam::DungeonSceneTeam(&this->dungeon_scene_team_);
  std::shared_ptr<SceneTimer>::shared_ptr(&this->settle_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_location_notify_time_);
  }
  this->last_location_notify_time_ = 0;
  std::string::basic_string(&this->transaction_);
  std::map<unsigned int,unsigned int>::map(&this->level_config_id_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->created_world_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->created_world_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->created_world_level_);
  }
  this->created_world_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->created_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->created_world_level_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->created_world_level_limit_);
  }
  this->created_world_level_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_born_point_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_born_point_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_born_point_idx_);
  }
  this->dungeon_born_point_idx_ = 0;
  std::any::any(&this->dungeon_extra_data_);
  std::map<unsigned int,proto::GroupBin>::map(&this->group_bin_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->player_quit_reason_map_);
  DungeonFightStatistic::DungeonFightStatistic(&this->fight_statistics_);
  DungeonSettleSnapshot::DungeonSettleSnapshot(&this->settle_snapshot_);
  std::set<unsigned int>::set(&this->payed_uid_set_);
  std::set<unsigned int>::set(&this->team_uid_set_);
  std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::function(&this->init_enter_scene_avatar_callback_);
  std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function(&this->dungeon_settle_callback_);
  std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::function(&this->challenge_settle_callback_);
  MistTrialDungeonStatProxy::MistTrialDungeonStatProxy(&this->mist_trial_stat_proxy_);
  std::map<unsigned int,proto::DungeonSettleExhibitionInfo>::map(&this->dungeon_settle_exhibition_info_map_);
  std::vector<unsigned int>::vector(&this->exhibition_card_vec_);
  std::weak_ptr<Player>::weak_ptr(&this->create_player_wtr_);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 83: range 000000001604FC30-000000001604FC3E
bool __cdecl DungeonScene::isPersistent(DungeonScene *const this)
{
  return 0;
};

// Line 92: range 00000000141F5288-00000000141F529B
const DungeonInitEnterSceneAvatarCallback *__cdecl DungeonScene::getDungeonInitEnterSceneAvatarCallback(
        const DungeonScene *const this)
{
  return &this->init_enter_scene_avatar_callback_;
};

// Line 92: range 00000000141F529C-00000000141F52AF
const DungeonSettleCallback *__cdecl DungeonScene::getDungeonSettleCallback(const DungeonScene *const this)
{
  return &this->dungeon_settle_callback_;
};

// Line 99: range 00000000141F52B0-00000000141F52C3
const ChallengeSettleCallback *__cdecl DungeonScene::getChallengeSettleCallback(const DungeonScene *const this)
{
  return &this->challenge_settle_callback_;
};

// Line 99: range 00000000141F52C4-00000000141F52D7
const std::map<unsigned int,unsigned int> *__cdecl DungeonScene::getLevelConfigIdMap(const DungeonScene *const this)
{
  return &this->level_config_id_map_;
};

// Line 145: range 00000000155B804C-00000000155B80A0
uint32_t __cdecl DungeonScene::getReviseLevel(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->revise_level_);
  }
  return this->revise_level_;
};

// Line 245: range 00000000131DA0AE-00000000131DA0C1
DungeonSceneTeam *__cdecl DungeonScene::getDungeonSceneTeam(DungeonScene *const this)
{
  return &this->dungeon_scene_team_;
};

// Line 245: range 00000000131DA09A-00000000131DA0AD
const std::string *__cdecl DungeonScene::getTransaction[abi:cxx11](DungeonScene *const this)
{
  return &this->transaction_;
};

// Line 268: range 0000000013844CBC-0000000013844D08
uint32_t __cdecl DungeonScene::getCreatedWorldLevel(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->created_world_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->created_world_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->created_world_level_);
  }
  return this->created_world_level_;
};

// Line 269: range 00000000155B80A2-00000000155B80F4
void __cdecl DungeonScene::setCreatedWorldLevel(DungeonScene *const this, uint32_t level)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->created_world_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->created_world_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->created_world_level_);
  }
  this->created_world_level_ = level;
};

// Line 270: range 000000001604FC40-000000001604FC94
uint32_t __cdecl DungeonScene::getCreatedWorldLevelLimit(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->created_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->created_world_level_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->created_world_level_limit_);
  }
  return this->created_world_level_limit_;
};

// Line 271: range 00000000155B80F6-00000000155B8150
void __cdecl DungeonScene::setCreatedWorldLevelLimit(DungeonScene *const this, uint32_t level)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->created_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->created_world_level_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->created_world_level_limit_);
  }
  this->created_world_level_limit_ = level;
};

// Line 273: range 000000001604FC96-000000001604FCE3
bool __cdecl DungeonScene::isEnableFightStatistics(DungeonScene *const this)
{
  if ( *(char *)(((unsigned __int64)&this->enable_fight_statistics_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enable_fight_statistics_);
  return this->enable_fight_statistics_;
};

// Line 315: range 000000001604FCE4-000000001604FCF5
int32_t __cdecl DungeonScene::saveGroupByMUIP(DungeonScene *const this, uint32_t group_id)
{
  return 0;
};

// Line 324: range 00000000141F52D8-00000000141F52EB
const DungeonSettleSnapshot *__cdecl DungeonScene::getDungeonSettleSnapshot(const DungeonScene *const this)
{
  return &this->settle_snapshot_;
};

// Line 334: range 00000000141F52EC-00000000141F53C3
bool __fastcall DungeonScene::isPlayerPayedTicket(const DungeonScene *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:334";
  *(_QWORD *)(v2 + 16) = DungeonScene::isPlayerPayedTicket;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = std::set<unsigned int>::count(&this->payed_uid_set_, (const std::set<unsigned int>::key_type *)(v2 + 32)) != 0;
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

// Line 335: range 00000000141F53C4-00000000141F5495
void __fastcall DungeonScene::addPayedTicketPlayer(DungeonScene *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:335";
  *(_QWORD *)(v2 + 16) = DungeonScene::addPayedTicketPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::set<unsigned int>::insert(&this->payed_uid_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
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

// Line 338: range 00000000141F54C2-00000000141F5516
uint32_t __cdecl DungeonScene::getInstId(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->inst_id_);
  }
  return this->inst_id_;
};

// Line 338: range 00000000141F5496-00000000141F54C1
void __cdecl DungeonScene::setTeamUidSet(DungeonScene *const this, const std::set<unsigned int> *uid_set)
{
  std::set<unsigned int>::operator=(&this->team_uid_set_, uid_set);
};

// Line 339: range 00000000149ED754-00000000149ED7A5
PlayerPtr __cdecl DungeonScene::getCreatePlayer(const DungeonScene *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 339: range 00000000149ED740-00000000149ED753
const std::set<unsigned int> *__cdecl DungeonScene::getTeamUidSet(const DungeonScene *const this)
{
  return &this->team_uid_set_;
};

// Line 341: range 0000000013844D0A-0000000013844D5C
bool __cdecl DungeonScene::isSettledAndSuccess(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  return this->dungeon_result_ == DUNGEON_RESULT_SUCCEED;
};

// Line 346: range 000000001461E88A-000000001461E8A9
uint32_t __cdecl DungeonScene::getMistTrialDamageBeared(DungeonScene *const this)
{
  return MistTrialDungeonStatProxy::getDamageBeard(&this->mist_trial_stat_proxy_);
};

// Line 347: range 000000001461E8AA-000000001461E93C
std::unordered_map<data::ElementReactionType,unsigned int> *__cdecl DungeonScene::getMistTrialElementReactionCount(
        std::unordered_map<data::ElementReactionType,unsigned int> *retstr,
        DungeonScene *const this)
{
  MistTrialDungeonStatProxy *p_mist_trial_stat_proxy; // rsi

  p_mist_trial_stat_proxy = &this->mist_trial_stat_proxy_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_h._M_single_bucket + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_h._M_single_bucket + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_mist_trial_stat_proxy = (MistTrialDungeonStatProxy *)56;
    __asan_report_store_n(retstr, 56LL);
  }
  MistTrialDungeonStatProxy::getElementReactionTypeCountMap(retstr, p_mist_trial_stat_proxy);
  return retstr;
};

// Line 348: range 000000001461E93E-000000001461E95D
uint32_t __cdecl DungeonScene::getMistTrialElementBurstCount(DungeonScene *const this)
{
  return MistTrialDungeonStatProxy::getElementBurstCount(&this->mist_trial_stat_proxy_);
};

// Line 349: range 000000001461E95E-000000001461E97D
uint32_t __cdecl DungeonScene::getMistTrialStrongestBlow(DungeonScene *const this)
{
  return MistTrialDungeonStatProxy::getStrongestBlow(&this->mist_trial_stat_proxy_);
};

// Line 350: range 000000001461E97E-000000001461E99D
uint64_t __cdecl DungeonScene::getMistTrialStrongestBlowAvatarGuid(DungeonScene *const this)
{
  return MistTrialDungeonStatProxy::getStrongestBlowAvatarGuid(&this->mist_trial_stat_proxy_);
};

// Line 373: range 00000000149ED7A6-00000000149ED7E5
uint64_t __cdecl DungeonScene::getTowerLastCountTimeMs(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_last_count_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->tower_last_count_time_ms_;
};

// Line 375: range 0000000013EBF540-0000000013EBF594
uint32_t __cdecl DungeonScene::getCreatePlayerUid(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->create_player_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->create_player_uid_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->create_player_uid_);
  }
  return this->create_player_uid_;
};

// Line 379: range 00000000143FF3E6-00000000143FF3F9
const DungeonFightStatistic *__cdecl DungeonScene::getDungeonFightStatistic(const DungeonScene *const this)
{
  return &this->fight_statistics_;
};

// Line 380: range 000000001604FCF6-000000001604FD21
void __cdecl DungeonScene::setDungeonExhibitionCardVec(
        DungeonScene *const this,
        const std::vector<unsigned int> *card_id_vec)
{
  std::vector<unsigned int>::operator=(&this->exhibition_card_vec_, card_id_vec);
};

// Line 383: range 00000000131DA0EC-00000000131DA140
uint32_t __cdecl DungeonScene::getDungeonId(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  return this->dungeon_id_;
};

// Line 384: range 000000001461E99E-000000001461E9EA
uint32_t __cdecl DungeonScene::getDungeonBeginTime(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_begin_time_);
  }
  return this->dungeon_begin_time_;
};

// Line 385: range 000000001461E9EC-000000001461EA40
uint32_t __cdecl DungeonScene::getDungeonSettleTime(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_settle_time_);
  }
  return this->dungeon_settle_time_;
};

// Line 386: range 00000000131DA142-00000000131DA18E
DungeonResult __cdecl DungeonScene::getDungeonResult(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  return this->dungeon_result_;
};

// Line 387: range 00000000155B8152-00000000155B81AD
void __cdecl DungeonScene::setInstId(DungeonScene *const this, uint32_t inst_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->inst_id_);
  }
  this->inst_id_ = inst_id__out;
};

// Line 388: range 00000000149ED7E6-00000000149ED82E
void __cdecl DungeonScene::setTowerLastCountTimeMs(DungeonScene *const this, uint64_t tower_last_count_time_ms__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_last_count_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tower_last_count_time_ms_);
  this->tower_last_count_time_ms_ = tower_last_count_time_ms__out;
};

// Line 389: range 00000000143FF3FA-00000000143FF439
uint64_t __cdecl DungeonScene::getTowerTotalCountTimeMs(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_total_count_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->tower_total_count_time_ms_;
};

// Line 389: range 00000000143FF43A-00000000143FF490
void __cdecl DungeonScene::setEnableFightStatistics(DungeonScene *const this, bool enable_fight_statistics__out)
{
  if ( *(char *)(((unsigned __int64)&this->enable_fight_statistics_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_fight_statistics_);
  this->enable_fight_statistics_ = enable_fight_statistics__out;
};

// Line 389: range 00000000149ED830-00000000149ED878
void __cdecl DungeonScene::setTowerTotalCountTimeMs(DungeonScene *const this, uint64_t tower_total_count_time_ms__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_total_count_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tower_total_count_time_ms_);
  this->tower_total_count_time_ms_ = tower_total_count_time_ms__out;
};

// Line 392: range 00000000141F5518-00000000141F556A
bool __cdecl DungeonScene::getIsInRestartProcess(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_restart_process_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 118) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_restart_process_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_restart_process_);
  }
  return this->is_in_restart_process_;
};

// Line 392: range 00000000141F556C-00000000141F55C7
void __cdecl DungeonScene::setIsInRestartProcess(DungeonScene *const this, bool is_in_restart_process__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_restart_process_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 118) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_restart_process_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_in_restart_process_);
  }
  this->is_in_restart_process_ = is_in_restart_process__out;
};

// Line 393: range 00000000141F55C8-00000000141F561A
bool __cdecl DungeonScene::getIsForceQuit(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_force_quit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_force_quit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_force_quit_);
  }
  return this->is_force_quit_;
};

// Line 394: range 0000000015A1AC82-0000000015A1ACD6
uint32_t __cdecl DungeonScene::getDungeonBeginSceneTime(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_scene_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_begin_scene_time_);
  }
  return this->dungeon_begin_scene_time_;
};

// Line 395: range 0000000015A1ACD8-0000000015A1AD24
uint32_t __cdecl DungeonScene::getDungeonSettleSceneTime(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_settle_scene_time_);
  }
  return this->dungeon_settle_scene_time_;
};

// Line 399: range 0000000016907D20-0000000016907D5F
uint64_t __cdecl DungeonScene::getDungeonCloseTime(const DungeonScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_close_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->dungeon_close_time_;
};

// Line 399: range 0000000016907D60-0000000016907DA8
void __cdecl DungeonScene::setDungeonCloseTime(DungeonScene *const this, uint64_t dungeon_close_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_close_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->dungeon_close_time_);
  this->dungeon_close_time_ = dungeon_close_time__out;
};

// Line 440: range 0000000014F897A6-0000000014F897D6
int32_t __cdecl DungeonScene::setDungeonExtraData<ChannellerSlabActivity::LoopDungeonContext>(
        DungeonScene *const this,
        const ChannellerSlabActivity::LoopDungeonContext *extra_data)
{
  std::any::operator=<ChannellerSlabActivity::LoopDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 00000000176E46EA-00000000176E471A
int32_t __cdecl DungeonScene::setDungeonExtraData<CharAmusementDungeonContext>(
        DungeonScene *const this,
        const CharAmusementDungeonContext *extra_data)
{
  std::any::operator=<CharAmusementDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 0000000016677B40-0000000016677B70
int32_t __cdecl DungeonScene::setDungeonExtraData<CrystalLinkDungeonContext>(
        DungeonScene *const this,
        const CrystalLinkDungeonContext *extra_data)
{
  std::any::operator=<CrystalLinkDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 000000001667CD96-000000001667CDC6
int32_t __cdecl DungeonScene::setDungeonExtraData<DuelHeartDungeonContext>(
        DungeonScene *const this,
        const DuelHeartDungeonContext *extra_data)
{
  std::any::operator=<DuelHeartDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 000000001667FA10-000000001667FA40
int32_t __cdecl DungeonScene::setDungeonExtraData<EffigyActivity::EffigyDungeonContext>(
        DungeonScene *const this,
        const EffigyActivity::EffigyDungeonContext *extra_data)
{
  std::any::operator=<EffigyActivity::EffigyDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 00000000166803C2-00000000166803F2
int32_t __cdecl DungeonScene::setDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
        DungeonScene *const this,
        const EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *extra_data)
{
  std::any::operator=<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext const&>(
    &this->dungeon_extra_data_,
    extra_data);
  return 0;
};

// Line 440: range 0000000014A100C2-0000000014A100F2
int32_t __cdecl DungeonScene::setDungeonExtraData<FungusFighterDungeonContext>(
        DungeonScene *const this,
        const FungusFighterDungeonContext *extra_data)
{
  std::any::operator=<FungusFighterDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 00000000176DD214-00000000176DD244
int32_t __cdecl DungeonScene::setDungeonExtraData<GCGDungeonContext>(
        DungeonScene *const this,
        const GCGDungeonContext *extra_data)
{
  std::any::operator=<GCGDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 0000000014630E9C-0000000014630ECC
int32_t __cdecl DungeonScene::setDungeonExtraData<InstableSprayDungeonContext>(
        DungeonScene *const this,
        const InstableSprayDungeonContext *extra_data)
{
  std::any::operator=<InstableSprayDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 0000000014634C8C-0000000014634CBC
int32_t __cdecl DungeonScene::setDungeonExtraData<IrodoriChessDungeonContext>(
        DungeonScene *const this,
        const IrodoriChessDungeonContext *extra_data)
{
  std::any::operator=<IrodoriChessDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 000000001463DC04-000000001463DC34
int32_t __cdecl DungeonScene::setDungeonExtraData<MistTrialDungeonContext>(
        DungeonScene *const this,
        const MistTrialDungeonContext *extra_data)
{
  std::any::operator=<MistTrialDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 000000001463F406-000000001463F436
int32_t __cdecl DungeonScene::setDungeonExtraData<MuqadasPotionDungeonContext>(
        DungeonScene *const this,
        const MuqadasPotionDungeonContext *extra_data)
{
  std::any::operator=<MuqadasPotionDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 0000000016D8CA2C-0000000016D8CA5C
int32_t __cdecl DungeonScene::setDungeonExtraData<PotionDungeonContext>(
        DungeonScene *const this,
        const PotionDungeonContext *extra_data)
{
  std::any::operator=<PotionDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 0000000016D8F99A-0000000016D8F9CA
int32_t __cdecl DungeonScene::setDungeonExtraData<RogueDiaryDungeonContext>(
        DungeonScene *const this,
        const RogueDiaryDungeonContext *extra_data)
{
  std::any::operator=<RogueDiaryDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 0000000015A28646-0000000015A28676
int32_t __cdecl DungeonScene::setDungeonExtraData<RogueDungeonContext>(
        DungeonScene *const this,
        const RogueDungeonContext *extra_data)
{
  std::any::operator=<RogueDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 00000000180C79D0-00000000180C7A00
int32_t __cdecl DungeonScene::setDungeonExtraData<SumoDungeonContext>(
        DungeonScene *const this,
        const SumoDungeonContext *extra_data)
{
  std::any::operator=<SumoDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 440: range 00000000180C9F5A-00000000180C9F8A
int32_t __cdecl DungeonScene::setDungeonExtraData<TeamChainDungeonContext>(
        DungeonScene *const this,
        const TeamChainDungeonContext *extra_data)
{
  std::any::operator=<TeamChainDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 447: range 0000000014F8174A-0000000014F817DC
std::optional<BrickBreakerDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<BrickBreakerDungeonContext>(
        std::optional<BrickBreakerDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 39) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)40;
    __asan_report_store_n(retstr, 40LL);
  }
  tryAnyCastOptional<BrickBreakerDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 447: range 0000000013EEAC94-0000000013EEAD26
std::optional<CharAmusementDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<CharAmusementDungeonContext>(
        std::optional<CharAmusementDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                         + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)104;
    __asan_report_store_n(retstr, 104LL);
  }
  tryAnyCastOptional<CharAmusementDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 447: range 000000001605C048-000000001605C0DA
std::optional<CrystalLinkDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
        std::optional<CrystalLinkDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr - 73) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)184;
    __asan_report_store_n(retstr, 184LL);
  }
  tryAnyCastOptional<CrystalLinkDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 447: range 000000001667CDC8-000000001667CE00
std::optional<DuelHeartDungeonContext> __cdecl DungeonScene::getDungeonExtraData<DuelHeartDungeonContext>(
        const DungeonScene *const this)
{
  return tryAnyCastOptional<DuelHeartDungeonContext>(&this->dungeon_extra_data_);
};

// Line 447: range 0000000014A09750-0000000014A097E2
std::optional<EffigyActivity::EffigyDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<EffigyActivity::EffigyDungeonContext>(
        std::optional<EffigyActivity::EffigyDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 39) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)40;
    __asan_report_store_n(retstr, 40LL);
  }
  tryAnyCastOptional<EffigyActivity::EffigyDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 447: range 0000000014A100F4-0000000014A10186
std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *__cdecl DungeonScene::getDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
        std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)48;
    __asan_report_store_n(retstr, 48LL);
  }
  tryAnyCastOptional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 447: range 0000000014A0FED0-0000000014A0FF62
std::optional<FungusFighterDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
        std::optional<FungusFighterDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr - 113) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                         + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)144;
    __asan_report_store_n(retstr, 144LL);
  }
  tryAnyCastOptional<FungusFighterDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 447: range 00000000176DD0AE-00000000176DD0DD
std::optional<GCGDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<GCGDungeonContext>(
        std::optional<GCGDungeonContext> *retstr,
        const DungeonScene *const this)
{
  tryAnyCastOptional<GCGDungeonContext>(retstr, &this->dungeon_extra_data_);
  return retstr;
};

// Line 447: range 0000000016249F3E-0000000016249FD0
std::optional<IrodoriChessDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<IrodoriChessDungeonContext>(
        std::optional<IrodoriChessDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 63) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)64;
    __asan_report_store_n(retstr, 64LL);
  }
  tryAnyCastOptional<IrodoriChessDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 447: range 000000001463C59C-000000001463C5C8
std::optional<MistTrialDungeonContext> __cdecl DungeonScene::getDungeonExtraData<MistTrialDungeonContext>(
        const DungeonScene *const this)
{
  return tryAnyCastOptional<MistTrialDungeonContext>(&this->dungeon_extra_data_);
};

// Line 447: range 000000001463F504-000000001463F53C
std::optional<MuqadasPotionDungeonContext> __cdecl DungeonScene::getDungeonExtraData<MuqadasPotionDungeonContext>(
        const DungeonScene *const this)
{
  return tryAnyCastOptional<MuqadasPotionDungeonContext>(&this->dungeon_extra_data_);
};

// Line 447: range 0000000014A0E6AC-0000000014A0E73E
std::optional<PotionDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<PotionDungeonContext>(
        std::optional<PotionDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr - 113) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                         + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)144;
    __asan_report_store_n(retstr, 144LL);
  }
  tryAnyCastOptional<PotionDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 447: range 000000001441AE4A-000000001441AE82
std::optional<RogueDiaryDungeonContext> __cdecl DungeonScene::getDungeonExtraData<RogueDiaryDungeonContext>(
        const DungeonScene *const this)
{
  return tryAnyCastOptional<RogueDiaryDungeonContext>(&this->dungeon_extra_data_);
};

// Line 447: range 0000000015A29C8C-0000000015A29CBB
std::optional<RogueDungeonContext> __cdecl DungeonScene::getDungeonExtraData<RogueDungeonContext>(
        const DungeonScene *const this)
{
  return tryAnyCastOptional<RogueDungeonContext>(&this->dungeon_extra_data_);
};

// Line 447: range 000000001605BFCC-000000001605BFFB
std::optional<SumoDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<SumoDungeonContext>(
        std::optional<SumoDungeonContext> *retstr,
        const DungeonScene *const this)
{
  tryAnyCastOptional<SumoDungeonContext>(retstr, &this->dungeon_extra_data_);
  return retstr;
};

// Line 447: range 00000000180CA038-00000000180CA0CA
std::optional<TeamChainDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<TeamChainDungeonContext>(
        std::optional<TeamChainDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 71) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)72;
    __asan_report_store_n(retstr, 72LL);
  }
  tryAnyCastOptional<TeamChainDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 463: range 0000000014F81718-0000000014F81748
int32_t __cdecl DungeonScene::setDungeonExtraData<BrickBreakerDungeonContext>(
        DungeonScene *const this,
        const BrickBreakerDungeonContext *extra_data)
{
  std::any::operator=<BrickBreakerDungeonContext const&>(&this->dungeon_extra_data_, extra_data);
  return 0;
};

// Line 916: range 000000001605C016-000000001605C047
bool __cdecl DungeonScene::isDungeonExtraDataOfType<MistTrialDungeonContext>(const DungeonScene *const this)
{
  const std::type_info *v1; // rax

  v1 = std::any::type(&this->dungeon_extra_data_);
  return std::type_info::operator==((const std::type_info *const)&`typeinfo for'MistTrialDungeonContext, v1);
};

// Line 1016: range 0000000014A0B01E-0000000014A0B0B0
std::optional<ChannellerSlabActivity::LoopDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<ChannellerSlabActivity::LoopDungeonContext>(
        std::optional<ChannellerSlabActivity::LoopDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr - 81) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)176;
    __asan_report_store_n(retstr, 176LL);
  }
  tryAnyCastOptional<ChannellerSlabActivity::LoopDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 1133: range 0000000014630C1C-0000000014630CAE
std::optional<InstableSprayDungeonContext> *__cdecl DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
        std::optional<InstableSprayDungeonContext> *retstr,
        const DungeonScene *const this)
{
  std::any *p_dungeon_extra_data; // rsi

  p_dungeon_extra_data = &this->dungeon_extra_data_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 79) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_dungeon_extra_data = (std::any *)80;
    __asan_report_store_n(retstr, 80LL);
  }
  tryAnyCastOptional<InstableSprayDungeonContext>(retstr, p_dungeon_extra_data);
  return retstr;
};

// Line 14228: range 00000000143FF38A-00000000143FF3E4
void __cdecl DungeonScene::setReviseLevel(DungeonScene *const this, uint32_t revise_level)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revise_level_);
  }
  this->revise_level_ = revise_level;
};

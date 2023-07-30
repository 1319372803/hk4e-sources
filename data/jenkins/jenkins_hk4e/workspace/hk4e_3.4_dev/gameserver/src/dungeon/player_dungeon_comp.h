// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/player_dungeon_comp.h

// Line 31: range 00000000131DFAFA-00000000131DFB7B
void __cdecl EnterDungeonOption::EnterDungeonOption(EnterDungeonOption *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_use_born_pos = 1;
  Vector3::Vector3(&this->enter_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->enter_rot, 0.0, 0.0, 0.0);
};

// Line 39: range 000000001434A70C-000000001434A736
void __cdecl PlayerDungeonComp::~PlayerDungeonComp(PlayerDungeonComp *const this)
{
  PlayerDungeonComp::~PlayerDungeonComp(this);
  operator delete(this, 0x200uLL);
};

// Line 39: range 000000001434A678-000000001434A70B
void __cdecl PlayerDungeonComp::~PlayerDungeonComp(PlayerDungeonComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerDungeonComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v1;
  PlayerDungeonComp::RestartInviteInfo::~RestartInviteInfo(&this->restart_invite_info_);
  std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::~unordered_map(&this->create_dungeon_scene_map_);
  std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::~unordered_map(&this->serial_boss_chest_map_);
  proto::PlayerDungeonRecordBin::~PlayerDungeonRecordBin(&this->dungeon_record_bin_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 42: range 000000001747BC90-000000001747C027
void __cdecl ZN17PlayerDungeonCompCI214PlayerCompBaseER6Player(PlayerDungeonComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerDungeonComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_point_id_);
  }
  this->enter_point_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_has_quit_target_pos_);
  }
  this->is_has_quit_target_pos_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quit_scene_id_);
  }
  this->quit_scene_id_ = 0;
  Vector3::Vector3(&this->quit_pos_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->quit_rot_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_dungeon_enter_time_);
  }
  this->last_dungeon_enter_time_ = 0;
  proto::PlayerDungeonRecordBin::PlayerDungeonRecordBin(&this->dungeon_record_bin_);
  if ( *(char *)(((unsigned __int64)&this->is_join_other_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_join_other_scene_);
  this->is_join_other_scene_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_daily_item_add_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_time_daily_item_add_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_time_daily_item_add_);
  }
  this->last_time_daily_item_add_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_weekly_item_add_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_time_weekly_item_add_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_time_weekly_item_add_);
  }
  this->last_time_weekly_item_add_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_unsettled_dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_unsettled_dungeon_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_unsettled_dungeon_id_);
  }
  this->last_unsettled_dungeon_id_ = 0;
  std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::unordered_map(&this->serial_boss_chest_map_);
  std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::unordered_map(&this->create_dungeon_scene_map_);
  if ( *(char *)(((unsigned __int64)&this->is_restart_dungeon_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_restart_dungeon_);
  this->is_restart_dungeon_ = 0;
  PlayerDungeonComp::RestartInviteInfo::RestartInviteInfo(&this->restart_invite_info_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_dungeon_id_);
  }
  this->last_dungeon_id_ = 0;
};

// Line 44: range 00000000141F8336-00000000141F8473
PlayerDungeonComp::RestartInviteInfo *__cdecl PlayerDungeonComp::RestartInviteInfo::operator=(
        PlayerDungeonComp::RestartInviteInfo *const this,
        PlayerDungeonComp::RestartInviteInfo *a2)
{
  uint32_t dungeon_id; // ecx
  uint32_t deadline_time; // ecx

  std::vector<unsigned int>::operator=(&this->agree_uid_vec, &a2->agree_uid_vec);
  std::vector<unsigned int>::operator=(&this->disagree_uid_vec, &a2->disagree_uid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dungeon_id);
  }
  dungeon_id = a2->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->deadline_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->deadline_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->deadline_time);
  }
  deadline_time = a2->deadline_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->deadline_time);
  }
  this->deadline_time = deadline_time;
  return this;
};

// Line 44: range 00000000141F825A-00000000141F8308
void __cdecl PlayerDungeonComp::RestartInviteInfo::RestartInviteInfo(PlayerDungeonComp::RestartInviteInfo *const this)
{
  std::vector<unsigned int>::vector(&this->agree_uid_vec);
  std::vector<unsigned int>::vector(&this->disagree_uid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->deadline_time);
  }
  this->deadline_time = 0;
};

// Line 44: range 00000000141F830A-00000000141F8334
void __cdecl PlayerDungeonComp::RestartInviteInfo::~RestartInviteInfo(PlayerDungeonComp::RestartInviteInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->disagree_uid_vec);
  std::vector<unsigned int>::~vector(&this->agree_uid_vec);
};

// Line 158: range 0000000013EBF5EC-0000000013EBF640
uint32_t __cdecl PlayerDungeonComp::getLastUnsettledDungeonId(const PlayerDungeonComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_unsettled_dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_unsettled_dungeon_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_unsettled_dungeon_id_);
  }
  return this->last_unsettled_dungeon_id_;
};

// Line 158: range 0000000013EBF596-0000000013EBF5EB
void __cdecl PlayerDungeonComp::setIsJoinOtherScene(PlayerDungeonComp *const this, bool other_scene)
{
  if ( *(char *)(((unsigned __int64)&this->is_join_other_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_join_other_scene_);
  this->is_join_other_scene_ = other_scene;
};

// Line 215: range 00000000176B1870-00000000176B18BC
uint32_t __cdecl PlayerDungeonComp::getLastDungeonId(const PlayerDungeonComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_dungeon_id_);
  }
  return this->last_dungeon_id_;
};

// Line 251: range 00000000141F561C-00000000141F566A
void __cdecl PlayerDungeonComp::setEnterPointId(PlayerDungeonComp *const this, uint32_t enter_point_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_point_id_);
  }
  this->enter_point_id_ = enter_point_id__out;
};

// Line 266: range 00000000141F566C-00000000141F56B9
bool __cdecl PlayerDungeonComp::getIsRestartDungeon(const PlayerDungeonComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_restart_dungeon_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_restart_dungeon_);
  return this->is_restart_dungeon_;
};

// Line 274: range 0000000017213EFE-0000000017213F08
uint32_t __cdecl PlayerDungeonComp::getType()
{
  return 8;
};

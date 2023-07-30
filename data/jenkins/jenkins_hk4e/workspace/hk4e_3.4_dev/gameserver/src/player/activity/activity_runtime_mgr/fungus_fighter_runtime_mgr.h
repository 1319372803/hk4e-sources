// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.h

// Line 61: range 000000001623BDB4-000000001623BE8B
void __cdecl FungusFighterMonsterData::FungusFighterMonsterData(FungusFighterMonsterData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->fungus_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_hp_percentage);
  }
  this->cur_hp_percentage = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_alive);
  }
  this->is_alive = 0;
};

// Line 61: range 000000001623BC12-000000001623BDB3
void __cdecl FungusTrainingShapshotData::FungusTrainingShapshotData(FungusTrainingShapshotData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_count);
  }
  this->skill_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round);
  }
  this->cur_round = 0;
  std::unordered_map<unsigned int,FungusFighterMonsterData>::unordered_map(&this->monster_data_map);
  std::vector<unsigned int>::vector(&this->choosen_monster_vec);
  std::vector<unsigned int>::vector(&this->backup_monster_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_used_time);
  }
  this->total_used_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rand_index);
  }
  this->rand_index = 0;
  std::vector<unsigned int>::vector(&this->monster_pool_vec);
  std::string::basic_string(&this->level_transaction);
};

// Line 61: range 0000000016300A66-0000000016300DC9
void __cdecl FungusTrainingShapshotData::FungusTrainingShapshotData(
        FungusTrainingShapshotData *const this,
        const FungusTrainingShapshotData *a2)
{
  uint32_t dungeon_id; // ecx
  uint32_t skill_count; // ecx
  uint32_t cur_round; // ecx
  uint32_t total_used_time; // ecx
  uint32_t rand_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dungeon_id = a2->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  skill_count = a2->skill_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_count);
  }
  this->skill_count = skill_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_round = a2->cur_round;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round);
  }
  this->cur_round = cur_round;
  std::unordered_map<unsigned int,FungusFighterMonsterData>::unordered_map(
    &this->monster_data_map,
    &a2->monster_data_map);
  std::vector<unsigned int>::vector(&this->choosen_monster_vec, &a2->choosen_monster_vec);
  std::vector<unsigned int>::vector(&this->backup_monster_vec, &a2->backup_monster_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->total_used_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->total_used_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  total_used_time = a2->total_used_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_used_time);
  }
  this->total_used_time = total_used_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rand_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rand_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  rand_index = a2->rand_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rand_index);
  }
  this->rand_index = rand_index;
  std::vector<unsigned int>::vector(&this->monster_pool_vec, &a2->monster_pool_vec);
  std::string::basic_string(&this->level_transaction, &a2->level_transaction);
};

// Line 61: range 000000001518C45C-000000001518C4BC
void __cdecl FungusTrainingShapshotData::~FungusTrainingShapshotData(FungusTrainingShapshotData *const this)
{
  std::string::~string(&this->level_transaction);
  std::vector<unsigned int>::~vector(&this->monster_pool_vec);
  std::vector<unsigned int>::~vector(&this->backup_monster_vec);
  std::vector<unsigned int>::~vector(&this->choosen_monster_vec);
  std::unordered_map<unsigned int,FungusFighterMonsterData>::~unordered_map(&this->monster_data_map);
};

// Line 80: range 000000001623B7B4-000000001623BAB7
FungusTrainingShapshotData *__cdecl FungusTrainingShapshotData::operator=(
        FungusTrainingShapshotData *const this,
        const FungusTrainingShapshotData *copy_data)
{
  uint32_t dungeon_id; // ecx
  uint32_t skill_count; // ecx
  uint32_t cur_round; // ecx
  uint32_t total_used_time; // ecx
  uint32_t rand_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)copy_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)copy_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dungeon_id = copy_data->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&copy_data->skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)copy_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&copy_data->skill_count >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  skill_count = copy_data->skill_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_count);
  }
  this->skill_count = skill_count;
  if ( *(_BYTE *)(((unsigned __int64)&copy_data->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&copy_data->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_round = copy_data->cur_round;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round);
  }
  this->cur_round = cur_round;
  std::unordered_map<unsigned int,FungusFighterMonsterData>::operator=(
    &this->monster_data_map,
    &copy_data->monster_data_map);
  std::vector<unsigned int>::operator=(&this->choosen_monster_vec, &copy_data->choosen_monster_vec);
  std::vector<unsigned int>::operator=(&this->backup_monster_vec, &copy_data->backup_monster_vec);
  if ( *(_BYTE *)(((unsigned __int64)&copy_data->total_used_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&copy_data->total_used_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  total_used_time = copy_data->total_used_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_used_time);
  }
  this->total_used_time = total_used_time;
  if ( *(_BYTE *)(((unsigned __int64)&copy_data->rand_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)copy_data + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&copy_data->rand_index >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  rand_index = copy_data->rand_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rand_index);
  }
  this->rand_index = rand_index;
  std::vector<unsigned int>::operator=(&this->monster_pool_vec, &copy_data->monster_pool_vec);
  std::string::operator=(&this->level_transaction, &copy_data->level_transaction);
  return this;
};

// Line 96: range 000000001518C4F6-000000001518C54A
void __cdecl FungusFighterRuntimeMgr::~FungusFighterRuntimeMgr(FungusFighterRuntimeMgr *const this)
{
  std::map<unsigned int,FungusTrainingShapshotData>::~map(&this->dungeon_snapshot_map_);
  std::string::~string(&this->room_transaction_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->alive_fungus_map_);
  FungusTrainingShapshotData::~FungusTrainingShapshotData(&this->cur_runtime_data_);
};

// Line 99: range 0000000016D67BF2-0000000016D67DF4
void __cdecl FungusFighterRuntimeMgr::FungusFighterRuntimeMgr(
        FungusFighterRuntimeMgr *const this,
        Player *player,
        FungusFighterActivity *activity)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->activity_);
  this->activity_ = activity;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_running_);
  this->is_running_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->has_selected_fungus_);
  }
  this->has_selected_fungus_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->has_used_backup_);
  }
  this->has_used_backup_ = 0;
  FungusTrainingShapshotData::FungusTrainingShapshotData(&this->cur_runtime_data_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->alive_fungus_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_life_percentage_);
  }
  this->gadget_life_percentage_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_fungus_num_);
  }
  this->dead_fungus_num_ = 0;
  std::string::basic_string(&this->room_transaction_);
  std::map<unsigned int,FungusTrainingShapshotData>::map(&this->dungeon_snapshot_map_);
};

// Line 157: range 00000000149EE828-00000000149EE870
bool __cdecl FungusFighterRuntimeMgr::getIsRunning(const FungusFighterRuntimeMgr *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  return this->is_running_;
};

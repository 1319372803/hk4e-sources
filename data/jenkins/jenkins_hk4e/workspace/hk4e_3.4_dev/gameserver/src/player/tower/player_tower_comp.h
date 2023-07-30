// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/tower/player_tower_comp.h

// Line 45: range 0000000014402BE8-0000000014402C3F
void __cdecl TowerTeam::TowerTeam(TowerTeam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->tower_team_id = 0;
  std::vector<unsigned long>::vector(&this->mirror_avatar_guid_vec);
};

// Line 45: range 0000000014483318-00000000144833B0
void __cdecl TowerTeam::TowerTeam(TowerTeam *const this, const TowerTeam *a2)
{
  uint32_t tower_team_id; // ecx
  char v3; // al
  const TowerTeam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  tower_team_id = a2->tower_team_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->tower_team_id = tower_team_id;
  std::vector<unsigned long>::vector(&this->mirror_avatar_guid_vec, &v4->mirror_avatar_guid_vec);
};

// Line 45: range 0000000014402C40-0000000014402C5E
void __cdecl TowerTeam::~TowerTeam(TowerTeam *const this)
{
  std::vector<unsigned long>::~vector(&this->mirror_avatar_guid_vec);
};

// Line 56: range 0000000014403782-00000000144037D9
void __cdecl LevelRecord::LevelRecord(LevelRecord *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->level_id = 0;
  std::vector<unsigned int>::vector(&this->satisfied_cond_vec);
};

// Line 56: range 00000000144D3598-00000000144D3630
void __cdecl LevelRecord::LevelRecord(LevelRecord *const this, LevelRecord *a2)
{
  uint32_t level_id; // ecx
  char v3; // al
  LevelRecord *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  level_id = a2->level_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->level_id = level_id;
  std::vector<unsigned int>::vector(&this->satisfied_cond_vec, &v4->satisfied_cond_vec);
};

// Line 56: range 000000001444C15A-000000001444C1F2
void __cdecl LevelRecord::LevelRecord(LevelRecord *const this, const LevelRecord *a2)
{
  uint32_t level_id; // ecx
  char v3; // al
  const LevelRecord *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  level_id = a2->level_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->level_id = level_id;
  std::vector<unsigned int>::vector(&this->satisfied_cond_vec, &v4->satisfied_cond_vec);
};

// Line 56: range 00000000144037DA-00000000144037F8
void __cdecl LevelRecord::~LevelRecord(LevelRecord *const this)
{
  std::vector<unsigned int>::~vector(&this->satisfied_cond_vec);
};

// Line 67: range 00000000144036CC-0000000014403761
void __cdecl TowerFloorRecord::TowerFloorRecord(TowerFloorRecord *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->floor_id = 0;
  std::vector<LevelRecord>::vector(&this->passed_level_record_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_star_reward_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->floor_star_reward_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->floor_star_reward_progress, v1, (_BYTE)this + 32);
  }
  this->floor_star_reward_progress = 0;
};

// Line 67: range 00000000144B1650-00000000144B175D
void __cdecl TowerFloorRecord::TowerFloorRecord(TowerFloorRecord *const this, TowerFloorRecord *a2)
{
  uint32_t floor_id; // ecx
  char v3; // al
  std::vector<LevelRecord> *p_passed_level_record_vec; // rsi
  uint32_t floor_star_reward_progress; // ecx
  char v6; // al
  TowerFloorRecord *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  floor_id = a2->floor_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->floor_id = floor_id;
  p_passed_level_record_vec = &v7->passed_level_record_vec;
  std::vector<LevelRecord>::vector(&this->passed_level_record_vec, &v7->passed_level_record_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v7->floor_star_reward_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->floor_star_reward_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v7->floor_star_reward_progress);
  }
  floor_star_reward_progress = v7->floor_star_reward_progress;
  v6 = *(_BYTE *)(((unsigned __int64)&this->floor_star_reward_progress >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_passed_level_record_vec) = v6 != 0;
    __asan_report_store4(&this->floor_star_reward_progress, p_passed_level_record_vec, (_BYTE)this + 32);
  }
  this->floor_star_reward_progress = floor_star_reward_progress;
};

// Line 67: range 0000000014403762-0000000014403780
void __cdecl TowerFloorRecord::~TowerFloorRecord(TowerFloorRecord *const this)
{
  std::vector<LevelRecord>::~vector(&this->passed_level_record_vec);
};

// Line 80: range 00000000174818F0-0000000017481AE0
void __cdecl TowerCurLevelRecord::TowerCurLevelRecord(TowerCurLevelRecord *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->cur_floor_index = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->cur_level_index, v2, v3);
  this->cur_level_index = 0;
  std::vector<TowerTeam>::vector(&this->tower_team_vec);
  std::map<unsigned long,std::map<data::FightPropType,float>>::map(&this->mirror_avatar_prop_map);
  std::map<unsigned int,unsigned int>::map(&this->tower_buff_map);
  if ( *(char *)(((unsigned __int64)&this->is_floor_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_floor_finished, v2, &this->is_floor_finished);
  this->is_floor_finished = 0;
  v4 = (((_BYTE)this - 124) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_id >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->cur_tower_buff_id, v4, v5);
  this->cur_tower_buff_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_tower_buff_uid, v4, (_BYTE)this - 120);
  }
  this->cur_tower_buff_uid = 0;
  std::string::basic_string(&this->cur_tower_level_transaction);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tower_team_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tower_team_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_tower_team_id, v4, (_BYTE)this - 80);
  }
  this->cur_tower_team_id = 1;
  std::unordered_set<unsigned int>::unordered_set(&this->failed_cond_set);
};

// Line 80: range 0000000014402CA2-00000000144030A6
void __cdecl TowerCurLevelRecord::TowerCurLevelRecord(TowerCurLevelRecord *const this, const TowerCurLevelRecord *a2)
{
  uint32_t cur_floor_index; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t cur_level_index; // ecx
  char v6; // dl
  bool v7; // dl
  std::map<unsigned int,unsigned int> *p_tower_buff_map; // rsi
  bool is_floor_finished; // cl
  char v10; // al
  __int64 v11; // rsi
  uint32_t cur_tower_buff_id; // ecx
  char v13; // dl
  bool v14; // dl
  uint32_t cur_tower_buff_uid; // ecx
  char v16; // al
  std::string *p_cur_tower_level_transaction; // rsi
  uint32_t cur_tower_team_id; // ecx
  char v19; // al
  const TowerCurLevelRecord *v20; // [rsp+0h] [rbp-20h]

  v20 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  cur_floor_index = a2->cur_floor_index;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->cur_floor_index = cur_floor_index;
  v4 = (((_BYTE)v20 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->cur_level_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->cur_level_index);
  }
  cur_level_index = v20->cur_level_index;
  v6 = *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->cur_level_index, v4, v7);
  this->cur_level_index = cur_level_index;
  std::vector<TowerTeam>::vector(&this->tower_team_vec, &v20->tower_team_vec);
  std::map<unsigned long,std::map<data::FightPropType,float>>::map(
    &this->mirror_avatar_prop_map,
    &v20->mirror_avatar_prop_map);
  p_tower_buff_map = &v20->tower_buff_map;
  std::map<unsigned int,unsigned int>::map(&this->tower_buff_map, &v20->tower_buff_map);
  if ( *(char *)(((unsigned __int64)&v20->is_floor_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v20->is_floor_finished);
  is_floor_finished = v20->is_floor_finished;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_floor_finished >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_tower_buff_map) = v10 != 0;
    __asan_report_store1(&this->is_floor_finished, p_tower_buff_map, &this->is_floor_finished);
  }
  this->is_floor_finished = is_floor_finished;
  v11 = (((_BYTE)v20 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->cur_tower_buff_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->cur_tower_buff_id);
  }
  cur_tower_buff_id = v20->cur_tower_buff_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_id >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = v13 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v13;
  if ( v14 )
    __asan_report_store4(&this->cur_tower_buff_id, v11, v14);
  this->cur_tower_buff_id = cur_tower_buff_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->cur_tower_buff_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->cur_tower_buff_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->cur_tower_buff_uid);
  }
  cur_tower_buff_uid = v20->cur_tower_buff_uid;
  v16 = *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_uid >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v11) = v16 != 0;
    __asan_report_store4(&this->cur_tower_buff_uid, v11, (_BYTE)this - 120);
  }
  this->cur_tower_buff_uid = cur_tower_buff_uid;
  p_cur_tower_level_transaction = &v20->cur_tower_level_transaction;
  std::string::basic_string(&this->cur_tower_level_transaction, &v20->cur_tower_level_transaction);
  if ( *(_BYTE *)(((unsigned __int64)&v20->cur_tower_team_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->cur_tower_team_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->cur_tower_team_id);
  }
  cur_tower_team_id = v20->cur_tower_team_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->cur_tower_team_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(p_cur_tower_level_transaction) = v19 != 0;
    __asan_report_store4(&this->cur_tower_team_id, p_cur_tower_level_transaction, (_BYTE)this - 80);
  }
  this->cur_tower_team_id = cur_tower_team_id;
  std::unordered_set<unsigned int>::unordered_set(&this->failed_cond_set, &v20->failed_cond_set);
};

// Line 80: range 00000000144030A8-000000001440310A
void __cdecl TowerCurLevelRecord::~TowerCurLevelRecord(TowerCurLevelRecord *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->failed_cond_set);
  std::string::~string(&this->cur_tower_level_transaction);
  std::map<unsigned int,unsigned int>::~map(&this->tower_buff_map);
  std::map<unsigned long,std::map<data::FightPropType,float>>::~map(&this->mirror_avatar_prop_map);
  std::vector<TowerTeam>::~vector(&this->tower_team_vec);
};

// Line 104: range 0000000017481B1A-0000000017481B88
void __cdecl TowerFightStatistic::TowerFightStatistic(TowerFightStatistic *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->avatar_reveal_count_map);
  std::map<unsigned int,unsigned int>::map(&this->kill_count_map);
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->max_single_damage_pair);
  std::map<unsigned int,unsigned int>::map(&this->take_damage_count_map);
  std::map<unsigned int,unsigned int>::map(&this->normal_skill_count_map);
  std::map<unsigned int,unsigned int>::map(&this->energy_skill_count_map);
};

// Line 104: range 00000000144EDD92-00000000144EDDF0
void __cdecl TowerFightStatistic::~TowerFightStatistic(TowerFightStatistic *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->energy_skill_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->normal_skill_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->take_damage_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->kill_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->avatar_reveal_count_map);
};

// Line 120: range 0000000014403380-00000000144033EA
void __cdecl TowerMonthlyCombatRecord::TowerMonthlyCombatRecord(TowerMonthlyCombatRecord *const this)
{
  std::vector<std::pair<unsigned int,unsigned int>>::vector(&this->most_reveal_avatar_vec);
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->most_kill_avatar_pair);
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->highest_dps_avatr_pair);
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->most_take_damage_avatar_pair);
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->most_cast_normal_skill_avatar_pair);
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->most_cast_energy_skill_avatar_pair);
};

// Line 120: range 00000000144033EC-0000000014403406
void __cdecl TowerMonthlyCombatRecord::~TowerMonthlyCombatRecord(TowerMonthlyCombatRecord *const this)
{
  std::vector<std::pair<unsigned int,unsigned int>>::~vector(&this->most_reveal_avatar_vec);
};

// Line 136: range 0000000014403408-00000000144035A2
void __cdecl TowerMonthlySummary::TowerMonthlySummary(TowerMonthlySummary *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->tower_schedule_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->best_floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_floor_index >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->best_floor_index, v2, v3);
  this->best_floor_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_level_index, v2, (_BYTE)this + 8);
  }
  this->best_level_index = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->total_star_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_star_count >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->total_star_count, v4, v5);
  this->total_star_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_passed_floor_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_passed_floor_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_passed_floor_index, v4, (_BYTE)this + 16);
  }
  this->last_passed_floor_index = 0;
  TowerMonthlyCombatRecord::TowerMonthlyCombatRecord(&this->monthly_combat_record);
  if ( *(char *)(((unsigned __int64)&this->is_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_interact, v4, &this->is_interact);
  this->is_interact = 0;
};

// Line 136: range 00000000144B0330-00000000144B0632
void __cdecl TowerMonthlySummary::TowerMonthlySummary(TowerMonthlySummary *const this, TowerMonthlySummary *a2)
{
  uint32_t tower_schedule_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t best_floor_index; // ecx
  char v6; // dl
  bool v7; // dl
  uint32_t best_level_index; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t total_star_count; // ecx
  char v12; // dl
  bool v13; // dl
  uint32_t last_passed_floor_index; // ecx
  char v15; // al
  TowerMonthlyCombatRecord *p_monthly_combat_record; // rsi
  bool is_interact; // cl
  char v18; // al
  TowerMonthlySummary *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  tower_schedule_id = a2->tower_schedule_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->tower_schedule_id = tower_schedule_id;
  v4 = (((_BYTE)v19 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->best_floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->best_floor_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->best_floor_index);
  }
  best_floor_index = v19->best_floor_index;
  v6 = *(_BYTE *)(((unsigned __int64)&this->best_floor_index >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->best_floor_index, v4, v7);
  this->best_floor_index = best_floor_index;
  if ( *(_BYTE *)(((unsigned __int64)&v19->best_level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->best_level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->best_level_index);
  }
  best_level_index = v19->best_level_index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->best_level_index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->best_level_index, v4, (_BYTE)this + 8);
  }
  this->best_level_index = best_level_index;
  v10 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->total_star_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->total_star_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->total_star_count);
  }
  total_star_count = v19->total_star_count;
  v12 = *(_BYTE *)(((unsigned __int64)&this->total_star_count >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = v12 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v12;
  if ( v13 )
    __asan_report_store4(&this->total_star_count, v10, v13);
  this->total_star_count = total_star_count;
  if ( *(_BYTE *)(((unsigned __int64)&v19->last_passed_floor_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->last_passed_floor_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->last_passed_floor_index);
  }
  last_passed_floor_index = v19->last_passed_floor_index;
  v15 = *(_BYTE *)(((unsigned __int64)&this->last_passed_floor_index >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v10) = v15 != 0;
    __asan_report_store4(&this->last_passed_floor_index, v10, (_BYTE)this + 16);
  }
  this->last_passed_floor_index = last_passed_floor_index;
  p_monthly_combat_record = &v19->monthly_combat_record;
  TowerMonthlyCombatRecord::TowerMonthlyCombatRecord(&this->monthly_combat_record, &v19->monthly_combat_record);
  if ( *(char *)(((unsigned __int64)&v19->is_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->is_interact);
  is_interact = v19->is_interact;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_interact >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_monthly_combat_record) = v18 != 0;
    __asan_report_store1(&this->is_interact, p_monthly_combat_record, &this->is_interact);
  }
  this->is_interact = is_interact;
};

// Line 136: range 00000000144035A4-00000000144035C2
void __cdecl TowerMonthlySummary::~TowerMonthlySummary(TowerMonthlySummary *const this)
{
  TowerMonthlyCombatRecord::~TowerMonthlyCombatRecord(&this->monthly_combat_record);
};

// Line 152: range 00000000144EDDF2-00000000144EDEB9
void __cdecl PlayerTowerComp::~PlayerTowerComp(PlayerTowerComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerTowerComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->gadget_hurt_set_);
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->cur_dungeon_scene_wtr_);
  TowerFightStatistic::~TowerFightStatistic(&this->tower_fight_statisic_);
  std::map<unsigned int,TowerMonthlySummary>::~map(&this->tower_monthly_summary_map_);
  TowerCurLevelRecord::~TowerCurLevelRecord(&this->cur_level_record_);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->daily_level_buff_map_);
  std::map<unsigned int,TowerFloorRecord>::~map(&this->tower_floor_record_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 152: range 00000000144EDEBA-00000000144EDEE4
void __cdecl PlayerTowerComp::~PlayerTowerComp(PlayerTowerComp *const this)
{
  PlayerTowerComp::~PlayerTowerComp(this);
  operator delete(this, 0x308uLL);
};

// Line 160: range 0000000017481B8A-0000000017481E69
void __cdecl ZN15PlayerTowerCompCI214PlayerCompBaseER6Player(PlayerTowerComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerTowerComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tower_schedule_id_, a2, (_BYTE)this + 32);
  }
  this->tower_schedule_id_ = 0;
  std::map<unsigned int,TowerFloorRecord>::map(&this->tower_floor_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_daily_reward_time_, a2, (_BYTE)this + 88);
  }
  this->last_daily_reward_time_ = 0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->daily_floor_index_, v3, v4);
  this->daily_floor_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_level_index_, v3, (_BYTE)this + 96);
  }
  this->daily_level_index_ = 0;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->daily_level_buff_map_);
  TowerCurLevelRecord::TowerCurLevelRecord(&this->cur_level_record_);
  std::map<unsigned int,TowerMonthlySummary>::map(&this->tower_monthly_summary_map_);
  TowerFightStatistic::TowerFightStatistic(&this->tower_fight_statisic_);
  if ( *(char *)(((unsigned __int64)&this->is_interact_this_schedule_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_interact_this_schedule_, v3, &this->is_interact_this_schedule_);
  this->is_interact_this_schedule_ = 0;
  std::weak_ptr<DungeonScene>::weak_ptr(&this->cur_dungeon_scene_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_before_enter_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id_before_enter_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id_before_enter_level_, v3, (_BYTE)this - 56);
  }
  this->schedule_id_before_enter_level_ = 0;
  v5 = ((_BYTE)this - 52) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_hurt_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_hurt_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_hurt_, v5, v6);
  this->is_hurt_ = 0;
  v7 = ((_BYTE)this - 51) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_notify_first_pass_after_reenter_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_notify_first_pass_after_reenter_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_notify_first_pass_after_reenter_, v7, v8);
  this->is_notify_first_pass_after_reenter_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_hurt_set_);
};

// Line 169: range 0000000017214016-0000000017214020
uint32_t __cdecl PlayerTowerComp::getType()
{
  return 27;
};

// Line 346: range 00000000131D9CB2-00000000131D9D03
DungeonScenePtr __cdecl PlayerTowerComp::getCurDungeonScene(const PlayerTowerComp *const this)
{
  __int64 v1; // rsi
  DungeonScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)this);
  result._M_ptr = (std::__shared_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 363: range 0000000017D69518-0000000017D6955F
uint32_t __cdecl PlayerTowerComp::getCurrentScheduleIdByGm(const PlayerTowerComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  return this->tower_schedule_id_;
};

// Line 466: range 00000000149EDAC8-00000000149EDADB
const TowerCurLevelRecord *__cdecl PlayerTowerComp::getTowerCurLevelRecord(const PlayerTowerComp *const this)
{
  return &this->cur_level_record_;
};

// Line 569: range 00000000144B0148-00000000144B032F
void __cdecl TowerMonthlyCombatRecord::TowerMonthlyCombatRecord(
        TowerMonthlyCombatRecord *const this,
        TowerMonthlyCombatRecord *a2)
{
  std::vector<std::pair<unsigned int,unsigned int>>::vector(&this->most_reveal_avatar_vec, &a2->most_reveal_avatar_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->most_kill_avatar_pair >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->most_kill_avatar_pair, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->most_kill_avatar_pair >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->most_kill_avatar_pair);
  this->most_kill_avatar_pair = a2->most_kill_avatar_pair;
  if ( *(_BYTE *)(((unsigned __int64)&this->highest_dps_avatr_pair >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->highest_dps_avatr_pair, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->highest_dps_avatr_pair >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->highest_dps_avatr_pair);
  this->highest_dps_avatr_pair = a2->highest_dps_avatr_pair;
  if ( *(_BYTE *)(((unsigned __int64)&this->most_take_damage_avatar_pair >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->most_take_damage_avatar_pair, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->most_take_damage_avatar_pair >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->most_take_damage_avatar_pair);
  this->most_take_damage_avatar_pair = a2->most_take_damage_avatar_pair;
  if ( *(_BYTE *)(((unsigned __int64)&this->most_cast_normal_skill_avatar_pair >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->most_cast_normal_skill_avatar_pair, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->most_cast_normal_skill_avatar_pair >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->most_cast_normal_skill_avatar_pair);
  this->most_cast_normal_skill_avatar_pair = a2->most_cast_normal_skill_avatar_pair;
  if ( *(_BYTE *)(((unsigned __int64)&this->most_cast_energy_skill_avatar_pair >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->most_cast_energy_skill_avatar_pair, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->most_cast_energy_skill_avatar_pair >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->most_cast_energy_skill_avatar_pair);
  this->most_cast_energy_skill_avatar_pair = a2->most_cast_energy_skill_avatar_pair;
};

// Line 569: range 0000000014469850-00000000144698E8
void __cdecl TowerTeam::TowerTeam(TowerTeam *const this, TowerTeam *a2)
{
  uint32_t tower_team_id; // ecx
  char v3; // al
  TowerTeam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  tower_team_id = a2->tower_team_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->tower_team_id = tower_team_id;
  std::vector<unsigned long>::vector(&this->mirror_avatar_guid_vec, &v4->mirror_avatar_guid_vec);
};

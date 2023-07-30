// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/TowerExcelConfig.gen.h

// Line 67: range 000000000D2EBF8A-000000000D2EC029
void __cdecl data::TowerSchedule::TowerSchedule(data::TowerSchedule *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerSchedule + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerSchedule = v2;
  std::vector<unsigned int>::vector(&this->floor_list);
  std::string::basic_string(&this->open_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_timestamp, v1);
  }
  this->open_timestamp = 0;
};

// Line 67: range 000000000D128544-000000000D12865B
void __cdecl data::TowerSchedule::TowerSchedule(data::TowerSchedule *const this, const data::TowerSchedule *a2)
{
  int (**v2)(...); // rdx
  std::string *p_open_time; // rsi
  uint32_t open_timestamp; // ecx
  char v5; // al

  v2 = (int (**)(...))(&`vtable for'data::TowerSchedule + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerSchedule = v2;
  std::vector<unsigned int>::vector(&this->floor_list, &a2->floor_list);
  p_open_time = &a2->open_time;
  std::string::basic_string(&this->open_time, &a2->open_time);
  if ( *(_BYTE *)(((unsigned __int64)&a2->open_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->open_timestamp);
  }
  open_timestamp = a2->open_timestamp;
  v5 = *(_BYTE *)(((unsigned __int64)&this->open_timestamp >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_open_time) = v5 != 0;
    __asan_report_store4(&this->open_timestamp, p_open_time);
  }
  this->open_timestamp = open_timestamp;
};

// Line 70: range 000000000D22A9B4-000000000D22AA15
void __cdecl data::TowerSchedule::~TowerSchedule(data::TowerSchedule *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerSchedule + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerSchedule = v2;
  std::string::~string(&this->open_time);
  std::vector<unsigned int>::~vector(&this->floor_list);
};

// Line 70: range 000000000D22AA16-000000000D22AA40
void __cdecl data::TowerSchedule::~TowerSchedule(data::TowerSchedule *const this)
{
  data::TowerSchedule::~TowerSchedule(this);
  operator delete(this, 0x48uLL);
};

// Line 81: range 000000000D412076-000000000D4121FA
data::TowerStarReward *__cdecl data::TowerStarReward::operator=(
        data::TowerStarReward *const this,
        const data::TowerStarReward *a2)
{
  uint32_t min_star_count; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t reward_id; // ecx
  char v6; // dl
  uint32_t index; // ecx
  char v8; // al
  const data::TowerStarReward *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_star_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_star_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_star_count);
  }
  min_star_count = a2->min_star_count;
  v3 = *(_BYTE *)(((unsigned __int64)&this->min_star_count >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->min_star_count, a2);
  }
  this->min_star_count = min_star_count;
  v4 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->reward_id, v4);
  }
  this->reward_id = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->index);
  }
  index = v10->index;
  v8 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->index, v4);
  }
  this->index = index;
  return this;
};

// Line 81: range 000000000D03A09A-000000000D03A24E
void __cdecl data::TowerStarReward::TowerStarReward(data::TowerStarReward *const this, const data::TowerStarReward *a2)
{
  int (**v2)(...); // rdx
  uint32_t min_star_count; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t reward_id; // ecx
  char v7; // dl
  uint32_t index; // ecx
  char v9; // al
  const data::TowerStarReward *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TowerStarReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerStarReward = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_star_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_star_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_star_count);
  }
  min_star_count = a2->min_star_count;
  v4 = *(_BYTE *)(((unsigned __int64)&this->min_star_count >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->min_star_count, a2);
  }
  this->min_star_count = min_star_count;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->index);
  }
  index = v10->index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->index, v5);
  }
  this->index = index;
};

// Line 84: range 000000000D49275C-000000000D492786
void __cdecl data::TowerStarReward::~TowerStarReward(data::TowerStarReward *const this)
{
  data::TowerStarReward::~TowerStarReward(this);
  operator delete(this, 0x18uLL);
};

// Line 84: range 000000000D49271A-000000000D49275B
void __cdecl data::TowerStarReward::~TowerStarReward(data::TowerStarReward *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerStarReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerStarReward = v2;
};

// Line 95: range 000000000CE1C3E0-000000000CE1C597
void __cdecl data::TowerScheduleExcelConfig::TowerScheduleExcelConfig(data::TowerScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TowerScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerScheduleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  std::vector<unsigned int>::vector(&this->entrance_floor_id);
  std::vector<data::TowerSchedule>::vector(&this->schedules);
  std::string::basic_string(&this->close_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->close_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->close_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->close_timestamp, v1);
  }
  this->close_timestamp = 0;
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_group >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_group >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_group, v3);
  }
  this->reward_group = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->commemorative_reward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->commemorative_reward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->commemorative_reward, v3);
  }
  this->commemorative_reward = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monthly_level_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monthly_level_config_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monthly_level_config_id, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->monthly_level_config_id = 0;
};

// Line 95: range 000000000D375852-000000000D375B8D
void __cdecl data::TowerScheduleExcelConfig::TowerScheduleExcelConfig(
        data::TowerScheduleExcelConfig *const this,
        const data::TowerScheduleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  std::string *p_close_time; // rsi
  uint32_t close_timestamp; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t reward_group; // ecx
  char v10; // dl
  uint32_t commemorative_reward; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t monthly_level_config_id; // ecx
  char v15; // dl
  const data::TowerScheduleExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TowerScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerScheduleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->schedule_id);
  }
  schedule_id = a2->schedule_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->schedule_id, a2);
  }
  this->schedule_id = schedule_id;
  std::vector<unsigned int>::vector(&this->entrance_floor_id, &v16->entrance_floor_id);
  std::vector<data::TowerSchedule>::vector(&this->schedules, &v16->schedules);
  p_close_time = &v16->close_time;
  std::string::basic_string(&this->close_time, &v16->close_time);
  if ( *(_BYTE *)(((unsigned __int64)&v16->close_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->close_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->close_timestamp);
  }
  close_timestamp = v16->close_timestamp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->close_timestamp >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_close_time) = v7 != 0;
    __asan_report_store4(&this->close_timestamp, p_close_time);
  }
  this->close_timestamp = close_timestamp;
  v8 = (((_BYTE)v16 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->reward_group >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->reward_group >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->reward_group);
  }
  reward_group = v16->reward_group;
  v10 = *(_BYTE *)(((unsigned __int64)&this->reward_group >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->reward_group, v8);
  }
  this->reward_group = reward_group;
  if ( *(_BYTE *)(((unsigned __int64)&v16->commemorative_reward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->commemorative_reward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->commemorative_reward);
  }
  commemorative_reward = v16->commemorative_reward;
  v12 = *(_BYTE *)(((unsigned __int64)&this->commemorative_reward >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->commemorative_reward, v8);
  }
  this->commemorative_reward = commemorative_reward;
  v13 = (((_BYTE)v16 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->monthly_level_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->monthly_level_config_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->monthly_level_config_id);
  }
  monthly_level_config_id = v16->monthly_level_config_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->monthly_level_config_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->monthly_level_config_id, v13);
  }
  this->monthly_level_config_id = monthly_level_config_id;
};

// Line 98: range 000000000D49267C-000000000D4926ED
void __cdecl data::TowerScheduleExcelConfig::~TowerScheduleExcelConfig(data::TowerScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerScheduleExcelConfig = v2;
  std::string::~string(&this->close_time);
  std::vector<data::TowerSchedule>::~vector(&this->schedules);
  std::vector<unsigned int>::~vector(&this->entrance_floor_id);
};

// Line 98: range 000000000D4926EE-000000000D492718
void __cdecl data::TowerScheduleExcelConfig::~TowerScheduleExcelConfig(data::TowerScheduleExcelConfig *const this)
{
  data::TowerScheduleExcelConfig::~TowerScheduleExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 116: range 000000000D375CCE-000000000D376076
void __cdecl data::TowerFloorExcelConfig::TowerFloorExcelConfig(
        data::TowerFloorExcelConfig *const this,
        const data::TowerFloorExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t floor_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t floor_index; // ecx
  char v7; // dl
  uint32_t level_group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t override_monster_level; // ecx
  char v12; // dl
  uint32_t team_num; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t unlock_star_count; // ecx
  char v17; // dl
  uint32_t floor_level_config_id; // ecx
  char v19; // al
  const data::TowerFloorExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TowerFloorExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerFloorExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->floor_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->floor_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->floor_id);
  }
  floor_id = a2->floor_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->floor_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->floor_id, a2);
  }
  this->floor_id = floor_id;
  v5 = (((_BYTE)v20 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->floor_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->floor_index);
  }
  floor_index = v20->floor_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->floor_index, v5);
  }
  this->floor_index = floor_index;
  if ( *(_BYTE *)(((unsigned __int64)&v20->level_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->level_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->level_group_id);
  }
  level_group_id = v20->level_group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level_group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level_group_id, v5);
  }
  this->level_group_id = level_group_id;
  v10 = (((_BYTE)v20 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->override_monster_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->override_monster_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->override_monster_level);
  }
  override_monster_level = v20->override_monster_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->override_monster_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->override_monster_level, v10);
  }
  this->override_monster_level = override_monster_level;
  if ( *(_BYTE *)(((unsigned __int64)&v20->team_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->team_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->team_num);
  }
  team_num = v20->team_num;
  v14 = *(_BYTE *)(((unsigned __int64)&this->team_num >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->team_num, v10);
  }
  this->team_num = team_num;
  v15 = (((_BYTE)v20 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->unlock_star_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->unlock_star_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->unlock_star_count);
  }
  unlock_star_count = v20->unlock_star_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->unlock_star_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->unlock_star_count, v15);
  }
  this->unlock_star_count = unlock_star_count;
  if ( *(_BYTE *)(((unsigned __int64)&v20->floor_level_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->floor_level_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->floor_level_config_id);
  }
  floor_level_config_id = v20->floor_level_config_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->floor_level_config_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->floor_level_config_id, v15);
  }
  this->floor_level_config_id = floor_level_config_id;
};

// Line 119: range 000000000D492650-000000000D49267A
void __cdecl data::TowerFloorExcelConfig::~TowerFloorExcelConfig(data::TowerFloorExcelConfig *const this)
{
  data::TowerFloorExcelConfig::~TowerFloorExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 119: range 000000000D49260E-000000000D49264F
void __cdecl data::TowerFloorExcelConfig::~TowerFloorExcelConfig(data::TowerFloorExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerFloorExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerFloorExcelConfig = v2;
};

// Line 136: range 000000000CE6412E-000000000CE64263
data::TowerCondition *__cdecl data::TowerCondition::operator=(
        data::TowerCondition *const this,
        const data::TowerCondition *a2)
{
  data::TowerCondType tower_cond_type; // ecx
  char v3; // al
  std::vector<unsigned int> *p_argument_list; // rsi
  uint32_t index; // ecx
  char v6; // al
  const data::TowerCondition *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tower_cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tower_cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->tower_cond_type);
  }
  tower_cond_type = a2->tower_cond_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->tower_cond_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->tower_cond_type, a2);
  }
  this->tower_cond_type = tower_cond_type;
  std::vector<unsigned int>::operator=(&this->argument_list_upper, &v8->argument_list_upper);
  p_argument_list = &v8->argument_list;
  std::vector<unsigned int>::operator=(&this->argument_list, &v8->argument_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->index);
  }
  index = v8->index;
  v6 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_argument_list) = v6 != 0;
    __asan_report_store4(&this->index, p_argument_list);
  }
  this->index = index;
  return this;
};

// Line 136: range 000000000D2EC1AC-000000000D2EC289
void __cdecl data::TowerCondition::TowerCondition(data::TowerCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tower_cond_type, v1);
  }
  this->tower_cond_type = TOWER_COND_NONE;
  std::vector<unsigned int>::vector(&this->argument_list_upper);
  std::vector<unsigned int>::vector(&this->argument_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index, v1);
  }
  this->index = 0;
};

// Line 136: range 000000000D37558E-000000000D37571A
void __cdecl data::TowerCondition::TowerCondition(data::TowerCondition *const this, const data::TowerCondition *a2)
{
  int (**v2)(...); // rdx
  data::TowerCondType tower_cond_type; // ecx
  char v4; // al
  std::vector<unsigned int> *p_argument_list; // rsi
  uint32_t index; // ecx
  char v7; // al
  const data::TowerCondition *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TowerCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tower_cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tower_cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->tower_cond_type);
  }
  tower_cond_type = a2->tower_cond_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->tower_cond_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->tower_cond_type, a2);
  }
  this->tower_cond_type = tower_cond_type;
  std::vector<unsigned int>::vector(&this->argument_list_upper, &v8->argument_list_upper);
  p_argument_list = &v8->argument_list;
  std::vector<unsigned int>::vector(&this->argument_list, &v8->argument_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->index);
  }
  index = v8->index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_argument_list) = v7 != 0;
    __asan_report_store4(&this->index, p_argument_list);
  }
  this->index = index;
};

// Line 139: range 000000000D24FF44-000000000D24FFA5
void __cdecl data::TowerCondition::~TowerCondition(data::TowerCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerCondition = v2;
  std::vector<unsigned int>::~vector(&this->argument_list);
  std::vector<unsigned int>::~vector(&this->argument_list_upper);
};

// Line 139: range 000000000D24FFA6-000000000D24FFD0
void __cdecl data::TowerCondition::~TowerCondition(data::TowerCondition *const this)
{
  data::TowerCondition::~TowerCondition(this);
  operator delete(this, 0x48uLL);
};

// Line 151: range 000000000D037D6E-000000000D037EAD
void __cdecl data::TowerBuff::TowerBuff(data::TowerBuff *const this, const data::TowerBuff *a2)
{
  int (**v2)(...); // rdx
  uint32_t tower_buff_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t weight; // ecx
  char v7; // dl
  const data::TowerBuff *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TowerBuff + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerBuff = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tower_buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tower_buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->tower_buff_id);
  }
  tower_buff_id = a2->tower_buff_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->tower_buff_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->tower_buff_id, a2);
  }
  this->tower_buff_id = tower_buff_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->weight);
  }
  weight = v8->weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
};

// Line 154: range 000000000D4925E2-000000000D49260C
void __cdecl data::TowerBuff::~TowerBuff(data::TowerBuff *const this)
{
  data::TowerBuff::~TowerBuff(this);
  operator delete(this, 0x10uLL);
};

// Line 154: range 000000000D4925A0-000000000D4925E1
void __cdecl data::TowerBuff::~TowerBuff(data::TowerBuff *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerBuff + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerBuff = v2;
};

// Line 162: range 000000000CE0D4A0-000000000CE0D4F1
void __cdecl data::TowerBuffConfig::TowerBuffConfig(data::TowerBuffConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerBuffConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerBuffConfig = v2;
  std::vector<data::TowerBuff>::vector(&this->tower_buff_list);
};

// Line 162: range 000000000D038432-000000000D038492
void __cdecl data::TowerBuffConfig::TowerBuffConfig(data::TowerBuffConfig *const this, const data::TowerBuffConfig *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerBuffConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerBuffConfig = v2;
  std::vector<data::TowerBuff>::vector(&this->tower_buff_list, &a2->tower_buff_list);
};

// Line 165: range 000000000D492574-000000000D49259E
void __cdecl data::TowerBuffConfig::~TowerBuffConfig(data::TowerBuffConfig *const this)
{
  data::TowerBuffConfig::~TowerBuffConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 165: range 000000000D492522-000000000D492573
void __cdecl data::TowerBuffConfig::~TowerBuffConfig(data::TowerBuffConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerBuffConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerBuffConfig = v2;
  std::vector<data::TowerBuff>::~vector(&this->tower_buff_list);
};

// Line 172: range 000000000CE1C640-000000000CE1C83D
void __cdecl data::TowerLevelExcelConfig::TowerLevelExcelConfig(data::TowerLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TowerLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_group_id, v3);
  }
  this->level_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_index, v3);
  }
  this->level_index = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = 0;
  std::vector<data::TowerCondition>::vector(&this->conds);
  std::vector<std::string>::vector(&this->tower_buff_config_str_list);
  std::vector<data::TowerBuffConfig>::vector(&this->tower_buff_configs);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_level, v4);
  }
  this->monster_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_two_layer >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_two_layer >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->is_two_layer, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->is_two_layer = 0;
};

// Line 172: range 000000000D3761B8-000000000D376578
void __cdecl data::TowerLevelExcelConfig::TowerLevelExcelConfig(
        data::TowerLevelExcelConfig *const this,
        const data::TowerLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level_group_id; // ecx
  char v7; // dl
  uint32_t level_index; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t dungeon_id; // ecx
  char v12; // dl
  std::vector<data::TowerBuffConfig> *p_tower_buff_configs; // rsi
  uint32_t monster_level; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t is_two_layer; // ecx
  char v18; // dl
  const data::TowerLevelExcelConfig *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TowerLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->level_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->level_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->level_group_id);
  }
  level_group_id = v19->level_group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level_group_id, v5);
  }
  this->level_group_id = level_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->level_index);
  }
  level_index = v19->level_index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level_index, v5);
  }
  this->level_index = level_index;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->dungeon_id);
  }
  dungeon_id = v19->dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->dungeon_id, v10);
  }
  this->dungeon_id = dungeon_id;
  std::vector<data::TowerCondition>::vector(&this->conds, &v19->conds);
  std::vector<std::string>::vector(&this->tower_buff_config_str_list, &v19->tower_buff_config_str_list);
  p_tower_buff_configs = &v19->tower_buff_configs;
  std::vector<data::TowerBuffConfig>::vector(&this->tower_buff_configs, &v19->tower_buff_configs);
  if ( *(_BYTE *)(((unsigned __int64)&v19->monster_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->monster_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->monster_level);
  }
  monster_level = v19->monster_level;
  v15 = *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_tower_buff_configs) = v15 != 0;
    __asan_report_store4(&this->monster_level, p_tower_buff_configs);
  }
  this->monster_level = monster_level;
  v16 = (((_BYTE)v19 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->is_two_layer >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->is_two_layer >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->is_two_layer);
  }
  is_two_layer = v19->is_two_layer;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_two_layer >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->is_two_layer, v16);
  }
  this->is_two_layer = is_two_layer;
};

// Line 175: range 000000000D492484-000000000D4924F5
void __cdecl data::TowerLevelExcelConfig::~TowerLevelExcelConfig(data::TowerLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerLevelExcelConfig = v2;
  std::vector<data::TowerBuffConfig>::~vector(&this->tower_buff_configs);
  std::vector<std::string>::~vector(&this->tower_buff_config_str_list);
  std::vector<data::TowerCondition>::~vector(&this->conds);
};

// Line 175: range 000000000D4924F6-000000000D492520
void __cdecl data::TowerLevelExcelConfig::~TowerLevelExcelConfig(data::TowerLevelExcelConfig *const this)
{
  data::TowerLevelExcelConfig::~TowerLevelExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 194: range 000000000D3766BA-000000000D37686E
void __cdecl data::TowerBuffExcelConfig::TowerBuffExcelConfig(
        data::TowerBuffExcelConfig *const this,
        const data::TowerBuffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t tower_buff_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::TowerBuffLastingType lasting_type; // ecx
  char v7; // dl
  uint32_t buff_id; // ecx
  char v9; // al
  const data::TowerBuffExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TowerBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerBuffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tower_buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tower_buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->tower_buff_id);
  }
  tower_buff_id = a2->tower_buff_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->tower_buff_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->tower_buff_id, a2);
  }
  this->tower_buff_id = tower_buff_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->lasting_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->lasting_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->lasting_type);
  }
  lasting_type = v10->lasting_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->lasting_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->lasting_type, v5);
  }
  this->lasting_type = lasting_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->buff_id);
  }
  buff_id = v10->buff_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->buff_id, v5);
  }
  this->buff_id = buff_id;
};

// Line 197: range 000000000D492458-000000000D492482
void __cdecl data::TowerBuffExcelConfig::~TowerBuffExcelConfig(data::TowerBuffExcelConfig *const this)
{
  data::TowerBuffExcelConfig::~TowerBuffExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 197: range 000000000D492416-000000000D492457
void __cdecl data::TowerBuffExcelConfig::~TowerBuffExcelConfig(data::TowerBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerBuffExcelConfig = v2;
};

// Line 210: range 000000000D3769B0-000000000D376AEF
void __cdecl data::TowerSkipFloorExcelConfig::TowerSkipFloorExcelConfig(
        data::TowerSkipFloorExcelConfig *const this,
        const data::TowerSkipFloorExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t prev_level_index; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t cur_level_index; // ecx
  char v7; // dl
  const data::TowerSkipFloorExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TowerSkipFloorExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerSkipFloorExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prev_level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->prev_level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->prev_level_index);
  }
  prev_level_index = a2->prev_level_index;
  v4 = *(_BYTE *)(((unsigned __int64)&this->prev_level_index >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->prev_level_index, a2);
  }
  this->prev_level_index = prev_level_index;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->cur_level_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->cur_level_index);
  }
  cur_level_index = v8->cur_level_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cur_level_index, v5);
  }
  this->cur_level_index = cur_level_index;
};

// Line 213: range 000000000D4923EA-000000000D492414
void __cdecl data::TowerSkipFloorExcelConfig::~TowerSkipFloorExcelConfig(data::TowerSkipFloorExcelConfig *const this)
{
  data::TowerSkipFloorExcelConfig::~TowerSkipFloorExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 213: range 000000000D4923A8-000000000D4923E9
void __cdecl data::TowerSkipFloorExcelConfig::~TowerSkipFloorExcelConfig(data::TowerSkipFloorExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerSkipFloorExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerSkipFloorExcelConfig = v2;
};

// Line 225: range 000000000D12CE14-000000000D12D0C8
data::TowerRewardExcelConfig *__cdecl data::TowerRewardExcelConfig::operator=(
        data::TowerRewardExcelConfig *const this,
        const data::TowerRewardExcelConfig *a2)
{
  uint32_t reward_group; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t floor; // ecx
  char v6; // dl
  uint32_t reward_id3_stars; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t reward_id6_stars; // ecx
  char v11; // dl
  uint32_t reward_id9_stars; // ecx
  char v13; // al
  const data::TowerRewardExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reward_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reward_group);
  }
  reward_group = a2->reward_group;
  v3 = *(_BYTE *)(((unsigned __int64)&this->reward_group >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->reward_group, a2);
  }
  this->reward_group = reward_group;
  v4 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->floor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->floor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->floor);
  }
  floor = v15->floor;
  v6 = *(_BYTE *)(((unsigned __int64)&this->floor >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->floor, v4);
  }
  this->floor = floor;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_id3_stars >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->reward_id3_stars >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->reward_id3_stars);
  }
  reward_id3_stars = v15->reward_id3_stars;
  v8 = *(_BYTE *)(((unsigned __int64)&this->reward_id3_stars >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->reward_id3_stars, v4);
  }
  this->reward_id3_stars = reward_id3_stars;
  v9 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_id6_stars >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->reward_id6_stars >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->reward_id6_stars);
  }
  reward_id6_stars = v15->reward_id6_stars;
  v11 = *(_BYTE *)(((unsigned __int64)&this->reward_id6_stars >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->reward_id6_stars, v9);
  }
  this->reward_id6_stars = reward_id6_stars;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_id9_stars >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->reward_id9_stars >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->reward_id9_stars);
  }
  reward_id9_stars = v15->reward_id9_stars;
  v13 = *(_BYTE *)(((unsigned __int64)&this->reward_id9_stars >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->reward_id9_stars, v9);
  }
  this->reward_id9_stars = reward_id9_stars;
  std::vector<data::TowerStarReward>::operator=(&this->floor_rewards, &v15->floor_rewards);
  std::vector<unsigned int>::operator=(&this->reward_id_room, &v15->reward_id_room);
  return this;
};

// Line 225: range 000000000CE1C892-000000000CE1CA39
void __cdecl data::TowerRewardExcelConfig::TowerRewardExcelConfig(data::TowerRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TowerRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_group, v1);
  }
  this->reward_group = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->floor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->floor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->floor, v3);
  }
  this->floor = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id3_stars >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id3_stars >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id3_stars, v3);
  }
  this->reward_id3_stars = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id6_stars >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id6_stars >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id6_stars, v4);
  }
  this->reward_id6_stars = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id9_stars >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id9_stars >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id9_stars, v4);
  }
  this->reward_id9_stars = 0;
  std::vector<data::TowerStarReward>::vector(&this->floor_rewards);
  std::vector<unsigned int>::vector(&this->reward_id_room);
};

// Line 225: range 000000000D03AE00-000000000D03B10B
void __cdecl data::TowerRewardExcelConfig::TowerRewardExcelConfig(
        data::TowerRewardExcelConfig *const this,
        const data::TowerRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t reward_group; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t floor; // ecx
  char v7; // dl
  uint32_t reward_id3_stars; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t reward_id6_stars; // ecx
  char v12; // dl
  uint32_t reward_id9_stars; // ecx
  char v14; // al
  const data::TowerRewardExcelConfig *v15; // [rsp+0h] [rbp-20h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TowerRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TowerRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reward_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reward_group);
  }
  reward_group = a2->reward_group;
  v4 = *(_BYTE *)(((unsigned __int64)&this->reward_group >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->reward_group, a2);
  }
  this->reward_group = reward_group;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->floor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->floor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->floor);
  }
  floor = v15->floor;
  v7 = *(_BYTE *)(((unsigned __int64)&this->floor >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->floor, v5);
  }
  this->floor = floor;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_id3_stars >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->reward_id3_stars >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->reward_id3_stars);
  }
  reward_id3_stars = v15->reward_id3_stars;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id3_stars >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id3_stars, v5);
  }
  this->reward_id3_stars = reward_id3_stars;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_id6_stars >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->reward_id6_stars >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->reward_id6_stars);
  }
  reward_id6_stars = v15->reward_id6_stars;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id6_stars >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->reward_id6_stars, v10);
  }
  this->reward_id6_stars = reward_id6_stars;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_id9_stars >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->reward_id9_stars >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->reward_id9_stars);
  }
  reward_id9_stars = v15->reward_id9_stars;
  v14 = *(_BYTE *)(((unsigned __int64)&this->reward_id9_stars >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->reward_id9_stars, v10);
  }
  this->reward_id9_stars = reward_id9_stars;
  std::vector<data::TowerStarReward>::vector(&this->floor_rewards, &v15->floor_rewards);
  std::vector<unsigned int>::vector(&this->reward_id_room, &v15->reward_id_room);
};

// Line 228: range 000000000D49237C-000000000D4923A6
void __cdecl data::TowerRewardExcelConfig::~TowerRewardExcelConfig(data::TowerRewardExcelConfig *const this)
{
  data::TowerRewardExcelConfig::~TowerRewardExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 228: range 000000000D49231A-000000000D49237B
void __cdecl data::TowerRewardExcelConfig::~TowerRewardExcelConfig(data::TowerRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TowerRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TowerRewardExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->reward_id_room);
  std::vector<data::TowerStarReward>::~vector(&this->floor_rewards);
};

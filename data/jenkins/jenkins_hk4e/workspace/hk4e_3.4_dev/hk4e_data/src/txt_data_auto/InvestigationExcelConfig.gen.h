// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/InvestigationExcelConfig.gen.h

// Line 116: range 0000000014761528-0000000014761740
void __cdecl data::InvestigationConfig::InvestigationConfig(data::InvestigationConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::InvestigationConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InvestigationConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id, v3);
  }
  this->city_id = 0;
  std::vector<unsigned int>::vector(&this->next_investigation_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_open_state_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_open_state_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_open_state_type, v3);
  }
  this->unlock_open_state_type = OPEN_STATE_NONE;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_level, v4);
  }
  this->unlock_level = 0;
  if ( *(char *)(((unsigned __int64)&this->is_reward_empty >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reward_empty, v4, &this->is_reward_empty);
  this->is_reward_empty = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->investigation_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->investigation_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->investigation_type, v5);
  }
  this->investigation_type = INVESTIGATION_ADVENTURE;
};

// Line 116: range 0000000014D41AE4-0000000014D41EA8
void __cdecl data::InvestigationConfig::InvestigationConfig(
        data::InvestigationConfig *const this,
        const data::InvestigationConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_next_investigation_id_list; // rsi
  data::OpenStateType unlock_open_state_type; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t unlock_level; // ecx
  char v13; // dl
  bool is_reward_empty; // cl
  char v15; // al
  __int64 v16; // rsi
  uint32_t reward_id; // ecx
  char v18; // dl
  data::InvestigationType investigation_type; // ecx
  char v20; // al
  const data::InvestigationConfig *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InvestigationConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InvestigationConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->city_id);
  }
  city_id = v21->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  p_next_investigation_id_list = &v21->next_investigation_id_list;
  std::vector<unsigned int>::vector(&this->next_investigation_id_list, &v21->next_investigation_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->unlock_open_state_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->unlock_open_state_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->unlock_open_state_type);
  }
  unlock_open_state_type = v21->unlock_open_state_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->unlock_open_state_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_next_investigation_id_list) = v10 != 0;
    __asan_report_store4(&this->unlock_open_state_type, p_next_investigation_id_list);
  }
  this->unlock_open_state_type = unlock_open_state_type;
  v11 = (((_BYTE)v21 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->unlock_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->unlock_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->unlock_level);
  }
  unlock_level = v21->unlock_level;
  v13 = *(_BYTE *)(((unsigned __int64)&this->unlock_level >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
    __asan_report_store4(&this->unlock_level, v11);
  this->unlock_level = unlock_level;
  if ( *(char *)(((unsigned __int64)&v21->is_reward_empty >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v21->is_reward_empty, v11, &v21->is_reward_empty);
  is_reward_empty = v21->is_reward_empty;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_reward_empty >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store1(&this->is_reward_empty, v11, &this->is_reward_empty);
  }
  this->is_reward_empty = is_reward_empty;
  v16 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->reward_id);
  }
  reward_id = v21->reward_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->reward_id, v16);
  }
  this->reward_id = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->investigation_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->investigation_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->investigation_type);
  }
  investigation_type = v21->investigation_type;
  v20 = *(_BYTE *)(((unsigned __int64)&this->investigation_type >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->investigation_type, v16);
  }
  this->investigation_type = investigation_type;
};

// Line 119: range 0000000014DEA4E2-0000000014DEA50C
void __cdecl data::InvestigationConfig::~InvestigationConfig(data::InvestigationConfig *const this)
{
  data::InvestigationConfig::~InvestigationConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 119: range 0000000014DEA490-0000000014DEA4E1
void __cdecl data::InvestigationConfig::~InvestigationConfig(data::InvestigationConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InvestigationConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InvestigationConfig = v2;
  std::vector<unsigned int>::~vector(&this->next_investigation_id_list);
};

// Line 137: range 0000000014761742-0000000014761813
void __cdecl data::InvestigationTargetConfig::InvestigationTargetConfig(data::InvestigationTargetConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::InvestigationTargetConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->investigation_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->investigation_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->investigation_id, v3);
  }
  this->investigation_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
};

// Line 137: range 0000000014D41FEA-0000000014D4213C
void __cdecl data::InvestigationTargetConfig::InvestigationTargetConfig(
        data::InvestigationTargetConfig *const this,
        const data::InvestigationTargetConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t investigation_id; // ecx
  char v5; // dl
  uint32_t reward_id; // ecx
  char v7; // al

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::InvestigationTargetConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->investigation_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->investigation_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->investigation_id);
  }
  investigation_id = a2->investigation_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->investigation_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->investigation_id, v3);
  }
  this->investigation_id = investigation_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reward_id);
  }
  reward_id = a2->reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = reward_id;
};

// Line 141: range 0000000014DEA464-0000000014DEA48E
void __cdecl data::InvestigationTargetConfig::~InvestigationTargetConfig(data::InvestigationTargetConfig *const this)
{
  data::InvestigationTargetConfig::~InvestigationTargetConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 141: range 0000000014DEA416-0000000014DEA463
void __cdecl data::InvestigationTargetConfig::~InvestigationTargetConfig(data::InvestigationTargetConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InvestigationTargetConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};

// Line 153: range 0000000014761814-00000000147618D9
void __cdecl data::InvestigationMonsterMapMarkCreateCondition::InvestigationMonsterMapMarkCreateCondition(
        data::InvestigationMonsterMapMarkCreateCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InvestigationMonsterMapMarkCreateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InvestigationMonsterMapMarkCreateCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->condition_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->condition_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->condition_type, v1);
  }
  this->condition_type = Invalid_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->condition_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->condition_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->condition_param, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->condition_param = 0;
};

// Line 153: range 0000000014D4227E-0000000014D423BD
void __cdecl data::InvestigationMonsterMapMarkCreateCondition::InvestigationMonsterMapMarkCreateCondition(
        data::InvestigationMonsterMapMarkCreateCondition *const this,
        const data::InvestigationMonsterMapMarkCreateCondition *a2)
{
  int (**v2)(...); // rdx
  data::InvestigationMonsterMapMarkCreateConditionType condition_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t condition_param; // ecx
  char v7; // dl
  const data::InvestigationMonsterMapMarkCreateCondition *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InvestigationMonsterMapMarkCreateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InvestigationMonsterMapMarkCreateCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->condition_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->condition_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->condition_type);
  }
  condition_type = a2->condition_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->condition_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->condition_type, a2);
  }
  this->condition_type = condition_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->condition_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->condition_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->condition_param);
  }
  condition_param = v8->condition_param;
  v7 = *(_BYTE *)(((unsigned __int64)&this->condition_param >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->condition_param, v5);
  }
  this->condition_param = condition_param;
};

// Line 156: range 0000000014DEA3EA-0000000014DEA414
void __cdecl data::InvestigationMonsterMapMarkCreateCondition::~InvestigationMonsterMapMarkCreateCondition(
        data::InvestigationMonsterMapMarkCreateCondition *const this)
{
  data::InvestigationMonsterMapMarkCreateCondition::~InvestigationMonsterMapMarkCreateCondition(this);
  operator delete(this, 0x10uLL);
};

// Line 156: range 0000000014DEA3A8-0000000014DEA3E9
void __cdecl data::InvestigationMonsterMapMarkCreateCondition::~InvestigationMonsterMapMarkCreateCondition(
        data::InvestigationMonsterMapMarkCreateCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InvestigationMonsterMapMarkCreateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InvestigationMonsterMapMarkCreateCondition = v2;
};

// Line 166: range 00000000147618DA-0000000014761B84
void __cdecl data::InvestigationMonsterConfig::InvestigationMonsterConfig(data::InvestigationMonsterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::InvestigationMonsterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InvestigationMonsterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id, v3);
  }
  this->city_id = 0;
  std::vector<unsigned int>::vector(&this->monster_id_list);
  std::vector<unsigned int>::vector(&this->group_id_list);
  std::string::basic_string(&this->exist_group_variable);
  if ( *(char *)(((unsigned __int64)&this->is_use_group_position >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_group_position, v3, &this->is_use_group_position);
  this->is_use_group_position = 0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_parent_quest_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_parent_quest_id, v4);
  }
  this->unlock_parent_quest_id = 0;
  std::vector<unsigned int>::vector(&this->unlock_wq_parent_quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active_unlock_quest_activity_id, v4);
  }
  this->active_unlock_quest_activity_id = 0;
  v5 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_preview_id, v5);
  }
  this->reward_preview_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_mark_create_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_mark_create_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->map_mark_create_type, v5);
  }
  this->map_mark_create_type = AfterUnlock;
  data::InvestigationMonsterMapMarkCreateCondition::InvestigationMonsterMapMarkCreateCondition(&this->map_mark_create_condition);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_category >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_category >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_category, v5);
  }
  this->monster_category = All_5;
};

// Line 166: range 0000000014D423BE-0000000014D428DD
void __cdecl data::InvestigationMonsterConfig::InvestigationMonsterConfig(
        data::InvestigationMonsterConfig *const this,
        const data::InvestigationMonsterConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  std::string *p_exist_group_variable; // rsi
  bool is_use_group_position; // cl
  char v10; // al
  __int64 v11; // rsi
  uint32_t unlock_parent_quest_id; // ecx
  char v13; // dl
  std::vector<unsigned int> *p_unlock_wq_parent_quest_id_list; // rsi
  uint32_t active_unlock_quest_activity_id; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t reward_preview_id; // ecx
  char v19; // dl
  data::InvestigationMonsterMapMarkCreateType map_mark_create_type; // ecx
  char v21; // al
  data::InvestigationMonsterMapMarkCreateCondition *p_map_mark_create_condition; // rsi
  data::MonsterCategory monster_category; // ecx
  char v24; // al
  const data::InvestigationMonsterConfig *v25; // [rsp+0h] [rbp-20h]

  v25 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InvestigationMonsterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InvestigationMonsterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v25 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->city_id);
  }
  city_id = v25->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  std::vector<unsigned int>::vector(&this->monster_id_list, &v25->monster_id_list);
  std::vector<unsigned int>::vector(&this->group_id_list, &v25->group_id_list);
  p_exist_group_variable = &v25->exist_group_variable;
  std::string::basic_string(&this->exist_group_variable, &v25->exist_group_variable);
  if ( *(char *)(((unsigned __int64)&v25->is_use_group_position >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v25->is_use_group_position, p_exist_group_variable, &v25->is_use_group_position);
  is_use_group_position = v25->is_use_group_position;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_use_group_position >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_exist_group_variable) = v10 != 0;
    __asan_report_store1(&this->is_use_group_position, p_exist_group_variable, &this->is_use_group_position);
  }
  this->is_use_group_position = is_use_group_position;
  v11 = (((_BYTE)v25 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->unlock_parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->unlock_parent_quest_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->unlock_parent_quest_id);
  }
  unlock_parent_quest_id = v25->unlock_parent_quest_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->unlock_parent_quest_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->unlock_parent_quest_id, v11);
  }
  this->unlock_parent_quest_id = unlock_parent_quest_id;
  p_unlock_wq_parent_quest_id_list = &v25->unlock_wq_parent_quest_id_list;
  std::vector<unsigned int>::vector(&this->unlock_wq_parent_quest_id_list, &v25->unlock_wq_parent_quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v25->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->active_unlock_quest_activity_id);
  }
  active_unlock_quest_activity_id = v25->active_unlock_quest_activity_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->active_unlock_quest_activity_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_unlock_wq_parent_quest_id_list) = v16 != 0;
    __asan_report_store4(&this->active_unlock_quest_activity_id, p_unlock_wq_parent_quest_id_list);
  }
  this->active_unlock_quest_activity_id = active_unlock_quest_activity_id;
  v17 = (((_BYTE)v25 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->reward_preview_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->reward_preview_id);
  }
  reward_preview_id = v25->reward_preview_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->reward_preview_id, v17);
  }
  this->reward_preview_id = reward_preview_id;
  if ( *(_BYTE *)(((unsigned __int64)&v25->map_mark_create_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->map_mark_create_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->map_mark_create_type);
  }
  map_mark_create_type = v25->map_mark_create_type;
  v21 = *(_BYTE *)(((unsigned __int64)&this->map_mark_create_type >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v17) = v21 != 0;
    __asan_report_store4(&this->map_mark_create_type, v17);
  }
  this->map_mark_create_type = map_mark_create_type;
  p_map_mark_create_condition = &v25->map_mark_create_condition;
  data::InvestigationMonsterMapMarkCreateCondition::InvestigationMonsterMapMarkCreateCondition(
    &this->map_mark_create_condition,
    &v25->map_mark_create_condition);
  if ( *(_BYTE *)(((unsigned __int64)&v25->monster_category >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->monster_category >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->monster_category);
  }
  monster_category = v25->monster_category;
  v24 = *(_BYTE *)(((unsigned __int64)&this->monster_category >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(p_map_mark_create_condition) = v24 != 0;
    __asan_report_store4(&this->monster_category, p_map_mark_create_condition);
  }
  this->monster_category = monster_category;
};

// Line 169: range 0000000014DEA2E8-0000000014DEA37B
void __cdecl data::InvestigationMonsterConfig::~InvestigationMonsterConfig(
        data::InvestigationMonsterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InvestigationMonsterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InvestigationMonsterConfig = v2;
  data::InvestigationMonsterMapMarkCreateCondition::~InvestigationMonsterMapMarkCreateCondition(&this->map_mark_create_condition);
  std::vector<unsigned int>::~vector(&this->unlock_wq_parent_quest_id_list);
  std::string::~string(&this->exist_group_variable);
  std::vector<unsigned int>::~vector(&this->group_id_list);
  std::vector<unsigned int>::~vector(&this->monster_id_list);
};

// Line 169: range 0000000014DEA37C-0000000014DEA3A6
void __cdecl data::InvestigationMonsterConfig::~InvestigationMonsterConfig(
        data::InvestigationMonsterConfig *const this)
{
  data::InvestigationMonsterConfig::~InvestigationMonsterConfig(this);
  operator delete(this, 0xA8uLL);
};

// Line 192: range 0000000014761B86-0000000014761C5B
void __cdecl data::InvestigationDungeonConfig::InvestigationDungeonConfig(data::InvestigationDungeonConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InvestigationDungeonConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InvestigationDungeonConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entrance_id, v1);
  }
  this->entrance_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->city_id = 0;
  std::vector<unsigned int>::vector(&this->dungeon_id_list);
};

// Line 192: range 0000000014D42A1E-0000000014D42B78
void __cdecl data::InvestigationDungeonConfig::InvestigationDungeonConfig(
        data::InvestigationDungeonConfig *const this,
        const data::InvestigationDungeonConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t entrance_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  const data::InvestigationDungeonConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InvestigationDungeonConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InvestigationDungeonConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entrance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->entrance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->entrance_id);
  }
  entrance_id = a2->entrance_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->entrance_id, a2);
  }
  this->entrance_id = entrance_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->city_id);
  }
  city_id = v8->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  std::vector<unsigned int>::vector(&this->dungeon_id_list, &v8->dungeon_id_list);
};

// Line 195: range 0000000014DEA2BC-0000000014DEA2E6
void __cdecl data::InvestigationDungeonConfig::~InvestigationDungeonConfig(
        data::InvestigationDungeonConfig *const this)
{
  data::InvestigationDungeonConfig::~InvestigationDungeonConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 195: range 0000000014DEA26A-0000000014DEA2BB
void __cdecl data::InvestigationDungeonConfig::~InvestigationDungeonConfig(
        data::InvestigationDungeonConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InvestigationDungeonConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InvestigationDungeonConfig = v2;
  std::vector<unsigned int>::~vector(&this->dungeon_id_list);
};

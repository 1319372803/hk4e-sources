// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/DungeonExcelConfig.gen.h

// Line 48: range 000000001370837C-00000000137083CD
void __cdecl data::DungeonList::~DungeonList(data::DungeonList *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonList + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonList = v2;
  std::vector<unsigned int>::~vector(&this->dungeon_list);
};

// Line 75: range 000000001377CEFA-000000001377CF5A
void __cdecl data::DungeonList::DungeonList(data::DungeonList *const this, const data::DungeonList *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonList + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonList = v2;
  std::vector<unsigned int>::vector(&this->dungeon_list, &a2->dungeon_list);
};

// Line 139: range 000000001374A35A-000000001374A3AB
void __cdecl data::DungeonList::DungeonList(data::DungeonList *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonList + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonList = v2;
  std::vector<unsigned int>::vector(&this->dungeon_list);
};

// Line 500: range 00000000135AFBFC-00000000135B0440
void __cdecl data::DungeonExcelConfig::DungeonExcelConfig(data::DungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = DUNGEON_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_type, v3);
  }
  this->sub_type = DUNGEON_SUB_NONE;
  v4 = ((_BYTE)this + 20) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_dynamic_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_dynamic_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_dynamic_level, v4, v5);
  this->is_dynamic_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->serial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->serial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->serial_id, v4);
  }
  this->serial_id = 0;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->play_type, v6);
  }
  this->play_type = DUNGEON_PLAY_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v6);
  }
  this->scene_id = 0;
  v7 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->event_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->event_interval, v7);
  }
  this->event_interval = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->involve_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->involve_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->involve_type, v7);
  }
  this->involve_type = INVOLVE_NONE;
  v8 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_level, v8);
  }
  this->show_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_limit_type, v8);
  }
  this->avatar_limit_type = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_level, v9);
  }
  this->limit_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_revise >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_revise >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_revise, v9);
  }
  this->level_revise = 0;
  v10 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prev_dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prev_dungeon_id, v10);
  }
  this->prev_dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->require_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->require_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->require_avatar_id, v10);
  }
  this->require_avatar_id = 0;
  v11 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pass_cond >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pass_cond >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pass_cond, v11);
  }
  this->pass_cond = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pass_jump_dungeon >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pass_jump_dungeon >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pass_jump_dungeon, v11);
  }
  this->pass_jump_dungeon = 0;
  v12 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_interval_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_interval_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revive_interval_time, v12);
  }
  this->revive_interval_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revive_max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revive_max_count, v12);
  }
  this->revive_max_count = 0;
  v13 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_enter_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_enter_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_enter_count, v13);
  }
  this->day_enter_count = 0;
  std::vector<data::IdCountConfig>::vector(&this->enter_cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_pass_reward_id, v13);
  }
  this->first_pass_reward_id = 0;
  v14 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_countdown_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->settle_countdown_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->settle_countdown_time, v14);
  }
  this->settle_countdown_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fail_settle_countdown_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fail_settle_countdown_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fail_settle_countdown_time, v14);
  }
  this->fail_settle_countdown_time = 0;
  v15 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quit_settle_countdown_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quit_settle_countdown_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quit_settle_countdown_time, v15);
  }
  this->quit_settle_countdown_time = 0;
  std::vector<data::SettleShowType>::vector(&this->settle_shows);
  if ( *(char *)(((unsigned __int64)&this->is_ban_die_option_revive_after_settle >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_ban_die_option_revive_after_settle,
      v15,
      &this->is_ban_die_option_revive_after_settle);
  this->is_ban_die_option_revive_after_settle = 0;
  v16 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_cost_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_cost_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->statue_cost_id, v16);
  }
  this->statue_cost_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_cost_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->statue_cost_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->statue_cost_count, v16);
  }
  this->statue_cost_count = 0;
  v17 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_drop >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->statue_drop, v17);
  }
  this->statue_drop = 0;
  std::map<unsigned int,unsigned int>::map(&this->level_config_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v17);
  }
  this->city_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->state_type, (((_BYTE)this - 36) & 7u) + 3);
  }
  this->state_type = DUNGEON_STATE_NONE;
};

// Line 500: range 000000001377CFDE-000000001377DF93
void __cdecl data::DungeonExcelConfig::DungeonExcelConfig(
        data::DungeonExcelConfig *const this,
        const data::DungeonExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::DungeonType type; // ecx
  char v7; // dl
  data::DungeonSubType sub_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_dynamic_level; // cl
  char v13; // dl
  __int64 v14; // rdx
  uint32_t serial_id; // ecx
  char v16; // al
  __int64 v17; // rsi
  data::DungeonPlayType play_type; // ecx
  char v19; // dl
  uint32_t scene_id; // ecx
  char v21; // al
  __int64 v22; // rsi
  uint32_t event_interval; // ecx
  char v24; // dl
  data::InvolveType involve_type; // ecx
  char v26; // al
  __int64 v27; // rsi
  uint32_t show_level; // ecx
  char v29; // dl
  uint32_t avatar_limit_type; // ecx
  char v31; // al
  __int64 v32; // rsi
  uint32_t limit_level; // ecx
  char v34; // dl
  int32_t level_revise; // ecx
  char v36; // al
  __int64 v37; // rsi
  uint32_t prev_dungeon_id; // ecx
  char v39; // dl
  uint32_t require_avatar_id; // ecx
  char v41; // al
  __int64 v42; // rsi
  uint32_t pass_cond; // ecx
  char v44; // dl
  uint32_t pass_jump_dungeon; // ecx
  char v46; // al
  __int64 v47; // rsi
  uint32_t revive_interval_time; // ecx
  char v49; // dl
  uint32_t revive_max_count; // ecx
  char v51; // al
  __int64 v52; // rsi
  uint32_t day_enter_count; // ecx
  char v54; // dl
  std::vector<data::IdCountConfig> *p_enter_cost_items; // rsi
  uint32_t first_pass_reward_id; // ecx
  char v57; // al
  __int64 v58; // rsi
  uint32_t settle_countdown_time; // ecx
  char v60; // dl
  uint32_t fail_settle_countdown_time; // ecx
  char v62; // al
  __int64 v63; // rsi
  uint32_t quit_settle_countdown_time; // ecx
  char v65; // dl
  std::vector<data::SettleShowType> *p_settle_shows; // rsi
  bool is_ban_die_option_revive_after_settle; // cl
  char v68; // al
  __int64 v69; // rsi
  uint32_t statue_cost_id; // ecx
  char v71; // dl
  uint32_t statue_cost_count; // ecx
  char v73; // al
  __int64 v74; // rsi
  uint32_t statue_drop; // ecx
  char v76; // dl
  std::map<unsigned int,unsigned int> *p_level_config_map; // rsi
  uint32_t city_id; // ecx
  char v79; // al
  __int64 v80; // rsi
  data::DungeonStateType state_type; // ecx
  char v82; // dl
  const data::DungeonExcelConfig *v83; // [rsp+0h] [rbp-20h]

  v83 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonExcelConfig = v2;
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
  v5 = (((_BYTE)v83 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->type);
  }
  type = v83->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v83->sub_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->sub_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->sub_type);
  }
  sub_type = v83->sub_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->sub_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->sub_type, v5);
  }
  this->sub_type = sub_type;
  v10 = ((_BYTE)v83 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v83->is_dynamic_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v83->is_dynamic_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v83->is_dynamic_level, v10, v11);
  is_dynamic_level = v83->is_dynamic_level;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_dynamic_level >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_dynamic_level, v10, v14);
  this->is_dynamic_level = is_dynamic_level;
  if ( *(_BYTE *)(((unsigned __int64)&v83->serial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->serial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->serial_id);
  }
  serial_id = v83->serial_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->serial_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->serial_id, v10);
  }
  this->serial_id = serial_id;
  v17 = (((_BYTE)v83 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->play_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->play_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->play_type);
  }
  play_type = v83->play_type;
  v19 = *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->play_type, v17);
  }
  this->play_type = play_type;
  if ( *(_BYTE *)(((unsigned __int64)&v83->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->scene_id);
  }
  scene_id = v83->scene_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v17) = v21 != 0;
    __asan_report_store4(&this->scene_id, v17);
  }
  this->scene_id = scene_id;
  v22 = (((_BYTE)v83 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->event_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->event_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->event_interval);
  }
  event_interval = v83->event_interval;
  v24 = *(_BYTE *)(((unsigned __int64)&this->event_interval >> 3) + 0x7FFF8000);
  if ( v24 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v24 )
  {
    LOBYTE(v22) = v24 != 0;
    __asan_report_store4(&this->event_interval, v22);
  }
  this->event_interval = event_interval;
  if ( *(_BYTE *)(((unsigned __int64)&v83->involve_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->involve_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->involve_type);
  }
  involve_type = v83->involve_type;
  v26 = *(_BYTE *)(((unsigned __int64)&this->involve_type >> 3) + 0x7FFF8000);
  if ( v26 != 0 && v26 <= 3 )
  {
    LOBYTE(v22) = v26 != 0;
    __asan_report_store4(&this->involve_type, v22);
  }
  this->involve_type = involve_type;
  v27 = (((_BYTE)v83 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->show_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->show_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->show_level);
  }
  show_level = v83->show_level;
  v29 = *(_BYTE *)(((unsigned __int64)&this->show_level >> 3) + 0x7FFF8000);
  if ( v29 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v29 )
  {
    LOBYTE(v27) = v29 != 0;
    __asan_report_store4(&this->show_level, v27);
  }
  this->show_level = show_level;
  if ( *(_BYTE *)(((unsigned __int64)&v83->avatar_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->avatar_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->avatar_limit_type);
  }
  avatar_limit_type = v83->avatar_limit_type;
  v31 = *(_BYTE *)(((unsigned __int64)&this->avatar_limit_type >> 3) + 0x7FFF8000);
  if ( v31 != 0 && v31 <= 3 )
  {
    LOBYTE(v27) = v31 != 0;
    __asan_report_store4(&this->avatar_limit_type, v27);
  }
  this->avatar_limit_type = avatar_limit_type;
  v32 = (((_BYTE)v83 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->limit_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->limit_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->limit_level);
  }
  limit_level = v83->limit_level;
  v34 = *(_BYTE *)(((unsigned __int64)&this->limit_level >> 3) + 0x7FFF8000);
  if ( v34 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v34 )
  {
    LOBYTE(v32) = v34 != 0;
    __asan_report_store4(&this->limit_level, v32);
  }
  this->limit_level = limit_level;
  if ( *(_BYTE *)(((unsigned __int64)&v83->level_revise >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->level_revise >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->level_revise);
  }
  level_revise = v83->level_revise;
  v36 = *(_BYTE *)(((unsigned __int64)&this->level_revise >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(v32) = v36 != 0;
    __asan_report_store4(&this->level_revise, v32);
  }
  this->level_revise = level_revise;
  v37 = (((_BYTE)v83 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->prev_dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->prev_dungeon_id);
  }
  prev_dungeon_id = v83->prev_dungeon_id;
  v39 = *(_BYTE *)(((unsigned __int64)&this->prev_dungeon_id >> 3) + 0x7FFF8000);
  if ( v39 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v39 )
  {
    LOBYTE(v37) = v39 != 0;
    __asan_report_store4(&this->prev_dungeon_id, v37);
  }
  this->prev_dungeon_id = prev_dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v83->require_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->require_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->require_avatar_id);
  }
  require_avatar_id = v83->require_avatar_id;
  v41 = *(_BYTE *)(((unsigned __int64)&this->require_avatar_id >> 3) + 0x7FFF8000);
  if ( v41 != 0 && v41 <= 3 )
  {
    LOBYTE(v37) = v41 != 0;
    __asan_report_store4(&this->require_avatar_id, v37);
  }
  this->require_avatar_id = require_avatar_id;
  v42 = (((_BYTE)v83 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->pass_cond >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->pass_cond >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->pass_cond);
  }
  pass_cond = v83->pass_cond;
  v44 = *(_BYTE *)(((unsigned __int64)&this->pass_cond >> 3) + 0x7FFF8000);
  if ( v44 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v44 )
  {
    LOBYTE(v42) = v44 != 0;
    __asan_report_store4(&this->pass_cond, v42);
  }
  this->pass_cond = pass_cond;
  if ( *(_BYTE *)(((unsigned __int64)&v83->pass_jump_dungeon >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->pass_jump_dungeon >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->pass_jump_dungeon);
  }
  pass_jump_dungeon = v83->pass_jump_dungeon;
  v46 = *(_BYTE *)(((unsigned __int64)&this->pass_jump_dungeon >> 3) + 0x7FFF8000);
  if ( v46 != 0 && v46 <= 3 )
  {
    LOBYTE(v42) = v46 != 0;
    __asan_report_store4(&this->pass_jump_dungeon, v42);
  }
  this->pass_jump_dungeon = pass_jump_dungeon;
  v47 = (((_BYTE)v83 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->revive_interval_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->revive_interval_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->revive_interval_time);
  }
  revive_interval_time = v83->revive_interval_time;
  v49 = *(_BYTE *)(((unsigned __int64)&this->revive_interval_time >> 3) + 0x7FFF8000);
  if ( v49 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v49 )
  {
    LOBYTE(v47) = v49 != 0;
    __asan_report_store4(&this->revive_interval_time, v47);
  }
  this->revive_interval_time = revive_interval_time;
  if ( *(_BYTE *)(((unsigned __int64)&v83->revive_max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->revive_max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->revive_max_count);
  }
  revive_max_count = v83->revive_max_count;
  v51 = *(_BYTE *)(((unsigned __int64)&this->revive_max_count >> 3) + 0x7FFF8000);
  if ( v51 != 0 && v51 <= 3 )
  {
    LOBYTE(v47) = v51 != 0;
    __asan_report_store4(&this->revive_max_count, v47);
  }
  this->revive_max_count = revive_max_count;
  v52 = (((_BYTE)v83 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->day_enter_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->day_enter_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->day_enter_count);
  }
  day_enter_count = v83->day_enter_count;
  v54 = *(_BYTE *)(((unsigned __int64)&this->day_enter_count >> 3) + 0x7FFF8000);
  if ( v54 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v54 )
  {
    LOBYTE(v52) = v54 != 0;
    __asan_report_store4(&this->day_enter_count, v52);
  }
  this->day_enter_count = day_enter_count;
  p_enter_cost_items = &v83->enter_cost_items;
  std::vector<data::IdCountConfig>::vector(&this->enter_cost_items, &v83->enter_cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&v83->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->first_pass_reward_id);
  }
  first_pass_reward_id = v83->first_pass_reward_id;
  v57 = *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000);
  if ( v57 != 0 && v57 <= 3 )
  {
    LOBYTE(p_enter_cost_items) = v57 != 0;
    __asan_report_store4(&this->first_pass_reward_id, p_enter_cost_items);
  }
  this->first_pass_reward_id = first_pass_reward_id;
  v58 = (((_BYTE)v83 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->settle_countdown_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->settle_countdown_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->settle_countdown_time);
  }
  settle_countdown_time = v83->settle_countdown_time;
  v60 = *(_BYTE *)(((unsigned __int64)&this->settle_countdown_time >> 3) + 0x7FFF8000);
  if ( v60 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v60 )
  {
    LOBYTE(v58) = v60 != 0;
    __asan_report_store4(&this->settle_countdown_time, v58);
  }
  this->settle_countdown_time = settle_countdown_time;
  if ( *(_BYTE *)(((unsigned __int64)&v83->fail_settle_countdown_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->fail_settle_countdown_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->fail_settle_countdown_time);
  }
  fail_settle_countdown_time = v83->fail_settle_countdown_time;
  v62 = *(_BYTE *)(((unsigned __int64)&this->fail_settle_countdown_time >> 3) + 0x7FFF8000);
  if ( v62 != 0 && v62 <= 3 )
  {
    LOBYTE(v58) = v62 != 0;
    __asan_report_store4(&this->fail_settle_countdown_time, v58);
  }
  this->fail_settle_countdown_time = fail_settle_countdown_time;
  v63 = (((_BYTE)v83 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->quit_settle_countdown_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->quit_settle_countdown_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->quit_settle_countdown_time);
  }
  quit_settle_countdown_time = v83->quit_settle_countdown_time;
  v65 = *(_BYTE *)(((unsigned __int64)&this->quit_settle_countdown_time >> 3) + 0x7FFF8000);
  if ( v65 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v65 )
  {
    LOBYTE(v63) = v65 != 0;
    __asan_report_store4(&this->quit_settle_countdown_time, v63);
  }
  this->quit_settle_countdown_time = quit_settle_countdown_time;
  p_settle_shows = &v83->settle_shows;
  std::vector<data::SettleShowType>::vector(&this->settle_shows, &v83->settle_shows);
  if ( *(char *)(((unsigned __int64)&v83->is_ban_die_option_revive_after_settle >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v83->is_ban_die_option_revive_after_settle,
      p_settle_shows,
      &v83->is_ban_die_option_revive_after_settle);
  is_ban_die_option_revive_after_settle = v83->is_ban_die_option_revive_after_settle;
  v68 = *(_BYTE *)(((unsigned __int64)&this->is_ban_die_option_revive_after_settle >> 3) + 0x7FFF8000);
  if ( v68 < 0 )
  {
    LOBYTE(p_settle_shows) = v68 != 0;
    __asan_report_store1(
      &this->is_ban_die_option_revive_after_settle,
      p_settle_shows,
      &this->is_ban_die_option_revive_after_settle);
  }
  this->is_ban_die_option_revive_after_settle = is_ban_die_option_revive_after_settle;
  v69 = (((_BYTE)v83 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->statue_cost_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->statue_cost_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->statue_cost_id);
  }
  statue_cost_id = v83->statue_cost_id;
  v71 = *(_BYTE *)(((unsigned __int64)&this->statue_cost_id >> 3) + 0x7FFF8000);
  if ( v71 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v71 )
  {
    LOBYTE(v69) = v71 != 0;
    __asan_report_store4(&this->statue_cost_id, v69);
  }
  this->statue_cost_id = statue_cost_id;
  if ( *(_BYTE *)(((unsigned __int64)&v83->statue_cost_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->statue_cost_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->statue_cost_count);
  }
  statue_cost_count = v83->statue_cost_count;
  v73 = *(_BYTE *)(((unsigned __int64)&this->statue_cost_count >> 3) + 0x7FFF8000);
  if ( v73 != 0 && v73 <= 3 )
  {
    LOBYTE(v69) = v73 != 0;
    __asan_report_store4(&this->statue_cost_count, v69);
  }
  this->statue_cost_count = statue_cost_count;
  v74 = (((_BYTE)v83 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->statue_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->statue_drop >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->statue_drop);
  }
  statue_drop = v83->statue_drop;
  v76 = *(_BYTE *)(((unsigned __int64)&this->statue_drop >> 3) + 0x7FFF8000);
  if ( v76 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v76 )
  {
    LOBYTE(v74) = v76 != 0;
    __asan_report_store4(&this->statue_drop, v74);
  }
  this->statue_drop = statue_drop;
  p_level_config_map = &v83->level_config_map;
  std::map<unsigned int,unsigned int>::map(&this->level_config_map, &v83->level_config_map);
  if ( *(_BYTE *)(((unsigned __int64)&v83->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->city_id);
  }
  city_id = v83->city_id;
  v79 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v79 != 0 && v79 <= 3 )
  {
    LOBYTE(p_level_config_map) = v79 != 0;
    __asan_report_store4(&this->city_id, p_level_config_map);
  }
  this->city_id = city_id;
  v80 = (((_BYTE)v83 - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->state_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->state_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->state_type);
  }
  state_type = v83->state_type;
  v82 = *(_BYTE *)(((unsigned __int64)&this->state_type >> 3) + 0x7FFF8000);
  if ( v82 != 0 && (char)((((_BYTE)this - 36) & 7) + 3) >= v82 )
  {
    LOBYTE(v80) = v82 != 0;
    __asan_report_store4(&this->state_type, v80);
  }
  this->state_type = state_type;
};

// Line 503: range 00000000137CA8C0-00000000137CA8EA
void __cdecl data::DungeonExcelConfig::~DungeonExcelConfig(data::DungeonExcelConfig *const this)
{
  data::DungeonExcelConfig::~DungeonExcelConfig(this);
  operator delete(this, 0xE0uLL);
};

// Line 503: range 00000000137CA84C-00000000137CA8BF
void __cdecl data::DungeonExcelConfig::~DungeonExcelConfig(data::DungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonExcelConfig = v2;
  std::map<unsigned int,unsigned int>::~map(&this->level_config_map);
  std::vector<data::SettleShowType>::~vector(&this->settle_shows);
  std::vector<data::IdCountConfig>::~vector(&this->enter_cost_items);
};

// Line 546: range 0000000013C82148-0000000013C821ED
data::DungeonCondConfig *__cdecl data::DungeonCondConfig::operator=(
        data::DungeonCondConfig *const this,
        const data::DungeonCondConfig *a2)
{
  data::DungeonCondType cond_type; // ecx
  char v3; // al
  const data::DungeonCondConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  std::vector<int>::operator=(&this->param, &v5->param);
  return this;
};

// Line 546: range 000000001374A168-000000001374A1F7
void __cdecl data::DungeonCondConfig::DungeonCondConfig(data::DungeonCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonCondConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = DUNGEON_COND_NONE;
  std::vector<int>::vector(&this->param);
};

// Line 546: range 000000001377CDB6-000000001377CE8B
void __cdecl data::DungeonCondConfig::DungeonCondConfig(
        data::DungeonCondConfig *const this,
        const data::DungeonCondConfig *a2)
{
  int (**v2)(...); // rdx
  data::DungeonCondType cond_type; // ecx
  char v4; // al
  const data::DungeonCondConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonCondConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  std::vector<int>::vector(&this->param, &v5->param);
};

// Line 549: range 000000001370692A-000000001370697B
void __cdecl data::DungeonCondConfig::~DungeonCondConfig(data::DungeonCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonCondConfig = v2;
  std::vector<int>::~vector(&this->param);
};

// Line 549: range 000000001370697C-00000000137069A6
void __cdecl data::DungeonCondConfig::~DungeonCondConfig(data::DungeonCondConfig *const this)
{
  data::DungeonCondConfig::~DungeonCondConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 559: range 00000000135B0496-00000000135B056B
void __cdecl data::DungeonPassExcelConfig::DungeonPassExcelConfig(data::DungeonPassExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonPassExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonPassExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic_type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->logic_type = LOGIC_NONE;
  std::vector<data::DungeonCondConfig>::vector(&this->conds);
};

// Line 559: range 000000001377E0D4-000000001377E22E
void __cdecl data::DungeonPassExcelConfig::DungeonPassExcelConfig(
        data::DungeonPassExcelConfig *const this,
        const data::DungeonPassExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::LogicType logic_type; // ecx
  char v7; // dl
  const data::DungeonPassExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonPassExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonPassExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->logic_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->logic_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->logic_type);
  }
  logic_type = v8->logic_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->logic_type, v5);
  }
  this->logic_type = logic_type;
  std::vector<data::DungeonCondConfig>::vector(&this->conds, &v8->conds);
};

// Line 562: range 00000000137CA7CE-00000000137CA81F
void __cdecl data::DungeonPassExcelConfig::~DungeonPassExcelConfig(data::DungeonPassExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonPassExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonPassExcelConfig = v2;
  std::vector<data::DungeonCondConfig>::~vector(&this->conds);
};

// Line 562: range 00000000137CA820-00000000137CA84A
void __cdecl data::DungeonPassExcelConfig::~DungeonPassExcelConfig(data::DungeonPassExcelConfig *const this)
{
  data::DungeonPassExcelConfig::~DungeonPassExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 575: range 00000000135B056C-00000000135B08D9
void __cdecl data::DungeonChallengeConfig::DungeonChallengeConfig(data::DungeonChallengeConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DungeonChallengeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonChallengeConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_type, v3);
  }
  this->challenge_type = CHALLENGE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_type, v3);
  }
  this->record_type = CHALLENGE_RECORD_TYPE_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->interrupt_button_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->interrupt_button_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->interrupt_button_type, v4);
  }
  this->interrupt_button_type = INTERRUPT_BUTTON_TYPE_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_trans_back_when_interrupt >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trans_back_when_interrupt, v4, &this->is_trans_back_when_interrupt);
  this->is_trans_back_when_interrupt = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_skill_id, v5);
  }
  this->activity_skill_id = 0;
  std::string::basic_string(&this->ability_group_name);
  if ( *(char *)(((unsigned __int64)&this->is_settle_when_all_related_player_exit_sight_as_child >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_settle_when_all_related_player_exit_sight_as_child,
      v5,
      &this->is_settle_when_all_related_player_exit_sight_as_child);
  this->is_settle_when_all_related_player_exit_sight_as_child = 0;
  v6 = ((_BYTE)this + 65) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_hide_unrelated_player_as_father >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_hide_unrelated_player_as_father >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_hide_unrelated_player_as_father, v6, v7);
  this->is_hide_unrelated_player_as_father = 0;
  std::vector<std::string>::vector(&this->team_ability_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_challenge_start_anim >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_challenge_start_anim >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_challenge_start_anim, v6);
  }
  this->sub_challenge_start_anim = SUB_CHALLENGE_ANIM_TYPE_DEFAULT;
  v8 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_challenge_success_anim >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_challenge_success_anim >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_challenge_success_anim, v8);
  }
  this->sub_challenge_success_anim = SUB_CHALLENGE_ANIM_TYPE_DEFAULT;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_challenge_fail_anim >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_challenge_fail_anim >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_challenge_fail_anim, v8);
  }
  this->sub_challenge_fail_anim = SUB_CHALLENGE_ANIM_TYPE_DEFAULT;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_challenge_sort_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_challenge_sort_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_challenge_sort_type, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->sub_challenge_sort_type = SUB_CHALLENGE_SORT_TYPE_DEFAULT;
};

// Line 575: range 000000001377E370-000000001377E9EB
void __cdecl data::DungeonChallengeConfig::DungeonChallengeConfig(
        data::DungeonChallengeConfig *const this,
        const data::DungeonChallengeConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ChallengeType challenge_type; // ecx
  char v7; // dl
  data::ChallengeRecordType record_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::InterruptButtonType interrupt_button_type; // ecx
  char v12; // dl
  bool is_trans_back_when_interrupt; // cl
  char v14; // al
  __int64 v15; // rsi
  uint32_t activity_skill_id; // ecx
  char v17; // dl
  std::string *p_ability_group_name; // rsi
  bool is_settle_when_all_related_player_exit_sight_as_child; // cl
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  bool is_hide_unrelated_player_as_father; // cl
  char v24; // dl
  __int64 v25; // rdx
  std::vector<std::string> *p_team_ability_group_list; // rsi
  data::SubChallengeAnimType sub_challenge_start_anim; // ecx
  char v28; // al
  __int64 v29; // rsi
  data::SubChallengeAnimType sub_challenge_success_anim; // ecx
  char v31; // dl
  data::SubChallengeAnimType sub_challenge_fail_anim; // ecx
  char v33; // al
  __int64 v34; // rsi
  data::SubChallengeSortType sub_challenge_sort_type; // ecx
  char v36; // dl
  const data::DungeonChallengeConfig *v37; // [rsp+0h] [rbp-20h]

  v37 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonChallengeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonChallengeConfig = v2;
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
  v5 = (((_BYTE)v37 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v37->challenge_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v37 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v37->challenge_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v37->challenge_type);
  }
  challenge_type = v37->challenge_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->challenge_type, v5);
  }
  this->challenge_type = challenge_type;
  if ( *(_BYTE *)(((unsigned __int64)&v37->record_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v37->record_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v37->record_type);
  }
  record_type = v37->record_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->record_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->record_type, v5);
  }
  this->record_type = record_type;
  v10 = (((_BYTE)v37 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v37->interrupt_button_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v37 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v37->interrupt_button_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v37->interrupt_button_type);
  }
  interrupt_button_type = v37->interrupt_button_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->interrupt_button_type >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->interrupt_button_type, v10);
  this->interrupt_button_type = interrupt_button_type;
  if ( *(char *)(((unsigned __int64)&v37->is_trans_back_when_interrupt >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v37->is_trans_back_when_interrupt, v10, &v37->is_trans_back_when_interrupt);
  is_trans_back_when_interrupt = v37->is_trans_back_when_interrupt;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_trans_back_when_interrupt >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_trans_back_when_interrupt, v10, &this->is_trans_back_when_interrupt);
  }
  this->is_trans_back_when_interrupt = is_trans_back_when_interrupt;
  v15 = (((_BYTE)v37 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v37->activity_skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v37 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v37->activity_skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v37->activity_skill_id);
  }
  activity_skill_id = v37->activity_skill_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->activity_skill_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->activity_skill_id, v15);
  }
  this->activity_skill_id = activity_skill_id;
  p_ability_group_name = &v37->ability_group_name;
  std::string::basic_string(&this->ability_group_name, &v37->ability_group_name);
  if ( *(char *)(((unsigned __int64)&v37->is_settle_when_all_related_player_exit_sight_as_child >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v37->is_settle_when_all_related_player_exit_sight_as_child,
      p_ability_group_name,
      &v37->is_settle_when_all_related_player_exit_sight_as_child);
  is_settle_when_all_related_player_exit_sight_as_child = v37->is_settle_when_all_related_player_exit_sight_as_child;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_settle_when_all_related_player_exit_sight_as_child >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(p_ability_group_name) = v20 != 0;
    __asan_report_store1(
      &this->is_settle_when_all_related_player_exit_sight_as_child,
      p_ability_group_name,
      &this->is_settle_when_all_related_player_exit_sight_as_child);
  }
  this->is_settle_when_all_related_player_exit_sight_as_child = is_settle_when_all_related_player_exit_sight_as_child;
  v21 = ((_BYTE)v37 + 65) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&v37->is_hide_unrelated_player_as_father >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&v37->is_hide_unrelated_player_as_father >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&v37->is_hide_unrelated_player_as_father, v21, v22);
  is_hide_unrelated_player_as_father = v37->is_hide_unrelated_player_as_father;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_hide_unrelated_player_as_father >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->is_hide_unrelated_player_as_father, v21, v25);
  this->is_hide_unrelated_player_as_father = is_hide_unrelated_player_as_father;
  p_team_ability_group_list = &v37->team_ability_group_list;
  std::vector<std::string>::vector(&this->team_ability_group_list, &v37->team_ability_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v37->sub_challenge_start_anim >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v37->sub_challenge_start_anim >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v37->sub_challenge_start_anim);
  }
  sub_challenge_start_anim = v37->sub_challenge_start_anim;
  v28 = *(_BYTE *)(((unsigned __int64)&this->sub_challenge_start_anim >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_team_ability_group_list) = v28 != 0;
    __asan_report_store4(&this->sub_challenge_start_anim, p_team_ability_group_list);
  }
  this->sub_challenge_start_anim = sub_challenge_start_anim;
  v29 = (((_BYTE)v37 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v37->sub_challenge_success_anim >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v37 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v37->sub_challenge_success_anim >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v37->sub_challenge_success_anim);
  }
  sub_challenge_success_anim = v37->sub_challenge_success_anim;
  v31 = *(_BYTE *)(((unsigned __int64)&this->sub_challenge_success_anim >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->sub_challenge_success_anim, v29);
  }
  this->sub_challenge_success_anim = sub_challenge_success_anim;
  if ( *(_BYTE *)(((unsigned __int64)&v37->sub_challenge_fail_anim >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v37->sub_challenge_fail_anim >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v37->sub_challenge_fail_anim);
  }
  sub_challenge_fail_anim = v37->sub_challenge_fail_anim;
  v33 = *(_BYTE *)(((unsigned __int64)&this->sub_challenge_fail_anim >> 3) + 0x7FFF8000);
  if ( v33 != 0 && v33 <= 3 )
  {
    LOBYTE(v29) = v33 != 0;
    __asan_report_store4(&this->sub_challenge_fail_anim, v29);
  }
  this->sub_challenge_fail_anim = sub_challenge_fail_anim;
  v34 = (((_BYTE)v37 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v37->sub_challenge_sort_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v37 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v37->sub_challenge_sort_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v37->sub_challenge_sort_type);
  }
  sub_challenge_sort_type = v37->sub_challenge_sort_type;
  v36 = *(_BYTE *)(((unsigned __int64)&this->sub_challenge_sort_type >> 3) + 0x7FFF8000);
  if ( v36 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v36 )
  {
    LOBYTE(v34) = v36 != 0;
    __asan_report_store4(&this->sub_challenge_sort_type, v34);
  }
  this->sub_challenge_sort_type = sub_challenge_sort_type;
};

// Line 578: range 00000000137CA740-00000000137CA7A1
void __cdecl data::DungeonChallengeConfig::~DungeonChallengeConfig(data::DungeonChallengeConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonChallengeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonChallengeConfig = v2;
  std::vector<std::string>::~vector(&this->team_ability_group_list);
  std::string::~string(&this->ability_group_name);
};

// Line 578: range 00000000137CA7A2-00000000137CA7CC
void __cdecl data::DungeonChallengeConfig::~DungeonChallengeConfig(data::DungeonChallengeConfig *const this)
{
  data::DungeonChallengeConfig::~DungeonChallengeConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 602: range 00000000135B08DA-00000000135B09CD
void __cdecl data::DailyDungeonConfig::DailyDungeonConfig(data::DailyDungeonConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyDungeonConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyDungeonConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->monday);
  std::vector<unsigned int>::vector(&this->tuesday);
  std::vector<unsigned int>::vector(&this->wednesday);
  std::vector<unsigned int>::vector(&this->thursday);
  std::vector<unsigned int>::vector(&this->friday);
  std::vector<unsigned int>::vector(&this->saturday);
  std::vector<unsigned int>::vector(&this->sunday);
};

// Line 602: range 000000001377EB2C-000000001377ED42
void __cdecl data::DailyDungeonConfig::DailyDungeonConfig(
        data::DailyDungeonConfig *const this,
        const data::DailyDungeonConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::DailyDungeonConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DailyDungeonConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DailyDungeonConfig = v2;
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
  std::vector<unsigned int>::vector(&this->monday, &v5->monday);
  std::vector<unsigned int>::vector(&this->tuesday, &v5->tuesday);
  std::vector<unsigned int>::vector(&this->wednesday, &v5->wednesday);
  std::vector<unsigned int>::vector(&this->thursday, &v5->thursday);
  std::vector<unsigned int>::vector(&this->friday, &v5->friday);
  std::vector<unsigned int>::vector(&this->saturday, &v5->saturday);
  std::vector<unsigned int>::vector(&this->sunday, &v5->sunday);
};

// Line 605: range 00000000137CA65E-00000000137CA713
void __cdecl data::DailyDungeonConfig::~DailyDungeonConfig(data::DailyDungeonConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyDungeonConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyDungeonConfig = v2;
  std::vector<unsigned int>::~vector(&this->sunday);
  std::vector<unsigned int>::~vector(&this->saturday);
  std::vector<unsigned int>::~vector(&this->friday);
  std::vector<unsigned int>::~vector(&this->thursday);
  std::vector<unsigned int>::~vector(&this->wednesday);
  std::vector<unsigned int>::~vector(&this->tuesday);
  std::vector<unsigned int>::~vector(&this->monday);
};

// Line 605: range 00000000137CA714-00000000137CA73E
void __cdecl data::DailyDungeonConfig::~DailyDungeonConfig(data::DailyDungeonConfig *const this)
{
  data::DailyDungeonConfig::~DailyDungeonConfig(this);
  operator delete(this, 0xB8uLL);
};

// Line 623: range 00000000135B09CE-00000000135B0A5D
void __cdecl data::DungeonLevelEntityConfig::DungeonLevelEntityConfig(data::DungeonLevelEntityConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonLevelEntityConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonLevelEntityConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->level_config_name);
};

// Line 623: range 0000000013655CA0-0000000013655D75
void __cdecl data::DungeonLevelEntityConfig::DungeonLevelEntityConfig(
        data::DungeonLevelEntityConfig *const this,
        const data::DungeonLevelEntityConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::DungeonLevelEntityConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonLevelEntityConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonLevelEntityConfig = v2;
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
  std::string::basic_string(&this->level_config_name, &v5->level_config_name);
};

// Line 626: range 00000000137CA5E0-00000000137CA631
void __cdecl data::DungeonLevelEntityConfig::~DungeonLevelEntityConfig(data::DungeonLevelEntityConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonLevelEntityConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonLevelEntityConfig = v2;
  std::string::~string(&this->level_config_name);
};

// Line 626: range 00000000137CA632-00000000137CA65C
void __cdecl data::DungeonLevelEntityConfig::~DungeonLevelEntityConfig(data::DungeonLevelEntityConfig *const this)
{
  data::DungeonLevelEntityConfig::~DungeonLevelEntityConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 638: range 000000001377EEF2-000000001377F0A6
void __cdecl data::DungeonSerialConfig::DungeonSerialConfig(
        data::DungeonSerialConfig *const this,
        const data::DungeonSerialConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t max_take_num; // ecx
  char v7; // dl
  uint32_t take_cost; // ecx
  char v9; // al
  const data::DungeonSerialConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonSerialConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonSerialConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->max_take_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->max_take_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->max_take_num);
  }
  max_take_num = v10->max_take_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_take_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->max_take_num, v5);
  }
  this->max_take_num = max_take_num;
  if ( *(_BYTE *)(((unsigned __int64)&v10->take_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->take_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->take_cost);
  }
  take_cost = v10->take_cost;
  v9 = *(_BYTE *)(((unsigned __int64)&this->take_cost >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->take_cost, v5);
  }
  this->take_cost = take_cost;
};

// Line 641: range 00000000137CA5B4-00000000137CA5DE
void __cdecl data::DungeonSerialConfig::~DungeonSerialConfig(data::DungeonSerialConfig *const this)
{
  data::DungeonSerialConfig::~DungeonSerialConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 641: range 00000000137CA572-00000000137CA5B3
void __cdecl data::DungeonSerialConfig::~DungeonSerialConfig(data::DungeonSerialConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonSerialConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonSerialConfig = v2;
};

// Line 657: range 00000000137083CE-00000000137083F8
void __cdecl data::DungeonList::~DungeonList(data::DungeonList *const this)
{
  data::DungeonList::~DungeonList(this);
  operator delete(this, 0x20uLL);
};

// Line 666: range 00000000135B0AB2-00000000135B0C13
void __cdecl data::DungeonRosterConfig::DungeonRosterConfig(data::DungeonRosterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DungeonRosterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonRosterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->open_time_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_time, v1);
  }
  this->open_time = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cycle_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cycle_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cycle_time, v3);
  }
  this->cycle_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cycle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cycle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cycle_type, v3);
  }
  this->cycle_type = DUNGEON_ROSTER_CYCLE_TYPE_NONE;
  std::vector<data::DungeonList>::vector(&this->roster_pool);
};

// Line 666: range 000000001377F1E8-000000001377F46E
void __cdecl data::DungeonRosterConfig::DungeonRosterConfig(
        data::DungeonRosterConfig *const this,
        const data::DungeonRosterConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_open_time_str; // rsi
  uint32_t open_time; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t cycle_time; // ecx
  char v10; // dl
  data::DungeonRosterCycleType cycle_type; // ecx
  char v12; // al
  const data::DungeonRosterConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonRosterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonRosterConfig = v2;
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
  p_open_time_str = &v13->open_time_str;
  std::string::basic_string(&this->open_time_str, &v13->open_time_str);
  if ( *(_BYTE *)(((unsigned __int64)&v13->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->open_time);
  }
  open_time = v13->open_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_open_time_str) = v7 != 0;
    __asan_report_store4(&this->open_time, p_open_time_str);
  }
  this->open_time = open_time;
  v8 = (((_BYTE)v13 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->cycle_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->cycle_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->cycle_time);
  }
  cycle_time = v13->cycle_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->cycle_time >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->cycle_time, v8);
  }
  this->cycle_time = cycle_time;
  if ( *(_BYTE *)(((unsigned __int64)&v13->cycle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->cycle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->cycle_type);
  }
  cycle_type = v13->cycle_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cycle_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->cycle_type, v8);
  }
  this->cycle_type = cycle_type;
  std::vector<data::DungeonList>::vector(&this->roster_pool, &v13->roster_pool);
};

// Line 669: range 00000000137CA546-00000000137CA570
void __cdecl data::DungeonRosterConfig::~DungeonRosterConfig(data::DungeonRosterConfig *const this)
{
  data::DungeonRosterConfig::~DungeonRosterConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 669: range 00000000137CA4E4-00000000137CA545
void __cdecl data::DungeonRosterConfig::~DungeonRosterConfig(data::DungeonRosterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonRosterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonRosterConfig = v2;
  std::vector<data::DungeonList>::~vector(&this->roster_pool);
  std::string::~string(&this->open_time_str);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/DungeonEntryDataConfig.gen.h

// Line 80: range 000000001412CF8C-000000001412D08F
void __cdecl data::DungeonEntrySatisfiedCond::DungeonEntrySatisfiedCond(data::DungeonEntrySatisfiedCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DungeonEntrySatisfiedCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonEntrySatisfiedCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = DUNGEON_ENTRY_CONDITION_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param1, v3);
  }
  this->param1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param2, v3);
  }
  this->param2 = 0;
};

// Line 80: range 00000000142692D2-0000000014269486
void __cdecl data::DungeonEntrySatisfiedCond::DungeonEntrySatisfiedCond(
        data::DungeonEntrySatisfiedCond *const this,
        const data::DungeonEntrySatisfiedCond *a2)
{
  int (**v2)(...); // rdx
  data::DungeonEntrySatisfiedConditionType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t param1; // ecx
  char v7; // dl
  uint32_t param2; // ecx
  char v9; // al
  const data::DungeonEntrySatisfiedCond *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonEntrySatisfiedCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonEntrySatisfiedCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->param1);
  }
  param1 = v10->param1;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->param1, v5);
  }
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v10->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->param2);
  }
  param2 = v10->param2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->param2, v5);
  }
  this->param2 = param2;
};

// Line 83: range 000000001405AB50-000000001405AB91
void __cdecl data::DungeonEntrySatisfiedCond::~DungeonEntrySatisfiedCond(data::DungeonEntrySatisfiedCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonEntrySatisfiedCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonEntrySatisfiedCond = v2;
};

// Line 83: range 000000001405AB92-000000001405ABBC
void __cdecl data::DungeonEntrySatisfiedCond::~DungeonEntrySatisfiedCond(data::DungeonEntrySatisfiedCond *const this)
{
  data::DungeonEntrySatisfiedCond::~DungeonEntrySatisfiedCond(this);
  operator delete(this, 0x18uLL);
};

// Line 94: range 0000000013C07D1E-0000000013C07FC7
void __cdecl data::DungeonEntryExcelConfig::DungeonEntryExcelConfig(data::DungeonEntryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DungeonEntryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonEntryExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_entry_id, v3);
  }
  this->dungeon_entry_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v4);
  }
  this->type = DUNGEN_ENTRY_TYPE_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_show_in_adv_handbook >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_show_in_adv_handbook, v4, &this->is_show_in_adv_handbook);
  this->is_show_in_adv_handbook = 0;
  std::vector<unsigned int>::vector(&this->cooldown_tips_dungeon_id);
  if ( *(char *)(((unsigned __int64)&this->is_default_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_default_open, v4, &this->is_default_open);
  this->is_default_open = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_comb, v5);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::DungeonEntrySatisfiedCond>::vector(&this->satisfied_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->system_open_ui_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->system_open_ui_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->system_open_ui_id, v5);
  }
  this->system_open_ui_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_data_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_data_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_data_id, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->reward_data_id = 0;
};

// Line 94: range 00000000141C66B4-00000000141C6BB5
void __cdecl data::DungeonEntryExcelConfig::DungeonEntryExcelConfig(
        data::DungeonEntryExcelConfig *const this,
        const data::DungeonEntryExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_id; // ecx
  char v7; // dl
  uint32_t dungeon_entry_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::DungunEntryType type; // ecx
  char v12; // dl
  bool is_show_in_adv_handbook; // cl
  char v14; // al
  std::vector<unsigned int> *p_cooldown_tips_dungeon_id; // rsi
  bool is_default_open; // cl
  char v17; // al
  __int64 v18; // rsi
  data::LogicType cond_comb; // ecx
  char v20; // dl
  std::vector<data::DungeonEntrySatisfiedCond> *p_satisfied_cond; // rsi
  uint32_t system_open_ui_id; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t reward_data_id; // ecx
  char v26; // dl
  const data::DungeonEntryExcelConfig *v27; // [rsp+0h] [rbp-20h]

  v27 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonEntryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonEntryExcelConfig = v2;
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
  v5 = (((_BYTE)v27 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->scene_id);
  }
  scene_id = v27->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v27->dungeon_entry_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->dungeon_entry_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->dungeon_entry_id);
  }
  dungeon_entry_id = v27->dungeon_entry_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->dungeon_entry_id, v5);
  }
  this->dungeon_entry_id = dungeon_entry_id;
  v10 = (((_BYTE)v27 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->type);
  }
  type = v27->type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->type, v10);
  this->type = type;
  if ( *(char *)(((unsigned __int64)&v27->is_show_in_adv_handbook >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v27->is_show_in_adv_handbook, v10, &v27->is_show_in_adv_handbook);
  is_show_in_adv_handbook = v27->is_show_in_adv_handbook;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_show_in_adv_handbook >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_show_in_adv_handbook, v10, &this->is_show_in_adv_handbook);
  }
  this->is_show_in_adv_handbook = is_show_in_adv_handbook;
  p_cooldown_tips_dungeon_id = &v27->cooldown_tips_dungeon_id;
  std::vector<unsigned int>::vector(&this->cooldown_tips_dungeon_id, &v27->cooldown_tips_dungeon_id);
  if ( *(char *)(((unsigned __int64)&v27->is_default_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v27->is_default_open, p_cooldown_tips_dungeon_id, &v27->is_default_open);
  is_default_open = v27->is_default_open;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_default_open >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(p_cooldown_tips_dungeon_id) = v17 != 0;
    __asan_report_store1(&this->is_default_open, p_cooldown_tips_dungeon_id, &this->is_default_open);
  }
  this->is_default_open = is_default_open;
  v18 = (((_BYTE)v27 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->cond_comb);
  }
  cond_comb = v27->cond_comb;
  v20 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->cond_comb, v18);
  }
  this->cond_comb = cond_comb;
  p_satisfied_cond = &v27->satisfied_cond;
  std::vector<data::DungeonEntrySatisfiedCond>::vector(&this->satisfied_cond, &v27->satisfied_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v27->system_open_ui_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->system_open_ui_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->system_open_ui_id);
  }
  system_open_ui_id = v27->system_open_ui_id;
  v23 = *(_BYTE *)(((unsigned __int64)&this->system_open_ui_id >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_satisfied_cond) = v23 != 0;
    __asan_report_store4(&this->system_open_ui_id, p_satisfied_cond);
  }
  this->system_open_ui_id = system_open_ui_id;
  v24 = (((_BYTE)v27 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->reward_data_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->reward_data_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->reward_data_id);
  }
  reward_data_id = v27->reward_data_id;
  v26 = *(_BYTE *)(((unsigned __int64)&this->reward_data_id >> 3) + 0x7FFF8000);
  if ( v26 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v26 )
  {
    LOBYTE(v24) = v26 != 0;
    __asan_report_store4(&this->reward_data_id, v24);
  }
  this->reward_data_id = reward_data_id;
};

// Line 97: range 00000000142A5300-00000000142A5361
void __cdecl data::DungeonEntryExcelConfig::~DungeonEntryExcelConfig(data::DungeonEntryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonEntryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonEntryExcelConfig = v2;
  std::vector<data::DungeonEntrySatisfiedCond>::~vector(&this->satisfied_cond);
  std::vector<unsigned int>::~vector(&this->cooldown_tips_dungeon_id);
};

// Line 97: range 00000000142A5362-00000000142A538C
void __cdecl data::DungeonEntryExcelConfig::~DungeonEntryExcelConfig(data::DungeonEntryExcelConfig *const this)
{
  data::DungeonEntryExcelConfig::~DungeonEntryExcelConfig(this);
  operator delete(this, 0x60uLL);
};

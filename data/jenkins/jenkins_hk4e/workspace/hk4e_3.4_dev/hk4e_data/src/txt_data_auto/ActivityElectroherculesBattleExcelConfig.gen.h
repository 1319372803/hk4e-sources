// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityElectroherculesBattleExcelConfig.gen.h

// Line 64: range 0000000012EBD33C-0000000012EBD411
void __cdecl data::ElectroherculesBattleExcelConfig::ElectroherculesBattleExcelConfig(
        data::ElectroherculesBattleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ElectroherculesBattleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ElectroherculesBattleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->activity_id = 0;
  std::vector<unsigned int>::vector(&this->end_quest_id_list);
};

// Line 64: range 00000000133A19BE-00000000133A1B18
void __cdecl data::ElectroherculesBattleExcelConfig::ElectroherculesBattleExcelConfig(
        data::ElectroherculesBattleExcelConfig *const this,
        const data::ElectroherculesBattleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  const data::ElectroherculesBattleExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ElectroherculesBattleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ElectroherculesBattleExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->activity_id);
  }
  activity_id = v8->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  std::vector<unsigned int>::vector(&this->end_quest_id_list, &v8->end_quest_id_list);
};

// Line 67: range 0000000013420E02-0000000013420E53
void __cdecl data::ElectroherculesBattleExcelConfig::~ElectroherculesBattleExcelConfig(
        data::ElectroherculesBattleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ElectroherculesBattleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ElectroherculesBattleExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->end_quest_id_list);
};

// Line 67: range 0000000013420E54-0000000013420E7E
void __cdecl data::ElectroherculesBattleExcelConfig::~ElectroherculesBattleExcelConfig(
        data::ElectroherculesBattleExcelConfig *const this)
{
  data::ElectroherculesBattleExcelConfig::~ElectroherculesBattleExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 80: range 0000000012EBD412-0000000012EBD563
void __cdecl data::ElectroherculesBattleStageExcelConfig::ElectroherculesBattleStageExcelConfig(
        data::ElectroherculesBattleStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ElectroherculesBattleStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ElectroherculesBattleStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->level_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_time, v1);
  }
  this->open_time = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_challenge_reminder_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_challenge_reminder_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_challenge_reminder_id, v3);
  }
  this->first_challenge_reminder_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_settle_reminder_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_settle_reminder_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_settle_reminder_id, v3);
  }
  this->first_settle_reminder_id = 0;
};

// Line 80: range 00000000133A1C5A-00000000133A1E9E
void __cdecl data::ElectroherculesBattleStageExcelConfig::ElectroherculesBattleStageExcelConfig(
        data::ElectroherculesBattleStageExcelConfig *const this,
        const data::ElectroherculesBattleStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_level_id_list; // rsi
  uint32_t open_time; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t first_challenge_reminder_id; // ecx
  char v10; // dl
  uint32_t first_settle_reminder_id; // ecx
  char v12; // al
  const data::ElectroherculesBattleStageExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ElectroherculesBattleStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ElectroherculesBattleStageExcelConfig = v2;
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
  p_level_id_list = &v13->level_id_list;
  std::vector<unsigned int>::vector(&this->level_id_list, &v13->level_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v13->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->open_time);
  }
  open_time = v13->open_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_level_id_list) = v7 != 0;
    __asan_report_store4(&this->open_time, p_level_id_list);
  }
  this->open_time = open_time;
  v8 = (((_BYTE)v13 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->first_challenge_reminder_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->first_challenge_reminder_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->first_challenge_reminder_id);
  }
  first_challenge_reminder_id = v13->first_challenge_reminder_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->first_challenge_reminder_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->first_challenge_reminder_id, v8);
  }
  this->first_challenge_reminder_id = first_challenge_reminder_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->first_settle_reminder_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->first_settle_reminder_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->first_settle_reminder_id);
  }
  first_settle_reminder_id = v13->first_settle_reminder_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->first_settle_reminder_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->first_settle_reminder_id, v8);
  }
  this->first_settle_reminder_id = first_settle_reminder_id;
};

// Line 83: range 0000000013420D84-0000000013420DD5
void __cdecl data::ElectroherculesBattleStageExcelConfig::~ElectroherculesBattleStageExcelConfig(
        data::ElectroherculesBattleStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ElectroherculesBattleStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ElectroherculesBattleStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->level_id_list);
};

// Line 83: range 0000000013420DD6-0000000013420E00
void __cdecl data::ElectroherculesBattleStageExcelConfig::~ElectroherculesBattleStageExcelConfig(
        data::ElectroherculesBattleStageExcelConfig *const this)
{
  data::ElectroherculesBattleStageExcelConfig::~ElectroherculesBattleStageExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 98: range 0000000012EBD564-0000000012EBD77F
void __cdecl data::ElectroherculesBattleLevelExcelConfig::ElectroherculesBattleLevelExcelConfig(
        data::ElectroherculesBattleLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ElectroherculesBattleLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ElectroherculesBattleLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_difficulty, v3);
  }
  this->level_difficulty = ELECTROHERCULES_BATTLE_DIFFICULTY_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_type, v4);
  }
  this->level_type = ELECTROHERCULES_BATTLE_LEVEL_TYPE_NONE;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->self_entity_cfg_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->self_entity_cfg_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->self_entity_cfg_id, v5);
  }
  this->self_entity_cfg_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->enemy_entity_cfg_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enemy_entity_cfg_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enemy_entity_cfg_id, v5);
  }
  this->enemy_entity_cfg_id = 0;
};

// Line 98: range 00000000133A1FE0-00000000133A23A3
void __cdecl data::ElectroherculesBattleLevelExcelConfig::ElectroherculesBattleLevelExcelConfig(
        data::ElectroherculesBattleLevelExcelConfig *const this,
        const data::ElectroherculesBattleLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ElectroherculesBattleLevelDifficulty level_difficulty; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_watcher_id_list; // rsi
  data::ElectroherculesBattleLevelType level_type; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t self_entity_cfg_id; // ecx
  char v18; // dl
  uint32_t enemy_entity_cfg_id; // ecx
  char v20; // al
  const data::ElectroherculesBattleLevelExcelConfig *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ElectroherculesBattleLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ElectroherculesBattleLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->level_difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->level_difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->level_difficulty);
  }
  level_difficulty = v21->level_difficulty;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_difficulty >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level_difficulty, v5);
  }
  this->level_difficulty = level_difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&v21->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->group_id);
  }
  group_id = v21->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  v10 = (((_BYTE)v21 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->gallery_id);
  }
  gallery_id = v21->gallery_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  p_watcher_id_list = &v21->watcher_id_list;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v21->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->level_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->level_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->level_type);
  }
  level_type = v21->level_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_watcher_id_list) = v15 != 0;
    __asan_report_store4(&this->level_type, p_watcher_id_list);
  }
  this->level_type = level_type;
  v16 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->self_entity_cfg_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->self_entity_cfg_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->self_entity_cfg_id);
  }
  self_entity_cfg_id = v21->self_entity_cfg_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->self_entity_cfg_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->self_entity_cfg_id, v16);
  }
  this->self_entity_cfg_id = self_entity_cfg_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->enemy_entity_cfg_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->enemy_entity_cfg_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->enemy_entity_cfg_id);
  }
  enemy_entity_cfg_id = v21->enemy_entity_cfg_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->enemy_entity_cfg_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->enemy_entity_cfg_id, v16);
  }
  this->enemy_entity_cfg_id = enemy_entity_cfg_id;
};

// Line 101: range 0000000013420D06-0000000013420D57
void __cdecl data::ElectroherculesBattleLevelExcelConfig::~ElectroherculesBattleLevelExcelConfig(
        data::ElectroherculesBattleLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ElectroherculesBattleLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ElectroherculesBattleLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
};

// Line 101: range 0000000013420D58-0000000013420D82
void __cdecl data::ElectroherculesBattleLevelExcelConfig::~ElectroherculesBattleLevelExcelConfig(
        data::ElectroherculesBattleLevelExcelConfig *const this)
{
  data::ElectroherculesBattleLevelExcelConfig::~ElectroherculesBattleLevelExcelConfig(this);
  operator delete(this, 0x40uLL);
};

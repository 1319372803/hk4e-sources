// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityAsterExcelConfig.gen.h

// Line 42: range 0000000012EAF416-0000000012EAF503
void __cdecl data::AsterLittleExcelConfig::AsterLittleExcelConfig(data::AsterLittleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterLittleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterLittleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  std::vector<unsigned int>::vector(&this->next_stage_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v1);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->mission_vec);
  std::vector<unsigned int>::vector(&this->watcher_id_vec);
};

// Line 42: range 00000000133874D4-0000000013387690
void __cdecl data::AsterLittleExcelConfig::AsterLittleExcelConfig(
        data::AsterLittleExcelConfig *const this,
        const data::AsterLittleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_next_stage_id_vec; // rsi
  uint32_t open_day; // ecx
  char v7; // al
  const data::AsterLittleExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AsterLittleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AsterLittleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stage_id);
  }
  stage_id = a2->stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stage_id, a2);
  }
  this->stage_id = stage_id;
  p_next_stage_id_vec = &v8->next_stage_id_vec;
  std::vector<unsigned int>::vector(&this->next_stage_id_vec, &v8->next_stage_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v8->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->open_day);
  }
  open_day = v8->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_next_stage_id_vec) = v7 != 0;
    __asan_report_store4(&this->open_day, p_next_stage_id_vec);
  }
  this->open_day = open_day;
  std::vector<unsigned int>::vector(&this->mission_vec, &v8->mission_vec);
  std::vector<unsigned int>::vector(&this->watcher_id_vec, &v8->watcher_id_vec);
};

// Line 45: range 00000000134269E2-0000000013426A0C
void __cdecl data::AsterLittleExcelConfig::~AsterLittleExcelConfig(data::AsterLittleExcelConfig *const this)
{
  data::AsterLittleExcelConfig::~AsterLittleExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 45: range 0000000013426970-00000000134269E1
void __cdecl data::AsterLittleExcelConfig::~AsterLittleExcelConfig(data::AsterLittleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterLittleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterLittleExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_vec);
  std::vector<unsigned int>::~vector(&this->mission_vec);
  std::vector<unsigned int>::~vector(&this->next_stage_id_vec);
};

// Line 60: range 0000000012EAF504-0000000012EAF593
void __cdecl data::AsterMidExcelConfig::AsterMidExcelConfig(data::AsterMidExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterMidExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterMidExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->camp_vec);
};

// Line 60: range 00000000133877D2-00000000133878A7
void __cdecl data::AsterMidExcelConfig::AsterMidExcelConfig(
        data::AsterMidExcelConfig *const this,
        const data::AsterMidExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::AsterMidExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AsterMidExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AsterMidExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->camp_vec, &v5->camp_vec);
};

// Line 63: range 0000000013426944-000000001342696E
void __cdecl data::AsterMidExcelConfig::~AsterMidExcelConfig(data::AsterMidExcelConfig *const this)
{
  data::AsterMidExcelConfig::~AsterMidExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 63: range 00000000134268F2-0000000013426943
void __cdecl data::AsterMidExcelConfig::~AsterMidExcelConfig(data::AsterMidExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterMidExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterMidExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->camp_vec);
};

// Line 75: range 0000000012EAF594-0000000012EAF669
void __cdecl data::AsterMidGroupsExcelConfig::AsterMidGroupsExcelConfig(data::AsterMidGroupsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterMidGroupsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterMidGroupsExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->group_id = 0;
  std::vector<unsigned int>::vector(&this->battle_group_vec);
};

// Line 75: range 00000000133879E8-0000000013387B42
void __cdecl data::AsterMidGroupsExcelConfig::AsterMidGroupsExcelConfig(
        data::AsterMidGroupsExcelConfig *const this,
        const data::AsterMidGroupsExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  const data::AsterMidGroupsExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AsterMidGroupsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AsterMidGroupsExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->group_id);
  }
  group_id = v8->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->battle_group_vec, &v8->battle_group_vec);
};

// Line 78: range 00000000134268C6-00000000134268F0
void __cdecl data::AsterMidGroupsExcelConfig::~AsterMidGroupsExcelConfig(data::AsterMidGroupsExcelConfig *const this)
{
  data::AsterMidGroupsExcelConfig::~AsterMidGroupsExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 78: range 0000000013426874-00000000134268C5
void __cdecl data::AsterMidGroupsExcelConfig::~AsterMidGroupsExcelConfig(data::AsterMidGroupsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterMidGroupsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterMidGroupsExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->battle_group_vec);
};

// Line 91: range 0000000012EAF66A-0000000012EAF83E
void __cdecl data::AsterMidDifficultyExcelConfig::AsterMidDifficultyExcelConfig(
        data::AsterMidDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::AsterMidDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterMidDifficultyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->world_level_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v1);
  }
  this->drop_id = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->resin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->resin, v3);
  }
  this->resin = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->recommend_level);
  }
  this->recommend_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_level, (((_BYTE)this + 52) & 7u) + 1);
  }
  this->monster_level = 0;
};

// Line 91: range 0000000013387C84-0000000013387FC4
void __cdecl data::AsterMidDifficultyExcelConfig::AsterMidDifficultyExcelConfig(
        data::AsterMidDifficultyExcelConfig *const this,
        const data::AsterMidDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_world_level_vec; // rsi
  uint32_t drop_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t reward_id; // ecx
  char v10; // dl
  uint32_t resin; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint16_t recommend_level; // cx
  uint32_t monster_level; // ecx
  char v16; // al
  const data::AsterMidDifficultyExcelConfig *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AsterMidDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AsterMidDifficultyExcelConfig = v2;
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
  p_world_level_vec = &v17->world_level_vec;
  std::vector<unsigned int>::vector(&this->world_level_vec, &v17->world_level_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v17->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->drop_id);
  }
  drop_id = v17->drop_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_world_level_vec) = v7 != 0;
    __asan_report_store4(&this->drop_id, p_world_level_vec);
  }
  this->drop_id = drop_id;
  v8 = (((_BYTE)v17 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->reward_id);
  }
  reward_id = v17->reward_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->reward_id, v8);
  }
  this->reward_id = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v17->resin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->resin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->resin);
  }
  resin = v17->resin;
  v12 = *(_BYTE *)(((unsigned __int64)&this->resin >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->resin, v8);
  }
  this->resin = resin;
  v13 = (((_BYTE)v17 + 52) & 7u) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&v17->recommend_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 52) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&v17->recommend_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&v17->recommend_level);
  }
  recommend_level = v17->recommend_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->recommend_level);
  }
  this->recommend_level = recommend_level;
  if ( *(_BYTE *)(((unsigned __int64)&v17->monster_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->monster_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->monster_level);
  }
  monster_level = v17->monster_level;
  v16 = *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v13) = v16 != 0;
    __asan_report_store4(&this->monster_level, v13);
  }
  this->monster_level = monster_level;
};

// Line 94: range 0000000013426848-0000000013426872
void __cdecl data::AsterMidDifficultyExcelConfig::~AsterMidDifficultyExcelConfig(
        data::AsterMidDifficultyExcelConfig *const this)
{
  data::AsterMidDifficultyExcelConfig::~AsterMidDifficultyExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 94: range 00000000134267F6-0000000013426847
void __cdecl data::AsterMidDifficultyExcelConfig::~AsterMidDifficultyExcelConfig(
        data::AsterMidDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterMidDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterMidDifficultyExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->world_level_vec);
};

// Line 111: range 0000000013388106-00000000133882BA
void __cdecl data::AsterMissionExcelConfig::AsterMissionExcelConfig(
        data::AsterMissionExcelConfig *const this,
        const data::AsterMissionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t mission_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t phase; // ecx
  char v7; // dl
  uint32_t watcher_id; // ecx
  char v9; // al
  const data::AsterMissionExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AsterMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AsterMissionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mission_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mission_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mission_id);
  }
  mission_id = a2->mission_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->mission_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->mission_id, a2);
  }
  this->mission_id = mission_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->phase >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->phase >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->phase);
  }
  phase = v10->phase;
  v7 = *(_BYTE *)(((unsigned __int64)&this->phase >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->phase, v5);
  }
  this->phase = phase;
  if ( *(_BYTE *)(((unsigned __int64)&v10->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->watcher_id);
  }
  watcher_id = v10->watcher_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->watcher_id, v5);
  }
  this->watcher_id = watcher_id;
};

// Line 114: range 00000000134267CA-00000000134267F4
void __cdecl data::AsterMissionExcelConfig::~AsterMissionExcelConfig(data::AsterMissionExcelConfig *const this)
{
  data::AsterMissionExcelConfig::~AsterMissionExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 114: range 0000000013426788-00000000134267C9
void __cdecl data::AsterMissionExcelConfig::~AsterMissionExcelConfig(data::AsterMissionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterMissionExcelConfig = v2;
};

// Line 127: range 0000000012EAF840-0000000012EAFA9F
void __cdecl data::AsterStageExcelConfig::AsterStageExcelConfig(data::AsterStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::AsterStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chapter_id, v3);
  }
  this->chapter_id = 0;
  std::string::basic_string(&this->title);
  std::string::basic_string(&this->stage_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->openday >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->openday >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->openday, v3);
  }
  this->openday = 0;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_quest_id, v4);
  }
  this->open_quest_id = 0;
  std::string::basic_string(&this->intro);
  std::string::basic_string(&this->story);
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_score, v4);
  }
  this->unlock_score = 0;
  std::vector<unsigned int>::vector(&this->quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_preview_id, v4);
  }
  this->reward_preview_id = 0;
};

// Line 127: range 000000001337E850-000000001337ECEE
void __cdecl data::AsterStageExcelConfig::AsterStageExcelConfig(
        data::AsterStageExcelConfig *const this,
        const data::AsterStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t chapter_id; // ecx
  char v9; // al
  std::string *p_stage_name; // rsi
  uint32_t openday; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t open_quest_id; // ecx
  char v15; // dl
  std::string *p_story; // rsi
  uint32_t unlock_score; // ecx
  char v18; // al
  std::vector<unsigned int> *p_quest_id_list; // rsi
  uint32_t reward_preview_id; // ecx
  char v21; // al
  const data::AsterStageExcelConfig *v22; // [rsp+0h] [rbp-20h]

  v22 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AsterStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AsterStageExcelConfig = v2;
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
  v5 = (((_BYTE)v22 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->activity_id);
  }
  activity_id = v22->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v22->chapter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->chapter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->chapter_id);
  }
  chapter_id = v22->chapter_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
  std::string::basic_string(&this->title, &v22->title);
  p_stage_name = &v22->stage_name;
  std::string::basic_string(&this->stage_name, &v22->stage_name);
  if ( *(_BYTE *)(((unsigned __int64)&v22->openday >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->openday >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->openday);
  }
  openday = v22->openday;
  v12 = *(_BYTE *)(((unsigned __int64)&this->openday >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_stage_name) = v12 != 0;
    __asan_report_store4(&this->openday, p_stage_name);
  }
  this->openday = openday;
  v13 = (((_BYTE)v22 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->open_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->open_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->open_quest_id);
  }
  open_quest_id = v22->open_quest_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->open_quest_id, v13);
  }
  this->open_quest_id = open_quest_id;
  std::string::basic_string(&this->intro, &v22->intro);
  p_story = &v22->story;
  std::string::basic_string(&this->story, &v22->story);
  if ( *(_BYTE *)(((unsigned __int64)&v22->unlock_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->unlock_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->unlock_score);
  }
  unlock_score = v22->unlock_score;
  v18 = *(_BYTE *)(((unsigned __int64)&this->unlock_score >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_story) = v18 != 0;
    __asan_report_store4(&this->unlock_score, p_story);
  }
  this->unlock_score = unlock_score;
  p_quest_id_list = &v22->quest_id_list;
  std::vector<unsigned int>::vector(&this->quest_id_list, &v22->quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v22->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->reward_preview_id);
  }
  reward_preview_id = v22->reward_preview_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(p_quest_id_list) = v21 != 0;
    __asan_report_store4(&this->reward_preview_id, p_quest_id_list);
  }
  this->reward_preview_id = reward_preview_id;
};

// Line 130: range 000000001342675C-0000000013426786
void __cdecl data::AsterStageExcelConfig::~AsterStageExcelConfig(data::AsterStageExcelConfig *const this)
{
  data::AsterStageExcelConfig::~AsterStageExcelConfig(this);
  operator delete(this, 0xC8uLL);
};

// Line 130: range 00000000134266C8-000000001342675B
void __cdecl data::AsterStageExcelConfig::~AsterStageExcelConfig(data::AsterStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->quest_id_list);
  std::string::~string(&this->story);
  std::string::~string(&this->intro);
  std::string::~string(&this->stage_name);
  std::string::~string(&this->title);
};

// Line 152: range 0000000012EAFAA0-0000000012EAFBB3
void __cdecl data::AsterActivityPerviewExcelConfig::AsterActivityPerviewExcelConfig(
        data::AsterActivityPerviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterActivityPerviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterActivityPerviewExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v1);
  }
  this->activity_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->special_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->special_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->special_reward_id, v1);
  }
  this->special_reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_stay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_stay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_stay_time, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->activity_stay_time = 0;
};

// Line 152: range 000000001337E4D8-000000001337E6A7
void __cdecl data::AsterActivityPerviewExcelConfig::AsterActivityPerviewExcelConfig(
        data::AsterActivityPerviewExcelConfig *const this,
        const data::AsterActivityPerviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_watcher_list; // rsi
  uint32_t special_reward_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t activity_stay_time; // ecx
  char v10; // dl
  const data::AsterActivityPerviewExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AsterActivityPerviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AsterActivityPerviewExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  p_watcher_list = &v11->watcher_list;
  std::vector<unsigned int>::vector(&this->watcher_list, &v11->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->special_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->special_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->special_reward_id);
  }
  special_reward_id = v11->special_reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->special_reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_watcher_list) = v7 != 0;
    __asan_report_store4(&this->special_reward_id, p_watcher_list);
  }
  this->special_reward_id = special_reward_id;
  v8 = (((_BYTE)v11 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->activity_stay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->activity_stay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->activity_stay_time);
  }
  activity_stay_time = v11->activity_stay_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->activity_stay_time >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->activity_stay_time, v8);
  }
  this->activity_stay_time = activity_stay_time;
};

// Line 155: range 000000001342669C-00000000134266C6
void __cdecl data::AsterActivityPerviewExcelConfig::~AsterActivityPerviewExcelConfig(
        data::AsterActivityPerviewExcelConfig *const this)
{
  data::AsterActivityPerviewExcelConfig::~AsterActivityPerviewExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 155: range 000000001342664A-000000001342669B
void __cdecl data::AsterActivityPerviewExcelConfig::~AsterActivityPerviewExcelConfig(
        data::AsterActivityPerviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AsterActivityPerviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AsterActivityPerviewExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_list);
};

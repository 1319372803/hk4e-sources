// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityCrystalLinkExcelConfig.gen.h

// Line 41: range 0000000012EB87B8-0000000012EB8941
void __cdecl data::ActivityCrystalLinkLevelExcelConfig::ActivityCrystalLinkLevelExcelConfig(
        data::ActivityCrystalLinkLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCrystalLinkLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->schedule_id, v3);
  }
  this->schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_list);
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  std::vector<unsigned int>::vector(&this->cond_buff_id_list);
  std::vector<unsigned int>::vector(&this->effect_buff_id_list);
};

// Line 41: range 0000000013397C7A-0000000013397F70
void __cdecl data::ActivityCrystalLinkLevelExcelConfig::ActivityCrystalLinkLevelExcelConfig(
        data::ActivityCrystalLinkLevelExcelConfig *const this,
        const data::ActivityCrystalLinkLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t dungeon_id; // ecx
  char v12; // dl
  const data::ActivityCrystalLinkLevelExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityCrystalLinkLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->schedule_id);
  }
  schedule_id = v13->schedule_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->schedule_id, v5);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->open_day);
  }
  open_day = v13->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->dungeon_id);
  }
  dungeon_id = v13->dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->dungeon_id, v10);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::vector(&this->trial_avatar_list, &v13->trial_avatar_list);
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v13->watcher_id_list);
  std::vector<unsigned int>::vector(&this->cond_buff_id_list, &v13->cond_buff_id_list);
  std::vector<unsigned int>::vector(&this->effect_buff_id_list, &v13->effect_buff_id_list);
};

// Line 44: range 0000000013422F12-0000000013422F3C
void __cdecl data::ActivityCrystalLinkLevelExcelConfig::~ActivityCrystalLinkLevelExcelConfig(
        data::ActivityCrystalLinkLevelExcelConfig *const this)
{
  data::ActivityCrystalLinkLevelExcelConfig::~ActivityCrystalLinkLevelExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 44: range 0000000013422E90-0000000013422F11
void __cdecl data::ActivityCrystalLinkLevelExcelConfig::~ActivityCrystalLinkLevelExcelConfig(
        data::ActivityCrystalLinkLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCrystalLinkLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->effect_buff_id_list);
  std::vector<unsigned int>::~vector(&this->cond_buff_id_list);
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
  std::vector<unsigned int>::~vector(&this->trial_avatar_list);
};

// Line 62: range 0000000012EB8942-0000000012EB89D1
void __cdecl data::ActivityCrystalLinkCondBuffExcelConfig::ActivityCrystalLinkCondBuffExcelConfig(
        data::ActivityCrystalLinkCondBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkCondBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCrystalLinkCondBuffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_id, v1);
  }
  this->buff_id = 0;
  std::string::basic_string(&this->ability_group_name);
};

// Line 62: range 00000000133980B2-0000000013398187
void __cdecl data::ActivityCrystalLinkCondBuffExcelConfig::ActivityCrystalLinkCondBuffExcelConfig(
        data::ActivityCrystalLinkCondBuffExcelConfig *const this,
        const data::ActivityCrystalLinkCondBuffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t buff_id; // ecx
  char v4; // al
  const data::ActivityCrystalLinkCondBuffExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkCondBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityCrystalLinkCondBuffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->buff_id);
  }
  buff_id = a2->buff_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->buff_id, a2);
  }
  this->buff_id = buff_id;
  std::string::basic_string(&this->ability_group_name, &v5->ability_group_name);
};

// Line 65: range 0000000013422E12-0000000013422E63
void __cdecl data::ActivityCrystalLinkCondBuffExcelConfig::~ActivityCrystalLinkCondBuffExcelConfig(
        data::ActivityCrystalLinkCondBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkCondBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCrystalLinkCondBuffExcelConfig = v2;
  std::string::~string(&this->ability_group_name);
};

// Line 65: range 0000000013422E64-0000000013422E8E
void __cdecl data::ActivityCrystalLinkCondBuffExcelConfig::~ActivityCrystalLinkCondBuffExcelConfig(
        data::ActivityCrystalLinkCondBuffExcelConfig *const this)
{
  data::ActivityCrystalLinkCondBuffExcelConfig::~ActivityCrystalLinkCondBuffExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 77: range 0000000012EB89D2-0000000012EB8A61
void __cdecl data::ActivityCrystalLinkEffectBuffExcelConfig::ActivityCrystalLinkEffectBuffExcelConfig(
        data::ActivityCrystalLinkEffectBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkEffectBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCrystalLinkEffectBuffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_id, v1);
  }
  this->buff_id = 0;
  std::string::basic_string(&this->ability_group_name);
};

// Line 77: range 00000000133982C8-000000001339839D
void __cdecl data::ActivityCrystalLinkEffectBuffExcelConfig::ActivityCrystalLinkEffectBuffExcelConfig(
        data::ActivityCrystalLinkEffectBuffExcelConfig *const this,
        const data::ActivityCrystalLinkEffectBuffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t buff_id; // ecx
  char v4; // al
  const data::ActivityCrystalLinkEffectBuffExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkEffectBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityCrystalLinkEffectBuffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->buff_id);
  }
  buff_id = a2->buff_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->buff_id, a2);
  }
  this->buff_id = buff_id;
  std::string::basic_string(&this->ability_group_name, &v5->ability_group_name);
};

// Line 80: range 0000000013422D94-0000000013422DE5
void __cdecl data::ActivityCrystalLinkEffectBuffExcelConfig::~ActivityCrystalLinkEffectBuffExcelConfig(
        data::ActivityCrystalLinkEffectBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkEffectBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCrystalLinkEffectBuffExcelConfig = v2;
  std::string::~string(&this->ability_group_name);
};

// Line 80: range 0000000013422DE6-0000000013422E10
void __cdecl data::ActivityCrystalLinkEffectBuffExcelConfig::~ActivityCrystalLinkEffectBuffExcelConfig(
        data::ActivityCrystalLinkEffectBuffExcelConfig *const this)
{
  data::ActivityCrystalLinkEffectBuffExcelConfig::~ActivityCrystalLinkEffectBuffExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 92: range 00000000133984DE-000000001339871A
void __cdecl data::ActivityCrystalLinkDifficultyExcelConfig::ActivityCrystalLinkDifficultyExcelConfig(
        data::ActivityCrystalLinkDifficultyExcelConfig *const this,
        const data::ActivityCrystalLinkDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t difficulty_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  uint32_t dungeon_level; // ecx
  char v9; // al
  float score_ratio; // xmm0_4
  const data::ActivityCrystalLinkDifficultyExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityCrystalLinkDifficultyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->difficulty_id);
  }
  difficulty_id = a2->difficulty_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->difficulty_id, a2);
  }
  this->difficulty_id = difficulty_id;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->schedule_id);
  }
  schedule_id = v11->schedule_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->schedule_id, v5);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v11->dungeon_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->dungeon_level);
  }
  dungeon_level = v11->dungeon_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->dungeon_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->dungeon_level, v5);
  }
  this->dungeon_level = dungeon_level;
  if ( *(_BYTE *)(((unsigned __int64)&v11->score_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->score_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->score_ratio);
  }
  score_ratio = v11->score_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_ratio, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->score_ratio = score_ratio;
};

// Line 95: range 0000000013422D68-0000000013422D92
void __cdecl data::ActivityCrystalLinkDifficultyExcelConfig::~ActivityCrystalLinkDifficultyExcelConfig(
        data::ActivityCrystalLinkDifficultyExcelConfig *const this)
{
  data::ActivityCrystalLinkDifficultyExcelConfig::~ActivityCrystalLinkDifficultyExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 95: range 0000000013422D26-0000000013422D67
void __cdecl data::ActivityCrystalLinkDifficultyExcelConfig::~ActivityCrystalLinkDifficultyExcelConfig(
        data::ActivityCrystalLinkDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCrystalLinkDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCrystalLinkDifficultyExcelConfig = v2;
};

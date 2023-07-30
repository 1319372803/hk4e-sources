// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityDuelHeartConfig.gen.h

// Line 42: range 000000001339BEEC-000000001339BFA6
void __cdecl data::ActivityDuelHeartExcelConfig::ActivityDuelHeartExcelConfig(
        data::ActivityDuelHeartExcelConfig *const this,
        const data::ActivityDuelHeartExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::ActivityDuelHeartExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityDuelHeartExcelConfig = v2;
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
};

// Line 45: range 0000000013420CDA-0000000013420D04
void __cdecl data::ActivityDuelHeartExcelConfig::~ActivityDuelHeartExcelConfig(
        data::ActivityDuelHeartExcelConfig *const this)
{
  data::ActivityDuelHeartExcelConfig::~ActivityDuelHeartExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 45: range 0000000013420C98-0000000013420CD9
void __cdecl data::ActivityDuelHeartExcelConfig::~ActivityDuelHeartExcelConfig(
        data::ActivityDuelHeartExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityDuelHeartExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityDuelHeartExcelConfig = v2;
};

// Line 56: range 000000001339C0E8-000000001339C29C
void __cdecl data::ActivityDuelHeartTaskExcelConfig::ActivityDuelHeartTaskExcelConfig(
        data::ActivityDuelHeartTaskExcelConfig *const this,
        const data::ActivityDuelHeartTaskExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t quest_id; // ecx
  char v7; // dl
  uint32_t unlock_day; // ecx
  char v9; // al
  const data::ActivityDuelHeartTaskExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityDuelHeartTaskExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityDuelHeartTaskExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->quest_id);
  }
  quest_id = v10->quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->unlock_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->unlock_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->unlock_day);
  }
  unlock_day = v10->unlock_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->unlock_day, v5);
  }
  this->unlock_day = unlock_day;
};

// Line 59: range 0000000013420C2A-0000000013420C6B
void __cdecl data::ActivityDuelHeartTaskExcelConfig::~ActivityDuelHeartTaskExcelConfig(
        data::ActivityDuelHeartTaskExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityDuelHeartTaskExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityDuelHeartTaskExcelConfig = v2;
};

// Line 59: range 0000000013420C6C-0000000013420C96
void __cdecl data::ActivityDuelHeartTaskExcelConfig::~ActivityDuelHeartTaskExcelConfig(
        data::ActivityDuelHeartTaskExcelConfig *const this)
{
  data::ActivityDuelHeartTaskExcelConfig::~ActivityDuelHeartTaskExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 72: range 000000001339C3DE-000000001339C592
void __cdecl data::ActivityDuelHeartDifficultyExcelConfig::ActivityDuelHeartDifficultyExcelConfig(
        data::ActivityDuelHeartDifficultyExcelConfig *const this,
        const data::ActivityDuelHeartDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level_id; // ecx
  char v7; // dl
  data::DuelHeartDifficultyType difficulty; // ecx
  char v9; // al
  const data::ActivityDuelHeartDifficultyExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityDuelHeartDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityDuelHeartDifficultyExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->level_id);
  }
  level_id = v10->level_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level_id, v5);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->difficulty);
  }
  difficulty = v10->difficulty;
  v9 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->difficulty, v5);
  }
  this->difficulty = difficulty;
};

// Line 75: range 0000000013420BBC-0000000013420BFD
void __cdecl data::ActivityDuelHeartDifficultyExcelConfig::~ActivityDuelHeartDifficultyExcelConfig(
        data::ActivityDuelHeartDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityDuelHeartDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityDuelHeartDifficultyExcelConfig = v2;
};

// Line 75: range 0000000013420BFE-0000000013420C28
void __cdecl data::ActivityDuelHeartDifficultyExcelConfig::~ActivityDuelHeartDifficultyExcelConfig(
        data::ActivityDuelHeartDifficultyExcelConfig *const this)
{
  data::ActivityDuelHeartDifficultyExcelConfig::~ActivityDuelHeartDifficultyExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 88: range 0000000012EBA5BC-0000000012EBA715
void __cdecl data::ActivityDuelHeartLevelExcelConfig::ActivityDuelHeartLevelExcelConfig(
        data::ActivityDuelHeartLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityDuelHeartLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityDuelHeartLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->gallery_id = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_id_list);
};

// Line 88: range 000000001339C6D4-000000001339C928
void __cdecl data::ActivityDuelHeartLevelExcelConfig::ActivityDuelHeartLevelExcelConfig(
        data::ActivityDuelHeartLevelExcelConfig *const this,
        const data::ActivityDuelHeartLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  const data::ActivityDuelHeartLevelExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityDuelHeartLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityDuelHeartLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->dungeon_id);
  }
  dungeon_id = v13->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->group_id);
  }
  group_id = v13->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->gallery_id);
  }
  gallery_id = v13->gallery_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  std::vector<unsigned int>::vector(&this->trial_avatar_id_list, &v13->trial_avatar_id_list);
};

// Line 91: range 0000000013420B90-0000000013420BBA
void __cdecl data::ActivityDuelHeartLevelExcelConfig::~ActivityDuelHeartLevelExcelConfig(
        data::ActivityDuelHeartLevelExcelConfig *const this)
{
  data::ActivityDuelHeartLevelExcelConfig::~ActivityDuelHeartLevelExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 91: range 0000000013420B3E-0000000013420B8F
void __cdecl data::ActivityDuelHeartLevelExcelConfig::~ActivityDuelHeartLevelExcelConfig(
        data::ActivityDuelHeartLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityDuelHeartLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityDuelHeartLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->trial_avatar_id_list);
};

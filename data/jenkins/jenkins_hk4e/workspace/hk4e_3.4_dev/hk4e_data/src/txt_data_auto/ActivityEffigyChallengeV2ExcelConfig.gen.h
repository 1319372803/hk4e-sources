// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityEffigyChallengeV2ExcelConfig.gen.h

// Line 17: range 0000000012EBC334-0000000012EBC4B5
void __cdecl data::EffigyChallengeV2ExcelConfig::EffigyChallengeV2ExcelConfig(
        data::EffigyChallengeV2ExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2ExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyChallengeV2ExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index, v3);
  }
  this->day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->normal_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normal_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normal_dungeon_id, v3);
  }
  this->normal_dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->normal_gallery_id_list);
  std::vector<unsigned int>::vector(&this->normal_skill_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_dungeon_id, v3);
  }
  this->challenge_dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->challenge_gallery_id_list);
  std::vector<unsigned int>::vector(&this->challenge_skill_id_list);
};

// Line 17: range 000000001339FE9A-00000000133A0180
void __cdecl data::EffigyChallengeV2ExcelConfig::EffigyChallengeV2ExcelConfig(
        data::EffigyChallengeV2ExcelConfig *const this,
        const data::EffigyChallengeV2ExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  uint32_t normal_dungeon_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_normal_skill_id_list; // rsi
  uint32_t challenge_dungeon_id; // ecx
  char v12; // al
  const data::EffigyChallengeV2ExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2ExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EffigyChallengeV2ExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->day_index);
  }
  day_index = v13->day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  if ( *(_BYTE *)(((unsigned __int64)&v13->normal_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->normal_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->normal_dungeon_id);
  }
  normal_dungeon_id = v13->normal_dungeon_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->normal_dungeon_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->normal_dungeon_id, v5);
  }
  this->normal_dungeon_id = normal_dungeon_id;
  std::vector<unsigned int>::vector(&this->normal_gallery_id_list, &v13->normal_gallery_id_list);
  p_normal_skill_id_list = &v13->normal_skill_id_list;
  std::vector<unsigned int>::vector(&this->normal_skill_id_list, &v13->normal_skill_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v13->challenge_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->challenge_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->challenge_dungeon_id);
  }
  challenge_dungeon_id = v13->challenge_dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->challenge_dungeon_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_normal_skill_id_list) = v12 != 0;
    __asan_report_store4(&this->challenge_dungeon_id, p_normal_skill_id_list);
  }
  this->challenge_dungeon_id = challenge_dungeon_id;
  std::vector<unsigned int>::vector(&this->challenge_gallery_id_list, &v13->challenge_gallery_id_list);
  std::vector<unsigned int>::vector(&this->challenge_skill_id_list, &v13->challenge_skill_id_list);
};

// Line 20: range 000000001342150A-0000000013421534
void __cdecl data::EffigyChallengeV2ExcelConfig::~EffigyChallengeV2ExcelConfig(
        data::EffigyChallengeV2ExcelConfig *const this)
{
  data::EffigyChallengeV2ExcelConfig::~EffigyChallengeV2ExcelConfig(this);
  operator delete(this, 0x80uLL);
};

// Line 20: range 0000000013421488-0000000013421509
void __cdecl data::EffigyChallengeV2ExcelConfig::~EffigyChallengeV2ExcelConfig(
        data::EffigyChallengeV2ExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2ExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyChallengeV2ExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->challenge_skill_id_list);
  std::vector<unsigned int>::~vector(&this->challenge_gallery_id_list);
  std::vector<unsigned int>::~vector(&this->normal_skill_id_list);
  std::vector<unsigned int>::~vector(&this->normal_gallery_id_list);
};

// Line 38: range 0000000012EBC4B6-0000000012EBC545
void __cdecl data::EffigyChallengeV2SkillExcelConfig::EffigyChallengeV2SkillExcelConfig(
        data::EffigyChallengeV2SkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2SkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyChallengeV2SkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->ability_name);
};

// Line 38: range 00000000133A02C2-00000000133A0397
void __cdecl data::EffigyChallengeV2SkillExcelConfig::EffigyChallengeV2SkillExcelConfig(
        data::EffigyChallengeV2SkillExcelConfig *const this,
        const data::EffigyChallengeV2SkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::EffigyChallengeV2SkillExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2SkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EffigyChallengeV2SkillExcelConfig = v2;
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
  std::string::basic_string(&this->ability_name, &v5->ability_name);
};

// Line 41: range 000000001342145C-0000000013421486
void __cdecl data::EffigyChallengeV2SkillExcelConfig::~EffigyChallengeV2SkillExcelConfig(
        data::EffigyChallengeV2SkillExcelConfig *const this)
{
  data::EffigyChallengeV2SkillExcelConfig::~EffigyChallengeV2SkillExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 41: range 000000001342140A-000000001342145B
void __cdecl data::EffigyChallengeV2SkillExcelConfig::~EffigyChallengeV2SkillExcelConfig(
        data::EffigyChallengeV2SkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2SkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyChallengeV2SkillExcelConfig = v2;
  std::string::~string(&this->ability_name);
};

// Line 53: range 00000000133A04D8-00000000133A068C
void __cdecl data::EffigyChallengeV2DifficultyExcelConfig::EffigyChallengeV2DifficultyExcelConfig(
        data::EffigyChallengeV2DifficultyExcelConfig *const this,
        const data::EffigyChallengeV2DifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t revise_level; // ecx
  char v7; // dl
  uint32_t skill_use_time_limit; // ecx
  char v9; // al
  const data::EffigyChallengeV2DifficultyExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2DifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EffigyChallengeV2DifficultyExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->revise_level);
  }
  revise_level = v10->revise_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->revise_level, v5);
  }
  this->revise_level = revise_level;
  if ( *(_BYTE *)(((unsigned __int64)&v10->skill_use_time_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->skill_use_time_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->skill_use_time_limit);
  }
  skill_use_time_limit = v10->skill_use_time_limit;
  v9 = *(_BYTE *)(((unsigned __int64)&this->skill_use_time_limit >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->skill_use_time_limit, v5);
  }
  this->skill_use_time_limit = skill_use_time_limit;
};

// Line 56: range 000000001342139C-00000000134213DD
void __cdecl data::EffigyChallengeV2DifficultyExcelConfig::~EffigyChallengeV2DifficultyExcelConfig(
        data::EffigyChallengeV2DifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2DifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyChallengeV2DifficultyExcelConfig = v2;
};

// Line 56: range 00000000134213DE-0000000013421408
void __cdecl data::EffigyChallengeV2DifficultyExcelConfig::~EffigyChallengeV2DifficultyExcelConfig(
        data::EffigyChallengeV2DifficultyExcelConfig *const this)
{
  data::EffigyChallengeV2DifficultyExcelConfig::~EffigyChallengeV2DifficultyExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 69: range 0000000012EBC546-0000000012EBC659
void __cdecl data::EffigyChallengeV2OverallExcelConfig::EffigyChallengeV2OverallExcelConfig(
        data::EffigyChallengeV2OverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2OverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyChallengeV2OverallExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->schedule_id, v3);
  }
  this->schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->highest_difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->highest_difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->highest_difficulty, v3);
  }
  this->highest_difficulty = 0;
  std::string::basic_string(&this->t_skill_global_value);
};

// Line 69: range 00000000133A07CE-00000000133A099D
void __cdecl data::EffigyChallengeV2OverallExcelConfig::EffigyChallengeV2OverallExcelConfig(
        data::EffigyChallengeV2OverallExcelConfig *const this,
        const data::EffigyChallengeV2OverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  uint32_t highest_difficulty; // ecx
  char v9; // al
  const data::EffigyChallengeV2OverallExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2OverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EffigyChallengeV2OverallExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->schedule_id);
  }
  schedule_id = v10->schedule_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->schedule_id, v5);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->highest_difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->highest_difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->highest_difficulty);
  }
  highest_difficulty = v10->highest_difficulty;
  v9 = *(_BYTE *)(((unsigned __int64)&this->highest_difficulty >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->highest_difficulty, v5);
  }
  this->highest_difficulty = highest_difficulty;
  std::string::basic_string(&this->t_skill_global_value, &v10->t_skill_global_value);
};

// Line 72: range 0000000013421370-000000001342139A
void __cdecl data::EffigyChallengeV2OverallExcelConfig::~EffigyChallengeV2OverallExcelConfig(
        data::EffigyChallengeV2OverallExcelConfig *const this)
{
  data::EffigyChallengeV2OverallExcelConfig::~EffigyChallengeV2OverallExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 72: range 000000001342131E-000000001342136F
void __cdecl data::EffigyChallengeV2OverallExcelConfig::~EffigyChallengeV2OverallExcelConfig(
        data::EffigyChallengeV2OverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeV2OverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyChallengeV2OverallExcelConfig = v2;
  std::string::~string(&this->t_skill_global_value);
};

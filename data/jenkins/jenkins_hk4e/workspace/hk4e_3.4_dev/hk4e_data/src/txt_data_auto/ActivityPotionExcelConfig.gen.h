// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityPotionExcelConfig.gen.h

// Line 17: range 00000000133C7D48-00000000133C7F8A
void __cdecl data::ActivityPotionOverallExcelConfig::ActivityPotionOverallExcelConfig(
        data::ActivityPotionOverallExcelConfig *const this,
        const data::ActivityPotionOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  float score_param_a; // xmm0_4
  __int64 v6; // rsi
  float score_param_b; // xmm0_4
  float score_param_c; // xmm0_4
  const data::ActivityPotionOverallExcelConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPotionOverallExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v9->score_param_a >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->score_param_a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->score_param_a);
  }
  score_param_a = v9->score_param_a;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_param_a >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_param_a >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_param_a, v6);
  }
  this->score_param_a = score_param_a;
  if ( *(_BYTE *)(((unsigned __int64)&v9->score_param_b >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->score_param_b >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->score_param_b);
  }
  score_param_b = v9->score_param_b;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_param_b >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_param_b >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_param_b, v6);
  }
  this->score_param_b = score_param_b;
  if ( *(_BYTE *)(((unsigned __int64)&v9->score_param_c >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->score_param_c >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->score_param_c);
  }
  score_param_c = v9->score_param_c;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_param_c >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_param_c >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_param_c, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->score_param_c = score_param_c;
};

// Line 20: range 00000000134239A6-00000000134239D0
void __cdecl data::ActivityPotionOverallExcelConfig::~ActivityPotionOverallExcelConfig(
        data::ActivityPotionOverallExcelConfig *const this)
{
  data::ActivityPotionOverallExcelConfig::~ActivityPotionOverallExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 20: range 0000000013423964-00000000134239A5
void __cdecl data::ActivityPotionOverallExcelConfig::~ActivityPotionOverallExcelConfig(
        data::ActivityPotionOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPotionOverallExcelConfig = v2;
};

// Line 34: range 0000000012ED2DF0-0000000012ED2EF5
void __cdecl data::ActivityPotionStageExcelConfig::ActivityPotionStageExcelConfig(
        data::ActivityPotionStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPotionStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->level_id_list);
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  std::vector<unsigned int>::vector(&this->trial_avatar_list);
  std::vector<unsigned int>::vector(&this->buff_id_list);
};

// Line 34: range 00000000133C80CC-00000000133C82C8
void __cdecl data::ActivityPotionStageExcelConfig::ActivityPotionStageExcelConfig(
        data::ActivityPotionStageExcelConfig *const this,
        const data::ActivityPotionStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  const data::ActivityPotionStageExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPotionStageExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->open_day);
  }
  open_day = v8->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  std::vector<unsigned int>::vector(&this->level_id_list, &v8->level_id_list);
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v8->watcher_id_list);
  std::vector<unsigned int>::vector(&this->trial_avatar_list, &v8->trial_avatar_list);
  std::vector<unsigned int>::vector(&this->buff_id_list, &v8->buff_id_list);
};

// Line 37: range 0000000013423938-0000000013423962
void __cdecl data::ActivityPotionStageExcelConfig::~ActivityPotionStageExcelConfig(
        data::ActivityPotionStageExcelConfig *const this)
{
  data::ActivityPotionStageExcelConfig::~ActivityPotionStageExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 37: range 00000000134238B6-0000000013423937
void __cdecl data::ActivityPotionStageExcelConfig::~ActivityPotionStageExcelConfig(
        data::ActivityPotionStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPotionStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->buff_id_list);
  std::vector<unsigned int>::~vector(&this->trial_avatar_list);
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
  std::vector<unsigned int>::~vector(&this->level_id_list);
};

// Line 53: range 0000000012ED2EF6-0000000012ED3009
void __cdecl data::ActivityPotionLevelExcelConfig::ActivityPotionLevelExcelConfig(
        data::ActivityPotionLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPotionLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_count_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_count_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_count_limit, v3);
  }
  this->buff_count_limit = 0;
  std::vector<unsigned int>::vector(&this->medal_score_list);
};

// Line 53: range 00000000133C840A-00000000133C85D9
void __cdecl data::ActivityPotionLevelExcelConfig::ActivityPotionLevelExcelConfig(
        data::ActivityPotionLevelExcelConfig *const this,
        const data::ActivityPotionLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  uint32_t buff_count_limit; // ecx
  char v9; // al
  const data::ActivityPotionLevelExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPotionLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->dungeon_id);
  }
  dungeon_id = v10->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->buff_count_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->buff_count_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->buff_count_limit);
  }
  buff_count_limit = v10->buff_count_limit;
  v9 = *(_BYTE *)(((unsigned __int64)&this->buff_count_limit >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->buff_count_limit, v5);
  }
  this->buff_count_limit = buff_count_limit;
  std::vector<unsigned int>::vector(&this->medal_score_list, &v10->medal_score_list);
};

// Line 56: range 0000000013423838-0000000013423889
void __cdecl data::ActivityPotionLevelExcelConfig::~ActivityPotionLevelExcelConfig(
        data::ActivityPotionLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPotionLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->medal_score_list);
};

// Line 56: range 000000001342388A-00000000134238B4
void __cdecl data::ActivityPotionLevelExcelConfig::~ActivityPotionLevelExcelConfig(
        data::ActivityPotionLevelExcelConfig *const this)
{
  data::ActivityPotionLevelExcelConfig::~ActivityPotionLevelExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 70: range 00000000133C871A-00000000133C88D1
void __cdecl data::ActivityPotionModeChoiceExcelConfig::ActivityPotionModeChoiceExcelConfig(
        data::ActivityPotionModeChoiceExcelConfig *const this,
        const data::ActivityPotionModeChoiceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t mode_id; // ecx
  char v4; // al
  float score_ratio; // xmm0_4
  __int64 v6; // rsi
  uint32_t dungeon_level; // ecx
  char v8; // al
  const data::ActivityPotionModeChoiceExcelConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionModeChoiceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPotionModeChoiceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mode_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mode_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mode_id);
  }
  mode_id = a2->mode_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->mode_id, a2);
  }
  this->mode_id = mode_id;
  if ( *(_BYTE *)(((unsigned __int64)&v9->score_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->score_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->score_ratio);
  }
  score_ratio = v9->score_ratio;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_ratio, v6);
  }
  this->score_ratio = score_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&v9->dungeon_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->dungeon_level);
  }
  dungeon_level = v9->dungeon_level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->dungeon_level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->dungeon_level, v6);
  }
  this->dungeon_level = dungeon_level;
};

// Line 73: range 00000000134237CA-000000001342380B
void __cdecl data::ActivityPotionModeChoiceExcelConfig::~ActivityPotionModeChoiceExcelConfig(
        data::ActivityPotionModeChoiceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionModeChoiceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPotionModeChoiceExcelConfig = v2;
};

// Line 73: range 000000001342380C-0000000013423836
void __cdecl data::ActivityPotionModeChoiceExcelConfig::~ActivityPotionModeChoiceExcelConfig(
        data::ActivityPotionModeChoiceExcelConfig *const this)
{
  data::ActivityPotionModeChoiceExcelConfig::~ActivityPotionModeChoiceExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 86: range 00000000133C8A12-00000000133C8B51
void __cdecl data::ActivityPotionDifficultyExcelConfig::ActivityPotionDifficultyExcelConfig(
        data::ActivityPotionDifficultyExcelConfig *const this,
        const data::ActivityPotionDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t difficulty_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_up_level; // ecx
  char v7; // dl
  const data::ActivityPotionDifficultyExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPotionDifficultyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->difficulty_level);
  }
  difficulty_level = a2->difficulty_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->difficulty_level, a2);
  }
  this->difficulty_level = difficulty_level;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->dungeon_up_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->dungeon_up_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->dungeon_up_level);
  }
  dungeon_up_level = v8->dungeon_up_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_up_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_up_level, v5);
  }
  this->dungeon_up_level = dungeon_up_level;
};

// Line 89: range 000000001342375C-000000001342379D
void __cdecl data::ActivityPotionDifficultyExcelConfig::~ActivityPotionDifficultyExcelConfig(
        data::ActivityPotionDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPotionDifficultyExcelConfig = v2;
};

// Line 89: range 000000001342379E-00000000134237C8
void __cdecl data::ActivityPotionDifficultyExcelConfig::~ActivityPotionDifficultyExcelConfig(
        data::ActivityPotionDifficultyExcelConfig *const this)
{
  data::ActivityPotionDifficultyExcelConfig::~ActivityPotionDifficultyExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 101: range 0000000012ED300A-0000000012ED3099
void __cdecl data::ActivityPotionBuffExcelConfig::ActivityPotionBuffExcelConfig(
        data::ActivityPotionBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPotionBuffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_id, v1);
  }
  this->buff_id = 0;
  std::string::basic_string(&this->ability_group_name);
};

// Line 101: range 00000000133C8C92-00000000133C8D67
void __cdecl data::ActivityPotionBuffExcelConfig::ActivityPotionBuffExcelConfig(
        data::ActivityPotionBuffExcelConfig *const this,
        const data::ActivityPotionBuffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t buff_id; // ecx
  char v4; // al
  const data::ActivityPotionBuffExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPotionBuffExcelConfig = v2;
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

// Line 104: range 0000000013423730-000000001342375A
void __cdecl data::ActivityPotionBuffExcelConfig::~ActivityPotionBuffExcelConfig(
        data::ActivityPotionBuffExcelConfig *const this)
{
  data::ActivityPotionBuffExcelConfig::~ActivityPotionBuffExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 104: range 00000000134236DE-000000001342372F
void __cdecl data::ActivityPotionBuffExcelConfig::~ActivityPotionBuffExcelConfig(
        data::ActivityPotionBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPotionBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPotionBuffExcelConfig = v2;
  std::string::~string(&this->ability_group_name);
};

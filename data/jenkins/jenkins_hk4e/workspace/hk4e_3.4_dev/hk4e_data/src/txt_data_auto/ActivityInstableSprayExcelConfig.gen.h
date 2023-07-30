// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.h

// Line 17: range 00000000130E7F52-00000000130E8106
void __cdecl data::InstableSprayOverallExcelConfig::InstableSprayOverallExcelConfig(
        data::InstableSprayOverallExcelConfig *const this,
        const data::InstableSprayOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  uint32_t weight_down_percent; // ecx
  char v9; // al
  const data::InstableSprayOverallExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InstableSprayOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InstableSprayOverallExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->weight_down_percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->weight_down_percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->weight_down_percent);
  }
  weight_down_percent = v10->weight_down_percent;
  v9 = *(_BYTE *)(((unsigned __int64)&this->weight_down_percent >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->weight_down_percent, v5);
  }
  this->weight_down_percent = weight_down_percent;
};

// Line 20: range 0000000013421EC0-0000000013421F01
void __cdecl data::InstableSprayOverallExcelConfig::~InstableSprayOverallExcelConfig(
        data::InstableSprayOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayOverallExcelConfig = v2;
};

// Line 20: range 0000000013421F02-0000000013421F2C
void __cdecl data::InstableSprayOverallExcelConfig::~InstableSprayOverallExcelConfig(
        data::InstableSprayOverallExcelConfig *const this)
{
  data::InstableSprayOverallExcelConfig::~InstableSprayOverallExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 33: range 0000000012ECA060-0000000012ECA183
void __cdecl data::InstableSprayStageExcelConfig::InstableSprayStageExcelConfig(
        data::InstableSprayStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->level_id_list);
  std::vector<unsigned int>::vector(&this->watcher_list);
};

// Line 33: range 00000000133BB76A-00000000133BB97B
void __cdecl data::InstableSprayStageExcelConfig::InstableSprayStageExcelConfig(
        data::InstableSprayStageExcelConfig *const this,
        const data::InstableSprayStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  uint32_t dungeon_id; // ecx
  char v9; // al
  const data::InstableSprayStageExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InstableSprayStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InstableSprayStageExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->open_day);
  }
  open_day = v10->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  if ( *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->dungeon_id);
  }
  dungeon_id = v10->dungeon_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::vector(&this->level_id_list, &v10->level_id_list);
  std::vector<unsigned int>::vector(&this->watcher_list, &v10->watcher_list);
};

// Line 36: range 0000000013421E94-0000000013421EBE
void __cdecl data::InstableSprayStageExcelConfig::~InstableSprayStageExcelConfig(
        data::InstableSprayStageExcelConfig *const this)
{
  data::InstableSprayStageExcelConfig::~InstableSprayStageExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 36: range 0000000013421E32-0000000013421E93
void __cdecl data::InstableSprayStageExcelConfig::~InstableSprayStageExcelConfig(
        data::InstableSprayStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_list);
  std::vector<unsigned int>::~vector(&this->level_id_list);
};

// Line 51: range 0000000012ECA184-0000000012ECA299
void __cdecl data::InstableSprayDifficultyExcelConfig::InstableSprayDifficultyExcelConfig(
        data::InstableSprayDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayDifficultyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_level, v1);
  }
  this->difficulty_level = 0;
  std::string::basic_string(&this->difficulty_desc);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_ratio, v1);
  }
  this->score_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_dungeon_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_dungeon_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_dungeon_level, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->initial_dungeon_level = 0;
};

// Line 51: range 00000000133BBABC-00000000133BBC8E
void __cdecl data::InstableSprayDifficultyExcelConfig::InstableSprayDifficultyExcelConfig(
        data::InstableSprayDifficultyExcelConfig *const this,
        const data::InstableSprayDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t difficulty_level; // ecx
  char v4; // al
  float score_ratio; // xmm0_4
  __int64 v6; // rsi
  uint32_t initial_dungeon_level; // ecx
  char v8; // dl
  const data::InstableSprayDifficultyExcelConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InstableSprayDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InstableSprayDifficultyExcelConfig = v2;
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
  std::string::basic_string(&this->difficulty_desc, &v9->difficulty_desc);
  if ( *(_BYTE *)(((unsigned __int64)&v9->score_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->score_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->score_ratio);
  }
  score_ratio = v9->score_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_ratio, &v9->difficulty_desc);
  }
  this->score_ratio = score_ratio;
  v6 = (((_BYTE)v9 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v9->initial_dungeon_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->initial_dungeon_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->initial_dungeon_level);
  }
  initial_dungeon_level = v9->initial_dungeon_level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->initial_dungeon_level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->initial_dungeon_level, v6);
  }
  this->initial_dungeon_level = initial_dungeon_level;
};

// Line 54: range 0000000013421E06-0000000013421E30
void __cdecl data::InstableSprayDifficultyExcelConfig::~InstableSprayDifficultyExcelConfig(
        data::InstableSprayDifficultyExcelConfig *const this)
{
  data::InstableSprayDifficultyExcelConfig::~InstableSprayDifficultyExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 54: range 0000000013421DB4-0000000013421E05
void __cdecl data::InstableSprayDifficultyExcelConfig::~InstableSprayDifficultyExcelConfig(
        data::InstableSprayDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayDifficultyExcelConfig = v2;
  std::string::~string(&this->difficulty_desc);
};

// Line 68: range 0000000012ECA29A-0000000012ECA39F
void __cdecl data::InstableSprayLevelExcelConfig::InstableSprayLevelExcelConfig(
        data::InstableSprayLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->gallery_id = 0;
  std::vector<unsigned int>::vector(&this->buff_id_list);
  std::vector<unsigned int>::vector(&this->buff_weight_list);
  std::vector<unsigned int>::vector(&this->trail_avatar_list);
  std::string::basic_string(&this->monster_preview);
};

// Line 68: range 00000000133BBDD0-00000000133BBFCC
void __cdecl data::InstableSprayLevelExcelConfig::InstableSprayLevelExcelConfig(
        data::InstableSprayLevelExcelConfig *const this,
        const data::InstableSprayLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gallery_id; // ecx
  char v7; // dl
  const data::InstableSprayLevelExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InstableSprayLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InstableSprayLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->gallery_id);
  }
  gallery_id = v8->gallery_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  std::vector<unsigned int>::vector(&this->buff_id_list, &v8->buff_id_list);
  std::vector<unsigned int>::vector(&this->buff_weight_list, &v8->buff_weight_list);
  std::vector<unsigned int>::vector(&this->trail_avatar_list, &v8->trail_avatar_list);
  std::string::basic_string(&this->monster_preview, &v8->monster_preview);
};

// Line 71: range 0000000013421D06-0000000013421D87
void __cdecl data::InstableSprayLevelExcelConfig::~InstableSprayLevelExcelConfig(
        data::InstableSprayLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayLevelExcelConfig = v2;
  std::string::~string(&this->monster_preview);
  std::vector<unsigned int>::~vector(&this->trail_avatar_list);
  std::vector<unsigned int>::~vector(&this->buff_weight_list);
  std::vector<unsigned int>::~vector(&this->buff_id_list);
};

// Line 71: range 0000000013421D88-0000000013421DB2
void __cdecl data::InstableSprayLevelExcelConfig::~InstableSprayLevelExcelConfig(
        data::InstableSprayLevelExcelConfig *const this)
{
  data::InstableSprayLevelExcelConfig::~InstableSprayLevelExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 87: range 0000000012ECA3A0-0000000012ECA43F
void __cdecl data::InstableSprayBuffExcelConfig::InstableSprayBuffExcelConfig(
        data::InstableSprayBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayBuffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->ability_group_name);
  std::string::basic_string(&this->sgv);
};

// Line 87: range 00000000133BC10E-00000000133BC225
void __cdecl data::InstableSprayBuffExcelConfig::InstableSprayBuffExcelConfig(
        data::InstableSprayBuffExcelConfig *const this,
        const data::InstableSprayBuffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::InstableSprayBuffExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InstableSprayBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InstableSprayBuffExcelConfig = v2;
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
  std::string::basic_string(&this->ability_group_name, &v5->ability_group_name);
  std::string::basic_string(&this->sgv, &v5->sgv);
};

// Line 90: range 0000000013421CDA-0000000013421D04
void __cdecl data::InstableSprayBuffExcelConfig::~InstableSprayBuffExcelConfig(
        data::InstableSprayBuffExcelConfig *const this)
{
  data::InstableSprayBuffExcelConfig::~InstableSprayBuffExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 90: range 0000000013421C78-0000000013421CD9
void __cdecl data::InstableSprayBuffExcelConfig::~InstableSprayBuffExcelConfig(
        data::InstableSprayBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayBuffExcelConfig = v2;
  std::string::~string(&this->sgv);
  std::string::~string(&this->ability_group_name);
};

// Line 103: range 0000000012ECA440-0000000012ECA50D
void __cdecl data::InstableSprayGachaExcelConfig::InstableSprayGachaExcelConfig(
        data::InstableSprayGachaExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayGachaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayGachaExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  std::vector<unsigned int>::vector(&this->buff_count_weight_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_end_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_end_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_end_time, v1);
  }
  this->stage_end_time = 0;
};

// Line 103: range 00000000133BC366-00000000133BC4B0
void __cdecl data::InstableSprayGachaExcelConfig::InstableSprayGachaExcelConfig(
        data::InstableSprayGachaExcelConfig *const this,
        const data::InstableSprayGachaExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_buff_count_weight_list; // rsi
  uint32_t stage_end_time; // ecx
  char v7; // al
  const data::InstableSprayGachaExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InstableSprayGachaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InstableSprayGachaExcelConfig = v2;
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
  p_buff_count_weight_list = &v8->buff_count_weight_list;
  std::vector<unsigned int>::vector(&this->buff_count_weight_list, &v8->buff_count_weight_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->stage_end_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->stage_end_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->stage_end_time);
  }
  stage_end_time = v8->stage_end_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_end_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_buff_count_weight_list) = v7 != 0;
    __asan_report_store4(&this->stage_end_time, p_buff_count_weight_list);
  }
  this->stage_end_time = stage_end_time;
};

// Line 106: range 0000000013421C4C-0000000013421C76
void __cdecl data::InstableSprayGachaExcelConfig::~InstableSprayGachaExcelConfig(
        data::InstableSprayGachaExcelConfig *const this)
{
  data::InstableSprayGachaExcelConfig::~InstableSprayGachaExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 106: range 0000000013421BFA-0000000013421C4B
void __cdecl data::InstableSprayGachaExcelConfig::~InstableSprayGachaExcelConfig(
        data::InstableSprayGachaExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InstableSprayGachaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InstableSprayGachaExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->buff_count_weight_list);
};

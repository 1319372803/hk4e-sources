// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityBlitzRushExcelConfig.gen.h

// Line 17: range 0000000012EB2C26-0000000012EB2E7F
void __cdecl data::BlitzRushExcelConfig::BlitzRushExcelConfig(data::BlitzRushExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BlitzRushExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlitzRushExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->content_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->content_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->content_duration, v3);
  }
  this->content_duration = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_entry_id, v4);
  }
  this->dungeon_entry_id = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_reward_id, v5);
  }
  this->dungeon_reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_pre_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_pre_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_pre_quest_id, v5);
  }
  this->pre_pre_quest_id = 0;
  std::vector<unsigned int>::vector(&this->pre_quest_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_preview, v5);
  }
  this->reward_preview = 0;
};

// Line 17: range 000000001337FCCA-0000000013380102
void __cdecl data::BlitzRushExcelConfig::BlitzRushExcelConfig(
        data::BlitzRushExcelConfig *const this,
        const data::BlitzRushExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t content_duration; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t dungeon_id; // ecx
  char v12; // dl
  uint32_t dungeon_entry_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t dungeon_reward_id; // ecx
  char v17; // dl
  uint32_t pre_pre_quest_id; // ecx
  char v19; // al
  std::vector<unsigned int> *p_pre_quest_id; // rsi
  uint32_t reward_preview; // ecx
  char v22; // al
  const data::BlitzRushExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlitzRushExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlitzRushExcelConfig = v2;
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
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->activity_id);
  }
  activity_id = v23->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->content_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->content_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->content_duration);
  }
  content_duration = v23->content_duration;
  v9 = *(_BYTE *)(((unsigned __int64)&this->content_duration >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->content_duration, v5);
  }
  this->content_duration = content_duration;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->dungeon_id);
  }
  dungeon_id = v23->dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->dungeon_id, v10);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->dungeon_entry_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->dungeon_entry_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->dungeon_entry_id);
  }
  dungeon_entry_id = v23->dungeon_entry_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->dungeon_entry_id, v10);
  }
  this->dungeon_entry_id = dungeon_entry_id;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->dungeon_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->dungeon_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->dungeon_reward_id);
  }
  dungeon_reward_id = v23->dungeon_reward_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->dungeon_reward_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->dungeon_reward_id, v15);
  }
  this->dungeon_reward_id = dungeon_reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->pre_pre_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->pre_pre_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->pre_pre_quest_id);
  }
  pre_pre_quest_id = v23->pre_pre_quest_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->pre_pre_quest_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->pre_pre_quest_id, v15);
  }
  this->pre_pre_quest_id = pre_pre_quest_id;
  p_pre_quest_id = &v23->pre_quest_id;
  std::vector<unsigned int>::vector(&this->pre_quest_id, &v23->pre_quest_id);
  if ( *(_BYTE *)(((unsigned __int64)&v23->reward_preview >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->reward_preview >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->reward_preview);
  }
  reward_preview = v23->reward_preview;
  v22 = *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_pre_quest_id) = v22 != 0;
    __asan_report_store4(&this->reward_preview, p_pre_quest_id);
  }
  this->reward_preview = reward_preview;
};

// Line 20: range 0000000013424218-0000000013424269
void __cdecl data::BlitzRushExcelConfig::~BlitzRushExcelConfig(data::BlitzRushExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlitzRushExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlitzRushExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->pre_quest_id);
};

// Line 20: range 000000001342426A-0000000013424294
void __cdecl data::BlitzRushExcelConfig::~BlitzRushExcelConfig(data::BlitzRushExcelConfig *const this)
{
  data::BlitzRushExcelConfig::~BlitzRushExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 39: range 0000000012EB2E80-0000000012EB2F93
void __cdecl data::BlitzRushStageExcelConfig::BlitzRushStageExcelConfig(data::BlitzRushStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BlitzRushStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlitzRushStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_quest_id, v3);
  }
  this->guide_quest_id = 0;
};

// Line 39: range 000000001338DA4C-000000001338DC1B
void __cdecl data::BlitzRushStageExcelConfig::BlitzRushStageExcelConfig(
        data::BlitzRushStageExcelConfig *const this,
        const data::BlitzRushStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_watcher_id_list; // rsi
  uint32_t guide_quest_id; // ecx
  char v10; // al
  const data::BlitzRushStageExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlitzRushStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlitzRushStageExcelConfig = v2;
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
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->open_day);
  }
  open_day = v11->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  p_watcher_id_list = &v11->watcher_id_list;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v11->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->guide_quest_id);
  }
  guide_quest_id = v11->guide_quest_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_watcher_id_list) = v10 != 0;
    __asan_report_store4(&this->guide_quest_id, p_watcher_id_list);
  }
  this->guide_quest_id = guide_quest_id;
};

// Line 42: range 000000001342419A-00000000134241EB
void __cdecl data::BlitzRushStageExcelConfig::~BlitzRushStageExcelConfig(data::BlitzRushStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlitzRushStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlitzRushStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
};

// Line 42: range 00000000134241EC-0000000013424216
void __cdecl data::BlitzRushStageExcelConfig::~BlitzRushStageExcelConfig(data::BlitzRushStageExcelConfig *const this)
{
  data::BlitzRushStageExcelConfig::~BlitzRushStageExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 56: range 0000000012EB2F94-0000000012EB30A7
void __cdecl data::BlitzRushParkourExcelConfig::BlitzRushParkourExcelConfig(
        data::BlitzRushParkourExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BlitzRushParkourExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlitzRushParkourExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
};

// Line 56: range 00000000133801BA-0000000013380389
void __cdecl data::BlitzRushParkourExcelConfig::BlitzRushParkourExcelConfig(
        data::BlitzRushParkourExcelConfig *const this,
        const data::BlitzRushParkourExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  const data::BlitzRushParkourExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlitzRushParkourExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlitzRushParkourExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->group_id);
  }
  group_id = v10->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v10->watcher_id_list);
};

// Line 59: range 000000001342411C-000000001342416D
void __cdecl data::BlitzRushParkourExcelConfig::~BlitzRushParkourExcelConfig(
        data::BlitzRushParkourExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlitzRushParkourExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlitzRushParkourExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
};

// Line 59: range 000000001342416E-0000000013424198
void __cdecl data::BlitzRushParkourExcelConfig::~BlitzRushParkourExcelConfig(
        data::BlitzRushParkourExcelConfig *const this)
{
  data::BlitzRushParkourExcelConfig::~BlitzRushParkourExcelConfig(this);
  operator delete(this, 0x30uLL);
};

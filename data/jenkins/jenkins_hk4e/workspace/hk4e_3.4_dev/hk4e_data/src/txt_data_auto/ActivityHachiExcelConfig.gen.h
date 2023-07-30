// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityHachiExcelConfig.gen.h

// Line 17: range 0000000012EC877E-0000000012EC8957
void __cdecl data::ActivityHachiStageExcelConfig::ActivityHachiStageExcelConfig(
        data::ActivityHachiStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityHachiStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityHachiStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_id, v3);
  }
  this->stage_id = 0;
  std::vector<unsigned int>::vector(&this->quest_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->stealth_watcher >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stealth_watcher >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stealth_watcher, v3);
  }
  this->stealth_watcher = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_watcher >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_watcher >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->battle_watcher, v4);
  }
  this->battle_watcher = 0;
  std::string::basic_string(&this->stealth_group);
  std::string::basic_string(&this->battle_group);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v4);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->final_quest_id);
  std::vector<unsigned int>::vector(&this->map_mark_load_quest);
};

// Line 17: range 00000000133B8F84-00000000133B9324
void __cdecl data::ActivityHachiStageExcelConfig::ActivityHachiStageExcelConfig(
        data::ActivityHachiStageExcelConfig *const this,
        const data::ActivityHachiStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_quest_id; // rsi
  uint32_t stealth_watcher; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t battle_watcher; // ecx
  char v13; // dl
  std::string *p_battle_group; // rsi
  uint32_t open_day; // ecx
  char v16; // al
  const data::ActivityHachiStageExcelConfig *v17; // [rsp+0h] [rbp-20h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityHachiStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityHachiStageExcelConfig = v2;
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
  v5 = (((_BYTE)v17 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->stage_id);
  }
  stage_id = v17->stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
  p_quest_id = &v17->quest_id;
  std::vector<unsigned int>::vector(&this->quest_id, &v17->quest_id);
  if ( *(_BYTE *)(((unsigned __int64)&v17->stealth_watcher >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->stealth_watcher >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->stealth_watcher);
  }
  stealth_watcher = v17->stealth_watcher;
  v10 = *(_BYTE *)(((unsigned __int64)&this->stealth_watcher >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_quest_id) = v10 != 0;
    __asan_report_store4(&this->stealth_watcher, p_quest_id);
  }
  this->stealth_watcher = stealth_watcher;
  v11 = (((_BYTE)v17 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->battle_watcher >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->battle_watcher >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->battle_watcher);
  }
  battle_watcher = v17->battle_watcher;
  v13 = *(_BYTE *)(((unsigned __int64)&this->battle_watcher >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->battle_watcher, v11);
  }
  this->battle_watcher = battle_watcher;
  std::string::basic_string(&this->stealth_group, &v17->stealth_group);
  p_battle_group = &v17->battle_group;
  std::string::basic_string(&this->battle_group, &v17->battle_group);
  if ( *(_BYTE *)(((unsigned __int64)&v17->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->open_day);
  }
  open_day = v17->open_day;
  v16 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_battle_group) = v16 != 0;
    __asan_report_store4(&this->open_day, p_battle_group);
  }
  this->open_day = open_day;
  std::vector<unsigned int>::vector(&this->final_quest_id, &v17->final_quest_id);
  std::vector<unsigned int>::vector(&this->map_mark_load_quest, &v17->map_mark_load_quest);
};

// Line 20: range 0000000013423A70-0000000013423B03
void __cdecl data::ActivityHachiStageExcelConfig::~ActivityHachiStageExcelConfig(
        data::ActivityHachiStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityHachiStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityHachiStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->map_mark_load_quest);
  std::vector<unsigned int>::~vector(&this->final_quest_id);
  std::string::~string(&this->battle_group);
  std::string::~string(&this->stealth_group);
  std::vector<unsigned int>::~vector(&this->quest_id);
};

// Line 20: range 0000000013423B04-0000000013423B2E
void __cdecl data::ActivityHachiStageExcelConfig::~ActivityHachiStageExcelConfig(
        data::ActivityHachiStageExcelConfig *const this)
{
  data::ActivityHachiStageExcelConfig::~ActivityHachiStageExcelConfig(this);
  operator delete(this, 0xA8uLL);
};

// Line 40: range 0000000012EC8958-0000000012EC8AC9
void __cdecl data::ActivityHachiFinalStageExcelConfig::ActivityHachiFinalStageExcelConfig(
        data::ActivityHachiFinalStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityHachiFinalStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityHachiFinalStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_id, v3);
  }
  this->stage_id = 0;
  std::vector<unsigned int>::vector(&this->quest_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->final_quest_id);
};

// Line 40: range 00000000133B9466-00000000133B971C
void __cdecl data::ActivityHachiFinalStageExcelConfig::ActivityHachiFinalStageExcelConfig(
        data::ActivityHachiFinalStageExcelConfig *const this,
        const data::ActivityHachiFinalStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_quest_id; // rsi
  uint32_t dungeon_id; // ecx
  char v10; // al
  std::vector<unsigned int> *p_watcher_id_list; // rsi
  uint32_t open_day; // ecx
  char v13; // al
  const data::ActivityHachiFinalStageExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityHachiFinalStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityHachiFinalStageExcelConfig = v2;
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
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->stage_id);
  }
  stage_id = v14->stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
  p_quest_id = &v14->quest_id;
  std::vector<unsigned int>::vector(&this->quest_id, &v14->quest_id);
  if ( *(_BYTE *)(((unsigned __int64)&v14->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->dungeon_id);
  }
  dungeon_id = v14->dungeon_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_quest_id) = v10 != 0;
    __asan_report_store4(&this->dungeon_id, p_quest_id);
  }
  this->dungeon_id = dungeon_id;
  p_watcher_id_list = &v14->watcher_id_list;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v14->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v14->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->open_day);
  }
  open_day = v14->open_day;
  v13 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_watcher_id_list) = v13 != 0;
    __asan_report_store4(&this->open_day, p_watcher_id_list);
  }
  this->open_day = open_day;
  std::vector<unsigned int>::vector(&this->final_quest_id, &v14->final_quest_id);
};

// Line 43: range 00000000134239D2-0000000013423A43
void __cdecl data::ActivityHachiFinalStageExcelConfig::~ActivityHachiFinalStageExcelConfig(
        data::ActivityHachiFinalStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityHachiFinalStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityHachiFinalStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->final_quest_id);
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
  std::vector<unsigned int>::~vector(&this->quest_id);
};

// Line 43: range 0000000013423A44-0000000013423A6E
void __cdecl data::ActivityHachiFinalStageExcelConfig::~ActivityHachiFinalStageExcelConfig(
        data::ActivityHachiFinalStageExcelConfig *const this)
{
  data::ActivityHachiFinalStageExcelConfig::~ActivityHachiFinalStageExcelConfig(this);
  operator delete(this, 0x68uLL);
};

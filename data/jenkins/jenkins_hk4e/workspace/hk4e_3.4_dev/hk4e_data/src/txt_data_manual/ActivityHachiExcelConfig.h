// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityHachiExcelConfig.h

// Line 24: range 0000000012EBE88E-0000000012EBEA4B
void __cdecl HachiActivityStageInfo::HachiActivityStageInfo(HachiActivityStageInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->stage_type = HACHI_ACTIVITY_STAGE_TYPE_NONE;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_id, v2);
  }
  this->stage_id = 0;
  std::vector<unsigned int>::vector(&this->quest_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->stealth_watcher >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stealth_watcher >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stealth_watcher, v2);
  }
  this->stealth_watcher = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_watcher >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_watcher >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->battle_watcher, v3);
  }
  this->battle_watcher = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->dungeon_watcher_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->final_quest_id_vec);
};

// Line 24: range 00000000133A4FC8-00000000133A533B
void __cdecl HachiActivityStageInfo::HachiActivityStageInfo(
        HachiActivityStageInfo *const this,
        const HachiActivityStageInfo *a2)
{
  HachiActivityStageType stage_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t stage_id; // ecx
  char v6; // dl
  std::vector<unsigned int> *p_quest_id_vec; // rsi
  uint32_t stealth_watcher; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t battle_watcher; // ecx
  char v12; // dl
  uint32_t open_day; // ecx
  char v14; // al
  std::vector<unsigned int> *p_dungeon_watcher_vec; // rsi
  uint32_t dungeon_id; // ecx
  char v17; // al
  const HachiActivityStageInfo *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  stage_type = a2->stage_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->stage_type = stage_type;
  v4 = (((_BYTE)v18 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->stage_id);
  }
  stage_id = v18->stage_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->stage_id, v4);
  }
  this->stage_id = stage_id;
  p_quest_id_vec = &v18->quest_id_vec;
  std::vector<unsigned int>::vector(&this->quest_id_vec, &v18->quest_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v18->stealth_watcher >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->stealth_watcher >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->stealth_watcher);
  }
  stealth_watcher = v18->stealth_watcher;
  v9 = *(_BYTE *)(((unsigned __int64)&this->stealth_watcher >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_quest_id_vec) = v9 != 0;
    __asan_report_store4(&this->stealth_watcher, p_quest_id_vec);
  }
  this->stealth_watcher = stealth_watcher;
  v10 = (((_BYTE)v18 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->battle_watcher >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->battle_watcher >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->battle_watcher);
  }
  battle_watcher = v18->battle_watcher;
  v12 = *(_BYTE *)(((unsigned __int64)&this->battle_watcher >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->battle_watcher, v10);
  }
  this->battle_watcher = battle_watcher;
  if ( *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->open_day);
  }
  open_day = v18->open_day;
  v14 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->open_day, v10);
  }
  this->open_day = open_day;
  p_dungeon_watcher_vec = &v18->dungeon_watcher_vec;
  std::vector<unsigned int>::vector(&this->dungeon_watcher_vec, &v18->dungeon_watcher_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v18->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->dungeon_id);
  }
  dungeon_id = v18->dungeon_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_dungeon_watcher_vec) = v17 != 0;
    __asan_report_store4(&this->dungeon_id, p_dungeon_watcher_vec);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::vector(&this->final_quest_id_vec, &v18->final_quest_id_vec);
};

// Line 24: range 0000000012EBEA4C-0000000012EBEA8A
void __cdecl HachiActivityStageInfo::~HachiActivityStageInfo(HachiActivityStageInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->final_quest_id_vec);
  std::vector<unsigned int>::~vector(&this->dungeon_watcher_vec);
  std::vector<unsigned int>::~vector(&this->quest_id_vec);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityFleurFairExcelConfig.gen.h

// Line 90: range 00000000133A26EA-00000000133A2A92
void __cdecl data::FleurFairPreviewExcelConfig::FleurFairPreviewExcelConfig(
        data::FleurFairPreviewExcelConfig *const this,
        const data::FleurFairPreviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t activity_stay_time; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t unlock_quest_id; // ecx
  char v12; // dl
  uint32_t unlock_player_level; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t gameplay_pre_quest; // ecx
  char v17; // dl
  uint32_t reward_preview; // ecx
  char v19; // al
  const data::FleurFairPreviewExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FleurFairPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FleurFairPreviewExcelConfig = v2;
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
  v5 = (((_BYTE)v20 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->activity_id);
  }
  activity_id = v20->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->activity_stay_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->activity_stay_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->activity_stay_time);
  }
  activity_stay_time = v20->activity_stay_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->activity_stay_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->activity_stay_time, v5);
  }
  this->activity_stay_time = activity_stay_time;
  v10 = (((_BYTE)v20 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->unlock_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->unlock_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->unlock_quest_id);
  }
  unlock_quest_id = v20->unlock_quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->unlock_quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->unlock_quest_id, v10);
  }
  this->unlock_quest_id = unlock_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->unlock_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->unlock_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->unlock_player_level);
  }
  unlock_player_level = v20->unlock_player_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->unlock_player_level >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->unlock_player_level, v10);
  }
  this->unlock_player_level = unlock_player_level;
  v15 = (((_BYTE)v20 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->gameplay_pre_quest >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->gameplay_pre_quest >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->gameplay_pre_quest);
  }
  gameplay_pre_quest = v20->gameplay_pre_quest;
  v17 = *(_BYTE *)(((unsigned __int64)&this->gameplay_pre_quest >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->gameplay_pre_quest, v15);
  }
  this->gameplay_pre_quest = gameplay_pre_quest;
  if ( *(_BYTE *)(((unsigned __int64)&v20->reward_preview >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->reward_preview >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->reward_preview);
  }
  reward_preview = v20->reward_preview;
  v19 = *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->reward_preview, v15);
  }
  this->reward_preview = reward_preview;
};

// Line 93: range 0000000013425A44-0000000013425A6E
void __cdecl data::FleurFairPreviewExcelConfig::~FleurFairPreviewExcelConfig(
        data::FleurFairPreviewExcelConfig *const this)
{
  data::FleurFairPreviewExcelConfig::~FleurFairPreviewExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 93: range 0000000013425A02-0000000013425A43
void __cdecl data::FleurFairPreviewExcelConfig::~FleurFairPreviewExcelConfig(
        data::FleurFairPreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FleurFairPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairPreviewExcelConfig = v2;
};

// Line 110: range 0000000012EC18DC-0000000012EC1AA3
void __cdecl data::FleurFairChapterExcelConfig::FleurFairChapterExcelConfig(
        data::FleurFairChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FleurFairChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairChapterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chapter_id, v3);
  }
  this->chapter_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  std::string::basic_string(&this->title);
  std::string::basic_string(&this->desc);
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_quest, v3);
  }
  this->main_quest = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_quest >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_quest >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_quest, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->pre_quest = 0;
  std::vector<unsigned int>::vector(&this->mini_quest);
  std::string::basic_string(&this->icon);
};

// Line 110: range 00000000133A2B4A-00000000133A2EB5
void __cdecl data::FleurFairChapterExcelConfig::FleurFairChapterExcelConfig(
        data::FleurFairChapterExcelConfig *const this,
        const data::FleurFairChapterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t chapter_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  std::string *p_desc; // rsi
  uint32_t main_quest; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t pre_quest; // ecx
  char v15; // dl
  const data::FleurFairChapterExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FleurFairChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FleurFairChapterExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->chapter_id);
  }
  chapter_id = v16->chapter_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->open_day);
  }
  open_day = v16->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  std::string::basic_string(&this->title, &v16->title);
  p_desc = &v16->desc;
  std::string::basic_string(&this->desc, &v16->desc);
  if ( *(_BYTE *)(((unsigned __int64)&v16->main_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->main_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->main_quest);
  }
  main_quest = v16->main_quest;
  v12 = *(_BYTE *)(((unsigned __int64)&this->main_quest >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_desc) = v12 != 0;
    __asan_report_store4(&this->main_quest, p_desc);
  }
  this->main_quest = main_quest;
  v13 = (((_BYTE)v16 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->pre_quest >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->pre_quest >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->pre_quest);
  }
  pre_quest = v16->pre_quest;
  v15 = *(_BYTE *)(((unsigned __int64)&this->pre_quest >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->pre_quest, v13);
  }
  this->pre_quest = pre_quest;
  std::vector<unsigned int>::vector(&this->mini_quest, &v16->mini_quest);
  std::string::basic_string(&this->icon, &v16->icon);
};

// Line 113: range 0000000013425954-00000000134259D5
void __cdecl data::FleurFairChapterExcelConfig::~FleurFairChapterExcelConfig(
        data::FleurFairChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FleurFairChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairChapterExcelConfig = v2;
  std::string::~string(&this->icon);
  std::vector<unsigned int>::~vector(&this->mini_quest);
  std::string::~string(&this->desc);
  std::string::~string(&this->title);
};

// Line 113: range 00000000134259D6-0000000013425A00
void __cdecl data::FleurFairChapterExcelConfig::~FleurFairChapterExcelConfig(
        data::FleurFairChapterExcelConfig *const this)
{
  data::FleurFairChapterExcelConfig::~FleurFairChapterExcelConfig(this);
  operator delete(this, 0x98uLL);
};

// Line 132: range 0000000012EC1AA4-0000000012EC1CB1
void __cdecl data::FleurFairMiniGameExcelConfig::FleurFairMiniGameExcelConfig(
        data::FleurFairMiniGameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FleurFairMiniGameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairMiniGameExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mini_game_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mini_game_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mini_game_type, v3);
  }
  this->mini_game_type = FLEUR_FAIR_MINI_GAME_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, v4);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v4);
  }
  this->open_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->quest_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  std::vector<unsigned int>::vector(&this->avatar_id_list);
  std::vector<unsigned int>::vector(&this->avatar_score);
  std::vector<unsigned int>::vector(&this->tips_id_list);
};

// Line 132: range 00000000133AD2EC-00000000133AD6DC
void __cdecl data::FleurFairMiniGameExcelConfig::FleurFairMiniGameExcelConfig(
        data::FleurFairMiniGameExcelConfig *const this,
        const data::FleurFairMiniGameExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::FleurFairMiniGameType mini_game_type; // ecx
  char v7; // dl
  uint32_t gallery_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t config_id; // ecx
  char v12; // dl
  uint32_t open_day; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t quest_id; // ecx
  char v17; // dl
  const data::FleurFairMiniGameExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FleurFairMiniGameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FleurFairMiniGameExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->mini_game_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->mini_game_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->mini_game_type);
  }
  mini_game_type = v18->mini_game_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mini_game_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->mini_game_type, v5);
  }
  this->mini_game_type = mini_game_type;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->gallery_id);
  }
  gallery_id = v18->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->config_id);
  }
  config_id = v18->config_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->config_id, v10);
  }
  this->config_id = config_id;
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
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->quest_id);
  }
  quest_id = v18->quest_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->quest_id, v15);
  }
  this->quest_id = quest_id;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v18->watcher_id_list);
  std::vector<unsigned int>::vector(&this->avatar_id_list, &v18->avatar_id_list);
  std::vector<unsigned int>::vector(&this->avatar_score, &v18->avatar_score);
  std::vector<unsigned int>::vector(&this->tips_id_list, &v18->tips_id_list);
};

// Line 135: range 00000000134258A6-0000000013425927
void __cdecl data::FleurFairMiniGameExcelConfig::~FleurFairMiniGameExcelConfig(
        data::FleurFairMiniGameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FleurFairMiniGameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairMiniGameExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->tips_id_list);
  std::vector<unsigned int>::~vector(&this->avatar_score);
  std::vector<unsigned int>::~vector(&this->avatar_id_list);
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
};

// Line 135: range 0000000013425928-0000000013425952
void __cdecl data::FleurFairMiniGameExcelConfig::~FleurFairMiniGameExcelConfig(
        data::FleurFairMiniGameExcelConfig *const this)
{
  data::FleurFairMiniGameExcelConfig::~FleurFairMiniGameExcelConfig(this);
  operator delete(this, 0x80uLL);
};

// Line 155: range 0000000012EBDA7A-0000000012EBE0B4
data::FleurFairDungeonExcelConfig *__cdecl data::FleurFairDungeonExcelConfig::operator=(
        data::FleurFairDungeonExcelConfig *const this,
        const data::FleurFairDungeonExcelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t section_id; // ecx
  char v6; // dl
  uint32_t open_day; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t obtain_coin_limit; // ecx
  char v11; // dl
  uint32_t activity_id; // ecx
  char v13; // al
  std::vector<unsigned int> *p_watcher_id_list; // rsi
  uint32_t dungeon_id; // ecx
  char v16; // al
  std::vector<unsigned int> *p_energy_grade_list; // rsi
  uint32_t initial_energy; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t energy_limit; // ecx
  char v22; // dl
  std::vector<std::string> *p_ability_group_config; // rsi
  uint32_t success_reward_id; // ecx
  char v25; // al
  __int64 v26; // rsi
  uint32_t failure_reward_id; // ecx
  char v28; // dl
  uint32_t punish_time; // ecx
  char v30; // al
  const data::FleurFairDungeonExcelConfig *v32; // [rsp+0h] [rbp-10h]

  v32 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v32 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->section_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->section_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->section_id);
  }
  section_id = v32->section_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->section_id, v4);
  }
  this->section_id = section_id;
  if ( *(_BYTE *)(((unsigned __int64)&v32->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->open_day);
  }
  open_day = v32->open_day;
  v8 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->open_day, v4);
  }
  this->open_day = open_day;
  v9 = (((_BYTE)v32 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->obtain_coin_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->obtain_coin_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->obtain_coin_limit);
  }
  obtain_coin_limit = v32->obtain_coin_limit;
  v11 = *(_BYTE *)(((unsigned __int64)&this->obtain_coin_limit >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->obtain_coin_limit, v9);
  }
  this->obtain_coin_limit = obtain_coin_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v32->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->activity_id);
  }
  activity_id = v32->activity_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->activity_id, v9);
  }
  this->activity_id = activity_id;
  p_watcher_id_list = &v32->watcher_id_list;
  std::vector<unsigned int>::operator=(&this->watcher_id_list, &v32->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v32->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->dungeon_id);
  }
  dungeon_id = v32->dungeon_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_watcher_id_list) = v16 != 0;
    __asan_report_store4(&this->dungeon_id, p_watcher_id_list);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::operator=(&this->mini_game_list, &v32->mini_game_list);
  std::vector<std::string>::operator=(&this->gallery_config, &v32->gallery_config);
  std::vector<unsigned int>::operator=(&this->monster_list, &v32->monster_list);
  p_energy_grade_list = &v32->energy_grade_list;
  std::vector<unsigned int>::operator=(&this->energy_grade_list, &v32->energy_grade_list);
  if ( *(_BYTE *)(((unsigned __int64)&v32->initial_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->initial_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->initial_energy);
  }
  initial_energy = v32->initial_energy;
  v19 = *(_BYTE *)(((unsigned __int64)&this->initial_energy >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(p_energy_grade_list) = v19 != 0;
    __asan_report_store4(&this->initial_energy, p_energy_grade_list);
  }
  this->initial_energy = initial_energy;
  v20 = (((_BYTE)v32 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->energy_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->energy_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->energy_limit);
  }
  energy_limit = v32->energy_limit;
  v22 = *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->energy_limit, v20);
  }
  this->energy_limit = energy_limit;
  p_ability_group_config = &v32->ability_group_config;
  std::vector<std::string>::operator=(&this->ability_group_config, &v32->ability_group_config);
  if ( *(_BYTE *)(((unsigned __int64)&v32->success_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->success_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->success_reward_id);
  }
  success_reward_id = v32->success_reward_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->success_reward_id >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(p_ability_group_config) = v25 != 0;
    __asan_report_store4(&this->success_reward_id, p_ability_group_config);
  }
  this->success_reward_id = success_reward_id;
  v26 = (((_BYTE)v32 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->failure_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->failure_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->failure_reward_id);
  }
  failure_reward_id = v32->failure_reward_id;
  v28 = *(_BYTE *)(((unsigned __int64)&this->failure_reward_id >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->failure_reward_id, v26);
  }
  this->failure_reward_id = failure_reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v32->punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->punish_time);
  }
  punish_time = v32->punish_time;
  v30 = *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store4(&this->punish_time, v26);
  }
  this->punish_time = punish_time;
  return this;
};

// Line 155: range 0000000012EC1CB2-0000000012EC203A
void __cdecl data::FleurFairDungeonExcelConfig::FleurFairDungeonExcelConfig(
        data::FleurFairDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FleurFairDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairDungeonExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->section_id, v3);
  }
  this->section_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->obtain_coin_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obtain_coin_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obtain_coin_limit, v4);
  }
  this->obtain_coin_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v4);
  }
  this->activity_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->mini_game_list);
  std::vector<std::string>::vector(&this->gallery_config);
  std::vector<unsigned int>::vector(&this->monster_list);
  std::vector<unsigned int>::vector(&this->energy_grade_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_energy, v4);
  }
  this->initial_energy = 0;
  v5 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->energy_limit, v5);
  }
  this->energy_limit = 0;
  std::vector<std::string>::vector(&this->ability_group_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->success_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->success_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->success_reward_id, v5);
  }
  this->success_reward_id = 0;
  v6 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->failure_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failure_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failure_reward_id, v6);
  }
  this->failure_reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->punish_time, v6);
  }
  this->punish_time = 0;
};

// Line 155: range 00000000133AD81E-00000000133ADF05
void __cdecl data::FleurFairDungeonExcelConfig::FleurFairDungeonExcelConfig(
        data::FleurFairDungeonExcelConfig *const this,
        const data::FleurFairDungeonExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t section_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t obtain_coin_limit; // ecx
  char v12; // dl
  uint32_t activity_id; // ecx
  char v14; // al
  std::vector<unsigned int> *p_watcher_id_list; // rsi
  uint32_t dungeon_id; // ecx
  char v17; // al
  std::vector<unsigned int> *p_energy_grade_list; // rsi
  uint32_t initial_energy; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t energy_limit; // ecx
  char v23; // dl
  std::vector<std::string> *p_ability_group_config; // rsi
  uint32_t success_reward_id; // ecx
  char v26; // al
  __int64 v27; // rsi
  uint32_t failure_reward_id; // ecx
  char v29; // dl
  uint32_t punish_time; // ecx
  char v31; // al
  const data::FleurFairDungeonExcelConfig *v32; // [rsp+0h] [rbp-20h]

  v32 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FleurFairDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FleurFairDungeonExcelConfig = v2;
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
  v5 = (((_BYTE)v32 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->section_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->section_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->section_id);
  }
  section_id = v32->section_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->section_id, v5);
  }
  this->section_id = section_id;
  if ( *(_BYTE *)(((unsigned __int64)&v32->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->open_day);
  }
  open_day = v32->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  v10 = (((_BYTE)v32 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->obtain_coin_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->obtain_coin_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->obtain_coin_limit);
  }
  obtain_coin_limit = v32->obtain_coin_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->obtain_coin_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->obtain_coin_limit, v10);
  }
  this->obtain_coin_limit = obtain_coin_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v32->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->activity_id);
  }
  activity_id = v32->activity_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->activity_id, v10);
  }
  this->activity_id = activity_id;
  p_watcher_id_list = &v32->watcher_id_list;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v32->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v32->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->dungeon_id);
  }
  dungeon_id = v32->dungeon_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_watcher_id_list) = v17 != 0;
    __asan_report_store4(&this->dungeon_id, p_watcher_id_list);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::vector(&this->mini_game_list, &v32->mini_game_list);
  std::vector<std::string>::vector(&this->gallery_config, &v32->gallery_config);
  std::vector<unsigned int>::vector(&this->monster_list, &v32->monster_list);
  p_energy_grade_list = &v32->energy_grade_list;
  std::vector<unsigned int>::vector(&this->energy_grade_list, &v32->energy_grade_list);
  if ( *(_BYTE *)(((unsigned __int64)&v32->initial_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->initial_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->initial_energy);
  }
  initial_energy = v32->initial_energy;
  v20 = *(_BYTE *)(((unsigned __int64)&this->initial_energy >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_energy_grade_list) = v20 != 0;
    __asan_report_store4(&this->initial_energy, p_energy_grade_list);
  }
  this->initial_energy = initial_energy;
  v21 = (((_BYTE)v32 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->energy_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->energy_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->energy_limit);
  }
  energy_limit = v32->energy_limit;
  v23 = *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->energy_limit, v21);
  }
  this->energy_limit = energy_limit;
  p_ability_group_config = &v32->ability_group_config;
  std::vector<std::string>::vector(&this->ability_group_config, &v32->ability_group_config);
  if ( *(_BYTE *)(((unsigned __int64)&v32->success_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->success_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->success_reward_id);
  }
  success_reward_id = v32->success_reward_id;
  v26 = *(_BYTE *)(((unsigned __int64)&this->success_reward_id >> 3) + 0x7FFF8000);
  if ( v26 != 0 && v26 <= 3 )
  {
    LOBYTE(p_ability_group_config) = v26 != 0;
    __asan_report_store4(&this->success_reward_id, p_ability_group_config);
  }
  this->success_reward_id = success_reward_id;
  v27 = (((_BYTE)v32 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->failure_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->failure_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->failure_reward_id);
  }
  failure_reward_id = v32->failure_reward_id;
  v29 = *(_BYTE *)(((unsigned __int64)&this->failure_reward_id >> 3) + 0x7FFF8000);
  if ( v29 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v29 )
  {
    LOBYTE(v27) = v29 != 0;
    __asan_report_store4(&this->failure_reward_id, v27);
  }
  this->failure_reward_id = failure_reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v32->punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->punish_time);
  }
  punish_time = v32->punish_time;
  v31 = *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000);
  if ( v31 != 0 && v31 <= 3 )
  {
    LOBYTE(v27) = v31 != 0;
    __asan_report_store4(&this->punish_time, v27);
  }
  this->punish_time = punish_time;
};

// Line 158: range 00000000134257D4-0000000013425879
void __cdecl data::FleurFairDungeonExcelConfig::~FleurFairDungeonExcelConfig(
        data::FleurFairDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FleurFairDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairDungeonExcelConfig = v2;
  std::vector<std::string>::~vector(&this->ability_group_config);
  std::vector<unsigned int>::~vector(&this->energy_grade_list);
  std::vector<unsigned int>::~vector(&this->monster_list);
  std::vector<std::string>::~vector(&this->gallery_config);
  std::vector<unsigned int>::~vector(&this->mini_game_list);
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
};

// Line 158: range 000000001342587A-00000000134258A4
void __cdecl data::FleurFairDungeonExcelConfig::~FleurFairDungeonExcelConfig(
        data::FleurFairDungeonExcelConfig *const this)
{
  data::FleurFairDungeonExcelConfig::~FleurFairDungeonExcelConfig(this);
  operator delete(this, 0xD0uLL);
};

// Line 185: range 0000000012EC203C-0000000012EC2211
void __cdecl data::FleurFairDungeonStatExcelConfig::FleurFairDungeonStatExcelConfig(
        data::FleurFairDungeonStatExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FleurFairDungeonStatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairDungeonStatExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stat_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stat_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stat_type, v3);
  }
  this->stat_type = FLEUR_FAIR_DUNGEON_STAT_NONE;
  std::vector<std::string>::vector(&this->stat_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->ordering_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ordering_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ordering_type, v3);
  }
  this->ordering_type = Less;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stat_method >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stat_method >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stat_method, v4);
  }
  this->stat_method = FLEUR_FAIR_DUNGEON_STAT_METHOD_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v4);
  }
  this->priority = 0;
};

// Line 185: range 00000000133AE046-00000000133AE384
void __cdecl data::FleurFairDungeonStatExcelConfig::FleurFairDungeonStatExcelConfig(
        data::FleurFairDungeonStatExcelConfig *const this,
        const data::FleurFairDungeonStatExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gallery_id; // ecx
  char v7; // dl
  data::FleurFairDungeonStatType stat_type; // ecx
  char v9; // al
  std::vector<std::string> *p_stat_param_list; // rsi
  data::OrderingType ordering_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  data::FleurFairDungeonStatMethod stat_method; // ecx
  char v15; // dl
  uint32_t priority; // ecx
  char v17; // al
  const data::FleurFairDungeonStatExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FleurFairDungeonStatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FleurFairDungeonStatExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->gallery_id);
  }
  gallery_id = v18->gallery_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->stat_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->stat_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->stat_type);
  }
  stat_type = v18->stat_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->stat_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->stat_type, v5);
  }
  this->stat_type = stat_type;
  p_stat_param_list = &v18->stat_param_list;
  std::vector<std::string>::vector(&this->stat_param_list, &v18->stat_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&v18->ordering_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->ordering_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->ordering_type);
  }
  ordering_type = v18->ordering_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ordering_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_stat_param_list) = v12 != 0;
    __asan_report_store4(&this->ordering_type, p_stat_param_list);
  }
  this->ordering_type = ordering_type;
  v13 = (((_BYTE)v18 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->stat_method >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->stat_method >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->stat_method);
  }
  stat_method = v18->stat_method;
  v15 = *(_BYTE *)(((unsigned __int64)&this->stat_method >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->stat_method, v13);
  }
  this->stat_method = stat_method;
  if ( *(_BYTE *)(((unsigned __int64)&v18->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->priority);
  }
  priority = v18->priority;
  v17 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->priority, v13);
  }
  this->priority = priority;
};

// Line 188: range 00000000134257A8-00000000134257D2
void __cdecl data::FleurFairDungeonStatExcelConfig::~FleurFairDungeonStatExcelConfig(
        data::FleurFairDungeonStatExcelConfig *const this)
{
  data::FleurFairDungeonStatExcelConfig::~FleurFairDungeonStatExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 188: range 0000000013425756-00000000134257A7
void __cdecl data::FleurFairDungeonStatExcelConfig::~FleurFairDungeonStatExcelConfig(
        data::FleurFairDungeonStatExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FleurFairDungeonStatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairDungeonStatExcelConfig = v2;
  std::vector<std::string>::~vector(&this->stat_param_list);
};

// Line 205: range 0000000012EC2212-0000000012EC2325
void __cdecl data::FleurFairBuffEnergyStatExcelConfig::FleurFairBuffEnergyStatExcelConfig(
        data::FleurFairBuffEnergyStatExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FleurFairBuffEnergyStatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairBuffEnergyStatExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  std::string::basic_string(&this->stat_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
};

// Line 205: range 00000000133AE4C6-00000000133AE695
void __cdecl data::FleurFairBuffEnergyStatExcelConfig::FleurFairBuffEnergyStatExcelConfig(
        data::FleurFairBuffEnergyStatExcelConfig *const this,
        const data::FleurFairBuffEnergyStatExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gallery_id; // ecx
  char v7; // dl
  std::string *p_stat_param; // rsi
  uint32_t priority; // ecx
  char v10; // al
  const data::FleurFairBuffEnergyStatExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FleurFairBuffEnergyStatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FleurFairBuffEnergyStatExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v11->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->gallery_id);
  }
  gallery_id = v11->gallery_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  p_stat_param = &v11->stat_param;
  std::string::basic_string(&this->stat_param, &v11->stat_param);
  if ( *(_BYTE *)(((unsigned __int64)&v11->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->priority);
  }
  priority = v11->priority;
  v10 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_stat_param) = v10 != 0;
    __asan_report_store4(&this->priority, p_stat_param);
  }
  this->priority = priority;
};

// Line 208: range 000000001342572A-0000000013425754
void __cdecl data::FleurFairBuffEnergyStatExcelConfig::~FleurFairBuffEnergyStatExcelConfig(
        data::FleurFairBuffEnergyStatExcelConfig *const this)
{
  data::FleurFairBuffEnergyStatExcelConfig::~FleurFairBuffEnergyStatExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 208: range 00000000134256D8-0000000013425729
void __cdecl data::FleurFairBuffEnergyStatExcelConfig::~FleurFairBuffEnergyStatExcelConfig(
        data::FleurFairBuffEnergyStatExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FleurFairBuffEnergyStatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FleurFairBuffEnergyStatExcelConfig = v2;
  std::string::~string(&this->stat_param);
};

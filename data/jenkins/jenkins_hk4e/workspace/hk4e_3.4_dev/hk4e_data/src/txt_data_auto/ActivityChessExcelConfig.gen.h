// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityChessExcelConfig.gen.h

// Line 242: range 00000000128CBFDE-00000000128CC203
void __cdecl data::ActivityChessPreviewExcelConfig::ActivityChessPreviewExcelConfig(
        data::ActivityChessPreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessPreviewExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v1);
  }
  this->activity_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_player_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_player_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_player_limit, v1);
  }
  this->match_player_limit = 0;
  v3 = ((_BYTE)this + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->open_teach_dungeon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->open_teach_dungeon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->open_teach_dungeon, v3, v4);
  this->open_teach_dungeon = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->teach_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->teach_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->teach_dungeon_id, v3);
  }
  this->teach_dungeon_id = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->teach_map_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->teach_map_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->teach_map_id, v5);
  }
  this->teach_map_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->punish_time, v5);
  }
  this->punish_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->series_id, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->series_id = 0;
  std::vector<unsigned int>::vector(&this->teach_score_id_list);
};

// Line 242: range 0000000012A627F0-0000000012A62BF0
void __cdecl data::ActivityChessPreviewExcelConfig::ActivityChessPreviewExcelConfig(
        data::ActivityChessPreviewExcelConfig *const this,
        const data::ActivityChessPreviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_watcher_list; // rsi
  uint32_t match_player_limit; // ecx
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool open_teach_dungeon; // cl
  char v11; // dl
  __int64 v12; // rdx
  uint32_t teach_dungeon_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t teach_map_id; // ecx
  char v17; // dl
  uint32_t punish_time; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t series_id; // ecx
  char v22; // dl
  const data::ActivityChessPreviewExcelConfig *v23; // [rsp+0h] [rbp-20h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityChessPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityChessPreviewExcelConfig = v2;
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
  p_watcher_list = &v23->watcher_list;
  std::vector<unsigned int>::vector(&this->watcher_list, &v23->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&v23->match_player_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->match_player_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->match_player_limit);
  }
  match_player_limit = v23->match_player_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->match_player_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_watcher_list) = v7 != 0;
    __asan_report_store4(&this->match_player_limit, p_watcher_list);
  }
  this->match_player_limit = match_player_limit;
  v8 = ((_BYTE)v23 + 44) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&v23->open_teach_dungeon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&v23->open_teach_dungeon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&v23->open_teach_dungeon, v8, v9);
  open_teach_dungeon = v23->open_teach_dungeon;
  v11 = *(_BYTE *)(((unsigned __int64)&this->open_teach_dungeon >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->open_teach_dungeon, v8, v12);
  this->open_teach_dungeon = open_teach_dungeon;
  if ( *(_BYTE *)(((unsigned __int64)&v23->teach_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->teach_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->teach_dungeon_id);
  }
  teach_dungeon_id = v23->teach_dungeon_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->teach_dungeon_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v8) = v14 != 0;
    __asan_report_store4(&this->teach_dungeon_id, v8);
  }
  this->teach_dungeon_id = teach_dungeon_id;
  v15 = (((_BYTE)v23 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->teach_map_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->teach_map_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->teach_map_id);
  }
  teach_map_id = v23->teach_map_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->teach_map_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->teach_map_id, v15);
  }
  this->teach_map_id = teach_map_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->punish_time);
  }
  punish_time = v23->punish_time;
  v19 = *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->punish_time, v15);
  }
  this->punish_time = punish_time;
  v20 = (((_BYTE)v23 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->series_id);
  }
  series_id = v23->series_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->series_id, v20);
  }
  this->series_id = series_id;
  std::vector<unsigned int>::vector(&this->teach_score_id_list, &v23->teach_score_id_list);
};

// Line 245: range 0000000012AA19C2-0000000012AA19EC
void __cdecl data::ActivityChessPreviewExcelConfig::~ActivityChessPreviewExcelConfig(
        data::ActivityChessPreviewExcelConfig *const this)
{
  data::ActivityChessPreviewExcelConfig::~ActivityChessPreviewExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 245: range 0000000012AA1960-0000000012AA19C1
void __cdecl data::ActivityChessPreviewExcelConfig::~ActivityChessPreviewExcelConfig(
        data::ActivityChessPreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessPreviewExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->teach_score_id_list);
  std::vector<unsigned int>::~vector(&this->watcher_list);
};

// Line 264: range 00000000128CC204-00000000128CC45D
void __cdecl data::ActivityChessLevelExcelConfig::ActivityChessLevelExcelConfig(
        data::ActivityChessLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v1);
  }
  this->level = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_to_next >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_to_next >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exp_to_next, v3);
  }
  this->exp_to_next = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_hp, v3);
  }
  this->home_hp = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_build >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_build >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_build, v4);
  }
  this->initial_build = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_count, v4);
  }
  this->card_count = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_cost, v5);
  }
  this->card_cost = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_fortune >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_fortune >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_fortune, v5);
  }
  this->card_fortune = CHESS_CARDFORTUNE_BAD;
  std::vector<unsigned int>::vector(&this->fortune_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->free_card_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->free_card_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->free_card_count, v5);
  }
  this->free_card_count = 0;
};

// Line 264: range 0000000012A62D32-0000000012A6316A
void __cdecl data::ActivityChessLevelExcelConfig::ActivityChessLevelExcelConfig(
        data::ActivityChessLevelExcelConfig *const this,
        const data::ActivityChessLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t exp_to_next; // ecx
  char v7; // dl
  uint32_t home_hp; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t initial_build; // ecx
  char v12; // dl
  uint32_t card_count; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t card_cost; // ecx
  char v17; // dl
  data::CardFortuneType card_fortune; // ecx
  char v19; // al
  std::vector<unsigned int> *p_fortune_list; // rsi
  uint32_t free_card_count; // ecx
  char v22; // al
  const data::ActivityChessLevelExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityChessLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityChessLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->exp_to_next >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->exp_to_next >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->exp_to_next);
  }
  exp_to_next = v23->exp_to_next;
  v7 = *(_BYTE *)(((unsigned __int64)&this->exp_to_next >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->exp_to_next, v5);
  }
  this->exp_to_next = exp_to_next;
  if ( *(_BYTE *)(((unsigned __int64)&v23->home_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->home_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->home_hp);
  }
  home_hp = v23->home_hp;
  v9 = *(_BYTE *)(((unsigned __int64)&this->home_hp >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->home_hp, v5);
  }
  this->home_hp = home_hp;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->initial_build >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->initial_build >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->initial_build);
  }
  initial_build = v23->initial_build;
  v12 = *(_BYTE *)(((unsigned __int64)&this->initial_build >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->initial_build, v10);
  }
  this->initial_build = initial_build;
  if ( *(_BYTE *)(((unsigned __int64)&v23->card_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->card_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->card_count);
  }
  card_count = v23->card_count;
  v14 = *(_BYTE *)(((unsigned __int64)&this->card_count >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->card_count, v10);
  }
  this->card_count = card_count;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->card_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->card_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->card_cost);
  }
  card_cost = v23->card_cost;
  v17 = *(_BYTE *)(((unsigned __int64)&this->card_cost >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->card_cost, v15);
  }
  this->card_cost = card_cost;
  if ( *(_BYTE *)(((unsigned __int64)&v23->card_fortune >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->card_fortune >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->card_fortune);
  }
  card_fortune = v23->card_fortune;
  v19 = *(_BYTE *)(((unsigned __int64)&this->card_fortune >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->card_fortune, v15);
  }
  this->card_fortune = card_fortune;
  p_fortune_list = &v23->fortune_list;
  std::vector<unsigned int>::vector(&this->fortune_list, &v23->fortune_list);
  if ( *(_BYTE *)(((unsigned __int64)&v23->free_card_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->free_card_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->free_card_count);
  }
  free_card_count = v23->free_card_count;
  v22 = *(_BYTE *)(((unsigned __int64)&this->free_card_count >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_fortune_list) = v22 != 0;
    __asan_report_store4(&this->free_card_count, p_fortune_list);
  }
  this->free_card_count = free_card_count;
};

// Line 267: range 0000000012AA1934-0000000012AA195E
void __cdecl data::ActivityChessLevelExcelConfig::~ActivityChessLevelExcelConfig(
        data::ActivityChessLevelExcelConfig *const this)
{
  data::ActivityChessLevelExcelConfig::~ActivityChessLevelExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 267: range 0000000012AA18E2-0000000012AA1933
void __cdecl data::ActivityChessLevelExcelConfig::~ActivityChessLevelExcelConfig(
        data::ActivityChessLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->fortune_list);
};

// Line 286: range 00000000128CC45E-00000000128CC6C4
void __cdecl data::ActivityChessMapExcelConfig::ActivityChessMapExcelConfig(
        data::ActivityChessMapExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessMapExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->chess_map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chess_map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chess_map_id, v1);
  }
  this->chess_map_id = 0;
  std::string::basic_string(&this->map_name);
  std::string::basic_string(&this->desc);
  std::string::basic_string(&this->unlock_tips);
  std::string::basic_string(&this->map_icon_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->build_gear_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->build_gear_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->build_gear_limit, v1);
  }
  this->build_gear_limit = 0;
  v3 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entry_point_id, v3);
  }
  this->entry_point_id = 0;
  v4 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_day, v4);
  }
  this->unlock_day = 0;
  if ( *(char *)(((unsigned __int64)&this->is_teach_map >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_teach_map, v4, &this->is_teach_map);
  this->is_teach_map = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_map_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prev_map_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prev_map_id, (((_BYTE)this - 92) & 7u) + 3);
  }
  this->prev_map_id = 0;
};

// Line 286: range 0000000012A632AC-0000000012A6374E
void __cdecl data::ActivityChessMapExcelConfig::ActivityChessMapExcelConfig(
        data::ActivityChessMapExcelConfig *const this,
        const data::ActivityChessMapExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t chess_map_id; // ecx
  char v4; // al
  std::string *p_map_icon_path; // rsi
  uint32_t build_gear_limit; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t dungeon_id; // ecx
  char v10; // dl
  uint32_t entry_point_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t unlock_day; // ecx
  char v15; // dl
  bool is_teach_map; // cl
  char v17; // al
  __int64 v18; // rsi
  uint32_t prev_map_id; // ecx
  char v20; // dl
  const data::ActivityChessMapExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityChessMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityChessMapExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->chess_map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->chess_map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->chess_map_id);
  }
  chess_map_id = a2->chess_map_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->chess_map_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->chess_map_id, a2);
  }
  this->chess_map_id = chess_map_id;
  std::string::basic_string(&this->map_name, &v21->map_name);
  std::string::basic_string(&this->desc, &v21->desc);
  std::string::basic_string(&this->unlock_tips, &v21->unlock_tips);
  p_map_icon_path = &v21->map_icon_path;
  std::string::basic_string(&this->map_icon_path, &v21->map_icon_path);
  if ( *(_BYTE *)(((unsigned __int64)&v21->build_gear_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->build_gear_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->build_gear_limit);
  }
  build_gear_limit = v21->build_gear_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->build_gear_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_map_icon_path) = v7 != 0;
    __asan_report_store4(&this->build_gear_limit, p_map_icon_path);
  }
  this->build_gear_limit = build_gear_limit;
  v8 = (((_BYTE)v21 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->dungeon_id);
  }
  dungeon_id = v21->dungeon_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->dungeon_id, v8);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->entry_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->entry_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->entry_point_id);
  }
  entry_point_id = v21->entry_point_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->entry_point_id, v8);
  }
  this->entry_point_id = entry_point_id;
  v13 = (((_BYTE)v21 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->unlock_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->unlock_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->unlock_day);
  }
  unlock_day = v21->unlock_day;
  v15 = *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  if ( v15 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v15 )
    __asan_report_store4(&this->unlock_day, v13);
  this->unlock_day = unlock_day;
  if ( *(char *)(((unsigned __int64)&v21->is_teach_map >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v21->is_teach_map, v13, &v21->is_teach_map);
  is_teach_map = v21->is_teach_map;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_teach_map >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store1(&this->is_teach_map, v13, &this->is_teach_map);
  }
  this->is_teach_map = is_teach_map;
  v18 = (((_BYTE)v21 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->prev_map_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->prev_map_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->prev_map_id);
  }
  prev_map_id = v21->prev_map_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->prev_map_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->prev_map_id, v18);
  }
  this->prev_map_id = prev_map_id;
};

// Line 289: range 0000000012AA18B6-0000000012AA18E0
void __cdecl data::ActivityChessMapExcelConfig::~ActivityChessMapExcelConfig(
        data::ActivityChessMapExcelConfig *const this)
{
  data::ActivityChessMapExcelConfig::~ActivityChessMapExcelConfig(this);
  operator delete(this, 0xA8uLL);
};

// Line 289: range 0000000012AA1834-0000000012AA18B5
void __cdecl data::ActivityChessMapExcelConfig::~ActivityChessMapExcelConfig(
        data::ActivityChessMapExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessMapExcelConfig = v2;
  std::string::~string(&this->map_icon_path);
  std::string::~string(&this->unlock_tips);
  std::string::~string(&this->desc);
  std::string::~string(&this->map_name);
};

// Line 310: range 00000000128CC6C6-00000000128CC7D9
void __cdecl data::ActivityChessScheduleExcelConfig::ActivityChessScheduleExcelConfig(
        data::ActivityChessScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessScheduleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day, v1);
  }
  this->day = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_up_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_up_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exp_up_limit, v3);
  }
  this->exp_up_limit = 0;
  std::vector<unsigned int>::vector(&this->open_map_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_id, v3);
  }
  this->cond_id = 0;
};

// Line 310: range 0000000012A63890-0000000012A63A5F
void __cdecl data::ActivityChessScheduleExcelConfig::ActivityChessScheduleExcelConfig(
        data::ActivityChessScheduleExcelConfig *const this,
        const data::ActivityChessScheduleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t day; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t exp_up_limit; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_open_map_list; // rsi
  uint32_t cond_id; // ecx
  char v10; // al
  const data::ActivityChessScheduleExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityChessScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityChessScheduleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->day);
  }
  day = a2->day;
  v4 = *(_BYTE *)(((unsigned __int64)&this->day >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->day, a2);
  }
  this->day = day;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->exp_up_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->exp_up_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->exp_up_limit);
  }
  exp_up_limit = v11->exp_up_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->exp_up_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->exp_up_limit, v5);
  }
  this->exp_up_limit = exp_up_limit;
  p_open_map_list = &v11->open_map_list;
  std::vector<unsigned int>::vector(&this->open_map_list, &v11->open_map_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->cond_id);
  }
  cond_id = v11->cond_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_open_map_list) = v10 != 0;
    __asan_report_store4(&this->cond_id, p_open_map_list);
  }
  this->cond_id = cond_id;
};

// Line 313: range 0000000012AA1808-0000000012AA1832
void __cdecl data::ActivityChessScheduleExcelConfig::~ActivityChessScheduleExcelConfig(
        data::ActivityChessScheduleExcelConfig *const this)
{
  data::ActivityChessScheduleExcelConfig::~ActivityChessScheduleExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 313: range 0000000012AA17B6-0000000012AA1807
void __cdecl data::ActivityChessScheduleExcelConfig::~ActivityChessScheduleExcelConfig(
        data::ActivityChessScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessScheduleExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->open_map_list);
};

// Line 327: range 00000000128CC7DA-00000000128CCA30
void __cdecl data::ActivityChessGearExcelConfig::ActivityChessGearExcelConfig(
        data::ActivityChessGearExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessGearExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gear_id, v1);
  }
  this->gear_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->build_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->build_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->build_cost, v3);
  }
  this->build_cost = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->demolition_refund >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->demolition_refund >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->demolition_refund, v3);
  }
  this->demolition_refund = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v4);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->build_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->build_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->build_limit, v4);
  }
  this->build_limit = 0;
  std::vector<unsigned int>::vector(&this->ban_dungeon_list);
  if ( *(char *)(((unsigned __int64)&this->is_enable_rotate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_rotate, v4, &this->is_enable_rotate);
  this->is_enable_rotate = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_level, v5);
  }
  this->init_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->need_chess_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->need_chess_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->need_chess_level, v5);
  }
  this->need_chess_level = 0;
};

// Line 327: range 0000000012A63BA0-0000000012A63FD9
void __cdecl data::ActivityChessGearExcelConfig::ActivityChessGearExcelConfig(
        data::ActivityChessGearExcelConfig *const this,
        const data::ActivityChessGearExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t gear_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t build_cost; // ecx
  char v7; // dl
  uint32_t demolition_refund; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gadget_id; // ecx
  char v12; // dl
  uint32_t build_limit; // ecx
  char v14; // al
  std::vector<unsigned int> *p_ban_dungeon_list; // rsi
  bool is_enable_rotate; // cl
  char v17; // al
  __int64 v18; // rsi
  uint32_t init_level; // ecx
  char v20; // dl
  uint32_t need_chess_level; // ecx
  char v22; // al
  const data::ActivityChessGearExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityChessGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityChessGearExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gear_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gear_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gear_id);
  }
  gear_id = a2->gear_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gear_id, a2);
  }
  this->gear_id = gear_id;
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->build_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->build_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->build_cost);
  }
  build_cost = v23->build_cost;
  v7 = *(_BYTE *)(((unsigned __int64)&this->build_cost >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->build_cost, v5);
  }
  this->build_cost = build_cost;
  if ( *(_BYTE *)(((unsigned __int64)&v23->demolition_refund >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->demolition_refund >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->demolition_refund);
  }
  demolition_refund = v23->demolition_refund;
  v9 = *(_BYTE *)(((unsigned __int64)&this->demolition_refund >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->demolition_refund, v5);
  }
  this->demolition_refund = demolition_refund;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->gadget_id);
  }
  gadget_id = v23->gadget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gadget_id, v10);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->build_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->build_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->build_limit);
  }
  build_limit = v23->build_limit;
  v14 = *(_BYTE *)(((unsigned __int64)&this->build_limit >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->build_limit, v10);
  }
  this->build_limit = build_limit;
  p_ban_dungeon_list = &v23->ban_dungeon_list;
  std::vector<unsigned int>::vector(&this->ban_dungeon_list, &v23->ban_dungeon_list);
  if ( *(char *)(((unsigned __int64)&v23->is_enable_rotate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->is_enable_rotate, p_ban_dungeon_list, &v23->is_enable_rotate);
  is_enable_rotate = v23->is_enable_rotate;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_enable_rotate >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(p_ban_dungeon_list) = v17 != 0;
    __asan_report_store1(&this->is_enable_rotate, p_ban_dungeon_list, &this->is_enable_rotate);
  }
  this->is_enable_rotate = is_enable_rotate;
  v18 = (((_BYTE)v23 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->init_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->init_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->init_level);
  }
  init_level = v23->init_level;
  v20 = *(_BYTE *)(((unsigned __int64)&this->init_level >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->init_level, v18);
  }
  this->init_level = init_level;
  if ( *(_BYTE *)(((unsigned __int64)&v23->need_chess_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->need_chess_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->need_chess_level);
  }
  need_chess_level = v23->need_chess_level;
  v22 = *(_BYTE *)(((unsigned __int64)&this->need_chess_level >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->need_chess_level, v18);
  }
  this->need_chess_level = need_chess_level;
};

// Line 330: range 0000000012AA1738-0000000012AA1789
void __cdecl data::ActivityChessGearExcelConfig::~ActivityChessGearExcelConfig(
        data::ActivityChessGearExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessGearExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->ban_dungeon_list);
};

// Line 330: range 0000000012AA178A-0000000012AA17B4
void __cdecl data::ActivityChessGearExcelConfig::~ActivityChessGearExcelConfig(
        data::ActivityChessGearExcelConfig *const this)
{
  data::ActivityChessGearExcelConfig::~ActivityChessGearExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 349: range 0000000012EE6524-0000000012EE6947
data::ChessCardEffect *__cdecl data::ChessCardEffect::operator=(
        data::ChessCardEffect *const this,
        const data::ChessCardEffect *a2)
{
  data::ChessCardTargetType target_type; // ecx
  char v3; // al
  std::vector<unsigned int> *p_target_param_list; // rsi
  data::ChessCardEffectType effect_type; // ecx
  char v6; // al
  std::string *p_effect_str_param; // rsi
  int32_t effect_param1; // ecx
  char v9; // al
  __int64 v10; // rsi
  int32_t effect_param2; // ecx
  char v12; // dl
  int32_t effect_param3; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t begin_round; // ecx
  char v17; // dl
  uint32_t active_rounds; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t effect_index; // ecx
  char v22; // dl
  const data::ChessCardEffect *v24; // [rsp+0h] [rbp-10h]

  v24 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->target_type, a2);
  }
  this->target_type = target_type;
  p_target_param_list = &v24->target_param_list;
  std::vector<unsigned int>::operator=(&this->target_param_list, &v24->target_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->effect_type);
  }
  effect_type = v24->effect_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_target_param_list) = v6 != 0;
    __asan_report_store4(&this->effect_type, p_target_param_list);
  }
  this->effect_type = effect_type;
  p_effect_str_param = &v24->effect_str_param;
  std::string::operator=(&this->effect_str_param, &v24->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->effect_param1);
  }
  effect_param1 = v24->effect_param1;
  v9 = *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_effect_str_param) = v9 != 0;
    __asan_report_store4(&this->effect_param1, p_effect_str_param);
  }
  this->effect_param1 = effect_param1;
  v10 = (((_BYTE)v24 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->effect_param2);
  }
  effect_param2 = v24->effect_param2;
  v12 = *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->effect_param2, v10);
  }
  this->effect_param2 = effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->effect_param3);
  }
  effect_param3 = v24->effect_param3;
  v14 = *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->effect_param3, v10);
  }
  this->effect_param3 = effect_param3;
  v15 = (((_BYTE)v24 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->begin_round);
  }
  begin_round = v24->begin_round;
  v17 = *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->begin_round, v15);
  }
  this->begin_round = begin_round;
  if ( *(_BYTE *)(((unsigned __int64)&v24->active_rounds >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->active_rounds >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->active_rounds);
  }
  active_rounds = v24->active_rounds;
  v19 = *(_BYTE *)(((unsigned __int64)&this->active_rounds >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->active_rounds, v15);
  }
  this->active_rounds = active_rounds;
  v20 = (((_BYTE)v24 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->effect_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->effect_index);
  }
  effect_index = v24->effect_index;
  v22 = *(_BYTE *)(((unsigned __int64)&this->effect_index >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->effect_index, v20);
  }
  this->effect_index = effect_index;
  return this;
};

// Line 349: range 00000000128CCA32-00000000128CCC9B
void __cdecl data::ChessCardEffect::ChessCardEffect(data::ChessCardEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ChessCardEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChessCardEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type, v1);
  }
  this->target_type = CHESS_CARD_TARGET_DEFAULT;
  std::vector<unsigned int>::vector(&this->target_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type, v1);
  }
  this->effect_type = CHESS_CARD_EFFECT_DEFAULT;
  std::string::basic_string(&this->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_param1, v1);
  }
  this->effect_param1 = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_param2, v3);
  }
  this->effect_param2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_param3, v3);
  }
  this->effect_param3 = 0;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_round, v4);
  }
  this->begin_round = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->active_rounds >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_rounds >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active_rounds, v4);
  }
  this->active_rounds = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_index, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->effect_index = 0;
};

// Line 349: range 0000000012A622F2-0000000012A6276C
void __cdecl data::ChessCardEffect::ChessCardEffect(data::ChessCardEffect *const this, const data::ChessCardEffect *a2)
{
  int (**v2)(...); // rdx
  data::ChessCardTargetType target_type; // ecx
  char v4; // al
  std::vector<unsigned int> *p_target_param_list; // rsi
  data::ChessCardEffectType effect_type; // ecx
  char v7; // al
  std::string *p_effect_str_param; // rsi
  int32_t effect_param1; // ecx
  char v10; // al
  __int64 v11; // rsi
  int32_t effect_param2; // ecx
  char v13; // dl
  int32_t effect_param3; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t begin_round; // ecx
  char v18; // dl
  uint32_t active_rounds; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t effect_index; // ecx
  char v23; // dl
  const data::ChessCardEffect *v24; // [rsp+0h] [rbp-20h]

  v24 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChessCardEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChessCardEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->target_type, a2);
  }
  this->target_type = target_type;
  p_target_param_list = &v24->target_param_list;
  std::vector<unsigned int>::vector(&this->target_param_list, &v24->target_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->effect_type);
  }
  effect_type = v24->effect_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_target_param_list) = v7 != 0;
    __asan_report_store4(&this->effect_type, p_target_param_list);
  }
  this->effect_type = effect_type;
  p_effect_str_param = &v24->effect_str_param;
  std::string::basic_string(&this->effect_str_param, &v24->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->effect_param1);
  }
  effect_param1 = v24->effect_param1;
  v10 = *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_effect_str_param) = v10 != 0;
    __asan_report_store4(&this->effect_param1, p_effect_str_param);
  }
  this->effect_param1 = effect_param1;
  v11 = (((_BYTE)v24 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->effect_param2);
  }
  effect_param2 = v24->effect_param2;
  v13 = *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->effect_param2, v11);
  }
  this->effect_param2 = effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->effect_param3);
  }
  effect_param3 = v24->effect_param3;
  v15 = *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->effect_param3, v11);
  }
  this->effect_param3 = effect_param3;
  v16 = (((_BYTE)v24 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->begin_round);
  }
  begin_round = v24->begin_round;
  v18 = *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->begin_round, v16);
  }
  this->begin_round = begin_round;
  if ( *(_BYTE *)(((unsigned __int64)&v24->active_rounds >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->active_rounds >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->active_rounds);
  }
  active_rounds = v24->active_rounds;
  v20 = *(_BYTE *)(((unsigned __int64)&this->active_rounds >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->active_rounds, v16);
  }
  this->active_rounds = active_rounds;
  v21 = (((_BYTE)v24 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->effect_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->effect_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->effect_index);
  }
  effect_index = v24->effect_index;
  v23 = *(_BYTE *)(((unsigned __int64)&this->effect_index >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->effect_index, v21);
  }
  this->effect_index = effect_index;
};

// Line 352: range 0000000012AA170C-0000000012AA1736
void __cdecl data::ChessCardEffect::~ChessCardEffect(data::ChessCardEffect *const this)
{
  data::ChessCardEffect::~ChessCardEffect(this);
  operator delete(this, 0x68uLL);
};

// Line 352: range 0000000012AA16AA-0000000012AA170B
void __cdecl data::ChessCardEffect::~ChessCardEffect(data::ChessCardEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChessCardEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChessCardEffect = v2;
  std::string::~string(&this->effect_str_param);
  std::vector<unsigned int>::~vector(&this->target_param_list);
};

// Line 370: range 00000000128CCCF0-00000000128CD0B0
void __cdecl data::ActivityChessCardExcelConfig::ActivityChessCardExcelConfig(
        data::ActivityChessCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessCardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->number, v3);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tag, v3);
  }
  this->tag = CARD_TAG_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->need_chess_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_chess_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->need_chess_level, v4);
  }
  this->need_chess_level = 0;
  if ( *(char *)(((unsigned __int64)&this->is_disused >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_disused, v4, &this->is_disused);
  this->is_disused = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_points, v5);
  }
  this->cost_points = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_type, v5);
  }
  this->card_type = CHESS_CARD_CURSE;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_quality_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_quality_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_quality_type, v6);
  }
  this->card_quality_type = CARD_QUALITY_NORAML;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_count, v6);
  }
  this->card_count = 0;
  data::ChessCardEffect::ChessCardEffect(&this->effect);
  if ( *(_BYTE *)(((unsigned __int64)&this->curse_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->curse_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->curse_weight, v6);
  }
  this->curse_weight = 0;
  v7 = ((_BYTE)this - 100) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_can_attach_curse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_can_attach_curse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_can_attach_curse, v7, v8);
  this->is_can_attach_curse = 0;
  v9 = ((_BYTE)this - 99) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_remove_on_pick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_remove_on_pick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_remove_on_pick, v9, v10);
  this->is_remove_on_pick = 0;
  v11 = ((_BYTE)this - 98) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_show_on_pick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_show_on_pick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_show_on_pick, v11, v12);
  this->is_show_on_pick = 0;
  std::vector<data::ChessCardEffect>::vector(&this->extra_effect_list);
};

// Line 370: range 0000000012A6411A-0000000012A6483C
void __cdecl data::ActivityChessCardExcelConfig::ActivityChessCardExcelConfig(
        data::ActivityChessCardExcelConfig *const this,
        const data::ActivityChessCardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t number; // ecx
  char v7; // dl
  data::ChessCardTag tag; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t need_chess_level; // ecx
  char v12; // dl
  bool is_disused; // cl
  char v14; // al
  __int64 v15; // rsi
  uint32_t cost_points; // ecx
  char v17; // dl
  data::ChessCardType card_type; // ecx
  char v19; // al
  __int64 v20; // rsi
  data::ChessCardQualityType card_quality_type; // ecx
  char v22; // dl
  uint32_t card_count; // ecx
  char v24; // al
  data::ChessCardEffect *p_effect; // rsi
  uint32_t curse_weight; // ecx
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool is_can_attach_curse; // cl
  char v31; // dl
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  bool is_remove_on_pick; // cl
  char v36; // dl
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdx
  bool is_show_on_pick; // cl
  char v41; // dl
  __int64 v42; // rdx
  const data::ActivityChessCardExcelConfig *v43; // [rsp+0h] [rbp-20h]

  v43 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityChessCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityChessCardExcelConfig = v2;
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
  v5 = (((_BYTE)v43 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->number);
  }
  number = v43->number;
  v7 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->number, v5);
  }
  this->number = number;
  if ( *(_BYTE *)(((unsigned __int64)&v43->tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->tag);
  }
  tag = v43->tag;
  v9 = *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->tag, v5);
  }
  this->tag = tag;
  v10 = (((_BYTE)v43 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->need_chess_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->need_chess_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->need_chess_level);
  }
  need_chess_level = v43->need_chess_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->need_chess_level >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->need_chess_level, v10);
  this->need_chess_level = need_chess_level;
  if ( *(char *)(((unsigned __int64)&v43->is_disused >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v43->is_disused, v10, &v43->is_disused);
  is_disused = v43->is_disused;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_disused >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_disused, v10, &this->is_disused);
  }
  this->is_disused = is_disused;
  v15 = (((_BYTE)v43 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->cost_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->cost_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->cost_points);
  }
  cost_points = v43->cost_points;
  v17 = *(_BYTE *)(((unsigned __int64)&this->cost_points >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->cost_points, v15);
  }
  this->cost_points = cost_points;
  if ( *(_BYTE *)(((unsigned __int64)&v43->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->card_type);
  }
  card_type = v43->card_type;
  v19 = *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->card_type, v15);
  }
  this->card_type = card_type;
  v20 = (((_BYTE)v43 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->card_quality_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->card_quality_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->card_quality_type);
  }
  card_quality_type = v43->card_quality_type;
  v22 = *(_BYTE *)(((unsigned __int64)&this->card_quality_type >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->card_quality_type, v20);
  }
  this->card_quality_type = card_quality_type;
  if ( *(_BYTE *)(((unsigned __int64)&v43->card_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->card_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->card_count);
  }
  card_count = v43->card_count;
  v24 = *(_BYTE *)(((unsigned __int64)&this->card_count >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->card_count, v20);
  }
  this->card_count = card_count;
  p_effect = &v43->effect;
  data::ChessCardEffect::ChessCardEffect(&this->effect, &v43->effect);
  if ( *(_BYTE *)(((unsigned __int64)&v43->curse_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->curse_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->curse_weight);
  }
  curse_weight = v43->curse_weight;
  v27 = *(_BYTE *)(((unsigned __int64)&this->curse_weight >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(p_effect) = v27 != 0;
    __asan_report_store4(&this->curse_weight, p_effect);
  }
  this->curse_weight = curse_weight;
  v28 = ((_BYTE)v43 - 100) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&v43->is_can_attach_curse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&v43->is_can_attach_curse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&v43->is_can_attach_curse, v28, v29);
  is_can_attach_curse = v43->is_can_attach_curse;
  v31 = *(_BYTE *)(((unsigned __int64)&this->is_can_attach_curse >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this - 100) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->is_can_attach_curse, v28, v32);
  this->is_can_attach_curse = is_can_attach_curse;
  v33 = ((_BYTE)v43 - 99) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&v43->is_remove_on_pick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&v43->is_remove_on_pick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&v43->is_remove_on_pick, v33, v34);
  is_remove_on_pick = v43->is_remove_on_pick;
  v36 = *(_BYTE *)(((unsigned __int64)&this->is_remove_on_pick >> 3) + 0x7FFF8000);
  LOBYTE(v33) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this - 99) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->is_remove_on_pick, v33, v37);
  this->is_remove_on_pick = is_remove_on_pick;
  v38 = ((_BYTE)v43 - 98) & 7;
  v39 = (*(_BYTE *)(((unsigned __int64)&v43->is_show_on_pick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v38 >= *(_BYTE *)(((unsigned __int64)&v43->is_show_on_pick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v39 )
    __asan_report_load1(&v43->is_show_on_pick, v38, v39);
  is_show_on_pick = v43->is_show_on_pick;
  v41 = *(_BYTE *)(((unsigned __int64)&this->is_show_on_pick >> 3) + 0x7FFF8000);
  LOBYTE(v38) = v41 != 0;
  v42 = (v41 != 0) & (unsigned __int8)((((unsigned __int8)this - 98) & 7) >= v41);
  if ( (_BYTE)v42 )
    __asan_report_store1(&this->is_show_on_pick, v38, v42);
  this->is_show_on_pick = is_show_on_pick;
  std::vector<data::ChessCardEffect>::vector(&this->extra_effect_list, &v43->extra_effect_list);
};

// Line 373: range 0000000012AA167E-0000000012AA16A8
void __cdecl data::ActivityChessCardExcelConfig::~ActivityChessCardExcelConfig(
        data::ActivityChessCardExcelConfig *const this)
{
  data::ActivityChessCardExcelConfig::~ActivityChessCardExcelConfig(this);
  operator delete(this, 0xB8uLL);
};

// Line 373: range 0000000012AA161A-0000000012AA167D
void __cdecl data::ActivityChessCardExcelConfig::~ActivityChessCardExcelConfig(
        data::ActivityChessCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessCardExcelConfig = v2;
  std::vector<data::ChessCardEffect>::~vector(&this->extra_effect_list);
  data::ChessCardEffect::~ChessCardEffect(&this->effect);
};

// Line 398: range 0000000012A6497E-0000000012A64A38
void __cdecl data::ActivityChessMapPointExcelConfig::ActivityChessMapPointExcelConfig(
        data::ActivityChessMapPointExcelConfig *const this,
        const data::ActivityChessMapPointExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessMapPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityChessMapPointExcelConfig = v2;
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

// Line 401: range 0000000012AA15AC-0000000012AA15ED
void __cdecl data::ActivityChessMapPointExcelConfig::~ActivityChessMapPointExcelConfig(
        data::ActivityChessMapPointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessMapPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessMapPointExcelConfig = v2;
};

// Line 401: range 0000000012AA15EE-0000000012AA1618
void __cdecl data::ActivityChessMapPointExcelConfig::~ActivityChessMapPointExcelConfig(
        data::ActivityChessMapPointExcelConfig *const this)
{
  data::ActivityChessMapPointExcelConfig::~ActivityChessMapPointExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 412: range 0000000012A64B7A-0000000012A64C34
void __cdecl data::ActivityChessAffixExcelConfig::ActivityChessAffixExcelConfig(
        data::ActivityChessAffixExcelConfig *const this,
        const data::ActivityChessAffixExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityChessAffixExcelConfig = v2;
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

// Line 415: range 0000000012AA1580-0000000012AA15AA
void __cdecl data::ActivityChessAffixExcelConfig::~ActivityChessAffixExcelConfig(
        data::ActivityChessAffixExcelConfig *const this)
{
  data::ActivityChessAffixExcelConfig::~ActivityChessAffixExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 415: range 0000000012AA153E-0000000012AA157F
void __cdecl data::ActivityChessAffixExcelConfig::~ActivityChessAffixExcelConfig(
        data::ActivityChessAffixExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityChessAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityChessAffixExcelConfig = v2;
};

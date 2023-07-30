// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityChannellerSlabExcelConfig.gen.h

// Line 94: range 0000000013392A12-0000000013392DBA
void __cdecl data::ChannellerSlabPreviewExcelConfig::ChannellerSlabPreviewExcelConfig(
        data::ChannellerSlabPreviewExcelConfig *const this,
        const data::ChannellerSlabPreviewExcelConfig *a2)
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
  uint32_t slab_quest_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t unlock_player_level; // ecx
  char v17; // dl
  uint32_t level_reward_gadget_id; // ecx
  char v19; // al
  const data::ChannellerSlabPreviewExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabPreviewExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v20->slab_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->slab_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->slab_quest_id);
  }
  slab_quest_id = v20->slab_quest_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->slab_quest_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->slab_quest_id, v10);
  }
  this->slab_quest_id = slab_quest_id;
  v15 = (((_BYTE)v20 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->unlock_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->unlock_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->unlock_player_level);
  }
  unlock_player_level = v20->unlock_player_level;
  v17 = *(_BYTE *)(((unsigned __int64)&this->unlock_player_level >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->unlock_player_level, v15);
  }
  this->unlock_player_level = unlock_player_level;
  if ( *(_BYTE *)(((unsigned __int64)&v20->level_reward_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->level_reward_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->level_reward_gadget_id);
  }
  level_reward_gadget_id = v20->level_reward_gadget_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->level_reward_gadget_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->level_reward_gadget_id, v15);
  }
  this->level_reward_gadget_id = level_reward_gadget_id;
};

// Line 97: range 0000000013424D5A-0000000013424D84
void __cdecl data::ChannellerSlabPreviewExcelConfig::~ChannellerSlabPreviewExcelConfig(
        data::ChannellerSlabPreviewExcelConfig *const this)
{
  data::ChannellerSlabPreviewExcelConfig::~ChannellerSlabPreviewExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 97: range 0000000013424D18-0000000013424D59
void __cdecl data::ChannellerSlabPreviewExcelConfig::~ChannellerSlabPreviewExcelConfig(
        data::ChannellerSlabPreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabPreviewExcelConfig = v2;
};

// Line 114: range 0000000012EB6990-0000000012EB6AE1
void __cdecl data::ChannellerSlabChapterExcelConfig::ChannellerSlabChapterExcelConfig(
        data::ChannellerSlabChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabChapterExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_quest, v3);
  }
  this->pre_quest = 0;
};

// Line 114: range 0000000013392EFC-0000000013393140
void __cdecl data::ChannellerSlabChapterExcelConfig::ChannellerSlabChapterExcelConfig(
        data::ChannellerSlabChapterExcelConfig *const this,
        const data::ChannellerSlabChapterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t chapter_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  std::string *p_title; // rsi
  uint32_t pre_quest; // ecx
  char v12; // al
  const data::ChannellerSlabChapterExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabChapterExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->chapter_id);
  }
  chapter_id = v13->chapter_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
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
  p_title = &v13->title;
  std::string::basic_string(&this->title, &v13->title);
  if ( *(_BYTE *)(((unsigned __int64)&v13->pre_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->pre_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->pre_quest);
  }
  pre_quest = v13->pre_quest;
  v12 = *(_BYTE *)(((unsigned __int64)&this->pre_quest >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_title) = v12 != 0;
    __asan_report_store4(&this->pre_quest, p_title);
  }
  this->pre_quest = pre_quest;
};

// Line 117: range 0000000013424C9A-0000000013424CEB
void __cdecl data::ChannellerSlabChapterExcelConfig::~ChannellerSlabChapterExcelConfig(
        data::ChannellerSlabChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabChapterExcelConfig = v2;
  std::string::~string(&this->title);
};

// Line 117: range 0000000013424CEC-0000000013424D16
void __cdecl data::ChannellerSlabChapterExcelConfig::~ChannellerSlabChapterExcelConfig(
        data::ChannellerSlabChapterExcelConfig *const this)
{
  data::ChannellerSlabChapterExcelConfig::~ChannellerSlabChapterExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 132: range 0000000013393282-000000001339362A
void __cdecl data::ChannellerSlabLevelExcelConfig::ChannellerSlabLevelExcelConfig(
        data::ChannellerSlabLevelExcelConfig *const this,
        const data::ChannellerSlabLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage_id; // ecx
  char v7; // dl
  uint32_t wave_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t preview_reward_id; // ecx
  char v12; // dl
  uint32_t reward_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t group_id; // ecx
  char v17; // dl
  uint32_t buff_num; // ecx
  char v19; // al
  const data::ChannellerSlabLevelExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabLevelExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v20->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->stage_id);
  }
  stage_id = v20->stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->wave_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->wave_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->wave_id);
  }
  wave_id = v20->wave_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->wave_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->wave_id, v5);
  }
  this->wave_id = wave_id;
  v10 = (((_BYTE)v20 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->preview_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->preview_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->preview_reward_id);
  }
  preview_reward_id = v20->preview_reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->preview_reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->preview_reward_id, v10);
  }
  this->preview_reward_id = preview_reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->reward_id);
  }
  reward_id = v20->reward_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->reward_id, v10);
  }
  this->reward_id = reward_id;
  v15 = (((_BYTE)v20 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->group_id);
  }
  group_id = v20->group_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->group_id, v15);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->buff_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->buff_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->buff_num);
  }
  buff_num = v20->buff_num;
  v19 = *(_BYTE *)(((unsigned __int64)&this->buff_num >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->buff_num, v15);
  }
  this->buff_num = buff_num;
};

// Line 135: range 0000000013424C6E-0000000013424C98
void __cdecl data::ChannellerSlabLevelExcelConfig::~ChannellerSlabLevelExcelConfig(
        data::ChannellerSlabLevelExcelConfig *const this)
{
  data::ChannellerSlabLevelExcelConfig::~ChannellerSlabLevelExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 135: range 0000000013424C2C-0000000013424C6D
void __cdecl data::ChannellerSlabLevelExcelConfig::~ChannellerSlabLevelExcelConfig(
        data::ChannellerSlabLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabLevelExcelConfig = v2;
};

// Line 152: range 000000001339376C-0000000013393920
void __cdecl data::ChannellerSlabDungeonExcelConfig::ChannellerSlabDungeonExcelConfig(
        data::ChannellerSlabDungeonExcelConfig *const this,
        const data::ChannellerSlabDungeonExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  uint32_t reward_id; // ecx
  char v9; // al
  const data::ChannellerSlabDungeonExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabDungeonExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
};

// Line 155: range 0000000013424C00-0000000013424C2A
void __cdecl data::ChannellerSlabDungeonExcelConfig::~ChannellerSlabDungeonExcelConfig(
        data::ChannellerSlabDungeonExcelConfig *const this)
{
  data::ChannellerSlabDungeonExcelConfig::~ChannellerSlabDungeonExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 155: range 0000000013424BBE-0000000013424BFF
void __cdecl data::ChannellerSlabDungeonExcelConfig::~ChannellerSlabDungeonExcelConfig(
        data::ChannellerSlabDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabDungeonExcelConfig = v2;
};

// Line 168: range 0000000012EB6AE2-0000000012EB6C79
void __cdecl data::ChannellerSlabBuffExcelConfig::ChannellerSlabBuffExcelConfig(
        data::ChannellerSlabBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabBuffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_id, v3);
  }
  this->material_id = 0;
  std::string::basic_string(&this->ability_group_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost, v3);
  }
  this->cost = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_quality >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_quality >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->buff_quality, v4);
  }
  this->buff_quality = CHANNELLER_SLAB_BUFF_QUALITY_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_quality_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_quality_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_quality_type, v4);
  }
  this->buff_quality_type = QUALITY_NONE;
};

// Line 168: range 0000000013393A62-0000000013393D2B
void __cdecl data::ChannellerSlabBuffExcelConfig::ChannellerSlabBuffExcelConfig(
        data::ChannellerSlabBuffExcelConfig *const this,
        const data::ChannellerSlabBuffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t material_id; // ecx
  char v7; // dl
  std::string *p_ability_group_name; // rsi
  uint32_t cost; // ecx
  char v10; // al
  __int64 v11; // rsi
  data::ChannellerSlabBuffQuality buff_quality; // ecx
  char v13; // dl
  data::QualityType buff_quality_type; // ecx
  char v15; // al
  const data::ChannellerSlabBuffExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabBuffExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v16->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->material_id);
  }
  material_id = v16->material_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->material_id, v5);
  }
  this->material_id = material_id;
  p_ability_group_name = &v16->ability_group_name;
  std::string::basic_string(&this->ability_group_name, &v16->ability_group_name);
  if ( *(_BYTE *)(((unsigned __int64)&v16->cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->cost);
  }
  cost = v16->cost;
  v10 = *(_BYTE *)(((unsigned __int64)&this->cost >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_ability_group_name) = v10 != 0;
    __asan_report_store4(&this->cost, p_ability_group_name);
  }
  this->cost = cost;
  v11 = (((_BYTE)v16 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->buff_quality >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->buff_quality >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->buff_quality);
  }
  buff_quality = v16->buff_quality;
  v13 = *(_BYTE *)(((unsigned __int64)&this->buff_quality >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->buff_quality, v11);
  }
  this->buff_quality = buff_quality;
  if ( *(_BYTE *)(((unsigned __int64)&v16->buff_quality_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->buff_quality_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->buff_quality_type);
  }
  buff_quality_type = v16->buff_quality_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->buff_quality_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->buff_quality_type, v11);
  }
  this->buff_quality_type = buff_quality_type;
};

// Line 171: range 0000000013424B92-0000000013424BBC
void __cdecl data::ChannellerSlabBuffExcelConfig::~ChannellerSlabBuffExcelConfig(
        data::ChannellerSlabBuffExcelConfig *const this)
{
  data::ChannellerSlabBuffExcelConfig::~ChannellerSlabBuffExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 171: range 0000000013424B40-0000000013424B91
void __cdecl data::ChannellerSlabBuffExcelConfig::~ChannellerSlabBuffExcelConfig(
        data::ChannellerSlabBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabBuffExcelConfig = v2;
  std::string::~string(&this->ability_group_name);
};

// Line 187: range 0000000013382226-000000001338245F
void __cdecl data::ChannellerSlabBuffEnergyExcelConfig::ChannellerSlabBuffEnergyExcelConfig(
        data::ChannellerSlabBuffEnergyExcelConfig *const this,
        const data::ChannellerSlabBuffEnergyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t avatar_level; // ecx
  char v7; // dl
  uint32_t single_energy; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t mp_energy; // ecx
  char v12; // dl
  const data::ChannellerSlabBuffEnergyExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabBuffEnergyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabBuffEnergyExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->avatar_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->avatar_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->avatar_level);
  }
  avatar_level = v13->avatar_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->avatar_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->avatar_level, v5);
  }
  this->avatar_level = avatar_level;
  if ( *(_BYTE *)(((unsigned __int64)&v13->single_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->single_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->single_energy);
  }
  single_energy = v13->single_energy;
  v9 = *(_BYTE *)(((unsigned __int64)&this->single_energy >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->single_energy, v5);
  }
  this->single_energy = single_energy;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->mp_energy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->mp_energy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->mp_energy);
  }
  mp_energy = v13->mp_energy;
  v12 = *(_BYTE *)(((unsigned __int64)&this->mp_energy >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->mp_energy, v10);
  }
  this->mp_energy = mp_energy;
};

// Line 190: range 0000000013424AD2-0000000013424B13
void __cdecl data::ChannellerSlabBuffEnergyExcelConfig::~ChannellerSlabBuffEnergyExcelConfig(
        data::ChannellerSlabBuffEnergyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabBuffEnergyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabBuffEnergyExcelConfig = v2;
};

// Line 190: range 0000000013424B14-0000000013424B3E
void __cdecl data::ChannellerSlabBuffEnergyExcelConfig::~ChannellerSlabBuffEnergyExcelConfig(
        data::ChannellerSlabBuffEnergyExcelConfig *const this)
{
  data::ChannellerSlabBuffEnergyExcelConfig::~ChannellerSlabBuffEnergyExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 204: range 0000000013393FAC-0000000013394160
void __cdecl data::ChannellerSlabBuffCostExcelConfig::ChannellerSlabBuffCostExcelConfig(
        data::ChannellerSlabBuffCostExcelConfig *const this,
        const data::ChannellerSlabBuffCostExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::QualityType buff_quality_type; // ecx
  char v7; // dl
  uint32_t buff_cost; // ecx
  char v9; // al
  const data::ChannellerSlabBuffCostExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabBuffCostExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabBuffCostExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->buff_quality_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->buff_quality_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->buff_quality_type);
  }
  buff_quality_type = v10->buff_quality_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->buff_quality_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->buff_quality_type, v5);
  }
  this->buff_quality_type = buff_quality_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->buff_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->buff_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->buff_cost);
  }
  buff_cost = v10->buff_cost;
  v9 = *(_BYTE *)(((unsigned __int64)&this->buff_cost >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->buff_cost, v5);
  }
  this->buff_cost = buff_cost;
};

// Line 207: range 0000000013424AA6-0000000013424AD0
void __cdecl data::ChannellerSlabBuffCostExcelConfig::~ChannellerSlabBuffCostExcelConfig(
        data::ChannellerSlabBuffCostExcelConfig *const this)
{
  data::ChannellerSlabBuffCostExcelConfig::~ChannellerSlabBuffCostExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 207: range 0000000013424A64-0000000013424AA5
void __cdecl data::ChannellerSlabBuffCostExcelConfig::~ChannellerSlabBuffCostExcelConfig(
        data::ChannellerSlabBuffCostExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabBuffCostExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabBuffCostExcelConfig = v2;
};

// Line 220: range 0000000013382634-00000000133827E8
void __cdecl data::ChannellerSlabLoopDungeonPreviewExcelConfig::ChannellerSlabLoopDungeonPreviewExcelConfig(
        data::ChannellerSlabLoopDungeonPreviewExcelConfig *const this,
        const data::ChannellerSlabLoopDungeonPreviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  const data::ChannellerSlabLoopDungeonPreviewExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabLoopDungeonPreviewExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->activity_id);
  }
  activity_id = v10->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->open_day);
  }
  open_day = v10->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
};

// Line 223: range 00000000134249F6-0000000013424A37
void __cdecl data::ChannellerSlabLoopDungeonPreviewExcelConfig::~ChannellerSlabLoopDungeonPreviewExcelConfig(
        data::ChannellerSlabLoopDungeonPreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabLoopDungeonPreviewExcelConfig = v2;
};

// Line 223: range 0000000013424A38-0000000013424A62
void __cdecl data::ChannellerSlabLoopDungeonPreviewExcelConfig::~ChannellerSlabLoopDungeonPreviewExcelConfig(
        data::ChannellerSlabLoopDungeonPreviewExcelConfig *const this)
{
  data::ChannellerSlabLoopDungeonPreviewExcelConfig::~ChannellerSlabLoopDungeonPreviewExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 236: range 000000001339435C-0000000013394510
void __cdecl data::ChannellerSlabLoopDungeonRewardExcelConfig::ChannellerSlabLoopDungeonRewardExcelConfig(
        data::ChannellerSlabLoopDungeonRewardExcelConfig *const this,
        const data::ChannellerSlabLoopDungeonRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t score_grade; // ecx
  char v7; // dl
  uint32_t reward_id; // ecx
  char v9; // al
  const data::ChannellerSlabLoopDungeonRewardExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabLoopDungeonRewardExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->score_grade >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->score_grade >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->score_grade);
  }
  score_grade = v10->score_grade;
  v7 = *(_BYTE *)(((unsigned __int64)&this->score_grade >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->score_grade, v5);
  }
  this->score_grade = score_grade;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
};

// Line 239: range 00000000134249CA-00000000134249F4
void __cdecl data::ChannellerSlabLoopDungeonRewardExcelConfig::~ChannellerSlabLoopDungeonRewardExcelConfig(
        data::ChannellerSlabLoopDungeonRewardExcelConfig *const this)
{
  data::ChannellerSlabLoopDungeonRewardExcelConfig::~ChannellerSlabLoopDungeonRewardExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 239: range 0000000013424988-00000000134249C9
void __cdecl data::ChannellerSlabLoopDungeonRewardExcelConfig::~ChannellerSlabLoopDungeonRewardExcelConfig(
        data::ChannellerSlabLoopDungeonRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabLoopDungeonRewardExcelConfig = v2;
};

// Line 252: range 0000000013382912-0000000013382D42
void __cdecl data::ChannellerSlabLoopDungeonDifficultyExcelConfig::ChannellerSlabLoopDungeonDifficultyExcelConfig(
        data::ChannellerSlabLoopDungeonDifficultyExcelConfig *const this,
        const data::ChannellerSlabLoopDungeonDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  uint32_t stage_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::ChannellerSlabDifficulty difficulty; // ecx
  char v12; // dl
  uint32_t monster_level; // ecx
  char v14; // al
  float score_ratio; // xmm0_4
  __int64 v16; // rsi
  uint32_t base_score; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t finish_challenge_id; // ecx
  char v21; // dl
  const data::ChannellerSlabLoopDungeonDifficultyExcelConfig *v22; // [rsp+0h] [rbp-10h]

  v22 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabLoopDungeonDifficultyExcelConfig = v2;
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
  v5 = (((_BYTE)v22 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->dungeon_id);
  }
  dungeon_id = v22->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v22->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->stage_id);
  }
  stage_id = v22->stage_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
  v10 = (((_BYTE)v22 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->difficulty);
  }
  difficulty = v22->difficulty;
  v12 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->difficulty, v10);
  }
  this->difficulty = difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&v22->monster_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->monster_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->monster_level);
  }
  monster_level = v22->monster_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->monster_level, v10);
  }
  this->monster_level = monster_level;
  if ( *(_BYTE *)(((unsigned __int64)&v22->score_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->score_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->score_ratio);
  }
  score_ratio = v22->score_ratio;
  v16 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_ratio, v16);
  }
  this->score_ratio = score_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&v22->base_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->base_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->base_score);
  }
  base_score = v22->base_score;
  v18 = *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->base_score, v16);
  }
  this->base_score = base_score;
  v19 = (((_BYTE)v22 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->finish_challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->finish_challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->finish_challenge_id);
  }
  finish_challenge_id = v22->finish_challenge_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->finish_challenge_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->finish_challenge_id, v19);
  }
  this->finish_challenge_id = finish_challenge_id;
};

// Line 255: range 000000001342491A-000000001342495B
void __cdecl data::ChannellerSlabLoopDungeonDifficultyExcelConfig::~ChannellerSlabLoopDungeonDifficultyExcelConfig(
        data::ChannellerSlabLoopDungeonDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabLoopDungeonDifficultyExcelConfig = v2;
};

// Line 255: range 000000001342495C-0000000013424986
void __cdecl data::ChannellerSlabLoopDungeonDifficultyExcelConfig::~ChannellerSlabLoopDungeonDifficultyExcelConfig(
        data::ChannellerSlabLoopDungeonDifficultyExcelConfig *const this)
{
  data::ChannellerSlabLoopDungeonDifficultyExcelConfig::~ChannellerSlabLoopDungeonDifficultyExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 273: range 0000000013394792-0000000013394AC5
void __cdecl data::ChannellerSlabLoopDungeonConditionExcelConfig::ChannellerSlabLoopDungeonConditionExcelConfig(
        data::ChannellerSlabLoopDungeonConditionExcelConfig *const this,
        const data::ChannellerSlabLoopDungeonConditionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ChannellerSlabCondition condition_type; // ecx
  char v7; // dl
  uint32_t condition_param1; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t condition_param2; // ecx
  char v12; // dl
  uint32_t exclusive_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  int32_t score; // ecx
  char v17; // dl
  const data::ChannellerSlabLoopDungeonConditionExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonConditionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabLoopDungeonConditionExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->condition_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->condition_type);
  }
  condition_type = v18->condition_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->condition_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->condition_type, v5);
  }
  this->condition_type = condition_type;
  if ( *(_BYTE *)(((unsigned __int64)&v18->condition_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->condition_param1);
  }
  condition_param1 = v18->condition_param1;
  v9 = *(_BYTE *)(((unsigned __int64)&this->condition_param1 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->condition_param1, v5);
  }
  this->condition_param1 = condition_param1;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->condition_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->condition_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->condition_param2);
  }
  condition_param2 = v18->condition_param2;
  v12 = *(_BYTE *)(((unsigned __int64)&this->condition_param2 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->condition_param2, v10);
  }
  this->condition_param2 = condition_param2;
  if ( *(_BYTE *)(((unsigned __int64)&v18->exclusive_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->exclusive_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->exclusive_id);
  }
  exclusive_id = v18->exclusive_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->exclusive_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->exclusive_id, v10);
  }
  this->exclusive_id = exclusive_id;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->score);
  }
  score = v18->score;
  v17 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->score, v15);
  }
  this->score = score;
};

// Line 276: range 00000000134248EE-0000000013424918
void __cdecl data::ChannellerSlabLoopDungeonConditionExcelConfig::~ChannellerSlabLoopDungeonConditionExcelConfig(
        data::ChannellerSlabLoopDungeonConditionExcelConfig *const this)
{
  data::ChannellerSlabLoopDungeonConditionExcelConfig::~ChannellerSlabLoopDungeonConditionExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 276: range 00000000134248AC-00000000134248ED
void __cdecl data::ChannellerSlabLoopDungeonConditionExcelConfig::~ChannellerSlabLoopDungeonConditionExcelConfig(
        data::ChannellerSlabLoopDungeonConditionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonConditionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabLoopDungeonConditionExcelConfig = v2;
};

// Line 292: range 0000000012EB6C7A-0000000012EB6D8D
void __cdecl data::ChannellerSlabLoopDungeonExcelConfig::ChannellerSlabLoopDungeonExcelConfig(
        data::ChannellerSlabLoopDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabLoopDungeonExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->limiting_condition_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_pass_reward_id, v3);
  }
  this->first_pass_reward_id = 0;
};

// Line 292: range 0000000013394C06-0000000013394DD5
void __cdecl data::ChannellerSlabLoopDungeonExcelConfig::ChannellerSlabLoopDungeonExcelConfig(
        data::ChannellerSlabLoopDungeonExcelConfig *const this,
        const data::ChannellerSlabLoopDungeonExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_limiting_condition_vec; // rsi
  uint32_t first_pass_reward_id; // ecx
  char v10; // al
  const data::ChannellerSlabLoopDungeonExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChannellerSlabLoopDungeonExcelConfig = v2;
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
  p_limiting_condition_vec = &v11->limiting_condition_vec;
  std::vector<unsigned int>::vector(&this->limiting_condition_vec, &v11->limiting_condition_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v11->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->first_pass_reward_id);
  }
  first_pass_reward_id = v11->first_pass_reward_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_limiting_condition_vec) = v10 != 0;
    __asan_report_store4(&this->first_pass_reward_id, p_limiting_condition_vec);
  }
  this->first_pass_reward_id = first_pass_reward_id;
};

// Line 295: range 0000000013424880-00000000134248AA
void __cdecl data::ChannellerSlabLoopDungeonExcelConfig::~ChannellerSlabLoopDungeonExcelConfig(
        data::ChannellerSlabLoopDungeonExcelConfig *const this)
{
  data::ChannellerSlabLoopDungeonExcelConfig::~ChannellerSlabLoopDungeonExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 295: range 000000001342482E-000000001342487F
void __cdecl data::ChannellerSlabLoopDungeonExcelConfig::~ChannellerSlabLoopDungeonExcelConfig(
        data::ChannellerSlabLoopDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChannellerSlabLoopDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChannellerSlabLoopDungeonExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->limiting_condition_vec);
};

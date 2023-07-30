// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivitySummerTimeExcelConfig.gen.h

// Line 17: range 0000000013BD638E-0000000013BD6573
void __cdecl data::ActivitySummerTimeExcelConfig::ActivitySummerTimeExcelConfig(
        data::ActivitySummerTimeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySummerTimeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_quest_id, v3);
  }
  this->unlock_quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->content_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->content_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->content_duration, v3);
  }
  this->content_duration = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_player_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_player_level, v4);
  }
  this->unlock_player_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->personal_pre_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->personal_pre_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->personal_pre_quest, v4);
  }
  this->personal_pre_quest = 0;
  std::vector<unsigned int>::vector(&this->pre_quest_of_pre_quest);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_preview, v4);
  }
  this->reward_preview = 0;
  std::vector<unsigned int>::vector(&this->quest_id_list);
};

// Line 17: range 000000001418BC62-000000001418BFE2
void __cdecl data::ActivitySummerTimeExcelConfig::ActivitySummerTimeExcelConfig(
        data::ActivitySummerTimeExcelConfig *const this,
        const data::ActivitySummerTimeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t unlock_quest_id; // ecx
  char v7; // dl
  uint32_t content_duration; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t unlock_player_level; // ecx
  char v12; // dl
  uint32_t personal_pre_quest; // ecx
  char v14; // al
  std::vector<unsigned int> *p_pre_quest_of_pre_quest; // rsi
  uint32_t reward_preview; // ecx
  char v17; // al
  const data::ActivitySummerTimeExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySummerTimeExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->unlock_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->unlock_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->unlock_quest_id);
  }
  unlock_quest_id = v18->unlock_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->unlock_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->unlock_quest_id, v5);
  }
  this->unlock_quest_id = unlock_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->content_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->content_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->content_duration);
  }
  content_duration = v18->content_duration;
  v9 = *(_BYTE *)(((unsigned __int64)&this->content_duration >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->content_duration, v5);
  }
  this->content_duration = content_duration;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->unlock_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->unlock_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->unlock_player_level);
  }
  unlock_player_level = v18->unlock_player_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->unlock_player_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->unlock_player_level, v10);
  }
  this->unlock_player_level = unlock_player_level;
  if ( *(_BYTE *)(((unsigned __int64)&v18->personal_pre_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->personal_pre_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->personal_pre_quest);
  }
  personal_pre_quest = v18->personal_pre_quest;
  v14 = *(_BYTE *)(((unsigned __int64)&this->personal_pre_quest >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->personal_pre_quest, v10);
  }
  this->personal_pre_quest = personal_pre_quest;
  p_pre_quest_of_pre_quest = &v18->pre_quest_of_pre_quest;
  std::vector<unsigned int>::vector(&this->pre_quest_of_pre_quest, &v18->pre_quest_of_pre_quest);
  if ( *(_BYTE *)(((unsigned __int64)&v18->reward_preview >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->reward_preview >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->reward_preview);
  }
  reward_preview = v18->reward_preview;
  v17 = *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_pre_quest_of_pre_quest) = v17 != 0;
    __asan_report_store4(&this->reward_preview, p_pre_quest_of_pre_quest);
  }
  this->reward_preview = reward_preview;
  std::vector<unsigned int>::vector(&this->quest_id_list, &v18->quest_id_list);
};

// Line 20: range 00000000142A3946-00000000142A3970
void __cdecl data::ActivitySummerTimeExcelConfig::~ActivitySummerTimeExcelConfig(
        data::ActivitySummerTimeExcelConfig *const this)
{
  data::ActivitySummerTimeExcelConfig::~ActivitySummerTimeExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 20: range 00000000142A38E4-00000000142A3945
void __cdecl data::ActivitySummerTimeExcelConfig::~ActivitySummerTimeExcelConfig(
        data::ActivitySummerTimeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySummerTimeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->quest_id_list);
  std::vector<unsigned int>::~vector(&this->pre_quest_of_pre_quest);
};

// Line 38: range 0000000013BD6574-0000000013BD678F
void __cdecl data::ActivitySummerTimeStageExcelConfig::ActivitySummerTimeStageExcelConfig(
        data::ActivitySummerTimeStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySummerTimeStageExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_quest, v3);
  }
  this->main_quest = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_quest >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_quest >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_quest, v4);
  }
  this->pre_quest = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_button_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_button_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_button_quest, v4);
  }
  this->guide_button_quest = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_pushtips_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guide_pushtips_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guide_pushtips_id, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->guide_pushtips_id = 0;
};

// Line 38: range 000000001418C124-000000001418C4E7
void __cdecl data::ActivitySummerTimeStageExcelConfig::ActivitySummerTimeStageExcelConfig(
        data::ActivitySummerTimeStageExcelConfig *const this,
        const data::ActivitySummerTimeStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  std::vector<unsigned int> *p_watcher_id_list; // rsi
  uint32_t main_quest; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t pre_quest; // ecx
  char v15; // dl
  uint32_t guide_button_quest; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t guide_pushtips_id; // ecx
  char v20; // dl
  const data::ActivitySummerTimeStageExcelConfig *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySummerTimeStageExcelConfig = v2;
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
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->stage_id);
  }
  stage_id = v21->stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->open_day);
  }
  open_day = v21->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  p_watcher_id_list = &v21->watcher_id_list;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v21->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->main_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->main_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->main_quest);
  }
  main_quest = v21->main_quest;
  v12 = *(_BYTE *)(((unsigned __int64)&this->main_quest >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_watcher_id_list) = v12 != 0;
    __asan_report_store4(&this->main_quest, p_watcher_id_list);
  }
  this->main_quest = main_quest;
  v13 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->pre_quest >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->pre_quest >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->pre_quest);
  }
  pre_quest = v21->pre_quest;
  v15 = *(_BYTE *)(((unsigned __int64)&this->pre_quest >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->pre_quest, v13);
  }
  this->pre_quest = pre_quest;
  if ( *(_BYTE *)(((unsigned __int64)&v21->guide_button_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->guide_button_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->guide_button_quest);
  }
  guide_button_quest = v21->guide_button_quest;
  v17 = *(_BYTE *)(((unsigned __int64)&this->guide_button_quest >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->guide_button_quest, v13);
  }
  this->guide_button_quest = guide_button_quest;
  v18 = (((_BYTE)v21 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->guide_pushtips_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->guide_pushtips_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->guide_pushtips_id);
  }
  guide_pushtips_id = v21->guide_pushtips_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->guide_pushtips_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->guide_pushtips_id, v18);
  }
  this->guide_pushtips_id = guide_pushtips_id;
};

// Line 41: range 00000000142A38B8-00000000142A38E2
void __cdecl data::ActivitySummerTimeStageExcelConfig::~ActivitySummerTimeStageExcelConfig(
        data::ActivitySummerTimeStageExcelConfig *const this)
{
  data::ActivitySummerTimeStageExcelConfig::~ActivitySummerTimeStageExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 41: range 00000000142A3866-00000000142A38B7
void __cdecl data::ActivitySummerTimeStageExcelConfig::~ActivitySummerTimeStageExcelConfig(
        data::ActivitySummerTimeStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySummerTimeStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
};

// Line 59: range 000000001418C628-000000001418CACC
void __cdecl data::ActivitySummerTimeFloatSignalExcelConfig::ActivitySummerTimeFloatSignalExcelConfig(
        data::ActivitySummerTimeFloatSignalExcelConfig *const this,
        const data::ActivitySummerTimeFloatSignalExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  uint32_t config_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t mist_zone_id; // ecx
  char v12; // dl
  bool is_transfer_anchor; // cl
  char v14; // al
  __int64 v15; // rsi
  uint32_t vehicle_config_id; // ecx
  char v17; // dl
  uint32_t vehicle_gadget_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t relative_order; // ecx
  char v22; // dl
  bool is_deprecated; // cl
  char v24; // al
  const data::ActivitySummerTimeFloatSignalExcelConfig *v25; // [rsp+0h] [rbp-10h]

  v25 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeFloatSignalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySummerTimeFloatSignalExcelConfig = v2;
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
  v5 = (((_BYTE)v25 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->group_id);
  }
  group_id = v25->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v25->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->config_id);
  }
  config_id = v25->config_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->config_id, v5);
  }
  this->config_id = config_id;
  v10 = (((_BYTE)v25 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->mist_zone_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->mist_zone_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->mist_zone_id);
  }
  mist_zone_id = v25->mist_zone_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->mist_zone_id >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->mist_zone_id, v10);
  this->mist_zone_id = mist_zone_id;
  if ( *(char *)(((unsigned __int64)&v25->is_transfer_anchor >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v25->is_transfer_anchor, v10, &v25->is_transfer_anchor);
  is_transfer_anchor = v25->is_transfer_anchor;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_transfer_anchor >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_transfer_anchor, v10, &this->is_transfer_anchor);
  }
  this->is_transfer_anchor = is_transfer_anchor;
  v15 = (((_BYTE)v25 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->vehicle_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->vehicle_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->vehicle_config_id);
  }
  vehicle_config_id = v25->vehicle_config_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->vehicle_config_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->vehicle_config_id, v15);
  }
  this->vehicle_config_id = vehicle_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v25->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->vehicle_gadget_id);
  }
  vehicle_gadget_id = v25->vehicle_gadget_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->vehicle_gadget_id, v15);
  }
  this->vehicle_gadget_id = vehicle_gadget_id;
  v20 = (((_BYTE)v25 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->relative_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->relative_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->relative_order);
  }
  relative_order = v25->relative_order;
  v22 = *(_BYTE *)(((unsigned __int64)&this->relative_order >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v22 != 0;
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
    __asan_report_store4(&this->relative_order, v20);
  this->relative_order = relative_order;
  if ( *(char *)(((unsigned __int64)&v25->is_deprecated >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v25->is_deprecated, v20, &v25->is_deprecated);
  is_deprecated = v25->is_deprecated;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_deprecated >> 3) + 0x7FFF8000);
  if ( v24 < 0 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store1(&this->is_deprecated, v20, &this->is_deprecated);
  }
  this->is_deprecated = is_deprecated;
};

// Line 62: range 00000000142A37F8-00000000142A3839
void __cdecl data::ActivitySummerTimeFloatSignalExcelConfig::~ActivitySummerTimeFloatSignalExcelConfig(
        data::ActivitySummerTimeFloatSignalExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeFloatSignalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySummerTimeFloatSignalExcelConfig = v2;
};

// Line 62: range 00000000142A383A-00000000142A3864
void __cdecl data::ActivitySummerTimeFloatSignalExcelConfig::~ActivitySummerTimeFloatSignalExcelConfig(
        data::ActivitySummerTimeFloatSignalExcelConfig *const this)
{
  data::ActivitySummerTimeFloatSignalExcelConfig::~ActivitySummerTimeFloatSignalExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 81: range 0000000013BD6790-0000000013BD69E9
void __cdecl data::ActivitySummerTimeRaceExcelConfig::ActivitySummerTimeRaceExcelConfig(
        data::ActivitySummerTimeRaceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeRaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySummerTimeRaceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->medal_watcher);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_factor, v1);
  }
  this->time_factor = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gold_factor, v3);
  }
  this->gold_factor = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_cond_id, v3);
  }
  this->activity_cond_id = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v4);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v4);
  }
  this->open_day = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->boat_point_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->boat_point_config_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->boat_point_config_id, v5);
  }
  this->boat_point_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_point_config_id, v5);
  }
  this->player_point_config_id = 0;
};

// Line 81: range 000000001418CC0E-000000001418D046
void __cdecl data::ActivitySummerTimeRaceExcelConfig::ActivitySummerTimeRaceExcelConfig(
        data::ActivitySummerTimeRaceExcelConfig *const this,
        const data::ActivitySummerTimeRaceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_medal_watcher; // rsi
  uint32_t time_factor; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t gold_factor; // ecx
  char v10; // dl
  uint32_t activity_cond_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t group_id; // ecx
  char v15; // dl
  uint32_t open_day; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t boat_point_config_id; // ecx
  char v20; // dl
  uint32_t player_point_config_id; // ecx
  char v22; // al
  const data::ActivitySummerTimeRaceExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeRaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySummerTimeRaceExcelConfig = v2;
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
  p_medal_watcher = &v23->medal_watcher;
  std::vector<unsigned int>::vector(&this->medal_watcher, &v23->medal_watcher);
  if ( *(_BYTE *)(((unsigned __int64)&v23->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->time_factor);
  }
  time_factor = v23->time_factor;
  v7 = *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_medal_watcher) = v7 != 0;
    __asan_report_store4(&this->time_factor, p_medal_watcher);
  }
  this->time_factor = time_factor;
  v8 = (((_BYTE)v23 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->gold_factor);
  }
  gold_factor = v23->gold_factor;
  v10 = *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->gold_factor, v8);
  }
  this->gold_factor = gold_factor;
  if ( *(_BYTE *)(((unsigned __int64)&v23->activity_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->activity_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->activity_cond_id);
  }
  activity_cond_id = v23->activity_cond_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->activity_cond_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->activity_cond_id, v8);
  }
  this->activity_cond_id = activity_cond_id;
  v13 = (((_BYTE)v23 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->group_id);
  }
  group_id = v23->group_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->group_id, v13);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->open_day);
  }
  open_day = v23->open_day;
  v17 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->open_day, v13);
  }
  this->open_day = open_day;
  v18 = (((_BYTE)v23 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->boat_point_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->boat_point_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->boat_point_config_id);
  }
  boat_point_config_id = v23->boat_point_config_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->boat_point_config_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->boat_point_config_id, v18);
  }
  this->boat_point_config_id = boat_point_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->player_point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->player_point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->player_point_config_id);
  }
  player_point_config_id = v23->player_point_config_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->player_point_config_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->player_point_config_id, v18);
  }
  this->player_point_config_id = player_point_config_id;
};

// Line 84: range 00000000142A37CC-00000000142A37F6
void __cdecl data::ActivitySummerTimeRaceExcelConfig::~ActivitySummerTimeRaceExcelConfig(
        data::ActivitySummerTimeRaceExcelConfig *const this)
{
  data::ActivitySummerTimeRaceExcelConfig::~ActivitySummerTimeRaceExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 84: range 00000000142A377A-00000000142A37CB
void __cdecl data::ActivitySummerTimeRaceExcelConfig::~ActivitySummerTimeRaceExcelConfig(
        data::ActivitySummerTimeRaceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySummerTimeRaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySummerTimeRaceExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->medal_watcher);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityMistTrialExcelConfig.gen.h

// Line 76: range 0000000012ECFDD4-0000000012ECFFF3
void __cdecl data::ActivityMistTrialLevelDataExcelConfig::ActivityMistTrialLevelDataExcelConfig(
        data::ActivityMistTrialLevelDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialLevelDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMistTrialLevelDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v3);
  }
  this->level_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v4);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->challenge_mission_watcher_list);
  std::vector<unsigned int>::vector(&this->statistics_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->dungeon_factor_id_list);
  std::vector<unsigned int>::vector(&this->trial_avatar_id_list);
  std::map<unsigned int,unsigned int>::map(&this->mist_trial_avatar_id_map);
  std::map<unsigned int,unsigned int>::map(&this->avatar_id_map);
  std::string::basic_string(&this->server_global_value_key);
  std::vector<unsigned int>::vector(&this->floor_level_list);
  std::vector<unsigned int>::vector(&this->battle_statistics_data);
};

// Line 76: range 00000000133C2BA6-00000000133C301E
void __cdecl data::ActivityMistTrialLevelDataExcelConfig::ActivityMistTrialLevelDataExcelConfig(
        data::ActivityMistTrialLevelDataExcelConfig *const this,
        const data::ActivityMistTrialLevelDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  uint32_t level_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t open_day; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_statistics_id_list; // rsi
  uint32_t dungeon_id; // ecx
  char v15; // al
  const data::ActivityMistTrialLevelDataExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialLevelDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityMistTrialLevelDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v16->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->schedule_id);
  }
  schedule_id = v16->schedule_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->schedule_id, v5);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->level_id);
  }
  level_id = v16->level_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level_id, v5);
  }
  this->level_id = level_id;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->open_day);
  }
  open_day = v16->open_day;
  v12 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->open_day, v10);
  }
  this->open_day = open_day;
  std::vector<unsigned int>::vector(&this->challenge_mission_watcher_list, &v16->challenge_mission_watcher_list);
  p_statistics_id_list = &v16->statistics_id_list;
  std::vector<unsigned int>::vector(&this->statistics_id_list, &v16->statistics_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v16->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->dungeon_id);
  }
  dungeon_id = v16->dungeon_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_statistics_id_list) = v15 != 0;
    __asan_report_store4(&this->dungeon_id, p_statistics_id_list);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::vector(&this->dungeon_factor_id_list, &v16->dungeon_factor_id_list);
  std::vector<unsigned int>::vector(&this->trial_avatar_id_list, &v16->trial_avatar_id_list);
  std::map<unsigned int,unsigned int>::map(&this->mist_trial_avatar_id_map, &v16->mist_trial_avatar_id_map);
  std::map<unsigned int,unsigned int>::map(&this->avatar_id_map, &v16->avatar_id_map);
  std::string::basic_string(&this->server_global_value_key, &v16->server_global_value_key);
  std::vector<unsigned int>::vector(&this->floor_level_list, &v16->floor_level_list);
  std::vector<unsigned int>::vector(&this->battle_statistics_data, &v16->battle_statistics_data);
};

// Line 79: range 0000000013425114-00000000134251ED
void __cdecl data::ActivityMistTrialLevelDataExcelConfig::~ActivityMistTrialLevelDataExcelConfig(
        data::ActivityMistTrialLevelDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialLevelDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMistTrialLevelDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->battle_statistics_data);
  std::vector<unsigned int>::~vector(&this->floor_level_list);
  std::string::~string(&this->server_global_value_key);
  std::map<unsigned int,unsigned int>::~map(&this->avatar_id_map);
  std::map<unsigned int,unsigned int>::~map(&this->mist_trial_avatar_id_map);
  std::vector<unsigned int>::~vector(&this->trial_avatar_id_list);
  std::vector<unsigned int>::~vector(&this->dungeon_factor_id_list);
  std::vector<unsigned int>::~vector(&this->statistics_id_list);
  std::vector<unsigned int>::~vector(&this->challenge_mission_watcher_list);
};

// Line 79: range 00000000134251EE-0000000013425218
void __cdecl data::ActivityMistTrialLevelDataExcelConfig::~ActivityMistTrialLevelDataExcelConfig(
        data::ActivityMistTrialLevelDataExcelConfig *const this)
{
  data::ActivityMistTrialLevelDataExcelConfig::~ActivityMistTrialLevelDataExcelConfig(this);
  operator delete(this, 0x130uLL);
};

// Line 103: range 00000000133C3160-00000000133C3314
void __cdecl data::ActivityMistTrialAvatarDataExcelConfig::ActivityMistTrialAvatarDataExcelConfig(
        data::ActivityMistTrialAvatarDataExcelConfig *const this,
        const data::ActivityMistTrialAvatarDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  uint32_t trial_avatar_id; // ecx
  char v9; // al
  const data::ActivityMistTrialAvatarDataExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialAvatarDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityMistTrialAvatarDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->trial_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->trial_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->trial_avatar_id);
  }
  trial_avatar_id = v10->trial_avatar_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->trial_avatar_id, v5);
  }
  this->trial_avatar_id = trial_avatar_id;
};

// Line 106: range 00000000134250E8-0000000013425112
void __cdecl data::ActivityMistTrialAvatarDataExcelConfig::~ActivityMistTrialAvatarDataExcelConfig(
        data::ActivityMistTrialAvatarDataExcelConfig *const this)
{
  data::ActivityMistTrialAvatarDataExcelConfig::~ActivityMistTrialAvatarDataExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 106: range 00000000134250A6-00000000134250E7
void __cdecl data::ActivityMistTrialAvatarDataExcelConfig::~ActivityMistTrialAvatarDataExcelConfig(
        data::ActivityMistTrialAvatarDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialAvatarDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMistTrialAvatarDataExcelConfig = v2;
};

// Line 119: range 0000000012ECFFF4-0000000012ED0188
void __cdecl data::ActivityMistTrialWatcherListDataExcelConfig::ActivityMistTrialWatcherListDataExcelConfig(
        data::ActivityMistTrialWatcherListDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialWatcherListDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMistTrialWatcherListDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_watcher_id, v3);
  }
  this->challenge_watcher_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_show_content_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_show_content_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_show_content_type, v4);
  }
  this->dungeon_show_content_type = MIST_TRIAL_SYNC_NONE;
  std::vector<std::string>::vector(&this->show_param);
  if ( *(char *)(((unsigned __int64)&this->is_need_show_progress >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_show_progress, v4, &this->is_need_show_progress);
  this->is_need_show_progress = 0;
};

// Line 119: range 00000000133C3456-00000000133C3720
void __cdecl data::ActivityMistTrialWatcherListDataExcelConfig::ActivityMistTrialWatcherListDataExcelConfig(
        data::ActivityMistTrialWatcherListDataExcelConfig *const this,
        const data::ActivityMistTrialWatcherListDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  uint32_t challenge_watcher_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::MistTrialClientSyncType dungeon_show_content_type; // ecx
  char v12; // dl
  std::vector<std::string> *p_show_param; // rsi
  bool is_need_show_progress; // cl
  char v15; // al
  const data::ActivityMistTrialWatcherListDataExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialWatcherListDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityMistTrialWatcherListDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v16->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->schedule_id);
  }
  schedule_id = v16->schedule_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->schedule_id, v5);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->challenge_watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->challenge_watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->challenge_watcher_id);
  }
  challenge_watcher_id = v16->challenge_watcher_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->challenge_watcher_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->challenge_watcher_id, v5);
  }
  this->challenge_watcher_id = challenge_watcher_id;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->dungeon_show_content_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->dungeon_show_content_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->dungeon_show_content_type);
  }
  dungeon_show_content_type = v16->dungeon_show_content_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dungeon_show_content_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->dungeon_show_content_type, v10);
  }
  this->dungeon_show_content_type = dungeon_show_content_type;
  p_show_param = &v16->show_param;
  std::vector<std::string>::vector(&this->show_param, &v16->show_param);
  if ( *(char *)(((unsigned __int64)&v16->is_need_show_progress >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_need_show_progress, p_show_param, &v16->is_need_show_progress);
  is_need_show_progress = v16->is_need_show_progress;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_need_show_progress >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(p_show_param) = v15 != 0;
    __asan_report_store1(&this->is_need_show_progress, p_show_param, &this->is_need_show_progress);
  }
  this->is_need_show_progress = is_need_show_progress;
};

// Line 122: range 0000000013425028-0000000013425079
void __cdecl data::ActivityMistTrialWatcherListDataExcelConfig::~ActivityMistTrialWatcherListDataExcelConfig(
        data::ActivityMistTrialWatcherListDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialWatcherListDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMistTrialWatcherListDataExcelConfig = v2;
  std::vector<std::string>::~vector(&this->show_param);
};

// Line 122: range 000000001342507A-00000000134250A4
void __cdecl data::ActivityMistTrialWatcherListDataExcelConfig::~ActivityMistTrialWatcherListDataExcelConfig(
        data::ActivityMistTrialWatcherListDataExcelConfig *const this)
{
  data::ActivityMistTrialWatcherListDataExcelConfig::~ActivityMistTrialWatcherListDataExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 138: range 0000000012ED018A-0000000012ED029D
void __cdecl data::ActivityMistTrialStatisticsListExcelConfig::ActivityMistTrialStatisticsListExcelConfig(
        data::ActivityMistTrialStatisticsListExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialStatisticsListExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMistTrialStatisticsListExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->stat_name >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stat_name >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stat_name, v3);
  }
  this->stat_name = MIST_TRIAL_STAT_TYPE_NONE;
  std::vector<std::string>::vector(&this->param);
};

// Line 138: range 00000000133C3862-00000000133C3A31
void __cdecl data::ActivityMistTrialStatisticsListExcelConfig::ActivityMistTrialStatisticsListExcelConfig(
        data::ActivityMistTrialStatisticsListExcelConfig *const this,
        const data::ActivityMistTrialStatisticsListExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  data::MistTrialStatisticType stat_name; // ecx
  char v9; // al
  const data::ActivityMistTrialStatisticsListExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialStatisticsListExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityMistTrialStatisticsListExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->stat_name >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->stat_name >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->stat_name);
  }
  stat_name = v10->stat_name;
  v9 = *(_BYTE *)(((unsigned __int64)&this->stat_name >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->stat_name, v5);
  }
  this->stat_name = stat_name;
  std::vector<std::string>::vector(&this->param, &v10->param);
};

// Line 141: range 0000000013424FFC-0000000013425026
void __cdecl data::ActivityMistTrialStatisticsListExcelConfig::~ActivityMistTrialStatisticsListExcelConfig(
        data::ActivityMistTrialStatisticsListExcelConfig *const this)
{
  data::ActivityMistTrialStatisticsListExcelConfig::~ActivityMistTrialStatisticsListExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 141: range 0000000013424FAA-0000000013424FFB
void __cdecl data::ActivityMistTrialStatisticsListExcelConfig::~ActivityMistTrialStatisticsListExcelConfig(
        data::ActivityMistTrialStatisticsListExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialStatisticsListExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMistTrialStatisticsListExcelConfig = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 155: range 0000000012ED029E-0000000012ED032D
void __cdecl data::ActivityMistTrialLevelFactorExcelConfig::ActivityMistTrialLevelFactorExcelConfig(
        data::ActivityMistTrialLevelFactorExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialLevelFactorExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMistTrialLevelFactorExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<std::string>::vector(&this->param);
};

// Line 155: range 00000000133C3B72-00000000133C3C47
void __cdecl data::ActivityMistTrialLevelFactorExcelConfig::ActivityMistTrialLevelFactorExcelConfig(
        data::ActivityMistTrialLevelFactorExcelConfig *const this,
        const data::ActivityMistTrialLevelFactorExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::ActivityMistTrialLevelFactorExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialLevelFactorExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityMistTrialLevelFactorExcelConfig = v2;
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
  std::vector<std::string>::vector(&this->param, &v5->param);
};

// Line 158: range 0000000013424F7E-0000000013424FA8
void __cdecl data::ActivityMistTrialLevelFactorExcelConfig::~ActivityMistTrialLevelFactorExcelConfig(
        data::ActivityMistTrialLevelFactorExcelConfig *const this)
{
  data::ActivityMistTrialLevelFactorExcelConfig::~ActivityMistTrialLevelFactorExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 158: range 0000000013424F2C-0000000013424F7D
void __cdecl data::ActivityMistTrialLevelFactorExcelConfig::~ActivityMistTrialLevelFactorExcelConfig(
        data::ActivityMistTrialLevelFactorExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityMistTrialLevelFactorExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMistTrialLevelFactorExcelConfig = v2;
  std::vector<std::string>::~vector(&this->param);
};

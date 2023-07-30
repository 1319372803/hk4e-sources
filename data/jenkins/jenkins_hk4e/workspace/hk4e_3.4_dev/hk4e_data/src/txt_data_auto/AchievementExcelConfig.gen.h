// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AchievementExcelConfig.gen.h

// Line 63: range 0000000012EAE7D6-0000000012EAE928
void __cdecl data::AchievementExcelConfig::AchievementExcelConfig(data::AchievementExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::AchievementExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->goal_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->goal_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->goal_id, v3);
  }
  this->goal_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_stage_achievement_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_stage_achievement_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_stage_achievement_id, v3);
  }
  this->pre_stage_achievement_id = 0;
  v4 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_reward_id, v4);
  }
  this->finish_reward_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_delete_watcher_after_finish >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_delete_watcher_after_finish, v4, &this->is_delete_watcher_after_finish);
  this->is_delete_watcher_after_finish = 0;
};

// Line 63: range 00000000133861FE-000000001338644B
void __cdecl data::AchievementExcelConfig::AchievementExcelConfig(
        data::AchievementExcelConfig *const this,
        const data::AchievementExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t goal_id; // ecx
  char v5; // dl
  uint32_t pre_stage_achievement_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t finish_reward_id; // ecx
  char v10; // dl
  bool is_delete_watcher_after_finish; // cl
  char v12; // al

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::AchievementExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->goal_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->goal_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->goal_id);
  }
  goal_id = a2->goal_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->goal_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->goal_id, v3);
  }
  this->goal_id = goal_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->pre_stage_achievement_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->pre_stage_achievement_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->pre_stage_achievement_id);
  }
  pre_stage_achievement_id = a2->pre_stage_achievement_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->pre_stage_achievement_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->pre_stage_achievement_id, v3);
  }
  this->pre_stage_achievement_id = pre_stage_achievement_id;
  v8 = (((_BYTE)a2 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->finish_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->finish_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->finish_reward_id);
  }
  finish_reward_id = a2->finish_reward_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->finish_reward_id >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  if ( v10 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v10 )
    __asan_report_store4(&this->finish_reward_id, v8);
  this->finish_reward_id = finish_reward_id;
  if ( *(char *)(((unsigned __int64)&a2->is_delete_watcher_after_finish >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_delete_watcher_after_finish, v8, &a2->is_delete_watcher_after_finish);
  is_delete_watcher_after_finish = a2->is_delete_watcher_after_finish;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_delete_watcher_after_finish >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store1(&this->is_delete_watcher_after_finish, v8, &this->is_delete_watcher_after_finish);
  }
  this->is_delete_watcher_after_finish = is_delete_watcher_after_finish;
};

// Line 67: range 0000000013426BB6-0000000013426BE0
void __cdecl data::AchievementExcelConfig::~AchievementExcelConfig(data::AchievementExcelConfig *const this)
{
  data::AchievementExcelConfig::~AchievementExcelConfig(this);
  operator delete(this, 0x80uLL);
};

// Line 67: range 0000000013426B68-0000000013426BB5
void __cdecl data::AchievementExcelConfig::~AchievementExcelConfig(data::AchievementExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AchievementExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};

// Line 81: range 000000001338658C-00000000133866CB
void __cdecl data::AchievementGoalExcelConfig::AchievementGoalExcelConfig(
        data::AchievementGoalExcelConfig *const this,
        const data::AchievementGoalExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t finish_reward_id; // ecx
  char v7; // dl
  const data::AchievementGoalExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AchievementGoalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AchievementGoalExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->finish_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->finish_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->finish_reward_id);
  }
  finish_reward_id = v8->finish_reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->finish_reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->finish_reward_id, v5);
  }
  this->finish_reward_id = finish_reward_id;
};

// Line 84: range 0000000013426B3C-0000000013426B66
void __cdecl data::AchievementGoalExcelConfig::~AchievementGoalExcelConfig(
        data::AchievementGoalExcelConfig *const this)
{
  data::AchievementGoalExcelConfig::~AchievementGoalExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 84: range 0000000013426AFA-0000000013426B3B
void __cdecl data::AchievementGoalExcelConfig::~AchievementGoalExcelConfig(
        data::AchievementGoalExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AchievementGoalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AchievementGoalExcelConfig = v2;
};

// Line 96: range 000000001338680C-00000000133868C6
void __cdecl data::PS4GroupExcelConfig::PS4GroupExcelConfig(
        data::PS4GroupExcelConfig *const this,
        const data::PS4GroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::PS4GroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PS4GroupExcelConfig = v2;
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

// Line 99: range 0000000013426ACE-0000000013426AF8
void __cdecl data::PS4GroupExcelConfig::~PS4GroupExcelConfig(data::PS4GroupExcelConfig *const this)
{
  data::PS4GroupExcelConfig::~PS4GroupExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 99: range 0000000013426A8C-0000000013426ACD
void __cdecl data::PS4GroupExcelConfig::~PS4GroupExcelConfig(data::PS4GroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PS4GroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PS4GroupExcelConfig = v2;
};

// Line 110: range 0000000012EAE92A-0000000012EAE9B9
void __cdecl data::PS5GroupExcelConfig::PS5GroupExcelConfig(data::PS5GroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PS5GroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PS5GroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->export_version);
};

// Line 110: range 0000000013386A08-0000000013386ADD
void __cdecl data::PS5GroupExcelConfig::PS5GroupExcelConfig(
        data::PS5GroupExcelConfig *const this,
        const data::PS5GroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::PS5GroupExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PS5GroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PS5GroupExcelConfig = v2;
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
  std::string::basic_string(&this->export_version, &v5->export_version);
};

// Line 113: range 0000000013426A60-0000000013426A8A
void __cdecl data::PS5GroupExcelConfig::~PS5GroupExcelConfig(data::PS5GroupExcelConfig *const this)
{
  data::PS5GroupExcelConfig::~PS5GroupExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 113: range 0000000013426A0E-0000000013426A5F
void __cdecl data::PS5GroupExcelConfig::~PS5GroupExcelConfig(data::PS5GroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PS5GroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PS5GroupExcelConfig = v2;
  std::string::~string(&this->export_version);
};

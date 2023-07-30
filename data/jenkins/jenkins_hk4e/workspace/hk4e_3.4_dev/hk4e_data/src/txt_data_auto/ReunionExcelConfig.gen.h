// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ReunionExcelConfig.gen.h

// Line 120: range 0000000014D71CB2-0000000014D71FE5
void __cdecl data::ReunionScheduleExcelConfig::ReunionScheduleExcelConfig(
        data::ReunionScheduleExcelConfig *const this,
        const data::ReunionScheduleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activate_level; // ecx
  char v7; // dl
  uint32_t first_gift_reward_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t daily_sign_in_id; // ecx
  char v12; // dl
  uint32_t reunion_mission_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t reunion_privilege_id; // ecx
  char v17; // dl
  const data::ReunionScheduleExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReunionScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReunionScheduleExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->activate_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->activate_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->activate_level);
  }
  activate_level = v18->activate_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activate_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activate_level, v5);
  }
  this->activate_level = activate_level;
  if ( *(_BYTE *)(((unsigned __int64)&v18->first_gift_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->first_gift_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->first_gift_reward_id);
  }
  first_gift_reward_id = v18->first_gift_reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->first_gift_reward_id, v5);
  }
  this->first_gift_reward_id = first_gift_reward_id;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->daily_sign_in_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->daily_sign_in_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->daily_sign_in_id);
  }
  daily_sign_in_id = v18->daily_sign_in_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->daily_sign_in_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->daily_sign_in_id, v10);
  }
  this->daily_sign_in_id = daily_sign_in_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reunion_mission_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->reunion_mission_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->reunion_mission_id);
  }
  reunion_mission_id = v18->reunion_mission_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->reunion_mission_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->reunion_mission_id, v10);
  }
  this->reunion_mission_id = reunion_mission_id;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reunion_privilege_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->reunion_privilege_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->reunion_privilege_id);
  }
  reunion_privilege_id = v18->reunion_privilege_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->reunion_privilege_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->reunion_privilege_id, v15);
  }
  this->reunion_privilege_id = reunion_privilege_id;
};

// Line 123: range 0000000014DE8FA8-0000000014DE8FD2
void __cdecl data::ReunionScheduleExcelConfig::~ReunionScheduleExcelConfig(
        data::ReunionScheduleExcelConfig *const this)
{
  data::ReunionScheduleExcelConfig::~ReunionScheduleExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 123: range 0000000014DE8F66-0000000014DE8FA7
void __cdecl data::ReunionScheduleExcelConfig::~ReunionScheduleExcelConfig(
        data::ReunionScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReunionScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReunionScheduleExcelConfig = v2;
};

// Line 139: range 0000000014789FAC-000000001478A081
void __cdecl data::ReunionSignInExcelConfig::ReunionSignInExcelConfig(data::ReunionSignInExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReunionSignInExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReunionSignInExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->day_index = 0;
  std::vector<unsigned int>::vector(&this->reward_id);
};

// Line 139: range 0000000014A28424-0000000014A2857E
void __cdecl data::ReunionSignInExcelConfig::ReunionSignInExcelConfig(
        data::ReunionSignInExcelConfig *const this,
        const data::ReunionSignInExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  const data::ReunionSignInExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReunionSignInExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReunionSignInExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->day_index);
  }
  day_index = v8->day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  std::vector<unsigned int>::vector(&this->reward_id, &v8->reward_id);
};

// Line 142: range 0000000014DE8F3A-0000000014DE8F64
void __cdecl data::ReunionSignInExcelConfig::~ReunionSignInExcelConfig(data::ReunionSignInExcelConfig *const this)
{
  data::ReunionSignInExcelConfig::~ReunionSignInExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 142: range 0000000014DE8EE8-0000000014DE8F39
void __cdecl data::ReunionSignInExcelConfig::~ReunionSignInExcelConfig(data::ReunionSignInExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReunionSignInExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReunionSignInExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->reward_id);
};

// Line 155: range 000000001478A082-000000001478A367
void __cdecl data::ReunionMissionExcelConfig::ReunionMissionExcelConfig(data::ReunionMissionExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ReunionMissionExcelConfig::ReunionMissionExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = (int (**)(...))(&`vtable for'data::ReunionMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReunionMissionExcelConfig = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->watcher_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->watcher_group_id, v6);
  }
  this->watcher_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_score, v6);
  }
  this->target_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_reward_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->finish_reward_id = 0;
  std::vector<unsigned int>::vector(&this->target_score_list);
  std::vector<unsigned int>::vector(&this->finish_reward_id_list);
  std::vector<unsigned int>::vector(&this->show_reward_id_list);
  std::string::basic_string(&this->mission_reward_prefab_path);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->mission_reward_prefab_path_path_decorator,
    "ART/UI/Atlas/ReunionImg/*.Texture",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 155: range 0000000014D72194-0000000014D724BA
void __cdecl data::ReunionMissionExcelConfig::ReunionMissionExcelConfig(
        data::ReunionMissionExcelConfig *const this,
        const data::ReunionMissionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t watcher_group_id; // ecx
  char v7; // dl
  uint32_t target_score; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t finish_reward_id; // ecx
  char v12; // dl
  const data::ReunionMissionExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReunionMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReunionMissionExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->watcher_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->watcher_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->watcher_group_id);
  }
  watcher_group_id = v13->watcher_group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->watcher_group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->watcher_group_id, v5);
  }
  this->watcher_group_id = watcher_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->target_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->target_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->target_score);
  }
  target_score = v13->target_score;
  v9 = *(_BYTE *)(((unsigned __int64)&this->target_score >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->target_score, v5);
  }
  this->target_score = target_score;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->finish_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->finish_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->finish_reward_id);
  }
  finish_reward_id = v13->finish_reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->finish_reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->finish_reward_id, v10);
  }
  this->finish_reward_id = finish_reward_id;
  std::vector<unsigned int>::vector(&this->target_score_list, &v13->target_score_list);
  std::vector<unsigned int>::vector(&this->finish_reward_id_list, &v13->finish_reward_id_list);
  std::vector<unsigned int>::vector(&this->show_reward_id_list, &v13->show_reward_id_list);
  std::string::basic_string(&this->mission_reward_prefab_path, &v13->mission_reward_prefab_path);
  std::string::basic_string(
    &this->mission_reward_prefab_path_path_decorator,
    &v13->mission_reward_prefab_path_path_decorator);
};

// Line 158: range 0000000014DE8EBC-0000000014DE8EE6
void __cdecl data::ReunionMissionExcelConfig::~ReunionMissionExcelConfig(data::ReunionMissionExcelConfig *const this)
{
  data::ReunionMissionExcelConfig::~ReunionMissionExcelConfig(this);
  operator delete(this, 0xA0uLL);
};

// Line 158: range 0000000014DE8E2A-0000000014DE8EBB
void __cdecl data::ReunionMissionExcelConfig::~ReunionMissionExcelConfig(data::ReunionMissionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReunionMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReunionMissionExcelConfig = v2;
  std::string::~string(&this->mission_reward_prefab_path_path_decorator);
  std::string::~string(&this->mission_reward_prefab_path);
  std::vector<unsigned int>::~vector(&this->show_reward_id_list);
  std::vector<unsigned int>::~vector(&this->finish_reward_id_list);
  std::vector<unsigned int>::~vector(&this->target_score_list);
};

// Line 177: range 000000001478A368-000000001478A4DC
void __cdecl data::ReunionWatcherExcelConfig::ReunionWatcherExcelConfig(data::ReunionWatcherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ReunionWatcherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->watcher_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->watcher_group_id, v3);
  }
  this->watcher_group_id = 0;
  std::string::basic_string(&this->activate_level_range);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  v4 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score, v4);
  }
  this->score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_unlock_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_unlock_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_unlock_day, v4);
  }
  this->reward_unlock_day = 0;
};

// Line 177: range 0000000014D725FC-0000000014D728A4
void __cdecl data::ReunionWatcherExcelConfig::ReunionWatcherExcelConfig(
        data::ReunionWatcherExcelConfig *const this,
        const data::ReunionWatcherExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t watcher_group_id; // ecx
  char v5; // dl
  std::string *p_activate_level_range; // rsi
  uint32_t reward_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t score; // ecx
  char v11; // dl
  uint32_t reward_unlock_day; // ecx
  char v13; // al

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ReunionWatcherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->watcher_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->watcher_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->watcher_group_id);
  }
  watcher_group_id = a2->watcher_group_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->watcher_group_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->watcher_group_id, v3);
  }
  this->watcher_group_id = watcher_group_id;
  p_activate_level_range = &a2->activate_level_range;
  std::string::basic_string(&this->activate_level_range, &a2->activate_level_range);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reward_id);
  }
  reward_id = a2->reward_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_activate_level_range) = v8 != 0;
    __asan_report_store4(&this->reward_id, p_activate_level_range);
  }
  this->reward_id = reward_id;
  v9 = (((_BYTE)a2 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->score);
  }
  score = a2->score;
  v11 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->score, v9);
  }
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_unlock_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reward_unlock_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reward_unlock_day);
  }
  reward_unlock_day = a2->reward_unlock_day;
  v13 = *(_BYTE *)(((unsigned __int64)&this->reward_unlock_day >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->reward_unlock_day, v9);
  }
  this->reward_unlock_day = reward_unlock_day;
};

// Line 181: range 0000000014DE8DA0-0000000014DE8DFD
void __cdecl data::ReunionWatcherExcelConfig::~ReunionWatcherExcelConfig(data::ReunionWatcherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReunionWatcherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  std::string::~string(&this->activate_level_range);
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};

// Line 181: range 0000000014DE8DFE-0000000014DE8E28
void __cdecl data::ReunionWatcherExcelConfig::~ReunionWatcherExcelConfig(data::ReunionWatcherExcelConfig *const this)
{
  data::ReunionWatcherExcelConfig::~ReunionWatcherExcelConfig(this);
  operator delete(this, 0xA0uLL);
};

// Line 196: range 0000000014D02D80-0000000014D02E0F
void __cdecl data::ReunionPrivilegeConfig::ReunionPrivilegeConfig(data::ReunionPrivilegeConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReunionPrivilegeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReunionPrivilegeConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = REUNION_PRIVILEGE_TYPE_NONE;
  std::string::basic_string(&this->sub_type);
};

// Line 196: range 0000000014D71B5A-0000000014D71C2F
void __cdecl data::ReunionPrivilegeConfig::ReunionPrivilegeConfig(
        data::ReunionPrivilegeConfig *const this,
        const data::ReunionPrivilegeConfig *a2)
{
  int (**v2)(...); // rdx
  data::ReunionPrivilegeType type; // ecx
  char v4; // al
  const data::ReunionPrivilegeConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReunionPrivilegeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReunionPrivilegeConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::string::basic_string(&this->sub_type, &v5->sub_type);
};

// Line 199: range 0000000014C56D8E-0000000014C56DB8
void __cdecl data::ReunionPrivilegeConfig::~ReunionPrivilegeConfig(data::ReunionPrivilegeConfig *const this)
{
  data::ReunionPrivilegeConfig::~ReunionPrivilegeConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 199: range 0000000014C56D3C-0000000014C56D8D
void __cdecl data::ReunionPrivilegeConfig::~ReunionPrivilegeConfig(data::ReunionPrivilegeConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReunionPrivilegeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReunionPrivilegeConfig = v2;
  std::string::~string(&this->sub_type);
};

// Line 209: range 000000001478A532-000000001478A645
void __cdecl data::ReunionPrivilegeExcelConfig::ReunionPrivilegeExcelConfig(
        data::ReunionPrivilegeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ReunionPrivilegeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReunionPrivilegeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->daily_num, v3);
  }
  this->daily_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_num, v3);
  }
  this->total_num = 0;
  std::vector<data::ReunionPrivilegeConfig>::vector(&this->privilege_type);
};

// Line 209: range 0000000014D729E6-0000000014D72BB5
void __cdecl data::ReunionPrivilegeExcelConfig::ReunionPrivilegeExcelConfig(
        data::ReunionPrivilegeExcelConfig *const this,
        const data::ReunionPrivilegeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t daily_num; // ecx
  char v7; // dl
  uint32_t total_num; // ecx
  char v9; // al
  const data::ReunionPrivilegeExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReunionPrivilegeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReunionPrivilegeExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->daily_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->daily_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->daily_num);
  }
  daily_num = v10->daily_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->daily_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->daily_num, v5);
  }
  this->daily_num = daily_num;
  if ( *(_BYTE *)(((unsigned __int64)&v10->total_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->total_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->total_num);
  }
  total_num = v10->total_num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->total_num, v5);
  }
  this->total_num = total_num;
  std::vector<data::ReunionPrivilegeConfig>::vector(&this->privilege_type, &v10->privilege_type);
};

// Line 212: range 0000000014DE8D74-0000000014DE8D9E
void __cdecl data::ReunionPrivilegeExcelConfig::~ReunionPrivilegeExcelConfig(
        data::ReunionPrivilegeExcelConfig *const this)
{
  data::ReunionPrivilegeExcelConfig::~ReunionPrivilegeExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 212: range 0000000014DE8D22-0000000014DE8D73
void __cdecl data::ReunionPrivilegeExcelConfig::~ReunionPrivilegeExcelConfig(
        data::ReunionPrivilegeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReunionPrivilegeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReunionPrivilegeExcelConfig = v2;
  std::vector<data::ReunionPrivilegeConfig>::~vector(&this->privilege_type);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/TrialAvatarActivityExcelConfig.gen.h

// Line 17: range 000000000CE2167E-000000000CE2171D
void __cdecl data::TrialAvatarActivityExcelConfig::TrialAvatarActivityExcelConfig(
        data::TrialAvatarActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialAvatarActivityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  std::vector<unsigned int>::vector(&this->avatar_index_id_list);
  std::vector<unsigned int>::vector(&this->reward_id_list);
};

// Line 17: range 000000000D37BBB4-000000000D37BCCB
void __cdecl data::TrialAvatarActivityExcelConfig::TrialAvatarActivityExcelConfig(
        data::TrialAvatarActivityExcelConfig *const this,
        const data::TrialAvatarActivityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  const data::TrialAvatarActivityExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TrialAvatarActivityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->schedule_id);
  }
  schedule_id = a2->schedule_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->schedule_id, a2);
  }
  this->schedule_id = schedule_id;
  std::vector<unsigned int>::vector(&this->avatar_index_id_list, &v5->avatar_index_id_list);
  std::vector<unsigned int>::vector(&this->reward_id_list, &v5->reward_id_list);
};

// Line 20: range 000000000D491FF0-000000000D492051
void __cdecl data::TrialAvatarActivityExcelConfig::~TrialAvatarActivityExcelConfig(
        data::TrialAvatarActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialAvatarActivityExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->reward_id_list);
  std::vector<unsigned int>::~vector(&this->avatar_index_id_list);
};

// Line 20: range 000000000D492052-000000000D49207C
void __cdecl data::TrialAvatarActivityExcelConfig::~TrialAvatarActivityExcelConfig(
        data::TrialAvatarActivityExcelConfig *const this)
{
  data::TrialAvatarActivityExcelConfig::~TrialAvatarActivityExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 33: range 000000000CE2171E-000000000CE21888
void __cdecl data::TrialAvatarActivityDataExcelConfig::TrialAvatarActivityDataExcelConfig(
        data::TrialAvatarActivityDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarActivityDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_index_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trial_avatar_index_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trial_avatar_index_id, v3);
  }
  this->trial_avatar_index_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trial_avatar_id, v3);
  }
  this->trial_avatar_id = 0;
  v4 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = 0;
  std::string::basic_string(&this->battle_avatars_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pass_reward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_pass_reward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_pass_reward, v4);
  }
  this->first_pass_reward = 0;
};

// Line 33: range 000000000D37BE0C-000000000D37C0A0
void __cdecl data::TrialAvatarActivityDataExcelConfig::TrialAvatarActivityDataExcelConfig(
        data::TrialAvatarActivityDataExcelConfig *const this,
        const data::TrialAvatarActivityDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t trial_avatar_index_id; // ecx
  char v5; // dl
  uint32_t trial_avatar_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t dungeon_id; // ecx
  char v10; // dl
  std::string *p_battle_avatars_list; // rsi
  uint32_t first_pass_reward; // ecx
  char v13; // al

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarActivityDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trial_avatar_index_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->trial_avatar_index_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->trial_avatar_index_id);
  }
  trial_avatar_index_id = a2->trial_avatar_index_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->trial_avatar_index_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->trial_avatar_index_id, v3);
  }
  this->trial_avatar_index_id = trial_avatar_index_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trial_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trial_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trial_avatar_id);
  }
  trial_avatar_id = a2->trial_avatar_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->trial_avatar_id, v3);
  }
  this->trial_avatar_id = trial_avatar_id;
  v8 = (((_BYTE)a2 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->dungeon_id);
  }
  dungeon_id = a2->dungeon_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->dungeon_id, v8);
  }
  this->dungeon_id = dungeon_id;
  p_battle_avatars_list = &a2->battle_avatars_list;
  std::string::basic_string(&this->battle_avatars_list, &a2->battle_avatars_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->first_pass_reward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->first_pass_reward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->first_pass_reward);
  }
  first_pass_reward = a2->first_pass_reward;
  v13 = *(_BYTE *)(((unsigned __int64)&this->first_pass_reward >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_battle_avatars_list) = v13 != 0;
    __asan_report_store4(&this->first_pass_reward, p_battle_avatars_list);
  }
  this->first_pass_reward = first_pass_reward;
};

// Line 37: range 000000000D491F66-000000000D491FC3
void __cdecl data::TrialAvatarActivityDataExcelConfig::~TrialAvatarActivityDataExcelConfig(
        data::TrialAvatarActivityDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarActivityDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  std::string::~string(&this->battle_avatars_list);
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};

// Line 37: range 000000000D491FC4-000000000D491FEE
void __cdecl data::TrialAvatarActivityDataExcelConfig::~TrialAvatarActivityDataExcelConfig(
        data::TrialAvatarActivityDataExcelConfig *const this)
{
  data::TrialAvatarActivityDataExcelConfig::~TrialAvatarActivityDataExcelConfig(this);
  operator delete(this, 0xA0uLL);
};

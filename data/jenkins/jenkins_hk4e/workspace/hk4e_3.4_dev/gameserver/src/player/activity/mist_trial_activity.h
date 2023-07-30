// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/mist_trial_activity.h

// Line 19: range 0000000014620A66-0000000014620B41
void __cdecl MistTrialBestAvatar::MistTrialBestAvatar(MistTrialBestAvatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_type);
  }
  this->avatar_type = AVATAR_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->costume_id);
  }
  this->costume_id = 0;
};

// Line 29: range 00000000147E51C6-00000000147E5375
void __cdecl MistTrialLevelData::MistTrialLevelData(MistTrialLevelData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_time);
  }
  this->open_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->try_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->try_times);
  }
  this->try_times = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->success_times);
  }
  this->success_times = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pass_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_pass_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_pass_time);
  }
  this->first_pass_time = 0;
  std::vector<MistTrialBestAvatar>::vector(&this->best_avatar_vec);
  MistTrialBestAvatar::MistTrialBestAvatar(&this->best_hit_avatar);
};

// Line 29: range 000000001478EB86-000000001478EBA4
void __cdecl MistTrialLevelData::~MistTrialLevelData(MistTrialLevelData *const this)
{
  std::vector<MistTrialBestAvatar>::~vector(&this->best_avatar_vec);
};

// Line 55: range 00000000148384E4-0000000014838579
void __cdecl MistTrialActivity::~MistTrialActivity(MistTrialActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MistTrialActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::vector<unsigned long>::~vector(&this->informal_avatar_guid_vec_);
  std::vector<MistTrialSelectAvatarIndex>::~vector(&this->select_avatar_index_vec_);
  std::map<unsigned int,MistTrialLevelData>::~map(&this->level_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 55: range 000000001483857A-00000000148385A4
void __cdecl MistTrialActivity::~MistTrialActivity(MistTrialActivity *const this)
{
  MistTrialActivity::~MistTrialActivity(this);
  operator delete(this, 0x438uLL);
};

// Line 58: range 000000001701FEDE-000000001702002C
void __fastcall ZN17MistTrialActivityCI212BaseActivityER6Playerj(MistTrialActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN17MistTrialActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'MistTrialActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,MistTrialLevelData>::map(&this->level_data_map_);
  std::vector<MistTrialSelectAvatarIndex>::vector(&this->select_avatar_index_vec_);
  std::vector<unsigned long>::vector(&this->informal_avatar_guid_vec_);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 60: range 000000001384A470-000000001384A47A
data::NewActivityType __cdecl MistTrialActivity::getActivityStaticType()
{
  return 1503;
};

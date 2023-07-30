// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/hide_and_seek_activity.h

// Line 25: range 0000000014838A60-0000000014838B19
void __cdecl HideAndSeekActivity::~HideAndSeekActivity(HideAndSeekActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HideAndSeekActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->unselected_map_set_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::set<unsigned int>::~set(&this->unlock_map_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->hunter_slot_skill_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->hider_slot_skill_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->gm_delay_uid_set_);
  BaseActivity::~BaseActivity(this);
};

// Line 25: range 0000000014838B1A-0000000014838B44
void __cdecl HideAndSeekActivity::~HideAndSeekActivity(HideAndSeekActivity *const this)
{
  HideAndSeekActivity::~HideAndSeekActivity(this);
  operator delete(this, 0x500uLL);
};

// Line 28: range 00000000170202DC-00000000170205EA
void __fastcall ZN19HideAndSeekActivityCI212BaseActivityER6Playerj(HideAndSeekActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN19HideAndSeekActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'HideAndSeekActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::unordered_set<unsigned int>::unordered_set(&this->gm_delay_uid_set_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->hider_slot_skill_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->hunter_slot_skill_map_);
  if ( *(char *)(((unsigned __int64)&this->is_play_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_play_open_);
  this->is_play_open_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->play_index_);
  }
  this->play_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disappear_time_);
  }
  this->disappear_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_map_id_);
  }
  this->cur_map_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_in_play_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_play_);
  this->is_in_play_ = 0;
  std::set<unsigned int>::set(&this->unlock_map_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hider_count_);
  }
  this->hider_count_ = 0;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  std::set<unsigned int>::set(&this->unselected_map_set_);
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

// Line 30: range 000000001384A45A-000000001384A464
data::NewActivityType __cdecl HideAndSeekActivity::getActivityStaticType()
{
  return 1504;
};

// Line 50: range 0000000017D711B8-0000000017D71289
bool __fastcall HideAndSeekActivity::isMapUnselected(const HideAndSeekActivity *const this, uint32_t map_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 map_id:50";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::isMapUnselected;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = map_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->unselected_map_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 82: range 0000000015197B3A-0000000015197B93
void __cdecl HideAndSeekActivity::addHiderCount(HideAndSeekActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->hider_count_;
};

// Line 83: range 0000000015197B94-0000000015197BE4
void __cdecl HideAndSeekActivity::clearHiderCount(HideAndSeekActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hider_count_);
  }
  this->hider_count_ = 0;
};

// Line 85: range 0000000017D7128A-0000000017D7135B
bool __fastcall HideAndSeekActivity::isMapOpen(const HideAndSeekActivity *const this, uint32_t map_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 map_id:85";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::isMapOpen;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = map_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->unlock_map_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 92: range 0000000015197BE6-0000000015197CB7
bool __fastcall HideAndSeekActivity::isGmDelayUid(const HideAndSeekActivity *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:92";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::isGmDelayUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->gm_delay_uid_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 118: range 0000000017D7135C-0000000017D713B2
void __cdecl HideAndSeekActivity::setPlayOpen(HideAndSeekActivity *const this, bool is_play_open__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_play_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_play_open_);
  this->is_play_open_ = is_play_open__out;
};

// Line 120: range 00000000149EDF0C-00000000149EDF60
uint32_t __cdecl HideAndSeekActivity::getPlayIndex(const HideAndSeekActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->play_index_;
};

// Line 121: range 0000000015197CB8-0000000015197D04
uint32_t __cdecl HideAndSeekActivity::getDisappearTime(const HideAndSeekActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->disappear_time_;
};

// Line 121: range 0000000015197D06-0000000015197D59
void __cdecl HideAndSeekActivity::setDisappearTime(HideAndSeekActivity *const this, uint32_t disappear_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disappear_time_);
  }
  this->disappear_time_ = disappear_time__out;
};

// Line 125: range 000000001461DEFC-000000001461DF48
uint32_t __cdecl HideAndSeekActivity::getHiderCount(const HideAndSeekActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->hider_count_;
};

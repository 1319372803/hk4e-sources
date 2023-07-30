// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/spice_activity.h

// Line 20: range 00000000180AE67E-00000000180AE753
void __cdecl SpiceStageData::SpiceStageData(SpiceStageData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->stage_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->success_times, (((_BYTE)this + 8) & 7u) + 3, v4);
  this->success_times = 0;
};

// Line 31: range 0000000018327878-00000000183278E9
void __cdecl SpiceActivity::~SpiceActivity(SpiceActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SpiceActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::weak_ptr<Observer>::~weak_ptr(&this->finish_giving_obs_wtr_);
  std::map<unsigned int,SpiceStageData>::~map(&this->stage_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 31: range 00000000183278EA-0000000018327914
void __cdecl SpiceActivity::~SpiceActivity(SpiceActivity *const this)
{
  SpiceActivity::~SpiceActivity(this);
  operator delete(this, 0x3F0uLL);
};

// Line 34: range 00000000170297B4-000000001702996C
void __fastcall ZN13SpiceActivityCI212BaseActivityER6Playerj(SpiceActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rdx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN13SpiceActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'SpiceActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,SpiceStageData>::map(&this->stage_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->increase_avatar_fetter_limit_times_, a2, &this->increase_avatar_fetter_limit_times_);
  }
  this->increase_avatar_fetter_limit_times_ = 0;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->current_increase_avatar_fetter_times_, (((_BYTE)this - 36) & 7u) + 3, v7);
  this->current_increase_avatar_fetter_times_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->finish_giving_obs_wtr_);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 36: range 000000001384A6BF-000000001384A6C9
data::NewActivityType __cdecl SpiceActivity::getActivityStaticType()
{
  return 2602;
};

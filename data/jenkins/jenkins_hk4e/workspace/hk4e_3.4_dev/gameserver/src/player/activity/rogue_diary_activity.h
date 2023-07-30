// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/rogue_diary_activity.h

// Line 45: range 0000000017094E5A-0000000017094EDD
void __cdecl RogueDiaryActivity::~RogueDiaryActivity(RogueDiaryActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueDiaryActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_map<unsigned int,RogueDiaryStageData>::~unordered_map(&this->stage_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  RogueDiaryRuntimeMgr::~RogueDiaryRuntimeMgr(&this->runtime_mgr_);
  BaseActivity::~BaseActivity(this);
};

// Line 45: range 0000000017094EDE-0000000017094F08
void __cdecl RogueDiaryActivity::~RogueDiaryActivity(RogueDiaryActivity *const this)
{
  RogueDiaryActivity::~RogueDiaryActivity(this);
  operator delete(this, 0x620uLL);
};

// Line 48: range 000000001702A5AC-000000001702A7EB
void __fastcall ZN18RogueDiaryActivityCI212BaseActivityER6Playerj(RogueDiaryActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  RogueDiaryRuntimeMgr *p_runtime_mgr; // rcx
  Player *player; // rsi
  __int64 v9; // rdx
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN18RogueDiaryActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'RogueDiaryActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  p_runtime_mgr = &this->runtime_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  RogueDiaryRuntimeMgr::RogueDiaryRuntimeMgr(p_runtime_mgr, player, this);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, player, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::unordered_map<unsigned int,RogueDiaryStageData>::unordered_map(&this->stage_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_, player, &this->coin_);
  }
  this->coin_ = 0;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->transaction_, (((_BYTE)this + 28) & 7u) + 3, v9);
  this->transaction_ = 0;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 50: range 000000001384A9C7-000000001384A9D1
data::NewActivityType __cdecl RogueDiaryActivity::getActivityStaticType()
{
  return 2704;
};

// Line 78: range 000000001384A9D2-000000001384A9E5
RogueDiaryRuntimeMgr *__cdecl RogueDiaryActivity::getRuntimeMgr(RogueDiaryActivity *const this)
{
  return &this->runtime_mgr_;
};

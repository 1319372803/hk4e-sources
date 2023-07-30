// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/bartender_activity.h

// Line 37: range 0000000017B8E3C4-0000000017B8E4A1
void __cdecl BartenderActivity::~BartenderActivity(BartenderActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BartenderActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  PlayerTimer::~PlayerTimer(&this->timer_);
  std::unordered_set<unsigned int>::~unordered_set(&this->level_finish_order_set_);
  std::set<unsigned int>::~set(&this->level_order_set_);
  std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::~unordered_map(&this->unlock_level_map_);
  std::unordered_map<unsigned int,bool>::~unordered_map(&this->unlock_task_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_formula_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_item_set_);
  BaseActivity::~BaseActivity(this);
};

// Line 37: range 0000000017B8E4A2-0000000017B8E4CC
void __cdecl BartenderActivity::~BartenderActivity(BartenderActivity *const this)
{
  BartenderActivity::~BartenderActivity(this);
  operator delete(this, 0x5A8uLL);
};

// Line 40: range 000000001702819A-00000000170286F9
void __fastcall ZN17BartenderActivityCI212BaseActivityER6Playerj(BartenderActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  BartenderActivity **v7; // r8
  const std::_Placeholder<1> *v8; // r9
  BartenderActivity *v10; // [rsp+28h] [rbp-C8h] BYREF
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-C0h] BYREF
  void (*__f[2])(BartenderActivity *, unsigned __int64); // [rsp+40h] [rbp-B0h] BYREF
  std::_Bind_helper<false,void (BartenderActivity::*)(long unsigned int),BartenderActivity*,const std::_Placeholder<1>&>::type p___f; // [rsp+50h] [rbp-A0h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+70h] [rbp-80h] BYREF
  char v15[96]; // [rsp+90h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN17BartenderActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BartenderActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_item_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_formula_set_);
  std::unordered_map<unsigned int,bool>::unordered_map(&this->unlock_task_map_);
  std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::unordered_map(&this->unlock_level_map_);
  if ( *(char *)(((unsigned __int64)&this->is_develop_module_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_develop_module_open_);
  this->is_develop_module_open_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->trans_no_count_);
  this->trans_no_count_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_);
  }
  this->level_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_score_);
  }
  this->level_score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_deliver_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_deliver_count_);
  }
  this->level_deliver_count_ = 0;
  std::set<unsigned int>::set(&this->level_order_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->level_finish_order_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_start_time_);
  }
  this->level_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v10 = this;
  __f[0] = (void (*)(BartenderActivity *, unsigned __int64))BartenderActivity::onTimer;
  __f[1] = 0LL;
  std::bind<void (BartenderActivity::*)(unsigned long),BartenderActivity*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v10,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v7,
    v8);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (BartenderActivity::*)(unsigned long) ()(BartenderActivity*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerTimer::PlayerTimer(&this->timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 41: range 000000001384A666-000000001384A6B3
bool __cdecl BartenderActivity::getIsContentClosed(const BartenderActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};

// Line 41: range 000000001384A65B-000000001384A665
data::NewActivityType __cdecl BartenderActivity::getActivityStaticType()
{
  return 2502;
};

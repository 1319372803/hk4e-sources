// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/delivery_activity.h

// Line 20: range 000000001683331E-00000000168333A1
void __cdecl DeliveryActivity::~DeliveryActivity(DeliveryActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DeliveryActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->finish_parent_quest_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->watcher_progress_obs_wtr_);
  std::unordered_set<unsigned int>::~unordered_set(&this->cur_day_finished_delivery_quest_index_set_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 20: range 00000000168333A2-00000000168333CC
void __cdecl DeliveryActivity::~DeliveryActivity(DeliveryActivity *const this)
{
  DeliveryActivity::~DeliveryActivity(this);
  operator delete(this, 0x408uLL);
};

// Line 25: range 0000000016D624C8-0000000016D625E7
void __cdecl DeliveryActivity::DeliveryActivity(DeliveryActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity((BaseActivity *const)this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'DeliveryActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->cur_day_finished_delivery_quest_index_set_);
  if ( *(char *)(((unsigned __int64)&this->is_taken_daily_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_taken_daily_reward_);
  this->is_taken_daily_reward_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->watcher_progress_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->finish_parent_quest_obs_wtr_);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/salesman_activity.h

// Line 20: range 0000000017094C7C-0000000017094D23
void __cdecl SalesmanActivity::~SalesmanActivity(SalesmanActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SalesmanActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,unsigned int>::~map(&this->selected_reward_id_map_);
  std::set<std::pair<unsigned int,unsigned int>>::~set(&this->loaded_group_config_id_set_);
  std::vector<unsigned int>::~vector(&this->finished_talk_id_vec_);
  std::vector<unsigned int>::~vector(&this->obtained_special_reward_index_vec_);
  std::vector<unsigned int>::~vector(&this->obtained_normal_reward_index_vec_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 20: range 0000000017094D24-0000000017094D4E
void __cdecl SalesmanActivity::~SalesmanActivity(SalesmanActivity *const this)
{
  SalesmanActivity::~SalesmanActivity(this);
  operator delete(this, 0x460uLL);
};

// Line 25: range 0000000016D62248-0000000016D6241C
void __cdecl SalesmanActivity::SalesmanActivity(SalesmanActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  BaseActivity::BaseActivity((BaseActivity *const)this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'SalesmanActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_DescribalBase = v3;
  v4 = (((_BYTE)this - 92) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->status_, v4, v5);
  this->status_ = SALESMAN_STATUS_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index_, v4, &this->day_index_);
  }
  this->day_index_ = 0;
  v6 = (((_BYTE)this - 84) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->last_deliver_day_index_, v6, v7);
  this->last_deliver_day_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deliver_count_, v6, &this->deliver_count_);
  }
  this->deliver_count_ = 0;
  std::vector<unsigned int>::vector(&this->obtained_normal_reward_index_vec_);
  std::vector<unsigned int>::vector(&this->obtained_special_reward_index_vec_);
  std::vector<unsigned int>::vector(&this->finished_talk_id_vec_);
  std::set<std::pair<unsigned int,unsigned int>>::set(&this->loaded_group_config_id_set_);
  std::map<unsigned int,unsigned int>::map(&this->selected_reward_id_map_);
};

// Line 27: range 0000000017D6936D-0000000017D69377
data::NewActivityType __cdecl SalesmanActivity::getActivityStaticType()
{
  return 3;
};

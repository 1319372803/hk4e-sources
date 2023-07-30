// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/salesman_mp_activity.h

// Line 20: range 0000000017094B84-0000000017094C4F
void __cdecl SalesmanMpActivity::~SalesmanMpActivity(SalesmanMpActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SalesmanMpActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::vector<unsigned int>::~vector(&this->finished_talk_id_vec_);
  std::vector<unsigned int>::~vector(&this->obtained_special_drop_vec_);
  std::vector<unsigned int>::~vector(&this->obtained_special_material_vec_);
  std::vector<unsigned int>::~vector(&this->obtained_special_reward_vec_);
  std::vector<unsigned int>::~vector(&this->obtained_normal_reward_vec_);
  std::vector<unsigned int>::~vector(&this->normal_reward_vec_);
  std::vector<unsigned int>::~vector(&this->deliver_day_index_vec_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 20: range 0000000017094C50-0000000017094C7A
void __cdecl SalesmanMpActivity::~SalesmanMpActivity(SalesmanMpActivity *const this)
{
  SalesmanMpActivity::~SalesmanMpActivity(this);
  operator delete(this, 0x468uLL);
};

// Line 25: range 0000000016D64626-0000000016D6485E
void __cdecl SalesmanMpActivity::SalesmanMpActivity(
        SalesmanMpActivity *const this,
        Player *player,
        uint32_t activity_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  BaseActivity::BaseActivity((BaseActivity *const)this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'SalesmanMpActivity + 2);
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
  if ( *(char *)(((unsigned __int64)&this->is_has_taken_special_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_has_taken_special_reward_, v6, &this->is_has_taken_special_reward_);
  this->is_has_taken_special_reward_ = 0;
  std::vector<unsigned int>::vector(&this->deliver_day_index_vec_);
  std::vector<unsigned int>::vector(&this->normal_reward_vec_);
  std::vector<unsigned int>::vector(&this->obtained_normal_reward_vec_);
  std::vector<unsigned int>::vector(&this->obtained_special_reward_vec_);
  std::vector<unsigned int>::vector(&this->obtained_special_material_vec_);
  std::vector<unsigned int>::vector(&this->obtained_special_drop_vec_);
  std::vector<unsigned int>::vector(&this->finished_talk_id_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deliver_count_, v6, &this->deliver_count_);
  }
  this->deliver_count_ = 0;
};

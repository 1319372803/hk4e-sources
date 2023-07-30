// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/winter_camp_activity.h

// Line 34: range 0000000016D65772-0000000016D6584A
void __cdecl WinterCampExploreData::WinterCampExploreData(WinterCampExploreData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->drop_group_index >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_group_index >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->drop_group_index, v2, v3);
  this->drop_group_index = 0;
  if ( *(char *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finished, v2, &this->is_finished);
  this->is_finished = 0;
  std::map<unsigned int,unsigned int>::map(&this->drop_record_map);
};

// Line 34: range 000000001623B3D2-000000001623B3F0
void __cdecl WinterCampExploreData::~WinterCampExploreData(WinterCampExploreData *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->drop_record_map);
};

// Line 50: range 0000000016D6584C-0000000016D658DB
void __cdecl WinterCampBattleData::WinterCampBattleData(WinterCampBattleData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_finished, v2, v3);
  this->is_finished = 0;
};

// Line 63: range 000000001631C8B6-000000001631C94B
void __cdecl WinterCampRaceData::WinterCampRaceData(WinterCampRaceData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->max_score, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->max_score = 0;
};

// Line 75: range 000000001631CA8E-000000001631CAE5
void __cdecl WinterCampRecvItemData::WinterCampRecvItemData(WinterCampRecvItemData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->uid = 0;
  std::map<unsigned int,unsigned int>::map(&this->item_map);
};

// Line 75: range 00000000162E17A8-00000000162E17C6
void __cdecl WinterCampRecvItemData::~WinterCampRecvItemData(WinterCampRecvItemData *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->item_map);
};

// Line 85: range 000000001635B014-000000001635B115
void __cdecl WinterCampActivity::~WinterCampActivity(WinterCampActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WinterCampActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->used_item_data_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->home_used_item_data_map_);
  std::set<unsigned int>::~set(&this->wish_id_set_);
  std::map<unsigned int,WinterCampRecvItemData>::~map(&this->recv_item_data_map_);
  std::set<unsigned int>::~set(&this->taken_battle_reward_set_);
  std::set<unsigned int>::~set(&this->taken_explore_reward_set_);
  std::map<unsigned int,WinterCampRaceData>::~map(&this->race_data_map_);
  WinterCampExploreData::~WinterCampExploreData(&this->explore_data_);
  std::map<proto::VirtualItem,unsigned int>::~map(&this->activity_coin_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 85: range 000000001635B116-000000001635B140
void __cdecl WinterCampActivity::~WinterCampActivity(WinterCampActivity *const this)
{
  WinterCampActivity::~WinterCampActivity(this);
  operator delete(this, 0x5B0uLL);
};

// Line 92: range 0000000016D6594C-0000000016D65B38
void __cdecl WinterCampActivity::WinterCampActivity(
        WinterCampActivity *const this,
        Player *player,
        uint32_t activity_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseActivity::BaseActivity((BaseActivity *const)this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'WinterCampActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_DescribalBase = v3;
  v4 = ((_BYTE)this - 95) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_content_closed_, v4, v5);
  this->is_content_closed_ = 0;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  std::map<proto::VirtualItem,unsigned int>::map(&this->activity_coin_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_gen_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_gen_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_gen_index_, v4, &this->drop_gen_index_);
  }
  this->drop_gen_index_ = 0;
  WinterCampExploreData::WinterCampExploreData(&this->explore_data_);
  WinterCampBattleData::WinterCampBattleData(&this->battle_data_);
  if ( *(char *)(((unsigned __int64)&this->is_race_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_race_started_, v4, &this->is_race_started_);
  this->is_race_started_ = 0;
  std::map<unsigned int,WinterCampRaceData>::map(&this->race_data_map_);
  std::set<unsigned int>::set(&this->taken_explore_reward_set_);
  std::set<unsigned int>::set(&this->taken_battle_reward_set_);
  std::map<unsigned int,WinterCampRecvItemData>::map(&this->recv_item_data_map_);
  std::set<unsigned int>::set(&this->wish_id_set_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->home_used_item_data_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->used_item_data_map_);
};

// Line 94: range 000000001384A62F-000000001384A639
data::NewActivityType __cdecl WinterCampActivity::getActivityStaticType()
{
  return 2301;
};

// Line 113: range 000000001623B462-000000001623B4B4
bool __cdecl WinterCampActivity::isContentClosed(const WinterCampActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  return this->is_content_closed_;
};

// Line 136: range 0000000017D7156E-0000000017D715C8
int32_t __cdecl WinterCampActivity::onGMFinishExplore(WinterCampActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->explore_data_);
  }
  return WinterCampActivity::finishExplore(this, this->explore_data_.id);
};

// Line 137: range 0000000017D715CA-0000000017D71624
int32_t __cdecl WinterCampActivity::onGMFinishBattle(WinterCampActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->battle_data_);
  }
  return WinterCampActivity::finishBattle(this, this->battle_data_.id);
};

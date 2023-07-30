// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/hunting/player_hunting_comp.h

// Line 38: range 000000001709488E-0000000017094941
void __cdecl PlayerHuntingComp::~PlayerHuntingComp(PlayerHuntingComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerHuntingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::set<unsigned int>::~set(&this->cur_week_refreshed_refresh_id_set_);
  std::set<unsigned int>::~set(&this->cur_week_refreshed_monster_config_id_set_);
  std::vector<std::pair<unsigned int,unsigned int>>::~vector(&this->cur_week_finished_hunting_pair_vec_);
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::~unordered_map(&this->city_hunting_offer_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::shared_ptr<HuntingRecord>::~shared_ptr(&this->ongoing_hunting_record_ptr_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 38: range 0000000017094942-000000001709496C
void __cdecl PlayerHuntingComp::~PlayerHuntingComp(PlayerHuntingComp *const this)
{
  PlayerHuntingComp::~PlayerHuntingComp(this);
  operator delete(this, 0x120uLL);
};

// Line 43: range 00000000172141AD-00000000172141B7
uint32_t __cdecl PlayerHuntingComp::getType()
{
  return 41;
};

// Line 45: range 0000000017485A60-0000000017485BA1
void __cdecl ZN17PlayerHuntingCompCI214PlayerCompBaseER6Player(PlayerHuntingComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerHuntingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::shared_ptr<HuntingRecord>::shared_ptr(&this->ongoing_hunting_record_ptr_);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::unordered_map(&this->city_hunting_offer_map_);
  std::vector<std::pair<unsigned int,unsigned int>>::vector(&this->cur_week_finished_hunting_pair_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_, a2, &this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  std::set<unsigned int>::set(&this->cur_week_refreshed_monster_config_id_set_);
  std::set<unsigned int>::set(&this->cur_week_refreshed_refresh_id_set_);
  if ( *(char *)(((unsigned __int64)&this->is_new_hunting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_new_hunting_, a2, &this->is_new_hunting_);
  this->is_new_hunting_ = 0;
};

// Line 72: range 0000000015D368EA-0000000015D36909
uint32_t __cdecl PlayerHuntingComp::getCurWeekFinishNum(PlayerHuntingComp *const this)
{
  return std::vector<std::pair<unsigned int,unsigned int>>::size(&this->cur_week_finished_hunting_pair_vec_);
};

// Line 152: range 0000000016D6D0D2-0000000016D6D11F
bool __cdecl PlayerHuntingComp::getIsNewHunting(const PlayerHuntingComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_new_hunting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_new_hunting_);
  return this->is_new_hunting_;
};

// Line 230: range 0000000016D6D618-0000000016D6D779
void __cdecl HuntingOfferData::HuntingOfferData(HuntingOfferData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->refresh_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->monster_config_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->monster_config_id = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->city_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->city_id = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->difficulty, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->difficulty = 0;
  v5 = ((_BYTE)this + 20) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_taken_reward, v5, v6);
  this->is_taken_reward = 0;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_daily_task_comp.h

// Line 30: range 000000001434A738-000000001434A835
void __cdecl PlayerDailyTaskComp::~PlayerDailyTaskComp(PlayerDailyTaskComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerDailyTaskComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gm_task_weight_map_);
  std::map<unsigned int,unsigned int>::~map(&this->delayed_unregister_group_tasks_map_);
  std::weak_ptr<Observer>::~weak_ptr(&this->talk_observer_);
  std::unordered_map<std::type_index,std::weak_ptr<Observer>>::~unordered_map(&this->observer_map_);
  std::vector<std::set<unsigned int>>::~vector(&this->exclude_tag_vec_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->cycle_quest_count_map_);
  std::unordered_map<unsigned int,std::vector<int>>::~unordered_map(&this->task_var_map_);
  std::deque<std::unordered_set<unsigned int>>::~deque(&this->possible_pools_que_);
  std::unordered_set<unsigned int>::~unordered_set(&this->sure_pool_set_);
  std::map<unsigned int,DailyTaskInfo>::~map(&this->task_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 30: range 000000001434A836-000000001434A860
void __cdecl PlayerDailyTaskComp::~PlayerDailyTaskComp(PlayerDailyTaskComp *const this)
{
  PlayerDailyTaskComp::~PlayerDailyTaskComp(this);
  operator delete(this, 0x240uLL);
};

// Line 33: range 0000000017213F99-0000000017213FA3
uint32_t __cdecl PlayerDailyTaskComp::getType()
{
  return 18;
};

// Line 36: range 000000001747E0D4-000000001747E478
void __cdecl ZN19PlayerDailyTaskCompCI214PlayerCompBaseER6Player(PlayerDailyTaskComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerDailyTaskComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_, a2, &this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  std::map<unsigned int,DailyTaskInfo>::map(&this->task_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_player_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_player_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_player_level_, a2, &this->score_player_level_);
  }
  this->score_player_level_ = 0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->finished_num_, v3, v4);
  this->finished_num_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_taken_score_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_taken_score_reward_, v3, &this->is_taken_score_reward_);
  this->is_taken_score_reward_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->sure_pool_set_);
  std::deque<std::unordered_set<unsigned int>>::deque(&this->possible_pools_que_);
  std::unordered_map<unsigned int,std::vector<int>>::unordered_map(&this->task_var_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_times_, v3, &this->refresh_times_);
  }
  this->refresh_times_ = 0;
  v5 = (((_BYTE)this + 44) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->total_reward_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_reward_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->total_reward_num_, v5, v6);
  this->total_reward_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->filter_city_id_, v5, &this->filter_city_id_);
  }
  this->filter_city_id_ = 0;
  v7 = (((_BYTE)this + 52) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->random_city_id_, v7, v8);
  this->random_city_id_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->cycle_quest_count_map_);
  std::vector<std::set<unsigned int>>::vector(&this->exclude_tag_vec_);
  std::unordered_map<std::type_index,std::weak_ptr<Observer>>::unordered_map(&this->observer_map_);
  std::weak_ptr<Observer>::weak_ptr(&this->talk_observer_);
  std::map<unsigned int,unsigned int>::map(&this->delayed_unregister_group_tasks_map_);
  if ( *(char *)(((unsigned __int64)&this->is_gm_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_gm_, v7, &this->is_gm_);
  this->is_gm_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->gm_task_weight_map_);
};

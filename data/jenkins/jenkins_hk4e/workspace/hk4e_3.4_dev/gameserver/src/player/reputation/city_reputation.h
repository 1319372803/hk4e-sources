// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/reputation/city_reputation.h

// Line 28: range 00000000170FC152-00000000170FC1D2
void __cdecl CityReputation::~CityReputation(CityReputation *const this)
{
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::set<unsigned int>::~set(&this->taken_explore_reward_set_);
  std::map<unsigned int,CityReputation::RequestInfo>::~map(&this->request_map_);
  std::deque<unsigned int>::~deque(&this->history_request_deque_);
  std::set<unsigned int>::~set(&this->taken_parent_quest_reward_set_);
  std::set<unsigned int>::~set(&this->taken_level_reward_set_);
  std::enable_shared_from_this<CityReputation>::~enable_shared_from_this(this);
};

// Line 30: range 0000000015D40BE6-0000000015D40C75
void __cdecl CityReputation::RequestInfo::RequestInfo(CityReputation::RequestInfo *const this)
{
  bool v1; // dl
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->quest_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_taken_reward, v2, v3);
  this->is_taken_reward = 0;
};

// Line 36: range 0000000015E81CCE-0000000015E81D63
void __cdecl CityReputation::RequestWeight::RequestWeight(CityReputation::RequestWeight *const this)
{
  bool v1; // dl
  bool v2; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->request_id = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->weight, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->weight = 0;
};

// Line 61: range 0000000013EBFB86-0000000013EBFBD5
uint32_t __cdecl CityReputation::getLevel(const CityReputation *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 62: range 0000000016D6D40C-0000000016D6D45E
bool __cdecl CityReputation::isNewRefreshRequest(const CityReputation *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_new_request_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_new_request_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_new_request_);
  }
  return this->is_new_request_;
};

// Line 63: range 0000000015D3C7D4-0000000015D3C826
void __cdecl CityReputation::clearNewRefreshRequest(CityReputation *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = ((_BYTE)this + 4) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_new_request_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_new_request_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_new_request_, v1, v2);
  this->is_new_request_ = 0;
};

// Line 85: range 0000000015D3C828-0000000015D3C879
PlayerPtr __cdecl CityReputation::getPlayer(const CityReputation *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_codex_comp.h

// Line 43: range 0000000017B4AA36-0000000017B4AA70
void __cdecl CodexTypeData::CodexTypeData(CodexTypeData *const this)
{
  std::set<unsigned int>::set(&this->codex_id_set);
  std::set<unsigned int>::set(&this->viewed_codex_id_set);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->weapon_max_promote_level_map);
};

// Line 43: range 00000000174B084E-00000000174B0888
void __cdecl CodexTypeData::~CodexTypeData(CodexTypeData *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->weapon_max_promote_level_map);
  std::set<unsigned int>::~set(&this->viewed_codex_id_set);
  std::set<unsigned int>::~set(&this->codex_id_set);
};

// Line 53: range 0000000017B8DABC-0000000017B8DB39
void __cdecl PlayerCodexComp::~PlayerCodexComp(PlayerCodexComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerCodexComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::deque<unsigned int>::~deque(&this->recent_viewed_pushtips_deque_);
  std::map<unsigned int,CodexTypeData>::~map(&this->codex_data_map_);
  std::set<unsigned int>::~set(&this->get_reward_set_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 53: range 0000000017B8DB3A-0000000017B8DB64
void __cdecl PlayerCodexComp::~PlayerCodexComp(PlayerCodexComp *const this)
{
  PlayerCodexComp::~PlayerCodexComp(this);
  operator delete(this, 0xD8uLL);
};

// Line 56: range 000000001721413E-0000000017214148
uint32_t __cdecl PlayerCodexComp::getType()
{
  return 35;
};

// Line 59: range 0000000017485112-00000000174851EF
void __cdecl ZN15PlayerCodexCompCI214PlayerCompBaseER6Player(PlayerCodexComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerCodexComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::set<unsigned int>::set(&this->get_reward_set_);
  std::map<unsigned int,CodexTypeData>::map(&this->codex_data_map_);
  std::deque<unsigned int>::deque(&this->recent_viewed_pushtips_deque_);
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->last_read_pushtips_pair_);
};

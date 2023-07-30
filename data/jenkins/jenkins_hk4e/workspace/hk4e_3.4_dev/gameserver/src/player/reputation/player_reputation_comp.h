// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/reputation/player_reputation_comp.h

// Line 26: range 0000000017093FBA-0000000017094017
void __cdecl PlayerReputationComp::~PlayerReputationComp(PlayerReputationComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerReputationComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,std::shared_ptr<CityReputation>>::~map(&this->city_reputation_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 26: range 0000000017094018-0000000017094042
void __cdecl PlayerReputationComp::~PlayerReputationComp(PlayerReputationComp *const this)
{
  PlayerReputationComp::~PlayerReputationComp(this);
  operator delete(this, 0x50uLL);
};

// Line 29: range 00000000172141B8-00000000172141C2
uint32_t __cdecl PlayerReputationComp::getType()
{
  return 39;
};

// Line 32: range 00000000174867A8-0000000017486810
void __cdecl ZN20PlayerReputationCompCI214PlayerCompBaseER6Player(PlayerReputationComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerReputationComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,std::shared_ptr<CityReputation>>::map(&this->city_reputation_map_);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/rand_task/player_rand_task_comp.h

// Line 19: range 0000000015F45F92-0000000015F45FDF
void __cdecl PlayerRandTaskComp::~PlayerRandTaskComp(PlayerRandTaskComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerRandTaskComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 19: range 0000000015F45FE0-0000000015F4600A
void __cdecl PlayerRandTaskComp::~PlayerRandTaskComp(PlayerRandTaskComp *const this)
{
  PlayerRandTaskComp::~PlayerRandTaskComp(this);
  operator delete(this, 0x28uLL);
};

// Line 22: range 0000000017213FA4-0000000017213FAE
uint32_t __cdecl PlayerRandTaskComp::getType()
{
  return 19;
};

// Line 25: range 000000001747E6E4-000000001747E7C0
void __cdecl ZN18PlayerRandTaskCompCI214PlayerCompBaseER6Player(PlayerRandTaskComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  bool v3; // dl

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerRandTaskComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_reward_time_, a2, (_BYTE)this + 32);
  }
  this->last_reward_time_ = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_num_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->reward_num_, (((_BYTE)this + 36) & 7u) + 3, v3);
  this->reward_num_ = 0;
};

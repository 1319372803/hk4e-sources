// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/offering/player_offering_comp.h

// Line 27: range 0000000016FFD81A-0000000016FFD96D
void __cdecl OfferingInfo::OfferingInfo(OfferingInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->level = 0;
  std::set<unsigned int>::set(&this->taken_level_reward_set);
  if ( *(char *)(((unsigned __int64)&this->is_reach_max_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reach_max_level, v1, &this->is_reach_max_level);
  this->is_reach_max_level = 0;
  v2 = ((_BYTE)this + 57) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_need_notify_new_max >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_need_notify_new_max >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_need_notify_new_max, v2, v3);
  this->is_need_notify_new_max = 0;
  v4 = (((_BYTE)this + 60) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->last_version_max_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_version_max_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->last_version_max_level, v4, v5);
  this->last_version_max_level = 0;
  if ( *(char *)(((unsigned __int64)&this->is_first_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_first_interact, v4, &this->is_first_interact);
  this->is_first_interact = 0;
};

// Line 27: range 0000000016F5E6A4-0000000016F5E6C2
void __cdecl OfferingInfo::~OfferingInfo(OfferingInfo *const this)
{
  std::set<unsigned int>::~set(&this->taken_level_reward_set);
};

// Line 37: range 00000000170941E4-0000000017094241
void __cdecl PlayerOfferingComp::~PlayerOfferingComp(PlayerOfferingComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerOfferingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,OfferingInfo>::~map(&this->offering_info_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 37: range 0000000017094242-000000001709426C
void __cdecl PlayerOfferingComp::~PlayerOfferingComp(PlayerOfferingComp *const this)
{
  PlayerOfferingComp::~PlayerOfferingComp(this);
  operator delete(this, 0x50uLL);
};

// Line 43: range 00000000174880F0-0000000017488158
void __cdecl ZN18PlayerOfferingCompCI214PlayerCompBaseER6Player(PlayerOfferingComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerOfferingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,OfferingInfo>::map(&this->offering_info_map_);
};

// Line 74: range 00000000172143A0-00000000172143AA
uint32_t __cdecl PlayerOfferingComp::getType()
{
  return 45;
};

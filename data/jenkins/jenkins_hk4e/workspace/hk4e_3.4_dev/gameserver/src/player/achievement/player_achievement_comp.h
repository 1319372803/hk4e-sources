// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/achievement/player_achievement_comp.h

// Line 34: range 0000000017B8D4C2-0000000017B8D52F
void __cdecl PlayerAchievementComp::~PlayerAchievementComp(PlayerAchievementComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerAchievementComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->reward_taken_goal_id_set_);
  std::unordered_map<unsigned int,Achievement>::~unordered_map(&this->achievement_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 34: range 0000000017B8D530-0000000017B8D55A
void __cdecl PlayerAchievementComp::~PlayerAchievementComp(PlayerAchievementComp *const this)
{
  PlayerAchievementComp::~PlayerAchievementComp(this);
  operator delete(this, 0x90uLL);
};

// Line 37: range 0000000017214133-000000001721413D
uint32_t __cdecl PlayerAchievementComp::getType()
{
  return 36;
};

// Line 39: range 0000000017484E18-0000000017484E90
void __cdecl ZN21PlayerAchievementCompCI214PlayerCompBaseER6Player(PlayerAchievementComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerAchievementComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,Achievement>::unordered_map(&this->achievement_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->reward_taken_goal_id_set_);
};

// Line 1422: range 0000000017A09A4C-0000000017A09B29
void __cdecl Achievement::Achievement(Achievement *const this, uint32_t id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_timestamp);
  }
  this->finish_timestamp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->status);
  }
  this->status = Achievement_Status_INVALID;
};

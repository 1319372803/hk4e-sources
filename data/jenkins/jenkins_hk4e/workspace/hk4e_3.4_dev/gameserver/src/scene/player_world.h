// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/player_world.h

// Line 25: range 0000000015ED4AB6-0000000015ED4BA1
void __cdecl WorldRewardPointInfo::WorldRewardPointInfo(WorldRewardPointInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->group_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->config_id, v2, v3);
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_time, v2, (_BYTE)this + 8);
  }
  this->create_time = 0;
  std::set<unsigned int>::set(&this->qualify_uid_set);
  std::set<unsigned int>::set(&this->remain_uid_set);
};

// Line 25: range 0000000015E4F52C-0000000015E4F55A
void __cdecl WorldRewardPointInfo::~WorldRewardPointInfo(WorldRewardPointInfo *const this)
{
  std::set<unsigned int>::~set(&this->remain_uid_set);
  std::set<unsigned int>::~set(&this->qualify_uid_set);
};

// Line 38: range 0000000015F46A1C-0000000015F46A9F
void __cdecl PlayerWorld::~PlayerWorld(PlayerWorld *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_World = v2;
  std::map<unsigned long,WorldRewardPointInfo>::~map(&this->reward_point_map_);
  DungeonCandidateTeam::~DungeonCandidateTeam(&this->dungeon_candidate_team_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  World::~World(this);
};

// Line 38: range 0000000015F46AA0-0000000015F46ACA
void __cdecl PlayerWorld::~PlayerWorld(PlayerWorld *const this)
{
  PlayerWorld::~PlayerWorld(this);
  operator delete(this, 0x238uLL);
};

// Line 47: range 00000000140AB214-00000000140AB488
void __fastcall ZN11PlayerWorldCI25WorldEj(PlayerWorld *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN11PlayerWorldCI25WorldEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  World::World(this, v5);
  v6 = (int (**)(...))(&`vtable for'PlayerWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  this->_vptr_World = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_, v5, (_BYTE)this + 120);
  }
  this->level_ = 0;
  v7 = (((_BYTE)this + 124) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->last_adjust_time_, v7, v8);
  this->last_adjust_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->adjust_level_, v7, (_BYTE)this + 0x80);
  }
  this->adjust_level_ = 0;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  if ( *(char *)(((unsigned __int64)&this->is_in_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_mp_mode_, v7, &this->is_in_mp_mode_);
  this->is_in_mp_mode_ = 0;
  DungeonCandidateTeam::DungeonCandidateTeam(&this->dungeon_candidate_team_);
  std::map<unsigned long,WorldRewardPointInfo>::map(&this->reward_point_map_);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 49: range 0000000015D33DF2-0000000015D33E00
data::WorldType __cdecl PlayerWorld::getWorldType(const PlayerWorld *const this)
{
  return 1;
};

// Line 76: range 00000000131D8810-00000000131D8861
PlayerPtr __cdecl PlayerWorld::getOwnPlayer(const PlayerWorld *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 76: range 00000000131D8862-00000000131D88AE
uint32_t __cdecl PlayerWorld::getLevel(const PlayerWorld *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 124: range 00000000131D88B0-00000000131D88C3
DungeonCandidateTeam *__cdecl PlayerWorld::getDungeonCandidateTeam(PlayerWorld *const this)
{
  return &this->dungeon_candidate_team_;
};

// Line 131: range 0000000015D33E02-0000000015D33E4F
bool __cdecl PlayerWorld::isInMpMode(PlayerWorld *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_mp_mode_);
  return this->is_in_mp_mode_;
};

// Line 138: range 0000000015D33E50-0000000015D33E6F
uint64_t __cdecl PlayerWorld::genRewardPointKey(PlayerWorld *const this, uint32_t group_id, uint32_t config_id)
{
  return ((unsigned __int64)group_id << 32) + config_id;
};

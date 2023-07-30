// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/dungeon_match_pool.h

// Line 22: range 000000000D831634-000000000D8316A5
void __cdecl DungeonMatchPool::DungeonMatchPool(DungeonMatchPool *const this)
{
  int (**v1)(...); // rdx

  MatchPoolBase::MatchPoolBase(this);
  v1 = (int (**)(...))(&`vtable for'DungeonMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::unordered_map(&this->wait_match_team_vec_map_);
  std::unordered_map<unsigned int,MatchCostTimeInfo>::unordered_map(&this->match_cost_time_info_map_);
};

// Line 22: range 000000000DD875D4-000000000DD87645
void __cdecl DungeonMatchPool::~DungeonMatchPool(DungeonMatchPool *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,MatchCostTimeInfo>::~unordered_map(&this->match_cost_time_info_map_);
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::~unordered_map(&this->wait_match_team_vec_map_);
  MatchPoolBase::~MatchPoolBase(this);
};

// Line 22: range 000000000DD87646-000000000DD87670
void __cdecl DungeonMatchPool::~DungeonMatchPool(DungeonMatchPool *const this)
{
  DungeonMatchPool::~DungeonMatchPool(this);
  operator delete(this, 0x148uLL);
};

// Line 51: range 000000000DF3E522-000000000DF3E58A
std::string *__cdecl DungeonMatchPool::getMatchThreadName[abi:cxx11](std::string *retstr, DungeonMatchPool *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "dungeon_match", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/mp_play_match_pool.h

// Line 22: range 000000000D8316A6-000000000D831717
void __cdecl MpPlayMatchPool::MpPlayMatchPool(MpPlayMatchPool *const this)
{
  int (**v1)(...); // rdx

  MatchPoolBase::MatchPoolBase(this);
  v1 = (int (**)(...))(&`vtable for'MpPlayMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::unordered_map(&this->wait_match_team_vec_map_);
  std::unordered_map<unsigned int,MatchCostTimeInfo>::unordered_map(&this->match_cost_time_info_map_);
};

// Line 22: range 000000000DD83C82-000000000DD83CF3
void __cdecl MpPlayMatchPool::~MpPlayMatchPool(MpPlayMatchPool *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MpPlayMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,MatchCostTimeInfo>::~unordered_map(&this->match_cost_time_info_map_);
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::~unordered_map(&this->wait_match_team_vec_map_);
  MatchPoolBase::~MatchPoolBase(this);
};

// Line 22: range 000000000DD83CF4-000000000DD83D1E
void __cdecl MpPlayMatchPool::~MpPlayMatchPool(MpPlayMatchPool *const this)
{
  MpPlayMatchPool::~MpPlayMatchPool(this);
  operator delete(this, 0x148uLL);
};

// Line 47: range 000000000D830B46-000000000D830BAE
std::string *__cdecl MpPlayMatchPool::getMatchThreadName[abi:cxx11](std::string *retstr, MpPlayMatchPool *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "mp_play_match", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/gcg_match_pool.h

// Line 23: range 000000000D831BAC-000000000D831C2F
void __cdecl GCGMatchPool::GCGMatchPool(GCGMatchPool *const this)
{
  int (**v1)(...); // rdx

  MatchPoolBase::MatchPoolBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::unordered_map(&this->wait_match_team_vec_map_);
  std::vector<std::shared_ptr<GCGMatchTeam>>::vector(&this->wait_confirm_team_vec_);
  std::unordered_map<unsigned int,MatchCostTimeInfo>::unordered_map(&this->match_cost_time_info_map_);
};

// Line 23: range 000000000DD87672-000000000DD876F5
void __cdecl GCGMatchPool::~GCGMatchPool(GCGMatchPool *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,MatchCostTimeInfo>::~unordered_map(&this->match_cost_time_info_map_);
  std::vector<std::shared_ptr<GCGMatchTeam>>::~vector(&this->wait_confirm_team_vec_);
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::~unordered_map(&this->wait_match_team_vec_map_);
  MatchPoolBase::~MatchPoolBase(this);
};

// Line 23: range 000000000DD876F6-000000000DD87720
void __cdecl GCGMatchPool::~GCGMatchPool(GCGMatchPool *const this)
{
  GCGMatchPool::~GCGMatchPool(this);
  operator delete(this, 0x160uLL);
};

// Line 33: range 000000000DF3E98A-000000000DF3EA2E
std::vector<std::shared_ptr<MatchTeam>> *__cdecl GCGMatchPool::findCandidateMatchTeamVec(
        std::vector<std::shared_ptr<MatchTeam>> *retstr,
        GCGMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  retstr->_M_impl._M_start = 0LL;
  retstr->_M_impl._M_finish = 0LL;
  retstr->_M_impl._M_end_of_storage = 0LL;
  std::vector<std::shared_ptr<MatchTeam>>::vector(retstr);
  return retstr;
};

// Line 34: range 000000000DF3EA30-000000000DF3EA42
std::vector<std::shared_ptr<MatchTeam>> *__cdecl GCGMatchPool::findCandidateMatchTeamVecPtr(
        GCGMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  return 0LL;
};

// Line 57: range 000000000DF3EA44-000000000DF3EAAC
std::string *__cdecl GCGMatchPool::getMatchThreadName[abi:cxx11](std::string *retstr, GCGMatchPool *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "gcg_match", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

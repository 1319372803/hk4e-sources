// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/mechanicus_match_pool.h

// Line 21: range 000000000D831718-000000000D831789
void __cdecl MechanicusMatchPool::MechanicusMatchPool(MechanicusMatchPool *const this)
{
  int (**v1)(...); // rdx

  MatchPoolBase::MatchPoolBase(this);
  v1 = (int (**)(...))(&`vtable for'MechanicusMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::unordered_map(&this->wait_match_team_vec_map_);
  std::unordered_map<unsigned int,MatchCostTimeInfo>::unordered_map(&this->match_cost_time_info_map_);
};

// Line 21: range 000000000DD855A0-000000000DD85611
void __cdecl MechanicusMatchPool::~MechanicusMatchPool(MechanicusMatchPool *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MechanicusMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,MatchCostTimeInfo>::~unordered_map(&this->match_cost_time_info_map_);
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::~unordered_map(&this->wait_match_team_vec_map_);
  MatchPoolBase::~MatchPoolBase(this);
};

// Line 21: range 000000000DD85612-000000000DD8563C
void __cdecl MechanicusMatchPool::~MechanicusMatchPool(MechanicusMatchPool *const this)
{
  MechanicusMatchPool::~MechanicusMatchPool(this);
  operator delete(this, 0x148uLL);
};

// Line 46: range 000000000D830BB0-000000000D830C18
std::string *__cdecl MechanicusMatchPool::getMatchThreadName[abi:cxx11](
        std::string *retstr,
        MechanicusMatchPool *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "mechanicus_match", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

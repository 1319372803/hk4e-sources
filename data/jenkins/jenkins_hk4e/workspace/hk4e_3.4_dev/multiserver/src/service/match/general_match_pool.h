// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/general_match_pool.h

// Line 21: range 000000000D831938-000000000D8319A9
void __cdecl GeneralMatchPool::GeneralMatchPool(GeneralMatchPool *const this)
{
  int (**v1)(...); // rdx

  MatchPoolBase::MatchPoolBase(this);
  v1 = (int (**)(...))(&`vtable for'GeneralMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::unordered_map(&this->wait_match_team_vec_map_);
  std::unordered_map<unsigned int,MatchCostTimeInfo>::unordered_map(&this->match_cost_time_info_map_);
};

// Line 21: range 000000000DD858D6-000000000DD85947
void __cdecl GeneralMatchPool::~GeneralMatchPool(GeneralMatchPool *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GeneralMatchPool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,MatchCostTimeInfo>::~unordered_map(&this->match_cost_time_info_map_);
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::~unordered_map(&this->wait_match_team_vec_map_);
  MatchPoolBase::~MatchPoolBase(this);
};

// Line 21: range 000000000DD85948-000000000DD85972
void __cdecl GeneralMatchPool::~GeneralMatchPool(GeneralMatchPool *const this)
{
  GeneralMatchPool::~GeneralMatchPool(this);
  operator delete(this, 0x148uLL);
};

// Line 32: range 000000000D830FE4-000000000D830FF6
std::vector<std::shared_ptr<MatchTeam>> *__cdecl GeneralMatchPool::findCandidateMatchTeamVecPtr(
        GeneralMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  return 0LL;
};

// Line 42: range 000000000D830FF8-000000000D83100C
void __cdecl GeneralMatchPool::fillGuestUnitAgreedResultNotify(
        GeneralMatchPool *const this,
        uint32_t host_unit_id,
        proto::GuestUnitAgreedResultNotify::Reason reason,
        proto::GuestUnitAgreedResultNotify *notify)
{
  ;
};

// Line 44: range 000000000D83100E-000000000D831023
void __cdecl GeneralMatchPool::fillGuestUnitMatchSuccNotify(
        GeneralMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr,
        uint32_t host_unit_id,
        proto::GuestUnitMatchSuccNotify *notify)
{
  ;
};

// Line 53: range 000000000D831024-000000000D83108C
std::string *__cdecl GeneralMatchPool::getMatchThreadName[abi:cxx11](std::string *retstr, GeneralMatchPool *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "general_match", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

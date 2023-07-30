// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_pool_base.h

// Line 20: range 000000000DBAB302-000000000DBAB31C
void __cdecl MatchCostTimeInfo::~MatchCostTimeInfo(MatchCostTimeInfo *const this)
{
  std::queue<unsigned int>::~queue(&this->cost_time_que);
};

// Line 29: range 000000000D83111A-000000000D831238
void __cdecl MatchPoolBase::MatchPoolBase(MatchPoolBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchPoolBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::unordered_map(&this->total_match_unit_map_);
  if ( *(char *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_run_);
  this->is_run_ = 0;
  std::thread::thread(&this->pool_thread_);
  common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>::SafeQueue(&this->packet_ptr_queue_, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_deal_match_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_deal_match_time_ms_);
  this->last_deal_match_time_ms_ = 0LL;
};

// Line 31: range 000000000D83123A-000000000D8312AB
void __cdecl MatchPoolBase::~MatchPoolBase(MatchPoolBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchPoolBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchPoolBase = v1;
  common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>::~SafeQueue(&this->packet_ptr_queue_);
  std::thread::~thread(&this->pool_thread_);
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::~unordered_map(&this->total_match_unit_map_);
};

// Line 31: range 000000000D8312AC-000000000D8312D6
void __cdecl MatchPoolBase::~MatchPoolBase(MatchPoolBase *const this)
{
  MatchPoolBase::~MatchPoolBase(this);
  operator delete(this, 0xD8uLL);
};

// Line 45: range 000000000D830ABE-000000000D830ADB
uint32_t __cdecl MatchPoolBase::getQueueSize(MatchPoolBase *const this)
{
  return common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>::size(&this->packet_ptr_queue_);
};

// Line 66: range 000000000D830AA0-000000000D830ABD
uint32_t __cdecl MatchPoolBase::getMatchUnitNum(MatchPoolBase *const this)
{
  return std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::size(&this->total_match_unit_map_);
};

// Line 93: range 000000000D830ADC-000000000D830B44
std::string *__cdecl MatchPoolBase::getMatchThreadName[abi:cxx11](std::string *retstr, MatchPoolBase *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "match", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 334: range 000000000DC3ED90-000000000DC3EDE8
void __cdecl MatchCostTimeInfo::MatchCostTimeInfo(MatchCostTimeInfo *const this)
{
  std::queue<unsigned int>::queue<std::deque<unsigned int>,void>(&this->cost_time_que);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_cost_time);
  }
  this->total_cost_time = 0;
};

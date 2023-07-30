// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_service.h

// Line 28: range 000000000D831D60-000000000D831DF9
void __cdecl MatchService::MatchService(MatchService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'MatchService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  MatchMgr::MatchMgr(&this->match_mgr_);
  std::shared_ptr<common::tools::MiTimer>::shared_ptr(&this->timer_ptr_, 0LL);
};

// Line 29: range 000000000D831DFA-000000000D831E6B
void __cdecl MatchService::~MatchService(MatchService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  std::shared_ptr<common::tools::MiTimer>::~shared_ptr(&this->timer_ptr_);
  MatchMgr::~MatchMgr(&this->match_mgr_);
  ServiceBase::~ServiceBase(this);
};

// Line 29: range 000000000D831E6C-000000000D831E96
void __cdecl MatchService::~MatchService(MatchService *const this)
{
  MatchService::~MatchService(this);
  operator delete(this, 0x998uLL);
};

// Line 32: range 000000000D831E98-000000000D831EA6
uint32_t __cdecl MatchService::getServiceType(MatchService *const this)
{
  return 17;
};

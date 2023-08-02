// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/network/network_mgr.h

// Line 20: range 000000000CFCFA2C-000000000CFCFA99
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NetworkMgrBase = v2;
  std::shared_ptr<common::minet::AClientBase>::~shared_ptr(&this->nodeserver_ptr_);
  std::shared_ptr<common::minet::AServerBase>::~shared_ptr(&this->http_ptr_);
  NetworkMgrBase::~NetworkMgrBase(this);
};

// Line 20: range 000000000CFCFA9A-000000000CFCFAC4
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0x28uLL);
};

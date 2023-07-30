// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/network/network_mgr.h

// Line 19: range 000000000C7FB22A-000000000C7FB287
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NetworkMgrBase = v1;
  std::shared_ptr<common::minet::AServerBase>::~shared_ptr(&this->http_server_ptr_);
  NetworkMgrBase::~NetworkMgrBase(this);
};

// Line 19: range 000000000C7FB288-000000000C7FB2B2
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0x18uLL);
};

// Line 38: range 000000000C70407E-000000000C704088
void __cdecl NetworkMgr::monitorReport(NetworkMgr *const this)
{
  ;
};

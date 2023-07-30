// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/network/network_mgr.h

// Line 20: range 000000000CD6F246-000000000CD6F2B3
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

// Line 20: range 000000000CD6F2B4-000000000CD6F2DE
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0x28uLL);
};

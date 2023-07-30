// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/network/network_mgr.h

// Line 20: range 000000000C6A3902-000000000C6A396F
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NetworkMgrBase = v2;
  std::shared_ptr<common::minet::AServerBase>::~shared_ptr(&this->gateserver_ptr);
  std::shared_ptr<common::minet::AServerBase>::~shared_ptr(&this->http_ptr);
  NetworkMgrBase::~NetworkMgrBase(this);
};

// Line 20: range 000000000C6A3970-000000000C6A399A
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0x28uLL);
};

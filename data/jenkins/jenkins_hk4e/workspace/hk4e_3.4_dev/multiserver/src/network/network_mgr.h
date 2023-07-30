// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/network/network_mgr.h

// Line 20: range 000000000E0BED8A-000000000E0BEDE7
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_NetworkMgrBase = v1;
  std::shared_ptr<common::minet::AClientBase>::~shared_ptr(&this->nodeserver_ptr_);
  NetworkMgrBase::~NetworkMgrBase(this);
};

// Line 20: range 000000000E0BEDE8-000000000E0BEE12
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0x18uLL);
};

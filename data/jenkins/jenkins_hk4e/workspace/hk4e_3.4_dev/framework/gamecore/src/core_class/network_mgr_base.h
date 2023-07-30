// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/network_mgr_base.h

// Line 34: range 000000000C63721E-000000000C63725F
void __cdecl NetworkMgrBase::NetworkMgrBase(NetworkMgrBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NetworkMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_NetworkMgrBase = v1;
};

// Line 35: range 000000000C637260-000000000C6372A1
void __cdecl NetworkMgrBase::~NetworkMgrBase(NetworkMgrBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NetworkMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_NetworkMgrBase = v1;
};

// Line 35: range 000000000C6372A2-000000000C6372CC
void __cdecl NetworkMgrBase::~NetworkMgrBase(NetworkMgrBase *const this)
{
  NetworkMgrBase::~NetworkMgrBase(this);
  operator delete(this, 8uLL);
};

// Line 52: range 000000000C6372CE-000000000C6372DC
int32_t __cdecl NetworkMgrBase::loopFunc(NetworkMgrBase *const this)
{
  return 0;
};

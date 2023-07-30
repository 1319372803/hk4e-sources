// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/dispatch_service.h

// Line 28: range 000000000C63F27C-000000000C63F2DB
void __cdecl DispatchService::DispatchService(DispatchService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServiceBase::ServiceBase(this);
  v2 = (int (**)(...))(&`vtable for'DispatchService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  GateserverMgr::GateserverMgr(&this->gateserver_mgr);
};

// Line 29: range 000000000C63F2DC-000000000C63F33B
void __cdecl DispatchService::~DispatchService(DispatchService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DispatchService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  GateserverMgr::~GateserverMgr(&this->gateserver_mgr);
  ServiceBase::~ServiceBase(this);
};

// Line 29: range 000000000C63F33C-000000000C63F366
void __cdecl DispatchService::~DispatchService(DispatchService *const this)
{
  DispatchService::~DispatchService(this);
  operator delete(this, 0x520uLL);
};

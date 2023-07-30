// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/offline_op_service.h

// Line 23: range 000000000DD6542C-000000000DD65479
void __cdecl OfflineOpService::OfflineOpService(OfflineOpService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'OfflineOpService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
};

// Line 23: range 000000000E0BF1CA-000000000E0BF217
void __cdecl OfflineOpService::~OfflineOpService(OfflineOpService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OfflineOpService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  ServiceBase::~ServiceBase(this);
};

// Line 23: range 000000000E0BF218-000000000E0BF242
void __cdecl OfflineOpService::~OfflineOpService(OfflineOpService *const this)
{
  OfflineOpService::~OfflineOpService(this);
  operator delete(this, 0x308uLL);
};

// Line 26: range 000000000DF3E374-000000000DF3E382
uint32_t __cdecl OfflineOpService::getServiceType(OfflineOpService *const this)
{
  return 18;
};

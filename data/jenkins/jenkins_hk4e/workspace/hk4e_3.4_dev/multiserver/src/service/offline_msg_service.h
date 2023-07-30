// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/offline_msg_service.h

// Line 24: range 000000000DD64B18-000000000DD64B65
void __cdecl OfflineMsgService::OfflineMsgService(OfflineMsgService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'OfflineMsgService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
};

// Line 24: range 000000000E0BF244-000000000E0BF291
void __cdecl OfflineMsgService::~OfflineMsgService(OfflineMsgService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OfflineMsgService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  ServiceBase::~ServiceBase(this);
};

// Line 24: range 000000000E0BF292-000000000E0BF2BC
void __cdecl OfflineMsgService::~OfflineMsgService(OfflineMsgService *const this)
{
  OfflineMsgService::~OfflineMsgService(this);
  operator delete(this, 0x308uLL);
};

// Line 27: range 000000000DF3E364-000000000DF3E372
uint32_t __cdecl OfflineMsgService::getServiceType(OfflineMsgService *const this)
{
  return 9;
};

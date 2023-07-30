// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/service/oaserver_service.h

// Line 25: range 000000000CD50860-000000000CD508C4
void __cdecl OaserverService::OaserverService(OaserverService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServiceBase::ServiceBase(this);
  v2 = (int (**)(...))(&`vtable for'OaserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  std::atomic<unsigned int>::atomic(&this->process_recharge_num_, 0);
};

// Line 25: range 000000000CD6F1CC-000000000CD6F219
void __cdecl OaserverService::~OaserverService(OaserverService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OaserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  ServiceBase::~ServiceBase(this);
};

// Line 25: range 000000000CD6F21A-000000000CD6F244
void __cdecl OaserverService::~OaserverService(OaserverService *const this)
{
  OaserverService::~OaserverService(this);
  operator delete(this, 0x310uLL);
};

// Line 29: range 000000000CAE3954-000000000CAE3962
uint32_t __cdecl OaserverService::getServiceType(OaserverService *const this)
{
  return 16;
};

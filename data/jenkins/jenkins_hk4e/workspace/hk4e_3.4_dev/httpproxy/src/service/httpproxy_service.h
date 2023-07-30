// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/service/httpproxy_service.h

// Line 23: range 000000000C7948E4-000000000C794931
void __cdecl HttpProxyService::HttpProxyService(HttpProxyService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'HttpProxyService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ServiceBase = v1;
};

// Line 23: range 000000000C7FB1B0-000000000C7FB1FD
void __cdecl HttpProxyService::~HttpProxyService(HttpProxyService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HttpProxyService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ServiceBase = v1;
  ServiceBase::~ServiceBase(this);
};

// Line 23: range 000000000C7FB1FE-000000000C7FB228
void __cdecl HttpProxyService::~HttpProxyService(HttpProxyService *const this)
{
  HttpProxyService::~HttpProxyService(this);
  operator delete(this, 0x308uLL);
};

// Line 28: range 000000000C6FED02-000000000C6FED10
uint32_t __cdecl HttpProxyService::getServiceType(HttpProxyService *const this)
{
  return 12;
};

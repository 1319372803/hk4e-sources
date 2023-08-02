// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/service/muipserver_service.h

// Line 29: range 000000000CFCF9A0-000000000CFCF9FF
void __cdecl MuipserverService::~MuipserverService(MuipserverService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MuipserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  std::map<unsigned int,std::atomic<unsigned int>>::~map(&this->cmd_request_per_time_map);
  ServiceBase::~ServiceBase(this);
};

// Line 29: range 000000000CFCFA00-000000000CFCFA2A
void __cdecl MuipserverService::~MuipserverService(MuipserverService *const this)
{
  MuipserverService::~MuipserverService(this);
  operator delete(this, 0x350uLL);
};

// Line 33: range 000000000CC836EE-000000000CC836FC
uint32_t __cdecl MuipserverService::getServiceType(MuipserverService *const this)
{
  return 8;
};

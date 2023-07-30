// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/service/gateserver_service.h

// Line 29: range 000000000C8422B4-000000000C84237A
void __cdecl GateserverService::GateserverService(GateserverService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'GateserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ServiceBase = v1;
  AccountSdkMgr::AccountSdkMgr(&this->account_sdk_mgr);
  GameserverMgr::GameserverMgr(&this->gameserver_mgr);
  ExternalMonitorReportMgr::ExternalMonitorReportMgr(&this->external_monitor_report_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_report_session_num_timestamp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_report_session_num_timestamp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_report_session_num_timestamp_);
  }
  this->next_report_session_num_timestamp_ = 0;
};

// Line 29: range 000000000C84C434-000000000C84C4A5
void __cdecl GateserverService::~GateserverService(GateserverService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GateserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ServiceBase = v1;
  GameserverMgr::~GameserverMgr(&this->gameserver_mgr);
  AccountSdkMgr::~AccountSdkMgr(&this->account_sdk_mgr);
  ServiceBase::~ServiceBase(this);
};

// Line 29: range 000000000C84C4A6-000000000C84C4D0
void __cdecl GateserverService::~GateserverService(GateserverService *const this)
{
  GateserverService::~GateserverService(this);
  operator delete(this, 0x530uLL);
};

// Line 75: range 000000000C79FEE6-000000000C79FEF4
uint32_t __cdecl GateserverService::getServiceType(GateserverService *const this)
{
  return 2;
};

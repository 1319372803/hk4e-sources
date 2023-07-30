// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/service/dbgate_service.h

// Line 29: range 000000000C5F13D4-000000000C5F14F6
void __cdecl DbgateService::DbgateService(DbgateService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServiceBase::ServiceBase(this);
  v2 = (int (**)(...))(&`vtable for'DbgateService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  RegisterRateMgr::RegisterRateMgr(&this->register_rate_mgr);
  ExternalMonitorReportMgr::ExternalMonitorReportMgr(&this->external_monitor_report_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->token_thread_num_, v1);
  }
  this->token_thread_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_queue_max_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_queue_max_size_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->token_queue_max_size_, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->token_queue_max_size_ = 0;
};

// Line 30: range 000000000C5F14F8-000000000C5F1557
void __cdecl DbgateService::~DbgateService(DbgateService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DbgateService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  RegisterRateMgr::~RegisterRateMgr(&this->register_rate_mgr);
  ServiceBase::~ServiceBase(this);
};

// Line 30: range 000000000C5F1558-000000000C5F1582
void __cdecl DbgateService::~DbgateService(DbgateService *const this)
{
  DbgateService::~DbgateService(this);
  operator delete(this, 0x358uLL);
};

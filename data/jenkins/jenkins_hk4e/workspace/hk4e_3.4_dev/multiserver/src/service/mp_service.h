// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/mp_service.h

// Line 28: range 000000000D837294-000000000D8372F3
void __cdecl MpService::MpService(MpService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'MpService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  MpPlayerMgr::MpPlayerMgr(&this->mp_player_mgr);
};

// Line 29: range 000000000DF3E200-000000000DF3E25F
void __cdecl MpService::~MpService(MpService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MpService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  MpPlayerMgr::~MpPlayerMgr(&this->mp_player_mgr);
  ServiceBase::~ServiceBase(this);
};

// Line 29: range 000000000DF3E260-000000000DF3E28A
void __cdecl MpService::~MpService(MpService *const this)
{
  MpService::~MpService(this);
  operator delete(this, 0x4A0uLL);
};

// Line 32: range 000000000DF3E28C-000000000DF3E29A
uint32_t __cdecl MpService::getServiceType(MpService *const this)
{
  return 11;
};

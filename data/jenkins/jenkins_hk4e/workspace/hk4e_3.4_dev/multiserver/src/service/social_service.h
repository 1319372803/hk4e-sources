// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/social_service.h

// Line 24: range 000000000DD64E8A-000000000DD64ED7
void __cdecl SocialService::SocialService(SocialService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'SocialService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
};

// Line 24: range 000000000E0BF150-000000000E0BF19D
void __cdecl SocialService::~SocialService(SocialService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SocialService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  ServiceBase::~ServiceBase(this);
};

// Line 24: range 000000000E0BF19E-000000000E0BF1C8
void __cdecl SocialService::~SocialService(SocialService *const this)
{
  SocialService::~SocialService(this);
  operator delete(this, 0x308uLL);
};

// Line 27: range 000000000DF3E384-000000000DF3E392
uint32_t __cdecl SocialService::getServiceType(SocialService *const this)
{
  return 15;
};

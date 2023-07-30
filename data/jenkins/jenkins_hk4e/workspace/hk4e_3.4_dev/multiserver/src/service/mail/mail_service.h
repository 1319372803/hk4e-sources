// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/mail/mail_service.h

// Line 27: range 000000000D82463C-000000000D824689
void __cdecl MailService::MailService(MailService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'MailService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
};

// Line 28: range 000000000DF371D2-000000000DF3721F
void __cdecl MailService::~MailService(MailService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MailService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  ServiceBase::~ServiceBase(this);
};

// Line 28: range 000000000DF37220-000000000DF3724A
void __cdecl MailService::~MailService(MailService *const this)
{
  MailService::~MailService(this);
  operator delete(this, 0x308uLL);
};

// Line 31: range 000000000DF3724C-000000000DF3725A
uint32_t __cdecl MailService::getServiceType(MailService *const this)
{
  return 10;
};

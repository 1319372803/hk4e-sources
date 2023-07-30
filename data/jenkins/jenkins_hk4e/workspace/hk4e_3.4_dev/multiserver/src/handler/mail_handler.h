// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/mail_handler.h

// Line 23: range 000000000DF3E40C-000000000DF3E459
void __cdecl MailHandler::MailHandler(MailHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'MailHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 24: range 000000000DF3E45A-000000000DF3E4A7
void __cdecl MailHandler::~MailHandler(MailHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MailHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 24: range 000000000DF3E4A8-000000000DF3E4D2
void __cdecl MailHandler::~MailHandler(MailHandler *const this)
{
  MailHandler::~MailHandler(this);
  operator delete(this, 8uLL);
};

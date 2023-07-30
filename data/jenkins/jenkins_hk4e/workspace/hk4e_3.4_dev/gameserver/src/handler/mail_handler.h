// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/mail_handler.h

// Line 30: range 00000000154CB940-00000000154CB98D
void __cdecl MailHandler::~MailHandler(MailHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MailHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 30: range 00000000154CB98E-00000000154CB9B8
void __cdecl MailHandler::~MailHandler(MailHandler *const this)
{
  MailHandler::~MailHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 33: range 0000000017491360-00000000174913B8
void __cdecl ZN11MailHandlerCI217PlayerHandlerBaseER6Player(MailHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'MailHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

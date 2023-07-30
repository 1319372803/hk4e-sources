// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/login_handler.h

// Line 22: range 000000001786CEBC-000000001786CF09
void __cdecl LoginHandler::LoginHandler(LoginHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'LoginHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 22: range 0000000016188F94-0000000016188FE1
void __cdecl LoginHandler::~LoginHandler(LoginHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'LoginHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 22: range 0000000016188FE2-000000001618900C
void __cdecl LoginHandler::~LoginHandler(LoginHandler *const this)
{
  LoginHandler::~LoginHandler(this);
  operator delete(this, 8uLL);
};

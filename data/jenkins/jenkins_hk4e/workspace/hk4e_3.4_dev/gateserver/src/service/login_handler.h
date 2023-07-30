// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/service/login_handler.h

// Line 22: range 000000000C846908-000000000C846955
void __cdecl LoginHandler::LoginHandler(LoginHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'LoginHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
};

// Line 22: range 000000000C84C3BA-000000000C84C407
void __cdecl LoginHandler::~LoginHandler(LoginHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'LoginHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 22: range 000000000C84C408-000000000C84C432
void __cdecl LoginHandler::~LoginHandler(LoginHandler *const this)
{
  LoginHandler::~LoginHandler(this);
  operator delete(this, 8uLL);
};

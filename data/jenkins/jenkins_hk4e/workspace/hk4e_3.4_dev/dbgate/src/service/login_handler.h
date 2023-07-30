// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/service/login_handler.h

// Line 27: range 000000000C5FCBBE-000000000C5FCC48
void __cdecl LoginHandler::~LoginHandler(LoginHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  DataVersionMgr *i; // rbx

  v2 = (int (**)(...))(&`vtable for'LoginHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HandlerBase = v2;
  if ( this != (LoginHandler *const)-8LL )
  {
    for ( i = (DataVersionMgr *)&this[1]; i != this->data_version_mgr_; DataVersionMgr::~DataVersionMgr(i) )
      --i;
  }
  HandlerBase::~HandlerBase(this);
};

// Line 27: range 000000000C5FCC4A-000000000C5FCC74
void __cdecl LoginHandler::~LoginHandler(LoginHandler *const this)
{
  LoginHandler::~LoginHandler(this);
  operator delete(this, 0xB8uLL);
};

// Line 23564: range 000000000C5FCB3E-000000000C5FCBBC
void __cdecl LoginHandler::LoginHandler(LoginHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rbx
  DataVersionMgr *data_version_mgr; // r12

  HandlerBase::HandlerBase(this);
  v2 = (int (**)(...))(&`vtable for'LoginHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HandlerBase = v2;
  v3 = 1LL;
  data_version_mgr = this->data_version_mgr_;
  while ( v3 >= 0 )
  {
    DataVersionMgr::DataVersionMgr(data_version_mgr++);
    --v3;
  }
};

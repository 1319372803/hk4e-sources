// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/handler/main_handler.h

// Line 25: range 0000000003972440-000000000397248D
void __cdecl MainHandler::MainHandler(MainHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  HandlerBase::HandlerBase(this);
  v2 = (int (**)(...))(&`vtable for'MainHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HandlerBase = v2;
};

// Line 25: range 0000000003976C4A-0000000003976C97
void __cdecl MainHandler::~MainHandler(MainHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MainHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HandlerBase = v2;
  HandlerBase::~HandlerBase(this);
};

// Line 25: range 0000000003976C98-0000000003976CC2
void __cdecl MainHandler::~MainHandler(MainHandler *const this)
{
  MainHandler::~MainHandler(this);
  operator delete(this, 8uLL);
};

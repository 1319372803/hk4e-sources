// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/home_handler.h

// Line 19: range 000000001786D314-000000001786D361
void __cdecl HomeHandler::HomeHandler(HomeHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'HomeHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 19: range 00000000154CBB28-00000000154CBB75
void __cdecl HomeHandler::~HomeHandler(HomeHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 19: range 00000000154CBB76-00000000154CBBA0
void __cdecl HomeHandler::~HomeHandler(HomeHandler *const this)
{
  HomeHandler::~HomeHandler(this);
  operator delete(this, 8uLL);
};

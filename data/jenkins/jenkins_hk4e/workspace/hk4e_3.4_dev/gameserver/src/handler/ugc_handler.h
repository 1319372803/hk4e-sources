// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/ugc_handler.h

// Line 19: range 0000000018327002-000000001832704F
void __cdecl UgcHandler::~UgcHandler(UgcHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UgcHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 19: range 0000000018327050-000000001832707A
void __cdecl UgcHandler::~UgcHandler(UgcHandler *const this)
{
  UgcHandler::~UgcHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 22: range 0000000017496E02-0000000017496E5A
void __cdecl ZN10UgcHandlerCI217PlayerHandlerBaseER6Player(UgcHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'UgcHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/investigation_handler.h

// Line 31: range 00000000154CBA34-00000000154CBA81
void __cdecl InvestigationHandler::~InvestigationHandler(InvestigationHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'InvestigationHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 31: range 00000000154CBA82-00000000154CBAAC
void __cdecl InvestigationHandler::~InvestigationHandler(InvestigationHandler *const this)
{
  InvestigationHandler::~InvestigationHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 34: range 0000000017492E0A-0000000017492E62
void __cdecl ZN20InvestigationHandlerCI217PlayerHandlerBaseER6Player(InvestigationHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'InvestigationHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

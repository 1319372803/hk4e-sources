// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/match_handler.h

// Line 25: range 00000000154CB8C6-00000000154CB913
void __cdecl MatchHandler::~MatchHandler(MatchHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 25: range 00000000154CB914-00000000154CB93E
void __cdecl MatchHandler::~MatchHandler(MatchHandler *const this)
{
  MatchHandler::~MatchHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 28: range 00000000174940E2-000000001749413A
void __cdecl ZN12MatchHandlerCI217PlayerHandlerBaseER6Player(MatchHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'MatchHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

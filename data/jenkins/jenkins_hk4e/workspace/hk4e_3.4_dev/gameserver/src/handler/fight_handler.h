// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/fight_handler.h

// Line 65: range 00000000136118DA-0000000013611927
void __cdecl FightHandler::~FightHandler(FightHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FightHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 65: range 0000000013611928-0000000013611952
void __cdecl FightHandler::~FightHandler(FightHandler *const this)
{
  FightHandler::~FightHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 68: range 0000000017490C40-0000000017490C98
void __cdecl ZN12FightHandlerCI217PlayerHandlerBaseER6Player(FightHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'FightHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

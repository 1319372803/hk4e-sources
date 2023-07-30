// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/coop_handler.h

// Line 39: range 0000000013611AC2-0000000013611B0F
void __cdecl CoopHandler::~CoopHandler(CoopHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CoopHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 39: range 0000000013611B10-0000000013611B3A
void __cdecl CoopHandler::~CoopHandler(CoopHandler *const this)
{
  CoopHandler::~CoopHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 42: range 0000000017494F22-0000000017494F7A
void __cdecl ZN11CoopHandlerCI217PlayerHandlerBaseER6Player(CoopHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'CoopHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

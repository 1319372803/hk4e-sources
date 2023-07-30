// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/ability_handler.h

// Line 30: range 0000000013611D24-0000000013611D71
void __cdecl AbilityHandler::~AbilityHandler(AbilityHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 30: range 0000000013611D72-0000000013611D9C
void __cdecl AbilityHandler::~AbilityHandler(AbilityHandler *const this)
{
  AbilityHandler::~AbilityHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 33: range 0000000017490708-0000000017490760
void __cdecl ZN14AbilityHandlerCI217PlayerHandlerBaseER6Player(AbilityHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'AbilityHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

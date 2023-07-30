// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/player_home_handler.h

// Line 25: range 0000000017F53624-0000000017F53671
void __cdecl PlayerHomeHandler::~PlayerHomeHandler(PlayerHomeHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerHomeHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 25: range 0000000017F53672-0000000017F5369C
void __cdecl PlayerHomeHandler::~PlayerHomeHandler(PlayerHomeHandler *const this)
{
  PlayerHomeHandler::~PlayerHomeHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 28: range 00000000174966E2-000000001749673A
void __cdecl ZN17PlayerHomeHandlerCI217PlayerHandlerBaseER6Player(PlayerHomeHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerHomeHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

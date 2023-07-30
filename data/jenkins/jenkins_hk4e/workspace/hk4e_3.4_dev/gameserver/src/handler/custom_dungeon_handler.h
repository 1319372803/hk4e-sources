// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/custom_dungeon_handler.h

// Line 19: range 0000000013611A48-0000000013611A95
void __cdecl CustomDungeonHandler::~CustomDungeonHandler(CustomDungeonHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CustomDungeonHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 19: range 0000000013611A96-0000000013611AC0
void __cdecl CustomDungeonHandler::~CustomDungeonHandler(CustomDungeonHandler *const this)
{
  CustomDungeonHandler::~CustomDungeonHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 22: range 0000000017496BA2-0000000017496BFA
void __cdecl ZN20CustomDungeonHandlerCI217PlayerHandlerBaseER6Player(CustomDungeonHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'CustomDungeonHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

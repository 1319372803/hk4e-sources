// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/battle_pass_handler.h

// Line 33: range 0000000013611BB6-0000000013611C03
void __cdecl BattlePassHandler::~BattlePassHandler(BattlePassHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BattlePassHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 33: range 0000000013611C04-0000000013611C2E
void __cdecl BattlePassHandler::~BattlePassHandler(BattlePassHandler *const this)
{
  BattlePassHandler::~BattlePassHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 36: range 0000000017493E82-0000000017493EDA
void __cdecl ZN17BattlePassHandlerCI217PlayerHandlerBaseER6Player(BattlePassHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BattlePassHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

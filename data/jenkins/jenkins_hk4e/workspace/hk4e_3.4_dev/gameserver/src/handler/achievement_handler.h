// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/achievement_handler.h

// Line 27: range 0000000013611CAA-0000000013611CF7
void __cdecl AchievementHandler::~AchievementHandler(AchievementHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AchievementHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 27: range 0000000013611CF8-0000000013611D22
void __cdecl AchievementHandler::~AchievementHandler(AchievementHandler *const this)
{
  AchievementHandler::~AchievementHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 30: range 00000000174945A2-00000000174945FA
void __cdecl ZN18AchievementHandlerCI217PlayerHandlerBaseER6Player(AchievementHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'AchievementHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

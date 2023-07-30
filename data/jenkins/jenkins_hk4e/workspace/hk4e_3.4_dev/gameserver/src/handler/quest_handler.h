// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/quest_handler.h

// Line 60: range 0000000015F4645A-0000000015F464A7
void __cdecl QuestHandler::~QuestHandler(QuestHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'QuestHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 60: range 0000000015F464A8-0000000015F464D2
void __cdecl QuestHandler::~QuestHandler(QuestHandler *const this)
{
  QuestHandler::~QuestHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 63: range 0000000017491820-0000000017491878
void __cdecl ZN12QuestHandlerCI217PlayerHandlerBaseER6Player(QuestHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'QuestHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

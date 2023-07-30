// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/reputation_handler.h

// Line 39: range 0000000015F4626E-0000000015F462BB
void __cdecl ReputationHandler::~ReputationHandler(ReputationHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReputationHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 39: range 0000000015F462BC-0000000015F462E6
void __cdecl ReputationHandler::~ReputationHandler(ReputationHandler *const this)
{
  ReputationHandler::~ReputationHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 42: range 0000000017494A62-0000000017494ABA
void __cdecl ZN17ReputationHandlerCI217PlayerHandlerBaseER6Player(ReputationHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ReputationHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

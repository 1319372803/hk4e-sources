// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/routine_handler.h

// Line 24: range 0000000015F4617A-0000000015F461C7
void __cdecl RoutineHandler::~RoutineHandler(RoutineHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RoutineHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 24: range 0000000015F461C8-0000000015F461F2
void __cdecl RoutineHandler::~RoutineHandler(RoutineHandler *const this)
{
  RoutineHandler::~RoutineHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 27: range 00000000174958A2-00000000174958FA
void __cdecl ZN14RoutineHandlerCI217PlayerHandlerBaseER6Player(RoutineHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'RoutineHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/activity_handler.h

// Line 442: range 0000000013CD0CCE-0000000013CD0D1B
void __cdecl ActivityHandler::~ActivityHandler(ActivityHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 442: range 0000000013CD0D1C-0000000013CD0D46
void __cdecl ActivityHandler::~ActivityHandler(ActivityHandler *const this)
{
  ActivityHandler::~ActivityHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 445: range 000000001749306A-00000000174930C2
void __cdecl ZN15ActivityHandlerCI217PlayerHandlerBaseER6Player(ActivityHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ActivityHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

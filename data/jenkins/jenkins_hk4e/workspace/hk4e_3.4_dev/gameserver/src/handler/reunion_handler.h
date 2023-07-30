// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/reunion_handler.h

// Line 20: range 0000000015F461F4-0000000015F46241
void __cdecl ReunionHandler::~ReunionHandler(ReunionHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReunionHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 20: range 0000000015F46242-0000000015F4626C
void __cdecl ReunionHandler::~ReunionHandler(ReunionHandler *const this)
{
  ReunionHandler::~ReunionHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 23: range 0000000017495642-000000001749569A
void __cdecl ZN14ReunionHandlerCI217PlayerHandlerBaseER6Player(ReunionHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ReunionHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

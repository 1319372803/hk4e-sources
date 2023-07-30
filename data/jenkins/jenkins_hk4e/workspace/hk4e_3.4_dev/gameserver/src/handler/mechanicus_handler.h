// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/mechanicus_handler.h

// Line 43: range 00000000154CB84C-00000000154CB899
void __cdecl MechanicusHandler::~MechanicusHandler(MechanicusHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MechanicusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 43: range 00000000154CB89A-00000000154CB8C4
void __cdecl MechanicusHandler::~MechanicusHandler(MechanicusHandler *const this)
{
  MechanicusHandler::~MechanicusHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 46: range 0000000017495B02-0000000017495B5A
void __cdecl ZN17MechanicusHandlerCI217PlayerHandlerBaseER6Player(MechanicusHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'MechanicusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

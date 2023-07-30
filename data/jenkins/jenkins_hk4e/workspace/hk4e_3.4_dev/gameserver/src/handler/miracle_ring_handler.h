// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/miracle_ring_handler.h

// Line 29: range 0000000016B7BE6E-0000000016B7BEBB
void __cdecl MiracleRingHandler::~MiracleRingHandler(MiracleRingHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MiracleRingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 29: range 0000000016B7BEBC-0000000016B7BEE6
void __cdecl MiracleRingHandler::~MiracleRingHandler(MiracleRingHandler *const this)
{
  MiracleRingHandler::~MiracleRingHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 32: range 0000000017495FC2-000000001749601A
void __cdecl ZN18MiracleRingHandlerCI217PlayerHandlerBaseER6Player(MiracleRingHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'MiracleRingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

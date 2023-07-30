// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/fishing_handler.h

// Line 37: range 00000000154CBC96-00000000154CBCE3
void __cdecl FishingHandler::~FishingHandler(FishingHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FishingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 37: range 00000000154CBCE4-00000000154CBD0E
void __cdecl FishingHandler::~FishingHandler(FishingHandler *const this)
{
  FishingHandler::~FishingHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 40: range 0000000017496942-000000001749699A
void __cdecl ZN14FishingHandlerCI217PlayerHandlerBaseER6Player(FishingHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'FishingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

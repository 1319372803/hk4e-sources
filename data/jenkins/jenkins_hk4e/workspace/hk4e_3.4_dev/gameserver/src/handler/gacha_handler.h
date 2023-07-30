// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/gacha_handler.h

// Line 30: range 00000000154CBC1C-00000000154CBC69
void __cdecl GachaHandler::~GachaHandler(GachaHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GachaHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 30: range 00000000154CBC6A-00000000154CBC94
void __cdecl GachaHandler::~GachaHandler(GachaHandler *const this)
{
  GachaHandler::~GachaHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 33: range 000000001749294A-00000000174929A2
void __cdecl ZN12GachaHandlerCI217PlayerHandlerBaseER6Player(GachaHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GachaHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

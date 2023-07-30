// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/player_gcg_handler.h

// Line 63: range 0000000016B7BB18-0000000016B7BB65
void __cdecl PlayerGCGHandler::~PlayerGCGHandler(PlayerGCGHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerGCGHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 63: range 0000000016B7BB66-0000000016B7BB90
void __cdecl PlayerGCGHandler::~PlayerGCGHandler(PlayerGCGHandler *const this)
{
  PlayerGCGHandler::~PlayerGCGHandler(this);
  operator delete(this, 0x20uLL);
};

// Line 66: range 0000000017497062-000000001749711C
void __cdecl ZN16PlayerGCGHandlerCI217PlayerHandlerBaseER6Player(PlayerGCGHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerGCGHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->save_deck_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->save_deck_ms_);
  this->save_deck_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_deck_name_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->change_deck_name_ms_);
  this->change_deck_name_ms_ = 0LL;
};

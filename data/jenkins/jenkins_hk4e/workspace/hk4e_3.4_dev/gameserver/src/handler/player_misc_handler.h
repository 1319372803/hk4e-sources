// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/player_misc_handler.h

// Line 39: range 0000000016B7BA14-0000000016B7BA61
void __cdecl PlayerMiscHandler::~PlayerMiscHandler(PlayerMiscHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerMiscHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 39: range 0000000016B7BA62-0000000016B7BA8C
void __cdecl PlayerMiscHandler::~PlayerMiscHandler(PlayerMiscHandler *const this)
{
  PlayerMiscHandler::~PlayerMiscHandler(this);
  operator delete(this, 0x18uLL);
};

// Line 43: range 00000000174922E2-0000000017492378
void __cdecl ZN17PlayerMiscHandlerCI217PlayerHandlerBaseER6Player(PlayerMiscHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerMiscHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_mouse_macro_report_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_mouse_macro_report_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_mouse_macro_report_time_);
  }
  this->last_mouse_macro_report_time_ = 0;
};

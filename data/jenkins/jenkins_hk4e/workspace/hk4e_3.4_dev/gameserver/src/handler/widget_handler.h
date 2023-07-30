// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/widget_handler.h

// Line 48: range 0000000018326F88-0000000018326FD5
void __cdecl WidgetHandler::~WidgetHandler(WidgetHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'WidgetHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 48: range 0000000018326FD6-0000000018327000
void __cdecl WidgetHandler::~WidgetHandler(WidgetHandler *const this)
{
  WidgetHandler::~WidgetHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 51: range 0000000017494CC2-0000000017494D1A
void __cdecl ZN13WidgetHandlerCI217PlayerHandlerBaseER6Player(WidgetHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'WidgetHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

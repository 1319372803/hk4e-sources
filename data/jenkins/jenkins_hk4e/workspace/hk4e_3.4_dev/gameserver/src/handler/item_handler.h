// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/item_handler.h

// Line 67: range 00000000154CB9BA-00000000154CBA07
void __cdecl ItemHandler::~ItemHandler(ItemHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ItemHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 67: range 00000000154CBA08-00000000154CBA32
void __cdecl ItemHandler::~ItemHandler(ItemHandler *const this)
{
  ItemHandler::~ItemHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 70: range 0000000017491100-0000000017491158
void __cdecl ZN11ItemHandlerCI217PlayerHandlerBaseER6Player(ItemHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ItemHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

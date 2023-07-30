// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/shop_handler.h

// Line 33: range 0000000015F46086-0000000015F460D3
void __cdecl ShopHandler::~ShopHandler(ShopHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ShopHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 33: range 0000000015F460D4-0000000015F460FE
void __cdecl ShopHandler::~ShopHandler(ShopHandler *const this)
{
  ShopHandler::~ShopHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 36: range 0000000017491A80-0000000017491AD8
void __cdecl ZN11ShopHandlerCI217PlayerHandlerBaseER6Player(ShopHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ShopHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

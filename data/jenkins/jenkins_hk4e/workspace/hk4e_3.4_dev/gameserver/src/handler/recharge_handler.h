// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/recharge_handler.h

// Line 27: range 0000000015F463E0-0000000015F4642D
void __cdecl RechargeHandler::~RechargeHandler(RechargeHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RechargeHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 27: range 0000000015F4642E-0000000015F46458
void __cdecl RechargeHandler::~RechargeHandler(RechargeHandler *const this)
{
  RechargeHandler::~RechargeHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 30: range 00000000174939C2-0000000017493A1A
void __cdecl ZN15RechargeHandlerCI217PlayerHandlerBaseER6Player(RechargeHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'RechargeHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

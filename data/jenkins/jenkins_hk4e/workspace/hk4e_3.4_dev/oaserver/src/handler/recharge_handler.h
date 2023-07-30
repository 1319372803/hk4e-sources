// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/handler/recharge_handler.h

// Line 25: range 000000000CD52908-000000000CD52955
void __cdecl RechargeHandler::RechargeHandler(RechargeHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  HandlerBase::HandlerBase(this);
  v2 = (int (**)(...))(&`vtable for'RechargeHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HandlerBase = v2;
};

// Line 25: range 000000000CD6F5F8-000000000CD6F645
void __cdecl RechargeHandler::~RechargeHandler(RechargeHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RechargeHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HandlerBase = v2;
  HandlerBase::~HandlerBase(this);
};

// Line 25: range 000000000CD6F646-000000000CD6F670
void __cdecl RechargeHandler::~RechargeHandler(RechargeHandler *const this)
{
  RechargeHandler::~RechargeHandler(this);
  operator delete(this, 8uLL);
};

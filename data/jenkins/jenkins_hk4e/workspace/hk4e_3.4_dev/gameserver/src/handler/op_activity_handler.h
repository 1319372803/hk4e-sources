// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/op_activity_handler.h

// Line 25: range 0000000016B7BC0C-0000000016B7BC59
void __cdecl OpActivityHandler::~OpActivityHandler(OpActivityHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OpActivityHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 25: range 0000000016B7BC5A-0000000016B7BC84
void __cdecl OpActivityHandler::~OpActivityHandler(OpActivityHandler *const this)
{
  OpActivityHandler::~OpActivityHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 28: range 0000000017495D62-0000000017495DBA
void __cdecl ZN17OpActivityHandlerCI217PlayerHandlerBaseER6Player(OpActivityHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'OpActivityHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

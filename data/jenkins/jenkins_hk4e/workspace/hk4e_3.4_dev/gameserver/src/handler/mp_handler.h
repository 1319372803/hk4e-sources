// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/mp_handler.h

// Line 20: range 0000000016B7BD7A-0000000016B7BDC7
void __cdecl MpHandler::~MpHandler(MpHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MpHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 20: range 0000000016B7BDC8-0000000016B7BDF2
void __cdecl MpHandler::~MpHandler(MpHandler *const this)
{
  MpHandler::~MpHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 24: range 0000000017492BAA-0000000017492C02
void __cdecl ZN9MpHandlerCI217PlayerHandlerBaseER6Player(MpHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'MpHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

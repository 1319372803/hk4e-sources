// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/hunting_handler.h

// Line 20: range 00000000154CBAAE-00000000154CBAFB
void __cdecl HuntingHandler::~HuntingHandler(HuntingHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HuntingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 20: range 00000000154CBAFC-00000000154CBB26
void __cdecl HuntingHandler::~HuntingHandler(HuntingHandler *const this)
{
  HuntingHandler::~HuntingHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 23: range 0000000017494802-000000001749485A
void __cdecl ZN14HuntingHandlerCI217PlayerHandlerBaseER6Player(HuntingHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HuntingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

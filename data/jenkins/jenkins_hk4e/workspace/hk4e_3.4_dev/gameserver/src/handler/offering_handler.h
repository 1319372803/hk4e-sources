// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/offering_handler.h

// Line 29: range 0000000016B7BC86-0000000016B7BCD3
void __cdecl OfferingHandler::~OfferingHandler(OfferingHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OfferingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 29: range 0000000016B7BCD4-0000000016B7BCFE
void __cdecl OfferingHandler::~OfferingHandler(OfferingHandler *const this)
{
  OfferingHandler::~OfferingHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 32: range 00000000174953E2-000000001749543A
void __cdecl ZN15OfferingHandlerCI217PlayerHandlerBaseER6Player(OfferingHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'OfferingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

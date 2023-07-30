// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/property_handler.h

// Line 19: range 0000000015F464D4-0000000015F46521
void __cdecl PropertyHandler::~PropertyHandler(PropertyHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PropertyHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 19: range 0000000015F46522-0000000015F4654C
void __cdecl PropertyHandler::~PropertyHandler(PropertyHandler *const this)
{
  PropertyHandler::~PropertyHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 22: range 00000000174915C0-0000000017491618
void __cdecl ZN15PropertyHandlerCI217PlayerHandlerBaseER6Player(PropertyHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PropertyHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

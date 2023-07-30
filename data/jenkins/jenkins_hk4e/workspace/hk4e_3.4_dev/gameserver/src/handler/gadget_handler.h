// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/gadget_handler.h

// Line 40: range 00000000154CBBA2-00000000154CBBEF
void __cdecl GadgetHandler::~GadgetHandler(GadgetHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 40: range 00000000154CBBF0-00000000154CBC1A
void __cdecl GadgetHandler::~GadgetHandler(GadgetHandler *const this)
{
  GadgetHandler::~GadgetHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 43: range 0000000017490EA0-0000000017490EF8
void __cdecl ZN13GadgetHandlerCI217PlayerHandlerBaseER6Player(GadgetHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GadgetHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

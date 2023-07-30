// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/blossom_handler.h

// Line 26: range 0000000013611B3C-0000000013611B89
void __cdecl BlossomHandler::~BlossomHandler(BlossomHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BlossomHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 26: range 0000000013611B8A-0000000013611BB4
void __cdecl BlossomHandler::~BlossomHandler(BlossomHandler *const this)
{
  BlossomHandler::~BlossomHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 29: range 0000000017493C22-0000000017493C7A
void __cdecl ZN14BlossomHandlerCI217PlayerHandlerBaseER6Player(BlossomHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BlossomHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/draft_handler.h

// Line 20: range 00000000136119CE-0000000013611A1B
void __cdecl DraftHandler::~DraftHandler(DraftHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DraftHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 20: range 0000000013611A1C-0000000013611A46
void __cdecl DraftHandler::~DraftHandler(DraftHandler *const this)
{
  DraftHandler::~DraftHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 23: range 0000000017496222-000000001749627A
void __cdecl ZN12DraftHandlerCI217PlayerHandlerBaseER6Player(DraftHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'DraftHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

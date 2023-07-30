// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/player_codex_handler.h

// Line 33: range 0000000016B7BB92-0000000016B7BBDF
void __cdecl CodexHandler::~CodexHandler(CodexHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CodexHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 33: range 0000000016B7BBE0-0000000016B7BC0A
void __cdecl CodexHandler::~CodexHandler(CodexHandler *const this)
{
  CodexHandler::~CodexHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 36: range 0000000017494342-000000001749439A
void __cdecl ZN12CodexHandlerCI217PlayerHandlerBaseER6Player(CodexHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'CodexHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};

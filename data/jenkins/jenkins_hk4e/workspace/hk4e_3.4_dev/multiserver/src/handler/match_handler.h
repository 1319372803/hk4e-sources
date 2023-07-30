// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/match_handler.h

// Line 23: range 000000000DF419EE-000000000DF41A3B
void __cdecl MatchHandler::~MatchHandler(MatchHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 23: range 000000000DF41A3C-000000000DF41A66
void __cdecl MatchHandler::~MatchHandler(MatchHandler *const this)
{
  MatchHandler::~MatchHandler(this);
  operator delete(this, 8uLL);
};

// Line 145: range 000000000D8329C0-000000000D832A0D
void __cdecl MatchHandler::MatchHandler(MatchHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'MatchHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

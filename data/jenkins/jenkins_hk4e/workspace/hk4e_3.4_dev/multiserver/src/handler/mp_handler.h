// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/mp_handler.h

// Line 30: range 000000000DF3E29C-000000000DF3E2E9
void __cdecl MpHandler::MpHandler(MpHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'MpHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 31: range 000000000DF3E2EA-000000000DF3E337
void __cdecl MpHandler::~MpHandler(MpHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MpHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 31: range 000000000DF3E338-000000000DF3E362
void __cdecl MpHandler::~MpHandler(MpHandler *const this)
{
  MpHandler::~MpHandler(this);
  operator delete(this, 8uLL);
};

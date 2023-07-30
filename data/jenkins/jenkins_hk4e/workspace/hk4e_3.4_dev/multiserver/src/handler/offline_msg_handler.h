// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/offline_msg_handler.h

// Line 21: range 000000000E0B72F4-000000000E0B7341
void __cdecl OfflineMsgHandler::OfflineMsgHandler(OfflineMsgHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'OfflineMsgHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 21: range 000000000E44C812-000000000E44C85F
void __cdecl OfflineMsgHandler::~OfflineMsgHandler(OfflineMsgHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OfflineMsgHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 21: range 000000000E44C860-000000000E44C88A
void __cdecl OfflineMsgHandler::~OfflineMsgHandler(OfflineMsgHandler *const this)
{
  OfflineMsgHandler::~OfflineMsgHandler(this);
  operator delete(this, 8uLL);
};

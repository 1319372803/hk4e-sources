// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/offline_op_handler.h

// Line 21: range 000000000E0B7520-000000000E0B756D
void __cdecl OfflineOpHandler::OfflineOpHandler(OfflineOpHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'OfflineOpHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 21: range 000000000E0BEE14-000000000E0BEE61
void __cdecl OfflineOpHandler::~OfflineOpHandler(OfflineOpHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OfflineOpHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 21: range 000000000E0BEE62-000000000E0BEE8C
void __cdecl OfflineOpHandler::~OfflineOpHandler(OfflineOpHandler *const this)
{
  OfflineOpHandler::~OfflineOpHandler(this);
  operator delete(this, 8uLL);
};

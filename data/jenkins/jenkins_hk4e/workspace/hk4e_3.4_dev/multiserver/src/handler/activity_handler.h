// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/activity_handler.h

// Line 53: range 000000000E0B6B1C-000000000E0B6B69
void __cdecl ActivityHandler::ActivityHandler(ActivityHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 53: range 000000000E0BEE8E-000000000E0BEEDB
void __cdecl ActivityHandler::~ActivityHandler(ActivityHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 53: range 000000000E0BEEDC-000000000E0BEF06
void __cdecl ActivityHandler::~ActivityHandler(ActivityHandler *const this)
{
  ActivityHandler::~ActivityHandler(this);
  operator delete(this, 8uLL);
};

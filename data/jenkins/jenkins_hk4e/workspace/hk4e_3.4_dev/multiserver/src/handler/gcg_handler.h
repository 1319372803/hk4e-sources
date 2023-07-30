// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/gcg_handler.h

// Line 24: range 000000000E0B6EEA-000000000E0B6F37
void __cdecl GCGHandler::GCGHandler(GCGHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 24: range 000000000E2D1EDC-000000000E2D1F29
void __cdecl GCGHandler::~GCGHandler(GCGHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 24: range 000000000E2D1F2A-000000000E2D1F54
void __cdecl GCGHandler::~GCGHandler(GCGHandler *const this)
{
  GCGHandler::~GCGHandler(this);
  operator delete(this, 8uLL);
};

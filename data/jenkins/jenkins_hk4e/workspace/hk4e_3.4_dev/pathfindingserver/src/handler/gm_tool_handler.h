// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/handler/gm_tool_handler.h

// Line 24: range 000000000D0A6D08-000000000D0A6D55
void __cdecl GMToolHandler::GMToolHandler(GMToolHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'GMToolHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
};

// Line 24: range 000000000D0C2F9E-000000000D0C2FEB
void __cdecl GMToolHandler::~GMToolHandler(GMToolHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GMToolHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 24: range 000000000D0C2FEC-000000000D0C3016
void __cdecl GMToolHandler::~GMToolHandler(GMToolHandler *const this)
{
  GMToolHandler::~GMToolHandler(this);
  operator delete(this, 8uLL);
};

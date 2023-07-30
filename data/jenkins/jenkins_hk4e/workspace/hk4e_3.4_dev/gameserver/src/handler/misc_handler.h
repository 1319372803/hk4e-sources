// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/misc_handler.h

// Line 19: range 000000001786D0E8-000000001786D135
void __cdecl MiscHandler::MiscHandler(MiscHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'MiscHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 19: range 0000000016B7BDF4-0000000016B7BE41
void __cdecl MiscHandler::~MiscHandler(MiscHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MiscHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 19: range 0000000016B7BE42-0000000016B7BE6C
void __cdecl MiscHandler::~MiscHandler(MiscHandler *const this)
{
  MiscHandler::~MiscHandler(this);
  operator delete(this, 8uLL);
};

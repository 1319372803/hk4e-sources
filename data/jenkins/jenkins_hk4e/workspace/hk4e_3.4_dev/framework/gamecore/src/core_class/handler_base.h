// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/handler_base.h

// Line 30: range 000000000C79465E-000000000C79469F
void __cdecl HandlerBase::HandlerBase(HandlerBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HandlerBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
};

// Line 31: range 000000000C7946A0-000000000C7946E1
void __cdecl HandlerBase::~HandlerBase(HandlerBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HandlerBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
};

// Line 31: range 000000000C7946E2-000000000C79470C
void __cdecl HandlerBase::~HandlerBase(HandlerBase *const this)
{
  HandlerBase::~HandlerBase(this);
  operator delete(this, 8uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/handler/tothemoon_handler.h

// Line 23: range 000000000CFE080C-000000000CFE0859
void __cdecl ToTheMoonHandler::ToTheMoonHandler(ToTheMoonHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'ToTheMoonHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
};

// Line 23: range 000000000CFFC9CE-000000000CFFCA1B
void __cdecl ToTheMoonHandler::~ToTheMoonHandler(ToTheMoonHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 23: range 000000000CFFCA1C-000000000CFFCA46
void __cdecl ToTheMoonHandler::~ToTheMoonHandler(ToTheMoonHandler *const this)
{
  ToTheMoonHandler::~ToTheMoonHandler(this);
  operator delete(this, 8uLL);
};

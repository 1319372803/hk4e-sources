// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_interact_comp.h

// Line 23: range 00000000131E4C1A-00000000131E4C67
void __cdecl GadgetBaseInteractComp::~GadgetBaseInteractComp(GadgetBaseInteractComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetBaseInteractComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 23: range 00000000131E4C68-00000000131E4C92
void __cdecl GadgetBaseInteractComp::~GadgetBaseInteractComp(GadgetBaseInteractComp *const this)
{
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
  operator delete(this, 0x10uLL);
};

// Line 29: range 00000000131E4BC0-00000000131E4C18
void __cdecl ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(GadgetBaseInteractComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  GadgetCompBase::GadgetCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GadgetBaseInteractComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
};

// Line 39: range 000000001788829C-00000000178882E9
void __cdecl GadgetInteractComp::~GadgetInteractComp(GadgetInteractComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetInteractComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 39: range 00000000178882EA-0000000017888314
void __cdecl GadgetInteractComp::~GadgetInteractComp(GadgetInteractComp *const this)
{
  GadgetInteractComp::~GadgetInteractComp(this);
  operator delete(this, 0x18uLL);
};

// Line 50: range 000000001762B7AE-000000001762B7BC
proto::InteractType __cdecl GadgetInteractComp::getInteractType(const GadgetInteractComp *const this)
{
  return 5;
};

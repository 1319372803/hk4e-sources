// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_view_comp.h

// Line 19: range 0000000017887EBE-0000000017887F0B
void __cdecl GadgetViewComp::~GadgetViewComp(GadgetViewComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetViewComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 19: range 0000000017887F0C-0000000017887F36
void __cdecl GadgetViewComp::~GadgetViewComp(GadgetViewComp *const this)
{
  GadgetViewComp::~GadgetViewComp(this);
  operator delete(this, 0x10uLL);
};

// Line 25: range 000000001681A376-000000001681A3CE
void __cdecl ZN14GadgetViewCompCI214GadgetCompBaseER6Gadget(GadgetViewComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, a2);
  v2 = (int (**)(...))(&`vtable for'GadgetViewComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
};

// Line 30: range 00000000176336B4-00000000176336C2
proto::InteractType __cdecl GadgetViewComp::getInteractType(const GadgetViewComp *const this)
{
  return 7;
};

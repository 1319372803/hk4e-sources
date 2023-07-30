// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/activity_interact_comp.h

// Line 19: range 00000000136117F2-000000001361183F
void __cdecl ActivityInteractComp::~ActivityInteractComp(ActivityInteractComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityInteractComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 19: range 0000000013611840-000000001361186A
void __cdecl ActivityInteractComp::~ActivityInteractComp(ActivityInteractComp *const this)
{
  ActivityInteractComp::~ActivityInteractComp(this);
  operator delete(this, 0x10uLL);
};

// Line 23: range 000000001681BFAA-000000001681C002
void __cdecl ZN20ActivityInteractCompCI214GadgetCompBaseER6Gadget(ActivityInteractComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, a2);
  v2 = (int (**)(...))(&`vtable for'ActivityInteractComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
};

// Line 27: range 00000000131E4ADE-00000000131E4AEC
proto::InteractType __cdecl ActivityInteractComp::getInteractType(const ActivityInteractComp *const this)
{
  return 0;
};

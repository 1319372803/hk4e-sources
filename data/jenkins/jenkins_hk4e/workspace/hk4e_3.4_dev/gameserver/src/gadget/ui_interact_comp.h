// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/ui_interact_comp.h

// Line 21: range 0000000015F459D8-0000000015F45A25
void __cdecl UIInteractComp::~UIInteractComp(UIInteractComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UIInteractComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 21: range 0000000015F45A26-0000000015F45A50
void __cdecl UIInteractComp::~UIInteractComp(UIInteractComp *const this)
{
  UIInteractComp::~UIInteractComp(this);
  operator delete(this, 0x10uLL);
};

// Line 27: range 000000001681C20A-000000001681C262
void __cdecl ZN14UIInteractCompCI214GadgetCompBaseER6Gadget(UIInteractComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, a2);
  v2 = (int (**)(...))(&`vtable for'UIInteractComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
};

// Line 30: range 0000000015D40E66-0000000015D40E74
proto::InteractType __cdecl UIInteractComp::getInteractType(const UIInteractComp *const this)
{
  return 15;
};

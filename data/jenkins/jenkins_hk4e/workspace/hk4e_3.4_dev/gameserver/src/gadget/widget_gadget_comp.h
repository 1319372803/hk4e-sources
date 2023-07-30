// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/widget_gadget_comp.h

// Line 20: range 0000000015F45722-0000000015F4576F
void __cdecl WidgetGadgetComp::~WidgetGadgetComp(WidgetGadgetComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'WidgetGadgetComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 20: range 0000000015F45770-0000000015F4579A
void __cdecl WidgetGadgetComp::~WidgetGadgetComp(WidgetGadgetComp *const this)
{
  WidgetGadgetComp::~WidgetGadgetComp(this);
  operator delete(this, 0x18uLL);
};

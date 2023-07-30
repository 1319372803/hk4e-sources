// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/screen_comp.h

// Line 20: range 0000000015F45B76-0000000015F45BC3
void __cdecl ScreenComp::~ScreenComp(ScreenComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ScreenComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 20: range 0000000015F45BC4-0000000015F45BEE
void __cdecl ScreenComp::~ScreenComp(ScreenComp *const this)
{
  ScreenComp::~ScreenComp(this);
  operator delete(this, 0x18uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/night_crow_comp.h

// Line 18: range 0000000014838CD4-0000000014838D21
void __cdecl NightCrowComp::~NightCrowComp(NightCrowComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NightCrowComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 18: range 0000000014838D22-0000000014838D4C
void __cdecl NightCrowComp::~NightCrowComp(NightCrowComp *const this)
{
  NightCrowComp::~NightCrowComp(this);
  operator delete(this, 0x10uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/home_gather_comp.h

// Line 21: range 0000000014838ECE-0000000014838F1B
void __cdecl HomeGatherComp::~HomeGatherComp(HomeGatherComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeGatherComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 21: range 0000000014838F1C-0000000014838F46
void __cdecl HomeGatherComp::~HomeGatherComp(HomeGatherComp *const this)
{
  HomeGatherComp::~HomeGatherComp(this);
  operator delete(this, 0x20uLL);
};

// Line 32: range 0000000014617B34-0000000014617B42
proto::InteractType __cdecl HomeGatherComp::getInteractType(const HomeGatherComp *const this)
{
  return 12;
};

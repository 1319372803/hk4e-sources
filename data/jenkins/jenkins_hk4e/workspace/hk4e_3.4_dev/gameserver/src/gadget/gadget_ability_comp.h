// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_ability_comp.h

// Line 20: range 000000001788842A-0000000017888477
void __cdecl GadgetAbilityComp::~GadgetAbilityComp(GadgetAbilityComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetAbilityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 20: range 0000000017888478-00000000178884A2
void __cdecl GadgetAbilityComp::~GadgetAbilityComp(GadgetAbilityComp *const this)
{
  GadgetAbilityComp::~GadgetAbilityComp(this);
  operator delete(this, 0x20uLL);
};

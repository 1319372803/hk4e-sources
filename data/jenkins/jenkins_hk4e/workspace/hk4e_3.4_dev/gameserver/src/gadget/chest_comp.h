// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/chest_comp.h

// Line 20: range 0000000013611622-000000001361166F
void __cdecl ChestComp::~ChestComp(ChestComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChestComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 20: range 0000000013611670-000000001361169A
void __cdecl ChestComp::~ChestComp(ChestComp *const this)
{
  ChestComp::~ChestComp(this);
  operator delete(this, 0x18uLL);
};

// Line 32: range 00000000131E50CE-00000000131E50DC
proto::InteractType __cdecl ChestComp::getInteractType(const ChestComp *const this)
{
  return 3;
};

// Line 34: range 00000000131E50DE-00000000131E50EC
int32_t __cdecl ChestComp::revertInitState(ChestComp *const this)
{
  return 0;
};

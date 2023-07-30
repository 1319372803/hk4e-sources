// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/miracle_ring_comp.h

// Line 21: range 0000000014838DC8-0000000014838E15
void __cdecl MiracleRingComp::~MiracleRingComp(MiracleRingComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MiracleRingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 21: range 0000000014838E16-0000000014838E40
void __cdecl MiracleRingComp::~MiracleRingComp(MiracleRingComp *const this)
{
  MiracleRingComp::~MiracleRingComp(this);
  operator delete(this, 0x18uLL);
};

// Line 29: range 000000001461D782-000000001461D790
proto::InteractType __cdecl MiracleRingComp::getInteractType(const MiracleRingComp *const this)
{
  return 9;
};

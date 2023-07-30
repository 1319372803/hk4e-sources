// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/offering_comp.h

// Line 23: range 0000000014838C5A-0000000014838CA7
void __cdecl OfferingComp::~OfferingComp(OfferingComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OfferingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 23: range 0000000014838CA8-0000000014838CD2
void __cdecl OfferingComp::~OfferingComp(OfferingComp *const this)
{
  OfferingComp::~OfferingComp(this);
  operator delete(this, 0x18uLL);
};

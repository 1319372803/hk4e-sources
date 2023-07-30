// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gather_comp.h

// Line 22: range 0000000017887E44-0000000017887E91
void __cdecl GatherComp::~GatherComp(GatherComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GatherComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 22: range 0000000017887E92-0000000017887EBC
void __cdecl GatherComp::~GatherComp(GatherComp *const this)
{
  GatherComp::~GatherComp(this);
  operator delete(this, 0x18uLL);
};

// Line 34: range 0000000017632BF8-0000000017632C06
proto::InteractType __cdecl GatherComp::getInteractType(const GatherComp *const this)
{
  return 2;
};

// Line 38: range 00000000149ED8B6-00000000149ED8FD
uint32_t __cdecl GatherComp::getGatherId(const GatherComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->gather_id_;
};

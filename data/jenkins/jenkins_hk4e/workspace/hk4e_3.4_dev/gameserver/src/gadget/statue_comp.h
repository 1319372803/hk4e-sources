// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/statue_comp.h

// Line 18: range 0000000015F45AEC-0000000015F45B49
void __cdecl StatueComp::~StatueComp(StatueComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'StatueComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::set<unsigned int>::~set(&this->opened_statue_uid_set_);
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 18: range 0000000015F45B4A-0000000015F45B74
void __cdecl StatueComp::~StatueComp(StatueComp *const this)
{
  StatueComp::~StatueComp(this);
  operator delete(this, 0x40uLL);
};

// Line 30: range 0000000015D40D92-0000000015D40DA0
proto::InteractType __cdecl StatueComp::getInteractType(const StatueComp *const this)
{
  return 4;
};

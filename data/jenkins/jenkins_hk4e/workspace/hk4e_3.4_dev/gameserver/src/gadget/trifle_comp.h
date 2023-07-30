// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/trifle_comp.h

// Line 21: range 0000000015F45A52-0000000015F45ABF
void __cdecl TrifleComp::~TrifleComp(TrifleComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TrifleComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->update_timer_ptr_);
  std::shared_ptr<Item>::~shared_ptr(&this->item_ptr_);
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 21: range 0000000015F45AC0-0000000015F45AEA
void __cdecl TrifleComp::~TrifleComp(TrifleComp *const this)
{
  TrifleComp::~TrifleComp(this);
  operator delete(this, 0x58uLL);
};

// Line 33: range 0000000015D40DDE-0000000015D40DEC
proto::InteractType __cdecl TrifleComp::getInteractType(const TrifleComp *const this)
{
  return 1;
};

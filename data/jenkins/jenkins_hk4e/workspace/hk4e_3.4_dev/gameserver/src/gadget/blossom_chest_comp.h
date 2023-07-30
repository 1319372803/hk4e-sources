// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/blossom_chest_comp.h

// Line 29: range 0000000013611746-00000000136117C5
void __cdecl BlossomChestComp::~BlossomChestComp(BlossomChestComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BlossomChestComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->life_timer_ptr_);
  std::set<unsigned int>::~set(&this->remain_uid_set_);
  std::set<unsigned int>::~set(&this->qualify_uid_set_);
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 29: range 00000000136117C6-00000000136117F0
void __cdecl BlossomChestComp::~BlossomChestComp(BlossomChestComp *const this)
{
  BlossomChestComp::~BlossomChestComp(this);
  operator delete(this, 0x98uLL);
};

// Line 46: range 00000000131E4B42-00000000131E4B50
proto::InteractType __cdecl BlossomChestComp::getInteractType(const BlossomChestComp *const this)
{
  return 3;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/general_reward_comp.h

// Line 30: range 0000000014838F48-0000000014838FD9
void __cdecl GadgetGeneralRewardComp::~GadgetGeneralRewardComp(GadgetGeneralRewardComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetGeneralRewardComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::set<unsigned int>::~set(&this->open_state_set_);
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->life_timer_ptr_);
  std::set<unsigned int>::~set(&this->remain_uid_set_);
  std::map<unsigned int,proto::GeneralRewardBin>::~map(&this->qualify_info_map_);
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 30: range 0000000014838FDA-0000000014839004
void __cdecl GadgetGeneralRewardComp::~GadgetGeneralRewardComp(GadgetGeneralRewardComp *const this)
{
  GadgetGeneralRewardComp::~GadgetGeneralRewardComp(this);
  operator delete(this, 0xE8uLL);
};

// Line 46: range 0000000014616DF0-0000000014616DFE
proto::InteractType __cdecl GadgetGeneralRewardComp::getInteractType(const GadgetGeneralRewardComp *const this)
{
  return 8;
};

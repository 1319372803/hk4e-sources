// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/boss_chest_comp.h

// Line 23: range 000000001361169C-0000000013611719
void __cdecl BossChestComp::~BossChestComp(BossChestComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BossChestComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->life_timer_ptr_);
  std::set<unsigned int>::~set(&this->remain_uid_set_);
  std::set<unsigned int>::~set(&this->qualify_uid_set_);
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 23: range 000000001361171A-0000000013611744
void __cdecl BossChestComp::~BossChestComp(BossChestComp *const this)
{
  BossChestComp::~BossChestComp(this);
  operator delete(this, 0x90uLL);
};

// Line 39: range 00000000131E4E64-00000000131E4E72
proto::InteractType __cdecl BossChestComp::getInteractType(const BossChestComp *const this)
{
  return 3;
};

// Line 43: range 0000000017632A90-0000000017632ADF
uint32_t __cdecl BossChestComp::getBossDeadLevel(const BossChestComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->dead_level_;
};

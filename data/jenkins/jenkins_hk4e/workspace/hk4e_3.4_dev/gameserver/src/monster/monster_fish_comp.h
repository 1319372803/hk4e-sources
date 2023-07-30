// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/monster/monster_fish_comp.h

// Line 18: range 0000000016B7B910-0000000016B7B96D
void __cdecl MonsterFishComp::~MonsterFishComp(MonsterFishComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MonsterFishComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterCompBase = v1;
  std::weak_ptr<Gadget>::~weak_ptr(&this->fish_pool_wtr_);
  MonsterCompBase::~MonsterCompBase(this);
};

// Line 18: range 0000000016B7B96E-0000000016B7B998
void __cdecl MonsterFishComp::~MonsterFishComp(MonsterFishComp *const this)
{
  MonsterFishComp::~MonsterFishComp(this);
  operator delete(this, 0x28uLL);
};

// Line 32: range 00000000131E6064-00000000131E60AB
uint32_t __cdecl MonsterFishComp::getFishId(const MonsterFishComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->fish_id_;
};

// Line 33: range 00000000131E60AC-00000000131E60FB
uint32_t __cdecl MonsterFishComp::getLastShockTime(const MonsterFishComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_shock_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_shock_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->last_shock_time_;
};

// Line 33: range 00000000131E60FC-00000000131E6152
void __cdecl MonsterFishComp::setLastShockTime(MonsterFishComp *const this, uint32_t last_shock_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_shock_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_shock_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_shock_time_);
  }
  this->last_shock_time_ = last_shock_time__out;
};

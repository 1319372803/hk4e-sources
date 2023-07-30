// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/creature.h

// Line 18: range 00000000008D6CE4-00000000008D6D86
void __cdecl Creature::Creature(Creature *const this)
{
  int (**v1)(...); // rdx

  Entity::Entity(this);
  v1 = (int (**)(...))(&`vtable for'Creature + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->life_state_);
  }
  this->life_state_ = LIFE_NONE;
  std::map<data::FightPropType,float>::map(&this->fight_prop_map_);
};

// Line 18: range 00000000008D6D88-00000000008D6DE7
void __cdecl Creature::~Creature(Creature *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Creature + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  std::map<data::FightPropType,float>::~map(&this->fight_prop_map_);
  Entity::~Entity(this);
};

// Line 18: range 00000000008D6DE8-00000000008D6E12
void __cdecl Creature::~Creature(Creature *const this)
{
  Creature::~Creature(this);
  operator delete(this, 0xE8uLL);
};

// Line 24: range 00000000004D72D4-00000000004D7320
data::LifeState __cdecl Creature::getLifeState(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->life_state_);
  }
  return this->life_state_;
};

// Line 24: range 00000000004D7322-00000000004D7375
void __cdecl Creature::setLifeState(Creature *const this, data::LifeState life_state__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->life_state_);
  }
  this->life_state_ = life_state__out;
};

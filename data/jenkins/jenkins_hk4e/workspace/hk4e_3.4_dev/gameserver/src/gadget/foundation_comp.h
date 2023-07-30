// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/foundation_comp.h

// Line 38: range 00000000178884A4-0000000017888531
void __cdecl FoundationComp::~FoundationComp(FoundationComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FoundationComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::weak_ptr<TowerDefensePlayBase>::~weak_ptr(&this->tower_defense_play_base_wtr_);
  std::weak_ptr<Gadget>::~weak_ptr(&this->gear_gadget_wtr_);
  std::weak_ptr<Player>::~weak_ptr(&this->locked_player_wtr_);
  std::set<unsigned int>::~set(&this->uid_set_);
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 38: range 0000000017888532-000000001788855C
void __cdecl FoundationComp::~FoundationComp(FoundationComp *const this)
{
  FoundationComp::~FoundationComp(this);
  operator delete(this, 0x98uLL);
};

// Line 46: range 000000001762B7BE-000000001762B7CC
proto::InteractType __cdecl FoundationComp::getInteractType(const FoundationComp *const this)
{
  return 10;
};

// Line 54: range 000000001762B7CE-000000001762B81C
TowerDefensePlayBasePtr __cdecl FoundationComp::getTowerDefensePlayBasePtr(const FoundationComp *const this)
{
  TowerDefensePlayBasePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<TowerDefensePlayBase>::lock((const std::weak_ptr<TowerDefensePlayBase> *const)this);
  result._M_ptr = (std::__shared_ptr<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 62: range 0000000016056B70-0000000016056BBE
GadgetPtr __cdecl FoundationComp::getGearGadgetPtr(FoundationComp *const this)
{
  GadgetPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)this);
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 103: range 0000000016056BC0-0000000016056C07
uint32_t __cdecl FoundationComp::getCurrentTowerId(const FoundationComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->current_tower_id_;
};

// Line 108: range 0000000015193E3A-0000000015193E90
void __cdecl FoundationComp::setIsPlayEnd(FoundationComp *const this, bool is_play_end__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_play_end_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_play_end_);
  this->is_play_end_ = is_play_end__out;
};

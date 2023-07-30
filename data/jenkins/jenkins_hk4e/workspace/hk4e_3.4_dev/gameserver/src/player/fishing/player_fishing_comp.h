// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/fishing/player_fishing_comp.h

// Line 20: range 00000000168324C2-000000001683251F
void __cdecl PlayerFishingComp::~PlayerFishingComp(PlayerFishingComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerFishingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::weak_ptr<Gadget>::~weak_ptr(&this->cur_fish_pool_wtr_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 20: range 0000000016832520-000000001683254A
void __cdecl PlayerFishingComp::~PlayerFishingComp(PlayerFishingComp *const this)
{
  PlayerFishingComp::~PlayerFishingComp(this);
  operator delete(this, 0x38uLL);
};

// Line 23: range 0000000017214A70-0000000017214A7A
uint32_t __cdecl PlayerFishingComp::getType()
{
  return 61;
};

// Line 26: range 000000001748D57C-000000001748D622
void __cdecl ZN17PlayerFishingCompCI214PlayerCompBaseER6Player(PlayerFishingComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerFishingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::weak_ptr<Gadget>::weak_ptr(&this->cur_fish_pool_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_fish_rod_, a2, &this->last_fish_rod_);
  }
  this->last_fish_rod_ = 0;
};

// Line 46: range 00000000151931B4-0000000015193202
GadgetPtr __cdecl PlayerFishingComp::getCurFishPool(PlayerFishingComp *const this)
{
  GadgetPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)this);
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

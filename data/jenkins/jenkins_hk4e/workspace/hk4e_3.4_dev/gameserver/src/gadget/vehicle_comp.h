// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/vehicle_comp.h

// Line 27: range 0000000015F0205A-0000000015F020B2
void __cdecl VehicleMember::VehicleMember(VehicleMember *const this)
{
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_time);
  }
  this->enter_time = 0;
};

// Line 27: range 0000000015E84226-0000000015E84240
void __cdecl VehicleMember::~VehicleMember(VehicleMember *const this)
{
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr);
};

// Line 34: range 0000000015F4592E-0000000015F459AB
void __cdecl GadgetVehicleComp::~GadgetVehicleComp(GadgetVehicleComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetVehicleComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::string::~string(&this->transaction_);
  std::map<unsigned int,VehicleMember>::~map(&this->slot_player_map);
  std::weak_ptr<Player>::~weak_ptr(&this->owner_player_wtr);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 34: range 0000000015F459AC-0000000015F459D6
void __cdecl GadgetVehicleComp::~GadgetVehicleComp(GadgetVehicleComp *const this)
{
  GadgetVehicleComp::~GadgetVehicleComp(this);
  operator delete(this, 0x80uLL);
};

// Line 57: range 0000000015193E92-0000000015193EE0
PlayerPtr __cdecl GadgetVehicleComp::getOwnerPlayer(const GadgetVehicleComp *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

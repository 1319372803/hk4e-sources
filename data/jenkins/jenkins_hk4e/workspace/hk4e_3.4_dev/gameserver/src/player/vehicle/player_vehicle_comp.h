// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/vehicle/player_vehicle_comp.h

// Line 20: range 0000000017B8DC5A-0000000017B8DCB7
void __cdecl PlayerVehicleComp::~PlayerVehicleComp(PlayerVehicleComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerVehicleComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::weak_ptr<Gadget>::~weak_ptr(&this->cur_vehicle_wtr_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 20: range 0000000017B8DCB8-0000000017B8DCE2
void __cdecl PlayerVehicleComp::~PlayerVehicleComp(PlayerVehicleComp *const this)
{
  PlayerVehicleComp::~PlayerVehicleComp(this);
  operator delete(this, 0x50uLL);
};

// Line 23: range 0000000017212A49-0000000017212A53
uint32_t __cdecl PlayerVehicleComp::getType()
{
  return 58;
};

// Line 26: range 000000001748C7EA-000000001748C8C8
void __cdecl ZN17PlayerVehicleCompCI214PlayerCompBaseER6Player(PlayerVehicleComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerVehicleComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::weak_ptr<Gadget>::weak_ptr(&this->cur_vehicle_wtr_);
  Vector3::Vector3(&this->before_valid_pos_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->before_valid_rot_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_create_vehicle_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_create_vehicle_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_create_vehicle_time_, a2, (_BYTE)this + 72);
  }
  this->last_create_vehicle_time_ = 0;
};

// Line 39: range 000000001385B4E0-000000001385B52E
GadgetPtr __cdecl PlayerVehicleComp::getCurVehicle(const PlayerVehicleComp *const this)
{
  __int64 v1; // rsi
  GadgetPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)this);
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 58: range 0000000015193EE2-0000000015193F29
uint32_t __cdecl PlayerVehicleComp::getLastCreateVehicleTime(const PlayerVehicleComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_create_vehicle_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_create_vehicle_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_create_vehicle_time_);
  }
  return this->last_create_vehicle_time_;
};

// Line 58: range 0000000015193F2A-0000000015193F78
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerVehicleComp::setLastCreateVehicleTime(
        PlayerVehicleComp *const this,
        uint32_t last_create_vehicle_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_create_vehicle_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_create_vehicle_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_create_vehicle_time_, *(_QWORD *)&last_create_vehicle_time__out, (_BYTE)this + 72);
  }
  this->last_create_vehicle_time_ = last_create_vehicle_time__out;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_env_animal_comp.h

// Line 18: range 0000000017888316-0000000017888373
void __cdecl GadgetEnvAnimalComp::~GadgetEnvAnimalComp(GadgetEnvAnimalComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetEnvAnimalComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->update_timer_ptr_);
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 18: range 0000000017888374-000000001788839E
void __cdecl GadgetEnvAnimalComp::~GadgetEnvAnimalComp(GadgetEnvAnimalComp *const this)
{
  GadgetEnvAnimalComp::~GadgetEnvAnimalComp(this);
  operator delete(this, 0x38uLL);
};

// Line 26: range 0000000016819840-00000000168199EE
void __cdecl ZN19GadgetEnvAnimalCompCI214GadgetCompBaseER6Gadget(GadgetEnvAnimalComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, a2);
  v2 = (int (**)(...))(&`vtable for'GadgetEnvAnimalComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->far_away_start_time_);
  }
  this->far_away_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->escape_start_time_);
  }
  this->escape_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->escape_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->escape_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->escape_num_);
  }
  this->escape_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->disappear_time_);
  }
  this->disappear_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->zone_index_);
  }
  this->zone_index_ = 0;
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->update_timer_ptr_);
};

// Line 34: range 0000000017632EC4-0000000017632ED2
proto::InteractType __cdecl GadgetEnvAnimalComp::getInteractType(const GadgetEnvAnimalComp *const this)
{
  return 13;
};

// Line 38: range 0000000015D38600-0000000015D3864D
void __cdecl GadgetEnvAnimalComp::setEscapeTime(GadgetEnvAnimalComp *const this, uint32_t num)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->escape_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->escape_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->escape_num_);
  }
  this->escape_num_ = num;
};

// Line 40: range 0000000015D3864E-0000000015D3869B
void __cdecl GadgetEnvAnimalComp::setZoneIndex(GadgetEnvAnimalComp *const this, uint32_t zone_index)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->zone_index_);
  }
  this->zone_index_ = zone_index;
};

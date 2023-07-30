// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gear_comp.h

// Line 19: range 0000000014839006-0000000014839063
void __cdecl GearComp::~GearComp(GearComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GearComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->update_timer_ptr_);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 19: range 0000000014839064-000000001483908E
void __cdecl GearComp::~GearComp(GearComp *const this)
{
  GearComp::~GearComp(this);
  operator delete(this, 0x40uLL);
};

// Line 25: range 0000000016818A46-0000000016818CBE
void __cdecl ZN8GearCompCI214GadgetCompBaseER6Gadget(GearComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  GadgetCompBase::GadgetCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GearComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_elem_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_elem_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_elem_type_);
  }
  this->start_elem_type_ = None_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_elem_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_elem_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_elem_type_);
  }
  this->stop_elem_type_ = None_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_start_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_start_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_start_value_);
  }
  this->max_start_value_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_stop_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_stop_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_stop_value_);
  }
  this->max_stop_value_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_last_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_last_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_last_time_);
  }
  this->start_last_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_last_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_last_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_last_time_);
  }
  this->stop_last_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_value_);
  }
  this->start_value_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_value_);
  }
  this->stop_value_ = 0;
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->update_timer_ptr_);
};

// Line 33: range 00000000149EC450-00000000149EC49D
void __cdecl GearComp::setMaxStartValue(GearComp *const this, uint32_t max_start)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_start_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_start_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_start_value_);
  }
  this->max_start_value_ = max_start;
};

// Line 36: range 00000000149EC49E-00000000149EC4F3
void __cdecl GearComp::setMaxStopValue(GearComp *const this, uint32_t max_stop)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_stop_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_stop_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_stop_value_);
  }
  this->max_stop_value_ = max_stop;
};

// Line 39: range 00000000149EC4F4-00000000149EC541
void __cdecl GearComp::setStartLastTime(GearComp *const this, uint32_t start_last)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_last_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_last_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_last_time_);
  }
  this->start_last_time_ = start_last;
};

// Line 42: range 00000000149EC542-00000000149EC597
void __cdecl GearComp::setStopLastTime(GearComp *const this, uint32_t stop_last)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_last_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_last_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_last_time_);
  }
  this->stop_last_time_ = stop_last;
};

// Line 47: range 00000000149EC598-00000000149EC5DF
uint32_t __cdecl GearComp::getStartValue(const GearComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->start_value_;
};

// Line 51: range 00000000149EC5E0-00000000149EC62F
uint32_t __cdecl GearComp::getStopValue(const GearComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->stop_value_;
};

// Line 53: range 000000001460E6D2-000000001460E6E0
int32_t __cdecl GearComp::revertInitState(GearComp *const this)
{
  return 0;
};

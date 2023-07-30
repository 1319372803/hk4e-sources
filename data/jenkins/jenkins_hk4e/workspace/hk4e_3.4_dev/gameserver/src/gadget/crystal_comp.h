// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/crystal_comp.h

// Line 19: range 000000001361150E-000000001361157B
void __cdecl CrystalComp::~CrystalComp(CrystalComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CrystalComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->update_timer_ptr_);
  std::vector<unsigned int>::~vector(&this->resonate_level_vec_);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 19: range 000000001361157C-00000000136115A6
void __cdecl CrystalComp::~CrystalComp(CrystalComp *const this)
{
  CrystalComp::~CrystalComp(this);
  operator delete(this, 0x58uLL);
};

// Line 25: range 0000000016818ED0-0000000016819112
void __cdecl ZN11CrystalCompCI214GadgetCompBaseER6Gadget(CrystalComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  GadgetCompBase::GadgetCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'CrystalComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gain_speed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gain_speed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gain_speed_);
  }
  this->gain_speed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drain_speed_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drain_speed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drain_speed_);
  }
  this->drain_speed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->burst_resonate_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->burst_resonate_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->burst_resonate_);
  }
  this->burst_resonate_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->burst_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->burst_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->burst_time_);
  }
  this->burst_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->respawn_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->respawn_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->respawn_time_);
  }
  this->respawn_time_ = 0;
  std::vector<unsigned int>::vector(&this->resonate_level_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->elem_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elem_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->elem_type_);
  }
  this->elem_type_ = None_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->resonate_val_);
  }
  this->resonate_val_ = 0;
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->update_timer_ptr_);
};

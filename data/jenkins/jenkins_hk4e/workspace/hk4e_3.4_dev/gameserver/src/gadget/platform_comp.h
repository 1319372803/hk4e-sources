// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/platform_comp.h

// Line 32: range 0000000014838BC0-0000000014838C2D
void __cdecl PlatformComp::~PlatformComp(PlatformComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlatformComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->event_timer_ptr_);
  std::shared_ptr<PlatformRoute>::~shared_ptr(&this->route_ptr_);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 32: range 0000000014838C2E-0000000014838C58
void __cdecl PlatformComp::~PlatformComp(PlatformComp *const this)
{
  PlatformComp::~PlatformComp(this);
  operator delete(this, 0xC0uLL);
};

// Line 63: range 00000000149ED8FE-00000000149ED945
uint32_t __cdecl PlatformComp::getRouteId(const PlatformComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->route_id_;
};

// Line 128: range 00000000149ED946-00000000149ED995
proto::MovingPlatformType __cdecl PlatformComp::getMovingPlatformType(const PlatformComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->moving_platform_type_;
};

// Line 128: range 00000000149ED996-00000000149ED9DD
uint32_t __cdecl PlatformComp::getPointArrayId(const PlatformComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->point_array_id_;
};

// Line 137: range 00000000149ED9DE-00000000149EDA2D
uint32_t __cdecl PlatformComp::getPointId(const PlatformComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->point_id_;
};

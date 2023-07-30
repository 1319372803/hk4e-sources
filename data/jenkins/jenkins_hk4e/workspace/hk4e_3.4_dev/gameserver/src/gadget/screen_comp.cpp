// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/screen_comp.cpp

// Line 18: range 0000000015CBF8A0-0000000015CBF9F9
void __cdecl ScreenComp::ScreenComp(ScreenComp *const this, Gadget *gadget, const ScreenParam *param)
{
  int (**v3)(...); // rdx
  uint32_t live_id; // ecx
  uint32_t projector_entity_id; // ecx

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'ScreenComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  live_id = param->live_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->live_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->live_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->live_id_);
  }
  this->live_id_ = live_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->projector_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->projector_entity_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  projector_entity_id = param->projector_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->projector_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->projector_entity_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->projector_entity_id_);
  }
  this->projector_entity_id_ = projector_entity_id;
};

// Line 23: range 0000000015CBF9FA-0000000015CBFAB8
int32_t __cdecl ScreenComp::toClient(const ScreenComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  proto::ScreenInfo *screen_info; // [rsp+18h] [rbp-8h]

  screen_info = proto::SceneGadgetInfo::mutable_screen_info(gadget_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->live_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->live_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ScreenInfo::set_live_id(screen_info, this->live_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->projector_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->projector_entity_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ScreenInfo::set_projector_entity_id(screen_info, this->projector_entity_id_);
  return 0;
};

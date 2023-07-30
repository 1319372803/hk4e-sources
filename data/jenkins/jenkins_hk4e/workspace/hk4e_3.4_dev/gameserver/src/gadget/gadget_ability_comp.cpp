// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_ability_comp.cpp

// Line 17: range 0000000017536BF2-0000000017536DCD
void __cdecl GadgetAbilityComp::GadgetAbilityComp(
        GadgetAbilityComp *const this,
        Gadget *gadget,
        const AbilityGadgetParam *param)
{
  int (**v3)(...); // rdx
  uint32_t camp_id; // ecx
  data::TargetType camp_target_type; // ecx
  uint32_t target_entity_id; // ecx

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'GadgetAbilityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&param->camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->camp_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  camp_id = param->camp_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_id_);
  }
  this->camp_id_ = camp_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->camp_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->camp_target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  camp_target_type = param->camp_target_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_taregt_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_taregt_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_taregt_type_);
  }
  this->camp_taregt_type_ = camp_target_type;
  if ( *(_BYTE *)(((unsigned __int64)&param->target_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  target_entity_id = param->target_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_entity_id_);
  }
  this->target_entity_id_ = target_entity_id;
};

// Line 22: range 0000000017536DCE-0000000017536ED6
int32_t __cdecl GadgetAbilityComp::toClient(const GadgetAbilityComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  proto::AbilityGadgetInfo *ability_gadget; // [rsp+18h] [rbp-8h]

  ability_gadget = proto::SceneGadgetInfo::mutable_ability_gadget(gadget_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::AbilityGadgetInfo::set_camp_id(ability_gadget, this->camp_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_taregt_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_taregt_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AbilityGadgetInfo::set_camp_target_type(ability_gadget, this->camp_taregt_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::AbilityGadgetInfo::set_target_entity_id(ability_gadget, this->target_entity_id_);
  return 0;
};

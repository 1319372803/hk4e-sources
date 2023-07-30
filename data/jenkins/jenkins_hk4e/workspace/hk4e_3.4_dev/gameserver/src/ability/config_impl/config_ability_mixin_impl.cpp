// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_ability_mixin_impl.cpp

// Line 18: range 0000000015592E5E-0000000015592EF0
BaseAbilityMixinPtr __cdecl DebugMixinImpl::createAbilityMixin(DebugMixinImpl *const this, MixinParam *param)
{
  std::shared_ptr<DebugMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<DebugMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  DebugMixinImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<DebugMixinImpl>(&p);
  common::tools::perf::make_shared<AbilityDebugMixin,std::shared_ptr<DebugMixinImpl>,MixinParam &>(
    (std::shared_ptr<DebugMixinImpl> *)&p._M_weak_this._M_refcount,
    (MixinParam *)&p,
    parama,
    (MixinParam *)&p);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityDebugMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityDebugMixin> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<AbilityDebugMixin>::~shared_ptr((std::shared_ptr<AbilityDebugMixin> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<DebugMixinImpl>::~shared_ptr((std::shared_ptr<DebugMixinImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 23: range 0000000015592EF2-0000000015592F84
BaseAbilityMixinPtr __cdecl AvatarSteerByCameraMixinImpl::createAbilityMixin(
        AvatarSteerByCameraMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<AvatarSteerByCameraMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<AvatarSteerByCameraMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<AvatarSteerByCameraMixinImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  MixinParam __args_1_16; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<AvatarSteerByCameraMixinImpl>((AvatarSteerByCameraMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityAvatarSteerByCameraMixin,std::shared_ptr<AvatarSteerByCameraMixinImpl>,MixinParam &>(
    (std::shared_ptr<AvatarSteerByCameraMixinImpl> *)&__args_1_16,
    (MixinParam *)&__args_1,
    parama,
    (MixinParam *)&__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityAvatarSteerByCameraMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityAvatarSteerByCameraMixin> *)&__args_1_16);
  std::shared_ptr<AbilityAvatarSteerByCameraMixin>::~shared_ptr((std::shared_ptr<AbilityAvatarSteerByCameraMixin> *const)&__args_1_16);
  std::shared_ptr<AvatarSteerByCameraMixinImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 28: range 0000000015592F86-0000000015593018
BaseAbilityMixinPtr __cdecl CostStaminaMixinImpl::createAbilityMixin(
        CostStaminaMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<CostStaminaMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<CostStaminaMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<CostStaminaMixinImpl>((CostStaminaMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityCostStaminaMixin,std::shared_ptr<CostStaminaMixinImpl>,MixinParam &>(
    (std::shared_ptr<CostStaminaMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityCostStaminaMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityCostStaminaMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityCostStaminaMixin>::~shared_ptr((std::shared_ptr<AbilityCostStaminaMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<CostStaminaMixinImpl>::~shared_ptr((std::shared_ptr<CostStaminaMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 33: range 000000001559301A-00000000155930AC
BaseAbilityMixinPtr __cdecl ReviveElemEnergyMixinImpl::createAbilityMixin(
        ReviveElemEnergyMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ReviveElemEnergyMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ReviveElemEnergyMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ReviveElemEnergyMixinImpl>((ReviveElemEnergyMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityReviveElemEnergyMixin,std::shared_ptr<ReviveElemEnergyMixinImpl>,MixinParam &>(
    (std::shared_ptr<ReviveElemEnergyMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityReviveElemEnergyMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityReviveElemEnergyMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityReviveElemEnergyMixin>::~shared_ptr((std::shared_ptr<AbilityReviveElemEnergyMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ReviveElemEnergyMixinImpl>::~shared_ptr((std::shared_ptr<ReviveElemEnergyMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 38: range 00000000155930AE-0000000015593140
BaseAbilityMixinPtr __cdecl ElementShieldMixinImpl::createAbilityMixin(
        ElementShieldMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ElementShieldMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ElementShieldMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ElementShieldMixinImpl>((ElementShieldMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityElementShieldMixin,std::shared_ptr<ElementShieldMixinImpl>,MixinParam &>(
    (std::shared_ptr<ElementShieldMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityElementShieldMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityElementShieldMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityElementShieldMixin>::~shared_ptr((std::shared_ptr<AbilityElementShieldMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ElementShieldMixinImpl>::~shared_ptr((std::shared_ptr<ElementShieldMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 43: range 0000000015593142-00000000155931D4
BaseAbilityMixinPtr __cdecl EliteShieldMixinImpl::createAbilityMixin(
        EliteShieldMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<EliteShieldMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<EliteShieldMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<EliteShieldMixinImpl>((EliteShieldMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityEliteShieldMixin,std::shared_ptr<EliteShieldMixinImpl>,MixinParam &>(
    (std::shared_ptr<EliteShieldMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityEliteShieldMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityEliteShieldMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityEliteShieldMixin>::~shared_ptr((std::shared_ptr<AbilityEliteShieldMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<EliteShieldMixinImpl>::~shared_ptr((std::shared_ptr<EliteShieldMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 48: range 00000000155931D6-0000000015593268
BaseAbilityMixinPtr __cdecl GlobalMainShieldMixinImpl::createAbilityMixin(
        GlobalMainShieldMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<GlobalMainShieldMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<GlobalMainShieldMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<GlobalMainShieldMixinImpl>((GlobalMainShieldMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityGlobalMainShieldMixin,std::shared_ptr<GlobalMainShieldMixinImpl>,MixinParam &>(
    (std::shared_ptr<GlobalMainShieldMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityGlobalMainShieldMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityGlobalMainShieldMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityGlobalMainShieldMixin>::~shared_ptr((std::shared_ptr<AbilityGlobalMainShieldMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<GlobalMainShieldMixinImpl>::~shared_ptr((std::shared_ptr<GlobalMainShieldMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 53: range 000000001559326A-00000000155932FC
BaseAbilityMixinPtr __cdecl GlobalSubShieldMixinImpl::createAbilityMixin(
        GlobalSubShieldMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<GlobalSubShieldMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<GlobalSubShieldMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<GlobalSubShieldMixinImpl>((GlobalSubShieldMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityGlobalSubShieldMixin,std::shared_ptr<GlobalSubShieldMixinImpl>,MixinParam &>(
    (std::shared_ptr<GlobalSubShieldMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityGlobalSubShieldMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityGlobalSubShieldMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityGlobalSubShieldMixin>::~shared_ptr((std::shared_ptr<AbilityGlobalSubShieldMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<GlobalSubShieldMixinImpl>::~shared_ptr((std::shared_ptr<GlobalSubShieldMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 58: range 00000000155932FE-0000000015593390
BaseAbilityMixinPtr __cdecl ShieldBarMixinImpl::createAbilityMixin(ShieldBarMixinImpl *const this, MixinParam *param)
{
  std::shared_ptr<ShieldBarMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ShieldBarMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ShieldBarMixinImpl>((ShieldBarMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityShieldBarMixin,std::shared_ptr<ShieldBarMixinImpl>,MixinParam &>(
    (std::shared_ptr<ShieldBarMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityShieldBarMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityShieldBarMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityShieldBarMixin>::~shared_ptr((std::shared_ptr<AbilityShieldBarMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ShieldBarMixinImpl>::~shared_ptr((std::shared_ptr<ShieldBarMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 0000000015593392-0000000015593424
BaseAbilityMixinPtr __cdecl EntityDefenceMixinImpl::createAbilityMixin(
        EntityDefenceMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<EntityDefenceMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<EntityDefenceMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<EntityDefenceMixinImpl>((EntityDefenceMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityEntityDefenceMixin,std::shared_ptr<EntityDefenceMixinImpl>,MixinParam &>(
    (std::shared_ptr<EntityDefenceMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityEntityDefenceMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityEntityDefenceMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityEntityDefenceMixin>::~shared_ptr((std::shared_ptr<AbilityEntityDefenceMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<EntityDefenceMixinImpl>::~shared_ptr((std::shared_ptr<EntityDefenceMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 68: range 0000000015593426-00000000155934B8
BaseAbilityMixinPtr __cdecl MonsterDefendMixinImpl::createAbilityMixin(
        MonsterDefendMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<MonsterDefendMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<MonsterDefendMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<MonsterDefendMixinImpl>((MonsterDefendMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityMonsterDefendMixin,std::shared_ptr<MonsterDefendMixinImpl>,MixinParam &>(
    (std::shared_ptr<MonsterDefendMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityMonsterDefendMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityMonsterDefendMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityMonsterDefendMixin>::~shared_ptr((std::shared_ptr<AbilityMonsterDefendMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<MonsterDefendMixinImpl>::~shared_ptr((std::shared_ptr<MonsterDefendMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 73: range 00000000155934BA-000000001559354C
BaseAbilityMixinPtr __cdecl WindSeedSpawnerMixinImpl::createAbilityMixin(
        WindSeedSpawnerMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<WindSeedSpawnerMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<WindSeedSpawnerMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<WindSeedSpawnerMixinImpl>((WindSeedSpawnerMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityWindSeedSpawnerMixin,std::shared_ptr<WindSeedSpawnerMixinImpl>,MixinParam &>(
    (std::shared_ptr<WindSeedSpawnerMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityWindSeedSpawnerMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityWindSeedSpawnerMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityWindSeedSpawnerMixin>::~shared_ptr((std::shared_ptr<AbilityWindSeedSpawnerMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<WindSeedSpawnerMixinImpl>::~shared_ptr((std::shared_ptr<WindSeedSpawnerMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 78: range 000000001559354E-00000000155935E0
BaseAbilityMixinPtr __cdecl ServerCreateGadgetOnKillMixinImpl::createAbilityMixin(
        ServerCreateGadgetOnKillMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ServerCreateGadgetOnKillMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ServerCreateGadgetOnKillMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ServerCreateGadgetOnKillMixinImpl>((ServerCreateGadgetOnKillMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityServerCreateGadgetOnKillMixin,std::shared_ptr<ServerCreateGadgetOnKillMixinImpl>,MixinParam &>(
    (std::shared_ptr<ServerCreateGadgetOnKillMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityServerCreateGadgetOnKillMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityServerCreateGadgetOnKillMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityServerCreateGadgetOnKillMixin>::~shared_ptr((std::shared_ptr<AbilityServerCreateGadgetOnKillMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ServerCreateGadgetOnKillMixinImpl>::~shared_ptr((std::shared_ptr<ServerCreateGadgetOnKillMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 83: range 00000000155935E2-0000000015593674
BaseAbilityMixinPtr __cdecl ModifyDamageMixinImpl::createAbilityMixin(
        ModifyDamageMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ModifyDamageMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ModifyDamageMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ModifyDamageMixinImpl>((ModifyDamageMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityModifyDamageMixin,std::shared_ptr<ModifyDamageMixinImpl>,MixinParam &>(
    (std::shared_ptr<ModifyDamageMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityModifyDamageMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityModifyDamageMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityModifyDamageMixin>::~shared_ptr((std::shared_ptr<AbilityModifyDamageMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ModifyDamageMixinImpl>::~shared_ptr((std::shared_ptr<ModifyDamageMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 88: range 0000000015593B24-0000000015593BFD
data::ConfigAbilityActionArrayArray *__cdecl ElementHittingOtherPredicatedMixinImpl::getAllSubActions(
        data::ConfigAbilityActionArrayArray *retstr,
        ElementHittingOtherPredicatedMixinImpl *const this)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ElementHittingOtherPredicatedMixinImpl *const, std::function<void(std::any&)> *); // r12
  std::function<void(std::any&)> v5; // [rsp+10h] [rbp-30h] BYREF

  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_BaseActionContainer + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(this->_vptr_BaseActionContainer + 3);
  v3 = *(void (__fastcall **)(ElementHittingOtherPredicatedMixinImpl *const, std::function<void(std::any&)> *))v2;
  std::function<void ()(std::any &)>::function<ElementHittingOtherPredicatedMixinImpl::getAllSubActions(void)::{lambda(std::any &)#1},void,void>(
    &v5,
    (ElementHittingOtherPredicatedMixinImpl::getAllSubActions::<lambda(std::any&)>)retstr);
  v3(this, &v5);
  std::function<void ()(std::any &)>::~function(&v5);
  return retstr;
};

// Line 90: range 0000000015593676-0000000015593B23
void __cdecl ElementHittingOtherPredicatedMixinImpl::getAllSubActions(void)::{lambda(std::any &)#1}::operator()(
        const ElementHittingOtherPredicatedMixinImpl::getAllSubActions::<lambda(std::any&)> *const __closure,
        std::any *member)
{
  const std::type_info *v2; // rax
  const std::type_info *v3; // rax
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *sub_actions; // rbx
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *M_current; // r13
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *v6; // r12
  const std::type_info *v7; // rax
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *v8; // rbx
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *v9; // rdx
  const std::type_info *v10; // rax
  const std::type_info *v11; // rax
  std::allocator<std::shared_ptr<data::ConfigAbilityAction> > __a; // [rsp+17h] [rbp-99h] BYREF
  std::vector<data::ConfigAbilityStateToActions>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<data::ConfigAbilityStateToActions>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  data::ElementBatchPredicatedArray *p_array; // [rsp+28h] [rbp-88h]
  std::vector<data::ElementBatchPredicated> *__for_range_0; // [rsp+30h] [rbp-80h]
  data::ElementBatchPredicated *p; // [rsp+38h] [rbp-78h]
  data::ConfigAbilityStateToActionsArray *mixin_vec; // [rsp+40h] [rbp-70h]
  std::vector<data::ConfigAbilityStateToActions> *__for_range; // [rsp+48h] [rbp-68h]
  data::ConfigAbilityStateToActions *mixin; // [rsp+50h] [rbp-60h]
  data::ConfigAbilityActionPtr *config_action_ptr; // [rsp+58h] [rbp-58h]
  data::ConfigAbilityActionArrayArray *actions_vec; // [rsp+60h] [rbp-50h]
  data::ConfigAbilityActionArray *action_vec; // [rsp+68h] [rbp-48h]
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> v24; // [rsp+70h] [rbp-40h] BYREF

  v2 = std::any::type(member);
  if ( std::type_info::operator==(
         v2,
         (const std::type_info *)&`typeinfo for'std::vector<std::shared_ptr<data::ConfigAbilityAction>>) )
  {
    action_vec = std::any_cast<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &>(member);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::push_back(
      __closure->__sub_actions,
      action_vec);
  }
  else
  {
    v3 = std::any::type(member);
    if ( std::type_info::operator==(
           v3,
           (const std::type_info *)&`typeinfo for'std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>) )
    {
      actions_vec = std::any_cast<std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> &>(member);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      sub_actions = __closure->__sub_actions;
      M_current = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::end(actions_vec)._M_current;
      v6 = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::begin(actions_vec)._M_current;
      __for_begin._M_current = (data::ConfigAbilityStateToActions *)std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::end(__closure->__sub_actions)._M_current;
      __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>> const*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*>(
        (__gnu_cxx::__normal_iterator<const std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> > *const)&__for_end,
        (const __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> > *)&__for_begin);
      std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::insert<__gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>,void>(
        sub_actions,
        (std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::const_iterator)__for_end._M_current,
        (__gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> >)v6,
        (__gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> >)M_current);
    }
    else
    {
      v7 = std::any::type(member);
      if ( std::type_info::operator==(
             v7,
             (const std::type_info *)&`typeinfo for'std::shared_ptr<data::ConfigAbilityAction>) )
      {
        config_action_ptr = std::any_cast<std::shared_ptr<data::ConfigAbilityAction> &>(member);
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        v8 = __closure->__sub_actions;
        std::allocator<std::shared_ptr<data::ConfigAbilityAction>>::allocator(&__a);
        std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&v24, 1uLL, config_action_ptr, &__a);
        std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::emplace_back<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>(
          v8,
          &v24,
          v9);
        std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&v24);
        std::allocator<std::shared_ptr<data::ConfigAbilityAction>>::~allocator(&__a);
      }
      else
      {
        v10 = std::any::type(member);
        if ( std::type_info::operator==(
               v10,
               (const std::type_info *)&`typeinfo for'std::vector<data::ConfigAbilityStateToActions>) )
        {
          mixin_vec = std::any_cast<std::vector<data::ConfigAbilityStateToActions> &>(member);
          __for_range = mixin_vec;
          __for_begin._M_current = std::vector<data::ConfigAbilityStateToActions>::begin(mixin_vec)._M_current;
          __for_end._M_current = std::vector<data::ConfigAbilityStateToActions>::end(mixin_vec)._M_current;
          while ( __gnu_cxx::operator!=<data::ConfigAbilityStateToActions *,std::vector<data::ConfigAbilityStateToActions>>(
                    &__for_begin,
                    &__for_end) )
          {
            mixin = __gnu_cxx::__normal_iterator<data::ConfigAbilityStateToActions *,std::vector<data::ConfigAbilityStateToActions>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8(__closure);
            std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::push_back(
              __closure->__sub_actions,
              &mixin->actions);
            __gnu_cxx::__normal_iterator<data::ConfigAbilityStateToActions *,std::vector<data::ConfigAbilityStateToActions>>::operator++(&__for_begin);
          }
        }
        else
        {
          v11 = std::any::type(member);
          if ( std::type_info::operator==(
                 v11,
                 (const std::type_info *)&`typeinfo for'std::vector<data::ElementBatchPredicated>) )
          {
            p_array = std::any_cast<std::vector<data::ElementBatchPredicated> &>(member);
            __for_range_0 = p_array;
            __for_begin._M_current = (data::ConfigAbilityStateToActions *)std::vector<data::ElementBatchPredicated>::begin(p_array)._M_current;
            __for_end._M_current = (data::ConfigAbilityStateToActions *)std::vector<data::ElementBatchPredicated>::end(p_array)._M_current;
            while ( __gnu_cxx::operator!=<data::ElementBatchPredicated *,std::vector<data::ElementBatchPredicated>>(
                      (const __gnu_cxx::__normal_iterator<data::ElementBatchPredicated*,std::vector<data::ElementBatchPredicated> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<data::ElementBatchPredicated*,std::vector<data::ElementBatchPredicated> > *)&__for_end) )
            {
              p = __gnu_cxx::__normal_iterator<data::ElementBatchPredicated *,std::vector<data::ElementBatchPredicated>>::operator*((const __gnu_cxx::__normal_iterator<data::ElementBatchPredicated*,std::vector<data::ElementBatchPredicated> > *const)&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
                __asan_report_load8(__closure);
              std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::push_back(
                __closure->__sub_actions,
                &p->success_actions);
              if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
                __asan_report_load8(__closure);
              std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::push_back(
                __closure->__sub_actions,
                &p->fail_actions);
              __gnu_cxx::__normal_iterator<data::ElementBatchPredicated *,std::vector<data::ElementBatchPredicated>>::operator++((__gnu_cxx::__normal_iterator<data::ElementBatchPredicated*,std::vector<data::ElementBatchPredicated> > *const)&__for_begin);
            }
          }
        }
      }
    }
  }
};

// Line 129: range 0000000015593BFE-0000000015593C90
BaseAbilityMixinPtr __cdecl ResistClimateMixinImpl::createAbilityMixin(
        ResistClimateMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ResistClimateMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ResistClimateMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ResistClimateMixinImpl>((ResistClimateMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityResistClimateMixin,std::shared_ptr<ResistClimateMixinImpl>,MixinParam &>(
    (std::shared_ptr<ResistClimateMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityResistClimateMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityResistClimateMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityResistClimateMixin>::~shared_ptr((std::shared_ptr<AbilityResistClimateMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ResistClimateMixinImpl>::~shared_ptr((std::shared_ptr<ResistClimateMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 134: range 0000000015593C92-0000000015593D24
BaseAbilityMixinPtr __cdecl ModifySkillCDByModifierCountMixinImpl::createAbilityMixin(
        ModifySkillCDByModifierCountMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ModifySkillCDByModifierCountMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ModifySkillCDByModifierCountMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ModifySkillCDByModifierCountMixinImpl>((ModifySkillCDByModifierCountMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityModifySkillCDByModifierCountMixin,std::shared_ptr<ModifySkillCDByModifierCountMixinImpl>,MixinParam &>(
    (std::shared_ptr<ModifySkillCDByModifierCountMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityModifySkillCDByModifierCountMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityModifySkillCDByModifierCountMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityModifySkillCDByModifierCountMixin>::~shared_ptr((std::shared_ptr<AbilityModifySkillCDByModifierCountMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ModifySkillCDByModifierCountMixinImpl>::~shared_ptr((std::shared_ptr<ModifySkillCDByModifierCountMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 139: range 0000000015593D26-0000000015593DB8
BaseAbilityMixinPtr __cdecl ServerFinishWatcherMixinImpl::createAbilityMixin(
        ServerFinishWatcherMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ServerFinishWatcherMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ServerFinishWatcherMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ServerFinishWatcherMixinImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  MixinParam __args_1_16; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ServerFinishWatcherMixinImpl>((ServerFinishWatcherMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityServerFinishWatcherMixin,std::shared_ptr<ServerFinishWatcherMixinImpl>,MixinParam &>(
    (std::shared_ptr<ServerFinishWatcherMixinImpl> *)&__args_1_16,
    (MixinParam *)&__args_1,
    parama,
    (MixinParam *)&__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityServerFinishWatcherMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityServerFinishWatcherMixin> *)&__args_1_16);
  std::shared_ptr<AbilityServerFinishWatcherMixin>::~shared_ptr((std::shared_ptr<AbilityServerFinishWatcherMixin> *const)&__args_1_16);
  std::shared_ptr<ServerFinishWatcherMixinImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 144: range 0000000015593DBA-0000000015593E4C
BaseAbilityMixinPtr __cdecl MoveStateMixinImpl::createAbilityMixin(MoveStateMixinImpl *const this, MixinParam *param)
{
  std::shared_ptr<MoveStateMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<MoveStateMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MoveStateMixinImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<MoveStateMixinImpl>(&p);
  common::tools::perf::make_shared<AbilityMoveStateMixin,std::shared_ptr<MoveStateMixinImpl>,MixinParam &>(
    (std::shared_ptr<MoveStateMixinImpl> *)&p._M_weak_this._M_refcount,
    (MixinParam *)&p,
    parama,
    (MixinParam *)&p);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityMoveStateMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityMoveStateMixin> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<AbilityMoveStateMixin>::~shared_ptr((std::shared_ptr<AbilityMoveStateMixin> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<MoveStateMixinImpl>::~shared_ptr((std::shared_ptr<MoveStateMixinImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 149: range 0000000015593E4E-0000000015593EE0
BaseAbilityMixinPtr __cdecl FieldEntityCountChangeMixinImpl::createAbilityMixin(
        FieldEntityCountChangeMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<FieldEntityCountChangeMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<FieldEntityCountChangeMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<FieldEntityCountChangeMixinImpl>((FieldEntityCountChangeMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityFieldEntityCountChangeMixin,std::shared_ptr<FieldEntityCountChangeMixinImpl>,MixinParam &>(
    (std::shared_ptr<FieldEntityCountChangeMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityFieldEntityCountChangeMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityFieldEntityCountChangeMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityFieldEntityCountChangeMixin>::~shared_ptr((std::shared_ptr<AbilityFieldEntityCountChangeMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<FieldEntityCountChangeMixinImpl>::~shared_ptr((std::shared_ptr<FieldEntityCountChangeMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 154: range 0000000015593EE2-0000000015593F74
BaseAbilityMixinPtr __cdecl ScenePropSyncMixinImpl::createAbilityMixin(
        ScenePropSyncMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ScenePropSyncMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ScenePropSyncMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ScenePropSyncMixinImpl>((ScenePropSyncMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityScenePropSyncMixin,std::shared_ptr<ScenePropSyncMixinImpl>,MixinParam &>(
    (std::shared_ptr<ScenePropSyncMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityScenePropSyncMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityScenePropSyncMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityScenePropSyncMixin>::~shared_ptr((std::shared_ptr<AbilityScenePropSyncMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ScenePropSyncMixinImpl>::~shared_ptr((std::shared_ptr<ScenePropSyncMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 159: range 0000000015593F76-0000000015594008
BaseAbilityMixinPtr __cdecl ClampDamageReceivedMixinImpl::createAbilityMixin(
        ClampDamageReceivedMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ClampDamageReceivedMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ClampDamageReceivedMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ClampDamageReceivedMixinImpl>((ClampDamageReceivedMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityClampDamageReceivedMixin,std::shared_ptr<ClampDamageReceivedMixinImpl>,MixinParam &>(
    (std::shared_ptr<ClampDamageReceivedMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityClampDamageReceivedMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityClampDamageReceivedMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityClampDamageReceivedMixin>::~shared_ptr((std::shared_ptr<AbilityClampDamageReceivedMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ClampDamageReceivedMixinImpl>::~shared_ptr((std::shared_ptr<ClampDamageReceivedMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 164: range 000000001559400A-000000001559409C
BaseAbilityMixinPtr __cdecl DoActionBySelfModifierElementDurabilityRatioMixinImpl::createAbilityMixin(
        DoActionBySelfModifierElementDurabilityRatioMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<DoActionBySelfModifierElementDurabilityRatioMixinImpl>((DoActionBySelfModifierElementDurabilityRatioMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityDoActionBySelfModifierElementDurabilityRatioMixin,std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl>,MixinParam &>(
    (std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityDoActionBySelfModifierElementDurabilityRatioMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityDoActionBySelfModifierElementDurabilityRatioMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityDoActionBySelfModifierElementDurabilityRatioMixin>::~shared_ptr((std::shared_ptr<AbilityDoActionBySelfModifierElementDurabilityRatioMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl>::~shared_ptr((std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 169: range 000000001559409E-0000000015594130
BaseAbilityMixinPtr __cdecl FireworksLauncherMixinImpl::createAbilityMixin(
        FireworksLauncherMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<FireworksLauncherMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<FireworksLauncherMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<FireworksLauncherMixinImpl>((FireworksLauncherMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityFireworksLauncherMixin,std::shared_ptr<FireworksLauncherMixinImpl>,MixinParam &>(
    (std::shared_ptr<FireworksLauncherMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityFireworksLauncherMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityFireworksLauncherMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityFireworksLauncherMixin>::~shared_ptr((std::shared_ptr<AbilityFireworksLauncherMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<FireworksLauncherMixinImpl>::~shared_ptr((std::shared_ptr<FireworksLauncherMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 174: range 0000000015594132-00000000155941C4
BaseAbilityMixinPtr __cdecl ModifyDamageCountMixinImpl::createAbilityMixin(
        ModifyDamageCountMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ModifyDamageCountMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ModifyDamageCountMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ModifyDamageCountMixinImpl>((ModifyDamageCountMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityModifyDamageCountMixin,std::shared_ptr<ModifyDamageCountMixinImpl>,MixinParam &>(
    (std::shared_ptr<ModifyDamageCountMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityModifyDamageCountMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityModifyDamageCountMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityModifyDamageCountMixin>::~shared_ptr((std::shared_ptr<AbilityModifyDamageCountMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ModifyDamageCountMixinImpl>::~shared_ptr((std::shared_ptr<ModifyDamageCountMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 179: range 00000000155941C6-0000000015594258
BaseAbilityMixinPtr __cdecl ModifyBeHitDamageMixinImpl::createAbilityMixin(
        ModifyBeHitDamageMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<ModifyBeHitDamageMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<ModifyBeHitDamageMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ModifyBeHitDamageMixinImpl>((ModifyBeHitDamageMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityModifyBeHitDamageMixin,std::shared_ptr<ModifyBeHitDamageMixinImpl>,MixinParam &>(
    (std::shared_ptr<ModifyBeHitDamageMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityModifyBeHitDamageMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityModifyBeHitDamageMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityModifyBeHitDamageMixin>::~shared_ptr((std::shared_ptr<AbilityModifyBeHitDamageMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<ModifyBeHitDamageMixinImpl>::~shared_ptr((std::shared_ptr<ModifyBeHitDamageMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 184: range 000000001559425A-00000000155942EC
BaseAbilityMixinPtr __cdecl DamageStatisticsMixinImpl::createAbilityMixin(
        DamageStatisticsMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<DamageStatisticsMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<DamageStatisticsMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<DamageStatisticsMixinImpl>((DamageStatisticsMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityDamageStatisticsMixin,std::shared_ptr<DamageStatisticsMixinImpl>,MixinParam &>(
    (std::shared_ptr<DamageStatisticsMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityDamageStatisticsMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityDamageStatisticsMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityDamageStatisticsMixin>::~shared_ptr((std::shared_ptr<AbilityDamageStatisticsMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<DamageStatisticsMixinImpl>::~shared_ptr((std::shared_ptr<DamageStatisticsMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 189: range 00000000155942EE-0000000015594380
BaseAbilityMixinPtr __cdecl UGCTimeControlMixinImpl::createAbilityMixin(
        UGCTimeControlMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<UGCTimeControlMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<UGCTimeControlMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  UGCTimeControlMixinImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<UGCTimeControlMixinImpl>(&p);
  common::tools::perf::make_shared<AbilityUGCTimeControlMixin,std::shared_ptr<UGCTimeControlMixinImpl>,MixinParam &>(
    (std::shared_ptr<UGCTimeControlMixinImpl> *)&p._M_weak_this._M_refcount,
    (MixinParam *)&p,
    parama,
    (MixinParam *)&p);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityUGCTimeControlMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityUGCTimeControlMixin> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<AbilityUGCTimeControlMixin>::~shared_ptr((std::shared_ptr<AbilityUGCTimeControlMixin> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<UGCTimeControlMixinImpl>::~shared_ptr((std::shared_ptr<UGCTimeControlMixinImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 194: range 0000000015594382-0000000015594414
BaseAbilityMixinPtr __cdecl AvatarCombatMixinImpl::createAbilityMixin(
        AvatarCombatMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<AvatarCombatMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<AvatarCombatMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<AvatarCombatMixinImpl>((AvatarCombatMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityAvatarCombatMixin,std::shared_ptr<AvatarCombatMixinImpl>,MixinParam &>(
    (std::shared_ptr<AvatarCombatMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityAvatarCombatMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityAvatarCombatMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityAvatarCombatMixin>::~shared_ptr((std::shared_ptr<AbilityAvatarCombatMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<AvatarCombatMixinImpl>::~shared_ptr((std::shared_ptr<AvatarCombatMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 199: range 0000000015594416-00000000155944A8
BaseAbilityMixinPtr __cdecl DeathZoneRegionalPlayMixinImpl::createAbilityMixin(
        DeathZoneRegionalPlayMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<DeathZoneRegionalPlayMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<DeathZoneRegionalPlayMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  DeathZoneRegionalPlayMixinImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<DeathZoneRegionalPlayMixinImpl>(&p);
  common::tools::perf::make_shared<AbilityDeathZoneRegionalPlayMixin,std::shared_ptr<DeathZoneRegionalPlayMixinImpl>,MixinParam &>(
    (std::shared_ptr<DeathZoneRegionalPlayMixinImpl> *)&p._M_weak_this._M_refcount,
    (MixinParam *)&p,
    parama,
    (MixinParam *)&p);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityDeathZoneRegionalPlayMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityDeathZoneRegionalPlayMixin> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<AbilityDeathZoneRegionalPlayMixin>::~shared_ptr((std::shared_ptr<AbilityDeathZoneRegionalPlayMixin> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<DeathZoneRegionalPlayMixinImpl>::~shared_ptr((std::shared_ptr<DeathZoneRegionalPlayMixinImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 204: range 00000000155944AA-000000001559453C
BaseAbilityMixinPtr __cdecl EraseBrickActivityMixinImpl::createAbilityMixin(
        EraseBrickActivityMixinImpl *const this,
        MixinParam *param)
{
  std::shared_ptr<EraseBrickActivityMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<EraseBrickActivityMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<EraseBrickActivityMixinImpl>((EraseBrickActivityMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityEraseBrickActivityMixin,std::shared_ptr<EraseBrickActivityMixinImpl>,MixinParam &>(
    (std::shared_ptr<EraseBrickActivityMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityEraseBrickActivityMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityEraseBrickActivityMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityEraseBrickActivityMixin>::~shared_ptr((std::shared_ptr<AbilityEraseBrickActivityMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<EraseBrickActivityMixinImpl>::~shared_ptr((std::shared_ptr<EraseBrickActivityMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 209: range 000000001559453E-00000000155945D0
BaseAbilityMixinPtr __cdecl BreakoutMixinImpl::createAbilityMixin(BreakoutMixinImpl *const this, MixinParam *param)
{
  std::shared_ptr<BreakoutMixinImpl> *v2; // rdx
  BaseAbilityMixinPtr result; // rax
  std::shared_ptr<BreakoutMixinImpl> *parama; // [rsp+8h] [rbp-48h]
  MixinParam __args_1; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<BreakoutMixinImpl>((BreakoutMixinImpl *)&__args_1);
  common::tools::perf::make_shared<AbilityBreakoutMixin,std::shared_ptr<BreakoutMixinImpl>,MixinParam &>(
    (std::shared_ptr<BreakoutMixinImpl> *)&__args_1.modifier_ptr,
    &__args_1,
    parama,
    &__args_1);
  std::shared_ptr<BaseAbilityMixin>::shared_ptr<AbilityBreakoutMixin,void>(
    (std::shared_ptr<BaseAbilityMixin> *const)this,
    (std::shared_ptr<AbilityBreakoutMixin> *)&__args_1.modifier_ptr);
  std::shared_ptr<AbilityBreakoutMixin>::~shared_ptr((std::shared_ptr<AbilityBreakoutMixin> *const)&__args_1.modifier_ptr);
  std::shared_ptr<BreakoutMixinImpl>::~shared_ptr((std::shared_ptr<BreakoutMixinImpl> *const)&__args_1);
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

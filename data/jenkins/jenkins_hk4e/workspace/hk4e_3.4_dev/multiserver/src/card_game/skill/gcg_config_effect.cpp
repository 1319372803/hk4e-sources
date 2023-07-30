// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_config_effect.cpp

// Line 21: range 000000000D7C061C-000000000D7C06AE
GCGEffectBasePtr __cdecl ConfigGCGExecEffectDamageImpl::createEffect(
        ConfigGCGExecEffectDamageImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectDamageImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectDamageImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectDamageImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectDamageImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectDamageImpl>((ConfigGCGExecEffectDamageImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectDamage,std::shared_ptr<ConfigGCGExecEffectDamageImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectDamage,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectDamage> *)&v6);
  std::shared_ptr<GCGExecEffectDamage>::~shared_ptr((std::shared_ptr<GCGExecEffectDamage> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectDamageImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 26: range 000000000D7C06B0-000000000D7C0742
GCGEffectBasePtr __cdecl ConfigGCGExecEffectCreateCardImpl::createEffect(
        ConfigGCGExecEffectCreateCardImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectCreateCardImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectCreateCardImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectCreateCardImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectCreateCardImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectCreateCardImpl>((ConfigGCGExecEffectCreateCardImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectCreateCard,std::shared_ptr<ConfigGCGExecEffectCreateCardImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectCreateCard,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectCreateCard> *)&v6);
  std::shared_ptr<GCGExecEffectCreateCard>::~shared_ptr((std::shared_ptr<GCGExecEffectCreateCard> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectCreateCardImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 31: range 000000000D7C0744-000000000D7C07D6
GCGEffectBasePtr __cdecl ConfigGCGExecEffectCreateModifyCardImpl::createEffect(
        ConfigGCGExecEffectCreateModifyCardImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectCreateModifyCardImpl>((ConfigGCGExecEffectCreateModifyCardImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectCreateModifyCard,std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectCreateModifyCard,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectCreateModifyCard> *)&v6);
  std::shared_ptr<GCGExecEffectCreateModifyCard>::~shared_ptr((std::shared_ptr<GCGExecEffectCreateModifyCard> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 36: range 000000000D7C07D8-000000000D7C086A
GCGEffectBasePtr __cdecl ConfigGCGExecEffectGenDiceImpl::createEffect(
        ConfigGCGExecEffectGenDiceImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectGenDiceImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectGenDiceImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectGenDiceImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectGenDiceImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectGenDiceImpl>((ConfigGCGExecEffectGenDiceImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectGenDice,std::shared_ptr<ConfigGCGExecEffectGenDiceImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectGenDice,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectGenDice> *)&v6);
  std::shared_ptr<GCGExecEffectGenDice>::~shared_ptr((std::shared_ptr<GCGExecEffectGenDice> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectGenDiceImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 41: range 000000000D7C086C-000000000D7C08FE
GCGEffectBasePtr __cdecl ConfigGCGExecEffectChangeCardVarImpl::createEffect(
        ConfigGCGExecEffectChangeCardVarImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectChangeCardVarImpl>((ConfigGCGExecEffectChangeCardVarImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectChangeCardVar,std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectChangeCardVar,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectChangeCardVar> *)&v6);
  std::shared_ptr<GCGExecEffectChangeCardVar>::~shared_ptr((std::shared_ptr<GCGExecEffectChangeCardVar> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 46: range 000000000D7C0900-000000000D7C0992
GCGEffectBasePtr __cdecl ConfigGCGExecEffectDamageReviseImpl::createEffect(
        ConfigGCGExecEffectDamageReviseImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectDamageReviseImpl>((ConfigGCGExecEffectDamageReviseImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectDamageRevise,std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectDamageRevise,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectDamageRevise> *)&v6);
  std::shared_ptr<GCGExecEffectDamageRevise>::~shared_ptr((std::shared_ptr<GCGExecEffectDamageRevise> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 51: range 000000000D7C0994-000000000D7C0A26
GCGEffectBasePtr __cdecl ConfigGCGEffectFixRerollDiceToSpecialTypeImpl::createEffect(
        ConfigGCGEffectFixRerollDiceToSpecialTypeImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectFixRerollDiceToSpecialTypeImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl>(&p);
  common::tools::perf::make_shared<GCGEffectFixRerollDiceToSpecialType,std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectFixRerollDiceToSpecialType,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectFixRerollDiceToSpecialType> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectFixRerollDiceToSpecialType>::~shared_ptr((std::shared_ptr<GCGEffectFixRerollDiceToSpecialType> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 56: range 000000000D7C0A28-000000000D7C0ABA
GCGEffectBasePtr __cdecl ConfigGCGExecEffectChargeImpl::createEffect(
        ConfigGCGExecEffectChargeImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectChargeImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectChargeImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectChargeImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectChargeImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectChargeImpl>((ConfigGCGExecEffectChargeImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectCharge,std::shared_ptr<ConfigGCGExecEffectChargeImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectCharge,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectCharge> *)&v6);
  std::shared_ptr<GCGExecEffectCharge>::~shared_ptr((std::shared_ptr<GCGExecEffectCharge> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectChargeImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 61: range 000000000D7C0ABC-000000000D7C0B4E
GCGEffectBasePtr __cdecl ConfigGCGExecEffectChangeOnstageCharaterImpl::createEffect(
        ConfigGCGExecEffectChangeOnstageCharaterImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGExecEffectChangeOnstageCharaterImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectChangeOnstageCharaterImpl>(&p);
  common::tools::perf::make_shared<GCGExecEffectChangeOnstageCharater,std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectChangeOnstageCharater,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectChangeOnstageCharater> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGExecEffectChangeOnstageCharater>::~shared_ptr((std::shared_ptr<GCGExecEffectChangeOnstageCharater> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 66: range 000000000D7C0B50-000000000D7C0BE2
GCGEffectBasePtr __cdecl ConfigGCGExecEffectDrawImpl::createEffect(
        ConfigGCGExecEffectDrawImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectDrawImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectDrawImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectDrawImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectDrawImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectDrawImpl>((ConfigGCGExecEffectDrawImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectDraw,std::shared_ptr<ConfigGCGExecEffectDrawImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectDraw,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectDraw> *)&v6);
  std::shared_ptr<GCGExecEffectDraw>::~shared_ptr((std::shared_ptr<GCGExecEffectDraw> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectDrawImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 71: range 000000000D7C0BE4-000000000D7C0C76
GCGEffectBasePtr __cdecl ConfigGCGEffectAttachPhysicDamageToElementImpl::createEffect(
        ConfigGCGEffectAttachPhysicDamageToElementImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectAttachPhysicDamageToElementImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectAttachPhysicDamageToElementImpl>(&p);
  common::tools::perf::make_shared<GCGEffectAttachPhysicDamageToElement,std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectAttachPhysicDamageToElement,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectAttachPhysicDamageToElement> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectAttachPhysicDamageToElement>::~shared_ptr((std::shared_ptr<GCGEffectAttachPhysicDamageToElement> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 76: range 000000000D7C0C78-000000000D7C0D0A
GCGEffectBasePtr __cdecl ConfigGCGEffectAddShieldImpl::createEffect(
        ConfigGCGEffectAddShieldImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectAddShieldImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectAddShieldImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGEffectAddShieldImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGEffectAddShieldImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectAddShieldImpl>((ConfigGCGEffectAddShieldImpl *)&__args_1);
  common::tools::perf::make_shared<GCGEffectAddShield,std::shared_ptr<ConfigGCGEffectAddShieldImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectAddShield,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectAddShield> *)&v6);
  std::shared_ptr<GCGEffectAddShield>::~shared_ptr((std::shared_ptr<GCGEffectAddShield> *const)&v6);
  std::shared_ptr<ConfigGCGEffectAddShieldImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 81: range 000000000D7C0D0C-000000000D7C0D9E
GCGEffectBasePtr __cdecl ConfigGCGExecEffectDamageMultipleImpl::createEffect(
        ConfigGCGExecEffectDamageMultipleImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectDamageMultipleImpl>((ConfigGCGExecEffectDamageMultipleImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectDamageMultiple,std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectDamageMultiple,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectDamageMultiple> *)&v6);
  std::shared_ptr<GCGExecEffectDamageMultiple>::~shared_ptr((std::shared_ptr<GCGExecEffectDamageMultiple> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 86: range 000000000D7C0DA0-000000000D7C0E32
GCGEffectBasePtr __cdecl ConfigGCGEffectBeingHitDamageReduceToHalfImpl::createEffect(
        ConfigGCGEffectBeingHitDamageReduceToHalfImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectBeingHitDamageReduceToHalfImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl>(&p);
  common::tools::perf::make_shared<GCGEffectBeingHitDamageReduceToHalf,std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectBeingHitDamageReduceToHalf,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectBeingHitDamageReduceToHalf> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectBeingHitDamageReduceToHalf>::~shared_ptr((std::shared_ptr<GCGEffectBeingHitDamageReduceToHalf> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 91: range 000000000D7C0E34-000000000D7C0EC6
GCGEffectBasePtr __cdecl ConfigGCGEffectChangeCharacterSetQuickImpl::createEffect(
        ConfigGCGEffectChangeCharacterSetQuickImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectChangeCharacterSetQuickImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectChangeCharacterSetQuickImpl>(&p);
  common::tools::perf::make_shared<GCGEffectChangeCharacterSetQuick,std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectChangeCharacterSetQuick,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectChangeCharacterSetQuick> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectChangeCharacterSetQuick>::~shared_ptr((std::shared_ptr<GCGEffectChangeCharacterSetQuick> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 96: range 000000000D7C0EC8-000000000D7C0F5A
GCGEffectBasePtr __cdecl ConfigGCGExecEffectHealImpl::createEffect(
        ConfigGCGExecEffectHealImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectHealImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectHealImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectHealImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectHealImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectHealImpl>((ConfigGCGExecEffectHealImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectHeal,std::shared_ptr<ConfigGCGExecEffectHealImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectHeal,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectHeal> *)&v6);
  std::shared_ptr<GCGExecEffectHeal>::~shared_ptr((std::shared_ptr<GCGExecEffectHeal> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectHealImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 101: range 000000000D7C0F5C-000000000D7C0FEE
GCGEffectBasePtr __cdecl ConfigGCGEffectRerollReviseCostImpl::createEffect(
        ConfigGCGEffectRerollReviseCostImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectRerollReviseCostImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectRerollReviseCostImpl>(&p);
  common::tools::perf::make_shared<GCGEffectRerollReviseCost,std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectRerollReviseCost,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectRerollReviseCost> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectRerollReviseCost>::~shared_ptr((std::shared_ptr<GCGEffectRerollReviseCost> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 106: range 000000000D7C0FF0-000000000D7C1082
GCGEffectBasePtr __cdecl ConfigGCGExecEffectRandomCreateCardImpl::createEffect(
        ConfigGCGExecEffectRandomCreateCardImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectRandomCreateCardImpl>((ConfigGCGExecEffectRandomCreateCardImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectRandomCreateCard,std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectRandomCreateCard,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectRandomCreateCard> *)&v6);
  std::shared_ptr<GCGExecEffectRandomCreateCard>::~shared_ptr((std::shared_ptr<GCGExecEffectRandomCreateCard> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 111: range 000000000D7C1084-000000000D7C1116
GCGEffectBasePtr __cdecl ConfigGCGEffectSkillUseCostReviseImpl::createEffect(
        ConfigGCGEffectSkillUseCostReviseImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectSkillUseCostReviseImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectSkillUseCostReviseImpl>(&p);
  common::tools::perf::make_shared<GCGEffectSkillUseCostRevise,std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectSkillUseCostRevise,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectSkillUseCostRevise> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectSkillUseCostRevise>::~shared_ptr((std::shared_ptr<GCGEffectSkillUseCostRevise> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 116: range 000000000D7C1118-000000000D7C11AA
GCGEffectBasePtr __cdecl ConfigGCGEffectPlayCardCostReviseImpl::createEffect(
        ConfigGCGEffectPlayCardCostReviseImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectPlayCardCostReviseImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectPlayCardCostReviseImpl>(&p);
  common::tools::perf::make_shared<GCGEffectPlayCardCostRevise,std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectPlayCardCostRevise,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectPlayCardCostRevise> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectPlayCardCostRevise>::~shared_ptr((std::shared_ptr<GCGEffectPlayCardCostRevise> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 121: range 000000000D7C11AC-000000000D7C123E
GCGEffectBasePtr __cdecl ConfigGCGEffectChangeCharacterReviseCostImpl::createEffect(
        ConfigGCGEffectChangeCharacterReviseCostImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectChangeCharacterReviseCostImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectChangeCharacterReviseCostImpl>(&p);
  common::tools::perf::make_shared<GCGEffectChangeCharacterReviseCost,std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectChangeCharacterReviseCost,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectChangeCharacterReviseCost> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectChangeCharacterReviseCost>::~shared_ptr((std::shared_ptr<GCGEffectChangeCharacterReviseCost> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 126: range 000000000D7C1240-000000000D7C12D2
GCGEffectBasePtr __cdecl ConfigGCGEffectChangeCharacterIncreCostImpl::createEffect(
        ConfigGCGEffectChangeCharacterIncreCostImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectChangeCharacterIncreCostImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectChangeCharacterIncreCostImpl>(&p);
  common::tools::perf::make_shared<GCGEffectChangeCharacterIncreCost,std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectChangeCharacterIncreCost,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectChangeCharacterIncreCost> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectChangeCharacterIncreCost>::~shared_ptr((std::shared_ptr<GCGEffectChangeCharacterIncreCost> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 131: range 000000000D7C12D4-000000000D7C1366
GCGEffectBasePtr __cdecl ConfigGCGEffectOpponentChangeCharacterIncreCostImpl::createEffect(
        ConfigGCGEffectOpponentChangeCharacterIncreCostImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectOpponentChangeCharacterIncreCostImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl>(&p);
  common::tools::perf::make_shared<GCGEffectOpponentChangeCharacterIncreCost,std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectOpponentChangeCharacterIncreCost,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectOpponentChangeCharacterIncreCost> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectOpponentChangeCharacterIncreCost>::~shared_ptr((std::shared_ptr<GCGEffectOpponentChangeCharacterIncreCost> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000000D7C1368-000000000D7C13FA
GCGEffectBasePtr __cdecl ConfigGCGExecEffectChangeCardShowTokenVarImpl::createEffect(
        ConfigGCGExecEffectChangeCardShowTokenVarImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectChangeCardShowTokenVarImpl>((ConfigGCGExecEffectChangeCardShowTokenVarImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectChangeCardShowTokenVar,std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectChangeCardShowTokenVar,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectChangeCardShowTokenVar> *)&v6);
  std::shared_ptr<GCGExecEffectChangeCardShowTokenVar>::~shared_ptr((std::shared_ptr<GCGExecEffectChangeCardShowTokenVar> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 141: range 000000000D7C13FC-000000000D7C148E
GCGEffectBasePtr __cdecl ConfigGCGExecEffectOnStageCharacterUseSkillImpl::createEffect(
        ConfigGCGExecEffectOnStageCharacterUseSkillImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGExecEffectOnStageCharacterUseSkillImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl>(&p);
  common::tools::perf::make_shared<GCGExecEffectOnStageCharacterUseSkill,std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectOnStageCharacterUseSkill,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectOnStageCharacterUseSkill> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGExecEffectOnStageCharacterUseSkill>::~shared_ptr((std::shared_ptr<GCGExecEffectOnStageCharacterUseSkill> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 146: range 000000000D7C1490-000000000D7C1522
GCGEffectBasePtr __cdecl ConfigGCGEffectBeingHitDamageReviseImpl::createEffect(
        ConfigGCGEffectBeingHitDamageReviseImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectBeingHitDamageReviseImpl>((ConfigGCGEffectBeingHitDamageReviseImpl *)&__args_1);
  common::tools::perf::make_shared<GCGEffectBeingHitDamageRevise,std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectBeingHitDamageRevise,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectBeingHitDamageRevise> *)&v6);
  std::shared_ptr<GCGEffectBeingHitDamageRevise>::~shared_ptr((std::shared_ptr<GCGEffectBeingHitDamageRevise> *const)&v6);
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 151: range 000000000D7C1524-000000000D7C15B6
GCGEffectBasePtr __cdecl ConfigGCGExecEffectDestroyCardImpl::createEffect(
        ConfigGCGExecEffectDestroyCardImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGExecEffectDestroyCardImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectDestroyCardImpl>(&p);
  common::tools::perf::make_shared<GCGExecEffectDestroyCard,std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectDestroyCard,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectDestroyCard> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGExecEffectDestroyCard>::~shared_ptr((std::shared_ptr<GCGExecEffectDestroyCard> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 156: range 000000000D7C15B8-000000000D7C164A
GCGEffectBasePtr __cdecl ConfigGCGExecEffectDestroyModifyCardImpl::createEffect(
        ConfigGCGExecEffectDestroyModifyCardImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGExecEffectDestroyModifyCardImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectDestroyModifyCardImpl>(&p);
  common::tools::perf::make_shared<GCGExecEffectDestroyModifyCard,std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectDestroyModifyCard,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectDestroyModifyCard> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGExecEffectDestroyModifyCard>::~shared_ptr((std::shared_ptr<GCGExecEffectDestroyModifyCard> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 161: range 000000000D7C164C-000000000D7C16DE
GCGEffectBasePtr __cdecl ConfigGCGExecEffectTransferEnergyImpl::createEffect(
        ConfigGCGExecEffectTransferEnergyImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectTransferEnergyImpl>((ConfigGCGExecEffectTransferEnergyImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectTransferEnergy,std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectTransferEnergy,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectTransferEnergy> *)&v6);
  std::shared_ptr<GCGExecEffectTransferEnergy>::~shared_ptr((std::shared_ptr<GCGExecEffectTransferEnergy> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 166: range 000000000D7C16E0-000000000D7C1772
GCGEffectBasePtr __cdecl ConfigGCGExecEffectRandomGenDiceImpl::createEffect(
        ConfigGCGExecEffectRandomGenDiceImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectRandomGenDiceImpl>((ConfigGCGExecEffectRandomGenDiceImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectRandomGenDice,std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectRandomGenDice,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectRandomGenDice> *)&v6);
  std::shared_ptr<GCGExecEffectRandomGenDice>::~shared_ptr((std::shared_ptr<GCGExecEffectRandomGenDice> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 171: range 000000000D7C1774-000000000D7C1806
GCGEffectBasePtr __cdecl ConfigGCGExecEffectSearchCardImpl::createEffect(
        ConfigGCGExecEffectSearchCardImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectSearchCardImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectSearchCardImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectSearchCardImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectSearchCardImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectSearchCardImpl>((ConfigGCGExecEffectSearchCardImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectSearchCard,std::shared_ptr<ConfigGCGExecEffectSearchCardImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectSearchCard,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectSearchCard> *)&v6);
  std::shared_ptr<GCGExecEffectSearchCard>::~shared_ptr((std::shared_ptr<GCGExecEffectSearchCard> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectSearchCardImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 176: range 000000000D7C1808-000000000D7C189A
GCGEffectBasePtr __cdecl ConfigGCGEffectPayByCardTagImpl::createEffect(
        ConfigGCGEffectPayByCardTagImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectPayByCardTagImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectPayByCardTagImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectPayByCardTagImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectPayByCardTagImpl>(&p);
  common::tools::perf::make_shared<GCGEffectPayByCardTag,std::shared_ptr<ConfigGCGEffectPayByCardTagImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectPayByCardTagImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectPayByCardTag,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectPayByCardTag> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectPayByCardTag>::~shared_ptr((std::shared_ptr<GCGEffectPayByCardTag> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectPayByCardTagImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectPayByCardTagImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 181: range 000000000D7C189C-000000000D7C192E
GCGEffectBasePtr __cdecl ConfigGCGExecEffectAttachElementImpl::createEffect(
        ConfigGCGExecEffectAttachElementImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectAttachElementImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectAttachElementImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectAttachElementImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectAttachElementImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectAttachElementImpl>((ConfigGCGExecEffectAttachElementImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectAttachElement,std::shared_ptr<ConfigGCGExecEffectAttachElementImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectAttachElement,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectAttachElement> *)&v6);
  std::shared_ptr<GCGExecEffectAttachElement>::~shared_ptr((std::shared_ptr<GCGExecEffectAttachElement> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectAttachElementImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 186: range 000000000D7C1930-000000000D7C19C2
GCGEffectBasePtr __cdecl ConfigGCGEffectReplaceReactionElementByCardVarImpl::createEffect(
        ConfigGCGEffectReplaceReactionElementByCardVarImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectReplaceReactionElementByCardVarImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectReplaceReactionElementByCardVarImpl>(&p);
  common::tools::perf::make_shared<GCGEffectReplaceReactionElementByCardVar,std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectReplaceReactionElementByCardVar,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectReplaceReactionElementByCardVar> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectReplaceReactionElementByCardVar>::~shared_ptr((std::shared_ptr<GCGEffectReplaceReactionElementByCardVar> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 191: range 000000000D7C19C4-000000000D7C1A56
GCGEffectBasePtr __cdecl ConfigGCGExecEffectTransferModifyCardImpl::createEffect(
        ConfigGCGExecEffectTransferModifyCardImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGExecEffectTransferModifyCardImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectTransferModifyCardImpl>(&p);
  common::tools::perf::make_shared<GCGExecEffectTransferModifyCard,std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectTransferModifyCard,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectTransferModifyCard> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGExecEffectTransferModifyCard>::~shared_ptr((std::shared_ptr<GCGExecEffectTransferModifyCard> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 196: range 000000000D7C1A58-000000000D7C1AEA
GCGEffectBasePtr __cdecl ConfigGCGExecEffectRerollImpl::createEffect(
        ConfigGCGExecEffectRerollImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectRerollImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectRerollImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectRerollImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectRerollImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectRerollImpl>((ConfigGCGExecEffectRerollImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectReroll,std::shared_ptr<ConfigGCGExecEffectRerollImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectReroll,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectReroll> *)&v6);
  std::shared_ptr<GCGExecEffectReroll>::~shared_ptr((std::shared_ptr<GCGExecEffectReroll> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectRerollImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 201: range 000000000D7C1AEC-000000000D7C1B7E
GCGEffectBasePtr __cdecl ConfigGCGExecEffectSetDamageElementImpl::createEffect(
        ConfigGCGExecEffectSetDamageElementImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectSetDamageElementImpl>((ConfigGCGExecEffectSetDamageElementImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectSetDamageElement,std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectSetDamageElement,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectSetDamageElement> *)&v6);
  std::shared_ptr<GCGExecEffectSetDamageElement>::~shared_ptr((std::shared_ptr<GCGExecEffectSetDamageElement> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 206: range 000000000D7C1B80-000000000D7C1C12
GCGEffectBasePtr __cdecl ConfigGCGExecEffectAbsorbUnusedDiceImpl::createEffect(
        ConfigGCGExecEffectAbsorbUnusedDiceImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectAbsorbUnusedDiceImpl>((ConfigGCGExecEffectAbsorbUnusedDiceImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectAbsorbUnusedDice,std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectAbsorbUnusedDice,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectAbsorbUnusedDice> *)&v6);
  std::shared_ptr<GCGExecEffectAbsorbUnusedDice>::~shared_ptr((std::shared_ptr<GCGExecEffectAbsorbUnusedDice> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 211: range 000000000D7C1C14-000000000D7C1CA6
GCGEffectBasePtr __cdecl ConfigGCGEffectModifiedCharacterAssignUseSkillImpl::createEffect(
        ConfigGCGEffectModifiedCharacterAssignUseSkillImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectModifiedCharacterAssignUseSkillImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl>(&p);
  common::tools::perf::make_shared<GCGEffectModifiedCharacterAssignUseSkill,std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectModifiedCharacterAssignUseSkill,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectModifiedCharacterAssignUseSkill> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectModifiedCharacterAssignUseSkill>::~shared_ptr((std::shared_ptr<GCGEffectModifiedCharacterAssignUseSkill> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 216: range 000000000D7C1CA8-000000000D7C1D3A
GCGEffectBasePtr __cdecl ConfigGCGEffectFixRerollDiceImpl::createEffect(
        ConfigGCGEffectFixRerollDiceImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGEffectFixRerollDiceImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGEffectFixRerollDiceImpl>(&p);
  common::tools::perf::make_shared<GCGEffectFixRerollDice,std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGEffectFixRerollDice,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGEffectFixRerollDice> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGEffectFixRerollDice>::~shared_ptr((std::shared_ptr<GCGEffectFixRerollDice> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 221: range 000000000D7C1D3C-000000000D7C1DCE
GCGEffectBasePtr __cdecl ConfigGCGExecEffectReviveCharacterImpl::createEffect(
        ConfigGCGExecEffectReviveCharacterImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectReviveCharacterImpl>((ConfigGCGExecEffectReviveCharacterImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectReviveCharacter,std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectReviveCharacter,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectReviveCharacter> *)&v6);
  std::shared_ptr<GCGExecEffectReviveCharacter>::~shared_ptr((std::shared_ptr<GCGExecEffectReviveCharacter> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 226: range 000000000D7C1DD0-000000000D7C1E62
GCGEffectBasePtr __cdecl ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl::createEffect(
        ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl> *parama; // [rsp+8h] [rbp-48h]
  std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl> __args_1; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl> v6; // [rsp+30h] [rbp-20h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl>((ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *)&__args_1);
  common::tools::perf::make_shared<GCGExecEffectAdvanceProcessWaitingCharacter,std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl>,GCGEffectParam &>(
    &v6,
    (GCGEffectParam *)&__args_1,
    parama,
    (GCGEffectParam *)&__args_1);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectAdvanceProcessWaitingCharacter,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectAdvanceProcessWaitingCharacter> *)&v6);
  std::shared_ptr<GCGExecEffectAdvanceProcessWaitingCharacter>::~shared_ptr((std::shared_ptr<GCGExecEffectAdvanceProcessWaitingCharacter> *const)&v6);
  std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl>::~shared_ptr(&__args_1);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 231: range 000000000D7C1E64-000000000D7C1EF6
GCGEffectBasePtr __cdecl ConfigGCGExecEffectFinishDuelImpl::createEffect(
        ConfigGCGExecEffectFinishDuelImpl *const this,
        GCGEffectParam *param)
{
  std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl> *v2; // rdx
  GCGEffectBasePtr result; // rax
  std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl> *parama; // [rsp+8h] [rbp-48h]
  ConfigGCGExecEffectFinishDuelImpl p; // [rsp+20h] [rbp-30h] BYREF

  parama = v2;
  toThisPtr<ConfigGCGExecEffectFinishDuelImpl>(&p);
  common::tools::perf::make_shared<GCGExecEffectFinishDuel,std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl>,GCGEffectParam &>(
    (std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl> *)&p._M_weak_this._M_refcount,
    (GCGEffectParam *)&p,
    parama,
    (GCGEffectParam *)&p);
  std::shared_ptr<GCGEffectBase>::shared_ptr<GCGExecEffectFinishDuel,void>(
    (std::shared_ptr<GCGEffectBase> *const)this,
    (std::shared_ptr<GCGExecEffectFinishDuel> *)&p._M_weak_this._M_refcount);
  std::shared_ptr<GCGExecEffectFinishDuel>::~shared_ptr((std::shared_ptr<GCGExecEffectFinishDuel> *const)&p._M_weak_this._M_refcount);
  std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl> *const)&p);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_skill_config_impl_mgr.cpp

// Line 26: range 000000000D7C74AA-000000000D7C74EB
data::ConfigGCGLogicConditionPtr __cdecl ConfigGCGLogicConditionFactoryImpl::create(
        ConfigGCGLogicConditionFactoryImpl *const this)
{
  data::ConfigGCGLogicConditionPtr result; // rax
  std::shared_ptr<ConfigGCGLogicConditionImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGLogicConditionImpl>();
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr<ConfigGCGLogicConditionImpl,void>(
    (std::shared_ptr<data::ConfigGCGLogicCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGLogicConditionImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 31: range 000000000D7C74EC-000000000D7CBF02
void __cdecl GCGSkillConfigImplMgr::init()
{
  std::shared_ptr<data::ConfigGCGEffect> *v0; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v1; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v2; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v3; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v4; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v5; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v6; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v7; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v8; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v9; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v10; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v11; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v12; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v13; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v14; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v15; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v16; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v17; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v18; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v19; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v20; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v21; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v22; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v23; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v24; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v25; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v26; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v27; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v28; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v29; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v30; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v31; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v32; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v33; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v34; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v35; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v36; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v37; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v38; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v39; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v40; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v41; // rax
  std::shared_ptr<data::ConfigGCGEffect> *v42; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v43; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v44; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v45; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v46; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v47; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v48; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v49; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v50; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v51; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v52; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v53; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v54; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v55; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v56; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v57; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v58; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v59; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v60; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v61; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v62; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v63; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v64; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v65; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v66; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v67; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v68; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v69; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v70; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v71; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v72; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v73; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v74; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v75; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v76; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v77; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v78; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v79; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v80; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v81; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v82; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v83; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v84; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v85; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v86; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v87; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v88; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v89; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v90; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v91; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v92; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v93; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v94; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v95; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v96; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v97; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v98; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v99; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v100; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v101; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v102; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v103; // rax
  std::shared_ptr<data::ConfigGCGCondition> *v104; // rax
  std::allocator<char> __a; // [rsp+Fh] [rbp-41h] BYREF
  std::shared_ptr<ConfigGCGExecEffectDamageImpl> __r; // [rsp+10h] [rbp-40h] BYREF
  std::string __k; // [rsp+20h] [rbp-30h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectDamageImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectDamage", &__a);
  v0 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectDamageImpl>(v0, &__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectDamageImpl>::~shared_ptr(&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectCreateCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectCreateCard", &__a);
  v1 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectCreateCardImpl>(
    v1,
    (std::shared_ptr<ConfigGCGExecEffectCreateCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectCreateCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectCreateCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectCreateModifyCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectCreateModifyCard", &__a);
  v2 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectCreateModifyCardImpl>(
    v2,
    (std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectGenDiceImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectGenDice", &__a);
  v3 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectGenDiceImpl>(
    v3,
    (std::shared_ptr<ConfigGCGExecEffectGenDiceImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectGenDiceImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectGenDiceImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectChangeCardVarImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectChangeCardVar", &__a);
  v4 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectChangeCardVarImpl>(
    v4,
    (std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectDamageReviseImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectDamageRevise", &__a);
  v5 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectDamageReviseImpl>(
    v5,
    (std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectFixRerollDiceToSpecialType", &__a);
  v6 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl>(
    v6,
    (std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectChargeImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectCharge", &__a);
  v7 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectChargeImpl>(
    v7,
    (std::shared_ptr<ConfigGCGExecEffectChargeImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectChargeImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectChargeImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectChangeOnstageCharaterImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectChangeOnstageCharater", &__a);
  v8 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectChangeOnstageCharaterImpl>(
    v8,
    (std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectDrawImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectDraw", &__a);
  v9 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
         &data::g_ConfigGCGEffectMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectDrawImpl>(
    v9,
    (std::shared_ptr<ConfigGCGExecEffectDrawImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectDrawImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectDrawImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectAttachPhysicDamageToElementImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectAttachPhysicDamageToElement", &__a);
  v10 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectAttachPhysicDamageToElementImpl>(
    v10,
    (std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectAddShieldImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectAddShield", &__a);
  v11 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectAddShieldImpl>(
    v11,
    (std::shared_ptr<ConfigGCGEffectAddShieldImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectAddShieldImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectAddShieldImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectDamageMultipleImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectDamageMultiple", &__a);
  v12 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectDamageMultipleImpl>(
    v12,
    (std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectBeingHitDamageReduceToHalfImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectBeingHitDamageReduceToHalf", &__a);
  v13 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectBeingHitDamageReduceToHalfImpl>(
    v13,
    (std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectRandomCreateCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectRandomCreateCard", &__a);
  v14 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectRandomCreateCardImpl>(
    v14,
    (std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectChangeCharacterSetQuickImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectChangeCharacterSetQuick", &__a);
  v15 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectChangeCharacterSetQuickImpl>(
    v15,
    (std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectHealImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectHeal", &__a);
  v16 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectHealImpl>(
    v16,
    (std::shared_ptr<ConfigGCGExecEffectHealImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectHealImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectHealImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectRerollReviseCostImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectRerollReviseCost", &__a);
  v17 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectRerollReviseCostImpl>(
    v17,
    (std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectSkillUseCostReviseImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectSkillUseCostRevise", &__a);
  v18 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectSkillUseCostReviseImpl>(
    v18,
    (std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectPlayCardCostReviseImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectPlayCardCostRevise", &__a);
  v19 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectPlayCardCostReviseImpl>(
    v19,
    (std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectChangeCharacterReviseCostImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectChangeCharacterReviseCost", &__a);
  v20 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectChangeCharacterReviseCostImpl>(
    v20,
    (std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectChangeCharacterIncreCostImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectChangeCharacterIncreCost", &__a);
  v21 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectChangeCharacterIncreCostImpl>(
    v21,
    (std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectOpponentChangeCharacterIncreCost", &__a);
  v22 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl>(
    v22,
    (std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectChangeCardShowTokenVarImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectChangeCardShowTokenVar", &__a);
  v23 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectChangeCardShowTokenVarImpl>(
    v23,
    (std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectOnStageCharacterUseSkillImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectOnStageCharacterUseSkill", &__a);
  v24 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectOnStageCharacterUseSkillImpl>(
    v24,
    (std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectBeingHitDamageReviseImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectBeingHitDamageRevise", &__a);
  v25 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectBeingHitDamageReviseImpl>(
    v25,
    (std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectDestroyCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectDestroyCard", &__a);
  v26 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectDestroyCardImpl>(
    v26,
    (std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectDestroyModifyCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectDestroyModifyCard", &__a);
  v27 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectDestroyModifyCardImpl>(
    v27,
    (std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectTransferEnergyImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectTransferEnergy", &__a);
  v28 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectTransferEnergyImpl>(
    v28,
    (std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectRandomGenDiceImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectRandomGenDice", &__a);
  v29 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectRandomGenDiceImpl>(
    v29,
    (std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectSearchCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectSearchCard", &__a);
  v30 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectSearchCardImpl>(
    v30,
    (std::shared_ptr<ConfigGCGExecEffectSearchCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectSearchCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectSearchCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectPayByCardTagImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectPayByCardTag", &__a);
  v31 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectPayByCardTagImpl>(
    v31,
    (std::shared_ptr<ConfigGCGEffectPayByCardTagImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectPayByCardTagImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectPayByCardTagImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectAttachElementImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectAttachElement", &__a);
  v32 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectAttachElementImpl>(
    v32,
    (std::shared_ptr<ConfigGCGExecEffectAttachElementImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectAttachElementImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectAttachElementImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectReplaceReactionElementByCardVarImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectReplaceReactionElementByCardVar", &__a);
  v33 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectReplaceReactionElementByCardVarImpl>(
    v33,
    (std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectTransferModifyCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectTransferModifyCard", &__a);
  v34 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectTransferModifyCardImpl>(
    v34,
    (std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectRerollImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectReroll", &__a);
  v35 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectRerollImpl>(
    v35,
    (std::shared_ptr<ConfigGCGExecEffectRerollImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectRerollImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectRerollImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectSetDamageElementImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectSetDamageElement", &__a);
  v36 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectSetDamageElementImpl>(
    v36,
    (std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectAbsorbUnusedDiceImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectAbsorbUnusedDice", &__a);
  v37 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectAbsorbUnusedDiceImpl>(
    v37,
    (std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectModifiedCharacterAssignUseSkill", &__a);
  v38 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl>(
    v38,
    (std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGEffectFixRerollDiceImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGEffectFixRerollDice", &__a);
  v39 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGEffectFixRerollDiceImpl>(
    v39,
    (std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl>::~shared_ptr((std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectReviveCharacterImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectReviveCharacter", &__a);
  v40 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectReviveCharacterImpl>(
    v40,
    (std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectAdvanceProcessWaitingCharacter", &__a);
  v41 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl>(
    v41,
    (std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGExecEffectFinishDuelImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGExecEffectFinishDuel", &__a);
  v42 = std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::operator[](
          &data::g_ConfigGCGEffectMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGEffect>::operator=<ConfigGCGExecEffectFinishDuelImpl>(
    v42,
    (std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl>::~shared_ptr((std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGLogicConditionFactoryImpl>();
  std::shared_ptr<data::ConfigGCGLogicConditionFactory>::operator=<ConfigGCGLogicConditionFactoryImpl>(
    &data::ConfigGCGLogicConditionFactory::instance_ptr,
    (std::shared_ptr<ConfigGCGLogicConditionFactoryImpl> *)&__r);
  std::shared_ptr<ConfigGCGLogicConditionFactoryImpl>::~shared_ptr((std::shared_ptr<ConfigGCGLogicConditionFactoryImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGLogicConditionImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGLogicCondition", &__a);
  v43 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGLogicConditionImpl>(
    v43,
    (std::shared_ptr<ConfigGCGLogicConditionImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGLogicConditionImpl>::~shared_ptr((std::shared_ptr<ConfigGCGLogicConditionImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurSkillImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchCurSkill", &__a);
  v44 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchCurSkillImpl>(
    v44,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchCurCard", &__a);
  v45 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchCurCardImpl>(
    v45,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchSourceCharacterImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchSourceCharacter", &__a);
  v46 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchSourceCharacterImpl>(
    v46,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchTargetCharacterImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchTargetCharacter", &__a);
  v47 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchTargetCharacterImpl>(
    v47,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigCCGConditionCardFetchVarImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigCCGConditionCardFetchVar", &__a);
  v48 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigCCGConditionCardFetchVarImpl>(
    v48,
    (std::shared_ptr<ConfigCCGConditionCardFetchVarImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigCCGConditionCardFetchVarImpl>::~shared_ptr((std::shared_ptr<ConfigCCGConditionCardFetchVarImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCharacterCheckAttachCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCharacterCheckAttachCard", &__a);
  v49 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCharacterCheckAttachCardImpl>(
    v49,
    (std::shared_ptr<ConfigGCGConditionCharacterCheckAttachCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCharacterCheckAttachCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCharacterCheckAttachCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurSkillObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchCurSkillObject", &__a);
  v50 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchCurSkillObjectImpl>(
    v50,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurCardObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchCurCardObject", &__a);
  v51 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchCurCardObjectImpl>(
    v51,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchSourceCharacterObject", &__a);
  v52 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl>(
    v52,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchTargetCharacterObject", &__a);
  v53 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl>(
    v53,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterCampImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurCharacterCamp", &__a);
  v54 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCharacterCampImpl>(
    v54,
    (std::shared_ptr<ConfigGCGConditionCheckCurCharacterCampImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterCampImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCharacterCampImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterPositionImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurCharacterPosition", &__a);
  v55 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCharacterPositionImpl>(
    v55,
    (std::shared_ptr<ConfigGCGConditionCheckCurCharacterPositionImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterPositionImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCharacterPositionImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionConstIntegerValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionConstIntegerValue", &__a);
  v56 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionConstIntegerValueImpl>(
    v56,
    (std::shared_ptr<ConfigGCGConditionConstIntegerValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionConstIntegerValueImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionConstIntegerValueImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchThisCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchThisCard", &__a);
  v57 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchThisCardImpl>(
    v57,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchThisCardObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchThisCardObject", &__a);
  v58 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchThisCardObjectImpl>(
    v58,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchOnStageSummonNumber", &__a);
  v59 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl>(
    v59,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurSkillHasTagImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurSkillHasTag", &__a);
  v60 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurSkillHasTagImpl>(
    v60,
    (std::shared_ptr<ConfigGCGConditionCheckCurSkillHasTagImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurSkillHasTagImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurSkillHasTagImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCurCardHasTagImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCurCardHasTag", &__a);
  v61 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCurCardHasTagImpl>(
    v61,
    (std::shared_ptr<ConfigGCGConditionCurCardHasTagImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCurCardHasTagImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCurCardHasTagImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCurCardAttachToCardIDImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCurCardAttachToCardID", &__a);
  v62 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCurCardAttachToCardIDImpl>(
    v62,
    (std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIDImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIDImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIDImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCurCardAttachToCardObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCurCardAttachToCardObject", &__a);
  v63 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCurCardAttachToCardObjectImpl>(
    v63,
    (std::shared_ptr<ConfigGCGConditionCurCardAttachToCardObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCurCardAttachToCardObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCurCardAttachToCardObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCurCardAttachToCardIsTargetImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCurCardAttachToCardIsTarget", &__a);
  v64 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCurCardAttachToCardIsTargetImpl>(
    v64,
    (std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIsTargetImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIsTargetImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIsTargetImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCardCampImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurCardCamp", &__a);
  v65 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCardCampImpl>(
    v65,
    (std::shared_ptr<ConfigGCGConditionCheckCurCardCampImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCardCampImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCardCampImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurSkillUsedImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurSkillUsed", &__a);
  v66 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurSkillUsedImpl>(
    v66,
    (std::shared_ptr<ConfigGCGConditionCheckCurSkillUsedImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurSkillUsedImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurSkillUsedImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurCampHurtTotalImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalCurCampHurtTotal", &__a);
  v67 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCurCampHurtTotalImpl>(
    v67,
    (std::shared_ptr<ConfigGCGConditionGlobalCurCampHurtTotalImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCurCampHurtTotalImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCurCampHurtTotalImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterHurtNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurCharacterHurtNum", &__a);
  v68 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCharacterHurtNumImpl>(
    v68,
    (std::shared_ptr<ConfigGCGConditionCheckCurCharacterHurtNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterHurtNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCharacterHurtNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCurCharacterHpNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCurCharacterHpNum", &__a);
  v69 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCurCharacterHpNumImpl>(
    v69,
    (std::shared_ptr<ConfigGCGConditionCurCharacterHpNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCurCharacterHpNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCurCharacterHpNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCurCharacterEnergyNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCurCharacterEnergyNum", &__a);
  v70 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCurCharacterEnergyNumImpl>(
    v70,
    (std::shared_ptr<ConfigGCGConditionCurCharacterEnergyNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCurCharacterEnergyNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCurCharacterEnergyNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(
    &__k,
    "ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject",
    &__a);
  v71 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl>(
    v71,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(
    &__k,
    "ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID",
    &__a);
  v72 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl>(
    v72,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum", &__a);
  v73 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl>(
    v73,
    (std::shared_ptr<ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalThisSkillIDImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalThisSkillID", &__a);
  v74 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalThisSkillIDImpl>(
    v74,
    (std::shared_ptr<ConfigGCGConditionGlobalThisSkillIDImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalThisSkillIDImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalThisSkillIDImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalThisSkillObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalThisSkillObject", &__a);
  v75 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalThisSkillObjectImpl>(
    v75,
    (std::shared_ptr<ConfigGCGConditionGlobalThisSkillObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalThisSkillObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalThisSkillObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionFetchCurSkillRoundUsedNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionFetchCurSkillRoundUsedNum", &__a);
  v76 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionFetchCurSkillRoundUsedNumImpl>(
    v76,
    (std::shared_ptr<ConfigGCGConditionFetchCurSkillRoundUsedNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionFetchCurSkillRoundUsedNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionFetchCurSkillRoundUsedNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurSkillHasSkillIDImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurSkillHasSkillID", &__a);
  v77 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurSkillHasSkillIDImpl>(
    v77,
    (std::shared_ptr<ConfigGCGConditionCheckCurSkillHasSkillIDImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurSkillHasSkillIDImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurSkillHasSkillIDImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterHasCardIDImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurCharacterHasCardID", &__a);
  v78 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCharacterHasCardIDImpl>(
    v78,
    (std::shared_ptr<ConfigGCGConditionCheckCurCharacterHasCardIDImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterHasCardIDImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCharacterHasCardIDImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCardHasCardIDImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurCardHasCardID", &__a);
  v79 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCardHasCardIDImpl>(
    v79,
    (std::shared_ptr<ConfigGCGConditionCheckCurCardHasCardIDImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCardHasCardIDImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCardHasCardIDImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalLogicNotImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalLogicNot", &__a);
  v80 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalLogicNotImpl>(
    v80,
    (std::shared_ptr<ConfigGCGConditionGlobalLogicNotImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalLogicNotImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalLogicNotImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalAreaContainCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalAreaContainCard", &__a);
  v81 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalAreaContainCardImpl>(
    v81,
    (std::shared_ptr<ConfigGCGConditionGlobalAreaContainCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalAreaContainCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalAreaContainCardImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(
    &__k,
    "ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum",
    &__a);
  v82 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl>(
    v82,
    (std::shared_ptr<ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurSkillKillCharacterImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalCurSkillKillCharacter", &__a);
  v83 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCurSkillKillCharacterImpl>(
    v83,
    (std::shared_ptr<ConfigGCGConditionGlobalCurSkillKillCharacterImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCurSkillKillCharacterImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCurSkillKillCharacterImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalCheckCurSkillDamageElementType", &__a);
  v84 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl>(
    v84,
    (std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalCheckCurSkillElementReactionId", &__a);
  v85 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl>(
    v85,
    (std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalCurRoundHasCharacterDie", &__a);
  v86 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl>(
    v86,
    (std::shared_ptr<ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalAreaTagCardNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalAreaTagCardNum", &__a);
  v87 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalAreaTagCardNumImpl>(
    v87,
    (std::shared_ptr<ConfigGCGConditionGlobalAreaTagCardNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalAreaTagCardNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalAreaTagCardNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionFetchCurSkillOriginCostNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionFetchCurSkillOriginCostNum", &__a);
  v88 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionFetchCurSkillOriginCostNumImpl>(
    v88,
    (std::shared_ptr<ConfigGCGConditionFetchCurSkillOriginCostNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionFetchCurSkillOriginCostNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionFetchCurSkillOriginCostNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCardSetDamageElementImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurCardSetDamageElement", &__a);
  v89 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCardSetDamageElementImpl>(
    v89,
    (std::shared_ptr<ConfigGCGConditionCheckCurCardSetDamageElementImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCardSetDamageElementImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCardSetDamageElementImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionFetchCurCardAbsorbDiceNum", &__a);
  v90 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl>(
    v90,
    (std::shared_ptr<ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(
    &__k,
    "ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum",
    &__a);
  v91 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl>(
    v91,
    (std::shared_ptr<ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCurCharacterNotChargedNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCurCharacterNotChargedNum", &__a);
  v92 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCurCharacterNotChargedNumImpl>(
    v92,
    (std::shared_ptr<ConfigGCGConditionCurCharacterNotChargedNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCurCharacterNotChargedNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCurCharacterNotChargedNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurDieCardObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchCurDieCardObject", &__a);
  v93 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchCurDieCardObjectImpl>(
    v93,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchCurDieCardOwnerID", &__a);
  v94 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl>(
    v94,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchCurDieCardOwnerObject", &__a);
  v95 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl>(
    v95,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurRoundNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchCurRoundNum", &__a);
  v96 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchCurRoundNumImpl>(
    v96,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchCurRoundNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurRoundNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchCurRoundNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(
    &__k,
    "ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum",
    &__a);
  v97 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl>(
    v97,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalCheckIsCurRoundOnStage", &__a);
  v98 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl>(
    v98,
    (std::shared_ptr<ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalCheckParitityImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalCheckParitity", &__a);
  v99 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
          &data::g_ConfigGCGConditionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalCheckParitityImpl>(
    v99,
    (std::shared_ptr<ConfigGCGConditionGlobalCheckParitityImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalCheckParitityImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalCheckParitityImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum", &__a);
  v100 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
           &data::g_ConfigGCGConditionMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl>(
    v100,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCardTypeImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionCheckCurCardType", &__a);
  v101 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
           &data::g_ConfigGCGConditionMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCardTypeImpl>(
    v101,
    (std::shared_ptr<ConfigGCGConditionCheckCurCardTypeImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCardTypeImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCardTypeImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum", &__a);
  v102 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
           &data::g_ConfigGCGConditionMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl>(
    v102,
    (std::shared_ptr<ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(
    &__k,
    "ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType",
    &__a);
  v103 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
           &data::g_ConfigGCGConditionMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl>(
    v103,
    (std::shared_ptr<ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(
    &__k,
    "ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard",
    &__a);
  v104 = std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::operator[](
           &data::g_ConfigGCGConditionMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigGCGCondition>::operator=<ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl>(
    v104,
    (std::shared_ptr<ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl>::~shared_ptr((std::shared_ptr<ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl> *const)&__r);
};

// Line 153: range 000000000D7CBF04-000000000D7CBF28
void __cdecl GCGSkillConfigImplMgr::destroy()
{
  std::map<std::string,std::shared_ptr<data::ConfigGCGEffect>>::clear(&data::g_ConfigGCGEffectMap[abi:cxx11]);
  std::map<std::string,std::shared_ptr<data::ConfigGCGCondition>>::clear(&data::g_ConfigGCGConditionMap[abi:cxx11]);
};

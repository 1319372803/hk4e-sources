// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/ability_config_impl_mgr.cpp

// Line 32: range 00000000130CFC06-00000000130D4E8C
void __cdecl AbilityConfigImplMgr::init()
{
  std::shared_ptr<data::ConfigAbility> *v0; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v1; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v2; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v3; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v4; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v5; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v6; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v7; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v8; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v9; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v10; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v11; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v12; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v13; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v14; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v15; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v16; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v17; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v18; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v19; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v20; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v21; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v22; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v23; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v24; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v25; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v26; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v27; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v28; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v29; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v30; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v31; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v32; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v33; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v34; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v35; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v36; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v37; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v38; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v39; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v40; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v41; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v42; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v43; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v44; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v45; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v46; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v47; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v48; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v49; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v50; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v51; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v52; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v53; // rax
  std::shared_ptr<data::ConfigAbilityAction> *v54; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v55; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v56; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v57; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v58; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v59; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v60; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v61; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v62; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v63; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v64; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v65; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v66; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v67; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v68; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v69; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v70; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v71; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v72; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v73; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v74; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v75; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v76; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v77; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v78; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v79; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v80; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v81; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v82; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v83; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v84; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v85; // rax
  std::shared_ptr<data::ConfigAbilityMixin> *v86; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v87; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v88; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v89; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v90; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v91; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v92; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v93; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v94; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v95; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v96; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v97; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v98; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v99; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v100; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v101; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v102; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v103; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v104; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v105; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v106; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v107; // rax
  std::shared_ptr<data::ConfigAbilityPredicate> *v108; // rax
  std::shared_ptr<data::ConfigTalentMixin> *v109; // rax
  std::shared_ptr<data::ConfigTalentMixin> *v110; // rax
  std::shared_ptr<data::ConfigTalentMixin> *v111; // rax
  std::shared_ptr<data::ConfigTalentMixin> *v112; // rax
  std::shared_ptr<data::ConfigTalentMixin> *v113; // rax
  std::shared_ptr<data::ConfigTalentMixin> *v114; // rax
  std::shared_ptr<data::ConfigTalentMixin> *v115; // rax
  std::shared_ptr<data::ConfigTalentMixin> *v116; // rax
  std::allocator<char> __a; // [rsp+Fh] [rbp-41h] BYREF
  std::shared_ptr<ConfigAbilityImpl> __r; // [rsp+10h] [rbp-40h] BYREF
  std::string __k; // [rsp+20h] [rbp-30h] BYREF

  common::tools::perf::make_shared<ConfigAbilityImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ConfigAbility", &__a);
  v0 = std::map<std::string,std::shared_ptr<data::ConfigAbility>>::operator[](
         &data::g_ConfigAbilityMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbility>::operator=<ConfigAbilityImpl>(v0, &__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ConfigAbilityImpl>::~shared_ptr(&__r);
  common::tools::perf::make_shared<AvatarSkillStartImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AvatarSkillStart", &__a);
  v1 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
         &data::g_ConfigAbilityActionMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<AvatarSkillStartImpl>(
    v1,
    (std::shared_ptr<AvatarSkillStartImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AvatarSkillStartImpl>::~shared_ptr((std::shared_ptr<AvatarSkillStartImpl> *const)&__r);
  common::tools::perf::make_shared<DebugLogImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "DebugLog", &__a);
  v2 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
         &data::g_ConfigAbilityActionMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<DebugLogImpl>(v2, (std::shared_ptr<DebugLogImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<DebugLogImpl>::~shared_ptr((std::shared_ptr<DebugLogImpl> *const)&__r);
  common::tools::perf::make_shared<HealHPImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "HealHP", &__a);
  v3 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
         &data::g_ConfigAbilityActionMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<HealHPImpl>(v3, (std::shared_ptr<HealHPImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<HealHPImpl>::~shared_ptr((std::shared_ptr<HealHPImpl> *const)&__r);
  common::tools::perf::make_shared<ReviveAvatarImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ReviveAvatar", &__a);
  v4 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
         &data::g_ConfigAbilityActionMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ReviveAvatarImpl>(v4, (std::shared_ptr<ReviveAvatarImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ReviveAvatarImpl>::~shared_ptr((std::shared_ptr<ReviveAvatarImpl> *const)&__r);
  common::tools::perf::make_shared<ReviveDeadAvatarImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ReviveDeadAvatar", &__a);
  v5 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
         &data::g_ConfigAbilityActionMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ReviveDeadAvatarImpl>(
    v5,
    (std::shared_ptr<ReviveDeadAvatarImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ReviveDeadAvatarImpl>::~shared_ptr((std::shared_ptr<ReviveDeadAvatarImpl> *const)&__r);
  common::tools::perf::make_shared<CreateGadgetImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "CreateGadget", &__a);
  v6 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
         &data::g_ConfigAbilityActionMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<CreateGadgetImpl>(v6, (std::shared_ptr<CreateGadgetImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<CreateGadgetImpl>::~shared_ptr((std::shared_ptr<CreateGadgetImpl> *const)&__r);
  common::tools::perf::make_shared<CreateMovingPlatformImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "CreateMovingPlatform", &__a);
  v7 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
         &data::g_ConfigAbilityActionMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<CreateMovingPlatformImpl>(
    v7,
    (std::shared_ptr<CreateMovingPlatformImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<CreateMovingPlatformImpl>::~shared_ptr((std::shared_ptr<CreateMovingPlatformImpl> *const)&__r);
  common::tools::perf::make_shared<KillSelfImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "KillSelf", &__a);
  v8 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
         &data::g_ConfigAbilityActionMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<KillSelfImpl>(v8, (std::shared_ptr<KillSelfImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<KillSelfImpl>::~shared_ptr((std::shared_ptr<KillSelfImpl> *const)&__r);
  common::tools::perf::make_shared<TriggerDropEquipPartsImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "TriggerDropEquipParts", &__a);
  v9 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
         &data::g_ConfigAbilityActionMap[abi:cxx11],
         &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<TriggerDropEquipPartsImpl>(
    v9,
    (std::shared_ptr<TriggerDropEquipPartsImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<TriggerDropEquipPartsImpl>::~shared_ptr((std::shared_ptr<TriggerDropEquipPartsImpl> *const)&__r);
  common::tools::perf::make_shared<TriggerThrowEquipPartImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "TriggerThrowEquipPart", &__a);
  v10 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<TriggerThrowEquipPartImpl>(
    v10,
    (std::shared_ptr<TriggerThrowEquipPartImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<TriggerThrowEquipPartImpl>::~shared_ptr((std::shared_ptr<TriggerThrowEquipPartImpl> *const)&__r);
  common::tools::perf::make_shared<TriggerCreateGadgetToEquipPartImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "TriggerCreateGadgetToEquipPart", &__a);
  v11 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<TriggerCreateGadgetToEquipPartImpl>(
    v11,
    (std::shared_ptr<TriggerCreateGadgetToEquipPartImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<TriggerCreateGadgetToEquipPartImpl>::~shared_ptr((std::shared_ptr<TriggerCreateGadgetToEquipPartImpl> *const)&__r);
  common::tools::perf::make_shared<SummonImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "Summon", &__a);
  v12 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SummonImpl>(v12, (std::shared_ptr<SummonImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SummonImpl>::~shared_ptr((std::shared_ptr<SummonImpl> *const)&__r);
  common::tools::perf::make_shared<AddServerBuffImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AddServerBuff", &__a);
  v13 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<AddServerBuffImpl>(
    v13,
    (std::shared_ptr<AddServerBuffImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AddServerBuffImpl>::~shared_ptr((std::shared_ptr<AddServerBuffImpl> *const)&__r);
  common::tools::perf::make_shared<RemoveServerBuffImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "RemoveServerBuff", &__a);
  v14 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<RemoveServerBuffImpl>(
    v14,
    (std::shared_ptr<RemoveServerBuffImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<RemoveServerBuffImpl>::~shared_ptr((std::shared_ptr<RemoveServerBuffImpl> *const)&__r);
  common::tools::perf::make_shared<ModifyAvatarSkillCDImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ModifyAvatarSkillCD", &__a);
  v15 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ModifyAvatarSkillCDImpl>(
    v15,
    (std::shared_ptr<ModifyAvatarSkillCDImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ModifyAvatarSkillCDImpl>::~shared_ptr((std::shared_ptr<ModifyAvatarSkillCDImpl> *const)&__r);
  common::tools::perf::make_shared<UseItemImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "UseItem", &__a);
  v16 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<UseItemImpl>(v16, (std::shared_ptr<UseItemImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<UseItemImpl>::~shared_ptr((std::shared_ptr<UseItemImpl> *const)&__r);
  common::tools::perf::make_shared<LoseHPImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "LoseHP", &__a);
  v17 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<LoseHPImpl>(v17, (std::shared_ptr<LoseHPImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<LoseHPImpl>::~shared_ptr((std::shared_ptr<LoseHPImpl> *const)&__r);
  common::tools::perf::make_shared<GenerateElemBallImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "GenerateElemBall", &__a);
  v18 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<GenerateElemBallImpl>(
    v18,
    (std::shared_ptr<GenerateElemBallImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<GenerateElemBallImpl>::~shared_ptr((std::shared_ptr<GenerateElemBallImpl> *const)&__r);
  common::tools::perf::make_shared<AttachAbilityStateResistanceImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AttachAbilityStateResistance", &__a);
  v19 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<AttachAbilityStateResistanceImpl>(
    v19,
    (std::shared_ptr<AttachAbilityStateResistanceImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AttachAbilityStateResistanceImpl>::~shared_ptr((std::shared_ptr<AttachAbilityStateResistanceImpl> *const)&__r);
  common::tools::perf::make_shared<AttachElementTypeResistanceImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AttachElementTypeResistance", &__a);
  v20 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<AttachElementTypeResistanceImpl>(
    v20,
    (std::shared_ptr<AttachElementTypeResistanceImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AttachElementTypeResistanceImpl>::~shared_ptr((std::shared_ptr<AttachElementTypeResistanceImpl> *const)&__r);
  common::tools::perf::make_shared<ExecuteGadgetLuaImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ExecuteGadgetLua", &__a);
  v21 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ExecuteGadgetLuaImpl>(
    v21,
    (std::shared_ptr<ExecuteGadgetLuaImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ExecuteGadgetLuaImpl>::~shared_ptr((std::shared_ptr<ExecuteGadgetLuaImpl> *const)&__r);
  common::tools::perf::make_shared<ReviveElemEnergyImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ReviveElemEnergy", &__a);
  v22 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ReviveElemEnergyImpl>(
    v22,
    (std::shared_ptr<ReviveElemEnergyImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ReviveElemEnergyImpl>::~shared_ptr((std::shared_ptr<ReviveElemEnergyImpl> *const)&__r);
  common::tools::perf::make_shared<ChangeEnviroWeatherImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ChangeEnviroWeather", &__a);
  v23 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ChangeEnviroWeatherImpl>(
    v23,
    (std::shared_ptr<ChangeEnviroWeatherImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ChangeEnviroWeatherImpl>::~shared_ptr((std::shared_ptr<ChangeEnviroWeatherImpl> *const)&__r);
  common::tools::perf::make_shared<AddClimateMeterImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AddClimateMeter", &__a);
  v24 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<AddClimateMeterImpl>(
    v24,
    (std::shared_ptr<AddClimateMeterImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AddClimateMeterImpl>::~shared_ptr((std::shared_ptr<AddClimateMeterImpl> *const)&__r);
  common::tools::perf::make_shared<ResetClimateMeterImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ResetClimateMeter", &__a);
  v25 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ResetClimateMeterImpl>(
    v25,
    (std::shared_ptr<ResetClimateMeterImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ResetClimateMeterImpl>::~shared_ptr((std::shared_ptr<ResetClimateMeterImpl> *const)&__r);
  common::tools::perf::make_shared<EquipAffixStartImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "EquipAffixStart", &__a);
  v26 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<EquipAffixStartImpl>(
    v26,
    (std::shared_ptr<EquipAffixStartImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<EquipAffixStartImpl>::~shared_ptr((std::shared_ptr<EquipAffixStartImpl> *const)&__r);
  common::tools::perf::make_shared<ServerLuaCallImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ServerLuaCall", &__a);
  v27 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ServerLuaCallImpl>(
    v27,
    (std::shared_ptr<ServerLuaCallImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ServerLuaCallImpl>::~shared_ptr((std::shared_ptr<ServerLuaCallImpl> *const)&__r);
  common::tools::perf::make_shared<KillPlayTeamEntityImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "KillPlayEntity", &__a);
  v28 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<KillPlayTeamEntityImpl>(
    v28,
    (std::shared_ptr<KillPlayTeamEntityImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<KillPlayTeamEntityImpl>::~shared_ptr((std::shared_ptr<KillPlayTeamEntityImpl> *const)&__r);
  common::tools::perf::make_shared<SetGlobalValueToOverrideMapImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetGlobalValueToOverrideMap", &__a);
  v29 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetGlobalValueToOverrideMapImpl>(
    v29,
    (std::shared_ptr<SetGlobalValueToOverrideMapImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetGlobalValueToOverrideMapImpl>::~shared_ptr((std::shared_ptr<SetGlobalValueToOverrideMapImpl> *const)&__r);
  common::tools::perf::make_shared<SetRandomOverrideMapValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetRandomOverrideMapValue", &__a);
  v30 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetRandomOverrideMapValueImpl>(
    v30,
    (std::shared_ptr<SetRandomOverrideMapValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetRandomOverrideMapValueImpl>::~shared_ptr((std::shared_ptr<SetRandomOverrideMapValueImpl> *const)&__r);
  common::tools::perf::make_shared<SetOverrideMapValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetOverrideMapValue", &__a);
  v31 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetOverrideMapValueImpl>(
    v31,
    (std::shared_ptr<SetOverrideMapValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetOverrideMapValueImpl>::~shared_ptr((std::shared_ptr<SetOverrideMapValueImpl> *const)&__r);
  common::tools::perf::make_shared<SetCrystalShieldHpToOverrideMapImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetCrystalShieldHpToOverrideMap", &__a);
  v32 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetCrystalShieldHpToOverrideMapImpl>(
    v32,
    (std::shared_ptr<SetCrystalShieldHpToOverrideMapImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetCrystalShieldHpToOverrideMapImpl>::~shared_ptr((std::shared_ptr<SetCrystalShieldHpToOverrideMapImpl> *const)&__r);
  common::tools::perf::make_shared<SetSystemValueToOverrideMapImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetSystemValueToOverrideMap", &__a);
  v33 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetSystemValueToOverrideMapImpl>(
    v33,
    (std::shared_ptr<SetSystemValueToOverrideMapImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetSystemValueToOverrideMapImpl>::~shared_ptr((std::shared_ptr<SetSystemValueToOverrideMapImpl> *const)&__r);
  common::tools::perf::make_shared<SetGlobalValueByTargetDistanceImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetGlobalValueByTargetDistance", &__a);
  v34 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetGlobalValueByTargetDistanceImpl>(
    v34,
    (std::shared_ptr<SetGlobalValueByTargetDistanceImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetGlobalValueByTargetDistanceImpl>::~shared_ptr((std::shared_ptr<SetGlobalValueByTargetDistanceImpl> *const)&__r);
  common::tools::perf::make_shared<SetCrashDamageImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetCrashDamage", &__a);
  v35 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetCrashDamageImpl>(
    v35,
    (std::shared_ptr<SetCrashDamageImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetCrashDamageImpl>::~shared_ptr((std::shared_ptr<SetCrashDamageImpl> *const)&__r);
  common::tools::perf::make_shared<ResetAbilitySpecialImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ResetAbilitySpecial", &__a);
  v36 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ResetAbilitySpecialImpl>(
    v36,
    (std::shared_ptr<ResetAbilitySpecialImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ResetAbilitySpecialImpl>::~shared_ptr((std::shared_ptr<ResetAbilitySpecialImpl> *const)&__r);
  common::tools::perf::make_shared<ChangeTagImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ChangeTag", &__a);
  v37 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ChangeTagImpl>(v37, (std::shared_ptr<ChangeTagImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ChangeTagImpl>::~shared_ptr((std::shared_ptr<ChangeTagImpl> *const)&__r);
  common::tools::perf::make_shared<CopyGlobalValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "CopyGlobalValue", &__a);
  v38 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<CopyGlobalValueImpl>(
    v38,
    (std::shared_ptr<CopyGlobalValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<CopyGlobalValueImpl>::~shared_ptr((std::shared_ptr<CopyGlobalValueImpl> *const)&__r);
  common::tools::perf::make_shared<ServerMonsterLogImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ServerMonsterLog", &__a);
  v39 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ServerMonsterLogImpl>(
    v39,
    (std::shared_ptr<ServerMonsterLogImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ServerMonsterLogImpl>::~shared_ptr((std::shared_ptr<ServerMonsterLogImpl> *const)&__r);
  common::tools::perf::make_shared<ReviveStaminaImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ReviveStamina", &__a);
  v40 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ReviveStaminaImpl>(
    v40,
    (std::shared_ptr<ReviveStaminaImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ReviveStaminaImpl>::~shared_ptr((std::shared_ptr<ReviveStaminaImpl> *const)&__r);
  common::tools::perf::make_shared<DeductStaminaImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "DeductStamina", &__a);
  v41 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<DeductStaminaImpl>(
    v41,
    (std::shared_ptr<DeductStaminaImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<DeductStaminaImpl>::~shared_ptr((std::shared_ptr<DeductStaminaImpl> *const)&__r);
  common::tools::perf::make_shared<KillServerGadgetImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "KillServerGadget", &__a);
  v42 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<KillServerGadgetImpl>(
    v42,
    (std::shared_ptr<KillServerGadgetImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<KillServerGadgetImpl>::~shared_ptr((std::shared_ptr<KillServerGadgetImpl> *const)&__r);
  common::tools::perf::make_shared<GetTeamTotalMaxEnergyToOverridemapImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "GetTeamTotalMaxEnergyToOverridemap", &__a);
  v43 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<GetTeamTotalMaxEnergyToOverridemapImpl>(
    v43,
    (std::shared_ptr<GetTeamTotalMaxEnergyToOverridemapImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<GetTeamTotalMaxEnergyToOverridemapImpl>::~shared_ptr((std::shared_ptr<GetTeamTotalMaxEnergyToOverridemapImpl> *const)&__r);
  common::tools::perf::make_shared<SetOvergrowDamgeToGlobalValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetOvergrowDamgeToGlobalValue", &__a);
  v44 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetOvergrowDamgeToGlobalValueImpl>(
    v44,
    (std::shared_ptr<SetOvergrowDamgeToGlobalValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetOvergrowDamgeToGlobalValueImpl>::~shared_ptr((std::shared_ptr<SetOvergrowDamgeToGlobalValueImpl> *const)&__r);
  common::tools::perf::make_shared<SetRegionalPlayVarValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetRegionalPlayVarValue", &__a);
  v45 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetRegionalPlayVarValueImpl>(
    v45,
    (std::shared_ptr<SetRegionalPlayVarValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetRegionalPlayVarValueImpl>::~shared_ptr((std::shared_ptr<SetRegionalPlayVarValueImpl> *const)&__r);
  common::tools::perf::make_shared<AddRegionalPlayVarValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AddRegionalPlayVarValue", &__a);
  v46 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<AddRegionalPlayVarValueImpl>(
    v46,
    (std::shared_ptr<AddRegionalPlayVarValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AddRegionalPlayVarValueImpl>::~shared_ptr((std::shared_ptr<AddRegionalPlayVarValueImpl> *const)&__r);
  common::tools::perf::make_shared<SetLogicStateValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetLogicStateValue", &__a);
  v47 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetLogicStateValueImpl>(
    v47,
    (std::shared_ptr<SetLogicStateValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetLogicStateValueImpl>::~shared_ptr((std::shared_ptr<SetLogicStateValueImpl> *const)&__r);
  common::tools::perf::make_shared<AddLogicStateValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AddLogicStateValue", &__a);
  v48 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<AddLogicStateValueImpl>(
    v48,
    (std::shared_ptr<AddLogicStateValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AddLogicStateValueImpl>::~shared_ptr((std::shared_ptr<AddLogicStateValueImpl> *const)&__r);
  common::tools::perf::make_shared<AttackByEnergyImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AttackByEnergy", &__a);
  v49 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<AttackByEnergyImpl>(
    v49,
    (std::shared_ptr<AttackByEnergyImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AttackByEnergyImpl>::~shared_ptr((std::shared_ptr<AttackByEnergyImpl> *const)&__r);
  common::tools::perf::make_shared<ServerLuaTriggerEventImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ServerLuaTriggerEvent", &__a);
  v50 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ServerLuaTriggerEventImpl>(
    v50,
    (std::shared_ptr<ServerLuaTriggerEventImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ServerLuaTriggerEventImpl>::~shared_ptr((std::shared_ptr<ServerLuaTriggerEventImpl> *const)&__r);
  common::tools::perf::make_shared<AvatarShareCDSkillStartImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AvatarShareCDSkillStart", &__a);
  v51 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<AvatarShareCDSkillStartImpl>(
    v51,
    (std::shared_ptr<AvatarShareCDSkillStartImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AvatarShareCDSkillStartImpl>::~shared_ptr((std::shared_ptr<AvatarShareCDSkillStartImpl> *const)&__r);
  common::tools::perf::make_shared<DropSubfieldImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "DropSubfield", &__a);
  v52 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<DropSubfieldImpl>(
    v52,
    (std::shared_ptr<DropSubfieldImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<DropSubfieldImpl>::~shared_ptr((std::shared_ptr<DropSubfieldImpl> *const)&__r);
  common::tools::perf::make_shared<ChangeGadgetStateImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ChangeGadgetState", &__a);
  v53 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<ChangeGadgetStateImpl>(
    v53,
    (std::shared_ptr<ChangeGadgetStateImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ChangeGadgetStateImpl>::~shared_ptr((std::shared_ptr<ChangeGadgetStateImpl> *const)&__r);
  common::tools::perf::make_shared<SetTeamFightPropertyToOverrideMapKeyImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "SetTeamFightPropertyToOverrideMapKey", &__a);
  v54 = std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::operator[](
          &data::g_ConfigAbilityActionMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityAction>::operator=<SetTeamFightPropertyToOverrideMapKeyImpl>(
    v54,
    (std::shared_ptr<SetTeamFightPropertyToOverrideMapKeyImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<SetTeamFightPropertyToOverrideMapKeyImpl>::~shared_ptr((std::shared_ptr<SetTeamFightPropertyToOverrideMapKeyImpl> *const)&__r);
  common::tools::perf::make_shared<DebugMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "DebugMixin", &__a);
  v55 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<DebugMixinImpl>(v55, (std::shared_ptr<DebugMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<DebugMixinImpl>::~shared_ptr((std::shared_ptr<DebugMixinImpl> *const)&__r);
  common::tools::perf::make_shared<AvatarSteerByCameraMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AvatarSteerByCameraMixin", &__a);
  v56 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<AvatarSteerByCameraMixinImpl>(
    v56,
    (std::shared_ptr<AvatarSteerByCameraMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AvatarSteerByCameraMixinImpl>::~shared_ptr((std::shared_ptr<AvatarSteerByCameraMixinImpl> *const)&__r);
  common::tools::perf::make_shared<CostStaminaMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "CostStaminaMixin", &__a);
  v57 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<CostStaminaMixinImpl>(
    v57,
    (std::shared_ptr<CostStaminaMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<CostStaminaMixinImpl>::~shared_ptr((std::shared_ptr<CostStaminaMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ReviveElemEnergyMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ReviveElemEnergyMixin", &__a);
  v58 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ReviveElemEnergyMixinImpl>(
    v58,
    (std::shared_ptr<ReviveElemEnergyMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ReviveElemEnergyMixinImpl>::~shared_ptr((std::shared_ptr<ReviveElemEnergyMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ElementShieldMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ElementShieldMixin", &__a);
  v59 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ElementShieldMixinImpl>(
    v59,
    (std::shared_ptr<ElementShieldMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ElementShieldMixinImpl>::~shared_ptr((std::shared_ptr<ElementShieldMixinImpl> *const)&__r);
  common::tools::perf::make_shared<EliteShieldMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "EliteShieldMixin", &__a);
  v60 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<EliteShieldMixinImpl>(
    v60,
    (std::shared_ptr<EliteShieldMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<EliteShieldMixinImpl>::~shared_ptr((std::shared_ptr<EliteShieldMixinImpl> *const)&__r);
  common::tools::perf::make_shared<GlobalMainShieldMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "GlobalMainShieldMixin", &__a);
  v61 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<GlobalMainShieldMixinImpl>(
    v61,
    (std::shared_ptr<GlobalMainShieldMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<GlobalMainShieldMixinImpl>::~shared_ptr((std::shared_ptr<GlobalMainShieldMixinImpl> *const)&__r);
  common::tools::perf::make_shared<GlobalSubShieldMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "GlobalSubShieldMixin", &__a);
  v62 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<GlobalSubShieldMixinImpl>(
    v62,
    (std::shared_ptr<GlobalSubShieldMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<GlobalSubShieldMixinImpl>::~shared_ptr((std::shared_ptr<GlobalSubShieldMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ShieldBarMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ShieldBarMixin", &__a);
  v63 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ShieldBarMixinImpl>(
    v63,
    (std::shared_ptr<ShieldBarMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ShieldBarMixinImpl>::~shared_ptr((std::shared_ptr<ShieldBarMixinImpl> *const)&__r);
  common::tools::perf::make_shared<EntityDefenceMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "EntityDefenceMixin", &__a);
  v64 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<EntityDefenceMixinImpl>(
    v64,
    (std::shared_ptr<EntityDefenceMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<EntityDefenceMixinImpl>::~shared_ptr((std::shared_ptr<EntityDefenceMixinImpl> *const)&__r);
  common::tools::perf::make_shared<MonsterDefendMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "MonsterDefendMixin", &__a);
  v65 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<MonsterDefendMixinImpl>(
    v65,
    (std::shared_ptr<MonsterDefendMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<MonsterDefendMixinImpl>::~shared_ptr((std::shared_ptr<MonsterDefendMixinImpl> *const)&__r);
  common::tools::perf::make_shared<WindSeedSpawnerMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "WindSeedSpawnerMixin", &__a);
  v66 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<WindSeedSpawnerMixinImpl>(
    v66,
    (std::shared_ptr<WindSeedSpawnerMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<WindSeedSpawnerMixinImpl>::~shared_ptr((std::shared_ptr<WindSeedSpawnerMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ServerCreateGadgetOnKillMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ServerCreateGadgetOnKillMixin", &__a);
  v67 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ServerCreateGadgetOnKillMixinImpl>(
    v67,
    (std::shared_ptr<ServerCreateGadgetOnKillMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ServerCreateGadgetOnKillMixinImpl>::~shared_ptr((std::shared_ptr<ServerCreateGadgetOnKillMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ServerFinishWatcherMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ServerFinishWatcherMixin", &__a);
  v68 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ServerFinishWatcherMixinImpl>(
    v68,
    (std::shared_ptr<ServerFinishWatcherMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ServerFinishWatcherMixinImpl>::~shared_ptr((std::shared_ptr<ServerFinishWatcherMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ModifyDamageMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ModifyDamageMixin", &__a);
  v69 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ModifyDamageMixinImpl>(
    v69,
    (std::shared_ptr<ModifyDamageMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ModifyDamageMixinImpl>::~shared_ptr((std::shared_ptr<ModifyDamageMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ElementHittingOtherPredicatedMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ElementHittingOtherPredicatedMixin", &__a);
  v70 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ElementHittingOtherPredicatedMixinImpl>(
    v70,
    (std::shared_ptr<ElementHittingOtherPredicatedMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ElementHittingOtherPredicatedMixinImpl>::~shared_ptr((std::shared_ptr<ElementHittingOtherPredicatedMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ResistClimateMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ResistClimateMixin", &__a);
  v71 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ResistClimateMixinImpl>(
    v71,
    (std::shared_ptr<ResistClimateMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ResistClimateMixinImpl>::~shared_ptr((std::shared_ptr<ResistClimateMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ModifySkillCDByModifierCountMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ModifySkillCDByModifierCountMixin", &__a);
  v72 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ModifySkillCDByModifierCountMixinImpl>(
    v72,
    (std::shared_ptr<ModifySkillCDByModifierCountMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ModifySkillCDByModifierCountMixinImpl>::~shared_ptr((std::shared_ptr<ModifySkillCDByModifierCountMixinImpl> *const)&__r);
  common::tools::perf::make_shared<MoveStateMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "MoveStateMixin", &__a);
  v73 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<MoveStateMixinImpl>(
    v73,
    (std::shared_ptr<MoveStateMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<MoveStateMixinImpl>::~shared_ptr((std::shared_ptr<MoveStateMixinImpl> *const)&__r);
  common::tools::perf::make_shared<FieldEntityCountChangeMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "FieldEntityCountChangeMixin", &__a);
  v74 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<FieldEntityCountChangeMixinImpl>(
    v74,
    (std::shared_ptr<FieldEntityCountChangeMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<FieldEntityCountChangeMixinImpl>::~shared_ptr((std::shared_ptr<FieldEntityCountChangeMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ScenePropSyncMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ScenePropSyncMixin", &__a);
  v75 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ScenePropSyncMixinImpl>(
    v75,
    (std::shared_ptr<ScenePropSyncMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ScenePropSyncMixinImpl>::~shared_ptr((std::shared_ptr<ScenePropSyncMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ClampDamageReceivedMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ClampDamageReceivedMixin", &__a);
  v76 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ClampDamageReceivedMixinImpl>(
    v76,
    (std::shared_ptr<ClampDamageReceivedMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ClampDamageReceivedMixinImpl>::~shared_ptr((std::shared_ptr<ClampDamageReceivedMixinImpl> *const)&__r);
  common::tools::perf::make_shared<DoActionBySelfModifierElementDurabilityRatioMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "DoActionBySelfModifierElementDurabilityRatioMixin", &__a);
  v77 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<DoActionBySelfModifierElementDurabilityRatioMixinImpl>(
    v77,
    (std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl>::~shared_ptr((std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl> *const)&__r);
  common::tools::perf::make_shared<FireworksLauncherMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "FireworksLauncherMixin", &__a);
  v78 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<FireworksLauncherMixinImpl>(
    v78,
    (std::shared_ptr<FireworksLauncherMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<FireworksLauncherMixinImpl>::~shared_ptr((std::shared_ptr<FireworksLauncherMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ModifyDamageCountMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ModifyDamageCountMixin", &__a);
  v79 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ModifyDamageCountMixinImpl>(
    v79,
    (std::shared_ptr<ModifyDamageCountMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ModifyDamageCountMixinImpl>::~shared_ptr((std::shared_ptr<ModifyDamageCountMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ModifyBeHitDamageMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ModifyBeHitDamageMixin", &__a);
  v80 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<ModifyBeHitDamageMixinImpl>(
    v80,
    (std::shared_ptr<ModifyBeHitDamageMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ModifyBeHitDamageMixinImpl>::~shared_ptr((std::shared_ptr<ModifyBeHitDamageMixinImpl> *const)&__r);
  common::tools::perf::make_shared<DamageStatisticsMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "DamageStatisticsMixin", &__a);
  v81 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<DamageStatisticsMixinImpl>(
    v81,
    (std::shared_ptr<DamageStatisticsMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<DamageStatisticsMixinImpl>::~shared_ptr((std::shared_ptr<DamageStatisticsMixinImpl> *const)&__r);
  common::tools::perf::make_shared<UGCTimeControlMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "UGCTimeControlMixin", &__a);
  v82 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<UGCTimeControlMixinImpl>(
    v82,
    (std::shared_ptr<UGCTimeControlMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<UGCTimeControlMixinImpl>::~shared_ptr((std::shared_ptr<UGCTimeControlMixinImpl> *const)&__r);
  common::tools::perf::make_shared<AvatarCombatMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AvatarCombatMixin", &__a);
  v83 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<AvatarCombatMixinImpl>(
    v83,
    (std::shared_ptr<AvatarCombatMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AvatarCombatMixinImpl>::~shared_ptr((std::shared_ptr<AvatarCombatMixinImpl> *const)&__r);
  common::tools::perf::make_shared<DeathZoneRegionalPlayMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "DeathZoneRegionalPlayMixin", &__a);
  v84 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<DeathZoneRegionalPlayMixinImpl>(
    v84,
    (std::shared_ptr<DeathZoneRegionalPlayMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<DeathZoneRegionalPlayMixinImpl>::~shared_ptr((std::shared_ptr<DeathZoneRegionalPlayMixinImpl> *const)&__r);
  common::tools::perf::make_shared<EraseBrickActivityMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "EraseBrickActivityMixin", &__a);
  v85 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<EraseBrickActivityMixinImpl>(
    v85,
    (std::shared_ptr<EraseBrickActivityMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<EraseBrickActivityMixinImpl>::~shared_ptr((std::shared_ptr<EraseBrickActivityMixinImpl> *const)&__r);
  common::tools::perf::make_shared<BreakoutMixinImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "BreakoutMixin", &__a);
  v86 = std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::operator[](
          &data::g_ConfigAbilityMixinMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityMixin>::operator=<BreakoutMixinImpl>(
    v86,
    (std::shared_ptr<BreakoutMixinImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<BreakoutMixinImpl>::~shared_ptr((std::shared_ptr<BreakoutMixinImpl> *const)&__r);
  common::tools::perf::make_shared<ByTargetHPRatioImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByTargetHPRatio", &__a);
  v87 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByTargetHPRatioImpl>(
    v87,
    (std::shared_ptr<ByTargetHPRatioImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByTargetHPRatioImpl>::~shared_ptr((std::shared_ptr<ByTargetHPRatioImpl> *const)&__r);
  common::tools::perf::make_shared<ByNotImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByNot", &__a);
  v88 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByNotImpl>(v88, (std::shared_ptr<ByNotImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByNotImpl>::~shared_ptr((std::shared_ptr<ByNotImpl> *const)&__r);
  common::tools::perf::make_shared<ByAndImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByAnd", &__a);
  v89 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByAndImpl>(v89, (std::shared_ptr<ByAndImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByAndImpl>::~shared_ptr((std::shared_ptr<ByAndImpl> *const)&__r);
  common::tools::perf::make_shared<ByTargetIsSelfImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByTargetIsSelf", &__a);
  v90 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByTargetIsSelfImpl>(
    v90,
    (std::shared_ptr<ByTargetIsSelfImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByTargetIsSelfImpl>::~shared_ptr((std::shared_ptr<ByTargetIsSelfImpl> *const)&__r);
  common::tools::perf::make_shared<ByTargetGlobalValueImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByTargetGlobalValue", &__a);
  v91 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByTargetGlobalValueImpl>(
    v91,
    (std::shared_ptr<ByTargetGlobalValueImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByTargetGlobalValueImpl>::~shared_ptr((std::shared_ptr<ByTargetGlobalValueImpl> *const)&__r);
  common::tools::perf::make_shared<ByAnyImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByAny", &__a);
  v92 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByAnyImpl>(v92, (std::shared_ptr<ByAnyImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByAnyImpl>::~shared_ptr((std::shared_ptr<ByAnyImpl> *const)&__r);
  common::tools::perf::make_shared<ByAttackTagsImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByAttackTags", &__a);
  v93 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByAttackTagsImpl>(
    v93,
    (std::shared_ptr<ByAttackTagsImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByAttackTagsImpl>::~shared_ptr((std::shared_ptr<ByAttackTagsImpl> *const)&__r);
  common::tools::perf::make_shared<ByAttackTypeImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByAttackType", &__a);
  v94 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByAttackTypeImpl>(
    v94,
    (std::shared_ptr<ByAttackTypeImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByAttackTypeImpl>::~shared_ptr((std::shared_ptr<ByAttackTypeImpl> *const)&__r);
  common::tools::perf::make_shared<ByCompareWithTargetImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByCompareWithTarget", &__a);
  v95 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByCompareWithTargetImpl>(
    v95,
    (std::shared_ptr<ByCompareWithTargetImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByCompareWithTargetImpl>::~shared_ptr((std::shared_ptr<ByCompareWithTargetImpl> *const)&__r);
  common::tools::perf::make_shared<ByEntityTypesImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByEntityTypes", &__a);
  v96 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByEntityTypesImpl>(
    v96,
    (std::shared_ptr<ByEntityTypesImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByEntityTypesImpl>::~shared_ptr((std::shared_ptr<ByEntityTypesImpl> *const)&__r);
  common::tools::perf::make_shared<ByHasAbilityStateImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByHasAbilityState", &__a);
  v97 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByHasAbilityStateImpl>(
    v97,
    (std::shared_ptr<ByHasAbilityStateImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByHasAbilityStateImpl>::~shared_ptr((std::shared_ptr<ByHasAbilityStateImpl> *const)&__r);
  common::tools::perf::make_shared<ByHasElementImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByHasElement", &__a);
  v98 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByHasElementImpl>(
    v98,
    (std::shared_ptr<ByHasElementImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByHasElementImpl>::~shared_ptr((std::shared_ptr<ByHasElementImpl> *const)&__r);
  common::tools::perf::make_shared<ByHasFeatureTagImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByHasFeatureTag", &__a);
  v99 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
          &data::g_ConfigAbilityPredicateMap[abi:cxx11],
          &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByHasFeatureTagImpl>(
    v99,
    (std::shared_ptr<ByHasFeatureTagImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByHasFeatureTagImpl>::~shared_ptr((std::shared_ptr<ByHasFeatureTagImpl> *const)&__r);
  common::tools::perf::make_shared<ByHasShieldImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByHasShield", &__a);
  v100 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
           &data::g_ConfigAbilityPredicateMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByHasShieldImpl>(
    v100,
    (std::shared_ptr<ByHasShieldImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByHasShieldImpl>::~shared_ptr((std::shared_ptr<ByHasShieldImpl> *const)&__r);
  common::tools::perf::make_shared<ByHitBoxTypeImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByHitBoxType", &__a);
  v101 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
           &data::g_ConfigAbilityPredicateMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByHitBoxTypeImpl>(
    v101,
    (std::shared_ptr<ByHitBoxTypeImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByHitBoxTypeImpl>::~shared_ptr((std::shared_ptr<ByHitBoxTypeImpl> *const)&__r);
  common::tools::perf::make_shared<ByTargetHPRatioImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByTargetHPRatio", &__a);
  v102 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
           &data::g_ConfigAbilityPredicateMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByTargetHPRatioImpl>(
    v102,
    (std::shared_ptr<ByTargetHPRatioImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByTargetHPRatioImpl>::~shared_ptr((std::shared_ptr<ByTargetHPRatioImpl> *const)&__r);
  common::tools::perf::make_shared<ByTargetLayoutAreaImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByTargetLayoutArea", &__a);
  v103 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
           &data::g_ConfigAbilityPredicateMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByTargetLayoutAreaImpl>(
    v103,
    (std::shared_ptr<ByTargetLayoutAreaImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByTargetLayoutAreaImpl>::~shared_ptr((std::shared_ptr<ByTargetLayoutAreaImpl> *const)&__r);
  common::tools::perf::make_shared<ByTargetForwardAndSelfPositionImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByTargetForwardAndSelfPosition", &__a);
  v104 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
           &data::g_ConfigAbilityPredicateMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByTargetForwardAndSelfPositionImpl>(
    v104,
    (std::shared_ptr<ByTargetForwardAndSelfPositionImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByTargetForwardAndSelfPositionImpl>::~shared_ptr((std::shared_ptr<ByTargetForwardAndSelfPositionImpl> *const)&__r);
  common::tools::perf::make_shared<ByUnlockTalentParamImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByUnlockTalentParam", &__a);
  v105 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
           &data::g_ConfigAbilityPredicateMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByUnlockTalentParamImpl>(
    v105,
    (std::shared_ptr<ByUnlockTalentParamImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByUnlockTalentParamImpl>::~shared_ptr((std::shared_ptr<ByUnlockTalentParamImpl> *const)&__r);
  common::tools::perf::make_shared<ByHitElementImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByHitElement", &__a);
  v106 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
           &data::g_ConfigAbilityPredicateMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByHitElementImpl>(
    v106,
    (std::shared_ptr<ByHitElementImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByHitElementImpl>::~shared_ptr((std::shared_ptr<ByHitElementImpl> *const)&__r);
  common::tools::perf::make_shared<ByElementReactionTypeImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByElementReactionType", &__a);
  v107 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
           &data::g_ConfigAbilityPredicateMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByElementReactionTypeImpl>(
    v107,
    (std::shared_ptr<ByElementReactionTypeImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByElementReactionTypeImpl>::~shared_ptr((std::shared_ptr<ByElementReactionTypeImpl> *const)&__r);
  common::tools::perf::make_shared<ByTargetIsCasterImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ByTargetIsCaster", &__a);
  v108 = std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::operator[](
           &data::g_ConfigAbilityPredicateMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigAbilityPredicate>::operator=<ByTargetIsCasterImpl>(
    v108,
    (std::shared_ptr<ByTargetIsCasterImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ByTargetIsCasterImpl>::~shared_ptr((std::shared_ptr<ByTargetIsCasterImpl> *const)&__r);
  common::tools::perf::make_shared<ConfigAbilityModifierFactoryImpl>();
  std::shared_ptr<data::ConfigAbilityModifierFactory>::operator=<ConfigAbilityModifierFactoryImpl>(
    &data::ConfigAbilityModifierFactory::instance_ptr,
    (std::shared_ptr<ConfigAbilityModifierFactoryImpl> *)&__r);
  std::shared_ptr<ConfigAbilityModifierFactoryImpl>::~shared_ptr((std::shared_ptr<ConfigAbilityModifierFactoryImpl> *const)&__r);
  common::tools::perf::make_shared<AddAbilityImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AddAbility", &__a);
  v109 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
           &data::g_ConfigTalentMixinMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigTalentMixin>::operator=<AddAbilityImpl>(v109, (std::shared_ptr<AddAbilityImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AddAbilityImpl>::~shared_ptr((std::shared_ptr<AddAbilityImpl> *const)&__r);
  common::tools::perf::make_shared<ModifyAbilityImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ModifyAbility", &__a);
  v110 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
           &data::g_ConfigTalentMixinMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigTalentMixin>::operator=<ModifyAbilityImpl>(
    v110,
    (std::shared_ptr<ModifyAbilityImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ModifyAbilityImpl>::~shared_ptr((std::shared_ptr<ModifyAbilityImpl> *const)&__r);
  common::tools::perf::make_shared<UnlockTalentParamImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "UnlockTalentParam", &__a);
  v111 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
           &data::g_ConfigTalentMixinMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigTalentMixin>::operator=<UnlockTalentParamImpl>(
    v111,
    (std::shared_ptr<UnlockTalentParamImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<UnlockTalentParamImpl>::~shared_ptr((std::shared_ptr<UnlockTalentParamImpl> *const)&__r);
  common::tools::perf::make_shared<UnlockControllerConditionsImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "UnlockControllerConditions", &__a);
  v112 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
           &data::g_ConfigTalentMixinMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigTalentMixin>::operator=<UnlockControllerConditionsImpl>(
    v112,
    (std::shared_ptr<UnlockControllerConditionsImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<UnlockControllerConditionsImpl>::~shared_ptr((std::shared_ptr<UnlockControllerConditionsImpl> *const)&__r);
  common::tools::perf::make_shared<ModifySkillCDImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ModifySkillCD", &__a);
  v113 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
           &data::g_ConfigTalentMixinMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigTalentMixin>::operator=<ModifySkillCDImpl>(
    v113,
    (std::shared_ptr<ModifySkillCDImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ModifySkillCDImpl>::~shared_ptr((std::shared_ptr<ModifySkillCDImpl> *const)&__r);
  common::tools::perf::make_shared<ModifySkillCostImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ModifySkillCost", &__a);
  v114 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
           &data::g_ConfigTalentMixinMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigTalentMixin>::operator=<ModifySkillCostImpl>(
    v114,
    (std::shared_ptr<ModifySkillCostImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ModifySkillCostImpl>::~shared_ptr((std::shared_ptr<ModifySkillCostImpl> *const)&__r);
  common::tools::perf::make_shared<ModifySkillPointImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "ModifySkillPoint", &__a);
  v115 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
           &data::g_ConfigTalentMixinMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigTalentMixin>::operator=<ModifySkillPointImpl>(
    v115,
    (std::shared_ptr<ModifySkillPointImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<ModifySkillPointImpl>::~shared_ptr((std::shared_ptr<ModifySkillPointImpl> *const)&__r);
  common::tools::perf::make_shared<AddTalentExtraLevelImpl>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "AddTalentExtraLevel", &__a);
  v116 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
           &data::g_ConfigTalentMixinMap[abi:cxx11],
           &__k);
  std::shared_ptr<data::ConfigTalentMixin>::operator=<AddTalentExtraLevelImpl>(
    v116,
    (std::shared_ptr<AddTalentExtraLevelImpl> *)&__r);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  std::shared_ptr<AddTalentExtraLevelImpl>::~shared_ptr((std::shared_ptr<AddTalentExtraLevelImpl> *const)&__r);
};

// Line 168: range 00000000130D4E8E-00000000130D4F16
void __cdecl AbilityConfigImplMgr::destroy()
{
  std::shared_ptr<data::ConfigAbilityModifierFactory> __r; // [rsp+0h] [rbp-10h] BYREF

  std::map<std::string,std::shared_ptr<data::ConfigAbility>>::clear(&data::g_ConfigAbilityMap[abi:cxx11]);
  std::map<std::string,std::shared_ptr<data::ConfigAbilityAction>>::clear(&data::g_ConfigAbilityActionMap[abi:cxx11]);
  std::map<std::string,std::shared_ptr<data::ConfigAbilityMixin>>::clear(&data::g_ConfigAbilityMixinMap[abi:cxx11]);
  std::map<std::string,std::shared_ptr<data::ConfigAbilityPredicate>>::clear(&data::g_ConfigAbilityPredicateMap[abi:cxx11]);
  std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::clear(&data::g_ConfigTalentMixinMap[abi:cxx11]);
  std::shared_ptr<data::ConfigAbilityModifierFactory>::shared_ptr(&__r, 0LL);
  std::shared_ptr<data::ConfigAbilityModifierFactory>::operator=(
    &data::ConfigAbilityModifierFactory::instance_ptr,
    &__r);
  std::shared_ptr<data::ConfigAbilityModifierFactory>::~shared_ptr(&__r);
};

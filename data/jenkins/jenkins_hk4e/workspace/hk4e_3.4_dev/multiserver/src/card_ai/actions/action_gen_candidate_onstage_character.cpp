// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_gen_candidate_onstage_character.cpp

// Line 23: range 000000000D7D4FC6-000000000D7D5743
BT::NodeStatus __cdecl BT::ActionGenCandidateOnstageCharacter::tick(BT::ActionGenCandidateOnstageCharacter *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  BT::NodeStatus v4; // r14d
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<BTActionGenCandidateOnstageCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGDuel *Duel; // rax
  GCGDiceZone *DiceZone; // rax
  GCGCharacterZone *CharacterZone; // r14
  BT::NodeStatus result; // eax
  BT::ActionGenCandidateOnstageCharacter::tick::<lambda(GCGCard&)> v16; // [rsp-30h] [rbp-210h]
  int32_t base_priority; // [rsp+14h] [rbp-1CCh]
  GCGControllerValue cur_controller_id; // [rsp+18h] [rbp-1C8h]
  uint32_t ai_card_group_id; // [rsp+1Ch] [rbp-1C4h]
  std::map<data::CharacterOnstagePriorReviseType,int> *revise_map; // [rsp+30h] [rbp-1B0h]
  GCGGameMode *game_mode; // [rsp+38h] [rbp-1A8h]
  GCGField *field; // [rsp+40h] [rbp-1A0h]
  std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+48h] [rbp-198h]
  std::shared_ptr<BTNodeConfigBase> __r; // [rsp+50h] [rbp-190h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-180h] BYREF
  common::milog::MiLogStream v26; // [rsp+80h] [rbp-160h] BYREF
  BT::ActionGenCandidateOnstageCharacter::tick::<lambda(GCGCard&)> __f; // [rsp+A0h] [rbp-140h]
  char v28[272]; // [rsp+D0h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 17 blackboard_ptr:32 64 16 17 controller_ptr:39 96 24 16 candidate_vec:61 160 32 19 global_logic_key:40";
  *(_QWORD *)(v1 + 16) = BT::ActionGenCandidateOnstageCharacter::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862726] = -202116109;
  BT::TreeNode::getConfig(this);
  std::dynamic_pointer_cast<BTActionGenCandidateOnstageCharacterConfig,BTNodeConfigBase>(&__r);
  if ( std::operator==<BTActionGenCandidateOnstageCharacterConfig>(
         0LL,
         (const std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig> *)&__r) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/actions/action_gen_candidate_onstage_character.cpp",
      "tick",
      28);
    common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
      &v26,
      (const char (*)[63])"ActionGenCandidateOnstageCharacter: node_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v4 = FAILURE;
  }
  else
  {
    BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 32));
    if ( std::operator==<BT::Blackboard>(0LL, (const std::shared_ptr<BT::Blackboard> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_gen_candidate_onstage_character.cpp",
        "tick",
        35);
      v5 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v25,
             (const char (*)[68])"ActionGenCandidateOnstageCharacter blackboard_ptr is nullptr, name:");
      BT::TreeNode::getName[abi:cxx11]((std::string *)&v26, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, (const std::string *)&v26);
      std::string::~string(&v26);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v4 = FAILURE;
    }
    else
    {
      std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 64), 0LL);
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(v1 + 160),
        BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
      v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
              v6,
              (const std::string *)(v1 + 160),
              (std::shared_ptr<GCGAIController> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_gen_candidate_onstage_character.cpp",
          "tick",
          43);
        v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v25, (const char (*)[14])off_1BA263E0);
        BT::BlackboardUtil::resolveGlobalKey((std::string *)&v26, (const std::string *)(v1 + 160));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v26);
        std::string::~string(&v26);
        common::milog::MiLogStream::~MiLogStream(&v25);
        v4 = FAILURE;
      }
      else if ( std::operator==<GCGAIController>(0LL, (const std::shared_ptr<GCGAIController> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_gen_candidate_onstage_character.cpp",
          "tick",
          48);
        v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v26,
               (const char (*)[32])"controller_ptr is nullptr, key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 160));
        common::milog::MiLogStream::~MiLogStream(&v26);
        v4 = FAILURE;
      }
      else
      {
        v9 = std::__shared_ptr_access<BTActionGenCandidateOnstageCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenCandidateOnstageCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r);
        if ( *(_BYTE *)(((unsigned __int64)&v9->param1.value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v9->param1.value >> 3) + 0x7FFF8000) <= 3 )
        {
          v9 = (std::__shared_ptr_access<BTActionGenCandidateOnstageCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->param1.value);
        }
        base_priority = v9->param1.value;
        revise_map = &std::__shared_ptr_access<BTActionGenCandidateOnstageCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenCandidateOnstageCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->param2.value;
        v10 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        game_mode = GCGControllerBase::getGameMode(v10);
        v11 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        cur_controller_id = GCGControllerBase::getControllerId(v11);
        Duel = GCGGameMode::getDuel(game_mode);
        field = GCGDuel::getField(Duel, cur_controller_id);
        ai_card_group_id = GCGGameMode::getControllerCardGroupId(game_mode, cur_controller_id);
        DiceZone = GCGField::getDiceZone(field);
        dice_vec = GCGDiceZone::getDiceVec(DiceZone);
        std::vector<BT::CandidateOnstageCharacterInfo>::vector((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v1 + 96));
        CharacterZone = GCGField::getCharacterZone(field);
        __f.__game_mode = game_mode;
        __f.__ai_card_group_id = ai_card_group_id;
        __f.__dice_vec = dice_vec;
        __f.__base_priority = base_priority;
        __f.__revise_map = revise_map;
        __f.__candidate_vec = (std::vector<BT::CandidateOnstageCharacterInfo> *)(v1 + 96);
        v16.__candidate_vec = (std::vector<BT::CandidateOnstageCharacterInfo> *)(v1 + 96);
        v16.__revise_map = revise_map;
        *(_OWORD *)&v16.__dice_vec = __PAIR128__(*(unsigned __int64 *)&__f.__base_priority, (unsigned __int64)dice_vec);
        *(_OWORD *)&v16.__game_mode = __PAIR128__(
                                        *(unsigned __int64 *)&__f.__ai_card_group_id,
                                        (unsigned __int64)game_mode);
        std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionGenCandidateOnstageCharacter::tick(void)::{lambda(GCGCard &)#1},void,void>(
          (std::function<ForeachPolicy(GCGCard&)> *const)&v26,
          v16);
        GCGCharacterZone::foreachAliveCharacter(CharacterZone, (std::function<ForeachPolicy(GCGCard&)> *)&v26);
        std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v26);
        BT::BlackboardUtil::addCandidateOnstageCharacterVec(
          (BT::BlackboardPtr *)(v1 + 32),
          (const std::vector<BT::CandidateOnstageCharacterInfo> *)(v1 + 96));
        v4 = SUCCESS;
        std::vector<BT::CandidateOnstageCharacterInfo>::~vector((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v1 + 96));
      }
      std::string::~string((void *)(v1 + 160));
      std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 64));
    }
    std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 32));
  }
  std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig>::~shared_ptr((std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig> *const)&__r);
  result = v4;
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 62: range 000000000D7D4724-000000000D7D4FC5
ForeachPolicy __cdecl BT::ActionGenCandidateOnstageCharacter::tick(void)::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionGenCandidateOnstageCharacter::tick::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGEffectElementType ElementType; // eax
  ForeachPolicy result; // eax
  proto::GCGDiceSideType *v7; // rax
  proto::GCGDiceSideType *v8; // rdx
  proto::GCGDiceSideType *v9; // rax
  proto::GCGDiceSideType *v10; // rdx
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // r14
  uint32_t Id; // ecx
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned int val; // [rsp+10h] [rbp-130h] BYREF
  unsigned int Guid; // [rsp+14h] [rbp-12Ch] BYREF
  proto::GCGDiceSideType character_dice_type; // [rsp+18h] [rbp-128h]
  proto::GCGDiceSideType dice_type; // [rsp+1Ch] [rbp-124h]
  std::vector<proto::GCGDiceSideType>::const_iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  const std::vector<proto::GCGDiceSideType> *__for_range; // [rsp+28h] [rbp-118h]
  const std::map<data::CharacterOnstagePriorReviseType,int> *__for_range_0; // [rsp+30h] [rbp-110h]
  const std::pair<const data::CharacterOnstagePriorReviseType,int> *v32; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<const data::CharacterOnstagePriorReviseType,int> >::type *revise_type; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<const data::CharacterOnstagePriorReviseType,int> >::type *revise_num; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 17 available_cost:65 48 4 10 rest_hp:81 64 4 18 protected_prior:83 80 4 11 priority:85 96"
                        " 8 26 character_dice_type_opt:66 128 8 36 candidate_onstage_character_info:106";
  *(_QWORD *)(v2 + 16) = BT::ActionGenCandidateOnstageCharacter::tick(void)::{lambda(GCGCard &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 32) = 0;
  ElementType = GCGCard::getElementType(card);
  *(std::optional<proto::GCGDiceSideType> *)(v2 + 96) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(ElementType);
  if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v2 + 96)) )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    v7 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v2 + 96));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    character_dice_type = *v8;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__dice_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__dice_vec);
    __for_range = __closure->__dice_vec;
    __for_begin._M_current = std::vector<proto::GCGDiceSideType>::begin(__for_range)._M_current;
    *(std::vector<proto::GCGDiceSideType>::const_iterator *)(v2 + 128) = std::vector<proto::GCGDiceSideType>::end(__for_range);
    while ( __gnu_cxx::operator!=<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > *)(v2 + 128)) )
    {
      v9 = (proto::GCGDiceSideType *)__gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      dice_type = *v10;
      if ( dice_type == GCG_DICE_SIDE_PAIMON || character_dice_type == dice_type )
        ++*(_DWORD *)(v2 + 32);
      __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin);
    }
    *(_DWORD *)(v2 + 48) = GCGCard::getToken(card, GCG_TOKEN_HP);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    Config = GCGGameMode::getConfig(__closure->__game_mode);
    GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
    Id = GCGCard::getId(card);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__ai_card_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__ai_card_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__closure->__ai_card_group_id);
    }
    *(_DWORD *)(v2 + 64) = GCGGameExcelConfigMgr::getDeckCardProtectedPriority(
                             GCGGameExcelConfigMgr,
                             __closure->__ai_card_group_id,
                             Id);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__base_priority >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__base_priority >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__closure->__base_priority);
    }
    *(_DWORD *)(v2 + 80) = __closure->__base_priority;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__revise_map);
    __for_range_0 = __closure->__revise_map;
    __for_begin._M_current = (const proto::GCGDiceSideType *)std::map<data::CharacterOnstagePriorReviseType,int>::begin(__for_range_0)._M_node;
    *(std::map<data::CharacterOnstagePriorReviseType,int>::const_iterator *)(v2 + 128) = std::map<data::CharacterOnstagePriorReviseType,int>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const data::CharacterOnstagePriorReviseType,int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<const data::CharacterOnstagePriorReviseType,int> >::_Self *)(v2 + 128)) )
    {
      v32 = std::_Rb_tree_const_iterator<std::pair<data::CharacterOnstagePriorReviseType const,int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::CharacterOnstagePriorReviseType,int> > *const)&__for_begin);
      revise_type = std::get<0ul,data::CharacterOnstagePriorReviseType const,int>(v32);
      revise_num = (std::tuple_element<1,const std::pair<const data::CharacterOnstagePriorReviseType,int> >::type *)std::get<1ul,data::CharacterOnstagePriorReviseType const,int>(v32);
      if ( *(_BYTE *)(((unsigned __int64)revise_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)revise_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(revise_type);
      }
      if ( *revise_type == AVAILABLE_COST )
      {
        if ( *(_BYTE *)(((unsigned __int64)revise_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)revise_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(revise_num);
        }
        *(_DWORD *)(v2 + 80) += *revise_num * *(_DWORD *)(v2 + 32);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)revise_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)revise_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(revise_type);
        }
        if ( *revise_type == REST_HP )
        {
          if ( *(_BYTE *)(((unsigned __int64)revise_num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)revise_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_num >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(revise_num);
          }
          *(_DWORD *)(v2 + 80) += *revise_num * *(_DWORD *)(v2 + 48);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)revise_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)revise_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_type >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(revise_type);
          }
          if ( *revise_type == PROTECTED_PRIOR )
          {
            if ( *(_BYTE *)(((unsigned __int64)revise_num >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)revise_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_num >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(revise_num);
            }
            *(_DWORD *)(v2 + 80) += *revise_num * *(_DWORD *)(v2 + 64);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_ai/actions/action_gen_candidate_onstage_character.cpp",
              "operator()",
              102);
            common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v35,
              (const char (*)[56])"ActionGenCandidateOnstageCharacter: invalid revise_type");
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
        }
      }
      std::_Rb_tree_const_iterator<std::pair<data::CharacterOnstagePriorReviseType const,int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::CharacterOnstagePriorReviseType,int> > *const)&__for_begin);
    }
    *(_DWORD *)(v2 + 128) = 0;
    *(_DWORD *)(v2 + 132) = 0;
    *(_DWORD *)(v2 + 128) = GCGCard::getGuid(card);
    *(_DWORD *)(v2 + 132) = *(_DWORD *)(v2 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__candidate_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__candidate_vec);
    std::vector<BT::CandidateOnstageCharacterInfo>::push_back(
      __closure->__candidate_vec,
      (const std::vector<BT::CandidateOnstageCharacterInfo>::value_type *)(v2 + 128));
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/actions/action_gen_candidate_onstage_character.cpp",
      "operator()",
      111);
    v14 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v35,
            (const char (*)[45])"ActionGenCandidateOnstageCharacter card_id: ");
    val = GCGCard::getId(card);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" ,guid: ");
    Guid = GCGCard::getGuid(card);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &Guid);
    v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])" ,available_cost: ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
    v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" ,rest_hp: ");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
    v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v21,
            (const char (*)[20])" ,protected_prior: ");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 64));
    v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])" ,priority: ");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = FOREACH_CONTINUE;
  }
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

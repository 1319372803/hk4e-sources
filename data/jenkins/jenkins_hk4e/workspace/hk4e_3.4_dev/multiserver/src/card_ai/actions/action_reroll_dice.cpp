// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_reroll_dice.cpp

// Line 26: range 000000000DE80BA8-000000000DE8149E
BT::NodeStatus __cdecl BT::ActionRerollDice::tick(BT::ActionRerollDice *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  BT::NodeStatus v5; // r14d
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  BT::Blackboard *v15; // rax
  GCGDiceZone *DiceZone; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  BT::NodeStatus result; // eax
  GCGControllerValue cur_controller_id; // [rsp+1Ch] [rbp-244h]
  GCGGameMode *game_mode; // [rsp+28h] [rbp-238h]
  GCGField *field; // [rsp+30h] [rbp-230h]
  std::set<unsigned int> *need_reroll_dice_index_set; // [rsp+38h] [rbp-228h]
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+40h] [rbp-220h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-210h] BYREF
  std::string val; // [rsp+70h] [rbp-1F0h] BYREF
  char v29[464]; // [rsp+90h] [rbp-1D0h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(416LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 16 17 blackboard_ptr:28 80 16 17 controller_ptr:34 112 16 23 reroll_operation_ptr:49 144 24"
                        " 11 dice_vec:63 208 32 19 global_logic_key:35 272 32 23 global_dice_pool_key:53 336 48 26 reserv"
                        "e_dice_result_map:54";
  *(_QWORD *)(v1 + 16) = BT::ActionRerollDice::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = -218959360;
  v3[536862726] = 62194;
  v3[536862727] = -219021312;
  v3[536862728] = 62194;
  v3[536862729] = -219021312;
  v3[536862730] = 62194;
  v3[536862732] = -202116109;
  BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 48));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/actions/action_reroll_dice.cpp",
      "tick",
      31);
    v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v27,
           (const char (*)[50])"ActionRerollDice blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = FAILURE;
  }
  else
  {
    std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 80), 0LL);
    BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
      (std::string *)(v1 + 208),
      BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
    v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
            v6,
            (const std::string *)(v1 + 208),
            (std::shared_ptr<GCGAIController> *)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_reroll_dice.cpp",
        "tick",
        38);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v27, (const char (*)[14])off_1BB455C0);
      BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 208));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = FAILURE;
    }
    else if ( std::operator==<GCGAIController>((const std::shared_ptr<GCGAIController> *)(v1 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_reroll_dice.cpp",
        "tick",
        43);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[32])"controller_ptr is nullptr, key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v5 = FAILURE;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      game_mode = GCGControllerBase::getGameMode(v9);
      v10 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      cur_controller_id = GCGControllerBase::getControllerId(v10);
      Duel = GCGGameMode::getDuel(game_mode);
      field = GCGDuel::getField(Duel, cur_controller_id);
      common::tools::perf::make_shared<GCGOperationReroll>();
      v12 = std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v12->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v12 = (std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v12->controller_id);
      }
      v12->controller_id = cur_controller_id;
      need_reroll_dice_index_set = &std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112))->select_dice_set;
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(v1 + 272),
        BLACK_BOARD_GLOBAL_KEY_RESERVE_DICE_POOL);
      std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v1 + 336));
      v13 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      if ( !BT::Blackboard::get<std::map<proto::GCGDiceSideType,unsigned int>>(
              v13,
              (const std::string *)(v1 + 272),
              (std::map<proto::GCGDiceSideType,unsigned int> *)(v1 + 336)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/action_reroll_dice.cpp",
          "tick",
          58);
        v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v27, (const char (*)[27])off_1BB45DE0);
        BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 272));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      v15 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      BT::Blackboard::clearAny(v15, (const std::string *)(v1 + 272));
      DiceZone = GCGField::getDiceZone(field);
      DiceVec = GCGDiceZone::getDiceVec(DiceZone);
      std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v1 + 144), DiceVec);
      BT::ActionRerollDice::getRerollIndexSet(
        this,
        (const std::map<proto::GCGDiceSideType,unsigned int> *)(v1 + 336),
        (const std::vector<proto::GCGDiceSideType> *)(v1 + 144),
        need_reroll_dice_index_set);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/actions/action_reroll_dice.cpp",
        "tick",
        66);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[16])"dice_index_set:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int>(v18, need_reroll_dice_index_set);
      v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])", dice_vec:");
      common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(
        v20,
        (const std::vector<proto::GCGDiceSideType> *)(v1 + 144));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationReroll,void>(
        &p_operation_ptr,
        (const std::shared_ptr<GCGOperationReroll> *)(v1 + 112));
      GCGGameMode::process(game_mode, &p_operation_ptr);
      std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
      v5 = SUCCESS;
      std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v1 + 144));
      std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v1 + 336));
      std::string::~string((void *)(v1 + 272));
      std::shared_ptr<GCGOperationReroll>::~shared_ptr((std::shared_ptr<GCGOperationReroll> *const)(v1 + 112));
    }
    std::string::~string((void *)(v1 + 208));
    std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 80));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 48));
  result = v5;
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 72: range 000000000DE814A0-000000000DE81756
void __cdecl BT::ActionRerollDice::getRerollIndexSet(
        BT::ActionRerollDice *const this,
        const std::map<proto::GCGDiceSideType,unsigned int> *reserve_dice_result_map,
        const std::vector<proto::GCGDiceSideType> *dice_vec,
        std::set<unsigned int> *need_reroll_index_set)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  size_t v7; // rax
  std::vector<proto::GCGDiceSideType>::const_reference v8; // rax
  _DWORD *v9; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  unsigned __int64 v12; // rax
  std::set<unsigned int>::value_type __x; // [rsp+24h] [rbp-ACh] BYREF
  size_t dice_index; // [rsp+28h] [rbp-A8h]
  char v17[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 4 12 dice_type:76 48 48 14 reserve_map:73";
  *(_QWORD *)(v4 + 16) = BT::ActionRerollDice::getRerollIndexSet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862723] = -202116109;
  std::map<proto::GCGDiceSideType,unsigned int>::map(
    (std::map<proto::GCGDiceSideType,unsigned int> *const)(v4 + 48),
    reserve_dice_result_map);
  for ( dice_index = 0LL; ; ++dice_index )
  {
    v7 = std::vector<proto::GCGDiceSideType>::size(dice_vec);
    if ( dice_index >= v7 )
      break;
    v8 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, dice_index);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v4 + 32) = *v9;
    if ( *(_DWORD *)(v4 + 32) )
    {
      v10 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
              (std::map<proto::GCGDiceSideType,unsigned int> *const)(v4 + 48),
              (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v4 + 32));
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      if ( *v11 )
      {
        v12 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                  (std::map<proto::GCGDiceSideType,unsigned int> *const)(v4 + 48),
                                  (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v4 + 32));
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load4(v12);
        --*(_DWORD *)v12;
      }
      else
      {
        __x = dice_index;
        std::set<unsigned int>::insert(need_reroll_index_set, &__x);
      }
    }
  }
  std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v4 + 48));
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

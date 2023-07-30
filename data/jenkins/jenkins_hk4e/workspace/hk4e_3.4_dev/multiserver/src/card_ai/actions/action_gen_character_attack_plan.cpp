// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_gen_character_attack_plan.cpp

// Line 28: range 000000000DE7E548-000000000DE7EDDA
BT::NodeStatus __cdecl BT::ActionGenCharacterPlan::tick(BT::ActionGenCharacterPlan *const this)
{
  unsigned __int64 p_M_refcount; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  BT::NodeStatus v4; // r14d
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  BT::Blackboard *v13; // rax
  std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::shared_ptr<BT::ActionPlanBase> *v15; // rax
  std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  BT::NodeStatus result; // eax
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::iterator __for_begin; // [rsp+18h] [rbp-228h] BYREF
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::iterator __for_end; // [rsp+20h] [rbp-220h] BYREF
  const BT::NodeConfigure *config; // [rsp+28h] [rbp-218h]
  const std::shared_ptr<BTActionGenCharacterPlanConfig> *node_config_ptr; // [rsp+30h] [rbp-210h]
  GCGGameMode *game_mode; // [rsp+38h] [rbp-208h]
  GCGField *field; // [rsp+40h] [rbp-200h]
  std::vector<std::shared_ptr<BT::ActionPlanBase>> *__for_range; // [rsp+48h] [rbp-1F8h]
  std::shared_ptr<BTNodeConfigBase> __r; // [rsp+50h] [rbp-1F0h] BYREF
  BT::NodeConfigure v26; // [rsp+60h] [rbp-1E0h] BYREF

  p_M_refcount = (unsigned __int64)&v26.node_config_ptr._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      p_M_refcount = v2;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "8 48 4 20 cur_controller_id:55 64 16 17 blackboard_ptr:36 96 16 17 controller_ptr:42 1"
                                  "28 16 15 plan_mgr_ptr:57 160 16 11 plan_ptr:67 192 24 15 plan_ptr_vec:66 256 32 19 glo"
                                  "bal_logic_key:43 320 32 25 global_action_plan_key:58";
  *(_QWORD *)(p_M_refcount + 16) = BT::ActionGenCharacterPlan::tick;
  v3 = (_DWORD *)(p_M_refcount >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -202116109;
  config = BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getNodeConfig(&v26);
  std::dynamic_pointer_cast<BTActionGenCharacterPlanConfig,BTNodeConfigBase>(&__r);
  node_config_ptr = (const std::shared_ptr<BTActionGenCharacterPlanConfig> *)&__r;
  std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)&v26);
  if ( std::operator==<BTActionGenCharacterPlanConfig>(
         (const std::shared_ptr<BTActionGenCharacterPlanConfig> *)&__r,
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(p_M_refcount + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/actions/action_gen_character_attack_plan.cpp",
      "tick",
      33);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      (common::milog::MiLogStream *const)(p_M_refcount + 320),
      (const char (*)[50])"ActionGenCharacterPlan node_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(p_M_refcount + 320));
    v4 = FAILURE;
  }
  else
  {
    BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(p_M_refcount + 64));
    if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(p_M_refcount + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v26.data_vec,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_gen_character_attack_plan.cpp",
        "tick",
        39);
      v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             (common::milog::MiLogStream *const)&v26.data_vec,
             (const char (*)[56])"ActionGenCharacterPlan blackboard_ptr is nullptr, name:");
      BT::TreeNode::getName[abi:cxx11]((std::string *)(p_M_refcount + 320), this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, (const std::string *)(p_M_refcount + 320));
      std::string::~string((void *)(p_M_refcount + 320));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26.data_vec);
      v4 = FAILURE;
    }
    else
    {
      std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(p_M_refcount + 96), 0LL);
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(p_M_refcount + 256),
        BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
      v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64));
      if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
              v6,
              (const std::string *)(p_M_refcount + 256),
              (std::shared_ptr<GCGAIController> *)(p_M_refcount + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v26.data_vec,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_gen_character_attack_plan.cpp",
          "tick",
          46);
        v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
               (common::milog::MiLogStream *const)&v26.data_vec,
               (const char (*)[14])off_1BB455C0);
        BT::BlackboardUtil::resolveGlobalKey(
          (std::string *)(p_M_refcount + 320),
          (const std::string *)(p_M_refcount + 256));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v7,
          (const std::string *)(p_M_refcount + 320));
        std::string::~string((void *)(p_M_refcount + 320));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26.data_vec);
        v4 = FAILURE;
      }
      else if ( std::operator==<GCGAIController>((const std::shared_ptr<GCGAIController> *)(p_M_refcount + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(p_M_refcount + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_gen_character_attack_plan.cpp",
          "tick",
          51);
        v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               (common::milog::MiLogStream *const)(p_M_refcount + 320),
               (const char (*)[32])"controller_ptr is nullptr, key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v8,
          (const std::string *)(p_M_refcount + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(p_M_refcount + 320));
        v4 = FAILURE;
      }
      else
      {
        v9 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 96));
        game_mode = GCGControllerBase::getGameMode(v9);
        v10 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 96));
        *(_DWORD *)(p_M_refcount + 48) = GCGControllerBase::getControllerId(v10);
        Duel = GCGGameMode::getDuel(game_mode);
        field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(p_M_refcount + 48));
        std::shared_ptr<BT::ActionPlanMgr>::shared_ptr(
          (std::shared_ptr<BT::ActionPlanMgr> *const)(p_M_refcount + 128),
          0LL);
        BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
          (std::string *)(p_M_refcount + 320),
          BLACK_BOARD_GLOBAL_KEY_ACTION_PLAN);
        v12 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64));
        if ( !BT::Blackboard::get<std::shared_ptr<BT::ActionPlanMgr>>(
                v12,
                (const std::string *)(p_M_refcount + 320),
                (std::shared_ptr<BT::ActionPlanMgr> *)(p_M_refcount + 128)) )
        {
          common::tools::perf::make_shared<BT::ActionPlanMgr,GCGGameMode &,proto::GCGControllerValue &>(
            (GCGGameMode *)&v26,
            (proto::GCGControllerValue *)game_mode,
            (GCGGameMode *)(p_M_refcount + 48),
            (proto::GCGControllerValue *)game_mode);
          std::shared_ptr<BT::ActionPlanMgr>::operator=(
            (std::shared_ptr<BT::ActionPlanMgr> *const)(p_M_refcount + 128),
            (std::shared_ptr<BT::ActionPlanMgr> *)&v26);
          std::shared_ptr<BT::ActionPlanMgr>::~shared_ptr((std::shared_ptr<BT::ActionPlanMgr> *const)&v26);
          v13 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64));
          BT::Blackboard::set<std::shared_ptr<BT::ActionPlanMgr>>(
            v13,
            (const std::string *)(p_M_refcount + 320),
            (const std::shared_ptr<BT::ActionPlanMgr> *)(p_M_refcount + 128));
        }
        if ( std::operator!=<BT::ActionPlanMgr>((const std::shared_ptr<BT::ActionPlanMgr> *)(p_M_refcount + 128), 0LL) )
        {
          v14 = std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
          BT::ActionPlanMgr::createCurCharacterAttackPlan(
            (std::vector<std::shared_ptr<BT::ActionPlanBase>> *)(p_M_refcount + 192),
            v14,
            node_config_ptr);
          __for_range = (std::vector<std::shared_ptr<BT::ActionPlanBase>> *)(p_M_refcount + 192);
          __for_begin._M_current = std::vector<std::shared_ptr<BT::ActionPlanBase>>::begin((std::vector<std::shared_ptr<BT::ActionPlanBase>> *const)(p_M_refcount + 192))._M_current;
          __for_end._M_current = std::vector<std::shared_ptr<BT::ActionPlanBase>>::end((std::vector<std::shared_ptr<BT::ActionPlanBase>> *const)(p_M_refcount + 192))._M_current;
          while ( __gnu_cxx::operator!=<std::shared_ptr<BT::ActionPlanBase> *,std::vector<std::shared_ptr<BT::ActionPlanBase>>>(
                    &__for_begin,
                    &__for_end) )
          {
            v15 = __gnu_cxx::__normal_iterator<std::shared_ptr<BT::ActionPlanBase> *,std::vector<std::shared_ptr<BT::ActionPlanBase>>>::operator*(&__for_begin);
            std::shared_ptr<BT::ActionPlanBase>::shared_ptr(
              (std::shared_ptr<BT::ActionPlanBase> *const)(p_M_refcount + 160),
              v15);
            v16 = std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
            std::shared_ptr<BT::ActionPlanBase>::shared_ptr(
              (std::shared_ptr<BT::ActionPlanBase> *const)&v26,
              (const std::shared_ptr<BT::ActionPlanBase> *)(p_M_refcount + 160));
            BT::ActionPlanMgr::addPlan(v16, (BT::ActionPlanBasePtr *)&v26);
            std::shared_ptr<BT::ActionPlanBase>::~shared_ptr((std::shared_ptr<BT::ActionPlanBase> *const)&v26);
            std::shared_ptr<BT::ActionPlanBase>::~shared_ptr((std::shared_ptr<BT::ActionPlanBase> *const)(p_M_refcount + 160));
            __gnu_cxx::__normal_iterator<std::shared_ptr<BT::ActionPlanBase> *,std::vector<std::shared_ptr<BT::ActionPlanBase>>>::operator++(&__for_begin);
          }
          std::vector<std::shared_ptr<BT::ActionPlanBase>>::~vector((std::vector<std::shared_ptr<BT::ActionPlanBase>> *const)(p_M_refcount + 192));
        }
        v4 = SUCCESS;
        std::string::~string((void *)(p_M_refcount + 320));
        std::shared_ptr<BT::ActionPlanMgr>::~shared_ptr((std::shared_ptr<BT::ActionPlanMgr> *const)(p_M_refcount + 128));
      }
      std::string::~string((void *)(p_M_refcount + 256));
      std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(p_M_refcount + 96));
    }
    std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(p_M_refcount + 64));
  }
  std::shared_ptr<BTActionGenCharacterPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenCharacterPlanConfig> *const)&__r);
  result = v4;
  if ( &v26.node_config_ptr._M_refcount == (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_gen_reboot_plan.cpp

// Line 25: range 000000000DE7F670-000000000DE7FF7D
BT::NodeStatus __cdecl BT::ActionGenRebootPlan::tick(BT::ActionGenRebootPlan *const this)
{
  unsigned __int64 v1; // r13
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
  const std::shared_ptr<BTActionGenRebootPlanConfig> *node_config_ptr; // [rsp+30h] [rbp-210h]
  GCGGameMode *game_mode; // [rsp+38h] [rbp-208h]
  GCGField *field; // [rsp+40h] [rbp-200h]
  std::vector<std::shared_ptr<BT::ActionPlanBase>> *__for_range; // [rsp+48h] [rbp-1F8h]
  std::shared_ptr<BTNodeConfigBase> __r; // [rsp+50h] [rbp-1F0h] BYREF
  std::shared_ptr<BT::ActionPlanMgr> v26; // [rsp+60h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-1D0h] BYREF
  char v28[432]; // [rsp+90h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 48 4 20 cur_controller_id:52 64 16 17 blackboard_ptr:33 96 16 17 controller_ptr:39 128 16 15 p"
                        "lan_mgr_ptr:54 160 16 11 plan_ptr:64 192 24 15 plan_ptr_vec:63 256 32 19 global_logic_key:40 320"
                        " 32 25 global_action_plan_key:55";
  *(_QWORD *)(v1 + 16) = BT::ActionGenRebootPlan::tick;
  v3 = (_DWORD *)(v1 >> 3);
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
  std::dynamic_pointer_cast<BTActionGenRebootPlanConfig,BTNodeConfigBase>(&__r);
  node_config_ptr = (const std::shared_ptr<BTActionGenRebootPlanConfig> *)&__r;
  if ( std::operator==<BTActionGenRebootPlanConfig>((const std::shared_ptr<BTActionGenRebootPlanConfig> *)&__r, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/actions/action_gen_reboot_plan.cpp",
      "tick",
      30);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v27,
      (const char (*)[47])"ActionGenRebootPlan node_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v4 = FAILURE;
  }
  else
  {
    BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 64));
    if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_gen_reboot_plan.cpp",
        "tick",
        36);
      v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             (common::milog::MiLogStream *const)(v1 + 320),
             (const char (*)[53])"ActionGenRebootPlan blackboard_ptr is nullptr, name:");
      BT::TreeNode::getName[abi:cxx11]((std::string *)&v27, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, (const std::string *)&v27);
      std::string::~string(&v27);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
      v4 = FAILURE;
    }
    else
    {
      std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 96), 0LL);
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(v1 + 256),
        BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
      v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
              v6,
              (const std::string *)(v1 + 256),
              (std::shared_ptr<GCGAIController> *)(v1 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_gen_reboot_plan.cpp",
          "tick",
          43);
        v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
               (common::milog::MiLogStream *const)(v1 + 320),
               (const char (*)[14])off_1BB455C0);
        BT::BlackboardUtil::resolveGlobalKey((std::string *)&v27, (const std::string *)(v1 + 256));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v27);
        std::string::~string(&v27);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
        v4 = FAILURE;
      }
      else if ( std::operator==<GCGAIController>((const std::shared_ptr<GCGAIController> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_gen_reboot_plan.cpp",
          "tick",
          48);
        v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v27,
               (const char (*)[32])"controller_ptr is nullptr, key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 256));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v4 = FAILURE;
      }
      else
      {
        v9 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        game_mode = GCGControllerBase::getGameMode(v9);
        v10 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        *(_DWORD *)(v1 + 48) = GCGControllerBase::getControllerId(v10);
        Duel = GCGGameMode::getDuel(game_mode);
        field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v1 + 48));
        std::shared_ptr<BT::ActionPlanMgr>::shared_ptr((std::shared_ptr<BT::ActionPlanMgr> *const)(v1 + 128), 0LL);
        BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
          (std::string *)(v1 + 320),
          BLACK_BOARD_GLOBAL_KEY_ACTION_PLAN);
        v12 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( !BT::Blackboard::get<std::shared_ptr<BT::ActionPlanMgr>>(
                v12,
                (const std::string *)(v1 + 320),
                (std::shared_ptr<BT::ActionPlanMgr> *)(v1 + 128)) )
        {
          common::tools::perf::make_shared<BT::ActionPlanMgr,GCGGameMode &,proto::GCGControllerValue &>(
            (GCGGameMode *)&v26,
            (proto::GCGControllerValue *)game_mode,
            (GCGGameMode *)(v1 + 48),
            (proto::GCGControllerValue *)game_mode);
          std::shared_ptr<BT::ActionPlanMgr>::operator=((std::shared_ptr<BT::ActionPlanMgr> *const)(v1 + 128), &v26);
          std::shared_ptr<BT::ActionPlanMgr>::~shared_ptr(&v26);
          v13 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          BT::Blackboard::set<std::shared_ptr<BT::ActionPlanMgr>>(
            v13,
            (const std::string *)(v1 + 320),
            (const std::shared_ptr<BT::ActionPlanMgr> *)(v1 + 128));
        }
        if ( std::operator!=<BT::ActionPlanMgr>((const std::shared_ptr<BT::ActionPlanMgr> *)(v1 + 128), 0LL) )
        {
          v14 = std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          BT::ActionPlanMgr::createRebootPlan(
            (std::vector<std::shared_ptr<BT::ActionPlanBase>> *)(v1 + 192),
            v14,
            node_config_ptr);
          __for_range = (std::vector<std::shared_ptr<BT::ActionPlanBase>> *)(v1 + 192);
          __for_begin._M_current = std::vector<std::shared_ptr<BT::ActionPlanBase>>::begin((std::vector<std::shared_ptr<BT::ActionPlanBase>> *const)(v1 + 192))._M_current;
          __for_end._M_current = std::vector<std::shared_ptr<BT::ActionPlanBase>>::end((std::vector<std::shared_ptr<BT::ActionPlanBase>> *const)(v1 + 192))._M_current;
          while ( __gnu_cxx::operator!=<std::shared_ptr<BT::ActionPlanBase> *,std::vector<std::shared_ptr<BT::ActionPlanBase>>>(
                    &__for_begin,
                    &__for_end) )
          {
            v15 = __gnu_cxx::__normal_iterator<std::shared_ptr<BT::ActionPlanBase> *,std::vector<std::shared_ptr<BT::ActionPlanBase>>>::operator*(&__for_begin);
            std::shared_ptr<BT::ActionPlanBase>::shared_ptr((std::shared_ptr<BT::ActionPlanBase> *const)(v1 + 160), v15);
            if ( std::operator==<BT::ActionPlanBase>((const std::shared_ptr<BT::ActionPlanBase> *)(v1 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v27,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/card_ai/actions/action_gen_reboot_plan.cpp",
                "tick",
                68);
              common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v27,
                (const char (*)[20])"plan_ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream(&v27);
            }
            else
            {
              v16 = std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
              std::shared_ptr<BT::ActionPlanBase>::shared_ptr(
                (std::shared_ptr<BT::ActionPlanBase> *const)&v26,
                (const std::shared_ptr<BT::ActionPlanBase> *)(v1 + 160));
              BT::ActionPlanMgr::addPlan(v16, (BT::ActionPlanBasePtr *)&v26);
              std::shared_ptr<BT::ActionPlanBase>::~shared_ptr((std::shared_ptr<BT::ActionPlanBase> *const)&v26);
            }
            std::shared_ptr<BT::ActionPlanBase>::~shared_ptr((std::shared_ptr<BT::ActionPlanBase> *const)(v1 + 160));
            __gnu_cxx::__normal_iterator<std::shared_ptr<BT::ActionPlanBase> *,std::vector<std::shared_ptr<BT::ActionPlanBase>>>::operator++(&__for_begin);
          }
          std::vector<std::shared_ptr<BT::ActionPlanBase>>::~vector((std::vector<std::shared_ptr<BT::ActionPlanBase>> *const)(v1 + 192));
        }
        v4 = SUCCESS;
        std::string::~string((void *)(v1 + 320));
        std::shared_ptr<BT::ActionPlanMgr>::~shared_ptr((std::shared_ptr<BT::ActionPlanMgr> *const)(v1 + 128));
      }
      std::string::~string((void *)(v1 + 256));
      std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 96));
    }
    std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 64));
  }
  std::shared_ptr<BTActionGenRebootPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenRebootPlanConfig> *const)&__r);
  result = v4;
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_sort_and_exec_plan.cpp

// Line 31: range 000000000DE86CCA-000000000DE8766F
BT::NodeStatus __cdecl BT::ActionSortAndExecPlan::tick(BT::ActionSortAndExecPlan *const this)
{
  BT::NodeStatus v1; // r15d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int v15; // r14d
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  unsigned __int64 v18; // rax
  std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rsi
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  unsigned __int64 v22; // rdx
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  BT::NodeStatus result; // eax
  unsigned int (__fastcall *v25)(std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // [rsp+10h] [rbp-1B0h]
  unsigned int v26; // [rsp+20h] [rbp-1A0h] BYREF
  proto::GCGControllerValue cur_controller_id; // [rsp+24h] [rbp-19Ch]
  const BT::NodeConfigure *config; // [rsp+28h] [rbp-198h]
  GCGGameMode *game_mode; // [rsp+30h] [rbp-190h]
  GCGField *field; // [rsp+38h] [rbp-188h]
  const std::vector<std::shared_ptr<BT::ActionPlanBase>> *cur_plan_vec; // [rsp+40h] [rbp-180h]
  const std::shared_ptr<BT::ActionPlanBase> *plan_ptr; // [rsp+48h] [rbp-178h]
  std::vector<std::shared_ptr<BT::ActionPlanBase>> v33; // [rsp+50h] [rbp-170h] BYREF
  std::string val; // [rsp+70h] [rbp-150h] BYREF
  char v35[304]; // [rsp+90h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 17 blackboard_ptr:34 64 16 17 controller_ptr:40 96 16 15 plan_mgr_ptr:56 128 32 19 globa"
                        "l_logic_key:41 192 32 25 global_action_plan_key:57";
  *(_QWORD *)(v2 + 16) = BT::ActionSortAndExecPlan::tick;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  config = BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v2 + 32));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/actions/action_sort_and_exec_plan.cpp",
      "tick",
      37);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[55])"ActionSortAndExecPlan blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    v1 = FAILURE;
  }
  else
  {
    std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(v2 + 64), 0LL);
    BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
      (std::string *)(v2 + 128),
      BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
    v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
            v6,
            (const std::string *)(v2 + 128),
            (std::shared_ptr<GCGAIController> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_sort_and_exec_plan.cpp",
        "tick",
        44);
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[36])"ActionSortAndExecPlan not find key:");
      BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v2 + 128));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      v1 = FAILURE;
    }
    else if ( std::operator==<GCGAIController>((const std::shared_ptr<GCGAIController> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_sort_and_exec_plan.cpp",
        "tick",
        49);
      v8 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[54])"ActionSortAndExecPlan controller_ptr is nullptr, key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v1 = FAILURE;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      game_mode = GCGControllerBase::getGameMode(v9);
      v10 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      cur_controller_id = GCGControllerBase::getControllerId(v10);
      Duel = GCGGameMode::getDuel(game_mode);
      field = GCGDuel::getField(Duel, cur_controller_id);
      std::shared_ptr<BT::ActionPlanMgr>::shared_ptr((std::shared_ptr<BT::ActionPlanMgr> *const)(v2 + 96), 0LL);
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(v2 + 192),
        BLACK_BOARD_GLOBAL_KEY_ACTION_PLAN);
      v12 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( !BT::Blackboard::get<std::shared_ptr<BT::ActionPlanMgr>>(
              v12,
              (const std::string *)(v2 + 192),
              (std::shared_ptr<BT::ActionPlanMgr> *)(v2 + 96))
        || std::operator==<BT::ActionPlanMgr>((const std::shared_ptr<BT::ActionPlanMgr> *)(v2 + 96), 0LL) )
      {
        goto LABEL_28;
      }
      v13 = std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BT::ActionPlanMgr::sortPlan(v13);
      v14 = std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BT::ActionPlanMgr::getPlans(&v33, v14);
      cur_plan_vec = &v33;
      if ( std::vector<std::shared_ptr<BT::ActionPlanBase>>::empty(&v33) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/action_sort_and_exec_plan.cpp",
          "tick",
          72);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[22])"cur_plan_vec is empty");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v15 = 0;
      }
      else
      {
        plan_ptr = std::vector<std::shared_ptr<BT::ActionPlanBase>>::operator[](cur_plan_vec, 0LL);
        if ( std::operator==<BT::ActionPlanBase>(plan_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/actions/action_sort_and_exec_plan.cpp",
            "tick",
            78);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[42])"ActionSortAndExecPlan plan_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v15 = 0;
        }
        else
        {
          v16 = std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)plan_ptr);
          v17 = v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v16);
          v18 = (unsigned __int64)(v17->_vptr_DescribalBase + 4);
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v17->_vptr_DescribalBase + 4);
          v25 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v18;
          v19 = std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BT::ActionPlanMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( v25(v17, v19) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_ai/actions/action_sort_and_exec_plan.cpp",
              "tick",
              83);
            v20 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[48])"ActionSortAndExecPlan doPlan failed, plan type:");
            v21 = std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)plan_ptr);
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v21);
            v22 = (unsigned __int64)(v21->_vptr_DescribalBase + 3);
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v21->_vptr_DescribalBase + 3);
            v26 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v22)(v21);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v26);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v15 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_ai/actions/action_sort_and_exec_plan.cpp",
              "tick",
              87);
            common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[15])"exec plan succ");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v1 = SUCCESS;
            v15 = 1;
          }
        }
      }
      std::vector<std::shared_ptr<BT::ActionPlanBase>>::~vector(&v33);
      if ( !v15 )
      {
LABEL_28:
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/action_sort_and_exec_plan.cpp",
          "tick",
          90);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[37])"plan not avaliable and do default op");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v23 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        GCGControllerBase::doDefaultOp(v23);
        v1 = SUCCESS;
      }
      std::string::~string((void *)(v2 + 192));
      std::shared_ptr<BT::ActionPlanMgr>::~shared_ptr((std::shared_ptr<BT::ActionPlanMgr> *const)(v2 + 96));
    }
    std::string::~string((void *)(v2 + 128));
    std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v2 + 64));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v2 + 32));
  result = v1;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_select_onstage.cpp

// Line 24: range 000000000DE8634C-000000000DE86CC9
BT::NodeStatus __cdecl BT::ActionSelectOnstage::tick(BT::ActionSelectOnstage *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  BT::NodeStatus v5; // r14d
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  BT::Blackboard *v11; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t *p_card_guid; // rax
  BT::CandidateOnstageCharacterInfo *M_current; // r14
  std::vector<BT::CandidateOnstageCharacterInfo>::iterator v19; // rax
  BT::ActionSelectOnstage::tick::<lambda(auto:25&, auto:26&)> v20; // dl
  __gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> >::pointer v21; // rax
  uint32_t *v22; // rdx
  uint32_t v23; // r14d
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  uint32_t *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  BT::NodeStatus result; // eax
  GCGControllerValue cur_controller_id; // [rsp+1Ch] [rbp-204h]
  __gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> > __rhs; // [rsp+20h] [rbp-200h] BYREF
  const BT::NodeConfigure *config; // [rsp+28h] [rbp-1F8h]
  GCGGameMode *game_mode; // [rsp+30h] [rbp-1F0h]
  GCGField *field; // [rsp+38h] [rbp-1E8h]
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+40h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-1D0h] BYREF
  std::string val; // [rsp+70h] [rbp-1B0h] BYREF
  char v37[400]; // [rsp+90h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 8 7 iter:63 64 16 17 blackboard_ptr:26 96 16 17 controller_ptr:33 128 16 31 select_onstage_"
                        "operation_ptr:58 160 24 16 candidate_vec:47 224 32 19 global_logic_key:34 288 32 21 global_onstage_key:46";
  *(_QWORD *)(v1 + 16) = BT::ActionSelectOnstage::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -202116109;
  config = BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 64));
  if ( std::operator==<BT::Blackboard>(0LL, (const std::shared_ptr<BT::Blackboard> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/actions/action_select_onstage.cpp",
      "tick",
      29);
    v4 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v35,
           (const char (*)[53])"ActionSelectOnstage blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v5 = FAILURE;
  }
  else
  {
    std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 96), 0LL);
    BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
      (std::string *)(v1 + 224),
      BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
    v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
            v6,
            (const std::string *)(v1 + 224),
            (std::shared_ptr<GCGAIController> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_select_onstage.cpp",
        "tick",
        37);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v35, (const char (*)[14])off_1BB455C0);
      BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 224));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v5 = FAILURE;
    }
    else if ( std::operator==<GCGAIController>(0LL, (const std::shared_ptr<GCGAIController> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_select_onstage.cpp",
        "tick",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[32])"controller_ptr is nullptr, key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v5 = FAILURE;
    }
    else
    {
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(v1 + 288),
        BLACK_BOARD_GLOBAL_KEY_CANDIDATE_ONSTAGE_CHARACTER);
      std::vector<BT::CandidateOnstageCharacterInfo>::vector((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v1 + 160));
      v9 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( !BT::Blackboard::get<std::vector<BT::CandidateOnstageCharacterInfo>>(
              v9,
              (const std::string *)(v1 + 288),
              (std::vector<BT::CandidateOnstageCharacterInfo> *)(v1 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/action_select_onstage.cpp",
          "tick",
          51);
        v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v35, (const char (*)[21])off_1BB470C0);
        BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 288));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
      v11 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      BT::Blackboard::clearAny(v11, (const std::string *)(v1 + 288));
      v12 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      game_mode = GCGControllerBase::getGameMode(v12);
      v13 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      cur_controller_id = GCGControllerBase::getControllerId(v13);
      Duel = GCGGameMode::getDuel(game_mode);
      field = GCGDuel::getField(Duel, cur_controller_id);
      common::tools::perf::make_shared<GCGOperationOnStageSelect>();
      v15 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v15->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = (std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->controller_id);
      }
      v15->controller_id = cur_controller_id;
      v16 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      p_card_guid = &v16->card_guid;
      if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_card_guid);
      }
      v16->card_guid = 0;
      if ( !std::vector<BT::CandidateOnstageCharacterInfo>::empty((const std::vector<BT::CandidateOnstageCharacterInfo> *const)(v1 + 160)) )
      {
        M_current = std::vector<BT::CandidateOnstageCharacterInfo>::end((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v1 + 160))._M_current;
        v19._M_current = std::vector<BT::CandidateOnstageCharacterInfo>::begin((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v1 + 160))._M_current;
        *(__gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> > *)(v1 + 32) = std::max_element___gnu_cxx::__normal_iterator_BT::CandidateOnstageCharacterInfo__std::vector_BT::CandidateOnstageCharacterInfo____BT::ActionSelectOnstage::tick__::_lambda_auto_25__auto_26_____(v19, (__gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> >)M_current, v20);
        __rhs._M_current = std::vector<BT::CandidateOnstageCharacterInfo>::end((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v1 + 160))._M_current;
        if ( __gnu_cxx::operator!=<BT::CandidateOnstageCharacterInfo *,std::vector<BT::CandidateOnstageCharacterInfo>>(
               (const __gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> > *)(v1 + 32),
               &__rhs) )
        {
          v21 = __gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo *,std::vector<BT::CandidateOnstageCharacterInfo>>::operator->((const __gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> > *const)(v1 + 32));
          v22 = (uint32_t *)v21;
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v21);
          }
          v23 = *v22;
          v24 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          v25 = &v24->card_guid;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v25);
          }
          v24->card_guid = v23;
        }
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/actions/action_select_onstage.cpp",
        "tick",
        72);
      v26 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[27])"ActionSelectOnstage guid: ");
      v27 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &v27->card_guid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationOnStageSelect,void>(
        &p_operation_ptr,
        (const std::shared_ptr<GCGOperationOnStageSelect> *)(v1 + 128));
      GCGGameMode::process(game_mode, &p_operation_ptr);
      std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
      v5 = SUCCESS;
      std::shared_ptr<GCGOperationOnStageSelect>::~shared_ptr((std::shared_ptr<GCGOperationOnStageSelect> *const)(v1 + 128));
      std::vector<BT::CandidateOnstageCharacterInfo>::~vector((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v1 + 160));
      std::string::~string((void *)(v1 + 288));
    }
    std::string::~string((void *)(v1 + 224));
    std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 96));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 64));
  result = v5;
  if ( v37 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 63: range 000000000DEF78DA-000000000DEF7979
bool __cdecl BT::ActionSelectOnstage::tick::_lambda_auto_25___auto_26___::operator()_BT::CandidateOnstageCharacterInfo_BT::CandidateOnstageCharacterInfo_(
        const BT::ActionSelectOnstage::tick::<lambda(auto:25&, auto:26&)> *const __closure,
        BT::CandidateOnstageCharacterInfo *lhs,
        BT::CandidateOnstageCharacterInfo *rhs)
{
  int32_t priority; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->priority);
  }
  priority = lhs->priority;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->priority);
  }
  return priority < rhs->priority;
};

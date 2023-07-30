// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_reserve_hand_card_by_tag.cpp

// Line 24: range 000000000DE858E2-000000000DE8634B
// local variable allocation has failed, the output may be wrong!
BT::NodeStatus __cdecl BT::ActionReserveHandCardByTag::tick(BT::ActionReserveHandCardByTag *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  BT::NodeStatus v4; // r14d
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGDuel *Duel; // r14
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGControllerValue ControllerId; // eax
  GCGCardZone *HandZone; // r14
  BT::ActionReserveHandCardByTag::CandidateHandCardInfo *M_current; // r14
  std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::iterator v17; // rax
  BT::ActionReserveHandCardByTag::tick::<lambda(const auto:23&, const auto:24&)> v18; // dl
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  _DWORD *v20; // rdx
  char v21; // al
  unsigned __int64 v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  BT::NodeStatus result; // eax
  BT::ActionReserveHandCardByTag::tick::<lambda(GCGCard&)> v27; // [rsp-20h] [rbp-270h]
  bool is_allow_repeat; // [rsp+17h] [rbp-239h]
  uint32_t reserve_num; // [rsp+18h] [rbp-238h]
  uint32_t max_reserve_num; // [rsp+1Ch] [rbp-234h]
  std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::iterator __for_begin; // [rsp+20h] [rbp-230h] BYREF
  std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::iterator __for_end; // [rsp+28h] [rbp-228h] BYREF
  const BT::NodeConfigure *config; // [rsp+30h] [rbp-220h]
  const std::shared_ptr<BTActionReserveHandCardByTagConfig> *node_config_ptr; // [rsp+38h] [rbp-218h]
  __int128 filter_card_tag_set; // [rsp+40h] [rbp-210h] OVERLAPPED
  GCGGameMode *game_mode; // [rsp+50h] [rbp-200h]
  GCGField *field; // [rsp+58h] [rbp-1F8h]
  std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *__for_range; // [rsp+60h] [rbp-1F0h]
  const BT::ActionReserveHandCardByTag::CandidateHandCardInfo *candidate_info; // [rsp+68h] [rbp-1E8h]
  std::shared_ptr<BTNodeConfigBase> __r; // [rsp+70h] [rbp-1E0h] BYREF
  BT::ActionReserveHandCardByTag::tick::<lambda(GCGCard&)> __f; // [rsp+80h] [rbp-1D0h]
  common::milog::MiLogStream v42; // [rsp+A0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v43; // [rsp+C0h] [rbp-190h] BYREF
  char v44[368]; // [rsp+E0h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 16 17 blackboard_ptr:33 80 16 17 controller_ptr:40 112 24 16 candidate_vec:60 176 32 19 glo"
                        "bal_logic_key:41 240 48 14 reserve_map:98";
  *(_QWORD *)(v1 + 16) = BT::ActionReserveHandCardByTag::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -202116109;
  config = BT::TreeNode::getConfig(this);
  std::dynamic_pointer_cast<BTActionReserveHandCardByTagConfig,BTNodeConfigBase>(&__r);
  node_config_ptr = (const std::shared_ptr<BTActionReserveHandCardByTagConfig> *)&__r;
  if ( std::operator==<BTActionReserveHandCardByTagConfig>(
         0LL,
         (const std::shared_ptr<BTActionReserveHandCardByTagConfig> *)&__r) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/actions/action_reserve_hand_card_by_tag.cpp",
      "tick",
      29);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      &v43,
      (const char (*)[55])"ActionReserveHandCardByTag: node_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v43);
    v4 = FAILURE;
  }
  else
  {
    BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 48));
    if ( std::operator==<BT::Blackboard>(0LL, (const std::shared_ptr<BT::Blackboard> *)(v1 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_reserve_hand_card_by_tag.cpp",
        "tick",
        36);
      v5 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v42,
             (const char (*)[60])"ActionReserveHandCardByTag blackboard_ptr is nullptr, name:");
      BT::TreeNode::getName[abi:cxx11]((std::string *)&v43, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, (const std::string *)&v43);
      std::string::~string(&v43);
      common::milog::MiLogStream::~MiLogStream(&v42);
      v4 = FAILURE;
    }
    else
    {
      std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 80), 0LL);
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(v1 + 176),
        BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
      v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
              v6,
              (const std::string *)(v1 + 176),
              (std::shared_ptr<GCGAIController> *)(v1 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_reserve_hand_card_by_tag.cpp",
          "tick",
          44);
        v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v42, (const char (*)[14])off_1BB455C0);
        BT::BlackboardUtil::resolveGlobalKey((std::string *)&v43, (const std::string *)(v1 + 176));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v43);
        std::string::~string(&v43);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v4 = FAILURE;
      }
      else if ( std::operator==<GCGAIController>(0LL, (const std::shared_ptr<GCGAIController> *)(v1 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_reserve_hand_card_by_tag.cpp",
          "tick",
          49);
        v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v43,
               (const char (*)[32])"controller_ptr is nullptr, key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 176));
        common::milog::MiLogStream::~MiLogStream(&v43);
        v4 = FAILURE;
      }
      else
      {
        *(_QWORD *)&filter_card_tag_set = &std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)node_config_ptr)->param1.value;
        v9 = std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)node_config_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v9->param2.value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v9->param2.value >> 3) + 0x7FFF8000) <= 3 )
        {
          v9 = (std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->param2.value);
        }
        max_reserve_num = v9->param2.value;
        *((_QWORD *)&filter_card_tag_set + 1) = &std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)node_config_ptr)->param3.value;
        v10 = std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)node_config_ptr);
        if ( *(char *)(((unsigned __int64)&v10->param4.value >> 3) + 0x7FFF8000) < 0 )
          v10 = (std::__shared_ptr_access<BTActionReserveHandCardByTagConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v10->param4.value);
        is_allow_repeat = v10->param4.value;
        v11 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        game_mode = GCGControllerBase::getGameMode(v11);
        Duel = GCGGameMode::getDuel(game_mode);
        v13 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        ControllerId = GCGControllerBase::getControllerId(v13);
        field = GCGDuel::getField(Duel, ControllerId);
        std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::vector((std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *const)(v1 + 112));
        HandZone = GCGField::getHandZone(field);
        *(_OWORD *)&__f.__filter_card_tag_set = filter_card_tag_set;
        __f.__candidate_vec = (std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *)(v1 + 112);
        v27.__candidate_vec = (std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *)(v1 + 112);
        *(_OWORD *)&v27.__filter_card_tag_set = filter_card_tag_set;
        std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionReserveHandCardByTag::tick(void)::{lambda(GCGCard &)#1},void,void>(
          (std::function<ForeachPolicy(GCGCard&)> *const)&v43,
          v27);
        GCGCardZone::foreachCard(HandZone, (std::function<ForeachPolicy(GCGCard&)> *)&v43);
        std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v43);
        if ( !std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::empty((const std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *const)(v1 + 112)) )
        {
          M_current = std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::end((std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *const)(v1 + 112))._M_current;
          v17._M_current = std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::begin((std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *const)(v1 + 112))._M_current;
          std::sort___gnu_cxx::__normal_iterator_BT::ActionReserveHandCardByTag::CandidateHandCardInfo__std::vector_BT::ActionReserveHandCardByTag::CandidateHandCardInfo____BT::ActionReserveHandCardByTag::tick__::_lambda_const_auto_23__const_auto_24_____(
            v17,
            (__gnu_cxx::__normal_iterator<BT::ActionReserveHandCardByTag::CandidateHandCardInfo*,std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> >)M_current,
            v18);
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v1 + 240));
          reserve_num = 0;
          __for_range = (std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *)(v1 + 112);
          __for_begin._M_current = std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::begin((std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *const)(v1 + 112))._M_current;
          __for_end._M_current = std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::end((std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *const)(v1 + 112))._M_current;
          while ( __gnu_cxx::operator!=<BT::ActionReserveHandCardByTag::CandidateHandCardInfo *,std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>>(
                    &__for_begin,
                    &__for_end) )
          {
            candidate_info = __gnu_cxx::__normal_iterator<BT::ActionReserveHandCardByTag::CandidateHandCardInfo *,std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>>::operator*(&__for_begin);
            if ( is_allow_repeat
              || !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                    (std::map<unsigned int,unsigned int> *)(v1 + 240),
                    (const unsigned int *)candidate_info) )
            {
              goto LABEL_25;
            }
            v19 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(v1 + 240),
                    (const std::map<unsigned int,unsigned int>::key_type *)candidate_info);
            v20 = v19;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v19);
            }
            if ( *v20 )
              v21 = 1;
            else
LABEL_25:
              v21 = 0;
            if ( !v21 )
            {
              v22 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                        (std::map<unsigned int,unsigned int> *const)(v1 + 240),
                                        (const std::map<unsigned int,unsigned int>::key_type *)candidate_info);
              if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0
                && (char)((v22 & 7) + 3) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              {
                v22 = __asan_report_load4(v22);
              }
              ++*(_DWORD *)v22;
              ++reserve_num;
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_ai/actions/action_reserve_hand_card_by_tag.cpp",
                "tick",
                111);
              v23 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v43,
                      (const char (*)[46])"ActionReserveHandCardByTag, reserve card_id: ");
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      (const unsigned int *)candidate_info);
              v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v24,
                      (const char (*)[12])",priority: ");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v25, &candidate_info->priority);
              common::milog::MiLogStream::~MiLogStream(&v43);
              if ( max_reserve_num )
              {
                if ( reserve_num >= max_reserve_num )
                  break;
              }
            }
            __gnu_cxx::__normal_iterator<BT::ActionReserveHandCardByTag::CandidateHandCardInfo *,std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>>::operator++(&__for_begin);
          }
          BT::BlackboardUtil::addReserveHandCardMap(
            (BT::BlackboardPtr *)(v1 + 48),
            (const std::map<unsigned int,unsigned int> *)(v1 + 240));
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v1 + 240));
        }
        v4 = SUCCESS;
        std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::~vector((std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo> *const)(v1 + 112));
      }
      std::string::~string((void *)(v1 + 176));
      std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 80));
    }
    std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 48));
  }
  std::shared_ptr<BTActionReserveHandCardByTagConfig>::~shared_ptr((std::shared_ptr<BTActionReserveHandCardByTagConfig> *const)&__r);
  result = v4;
  if ( v44 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 61: range 000000000DE854BA-000000000DE858E1
ForeachPolicy __cdecl BT::ActionReserveHandCardByTag::tick(void)::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionReserveHandCardByTag::tick::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::GCGTagType *v5; // rax
  data::GCGTagType *v6; // rdx
  ForeachPolicy result; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool is_has_tag; // [rsp+13h] [rbp-DDh]
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  unsigned int Guid; // [rsp+18h] [rbp-D8h] BYREF
  data::GCGTagType card_tag; // [rsp+1Ch] [rbp-D4h]
  std::set<data::GCGTagType>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  const std::set<data::GCGTagType> *__for_range; // [rsp+28h] [rbp-C8h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-C0h] BYREF
  std::map<data::GCGCostType,unsigned int> cost_map; // [rsp+50h] [rbp-A0h] BYREF
  char v21[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 17 candidate_info:81";
  *(_QWORD *)(v2 + 16) = BT::ActionReserveHandCardByTag::tick(void)::{lambda(GCGCard &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::set<data::GCGTagType>::empty(__closure->__filter_card_tag_set) )
    goto LABEL_18;
  is_has_tag = 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __for_range = __closure->__filter_card_tag_set;
  __for_begin._M_node = std::set<data::GCGTagType>::begin(__for_range)._M_node;
  *(std::set<data::GCGTagType>::iterator *)(v2 + 32) = std::set<data::GCGTagType>::end(__for_range);
  while ( std::operator!=(&__for_begin, (const std::_Rb_tree_const_iterator<data::GCGTagType>::_Self *)(v2 + 32)) )
  {
    v5 = (data::GCGTagType *)std::_Rb_tree_const_iterator<data::GCGTagType>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    card_tag = *v6;
    if ( GCGCard::isHasTag(card, card_tag) )
    {
      is_has_tag = 1;
      break;
    }
    std::_Rb_tree_const_iterator<data::GCGTagType>::operator++(&__for_begin);
  }
  if ( !is_has_tag )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
LABEL_18:
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 32) = GCGCard::getId(card);
    GCGCard::getCost(&cost_map, card);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__revise_map);
    *(_DWORD *)(v2 + 36) = BT::ActionPlanMgr::calculatePriority(__closure->__revise_map, &cost_map);
    std::map<data::GCGCostType,unsigned int>::~map(&cost_map);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__candidate_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__candidate_vec);
    std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::push_back(
      __closure->__candidate_vec,
      (const std::vector<BT::ActionReserveHandCardByTag::CandidateHandCardInfo>::value_type *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/actions/action_reserve_hand_card_by_tag.cpp",
      "operator()",
      86);
    v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v19,
           (const char (*)[48])"ActionReserveHandCardByTag, candidate card_id: ");
    val = GCGCard::getId(card);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])",guid: ");
    Guid = GCGCard::getGuid(card);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &Guid);
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])",priority: ");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v2 + 36));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = FOREACH_CONTINUE;
  }
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000DF0CC56-000000000DF0CCF5
bool __cdecl BT::ActionReserveHandCardByTag::tick::_lambda_const_auto_23___const_auto_24___::operator()_BT::ActionReserveHandCardByTag::CandidateHandCardInfo_BT::ActionReserveHandCardByTag::CandidateHandCardInfo_(
        const BT::ActionReserveHandCardByTag::tick::<lambda(const auto:23&, const auto:24&)> *const __closure,
        const BT::ActionReserveHandCardByTag::CandidateHandCardInfo *lhs,
        const BT::ActionReserveHandCardByTag::CandidateHandCardInfo *rhs)
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
  return priority > rhs->priority;
};

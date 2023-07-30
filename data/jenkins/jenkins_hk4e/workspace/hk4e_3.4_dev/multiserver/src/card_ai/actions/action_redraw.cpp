// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_redraw.cpp

// Line 24: range 000000000DE802AC-000000000DE80BA7
BT::NodeStatus __cdecl BT::ActionRedraw::tick(BT::ActionRedraw *const this)
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
  BT::Blackboard *v10; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  GCGCardZone *HandZone; // rax
  const unsigned int *M_current; // r14
  const unsigned int *v17; // rcx
  BT::NodeStatus result; // eax
  common::milog::MiLogStream *v19; // [rsp+10h] [rbp-240h]
  GCGCardZone *v20; // [rsp+10h] [rbp-240h]
  GCGControllerValue cur_controller_id; // [rsp+24h] [rbp-22Ch]
  GCGGameMode *game_mode; // [rsp+30h] [rbp-220h]
  GCGField *field; // [rsp+38h] [rbp-218h]
  std::set<unsigned int> *select_card_set; // [rsp+40h] [rbp-210h]
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+50h] [rbp-200h] BYREF
  std::vector<unsigned int> v26; // [rsp+60h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-1D0h] BYREF
  std::string val; // [rsp+A0h] [rbp-1B0h] BYREF
  char v29[400]; // [rsp+C0h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 16 17 blackboard_ptr:26 80 16 17 controller_ptr:33 112 16 23 redraw_operation_ptr:58 144 32"
                        " 19 global_logic_key:34 208 32 21 global_reserve_key:46 272 48 18 cur_reserve_map:47";
  *(_QWORD *)(v1 + 16) = BT::ActionRedraw::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862727] = -219021312;
  v3[536862728] = 62194;
  v3[536862730] = -202116109;
  BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 48));
  if ( std::operator==<BT::Blackboard>(0LL, (const std::shared_ptr<BT::Blackboard> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/actions/action_redraw.cpp",
      "tick",
      29);
    v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v27,
           (const char (*)[46])"ActionRedraw blackboard_ptr is nullptr, name:");
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
      (std::string *)(v1 + 144),
      BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
    v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
            v6,
            (const std::string *)(v1 + 144),
            (std::shared_ptr<GCGAIController> *)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_redraw.cpp",
        "tick",
        37);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v27, (const char (*)[14])off_1BB455C0);
      BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 144));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = FAILURE;
    }
    else if ( std::operator==<GCGAIController>(0LL, (const std::shared_ptr<GCGAIController> *)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_redraw.cpp",
        "tick",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[32])"controller_ptr is nullptr, key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 144));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v5 = FAILURE;
    }
    else
    {
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(v1 + 208),
        BLACK_BORAD_GLOBAL_KEY_RESERVE_HAND_CARD_POOL);
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v1 + 272));
      v9 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      if ( !BT::Blackboard::get<std::map<unsigned int,unsigned int>>(
              v9,
              (const std::string *)(v1 + 208),
              (std::map<unsigned int,unsigned int> *)(v1 + 272)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/action_redraw.cpp",
          "tick",
          51);
        v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v27, (const char (*)[22])off_1BB45C00);
        BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 208));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      v10 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      BT::Blackboard::clearAny(v10, (const std::string *)(v1 + 208));
      v11 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      game_mode = GCGControllerBase::getGameMode(v11);
      v12 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      cur_controller_id = GCGControllerBase::getControllerId(v12);
      Duel = GCGGameMode::getDuel(game_mode);
      field = GCGDuel::getField(Duel, cur_controller_id);
      common::tools::perf::make_shared<GCGOperationRedraw>();
      v14 = std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v14->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v14 = (std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v14->controller_id);
      }
      v14->controller_id = cur_controller_id;
      select_card_set = &std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112))->select_card_set;
      if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v1 + 272)) )
      {
        HandZone = GCGField::getHandZone(field);
        GCGCardZone::getCardGuidVec(&v26, HandZone);
        M_current = std::vector<unsigned int>::end(&v26)._M_current;
        v17 = std::vector<unsigned int>::begin(&v26)._M_current;
        std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
          select_card_set,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v17,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
        std::vector<unsigned int>::~vector(&v26);
      }
      else
      {
        v20 = GCGField::getHandZone(field);
        std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionRedraw::tick(void)::{lambda(GCGCard &)#1},void,void>(
          (std::function<ForeachPolicy(GCGCard&)> *const)&val,
          (BT::ActionRedraw::tick::<lambda(GCGCard&)>)__PAIR128__(v1 + 272, (unsigned __int64)select_card_set));
        GCGCardZone::foreachCard(v20, (std::function<ForeachPolicy(GCGCard&)> *)&val);
        std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&val);
      }
      std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationRedraw,void>(
        &p_operation_ptr,
        (const std::shared_ptr<GCGOperationRedraw> *)(v1 + 112));
      GCGGameMode::process(game_mode, &p_operation_ptr);
      std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
      v5 = SUCCESS;
      std::shared_ptr<GCGOperationRedraw>::~shared_ptr((std::shared_ptr<GCGOperationRedraw> *const)(v1 + 112));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v1 + 272));
      std::string::~string((void *)(v1 + 208));
    }
    std::string::~string((void *)(v1 + 144));
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

// Line 69: range 000000000DE8012A-000000000DE802AB
ForeachPolicy __cdecl BT::ActionRedraw::tick(void)::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionRedraw::tick::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::map<unsigned int,unsigned int> *cur_reserve_map; // rbx
  std::map<unsigned int,unsigned int>::mapped_type *v3; // rax
  _DWORD *v4; // rdx
  std::map<unsigned int,unsigned int> *v5; // rbx
  unsigned __int64 v6; // rax
  std::set<unsigned int> *select_card_set; // rbx
  std::map<unsigned int,unsigned int>::key_type __k[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_reserve_map >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__cur_reserve_map);
  cur_reserve_map = __closure->__cur_reserve_map;
  __k[0] = GCGCard::getId(card);
  v3 = std::map<unsigned int,unsigned int>::operator[](cur_reserve_map, __k);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  if ( *v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_reserve_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__cur_reserve_map);
    v5 = __closure->__cur_reserve_map;
    __k[0] = GCGCard::getId(card);
    v6 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](v5, __k);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load4(v6);
    --*(_DWORD *)v6;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    select_card_set = __closure->__select_card_set;
    __k[0] = GCGCard::getGuid(card);
    std::set<unsigned int>::insert(select_card_set, __k);
  }
  return 0;
};

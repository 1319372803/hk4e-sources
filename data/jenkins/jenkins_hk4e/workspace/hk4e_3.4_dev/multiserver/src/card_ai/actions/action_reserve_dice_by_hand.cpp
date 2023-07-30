// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_reserve_dice_by_hand.cpp

// Line 24: range 000000000DE81758-000000000DE81E9F
BT::NodeStatus __cdecl BT::ActionReserveDiceByHand::tick(BT::ActionReserveDiceByHand *const this)
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
  std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  BT::NodeStatus result; // eax
  GCGControllerValue cur_controller_id; // [rsp+10h] [rbp-1B0h]
  uint32_t max_reserve_num; // [rsp+14h] [rbp-1ACh]
  data::BehaviorConfigSortType sort_type; // [rsp+18h] [rbp-1A8h]
  _BOOL4 is_desc_order; // [rsp+1Ch] [rbp-1A4h]
  GCGGameMode *game_mode; // [rsp+30h] [rbp-190h]
  GCGField *field; // [rsp+38h] [rbp-188h]
  std::shared_ptr<BTNodeConfigBase> __r; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-170h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-150h] BYREF
  char v25[304]; // [rsp+90h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 16 17 blackboard_ptr:32 80 16 17 controller_ptr:38 112 32 19 global_logic_key:39 176 48 26 "
                        "reserve_dice_result_map:58";
  *(_QWORD *)(v1 + 16) = BT::ActionReserveDiceByHand::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862727] = -202116109;
  BT::TreeNode::getConfig(this);
  std::dynamic_pointer_cast<BTActionReserveDiceByHandConfig,BTNodeConfigBase>(&__r);
  if ( std::operator==<BTActionReserveDiceByHandConfig>(
         (const std::shared_ptr<BTActionReserveDiceByHandConfig> *)&__r,
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
      "tick",
      29);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v24,
      (const char (*)[51])"ActionReserveDiceByHand node_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v4 = FAILURE;
  }
  else
  {
    BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 48));
    if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
        "tick",
        35);
      v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v23,
             (const char (*)[57])"ActionReserveDiceByHand blackboard_ptr is nullptr, name:");
      BT::TreeNode::getName[abi:cxx11]((std::string *)&v24, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, (const std::string *)&v24);
      std::string::~string(&v24);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v4 = FAILURE;
    }
    else
    {
      std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 80), 0LL);
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(v1 + 112),
        BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
      v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
              v6,
              (const std::string *)(v1 + 112),
              (std::shared_ptr<GCGAIController> *)(v1 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
          "tick",
          42);
        v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v23, (const char (*)[14])off_1BB455C0);
        BT::BlackboardUtil::resolveGlobalKey((std::string *)&v24, (const std::string *)(v1 + 112));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v24);
        std::string::~string(&v24);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v4 = FAILURE;
      }
      else if ( std::operator==<GCGAIController>((const std::shared_ptr<GCGAIController> *)(v1 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
          "tick",
          47);
        v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v24,
               (const char (*)[32])"controller_ptr is nullptr, key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 112));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v4 = FAILURE;
      }
      else
      {
        v9 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        game_mode = GCGControllerBase::getGameMode(v9);
        v10 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        cur_controller_id = GCGControllerBase::getControllerId(v10);
        Duel = GCGGameMode::getDuel(game_mode);
        field = GCGDuel::getField(Duel, cur_controller_id);
        v12 = std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r);
        if ( *(_BYTE *)(((unsigned __int64)&v12->param1.value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->param1.value >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->param1.value);
        }
        max_reserve_num = v12->param1.value;
        v13 = std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r);
        if ( *(_BYTE *)(((unsigned __int64)&v13->param2.value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->param2.value >> 3) + 0x7FFF8000) <= 3 )
        {
          v13 = (std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->param2.value);
        }
        sort_type = v13->param2.value;
        v14 = std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r);
        if ( *(char *)(((unsigned __int64)&v14->param3.value >> 3) + 0x7FFF8000) < 0 )
          v14 = (std::__shared_ptr_access<BTActionReserveDiceByHandConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v14->param3.value);
        is_desc_order = v14->param3.value;
        std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v1 + 176));
        BT::ActionReserveDiceByHand::calReserveDiceMap(
          this,
          field,
          max_reserve_num,
          sort_type,
          is_desc_order,
          (std::map<proto::GCGDiceSideType,unsigned int> *)(v1 + 176));
        BT::ActionReserveDiceByHand::reserveDice(
          this,
          (const std::map<proto::GCGDiceSideType,unsigned int> *)(v1 + 176));
        v4 = SUCCESS;
        std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v1 + 176));
      }
      std::string::~string((void *)(v1 + 112));
      std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 80));
    }
    std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 48));
  }
  std::shared_ptr<BTActionReserveDiceByHandConfig>::~shared_ptr((std::shared_ptr<BTActionReserveDiceByHandConfig> *const)&__r);
  result = v4;
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 65: range 000000000DE82208-000000000DE833B8
__int64 __fastcall BT::ActionReserveDiceByHand::calReserveDiceMap(
        BT::ActionReserveDiceByHand *const this,
        GCGField *field,
        uint32_t max_reserve_num,
        data::BehaviorConfigSortType sort_type,
        uint32_t is_desc_order,
        std::map<proto::GCGDiceSideType,unsigned int> *reserve_dice_result_map)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  GCGCardZone *HandZone; // rax
  unsigned int *v10; // rax
  unsigned __int64 *v11; // r8
  GCGDiceZone *DiceZone; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::reference v13; // rax
  _QWORD *v14; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v19; // rax
  _QWORD *v20; // rdx
  uint32_t v21; // ecx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  unsigned int *v23; // r8
  unsigned int *v24; // r9
  _BOOL4 v25; // r14d
  std::tuple<unsigned int,unsigned int,unsigned int> *M_current; // r14
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator v27; // rax
  std::tuple<unsigned int,unsigned int,unsigned int> *v28; // r14
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator v29; // rax
  common::milog::MiLogStream *v30; // rax
  unsigned __int64 n; // rax
  std::__tuple_element_t_34 *v32; // rax
  _DWORD *v33; // rdx
  uint32_t v34; // eax
  _BOOL4 v35; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  bool v38; // al
  _BOOL4 v39; // r14d
  std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::reference v40; // rax
  _QWORD *v41; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v42; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v43; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v44; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  __int64 result; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-388h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int>::iterator __for_end; // [rsp+40h] [rbp-380h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> *__for_range; // [rsp+48h] [rbp-378h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-370h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *card_guid; // [rsp+58h] [rbp-368h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *in_hand_order; // [rsp+60h] [rbp-360h]
  std::map<proto::GCGDiceSideType,unsigned int> *__for_range_1; // [rsp+68h] [rbp-358h]
  std::tuple_element<0,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_type_0; // [rsp+70h] [rbp-350h]
  std::tuple_element<1,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_num_0; // [rsp+78h] [rbp-348h]
  std::tuple_element<0,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_type; // [rsp+80h] [rbp-340h]
  std::tuple_element<1,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_num; // [rsp+88h] [rbp-338h]
  common::milog::MiLogStream v71; // [rsp+90h] [rbp-330h] BYREF
  std::string val; // [rsp+B0h] [rbp-310h] BYREF
  common::milog::MiLogStream v73; // [rsp+D0h] [rbp-2F0h] BYREF
  char v74[720]; // [rsp+F0h] [rbp-2D0h] BYREF

  v6 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(672LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "14 48 4 20 choose_card_guid:174 64 4 18 tmp_total_cost:184 80 4 17 total_cost_num:91 96 4 18 max"
                        "_reserve_num:64 112 8 8 index:69 144 12 20 choose_card_info:173 176 16 10 ss_dice:74 208 16 12 s"
                        "s_after:192 240 24 28 card_alternative_guid_vec:66 304 24 21 choose_card_id_vec:79 368 24 28 alt"
                        "ernative_card_info_vec:82 432 48 32 card_guid_to_inhand_order_map:68 512 48 11 dice_map:73 592 4"
                        "8 12 cost_map:182";
  *(_QWORD *)(v6 + 16) = BT::ActionReserveDiceByHand::calReserveDiceMap;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = 61956;
  v8[536862723] = -234881024;
  v8[536862724] = 62194;
  v8[536862724] = 0x4000000;
  v8[536862725] = 62194;
  v8[536862726] = 62194;
  v8[536862727] = 62194;
  v8[536862728] = -218959360;
  v8[536862729] = 62194;
  v8[536862730] = -218959360;
  v8[536862731] = 62194;
  v8[536862732] = -218959360;
  v8[536862733] = 62194;
  v8[536862735] = -218959118;
  v8[536862737] = -219021312;
  v8[536862738] = 62194;
  v8[536862740] = -202116109;
  *(_DWORD *)(v6 + 96) = max_reserve_num;
  HandZone = GCGField::getHandZone(field);
  GCGCardZone::getCardGuidVec((std::vector<unsigned int> *)(v6 + 240), HandZone);
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v6 + 432));
  for ( *(_QWORD *)(v6 + 112) = 0LL;
        std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 240)) > *(_QWORD *)(v6 + 112);
        ++*(_QWORD *)(v6 + 112) )
  {
    v10 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 240), *(_QWORD *)(v6 + 112));
    std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned long &>(
      (std::map<unsigned int,unsigned int> *const)(v6 + 432),
      v10,
      (unsigned __int64 *)(v6 + 112),
      v10,
      v11);
  }
  DiceZone = GCGField::getDiceZone(field);
  GCGDiceZone::getValidDiceMap((std::map<proto::GCGDiceSideType,unsigned int> *)(v6 + 512), DiceZone);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 176));
  __for_range = (std::map<proto::GCGDiceSideType,unsigned int> *)(v6 + 512);
  __for_begin._M_node = std::map<proto::GCGDiceSideType,unsigned int>::begin((std::map<proto::GCGDiceSideType,unsigned int> *const)(v6 + 512))._M_node;
  __for_end._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end((std::map<proto::GCGDiceSideType,unsigned int> *const)(v6 + 512))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator*(&__for_begin);
    v14 = v13;
    if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v13, 8LL);
    }
    *(_QWORD *)(v6 + 112) = *v14;
    dice_type = std::get<0ul,proto::GCGDiceSideType const,unsigned int>((std::pair<const proto::GCGDiceSideType,unsigned int> *)(v6 + 112));
    dice_num = std::get<1ul,proto::GCGDiceSideType const,unsigned int>((std::pair<const proto::GCGDiceSideType,unsigned int> *)(v6 + 112));
    v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 176),
            "[");
    if ( *(_BYTE *)(((unsigned __int64)dice_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dice_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dice_type);
    }
    v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, *dice_type);
    v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, ":");
    if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dice_num);
    }
    v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, *dice_num);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, "]");
    std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 304));
  do
  {
    if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v6 + 432)) )
      break;
    std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::vector((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368));
    __for_range_0 = (std::map<unsigned int,unsigned int> *)(v6 + 432);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v6 + 432))._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      v20 = v19;
      if ( ((unsigned __int8)v19 & 7) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v19->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v19 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v19->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v19, 8LL);
      }
      *(_QWORD *)(v6 + 112) = *v20;
      card_guid = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v6 + 112));
      in_hand_order = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v6 + 112));
      v21 = (unsigned int)GCGField::getHandZone(field);
      if ( *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(card_guid);
      }
      GCGCardZone::findCard((GCGCardZone *const)(v6 + 208), v21);
      if ( !std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v6 + 208), 0LL) )
      {
        v22 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 208));
        GCGCard::getCost((std::map<data::GCGCostType,unsigned int> *)(v6 + 592), v22);
        *(_DWORD *)(v6 + 80) = 0;
        if ( !BT::ActionReserveDiceByHand::tryUsePayCardCostPreview(
                this,
                (const std::map<data::GCGCostType,unsigned int> *)(v6 + 592),
                (uint32_t *)(v6 + 80),
                (const std::map<proto::GCGDiceSideType,unsigned int> *)(v6 + 512)) )
        {
          std::make_tuple<unsigned int const&,unsigned int &,unsigned int &>(
            (const unsigned int *)(v6 + 144),
            card_guid,
            in_hand_order,
            (const unsigned int *)(v6 + 80),
            v23,
            v24);
          std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::emplace_back<std::tuple<unsigned int,unsigned int,unsigned int>>(
            (std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368),
            (std::tuple<unsigned int,unsigned int,unsigned int> *)(v6 + 144),
            (std::tuple<unsigned int,unsigned int,unsigned int> *)(v6 + 144));
        }
        std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v6 + 592));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 208));
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    if ( std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::empty((const std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368)) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
        "calReserveDiceMap",
        100);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v73, (const char (*)[21])"alternative is empty");
      common::milog::MiLogStream::~MiLogStream(&v73);
      v25 = 0;
    }
    else
    {
      if ( sort_type == BEHAVIOR_CONFIG_SORT_TYPE_FETCHED_ORDER )
      {
        *(_DWORD *)(v6 + 80) = is_desc_order;
        M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368))._M_current;
        v27._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368))._M_current;
        std::sort<__gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>,BT::ActionReserveDiceByHand::calReserveDiceMap(GCGField &,unsigned int,data::BehaviorConfigSortType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(std::tuple<unsigned int,unsigned int,unsigned int> const&,std::tuple<unsigned int,unsigned int,unsigned int> const&)#1}>(
          v27,
          (__gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int>*,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> >)M_current,
          *(BT::ActionReserveDiceByHand::calReserveDiceMap::<lambda(const std::tuple<unsigned int, unsigned int, unsigned int>&, const std::tuple<unsigned int, unsigned int, unsigned int>&)> *)(v6 + 80));
      }
      else if ( sort_type == BEHAVIOR_CONFIG_SORT_TYPE_TOTAL_COST )
      {
        *(_DWORD *)(v6 + 80) = is_desc_order;
        v28 = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368))._M_current;
        v29._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368))._M_current;
        std::sort<__gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>,BT::ActionReserveDiceByHand::calReserveDiceMap(GCGField &,unsigned int,data::BehaviorConfigSortType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(std::tuple<unsigned int,unsigned int,unsigned int> const&,std::tuple<unsigned int,unsigned int,unsigned int> const&)#2}>(
          v29,
          (__gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int>*,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> >)v28,
          *(BT::ActionReserveDiceByHand::calReserveDiceMap::<lambda(const std::tuple<unsigned int, unsigned int, unsigned int>&, const std::tuple<unsigned int, unsigned int, unsigned int>&)> *)(v6 + 80));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
          "calReserveDiceMap",
          164);
        v30 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v73,
                (const char (*)[35])"sort_type is not valid, sort_type:");
        *(_DWORD *)(v6 + 80) = sort_type;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v6 + 80));
        common::milog::MiLogStream::~MiLogStream(&v73);
      }
      if ( std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::empty((const std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368)) )
      {
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
          "calReserveDiceMap",
          169);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v73,
          (const char (*)[21])"alternative is empty");
        common::milog::MiLogStream::~MiLogStream(&v73);
        v25 = 0;
      }
      else
      {
        n = (unsigned __int64)std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::operator[](
                                (std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368),
                                0LL);
        if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_load_n(n, 12LL);
        }
        *(_QWORD *)(v6 + 144) = *(_QWORD *)n;
        *(_DWORD *)(v6 + 152) = *(_DWORD *)(n + 8);
        v32 = std::get<0ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v6 + 144));
        v33 = v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32);
        }
        *(_DWORD *)(v6 + 48) = *v33;
        std::map<unsigned int,unsigned int>::erase(
          (std::map<unsigned int,unsigned int> *const)(v6 + 432),
          (const std::map<unsigned int,unsigned int>::key_type *)(v6 + 48));
        v34 = (unsigned int)GCGField::getHandZone(field);
        GCGCardZone::findCard((GCGCardZone *const)(v6 + 208), v34);
        if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v6 + 208), 0LL) )
        {
          v35 = 0;
        }
        else
        {
          v36 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 208));
          GCGCard::getCost((std::map<data::GCGCostType,unsigned int> *)(v6 + 592), v36);
          *(_DWORD *)(v6 + 64) = 0;
          BT::ActionReserveDiceByHand::tryUsePayCardCost(
            this,
            (const std::map<data::GCGCostType,unsigned int> *)(v6 + 592),
            (uint32_t *)(v6 + 64),
            (std::map<proto::GCGDiceSideType,unsigned int> *)(v6 + 512),
            reserve_dice_result_map);
          v37 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 208));
          *(_DWORD *)(v6 + 80) = GCGCard::getId(v37);
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v6 + 304),
            (std::vector<unsigned int>::value_type *)(v6 + 80));
          v38 = *(_DWORD *)(v6 + 96)
             && std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 304)) >= *(unsigned int *)(v6 + 96);
          v39 = !v38;
          std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v6 + 592));
          v35 = v39;
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 208));
        v25 = v35;
      }
    }
    std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::~vector((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 368));
  }
  while ( v25 );
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 208));
  __for_range_1 = reserve_dice_result_map;
  __for_begin._M_node = std::map<proto::GCGDiceSideType,unsigned int>::begin(reserve_dice_result_map)._M_node;
  __for_end._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v40 = std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator*(&__for_begin);
    v41 = v40;
    if ( ((unsigned __int8)v40 & 7) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v40->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v40 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v40->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v40, 8LL);
    }
    *(_QWORD *)(v6 + 112) = *v41;
    dice_type_0 = std::get<0ul,proto::GCGDiceSideType const,unsigned int>((std::pair<const proto::GCGDiceSideType,unsigned int> *)(v6 + 112));
    dice_num_0 = std::get<1ul,proto::GCGDiceSideType const,unsigned int>((std::pair<const proto::GCGDiceSideType,unsigned int> *)(v6 + 112));
    v42 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 208),
            "[");
    if ( *(_BYTE *)(((unsigned __int64)dice_type_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dice_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_type_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dice_type_0);
    }
    v43 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v42, *dice_type_0);
    v44 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v43, ":");
    if ( *(_BYTE *)(((unsigned __int64)dice_num_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dice_num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dice_num_0);
    }
    v45 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v44, *dice_num_0);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v45, "]");
    std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v71,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
    "calReserveDiceMap",
    197);
  v46 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v71, (const char (*)[17])"max_reserve_num:");
  v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v6 + 96));
  v48 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v47, (const char (*)[14])", hand total:");
  *(_QWORD *)(v6 + 112) = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 240));
  v49 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v48,
          (const unsigned __int64 *)(v6 + 112));
  v50 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v49, (const char (*)[21])",choose_card_id_vec:");
  v51 = common::milog::MiLogStream::operator<<<unsigned int>(v50, (const std::vector<unsigned int> *)(v6 + 304));
  v52 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v51, (const char (*)[6])"dice:");
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    &val,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 176));
  v53 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, &val);
  v54 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v53, (const char (*)[10])", result:");
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    (std::string *)&v73,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 208));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, (const std::string *)&v73);
  std::string::~string(&v73);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v71);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 208));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 304));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 176));
  std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v6 + 512));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v6 + 432));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 240));
  result = 0LL;
  if ( v74 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8050) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 106: range 000000000DE81EA0-000000000DE82052
bool __cdecl BT::ActionReserveDiceByHand::calReserveDiceMap(GCGField &,unsigned int,data::BehaviorConfigSortType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(std::tuple<unsigned int,unsigned int,unsigned int> const&,std::tuple<unsigned int,unsigned int,unsigned int> const&)#1}::operator()(
        const BT::ActionReserveDiceByHand::calReserveDiceMap::<lambda(const std::tuple<unsigned int, unsigned int, unsigned int>&, const std::tuple<unsigned int, unsigned int, unsigned int>&)> *const __closure,
        const std::tuple<unsigned int,unsigned int,unsigned int> *left,
        const std::tuple<unsigned int,unsigned int,unsigned int> *right)
{
  std::__tuple_element_t_20 *v3; // rax
  unsigned int *v4; // rdx
  unsigned int v5; // ebx
  std::__tuple_element_t_20 *v6; // rax
  unsigned int *v7; // rdx
  std::__tuple_element_t_20 *v9; // rax
  unsigned int *v10; // rdx
  unsigned int v11; // ebx
  std::__tuple_element_t_20 *v12; // rax
  unsigned int *v13; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  if ( __closure->__is_desc_order )
  {
    v3 = (std::__tuple_element_t_20 *)std::get<1ul,unsigned int,unsigned int,unsigned int>(left);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    v6 = (std::__tuple_element_t_20 *)std::get<1ul,unsigned int,unsigned int,unsigned int>(right);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    return v5 > *v7;
  }
  else
  {
    v9 = (std::__tuple_element_t_20 *)std::get<1ul,unsigned int,unsigned int,unsigned int>(left);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    v11 = *v10;
    v12 = (std::__tuple_element_t_20 *)std::get<1ul,unsigned int,unsigned int,unsigned int>(right);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    return v11 < *v13;
  }
};

// Line 135: range 000000000DE82054-000000000DE82206
bool __cdecl BT::ActionReserveDiceByHand::calReserveDiceMap(GCGField &,unsigned int,data::BehaviorConfigSortType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(std::tuple<unsigned int,unsigned int,unsigned int> const&,std::tuple<unsigned int,unsigned int,unsigned int> const&)#2}::operator()(
        const BT::ActionReserveDiceByHand::calReserveDiceMap::<lambda(const std::tuple<unsigned int, unsigned int, unsigned int>&, const std::tuple<unsigned int, unsigned int, unsigned int>&)> *const __closure,
        const std::tuple<unsigned int,unsigned int,unsigned int> *left,
        const std::tuple<unsigned int,unsigned int,unsigned int> *right)
{
  std::__tuple_element_t_19 *v3; // rax
  unsigned int *v4; // rdx
  unsigned int v5; // ebx
  std::__tuple_element_t_19 *v6; // rax
  unsigned int *v7; // rdx
  std::__tuple_element_t_19 *v9; // rax
  unsigned int *v10; // rdx
  unsigned int v11; // ebx
  std::__tuple_element_t_19 *v12; // rax
  unsigned int *v13; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  if ( __closure->__is_desc_order )
  {
    v3 = (std::__tuple_element_t_19 *)std::get<2ul,unsigned int,unsigned int,unsigned int>(left);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    v6 = (std::__tuple_element_t_19 *)std::get<2ul,unsigned int,unsigned int,unsigned int>(right);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    return v5 > *v7;
  }
  else
  {
    v9 = (std::__tuple_element_t_19 *)std::get<2ul,unsigned int,unsigned int,unsigned int>(left);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    v11 = *v10;
    v12 = (std::__tuple_element_t_19 *)std::get<2ul,unsigned int,unsigned int,unsigned int>(right);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    return v11 < *v13;
  }
};

// Line 204: range 000000000DE833BA-000000000DE83581
int32_t __cdecl BT::ActionReserveDiceByHand::tryUsePayCardCostPreview(
        BT::ActionReserveDiceByHand *const this,
        const std::map<data::GCGCostType,unsigned int> *cost_map,
        uint32_t *total_cost_num,
        const std::map<proto::GCGDiceSideType,unsigned int> *dice_map)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  int32_t v7; // r14d
  int32_t result; // eax
  char v11[240]; // [rsp+20h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 48 27 reserve_dice_result_map:205 112 48 17 copy_dice_map:206";
  *(_QWORD *)(v4 + 16) = BT::ActionReserveDiceByHand::tryUsePayCardCostPreview;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v4 + 32));
  std::map<proto::GCGDiceSideType,unsigned int>::map(
    (std::map<proto::GCGDiceSideType,unsigned int> *const)(v4 + 112),
    dice_map);
  v7 = BT::ActionReserveDiceByHand::tryUsePayCardCost(
         this,
         cost_map,
         total_cost_num,
         (std::map<proto::GCGDiceSideType,unsigned int> *)(v4 + 112),
         (std::map<proto::GCGDiceSideType,unsigned int> *)(v4 + 32));
  std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v4 + 112));
  std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v4 + 32));
  result = v7;
  if ( v11 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 212: range 000000000DE83582-000000000DE842BE
int32_t __cdecl BT::ActionReserveDiceByHand::tryUsePayCardCost(
        BT::ActionReserveDiceByHand *const this,
        const std::map<data::GCGCostType,unsigned int> *cost_map,
        uint32_t *total_cost_num,
        std::map<proto::GCGDiceSideType,unsigned int> *dice_map,
        std::map<proto::GCGDiceSideType,unsigned int> *reserve_dice_result_map)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,unsigned int> >::reference v8; // rax
  _QWORD *v9; // rdx
  uint32_t v10; // ecx
  __gnu_cxx::__normal_iterator<data::GCGCostType*,std::vector<data::GCGCostType> >::reference v11; // rax
  _DWORD *v12; // rdx
  const std::map<data::GCGCostType,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::reference v15; // rax
  std::pair<const proto::GCGDiceSideType,unsigned int> *v16; // rdx
  std::tuple_element<1,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  proto::GCGDiceSideType *v24; // rax
  _DWORD *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v29; // rax
  _DWORD *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::allocator<data::GCGCostType> __a; // [rsp+49h] [rbp-197h] BYREF
  bool is_same_can_pay; // [rsp+4Ah] [rbp-196h]
  bool is_can_payed; // [rsp+4Bh] [rbp-195h]
  unsigned int val; // [rsp+4Ch] [rbp-194h] BYREF
  std::vector<data::GCGCostType>::iterator __for_begin_0; // [rsp+50h] [rbp-190h] BYREF
  std::vector<data::GCGCostType>::iterator __for_end_0; // [rsp+58h] [rbp-188h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int>::iterator __for_begin_1; // [rsp+60h] [rbp-180h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int>::iterator __for_end_1; // [rsp+68h] [rbp-178h] BYREF
  const std::map<data::GCGCostType,unsigned int> *__for_range; // [rsp+70h] [rbp-170h]
  std::vector<data::GCGCostType> *__for_range_0; // [rsp+78h] [rbp-168h]
  std::map<proto::GCGDiceSideType,unsigned int> *__for_range_1; // [rsp+80h] [rbp-160h]
  std::tuple_element<0,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_type; // [rsp+88h] [rbp-158h]
  std::tuple_element<1,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_num; // [rsp+90h] [rbp-150h]
  std::tuple_element<0,std::pair<const data::GCGCostType,unsigned int> >::type *_; // [rsp+98h] [rbp-148h]
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type *cost_num; // [rsp+A0h] [rbp-140h]
  std::pair<const proto::GCGDiceSideType,unsigned int> __for_end; // [rsp+A8h] [rbp-138h] BYREF
  common::milog::MiLogStream v61; // [rsp+B0h] [rbp-130h] BYREF
  common::milog::MiLogStream v62; // [rsp+D0h] [rbp-110h] BYREF
  common::milog::MiLogStream v63; // [rsp+F0h] [rbp-F0h] BYREF
  common::milog::MiLogStream __l; // [rsp+110h] [rbp-D0h] BYREF
  char v65[176]; // [rsp+130h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 13 cost_type:227 64 4 17 need_cost_num:233 80 4 13 dice_type:267 96 8 17 dice_type_opt:260";
  *(_QWORD *)(v5 + 16) = BT::ActionReserveDiceByHand::tryUsePayCardCost;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -202116352;
  if ( !(_BYTE)`guard variable for'BT::ActionReserveDiceByHand::tryUsePayCardCost(std::map<data::GCGCostType,unsigned int> const&,unsigned int &,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>)::need_check_cost_vec
    && __cxa_guard_acquire(&`guard variable for'BT::ActionReserveDiceByHand::tryUsePayCardCost(std::map<data::GCGCostType,unsigned int> const&,unsigned int &,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>)::need_check_cost_vec) )
  {
    __l.log_ = (common::milog::MiLog *)0xC0000000BLL;
    __l.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)0xE0000000DLL;
    __l.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x100000000FLL;
    __l.ostr_ = (common::milog::MilogStringStream *)0x300000011LL;
    std::allocator<data::GCGCostType>::allocator(&__a);
    std::vector<data::GCGCostType>::vector(
      &BT::ActionReserveDiceByHand::tryUsePayCardCost(std::map<data::GCGCostType,unsigned int> const&,unsigned int &,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>)::need_check_cost_vec,
      (std::initializer_list<data::GCGCostType>)__PAIR128__(8LL, &__l),
      &__a);
    __cxa_guard_release(&`guard variable for'BT::ActionReserveDiceByHand::tryUsePayCardCost(std::map<data::GCGCostType,unsigned int> const&,unsigned int &,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>)::need_check_cost_vec);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<data::GCGCostType>::~vector,
      &BT::ActionReserveDiceByHand::tryUsePayCardCost(std::map<data::GCGCostType,unsigned int> const&,unsigned int &,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>)::need_check_cost_vec,
      &_dso_handle);
    std::allocator<data::GCGCostType>::~allocator(&__a);
  }
  is_can_payed = 1;
  if ( *(_BYTE *)(((unsigned __int64)total_cost_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)total_cost_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)total_cost_num >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_store4(total_cost_num);
  }
  *total_cost_num = 0;
  __for_range = cost_map;
  __for_end_1._M_node = (std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Base_ptr)std::map<data::GCGCostType,unsigned int>::begin(cost_map)._M_node;
  __for_end = (std::pair<const proto::GCGDiceSideType,unsigned int>)std::map<data::GCGCostType,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Self *)&__for_end_1,
            (const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Self *)&__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,unsigned int> > *const)&__for_end_1);
    v9 = v8;
    if ( ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v8 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v8, 8LL);
    }
    *(_QWORD *)(v5 + 96) = *v9;
    _ = std::get<0ul,data::GCGCostType const,unsigned int>((std::pair<const data::GCGCostType,unsigned int> *)(v5 + 96));
    cost_num = std::get<1ul,data::GCGCostType const,unsigned int>((std::pair<const data::GCGCostType,unsigned int> *)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)total_cost_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)total_cost_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)total_cost_num >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(total_cost_num);
    }
    v10 = *total_cost_num;
    if ( *(_BYTE *)(((unsigned __int64)cost_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cost_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cost_num);
    }
    *total_cost_num = v10 + *cost_num;
    std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,unsigned int> > *const)&__for_end_1);
  }
  __for_range_0 = &BT::ActionReserveDiceByHand::tryUsePayCardCost(std::map<data::GCGCostType,unsigned int> const&,unsigned int &,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>)::need_check_cost_vec;
  __for_begin_0._M_current = std::vector<data::GCGCostType>::begin(&BT::ActionReserveDiceByHand::tryUsePayCardCost(std::map<data::GCGCostType,unsigned int> const&,unsigned int &,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>,std::map&<proto::GCGDiceSideType,unsigned int,std::less<proto>,std::allocator<std::pair<proto const,unsigned int>>>)::need_check_cost_vec)._M_current;
  __for_end_0._M_current = std::vector<data::GCGCostType>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGCostType *,std::vector<data::GCGCostType>>(&__for_begin_0, &__for_end_0) )
  {
    v11 = __gnu_cxx::__normal_iterator<data::GCGCostType *,std::vector<data::GCGCostType>>::operator*(&__for_begin_0);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    *(_DWORD *)(v5 + 48) = *v12;
    if ( std::map<data::GCGCostType,unsigned int>::count(
           cost_map,
           (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 48)) )
    {
      v13 = std::map<data::GCGCostType,unsigned int>::at(
              cost_map,
              (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 48));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *(_DWORD *)(v5 + 64) = *v14;
      if ( *(_DWORD *)(v5 + 48) == 3 )
      {
        is_same_can_pay = 0;
        __for_range_1 = dice_map;
        __for_begin_1._M_node = std::map<proto::GCGDiceSideType,unsigned int>::begin(dice_map)._M_node;
        __for_end_1._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin_1, &__for_end_1) )
        {
          v15 = std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator*(&__for_begin_1);
          v16 = v15;
          if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v15, 8LL);
          }
          __for_end = *v16;
          dice_type = std::get<0ul,proto::GCGDiceSideType const,unsigned int>(&__for_end);
          v17 = std::get<1ul,proto::GCGDiceSideType const,unsigned int>(&__for_end);
          dice_num = v17;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          if ( *dice_num >= *(_DWORD *)(v5 + 64) )
          {
            is_same_can_pay = 1;
            v18 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](dice_map, dice_type);
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
              && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            {
              v18 = __asan_report_load4(v18);
            }
            *(_DWORD *)v18 -= *(_DWORD *)(v5 + 64);
            v19 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                      reserve_dice_result_map,
                                      dice_type);
            if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0
              && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            {
              v19 = __asan_report_load4(v19);
            }
            *(_DWORD *)v19 += *(_DWORD *)(v5 + 64);
            break;
          }
          std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator++(&__for_begin_1);
        }
        if ( !is_same_can_pay )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
            "tryUsePayCardCost",
            253);
          v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v61, (const char (*)[32])off_1BB46580);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 64));
          common::milog::MiLogStream::~MiLogStream(&v61);
          is_can_payed = 0;
          result = -1;
          goto LABEL_60;
        }
      }
      else
      {
        *(std::optional<proto::GCGDiceSideType> *)(v5 + 96) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>((data::GCGCostType)*(_DWORD *)(v5 + 48));
        if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v5 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
            "tryUsePayCardCost",
            263);
          v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v62, (const char (*)[11])"cost_type:");
          val = *(_DWORD *)(v5 + 48);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v23,
            (const char (*)[26])" not find valid dice type");
          common::milog::MiLogStream::~MiLogStream(&v62);
        }
        else
        {
          v24 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v5 + 96));
          v25 = v24;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v24);
          }
          *(_DWORD *)(v5 + 80) = *v25;
          if ( !std::map<proto::GCGDiceSideType,unsigned int>::count(
                  dice_map,
                  (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
              "tryUsePayCardCost",
              270);
            v26 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v63,
                    (const char (*)[31])off_1BB46640);
            val = *(_DWORD *)(v5 + 80);
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
            v28 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v27,
                    (const char (*)[23])" empty, need_cost_num:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v5 + 64));
            common::milog::MiLogStream::~MiLogStream(&v63);
            result = -1;
            goto LABEL_60;
          }
          v29 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                  dice_map,
                  (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 80));
          v30 = v29;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v29);
          }
          if ( *v30 < *(_DWORD *)(v5 + 64) )
          {
            common::milog::MiLogStream::create(
              &__l,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
              "tryUsePayCardCost",
              275);
            v31 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &__l,
                    (const char (*)[31])off_1BB46640);
            val = *(_DWORD *)(v5 + 80);
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
            v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])", num:");
            v34 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                    dice_map,
                    (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 80));
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, v34);
            v36 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v35,
                    (const char (*)[17])", need_cost_num:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v5 + 64));
            common::milog::MiLogStream::~MiLogStream(&__l);
            is_can_payed = 0;
            result = -1;
            goto LABEL_60;
          }
          v37 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                    dice_map,
                                    (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 80));
          if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) != 0 && (char)((v37 & 7) + 3) >= *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
            v37 = __asan_report_load4(v37);
          *(_DWORD *)v37 -= *(_DWORD *)(v5 + 64);
          v38 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                    reserve_dice_result_map,
                                    (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 80));
          if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) != 0 && (char)((v38 & 7) + 3) >= *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
            v38 = __asan_report_load4(v38);
          *(_DWORD *)v38 += *(_DWORD *)(v5 + 64);
        }
      }
    }
    __gnu_cxx::__normal_iterator<data::GCGCostType *,std::vector<data::GCGCostType>>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &__l,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
    "tryUsePayCardCost",
    284);
  v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&__l, (const char (*)[14])"is_can_payed:");
  v40 = common::milog::MiLogStream::operator<<(v39, is_can_payed);
  v41 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          v40,
          (const char (*)[32])", reserve_dice_result_map size:");
  *(_QWORD *)(v5 + 96) = std::map<proto::GCGDiceSideType,unsigned int>::size(reserve_dice_result_map);
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v41, (const unsigned __int64 *)(v5 + 96));
  common::milog::MiLogStream::~MiLogStream(&__l);
  if ( is_can_payed )
    result = 0;
  else
    result = -1;
LABEL_60:
  if ( v65 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 290: range 000000000DE842C0-000000000DE845D3
int32_t __cdecl BT::ActionReserveDiceByHand::reserveDice(
        BT::ActionReserveDiceByHand *const this,
        const std::map<proto::GCGDiceSideType,unsigned int> *reserve_dice_result_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-90h] BYREF
  char v10[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 blackboard_ptr:297";
  *(_QWORD *)(v2 + 16) = BT::ActionReserveDiceByHand::reserveDice;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::map<proto::GCGDiceSideType,unsigned int>::empty(reserve_dice_result_map) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
      "reserveDice",
      293);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v9, (const char (*)[21])"reserve map is empty");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = 0;
  }
  else
  {
    BT::TreeNode::getConfig(this);
    BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v2 + 32));
    if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
        "reserveDice",
        300);
      v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v8,
             (const char (*)[45])"reserveDice blackboard_ptr is nullptr, name:");
      BT::TreeNode::getName[abi:cxx11]((std::string *)&v9, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v9);
      std::string::~string(&v9);
      common::milog::MiLogStream::~MiLogStream(&v8);
      v5 = -1;
    }
    else
    {
      BT::BlackboardUtil::addReserverDiceMap((BT::BlackboardPtr *)(v2 + 32), reserve_dice_result_map);
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/actions/action_reserve_dice_by_hand.cpp",
        "reserveDice",
        304);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v9, (const char (*)[17])"reserveDice succ");
      common::milog::MiLogStream::~MiLogStream(&v9);
      v5 = 0;
    }
    std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v2 + 32));
  }
  result = v5;
  if ( v10 == (char *)v2 )
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

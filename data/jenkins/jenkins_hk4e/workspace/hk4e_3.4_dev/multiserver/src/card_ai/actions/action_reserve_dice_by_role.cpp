// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_reserve_dice_by_role.cpp

// Line 26: range 000000000DE84682-000000000DE84D98
BT::NodeStatus __cdecl BT::ActionReserveDiceByRole::tick(BT::ActionReserveDiceByRole *const this)
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
  GCGDiceZone *DiceZone; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rax
  common::milog::MiLogStream *v14; // rax
  BT::NodeStatus result; // eax
  GCGCharacterZone *CharacterZone; // [rsp+10h] [rbp-200h]
  GCGControllerValue cur_controller_id; // [rsp+24h] [rbp-1ECh]
  GCGGameMode *game_mode; // [rsp+30h] [rbp-1E0h]
  GCGField *field; // [rsp+38h] [rbp-1D8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-1D0h] BYREF
  std::string val; // [rsp+60h] [rbp-1B0h] BYREF
  char v22[400]; // [rsp+80h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 16 17 blackboard_ptr:28 64 16 17 controller_ptr:34 96 24 11 dice_vec:50 160 24 25 need_vali"
                        "d_element_vec:51 224 24 11 echo_vec:52 288 32 19 global_logic_key:35";
  *(_QWORD *)(v1 + 16) = BT::ActionReserveDiceByRole::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862727] = -234881024;
  v3[536862728] = -218959118;
  v3[536862730] = -202116109;
  BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 32));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/actions/action_reserve_dice_by_role.cpp",
      "tick",
      31);
    v4 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v20,
           (const char (*)[57])"ActionReserveDiceByRole blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = FAILURE;
  }
  else
  {
    std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 64), 0LL);
    BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
      (std::string *)(v1 + 288),
      BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
    v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
            v6,
            (const std::string *)(v1 + 288),
            (std::shared_ptr<GCGAIController> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_reserve_dice_by_role.cpp",
        "tick",
        38);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v20, (const char (*)[14])off_1BB455C0);
      BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 288));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v5 = FAILURE;
    }
    else if ( std::operator==<GCGAIController>((const std::shared_ptr<GCGAIController> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/action_reserve_dice_by_role.cpp",
        "tick",
        43);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[32])"controller_ptr is nullptr, key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 288));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v5 = FAILURE;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      game_mode = GCGControllerBase::getGameMode(v9);
      v10 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      cur_controller_id = GCGControllerBase::getControllerId(v10);
      Duel = GCGGameMode::getDuel(game_mode);
      field = GCGDuel::getField(Duel, cur_controller_id);
      DiceZone = GCGField::getDiceZone(field);
      DiceVec = GCGDiceZone::getDiceVec(DiceZone);
      std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v1 + 96), DiceVec);
      std::vector<data::GCGEffectElementType>::vector((std::vector<data::GCGEffectElementType> *const)(v1 + 160));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 224));
      CharacterZone = GCGField::getCharacterZone(field);
      std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionReserveDiceByRole::tick(void)::{lambda(GCGCard &)#1},void,void>(
        (std::function<ForeachPolicy(GCGCard&)> *const)&val,
        (BT::ActionReserveDiceByRole::tick::<lambda(GCGCard&)>)__PAIR128__(v1 + 224, v1 + 160));
      GCGCharacterZone::foreachAliveCharacter(CharacterZone, (std::function<ForeachPolicy(GCGCard&)> *)&val);
      std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&val);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/actions/action_reserve_dice_by_role.cpp",
        "tick",
        60);
      v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[18])"need element vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v14, (const std::vector<unsigned int> *)(v1 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      BT::ActionReserveDiceByRole::reserveDice(
        this,
        (const std::vector<proto::GCGDiceSideType> *)(v1 + 96),
        (const std::vector<data::GCGEffectElementType> *)(v1 + 160));
      v5 = SUCCESS;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 224));
      std::vector<data::GCGEffectElementType>::~vector((std::vector<data::GCGEffectElementType> *const)(v1 + 160));
      std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v1 + 96));
    }
    std::string::~string((void *)(v1 + 288));
    std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 64));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 32));
  result = v5;
  if ( v22 == (char *)v1 )
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

// Line 54: range 000000000DE845D4-000000000DE84681
ForeachPolicy __cdecl BT::ActionReserveDiceByRole::tick(void)::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionReserveDiceByRole::tick::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::vector<data::GCGEffectElementType> *need_valid_element_vec; // rbx
  std::vector<unsigned int> *echo_vec; // rbx
  std::vector<data::GCGEffectElementType>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  need_valid_element_vec = __closure->__need_valid_element_vec;
  __x[0] = GCGCard::getElementType(card);
  std::vector<data::GCGEffectElementType>::push_back(need_valid_element_vec, __x);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__echo_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__echo_vec);
  echo_vec = __closure->__echo_vec;
  __x[0] = GCGCard::getElementType(card);
  std::vector<unsigned int>::push_back(echo_vec, (std::vector<unsigned int>::value_type *)__x);
  return 0;
};

// Line 67: range 000000000DE84D9A-000000000DE854B9
int32_t __cdecl BT::ActionReserveDiceByRole::reserveDice(
        BT::ActionReserveDiceByRole *const this,
        const std::vector<proto::GCGDiceSideType> *dice_vec,
        const std::vector<data::GCGEffectElementType> *element_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<const data::GCGEffectElementType*,std::vector<data::GCGEffectElementType> >::reference v6; // rax
  _DWORD *v7; // rdx
  proto::GCGDiceSideType *v8; // rax
  __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> >::reference v9; // rax
  _DWORD *v10; // rdx
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t v13; // r14d
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  std::less<proto::GCGDiceSideType> __comp; // [rsp+2Eh] [rbp-202h] BYREF
  std::allocator<proto::GCGDiceSideType> __a; // [rsp+2Fh] [rbp-201h] BYREF
  std::initializer_list<proto::GCGDiceSideType> __l; // [rsp+30h] [rbp-200h] BYREF
  std::vector<proto::GCGDiceSideType>::const_iterator __for_begin_0; // [rsp+40h] [rbp-1F0h] BYREF
  const std::vector<data::GCGEffectElementType> *__for_range; // [rsp+48h] [rbp-1E8h]
  const std::vector<proto::GCGDiceSideType> *__for_range_0; // [rsp+50h] [rbp-1E0h]
  const BT::NodeConfigure *config; // [rsp+58h] [rbp-1D8h]
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-1B0h] BYREF
  char v26[400]; // [rsp+A0h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 17 dice_side_type:81 64 8 16 dice_type_opt:72 96 16 18 blackboard_ptr:101 128 24 18 dice_"
                        "result_vec:80 192 48 29 need_reserve_dice_type_set:69 272 48 26 reserve_dice_result_map:79";
  *(_QWORD *)(v3 + 16) = BT::ActionReserveDiceByRole::reserveDice;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862730] = -202116109;
  LODWORD(__l._M_array) = 8;
  std::allocator<proto::GCGDiceSideType>::allocator(&__a);
  std::set<proto::GCGDiceSideType>::set(
    (std::set<proto::GCGDiceSideType> *const)(v3 + 192),
    (std::initializer_list<proto::GCGDiceSideType>)__PAIR128__(1LL, &__l),
    &__comp,
    &__a);
  std::allocator<proto::GCGDiceSideType>::~allocator(&__a);
  __for_range = element_vec;
  __l._M_len = (std::initializer_list<proto::GCGDiceSideType>::size_type)std::vector<data::GCGEffectElementType>::begin(element_vec)._M_current;
  __for_begin_0._M_current = (const proto::GCGDiceSideType *)std::vector<data::GCGEffectElementType>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGEffectElementType const*,std::vector<data::GCGEffectElementType>>(
            (const __gnu_cxx::__normal_iterator<const data::GCGEffectElementType*,std::vector<data::GCGEffectElementType> > *)&__l._M_len,
            (const __gnu_cxx::__normal_iterator<const data::GCGEffectElementType*,std::vector<data::GCGEffectElementType> > *)&__for_begin_0) )
  {
    v6 = __gnu_cxx::__normal_iterator<data::GCGEffectElementType const*,std::vector<data::GCGEffectElementType>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGEffectElementType*,std::vector<data::GCGEffectElementType> > *const)&__l._M_len);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    HIDWORD(__l._M_array) = *v7;
    *(std::optional<proto::GCGDiceSideType> *)(v3 + 64) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(SHIDWORD(__l._M_array));
    if ( std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v3 + 64)) )
    {
      v8 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v3 + 64));
      std::set<proto::GCGDiceSideType>::insert((std::set<proto::GCGDiceSideType> *const)(v3 + 192), v8);
    }
    __gnu_cxx::__normal_iterator<data::GCGEffectElementType const*,std::vector<data::GCGEffectElementType>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGEffectElementType*,std::vector<data::GCGEffectElementType> > *const)&__l._M_len);
  }
  std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v3 + 272));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 128));
  __for_range_0 = dice_vec;
  __for_begin_0._M_current = std::vector<proto::GCGDiceSideType>::begin(dice_vec)._M_current;
  *(std::vector<proto::GCGDiceSideType>::const_iterator *)(v3 + 64) = std::vector<proto::GCGDiceSideType>::end(__for_range_0);
  while ( __gnu_cxx::operator!=<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>(
            &__for_begin_0,
            (const __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > *)(v3 + 64)) )
  {
    v9 = __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin_0);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v3 + 48) = *v10;
    if ( *(_DWORD *)(v3 + 48)
      && std::set<proto::GCGDiceSideType>::count(
           (const std::set<proto::GCGDiceSideType> *const)(v3 + 192),
           (const std::set<proto::GCGDiceSideType>::key_type *)(v3 + 48)) )
    {
      v11 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                (std::map<proto::GCGDiceSideType,unsigned int> *const)(v3 + 272),
                                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v3 + 48));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load4(v11);
      ++*(_DWORD *)v11;
      LODWORD(__l._M_array) = *(_DWORD *)(v3 + 48);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v3 + 128),
        (std::vector<unsigned int>::value_type *)&__l);
    }
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/actions/action_reserve_dice_by_role.cpp",
    "reserveDice",
    94);
  v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v25, (const char (*)[20])"reserveDice result:");
  common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::vector<unsigned int> *)(v3 + 128));
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( std::map<proto::GCGDiceSideType,unsigned int>::empty((const std::map<proto::GCGDiceSideType,unsigned int> *const)(v3 + 272)) )
  {
    v13 = 0;
  }
  else
  {
    config = BT::TreeNode::getConfig(this);
    BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v3 + 96));
    if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/actions/action_reserve_dice_by_role.cpp",
        "reserveDice",
        104);
      v14 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v24,
              (const char (*)[57])"ActionReserveDiceByRole blackboard_ptr is nullptr, name:");
      BT::TreeNode::getName[abi:cxx11]((std::string *)&v25, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v25);
      std::string::~string(&v25);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v13 = -1;
    }
    else
    {
      BT::BlackboardUtil::addReserverDiceMap(
        (BT::BlackboardPtr *)(v3 + 96),
        (const std::map<proto::GCGDiceSideType,unsigned int> *)(v3 + 272));
      v13 = 0;
    }
    std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v3 + 96));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
  std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v3 + 272));
  std::set<proto::GCGDiceSideType>::~set((std::set<proto::GCGDiceSideType> *const)(v3 + 192));
  result = v13;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

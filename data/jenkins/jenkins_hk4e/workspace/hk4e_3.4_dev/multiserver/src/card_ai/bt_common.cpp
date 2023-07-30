// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/bt_common.cpp

// Line 21: range 000000000D7CFCCA-000000000D7CFD9D
std::string *__cdecl BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        std::string *retstr,
        BT::BlackboardGlobalKeyType global_key_type)
{
  std::string __rhs; // [rsp+10h] [rbp-30h] BYREF

  std::to_string(&__rhs, global_key_type);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &BT::BlackboardUtil::GLOBAL_BLACKBOARD_KEY_PREFIX[abi:cxx11], &__rhs);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 33: range 000000000D7CFD9E-000000000D7D0094
std::string *__cdecl BT::enumValToStr<BT::BlackboardGlobalKeyType>(
        std::string *retstr,
        BT::BlackboardGlobalKeyType global_key)
{
  common::milog::MiLogStream *v2; // rax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-35h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  switch ( global_key )
  {
    case BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT:
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT", &__a);
      std::allocator<char>::~allocator(&__a);
      break;
    case BLACK_BOARD_GLOBAL_KEY_PHASE:
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "BLACK_BOARD_GLOBAL_KEY_PHASE", &__a);
      std::allocator<char>::~allocator(&__a);
      break;
    case BLACK_BOARD_GLOBAL_KEY_RESERVE_DICE_POOL:
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "BLACK_BOARD_GLOBAL_KEY_RESERVE_DICE_POOL", &__a);
      std::allocator<char>::~allocator(&__a);
      break;
    case BLACK_BOARD_GLOBAL_KEY_ACTION_PLAN:
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "BLACK_BOARD_GLOBAL_KEY_ACTION_PLAN", &__a);
      std::allocator<char>::~allocator(&__a);
      break;
    case BLACK_BORAD_GLOBAL_KEY_RESERVE_HAND_CARD_POOL:
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "BLACK_BORAD_GLOBAL_KEY_RESERVE_HAND_CARD_POOL", &__a);
      std::allocator<char>::~allocator(&__a);
      break;
    case BLACK_BOARD_GLOBAL_KEY_CANDIDATE_ONSTAGE_CHARACTER:
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        retstr,
        "BLACK_BOARD_GLOBAL_KEY_CANDIDATE_ONSTAGE_CHARACTER",
        &__a);
      std::allocator<char>::~allocator(&__a);
      break;
    default:
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/bt_common.cpp",
        "enumValToStr<BT::BlackboardGlobalKeyType>",
        62);
      v2 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v6,
             (const char (*)[19])"unkown global_key:");
      val = global_key;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      common::milog::MiLogStream::~MiLogStream(&v6);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, _str, &__a);
      std::allocator<char>::~allocator(&__a);
      break;
  }
  return retstr;
};

// Line 70: range 000000000D7D0095-000000000D7D02F4
std::string *__cdecl BT::enumValToStr<BT::BlackboardInnerPhaseType>(
        std::string *retstr,
        BT::BlackboardInnerPhaseType phase_type)
{
  common::milog::MiLogStream *v2; // rax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-35h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( phase_type == CONDITION_PHASE_TYPE_DRAW )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "CONDITION_PHASE_TYPE_DRAW", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    if ( phase_type > CONDITION_PHASE_TYPE_DRAW )
    {
LABEL_11:
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/bt_common.cpp",
        "enumValToStr<BT::BlackboardInnerPhaseType>",
        91);
      v2 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v6,
             (const char (*)[19])"unkown phase_type:");
      val = phase_type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      common::milog::MiLogStream::~MiLogStream(&v6);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "CONDITION_PHASE_TYPE_INVALID", &__a);
      std::allocator<char>::~allocator(&__a);
      return retstr;
    }
    switch ( phase_type )
    {
      case CONDITION_PHASE_TYPE_CHANGE_ONSTAGE:
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(retstr, "CONDITION_PHASE_TYPE_CHANGE_ONSTAGE", &__a);
        std::allocator<char>::~allocator(&__a);
        break;
      case CONDITION_PHASE_TYPE_REROLL:
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(retstr, "CONDITION_PHASE_TYPE_REROLL", &__a);
        std::allocator<char>::~allocator(&__a);
        break;
      case CONDITION_PHASE_TYPE_ACTION:
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(retstr, "CONDITION_PHASE_TYPE_ACTION", &__a);
        std::allocator<char>::~allocator(&__a);
        break;
      default:
        goto LABEL_11;
    }
  }
  return retstr;
};

// Line 98: range 000000000D7D02F6-000000000D7D0764
std::string *__cdecl BT::BlackboardUtil::resolveGlobalKey(std::string *retstr, const std::string *global_key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::allocator<char> __a; // [rsp+1Ah] [rbp-C6h] BYREF
  bool is_inner_global_key; // [rsp+1Bh] [rbp-C5h]
  BT::BlackboardGlobalKeyType phase_type; // [rsp+1Ch] [rbp-C4h]
  std::string __lhs; // [rsp+20h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 phase_value:109 64 32 23 blackboard_enum_str:107";
  *(_QWORD *)(v2 + 16) = BT::BlackboardUtil::resolveGlobalKey;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  if ( (unsigned __int8)std::string::empty(global_key) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, _str, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    v5 = std::string::size(&BT::BlackboardUtil::GLOBAL_BLACKBOARD_KEY_PREFIX[abi:cxx11]);
    std::string::substr(&__lhs, global_key, 0LL, v5);
    is_inner_global_key = std::operator==<char>(&__lhs, &BT::BlackboardUtil::GLOBAL_BLACKBOARD_KEY_PREFIX[abi:cxx11]);
    std::string::~string(&__lhs);
    if ( is_inner_global_key )
    {
      v6 = std::string::size(&BT::BlackboardUtil::GLOBAL_BLACKBOARD_KEY_PREFIX[abi:cxx11]);
      std::string::substr(v2 + 64, global_key, v6, -1LL);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__lhs,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/bt_common.cpp",
        "resolveGlobalKey",
        108);
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
             (common::milog::MiLogStream *const)&__lhs,
             (const char (*)[12])"global_key:");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, global_key);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             v8,
             (const char (*)[23])", blackboard_enum_str:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__lhs);
      *(_DWORD *)(v2 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             (const std::string *)(v2 + 64),
             (unsigned int *)(v2 + 48),
             1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__lhs,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/bt_common.cpp",
          "resolveGlobalKey",
          112);
        v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                (common::milog::MiLogStream *const)&__lhs,
                (const char (*)[49])"convert phase_value failed, blackboard_enum_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__lhs);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(retstr, _str, &__a);
        std::allocator<char>::~allocator(&__a);
      }
      else
      {
        phase_type = *(_DWORD *)(v2 + 48);
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                                + 15) >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store_n(retstr, 32LL);
        }
        BT::enumValToStr<BT::BlackboardGlobalKeyType>(retstr, phase_type);
      }
      std::string::~string((void *)(v2 + 64));
    }
    else
    {
      std::string::basic_string(retstr, global_key);
    }
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 125: range 000000000D7D0766-000000000D7D07C6
BT::BlackboardInnerPhaseType __cdecl BT::BlackboardUtil::convertToBlackboardPhase(GCGPhaseType gcg_phase_type)
{
  BT::BlackboardInnerPhaseType result; // [rsp+10h] [rbp-4h]

  result = CONDITION_PHASE_TYPE_INVALID;
  switch ( gcg_phase_type )
  {
    case GCG_PHASE_DRAW:
      result = CONDITION_PHASE_TYPE_DRAW;
      break;
    case GCG_PHASE_ON_STAGE:
    case GCG_PHASE_DIE:
      result = CONDITION_PHASE_TYPE_CHANGE_ONSTAGE;
      break;
    case GCG_PHASE_DICE:
    case GCG_PHASE_REROLL:
      result = CONDITION_PHASE_TYPE_REROLL;
      break;
    case GCG_PHASE_MAIN:
      result = CONDITION_PHASE_TYPE_ACTION;
      break;
    default:
      return result;
  }
  return result;
};

// Line 160: range 000000000D7D07C8-000000000D7D0C26
void __cdecl BT::BlackboardUtil::addReserverDiceMap(
        BT::BlackboardPtr *blackboard_ptr,
        const std::map<proto::GCGDiceSideType,unsigned int> *dice_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rax
  int v7; // esi
  BT::Blackboard *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-130h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-128h] BYREF
  const std::map<proto::GCGDiceSideType,unsigned int> *__for_range; // [rsp+20h] [rbp-120h]
  const std::pair<const proto::GCGDiceSideType,unsigned int> *v13; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,const std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_type; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_num; // [rsp+38h] [rbp-108h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-100h] BYREF
  char v17[224]; // [rsp+60h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 22 cur_added_dice_num:170 48 32 24 global_dice_pool_key:166 112 48 16 cur_dice_map:167";
  *(_QWORD *)(v2 + 16) = BT::BlackboardUtil::addReserverDiceMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( std::operator==<BT::Blackboard>(blackboard_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/bt_common.cpp",
      "addReserverDiceMap",
      163);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v16,
      (const char (*)[26])"blackboard_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
      (std::string *)(v2 + 48),
      BLACK_BOARD_GLOBAL_KEY_RESERVE_DICE_POOL);
    std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 112));
    v5 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)blackboard_ptr);
    BT::Blackboard::get<std::map<proto::GCGDiceSideType,unsigned int>>(
      v5,
      (const std::string *)(v2 + 48),
      (std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 112));
    *(_DWORD *)(v2 + 32) = 0;
    __for_range = dice_map;
    __for_begin._M_node = std::map<proto::GCGDiceSideType,unsigned int>::begin(dice_map)._M_node;
    __for_end._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(dice_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator*(&__for_begin);
      dice_type = std::get<0ul,proto::GCGDiceSideType const,unsigned int>(v13);
      dice_num = (std::tuple_element<1,const std::pair<const proto::GCGDiceSideType,unsigned int> >::type *)std::get<1ul,proto::GCGDiceSideType const,unsigned int>(v13);
      v6 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                               (std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 112),
                               dice_type);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load4(v6);
      v7 = *(_DWORD *)v6;
      if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) )
      {
        v6 = __asan_report_load4(dice_num);
      }
      *(_DWORD *)v6 = v7 + *dice_num;
      *(_DWORD *)(v2 + 32) += *dice_num;
      std::_Rb_tree_const_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator++(&__for_begin);
    }
    v8 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)blackboard_ptr);
    BT::Blackboard::set<std::map<proto::GCGDiceSideType,unsigned int>>(
      v8,
      (const std::string *)(v2 + 48),
      (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 112));
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/bt_common.cpp",
      "addReserverDiceMap",
      177);
    v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v16,
           (const char (*)[44])"addReserverDiceMap succ cur_added_dice_num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v16);
    std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 112));
    std::string::~string((void *)(v2 + 48));
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 181: range 000000000D7D0C28-000000000D7D0FEB
void __cdecl BT::BlackboardUtil::addReserveHandCardMap(
        BT::BlackboardPtr *blackboard_ptr,
        const std::map<unsigned int,unsigned int> *reserve_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rax
  int v7; // esi
  BT::Blackboard *v8; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-100h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+28h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *card_id; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+38h] [rbp-E8h]
  char v15[224]; // [rsp+40h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 22 global_reserve_key:187 112 48 19 cur_reserve_map:188";
  *(_QWORD *)(v2 + 16) = BT::BlackboardUtil::addReserveHandCardMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( std::operator==<BT::Blackboard>(blackboard_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 48),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/bt_common.cpp",
      "addReserveHandCardMap",
      184);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 48),
      (const char (*)[26])"blackboard_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
  }
  else
  {
    BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
      (std::string *)(v2 + 48),
      BLACK_BORAD_GLOBAL_KEY_RESERVE_HAND_CARD_POOL);
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
    v5 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)blackboard_ptr);
    BT::Blackboard::get<std::map<unsigned int,unsigned int>>(
      v5,
      (const std::string *)(v2 + 48),
      (std::map<unsigned int,unsigned int> *)(v2 + 112));
    __for_range = reserve_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(reserve_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(reserve_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      card_id = std::get<0ul,unsigned int const,unsigned int>(v12);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
      v6 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                               (std::map<unsigned int,unsigned int> *const)(v2 + 112),
                               card_id);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load4(v6);
      v7 = *(_DWORD *)v6;
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        v6 = __asan_report_load4(num);
      }
      *(_DWORD *)v6 = v7 + *num;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    v8 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)blackboard_ptr);
    BT::Blackboard::set<std::map<unsigned int,unsigned int>>(
      v8,
      (const std::string *)(v2 + 48),
      (const std::map<unsigned int,unsigned int> *)(v2 + 112));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
    std::string::~string((void *)(v2 + 48));
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 198: range 000000000D7D0FEC-000000000D7D12C5
void __cdecl BT::BlackboardUtil::addCandidateOnstageCharacterVec(
        BT::BlackboardPtr *blackboard_ptr,
        const std::vector<BT::CandidateOnstageCharacterInfo> *candidate_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const BT::CandidateOnstageCharacterInfo *M_current; // r15
  const BT::CandidateOnstageCharacterInfo *v7; // r14
  BT::Blackboard *v8; // rax
  __gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> > __i; // [rsp+20h] [rbp-E0h] BYREF
  __gnu_cxx::__normal_iterator<const BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> > __position; // [rsp+28h] [rbp-D8h] BYREF
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 21 cur_candidate_vec:210 96 32 22 global_onstage_key:209";
  *(_QWORD *)(v2 + 16) = BT::BlackboardUtil::addCandidateOnstageCharacterVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( !std::vector<BT::CandidateOnstageCharacterInfo>::empty(candidate_vec) )
  {
    if ( std::operator==<BT::Blackboard>(blackboard_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/bt_common.cpp",
        "addCandidateOnstageCharacterVec",
        206);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)(v2 + 96),
        (const char (*)[26])"blackboard_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    }
    else
    {
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
        (std::string *)(v2 + 96),
        BLACK_BOARD_GLOBAL_KEY_CANDIDATE_ONSTAGE_CHARACTER);
      std::vector<BT::CandidateOnstageCharacterInfo>::vector((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v2 + 32));
      v5 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)blackboard_ptr);
      BT::Blackboard::get<std::vector<BT::CandidateOnstageCharacterInfo>>(
        v5,
        (const std::string *)(v2 + 96),
        (std::vector<BT::CandidateOnstageCharacterInfo> *)(v2 + 32));
      M_current = std::vector<BT::CandidateOnstageCharacterInfo>::end(candidate_vec)._M_current;
      v7 = std::vector<BT::CandidateOnstageCharacterInfo>::begin(candidate_vec)._M_current;
      __i._M_current = std::vector<BT::CandidateOnstageCharacterInfo>::end((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v2 + 32))._M_current;
      __gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo const*,std::vector<BT::CandidateOnstageCharacterInfo>>::__normal_iterator<BT::CandidateOnstageCharacterInfo*>(
        &__position,
        &__i);
      std::vector<BT::CandidateOnstageCharacterInfo>::insert<__gnu_cxx::__normal_iterator<BT::CandidateOnstageCharacterInfo const*,std::vector<BT::CandidateOnstageCharacterInfo>>,void>(
        (std::vector<BT::CandidateOnstageCharacterInfo> *const)(v2 + 32),
        __position,
        (__gnu_cxx::__normal_iterator<const BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> >)v7,
        (__gnu_cxx::__normal_iterator<const BT::CandidateOnstageCharacterInfo*,std::vector<BT::CandidateOnstageCharacterInfo> >)M_current);
      v8 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)blackboard_ptr);
      BT::Blackboard::set<std::vector<BT::CandidateOnstageCharacterInfo>>(
        v8,
        (const std::string *)(v2 + 96),
        (const std::vector<BT::CandidateOnstageCharacterInfo> *)(v2 + 32));
      std::vector<BT::CandidateOnstageCharacterInfo>::~vector((std::vector<BT::CandidateOnstageCharacterInfo> *const)(v2 + 32));
      std::string::~string((void *)(v2 + 96));
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

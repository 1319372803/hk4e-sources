// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/network/player_send_packet_controller.cpp

// Line 21: range 00000000175A76C6-00000000175A77D3
void __cdecl PlayerPacketCache::addAbilityInvoke(PlayerPacketCache *const this, proto::AbilityInvokeEntry *invoke)
{
  proto::AbilityInvocationsNotify *v2; // rax
  proto::AbilityInvokeEntry *v3; // rdx
  std::shared_ptr<proto::AbilityInvocationsNotify> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<proto::AbilityInvocationsNotify>(0LL, &this->ability_proto_ptr) )
  {
    common::tools::perf::make_shared<proto::AbilityInvocationsNotify>();
    std::shared_ptr<proto::AbilityInvocationsNotify>::operator=(&this->ability_proto_ptr, &__r);
    std::shared_ptr<proto::AbilityInvocationsNotify>::~shared_ptr(&__r);
  }
  if ( std::operator==<proto::AbilityInvocationsNotify>(&this->ability_proto_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_send_packet_controller.cpp",
      "addAbilityInvoke",
      29);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v5,
      (const char (*)[31])"cannot alloc for ability_proto");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    v2 = std::__shared_ptr_access<proto::AbilityInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AbilityInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ability_proto_ptr);
    v3 = proto::AbilityInvocationsNotify::add_invokes(v2);
    proto::AbilityInvokeEntry::Swap(v3, invoke);
  }
};

// Line 37: range 00000000175A77D4-00000000175A78E1
void __cdecl PlayerPacketCache::addCombatInvoke(PlayerPacketCache *const this, proto::CombatInvokeEntry *invoke)
{
  proto::CombatInvocationsNotify *v2; // rax
  proto::CombatInvokeEntry *v3; // rdx
  std::shared_ptr<proto::CombatInvocationsNotify> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<proto::CombatInvocationsNotify>(0LL, &this->combat_proto_ptr) )
  {
    common::tools::perf::make_shared<proto::CombatInvocationsNotify>();
    std::shared_ptr<proto::CombatInvocationsNotify>::operator=(&this->combat_proto_ptr, &__r);
    std::shared_ptr<proto::CombatInvocationsNotify>::~shared_ptr(&__r);
  }
  if ( std::operator==<proto::CombatInvocationsNotify>(&this->combat_proto_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_send_packet_controller.cpp",
      "addCombatInvoke",
      44);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v5,
      (const char (*)[30])"cannot alloc for combat_proto");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    v2 = std::__shared_ptr_access<proto::CombatInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CombatInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->combat_proto_ptr);
    v3 = proto::CombatInvocationsNotify::add_invoke_list(v2);
    proto::CombatInvokeEntry::Swap(v3, invoke);
  }
};

// Line 52: range 00000000175A78E2-00000000175A79EF
void __cdecl PlayerPacketCache::addAuthorityChange(
        PlayerPacketCache *const this,
        proto::AuthorityChange *authority_change)
{
  proto::EntityAuthorityChangeNotify *v2; // rax
  proto::AuthorityChange *v3; // rdx
  std::shared_ptr<proto::EntityAuthorityChangeNotify> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<proto::EntityAuthorityChangeNotify>(0LL, &this->authority_proto_ptr) )
  {
    common::tools::perf::make_shared<proto::EntityAuthorityChangeNotify>();
    std::shared_ptr<proto::EntityAuthorityChangeNotify>::operator=(&this->authority_proto_ptr, &__r);
    std::shared_ptr<proto::EntityAuthorityChangeNotify>::~shared_ptr(&__r);
  }
  if ( std::operator==<proto::EntityAuthorityChangeNotify>(0LL, &this->authority_proto_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_send_packet_controller.cpp",
      "addAuthorityChange",
      59);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v5,
      (const char (*)[33])"cannot alloc for authority_proto");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    v2 = std::__shared_ptr_access<proto::EntityAuthorityChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::EntityAuthorityChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->authority_proto_ptr);
    v3 = proto::EntityAuthorityChangeNotify::add_authority_change_list(v2);
    proto::AuthorityChange::Swap(v3, authority_change);
  }
};

// Line 66: range 00000000175A79F0-00000000175A7A22
void __cdecl PlayerPacketCache::flushAll(PlayerPacketCache *const this)
{
  PlayerPacketCache::flushAbilityInvokes(this);
  PlayerPacketCache::flushCombatInvokes(this);
  PlayerPacketCache::flushAuthorityChange(this);
};

// Line 72: range 00000000175A7A24-00000000175A7C08
void __cdecl PlayerPacketCache::flushAbilityInvokes(PlayerPacketCache *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::AbilityInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  Player *v5; // r14
  std::shared_ptr<proto::AbilityInvocationsNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 player_ptr:79";
  *(_QWORD *)(v1 + 16) = PlayerPacketCache::flushAbilityInvokes;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( !std::operator==<proto::AbilityInvocationsNotify>(&this->ability_proto_ptr, 0LL) )
  {
    v4 = std::__shared_ptr_access<proto::AbilityInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AbilityInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ability_proto_ptr);
    if ( proto::AbilityInvocationsNotify::invokes_size(v4) )
    {
      std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 32));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
      {
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        std::dynamic_pointer_cast<google::protobuf::Message const,proto::AbilityInvocationsNotify>(&__r);
        Player::sendMessage(v5, (common::minet::ConstMessagePtr *)&__r, 0LL);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    }
    std::shared_ptr<proto::AbilityInvocationsNotify>::shared_ptr(&__r, 0LL);
    std::shared_ptr<proto::AbilityInvocationsNotify>::operator=(&this->ability_proto_ptr, &__r);
    std::shared_ptr<proto::AbilityInvocationsNotify>::~shared_ptr(&__r);
  }
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 91: range 00000000175A7C0A-00000000175A7DEE
void __cdecl PlayerPacketCache::flushCombatInvokes(PlayerPacketCache *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::CombatInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  Player *v5; // r14
  std::shared_ptr<proto::CombatInvocationsNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 player_ptr:98";
  *(_QWORD *)(v1 + 16) = PlayerPacketCache::flushCombatInvokes;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( !std::operator==<proto::CombatInvocationsNotify>(&this->combat_proto_ptr, 0LL) )
  {
    v4 = std::__shared_ptr_access<proto::CombatInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CombatInvocationsNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->combat_proto_ptr);
    if ( proto::CombatInvocationsNotify::invoke_list_size(v4) )
    {
      std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 32));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
      {
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        std::dynamic_pointer_cast<google::protobuf::Message const,proto::CombatInvocationsNotify>(&__r);
        Player::sendMessage(v5, (common::minet::ConstMessagePtr *)&__r, 0LL);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    }
    std::shared_ptr<proto::CombatInvocationsNotify>::shared_ptr(&__r, 0LL);
    std::shared_ptr<proto::CombatInvocationsNotify>::operator=(&this->combat_proto_ptr, &__r);
    std::shared_ptr<proto::CombatInvocationsNotify>::~shared_ptr(&__r);
  }
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 109: range 00000000175A7DF0-00000000175A7ECB
void __cdecl PlayerSendPacketController::PlayerSendPacketController(
        PlayerSendPacketController *const this,
        PlayerSendPacketController *a2)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_need_delay_flush_ = 0;
  std::unordered_map<unsigned int,PlayerPacketCache>::unordered_map(&this->cache_map_);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/network/player_send_packet_controller.cpp",
    "PlayerSendPacketController",
    111);
  common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(&v2, (const char (*)[90])off_2614B2C0);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 115: range 00000000175A7ECC-00000000175A80B0
void __cdecl PlayerPacketCache::flushAuthorityChange(PlayerPacketCache *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::EntityAuthorityChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  Player *v5; // r14
  std::shared_ptr<proto::EntityAuthorityChangeNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:122";
  *(_QWORD *)(v1 + 16) = PlayerPacketCache::flushAuthorityChange;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( !std::operator==<proto::EntityAuthorityChangeNotify>(0LL, &this->authority_proto_ptr) )
  {
    v4 = std::__shared_ptr_access<proto::EntityAuthorityChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::EntityAuthorityChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->authority_proto_ptr);
    if ( proto::EntityAuthorityChangeNotify::authority_change_list_size(v4) > 0 )
    {
      std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 32));
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
      {
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        std::dynamic_pointer_cast<google::protobuf::Message const,proto::EntityAuthorityChangeNotify>(&__r);
        Player::sendMessage(v5, (common::minet::ConstMessagePtr *)&__r, 0LL);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    }
    std::shared_ptr<proto::EntityAuthorityChangeNotify>::shared_ptr(&__r, 0LL);
    std::shared_ptr<proto::EntityAuthorityChangeNotify>::operator=(&this->authority_proto_ptr, &__r);
    std::shared_ptr<proto::EntityAuthorityChangeNotify>::~shared_ptr(&__r);
  }
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 133: range 00000000175A80B2-00000000175A80FA
void __cdecl PlayerSendPacketController::addAbilityInvoke(
        PlayerSendPacketController *const this,
        uint32_t uid,
        proto::AbilityInvokeEntry *p_invoke)
{
  proto::AbilityInvokeEntry *v3; // rdx
  PlayerPacketCache *cache; // [rsp+28h] [rbp-8h]

  cache = PlayerSendPacketController::getOrCreateCache(this, uid);
  v3 = std::move<proto::AbilityInvokeEntry &>(p_invoke);
  PlayerPacketCache::addAbilityInvoke(cache, v3);
};

// Line 139: range 00000000175A80FC-00000000175A8144
void __cdecl PlayerSendPacketController::addCombatInvoke(
        PlayerSendPacketController *const this,
        uint32_t uid,
        proto::CombatInvokeEntry *p_invoke)
{
  proto::CombatInvokeEntry *v3; // rdx
  PlayerPacketCache *cache; // [rsp+28h] [rbp-8h]

  cache = PlayerSendPacketController::getOrCreateCache(this, uid);
  v3 = std::move<proto::CombatInvokeEntry &>(p_invoke);
  PlayerPacketCache::addCombatInvoke(cache, v3);
};

// Line 145: range 00000000175A8146-00000000175A818E
void __cdecl PlayerSendPacketController::addAuthorityChange(
        PlayerSendPacketController *const this,
        uint32_t uid,
        proto::AuthorityChange *p_authority_change)
{
  proto::AuthorityChange *v3; // rdx
  PlayerPacketCache *cache; // [rsp+28h] [rbp-8h]

  cache = PlayerSendPacketController::getOrCreateCache(this, uid);
  v3 = std::move<proto::AuthorityChange &>(p_authority_change);
  PlayerPacketCache::addAuthorityChange(cache, v3);
};

// Line 151: range 00000000175A8190-00000000175A81BC
void __cdecl PlayerSendPacketController::flushAll(PlayerSendPacketController *const this)
{
  if ( !PlayerSendPacketController::getIsNeedDelayFlush(this) )
    PlayerSendPacketController::forceFlushAll(this);
};

// Line 160: range 00000000175A81BE-00000000175A8269
void __cdecl PlayerSendPacketController::forceFlushAll(PlayerSendPacketController *const this)
{
  std::unordered_map<unsigned int,PlayerPacketCache>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,PlayerPacketCache>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,PlayerPacketCache> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,PlayerPacketCache> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,PlayerPacketCache> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,PlayerPacketCache> >::type *cache; // [rsp+38h] [rbp-8h]

  __for_range = &this->cache_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,PlayerPacketCache>::begin(&this->cache_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,PlayerPacketCache>::end(&this->cache_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,PlayerPacketCache>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,PlayerPacketCache>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,PlayerPacketCache>(__in);
    cache = std::get<1ul,unsigned int const,PlayerPacketCache>(__in);
    PlayerPacketCache::flushAll(cache);
    std::__detail::_Node_iterator<std::pair<unsigned int const,PlayerPacketCache>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,PlayerPacketCache>::clear(&this->cache_map_);
};

// Line 170: range 00000000175A826A-00000000175A8467
PlayerPacketCache *__fastcall PlayerSendPacketController::getOrCreateCache(
        PlayerSendPacketController *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerPacketCache *p_second; // r14
  GameserverService *v6; // rax
  unsigned int GameThreadLocal; // eax
  PlayerPacketCache *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,PlayerPacketCache>,false> __y; // [rsp+10h] [rbp-C0h] BYREF
  PlayerPacketCache *cache; // [rsp+18h] [rbp-B8h]
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:169 64 8 8 iter:171 96 16 14 player_ptr:176";
  *(_QWORD *)(v2 + 16) = PlayerSendPacketController::getOrCreateCache;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::unordered_map<unsigned int,PlayerPacketCache>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,PlayerPacketCache>::find(
                                                                                 &this->cache_map_,
                                                                                 (const std::unordered_map<unsigned int,PlayerPacketCache>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,PlayerPacketCache>::end(&this->cache_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,PlayerPacketCache>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PlayerPacketCache>,false> *)(v2 + 64),
         &__y) )
  {
    p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,PlayerPacketCache>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,PlayerPacketCache>,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v6);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 96), GameThreadLocal + 16);
    cache = std::unordered_map<unsigned int,PlayerPacketCache>::operator[](
              &this->cache_map_,
              (const std::unordered_map<unsigned int,PlayerPacketCache>::key_type *)(v2 + 48));
    std::weak_ptr<Player>::operator=<Player>(&cache->player_wtr, (const std::shared_ptr<Player> *)(v2 + 96));
    p_second = cache;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  result = p_second;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

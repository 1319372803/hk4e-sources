// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/entity/entity_sight_group.cpp

// Line 22: range 00000000166175C2-0000000016617717
void __cdecl EntitySightGroup::EntitySightGroup(EntitySightGroup *const this)
{
  std::atomic<unsigned int> *v1; // rdx
  uint32_t v2; // ecx

  std::enable_shared_from_this<EntitySightGroup>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_vision_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_vision_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_vision_type_);
  }
  this->group_vision_type_ = 0;
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::unordered_map(&this->entity_map_);
  std::map<unsigned int,std::weak_ptr<Player>>::map(&this->viewing_player_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->authority_peer_id_);
  }
  this->authority_peer_id_ = 0;
  v1 = &EntitySightGroup::next_id_;
  if ( *(_BYTE *)(((unsigned __int64)&EntitySightGroup::next_id_ >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)&EntitySightGroup::next_id_ & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&EntitySightGroup::next_id_ >> 3)
                                                                                  + 0x7FFF8000) )
  {
    __asan_report_store4(&EntitySightGroup::next_id_);
  }
  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)v1, 1u);
  if ( *(_BYTE *)(((unsigned __int64)&this->self_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->self_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->self_id_);
  }
  this->self_id_ = v2;
};

// Line 28: range 0000000016617718-00000000166179FF
std::vector<std::shared_ptr<Entity>> *__cdecl EntitySightGroup::validateAndGetEntitiesInSightGroup(
        std::vector<std::shared_ptr<Entity>> *retstr,
        EntitySightGroup *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::size_type v5; // rdx
  std::vector<std::shared_ptr<Entity>>::value_type *v6; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false>::pointer v7; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 7 iter:31 64 16 13 entity_ptr:33";
  *(_QWORD *)(v2 + 16) = EntitySightGroup::validateAndGetEntitiesInSightGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::vector<std::shared_ptr<Entity>>::vector(retstr);
  v5 = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::size(&this->entity_map_);
  std::vector<std::shared_ptr<Entity>>::reserve(retstr, v5);
  *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::begin(&this->entity_map_);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(&this->entity_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> *)(v2 + 32),
            &__y) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v2 + 32));
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v2 + 64));
    if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 64), 0LL) )
    {
      v6 = std::move<std::shared_ptr<Entity> &>((std::shared_ptr<Entity> *)(v2 + 64));
      std::vector<std::shared_ptr<Entity>>::push_back(retstr, v6);
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/entity/entity_sight_group.cpp",
        "validateAndGetEntitiesInSightGroup",
        41);
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(&v10, "entity_id:%u weak_ptr expired", v7->first);
      common::milog::MiLogStream::~MiLogStream(&v10);
      *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::erase(
                                                                                         &this->entity_map_,
                                                                                         *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32));
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 64));
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 50: range 0000000016617A00-0000000016617E60
void __cdecl EntitySightGroup::addEntityInSightGroup(EntitySightGroup *const this, const EntityPtr *entity_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int *v6; // rcx
  const std::shared_ptr<Entity> *v7; // r8
  Entity *v8; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, std::vector<std::shared_ptr<Player>> *, _QWORD); // r15
  Entity *v12; // rax
  EntityViewMgr *ViewMgr; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned int val; // [rsp+20h] [rbp-C0h] BYREF
  unsigned int EntityId; // [rsp+24h] [rbp-BCh] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<std::shared_ptr<Player>> v23; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-90h] BYREF
  char v25[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 creature_ptr:58";
  *(_QWORD *)(v2 + 16) = EntitySightGroup::addEntityInSightGroup;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Entity>(entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/entity/entity_sight_group.cpp",
      "addEntityInSightGroup",
      53);
    common::milog::MiLogStream::operator()(&v24, "entity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    v5 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    EntityId = Entity::getEntityId(v5);
    std::unordered_map<unsigned int,std::weak_ptr<Entity>>::emplace<unsigned int,std::shared_ptr<Entity> const&>(
      &this->entity_map_,
      &EntityId,
      entity_ptr,
      v6,
      v7);
    v8 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    std::enable_shared_from_this<EntitySightGroup>::shared_from_this((std::enable_shared_from_this<EntitySightGroup> *const)(v2 + 32));
    Entity::setSightGroup(v8, (const EntitySightGroupPtr *)(v2 + 32));
    std::shared_ptr<EntitySightGroup>::~shared_ptr((std::shared_ptr<EntitySightGroup> *const)(v2 + 32));
    std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    toPtr<Creature,Entity>((Entity *)(v2 + 32));
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
    {
      v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = *(_QWORD *)v9->baseclass_0 + 344LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(void (__fastcall **)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, std::vector<std::shared_ptr<Player>> *, _QWORD))v10;
      v12 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ViewMgr = Entity::getViewMgr(v12);
      EntityViewMgr::validateAndGetViewingPlayers(&v23, ViewMgr);
      if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v11(v9, this->authority_peer_id_, &v23, 0LL);
      std::vector<std::shared_ptr<Player>>::~vector(&v23);
    }
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/entity/entity_sight_group.cpp",
      "addEntityInSightGroup",
      64);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v24, (const char (*)[13])"sight_group:");
    val = EntitySightGroup::getSelfId(this);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v15, (const char (*)[19])" entity_map_ size:");
    v22 = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::size(&this->entity_map_);
    v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, &v22);
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" add entity:");
    v19 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    EntityId = Entity::getEntityId(v19);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &EntityId);
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 69: range 0000000016617E62-000000001661805F
void __cdecl EntitySightGroup::delEntityInSightGroup(EntitySightGroup *const this, const EntityPtr *entity_ptr)
{
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  Entity *v3; // rbx
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int val; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::key_type __x; // [rsp+14h] [rbp-4Ch] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-48h] BYREF
  std::shared_ptr<EntitySightGroup> sight_group_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<Entity>(entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/entity/entity_sight_group.cpp",
      "delEntityInSightGroup",
      72);
    common::milog::MiLogStream::operator()(&v14, "entity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v2 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    __x = Entity::getEntityId(v2);
    std::unordered_map<unsigned int,std::weak_ptr<Entity>>::erase(&this->entity_map_, &__x);
    v3 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    std::shared_ptr<EntitySightGroup>::shared_ptr(&sight_group_ptr, 0LL);
    Entity::setSightGroup(v3, &sight_group_ptr);
    std::shared_ptr<EntitySightGroup>::~shared_ptr(&sight_group_ptr);
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/entity/entity_sight_group.cpp",
      "delEntityInSightGroup",
      78);
    v4 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v14, (const char (*)[13])"sight_group:");
    val = EntitySightGroup::getSelfId(this);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])" entity_map_ size:");
    v12 = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::size(&this->entity_map_);
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &v12);
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" del entity:");
    v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    __x = Entity::getEntityId(v9);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
};

// Line 83: range 0000000016618060-0000000016618347
std::vector<std::shared_ptr<Player>> *__cdecl EntitySightGroup::validateAndGetViewingPlayers(
        std::vector<std::shared_ptr<Player>> *retstr,
        EntitySightGroup *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::weak_ptr<Player>>::size_type v5; // rdx
  std::vector<std::shared_ptr<Player>>::value_type *v6; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player> > >::pointer v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player> > >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 7 iter:86 64 16 13 player_ptr:88";
  *(_QWORD *)(v2 + 16) = EntitySightGroup::validateAndGetViewingPlayers;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::vector<std::shared_ptr<Player>>::vector(retstr);
  v5 = std::map<unsigned int,std::weak_ptr<Player>>::size(&this->viewing_player_map_);
  std::vector<std::shared_ptr<Player>>::reserve(retstr, v5);
  *(std::map<unsigned int,std::weak_ptr<Player>>::iterator *)(v2 + 32) = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->viewing_player_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->viewing_player_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player> > >::_Self *)(v2 + 32),
            &__y) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player> > > *const)(v2 + 32));
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 64));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
    {
      v6 = std::move<std::shared_ptr<Player> &>((std::shared_ptr<Player> *)(v2 + 64));
      std::vector<std::shared_ptr<Player>>::push_back(retstr, v6);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player> > > *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_sight_group.cpp",
        "validateAndGetViewingPlayers",
        96);
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player> > > *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(&v10, "player_uid:%u weak_ptr expired", v7->first);
      common::milog::MiLogStream::~MiLogStream(&v10);
      *(std::map<unsigned int,std::weak_ptr<Player>>::iterator *)(v2 + 32) = std::map<unsigned int,std::weak_ptr<Player>>::erase[abi:cxx11](
                                                                               &this->viewing_player_map_,
                                                                               *(std::map<unsigned int,std::weak_ptr<Player>>::iterator *)(v2 + 32));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 105: range 0000000016618348-0000000016618509
void __cdecl EntitySightGroup::onPlayerDoView(EntitySightGroup *const this, const PlayerPtr *player_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned int *v3; // rcx
  const std::shared_ptr<Player> *v4; // r8
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned int val; // [rsp+10h] [rbp-40h] BYREF
  unsigned int Uid; // [rsp+14h] [rbp-3Ch] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Player>(player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/entity/entity_sight_group.cpp",
      "onPlayerDoView",
      108);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v14, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v2 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    Uid = Player::getUid(v2);
    std::map<unsigned int,std::weak_ptr<Player>>::emplace<unsigned int,std::shared_ptr<Player> const&>(
      &this->viewing_player_map_,
      &Uid,
      player_ptr,
      v3,
      v4);
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/entity/entity_sight_group.cpp",
      "onPlayerDoView",
      114);
    v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v14, (const char (*)[13])"sight_group:");
    val = EntitySightGroup::getSelfId(this);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           v6,
           (const char (*)[27])" viewing_player_map_ size:");
    v13 = std::map<unsigned int,std::weak_ptr<Player>>::size(&this->viewing_player_map_);
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &v13);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" add uid:");
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    Uid = Player::getUid(v10);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
};

// Line 119: range 000000001661850A-00000000166186C7
void __cdecl EntitySightGroup::onPlayerUndoView(EntitySightGroup *const this, const PlayerPtr *player_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int val; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::key_type __x; // [rsp+14h] [rbp-3Ch] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Player>(player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/entity/entity_sight_group.cpp",
      "onPlayerUndoView",
      122);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v12, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v2 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    __x = Player::getUid(v2);
    std::map<unsigned int,std::weak_ptr<Player>>::erase(&this->viewing_player_map_, &__x);
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/entity/entity_sight_group.cpp",
      "onPlayerUndoView",
      128);
    v3 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v12, (const char (*)[13])"sight_group:");
    val = EntitySightGroup::getSelfId(this);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           v4,
           (const char (*)[27])" viewing_player_map_ size:");
    v11 = std::map<unsigned int,std::weak_ptr<Player>>::size(&this->viewing_player_map_);
    v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &v11);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" del uid:");
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    __x = Player::getUid(v8);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &__x);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
};

// Line 133: range 00000000166186C8-0000000016618814
void __cdecl EntitySightGroup::onEnterPlayerView(EntitySightGroup *const this, Player *player)
{
  PlayerGmComp *GmComp; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t PeerId; // esi
  PlayerPtr player_ptr; // [rsp+10h] [rbp-40h] BYREF
  std::vector<std::shared_ptr<Player>> notify_player_vec; // [rsp+20h] [rbp-30h] BYREF

  toThisPtr<Player>((Player *)&player_ptr);
  EntitySightGroup::onPlayerDoView(this, &player_ptr);
  std::shared_ptr<Player>::~shared_ptr(&player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->authority_peer_id_ || (GmComp = Player::getGmComp(player), PlayerGmComp::getIsForceAuthority(GmComp)) )
  {
    memset(&notify_player_vec, 0, sizeof(notify_player_vec));
    std::vector<std::shared_ptr<Player>>::vector(&notify_player_vec);
    SceneComp = Player::getSceneComp(player);
    PeerId = PlayerSceneComp::getPeerId(SceneComp);
    EntitySightGroup::onAuthorityChangedToPeerID(this, PeerId, &notify_player_vec, 0);
    std::vector<std::shared_ptr<Player>>::~vector(&notify_player_vec);
  }
};

// Line 144: range 0000000016618816-0000000016618929
void __cdecl EntitySightGroup::onExitPlayerView(EntitySightGroup *const this, Player *player)
{
  uint32_t authority_peer_id; // ebx
  PlayerSceneComp *SceneComp; // rax
  PlayerPtr player_ptr; // [rsp+10h] [rbp-20h] BYREF

  toThisPtr<Player>((Player *)&player_ptr);
  EntitySightGroup::onPlayerUndoView(this, &player_ptr);
  std::shared_ptr<Player>::~shared_ptr(&player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  authority_peer_id = this->authority_peer_id_;
  SceneComp = Player::getSceneComp(player);
  if ( authority_peer_id == PlayerSceneComp::getPeerId(SceneComp) )
  {
    std::shared_ptr<Player>::shared_ptr(&player_ptr, 0LL);
    EntitySightGroup::refreshAuthority(this, &player_ptr, 0);
    std::shared_ptr<Player>::~shared_ptr(&player_ptr);
  }
};

// Line 154: range 00000000166189F4-0000000016618DDF
int32_t __cdecl EntitySightGroup::refreshAuthority(
        EntitySightGroup *const this,
        PlayerPtr *p_authority_player_ptr,
        bool delay_sync)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::shared_ptr<Player> *M_current; // r14
  std::vector<std::shared_ptr<Player>>::iterator v10; // rax
  EntitySightGroup::refreshAuthority::<lambda(PlayerPtr, PlayerPtr)> v11; // dl
  const std::shared_ptr<Player> *v12; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-144h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+40h] [rbp-130h]
  PlayerPtr *player_ptr; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Player> v20; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-110h] BYREF
  char v22[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 13 sort_func:172 64 24 14 player_vec:159 128 24 24 candidate_player_vec:163";
  *(_QWORD *)(v3 + 16) = EntitySightGroup::refreshAuthority;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    0x19u,
    "./src/entity/entity_sight_group.cpp",
    "refreshAuthority",
    156);
  v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v21, (const char (*)[13])"sight_group:");
  val = EntitySightGroup::getSelfId(this);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])" refreshAuthority");
  common::milog::MiLogStream::~MiLogStream(&v21);
  EntitySightGroup::validateAndGetViewingPlayers((std::vector<std::shared_ptr<Player>> *)(v3 + 64), this);
  if ( std::operator==<Player>(p_authority_player_ptr, 0LL) )
  {
    std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 128));
    __for_range = (std::vector<std::shared_ptr<Player>> *)(v3 + 64);
    __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 64))._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Player>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
              &__for_begin,
              &__for_end) )
    {
      player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
      if ( Player::isConnected(v8) )
        std::vector<std::shared_ptr<Player>>::emplace_back<std::shared_ptr<Player>&>(
          (std::vector<std::shared_ptr<Player>> *const)(v3 + 128),
          player_ptr,
          player_ptr);
      __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
    }
    M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v3 + 128))._M_current;
    v10._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 128))._M_current;
    std::sort<__gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>,EntitySightGroup::refreshAuthority(std::shared_ptr<Player>,bool)::{lambda(std::shared_ptr<Player>,std::shared_ptr<Player>)#1}>(
      v10,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> >)M_current,
      v11);
    if ( !std::vector<std::shared_ptr<Player>>::empty((const std::vector<std::shared_ptr<Player>> *const)(v3 + 128)) )
    {
      v12 = std::vector<std::shared_ptr<Player>>::operator[](
              (std::vector<std::shared_ptr<Player>> *const)(v3 + 128),
              0LL);
      std::shared_ptr<Player>::operator=(p_authority_player_ptr, v12);
    }
    std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 128));
  }
  std::shared_ptr<Player>::shared_ptr(&v20, p_authority_player_ptr);
  EntitySightGroup::onAuthorityChangedToPlayer(
    this,
    &v20,
    (const std::vector<std::shared_ptr<Player>> *)(v3 + 64),
    delay_sync);
  std::shared_ptr<Player>::~shared_ptr(&v20);
  std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 64));
  result = 0;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 172: range 000000001661892A-00000000166189F3
bool __cdecl EntitySightGroup::refreshAuthority(std::shared_ptr<Player>,bool)::{lambda(std::shared_ptr<Player>,std::shared_ptr<Player>)#1}::operator()(
        const EntitySightGroup::refreshAuthority::<lambda(PlayerPtr, PlayerPtr)> *const __closure,
        PlayerPtr *p_a_ptr,
        PlayerPtr *p_b_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t Rtt; // ebx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax

  if ( std::operator==<Player>(p_a_ptr, 0LL) )
    return 0;
  if ( std::operator==<Player>(p_b_ptr, 0LL) )
    return 1;
  v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_a_ptr);
  if ( !Player::getIsValidForAuthority(v4) )
    return 0;
  v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_b_ptr);
  if ( !Player::getIsValidForAuthority(v5) )
    return 1;
  v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_a_ptr);
  Rtt = Player::getRtt(v6);
  v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_b_ptr);
  return Rtt < Player::getRtt(v8);
};

// Line 203: range 0000000016618DE0-0000000016618E4D
void __cdecl EntitySightGroup::onAuthorityChangedToPlayer(
        EntitySightGroup *const this,
        PlayerPtr *p_authority_player_ptr,
        const std::vector<std::shared_ptr<Player>> *notify_player_vec,
        bool delay_sync)
{
  Player *v4; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t PeerId; // eax

  if ( std::operator!=<Player>(p_authority_player_ptr, 0LL) )
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_authority_player_ptr);
    SceneComp = Player::getSceneComp(v4);
    PeerId = PlayerSceneComp::getPeerId(SceneComp);
  }
  else
  {
    PeerId = 0;
  }
  EntitySightGroup::onAuthorityChangedToPeerID(this, PeerId, notify_player_vec, delay_sync);
};

// Line 209: range 0000000016618E4E-000000001661938D
void __fastcall EntitySightGroup::onAuthorityChangedToPeerID(
        EntitySightGroup *const this,
        uint32_t new_peer_id,
        const std::vector<std::shared_ptr<Player>> *notify_player_vec,
        bool delay_sync)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false>::pointer v15; // rax
  GameserverService *v16; // rax
  GameThreadLocal *GameThreadLocal; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> __y; // [rsp+28h] [rbp-E8h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-E0h] BYREF
  char v22[192]; // [rsp+50h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 15 new_peer_id:208 64 8 8 iter:222 96 16 14 entity_ptr:224 128 16 16 creature_ptr:227";
  *(_QWORD *)(v4 + 16) = EntitySightGroup::onAuthorityChangedToPeerID;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 48) = new_peer_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->authority_peer_id_ != *(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/entity/entity_sight_group.cpp",
      "onAuthorityChangedToPeerID",
      217);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v21, (const char (*)[19])"authority_peer_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->authority_peer_id_);
    v9 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v8, (const char (*)[3])"->");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
    EntitySightGroup::setAuthorityPeerId(this, *(_DWORD *)(v4 + 48));
    *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::begin(&this->entity_map_);
    while ( 1 )
    {
      __y._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(&this->entity_map_)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> *)(v4 + 64),
              &__y) )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v4 + 64));
      std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v4 + 96));
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v4 + 96), 0LL) )
      {
        std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        toPtr<Creature,Entity>((Entity *)(v4 + 128));
        if ( !std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v4 + 128), 0LL) )
          goto LABEL_17;
        v10 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = *(_QWORD *)v10 + 216LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v11)(v10) )
          v12 = 1;
        else
LABEL_17:
          v12 = 0;
        if ( v12 )
        {
          v13 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          v14 = *(_QWORD *)v13 + 344LL;
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, _QWORD, const std::vector<std::shared_ptr<Player>> *, __int64))v14)(
            v13,
            *(unsigned int *)(v4 + 48),
            notify_player_vec,
            1LL);
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v4 + 64));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/entity/entity_sight_group.cpp",
          "onAuthorityChangedToPeerID",
          236);
        v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::milog::MiLogStream::operator()(&v21, "entity_id:%u weak_ptr expired", v15->first);
        common::milog::MiLogStream::~MiLogStream(&v21);
        *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::erase(
                                                                                           &this->entity_map_,
                                                                                           *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v4 + 64));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 96));
    }
    if ( !delay_sync )
    {
      v16 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = GameserverService::getGameThreadLocal(v16);
      PlayerSendPacketController::forceFlushAll(&GameThreadLocal->player_send_packet_controller);
    }
  }
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

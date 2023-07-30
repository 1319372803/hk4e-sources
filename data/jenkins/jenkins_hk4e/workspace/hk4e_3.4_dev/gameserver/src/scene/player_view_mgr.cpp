// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/player_view_mgr.cpp

// Line 25: range 0000000015C3E402-0000000015C3E59B
uint32_t __cdecl PlayerEyePoint::getRegionEntityId(const PlayerEyePoint *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 region_ptr:26";
  *(_QWORD *)(v1 + 16) = PlayerEyePoint::getRegionEntityId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerEyePoint::getRegion((const PlayerEyePoint *const)(v1 + 32));
  if ( std::operator==<Region>((const std::shared_ptr<Region> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_view_mgr.cpp",
      "getRegionEntityId",
      29);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v7, (const char (*)[19])"region_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    EntityId = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    EntityId = Entity::getEntityId(v5);
  }
  std::shared_ptr<Region>::~shared_ptr((std::shared_ptr<Region> *const)(v1 + 32));
  result = EntityId;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 38: range 0000000015C3E59C-0000000015C3EFAA
void __cdecl PlayerChangeEyePropGuard::PlayerChangeEyePropGuard(
        PlayerChangeEyePropGuard *const this,
        PlayerViewMgrPtr *p_player_view_mgr_ptr,
        bool is_work)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerViewMgr *v7; // rax
  unsigned __int64 v8; // rax
  std::shared_ptr<Entity> *v9; // rax
  unsigned int *v10; // rcx
  std::shared_ptr<Entity> *v11; // r8
  unsigned int v12; // r14d
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t PlayerUid; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Scene *v21; // r14
  Player *v22; // rax
  unsigned __int64 v23; // rax
  std::shared_ptr<EntitySightGroup> *v24; // rax
  unsigned int *v25; // rcx
  std::shared_ptr<EntitySightGroup> *v26; // r8
  unsigned int v27; // r14d
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t v29; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self __y; // [rsp+28h] [rbp-148h] BYREF
  std::map<unsigned int,std::weak_ptr<Entity>> *view_entity_map; // [rsp+30h] [rbp-140h]
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>> *view_sight_group_map; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-130h] BYREF
  char v35[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 18 sight_group_id:101 64 8 7 iter:99 96 16 13 player_ptr:80 128 16 19 sight_group_ptr:102"
                        " 160 24 24 expired_entity_id_vec:58";
  *(_QWORD *)(v3 + 16) = PlayerChangeEyePropGuard::PlayerChangeEyePropGuard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, p_player_view_mgr_ptr, this);
  this->is_work_ = is_work;
  std::map<unsigned int,std::weak_ptr<Entity>>::map(&this->old_view_entity_map_);
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::map(&this->old_view_sight_group_map_);
  std::weak_ptr<PlayerViewMgr>::weak_ptr(&this->player_view_mgr_wtr_);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  if ( this->is_work_ )
  {
    if ( std::operator==<PlayerViewMgr>(p_player_view_mgr_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_view_mgr.cpp",
        "PlayerChangeEyePropGuard",
        47);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v34,
        (const char (*)[28])"player_view_mgr_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      v6 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr);
      if ( PlayerViewMgr::getChangeEyePropGuardState(v6) == PLAYER_CHANGE_EYE_PROP_GUARD_STATE_NONE )
      {
        std::weak_ptr<PlayerViewMgr>::operator=<PlayerViewMgr>(&this->player_view_mgr_wtr_, p_player_view_mgr_ptr);
        v7 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr);
        PlayerViewMgr::setChangeEyePropGuardState(v7, PLAYER_CHANGE_EYE_PROP_GUARD_STATE_GUARDING);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160));
        view_entity_map = &std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr)->view_entity_map_;
        *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v3 + 64) = std::map<unsigned int,std::weak_ptr<Entity>>::begin(view_entity_map);
        while ( 1 )
        {
          __y._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::end(view_entity_map)._M_node;
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self *)(v3 + 64),
                  &__y) )
            break;
          v8 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v3 + 64));
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) <= 3 )
            v8 = __asan_report_load4(v8);
          *(_DWORD *)(v3 + 48) = *(_DWORD *)v8;
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v3 + 64));
          std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 128));
          if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v3 + 128), 0LL) )
          {
            v9 = std::move<std::shared_ptr<Entity> &>((std::shared_ptr<Entity> *)(v3 + 128));
            std::map<unsigned int,std::weak_ptr<Entity>>::emplace<unsigned int &,std::shared_ptr<Entity>>(
              &this->old_view_entity_map_,
              (unsigned int *)(v3 + 48),
              v9,
              v10,
              v11);
            std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v3 + 64));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/player_view_mgr.cpp",
              "PlayerChangeEyePropGuard",
              71);
            v12 = *(_DWORD *)(v3 + 48);
            v13 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr);
            PlayerUid = PlayerViewMgr::getPlayerUid(v13);
            common::milog::MiLogStream::operator()(&v34, "uid:%u entity_id:%u weak_ptr expired", PlayerUid, v12);
            common::milog::MiLogStream::~MiLogStream(&v34);
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v3 + 160),
              (const std::vector<unsigned int>::value_type *)(v3 + 48));
            *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v3 + 64) = std::map<unsigned int,std::weak_ptr<Entity>>::erase[abi:cxx11](
                                                                                     view_entity_map,
                                                                                     *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v3 + 64));
          }
          std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 128));
        }
        if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 160)) )
        {
          std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr);
          PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v3 + 96));
          if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/player_view_mgr.cpp",
              "PlayerChangeEyePropGuard",
              83);
            v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v34,
                    (const char (*)[19])"player_ptr is null");
            v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
            v17 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr);
            *(_DWORD *)(v3 + 48) = PlayerViewMgr::getPlayerUid(v17);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v34);
          }
          else
          {
            std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr);
            PlayerViewMgr::getScene((const PlayerViewMgr *const)(v3 + 128));
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v34,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/player_view_mgr.cpp",
                "PlayerChangeEyePropGuard",
                90);
              v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      &v34,
                      (const char (*)[18])"scene_ptr is null");
              v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
              v20 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr);
              *(_DWORD *)(v3 + 48) = PlayerViewMgr::getPlayerUid(v20);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v34);
            }
            else
            {
              v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              Scene::sendNotifyEntityDisappear(
                v21,
                v22,
                (const std::vector<unsigned int> *)(v3 + 160),
                &VisionContext::miss_context);
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
        }
        view_sight_group_map = &std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr)->view_sight_group_map_;
        *(std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::iterator *)(v3 + 64) = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::begin(view_sight_group_map);
        while ( 1 )
        {
          __y._M_node = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::end(view_sight_group_map)._M_node;
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::_Self *)(v3 + 64),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::_Self *)&__y) )
            break;
          v23 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > > *const)(v3 + 64));
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v23 >> 3) + 0x7FFF8000) <= 3 )
            v23 = __asan_report_load4(v23);
          *(_DWORD *)(v3 + 48) = *(_DWORD *)v23;
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > > *const)(v3 + 64));
          std::weak_ptr<EntitySightGroup>::lock((const std::weak_ptr<EntitySightGroup> *const)(v3 + 128));
          if ( std::operator!=<EntitySightGroup>((const std::shared_ptr<EntitySightGroup> *)(v3 + 128), 0LL) )
          {
            v24 = std::move<std::shared_ptr<EntitySightGroup> &>((std::shared_ptr<EntitySightGroup> *)(v3 + 128));
            std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::emplace<unsigned int &,std::shared_ptr<EntitySightGroup>>(
              &this->old_view_sight_group_map_,
              (unsigned int *)(v3 + 48),
              v24,
              v25,
              v26);
            std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > > *const)(v3 + 64));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/player_view_mgr.cpp",
              "PlayerChangeEyePropGuard",
              110);
            v27 = *(_DWORD *)(v3 + 48);
            v28 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_view_mgr_ptr);
            v29 = PlayerViewMgr::getPlayerUid(v28);
            common::milog::MiLogStream::operator()(&v34, "uid:%u sight_group_id:%u weak_ptr expired", v29, v27);
            common::milog::MiLogStream::~MiLogStream(&v34);
            *(std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::iterator *)(v3 + 64) = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::erase[abi:cxx11](
                                                                                               view_sight_group_map,
                                                                                               *(std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::iterator *)(v3 + 64));
          }
          std::shared_ptr<EntitySightGroup>::~shared_ptr((std::shared_ptr<EntitySightGroup> *const)(v3 + 128));
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
      }
    }
  }
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 116: range 0000000015C3EFAC-0000000015C40158
void __cdecl PlayerChangeEyePropGuard::~PlayerChangeEyePropGuard(PlayerChangeEyePropGuard *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  PlayerViewMgr *v17; // rax
  unsigned __int64 v18; // rax
  std::vector<std::shared_ptr<Entity>>::value_type *v19; // rax
  unsigned int v20; // r14d
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t PlayerUid; // eax
  Scene *v23; // r14
  Player *v24; // rax
  std::vector<std::shared_ptr<Entity>>::value_type *v25; // rax
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<Entity> > >::type v26; // r14d
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t v28; // eax
  unsigned __int64 v29; // rax
  std::remove_reference<std::shared_ptr<EntitySightGroup>&>::type *v30; // rax
  unsigned int v31; // r14d
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t v33; // eax
  std::remove_reference<std::shared_ptr<EntitySightGroup>&>::type *v34; // rax
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::type v35; // r14d
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t v37; // eax
  std::vector<std::shared_ptr<EntitySightGroup>>::size_type v38; // r14
  std::vector<std::shared_ptr<Entity>>::size_type v39; // r15
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t v41; // eax
  EntitySightGroup *v42; // r14
  Player *v43; // rax
  EntitySightGroup *v44; // r14
  Player *v45; // rax
  Scene *v46; // r14
  Player *v47; // rax
  Scene *v48; // r14
  Player *v49; // rax
  PlayerViewMgr *v50; // rax
  std::vector<std::shared_ptr<Entity>>::size_type v51; // [rsp+8h] [rbp-308h]
  std::vector<std::shared_ptr<EntitySightGroup>>::size_type v52; // [rsp+10h] [rbp-300h]
  PlayerChangeEyePropGuardState val; // [rsp+24h] [rbp-2ECh] BYREF
  std::map<unsigned int,std::weak_ptr<Entity>>::iterator __for_end; // [rsp+28h] [rbp-2E8h] BYREF
  std::map<unsigned int,std::weak_ptr<Entity>> *cur_view_entity_map; // [rsp+30h] [rbp-2E0h]
  std::map<unsigned int,std::weak_ptr<Entity>> *__for_range; // [rsp+38h] [rbp-2D8h]
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>> *cur_view_sight_group_map; // [rsp+40h] [rbp-2D0h]
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>> *__for_range_0; // [rsp+48h] [rbp-2C8h]
  std::vector<std::shared_ptr<EntitySightGroup>> *__for_range_1; // [rsp+50h] [rbp-2C0h]
  std::vector<std::shared_ptr<EntitySightGroup>> *__for_range_2; // [rsp+58h] [rbp-2B8h]
  std::shared_ptr<EntitySightGroup> *sight_group_ptr_0; // [rsp+60h] [rbp-2B0h]
  std::shared_ptr<EntitySightGroup> *sight_group_ptr; // [rsp+68h] [rbp-2A8h]
  std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > *v63; // [rsp+70h] [rbp-2A0h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::type *sight_group_id; // [rsp+78h] [rbp-298h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::type *sight_group_wtr; // [rsp+80h] [rbp-290h]
  std::pair<unsigned int const,std::weak_ptr<Entity> > *__in; // [rsp+88h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_id; // [rsp+90h] [rbp-280h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_wtr; // [rsp+98h] [rbp-278h]
  common::milog::MiLogStream v69; // [rsp+A0h] [rbp-270h] BYREF
  char v70[592]; // [rsp+C0h] [rbp-250h] BYREF

  v1 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(544LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 48 4 18 sight_group_id:190 64 8 8 iter:151 96 16 23 player_view_mgr_ptr:122 128 16 13 scene_p"
                        "tr:132 160 16 14 player_ptr:138 192 16 19 sight_group_ptr:208 224 24 21 appear_entity_vec:147 28"
                        "8 24 24 disappear_entity_vec:148 352 24 25 expired_entity_id_vec:149 416 24 26 appear_sight_grou"
                        "p_vec:185 480 24 29 disappear_sight_group_vec:186";
  *(_QWORD *)(v1 + 16) = PlayerChangeEyePropGuard::~PlayerChangeEyePropGuard;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -219021312;
  v3[536862727] = -234881024;
  v3[536862728] = -218959118;
  v3[536862729] = -234881024;
  v3[536862730] = -218959118;
  v3[536862731] = -234881024;
  v3[536862732] = -218959118;
  v3[536862733] = -234881024;
  v3[536862734] = -218959118;
  v3[536862735] = -218103808;
  v3[536862736] = -202116109;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  if ( this->is_work_ )
  {
    std::weak_ptr<PlayerViewMgr>::lock((const std::weak_ptr<PlayerViewMgr> *const)(v1 + 96));
    if ( !std::operator==<PlayerViewMgr>(0LL, (const std::shared_ptr<PlayerViewMgr> *)(v1 + 96)) )
    {
      v4 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( PlayerViewMgr::getChangeEyePropGuardState(v4) == PLAYER_CHANGE_EYE_PROP_GUARD_STATE_GUARDING )
      {
        std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        PlayerViewMgr::getScene((const PlayerViewMgr *const)(v1 + 128));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v69,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/player_view_mgr.cpp",
            "~PlayerChangeEyePropGuard",
            135);
          v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v69,
                  (const char (*)[18])"scene_ptr is null");
          v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
          v13 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          *(_DWORD *)(v1 + 48) = PlayerViewMgr::getPlayerUid(v13);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v69);
        }
        else
        {
          std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v1 + 160));
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v69,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/player_view_mgr.cpp",
              "~PlayerChangeEyePropGuard",
              141);
            v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v69,
                    (const char (*)[19])"player_ptr is null");
            v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
            v16 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            *(_DWORD *)(v1 + 48) = PlayerViewMgr::getPlayerUid(v16);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v69);
          }
          else
          {
            v17 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            PlayerViewMgr::setChangeEyePropGuardState(v17, PLAYER_CHANGE_EYE_PROP_GUARD_STATE_FINISH);
            std::vector<std::shared_ptr<Entity>>::vector((std::vector<std::shared_ptr<Entity>> *const)(v1 + 224));
            std::vector<std::shared_ptr<Entity>>::vector((std::vector<std::shared_ptr<Entity>> *const)(v1 + 288));
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 352));
            cur_view_entity_map = &std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->view_entity_map_;
            *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v1 + 64) = std::map<unsigned int,std::weak_ptr<Entity>>::begin(cur_view_entity_map);
            while ( 1 )
            {
              __for_end._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::end(cur_view_entity_map)._M_node;
              if ( !std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self *)(v1 + 64),
                      &__for_end) )
                break;
              v18 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v1 + 64));
              if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v18 >> 3) + 0x7FFF8000) <= 3 )
                v18 = __asan_report_load4(v18);
              *(_DWORD *)(v1 + 48) = *(_DWORD *)v18;
              std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v1 + 64));
              std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v1 + 192));
              if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v1 + 192), 0LL) )
              {
                if ( !std::map<unsigned int,std::weak_ptr<Entity>>::erase(
                        &this->old_view_entity_map_,
                        (const std::map<unsigned int,std::weak_ptr<Entity>>::key_type *)(v1 + 48)) )
                {
                  v19 = std::move<std::shared_ptr<Entity> &>((std::shared_ptr<Entity> *)(v1 + 192));
                  std::vector<std::shared_ptr<Entity>>::push_back(
                    (std::vector<std::shared_ptr<Entity>> *const)(v1 + 224),
                    v19);
                }
                std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v1 + 64));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v69,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/player_view_mgr.cpp",
                  "~PlayerChangeEyePropGuard",
                  165);
                v20 = *(_DWORD *)(v1 + 48);
                v21 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                PlayerUid = PlayerViewMgr::getPlayerUid(v21);
                common::milog::MiLogStream::operator()(&v69, "uid:%u entity_id:%u weak_ptr expired", PlayerUid, v20);
                common::milog::MiLogStream::~MiLogStream(&v69);
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v1 + 352),
                  (const std::vector<unsigned int>::value_type *)(v1 + 48));
                *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v1 + 64) = std::map<unsigned int,std::weak_ptr<Entity>>::erase[abi:cxx11](
                                                                                         cur_view_entity_map,
                                                                                         *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v1 + 64));
              }
              std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 192));
            }
            v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
            v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            Scene::sendNotifyEntityDisappear(
              v23,
              v24,
              (const std::vector<unsigned int> *)(v1 + 352),
              &VisionContext::miss_context);
            __for_range = &this->old_view_entity_map_;
            *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v1 + 64) = std::map<unsigned int,std::weak_ptr<Entity>>::begin(&this->old_view_entity_map_);
            __for_end._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::end(__for_range)._M_node;
            while ( std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self *)(v1 + 64),
                      &__for_end) )
            {
              __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v1 + 64));
              entity_id = std::get<0ul,unsigned int const,std::weak_ptr<Entity>>(__in);
              entity_wtr = std::get<1ul,unsigned int const,std::weak_ptr<Entity>>(__in);
              std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v1 + 192));
              if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v1 + 192), 0LL) )
              {
                v25 = std::move<std::shared_ptr<Entity> &>((std::shared_ptr<Entity> *)(v1 + 192));
                std::vector<std::shared_ptr<Entity>>::push_back(
                  (std::vector<std::shared_ptr<Entity>> *const)(v1 + 288),
                  v25);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v69,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/player_view_mgr.cpp",
                  "~PlayerChangeEyePropGuard",
                  181);
                if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(entity_id);
                }
                v26 = *entity_id;
                v27 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                v28 = PlayerViewMgr::getPlayerUid(v27);
                common::milog::MiLogStream::operator()(&v69, "uid:%u entity_id:%u weak_ptr expired", v28, v26);
                common::milog::MiLogStream::~MiLogStream(&v69);
              }
              std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 192));
              std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v1 + 64));
            }
            std::vector<std::shared_ptr<EntitySightGroup>>::vector((std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 416));
            std::vector<std::shared_ptr<EntitySightGroup>>::vector((std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 480));
            cur_view_sight_group_map = &std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->view_sight_group_map_;
            *(std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::iterator *)(v1 + 64) = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::begin(cur_view_sight_group_map);
            while ( 1 )
            {
              __for_end._M_node = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::end(cur_view_sight_group_map)._M_node;
              if ( !std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::_Self *)(v1 + 64),
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::_Self *)&__for_end) )
                break;
              v29 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > > *const)(v1 + 64));
              if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v29 >> 3) + 0x7FFF8000) <= 3 )
                v29 = __asan_report_load4(v29);
              *(_DWORD *)(v1 + 48) = *(_DWORD *)v29;
              std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > > *const)(v1 + 64));
              std::weak_ptr<EntitySightGroup>::lock((const std::weak_ptr<EntitySightGroup> *const)(v1 + 192));
              if ( std::operator!=<EntitySightGroup>((const std::shared_ptr<EntitySightGroup> *)(v1 + 192), 0LL) )
              {
                if ( !std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::erase(
                        &this->old_view_sight_group_map_,
                        (const std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::key_type *)(v1 + 48)) )
                {
                  v30 = std::move<std::shared_ptr<EntitySightGroup> &>((std::shared_ptr<EntitySightGroup> *)(v1 + 192));
                  std::vector<std::shared_ptr<EntitySightGroup>>::push_back(
                    (std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 416),
                    v30);
                }
                std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > > *const)(v1 + 64));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v69,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/player_view_mgr.cpp",
                  "~PlayerChangeEyePropGuard",
                  202);
                v31 = *(_DWORD *)(v1 + 48);
                v32 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                v33 = PlayerViewMgr::getPlayerUid(v32);
                common::milog::MiLogStream::operator()(&v69, "uid:%u sight_group_id:%u weak_ptr expired", v33, v31);
                common::milog::MiLogStream::~MiLogStream(&v69);
                *(std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::iterator *)(v1 + 64) = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::erase[abi:cxx11](
                                                                                                   cur_view_sight_group_map,
                                                                                                   *(std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::iterator *)(v1 + 64));
              }
              std::shared_ptr<EntitySightGroup>::~shared_ptr((std::shared_ptr<EntitySightGroup> *const)(v1 + 192));
            }
            __for_range_0 = &this->old_view_sight_group_map_;
            *(std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::iterator *)(v1 + 64) = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::begin(&this->old_view_sight_group_map_);
            __for_end._M_node = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::end(__for_range_0)._M_node;
            while ( std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::_Self *)(v1 + 64),
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::_Self *)&__for_end) )
            {
              v63 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > > *const)(v1 + 64));
              sight_group_id = std::get<0ul,unsigned int const,std::weak_ptr<EntitySightGroup>>(v63);
              sight_group_wtr = std::get<1ul,unsigned int const,std::weak_ptr<EntitySightGroup>>(v63);
              std::weak_ptr<EntitySightGroup>::lock((const std::weak_ptr<EntitySightGroup> *const)(v1 + 192));
              if ( std::operator!=<EntitySightGroup>((const std::shared_ptr<EntitySightGroup> *)(v1 + 192), 0LL) )
              {
                v34 = std::move<std::shared_ptr<EntitySightGroup> &>((std::shared_ptr<EntitySightGroup> *)(v1 + 192));
                std::vector<std::shared_ptr<EntitySightGroup>>::push_back(
                  (std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 480),
                  v34);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v69,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/player_view_mgr.cpp",
                  "~PlayerChangeEyePropGuard",
                  215);
                if ( *(_BYTE *)(((unsigned __int64)sight_group_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)sight_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sight_group_id >> 3)
                                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load4(sight_group_id);
                }
                v35 = *sight_group_id;
                v36 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                v37 = PlayerViewMgr::getPlayerUid(v36);
                common::milog::MiLogStream::operator()(&v69, "uid:%u sight_group_id:%u weak_ptr expired", v37, v35);
                common::milog::MiLogStream::~MiLogStream(&v69);
              }
              std::shared_ptr<EntitySightGroup>::~shared_ptr((std::shared_ptr<EntitySightGroup> *const)(v1 + 192));
              std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > > *const)(v1 + 64));
            }
            common::milog::MiLogStream::create(
              &v69,
              &common::milog::MiLogDefault::default_log_obj_,
              0x19u,
              "./src/scene/player_view_mgr.cpp",
              "~PlayerChangeEyePropGuard",
              220);
            v38 = std::vector<std::shared_ptr<EntitySightGroup>>::size((const std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 416));
            v52 = std::vector<std::shared_ptr<EntitySightGroup>>::size((const std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 480));
            v51 = std::vector<std::shared_ptr<Entity>>::size((const std::vector<std::shared_ptr<Entity>> *const)(v1 + 224));
            v39 = std::vector<std::shared_ptr<Entity>>::size((const std::vector<std::shared_ptr<Entity>> *const)(v1 + 288));
            v40 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            v41 = PlayerViewMgr::getPlayerUid(v40);
            common::milog::MiLogStream::operator()(
              &v69,
              "uid:%u disappear_entity_count:%lu appear_entity_count:%lu disappear_sight_group_count:%lu appear_sight_group_count:%lu ",
              v41,
              v39,
              v51,
              v52,
              v38);
            common::milog::MiLogStream::~MiLogStream(&v69);
            __for_range_1 = (std::vector<std::shared_ptr<EntitySightGroup>> *)(v1 + 480);
            *(std::vector<std::shared_ptr<EntitySightGroup>>::iterator *)(v1 + 64) = std::vector<std::shared_ptr<EntitySightGroup>>::begin((std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 480));
            __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Base_ptr)std::vector<std::shared_ptr<EntitySightGroup>>::end(__for_range_1)._M_current;
            while ( __gnu_cxx::operator!=<std::shared_ptr<EntitySightGroup> *,std::vector<std::shared_ptr<EntitySightGroup>>>(
                      (const __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *)(v1 + 64),
                      (const __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *)&__for_end) )
            {
              sight_group_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup> *,std::vector<std::shared_ptr<EntitySightGroup>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *const)(v1 + 64));
              v42 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)sight_group_ptr);
              v43 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
              EntitySightGroup::onExitPlayerView(v42, v43);
              __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup> *,std::vector<std::shared_ptr<EntitySightGroup>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *const)(v1 + 64));
            }
            __for_range_2 = (std::vector<std::shared_ptr<EntitySightGroup>> *)(v1 + 416);
            *(std::vector<std::shared_ptr<EntitySightGroup>>::iterator *)(v1 + 64) = std::vector<std::shared_ptr<EntitySightGroup>>::begin((std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 416));
            __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Base_ptr)std::vector<std::shared_ptr<EntitySightGroup>>::end(__for_range_2)._M_current;
            while ( __gnu_cxx::operator!=<std::shared_ptr<EntitySightGroup> *,std::vector<std::shared_ptr<EntitySightGroup>>>(
                      (const __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *)(v1 + 64),
                      (const __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *)&__for_end) )
            {
              sight_group_ptr_0 = __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup> *,std::vector<std::shared_ptr<EntitySightGroup>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *const)(v1 + 64));
              v44 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)sight_group_ptr_0);
              v45 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
              EntitySightGroup::onEnterPlayerView(v44, v45);
              __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup> *,std::vector<std::shared_ptr<EntitySightGroup>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *const)(v1 + 64));
            }
            v46 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
            v47 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            Scene::notifyEntityDisappear(
              v46,
              v47,
              (const std::vector<std::shared_ptr<Entity>> *)(v1 + 288),
              &VisionContext::miss_context);
            v48 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
            v49 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            Scene::notifyEntityAppear(
              v48,
              v49,
              (const std::vector<std::shared_ptr<Entity>> *)(v1 + 224),
              &VisionContext::meet_context);
            v50 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            PlayerViewMgr::setChangeEyePropGuardState(v50, PLAYER_CHANGE_EYE_PROP_GUARD_STATE_NONE);
            std::vector<std::shared_ptr<EntitySightGroup>>::~vector((std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 480));
            std::vector<std::shared_ptr<EntitySightGroup>>::~vector((std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 416));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 352));
            std::vector<std::shared_ptr<Entity>>::~vector((std::vector<std::shared_ptr<Entity>> *const)(v1 + 288));
            std::vector<std::shared_ptr<Entity>>::~vector((std::vector<std::shared_ptr<Entity>> *const)(v1 + 224));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 160));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_view_mgr.cpp",
          "~PlayerChangeEyePropGuard",
          129);
        v5 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v69, (const char (*)[7])"state:");
        v6 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        val = PlayerViewMgr::getChangeEyePropGuardState(v6);
        v7 = common::milog::MiLogStream::operator<<<PlayerChangeEyePropGuardState,(PlayerChangeEyePropGuardState*)0>(
               v5,
               &val);
        v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" not guarding");
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
        v10 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        *(_DWORD *)(v1 + 48) = PlayerViewMgr::getPlayerUid(v10);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v69);
      }
    }
    std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)(v1 + 96));
  }
  std::weak_ptr<PlayerViewMgr>::~weak_ptr(&this->player_view_mgr_wtr_);
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::~map(&this->old_view_sight_group_map_);
  std::map<unsigned int,std::weak_ptr<Entity>>::~map(&this->old_view_entity_map_);
  if ( v70 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = 0;
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
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 240: range 0000000015C4015A-0000000015C40440
void __cdecl PlayerViewMgr::PlayerViewMgr(PlayerViewMgr *const this, Scene *scene, Player *player)
{
  std::shared_ptr<Player> *v3; // rsi
  uint32_t Uid; // edx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  std::shared_ptr<Scene> __r; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<Player> v10; // [rsp+30h] [rbp-20h] BYREF

  std::enable_shared_from_this<PlayerViewMgr>::enable_shared_from_this(this);
  toThisPtr<Scene>((Scene *)&__r);
  std::weak_ptr<Scene>::weak_ptr<Scene,void>(&this->scene_wtr_, &__r);
  std::shared_ptr<Scene>::~shared_ptr(&__r);
  toThisPtr<Player>((Player *)&v10);
  v3 = &v10;
  std::weak_ptr<Player>::weak_ptr<Player,void>(&this->player_wtr_, &v10);
  std::shared_ptr<Player>::~shared_ptr(&v10);
  Uid = Player::getUid(player);
  v5 = *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->uid_, v3, Uid);
  }
  this->uid_ = Uid;
  v6 = ((_BYTE)this + 52) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_eye_point_as_eye_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_eye_point_as_eye_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_eye_point_as_eye_, v6, v7);
  this->is_eye_point_as_eye_ = 0;
  std::shared_ptr<PlayerEyePoint>::shared_ptr(&this->eye_point_ptr_);
  std::map<unsigned int,std::weak_ptr<Entity>>::map(&this->view_entity_map_);
  std::map<unsigned int,std::weak_ptr<Entity>>::map(&this->in_sight_range_entity_map_);
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::map(&this->view_sight_group_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->change_eye_prop_guard_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_eye_prop_guard_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->change_eye_prop_guard_state_, v6, (_BYTE)this - 40);
  }
  this->change_eye_prop_guard_state_ = PLAYER_CHANGE_EYE_PROP_GUARD_STATE_NONE;
  std::set<unsigned int>::set(&this->group_vision_type_set_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->region_group_vision_type_map_);
  std::set<unsigned int>::set(&this->final_group_vision_type_set_);
  if ( *(char *)(((unsigned __int64)&this->is_region_group_vision_active_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_region_group_vision_active_, v6, &this->is_region_group_vision_active_);
  this->is_region_group_vision_active_ = 1;
  PlayerViewMgr::doResetGroupVisionTypeSet(this);
};

// Line 247: range 0000000015C40442-0000000015C406D0
void __cdecl PlayerViewMgr::resetPlayerViewMgr(PlayerViewMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  void (__fastcall **v4)(char *, unsigned __int64); // rdx
  const char *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  std::shared_ptr<PlayerEyePoint> __r; // [rsp+10h] [rbp-60h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-50h] BYREF
  char v10[48]; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator!=<PlayerEyePoint>(&this->eye_point_ptr_, 0LL) )
  {
    v1 = (unsigned __int64)std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8();
    v2 = *(_QWORD *)v1 + 128LL;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, VisionContext *))v2)(v1, &VisionContext::miss_context);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/scene/player_view_mgr.cpp",
      "resetPlayerViewMgr",
      252);
    v3 = (unsigned __int64)std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    v4 = *(void (__fastcall ***)(char *, unsigned __int64))v3;
    if ( *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
      v3 = __asan_report_load8();
    (*v4)(v10, v3);
    v5 = (const char *)std::string::c_str(v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_);
    }
    common::milog::MiLogStream::operator()(&v9, "clearEyePoint. uid:%u eye_point:%s", this->uid_, v5);
    std::string::~string(v10);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = ((_BYTE)this + 52) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_eye_point_as_eye_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_eye_point_as_eye_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->is_eye_point_as_eye_, v6, v7);
    this->is_eye_point_as_eye_ = 0;
    std::shared_ptr<PlayerEyePoint>::shared_ptr(&__r, 0LL);
    std::shared_ptr<PlayerEyePoint>::operator=(&this->eye_point_ptr_, &__r);
    std::shared_ptr<PlayerEyePoint>::~shared_ptr(&__r);
    PlayerViewMgr::notifyEyePointState(this);
  }
  PlayerViewMgr::doResetGroupVisionTypeSet(this);
  PlayerViewMgr::clearRegionGroupVisionTypeSet(this);
  PlayerViewMgr::delAllSightGroupsInView(this);
  PlayerViewMgr::disappearAllViewEntities(this);
  PlayerViewMgr::clearViewContainer(this);
};

// Line 266: range 0000000015C406D2-0000000015C40AFE
void __cdecl PlayerViewMgr::delAllSightGroupsInView(PlayerViewMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  EntitySightGroup *v4; // r14
  Player *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::iterator __for_begin; // [rsp+10h] [rbp-130h] BYREF
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::iterator __for_end; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>> *__for_range; // [rsp+20h] [rbp-120h]
  std::vector<std::shared_ptr<EntitySightGroup>> *__for_range_0; // [rsp+28h] [rbp-118h]
  std::shared_ptr<EntitySightGroup> *sight_group_ptr; // [rsp+30h] [rbp-110h]
  const std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > *v13; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::type *_; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::type *sight_group_wtr; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 player_ptr:267 64 16 19 sight_group_ptr:273 96 24 23 sight_group_ptr_vec:270";
  *(_QWORD *)(v1 + 16) = PlayerViewMgr::delAllSightGroupsInView;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v1 + 32));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    std::vector<std::shared_ptr<EntitySightGroup>>::vector((std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 96));
    __for_range = &this->view_sight_group_map_;
    __for_begin._M_node = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::begin(&this->view_sight_group_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::end(&this->view_sight_group_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,std::weak_ptr<EntitySightGroup>>(v13);
      sight_group_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<EntitySightGroup>>(v13);
      std::weak_ptr<EntitySightGroup>::lock((const std::weak_ptr<EntitySightGroup> *const)(v1 + 64));
      if ( std::operator!=<EntitySightGroup>((const std::shared_ptr<EntitySightGroup> *)(v1 + 64), 0LL) )
        std::vector<std::shared_ptr<EntitySightGroup>>::push_back(
          (std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 96),
          (const std::vector<std::shared_ptr<EntitySightGroup>>::value_type *)(v1 + 64));
      std::shared_ptr<EntitySightGroup>::~shared_ptr((std::shared_ptr<EntitySightGroup> *const)(v1 + 64));
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup>>>::operator++(&__for_begin);
    }
    __for_range_0 = (std::vector<std::shared_ptr<EntitySightGroup>> *)(v1 + 96);
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::_Base_ptr)std::vector<std::shared_ptr<EntitySightGroup>>::begin((std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 96))._M_current;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >::_Base_ptr)std::vector<std::shared_ptr<EntitySightGroup>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<EntitySightGroup> *,std::vector<std::shared_ptr<EntitySightGroup>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *)&__for_end) )
    {
      sight_group_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup> *,std::vector<std::shared_ptr<EntitySightGroup>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *const)&__for_begin);
      PlayerViewMgr::delSightGroupInView(this, sight_group_ptr);
      if ( PlayerViewMgr::getChangeEyePropGuardState(this) == PLAYER_CHANGE_EYE_PROP_GUARD_STATE_NONE )
      {
        v4 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)sight_group_ptr);
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        EntitySightGroup::onExitPlayerView(v4, v5);
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup> *,std::vector<std::shared_ptr<EntitySightGroup>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<EntitySightGroup>*,std::vector<std::shared_ptr<EntitySightGroup>> > *const)&__for_begin);
    }
    std::vector<std::shared_ptr<EntitySightGroup>>::~vector((std::vector<std::shared_ptr<EntitySightGroup>> *const)(v1 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_view_mgr.cpp",
      "delAllSightGroupsInView",
      290);
    v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v16, (const char (*)[10])"no player");
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 296: range 0000000015C40B00-0000000015C40EF9
void __cdecl PlayerViewMgr::disappearAllViewEntities(PlayerViewMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Scene *v5; // r14
  Player *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::map<unsigned int,std::weak_ptr<Entity>>::iterator __for_begin; // [rsp+10h] [rbp-140h] BYREF
  std::map<unsigned int,std::weak_ptr<Entity>>::iterator __for_end; // [rsp+18h] [rbp-138h] BYREF
  std::map<unsigned int,std::weak_ptr<Entity>> *__for_range; // [rsp+20h] [rbp-130h]
  const std::pair<unsigned int const,std::weak_ptr<Entity> > *v12; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *eid; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_wtr; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-110h] BYREF
  char v16[240]; // [rsp+60h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 14 player_ptr:297 64 16 13 scene_ptr:298 96 16 14 entity_ptr:304 128 24 24 disappear_entity_vec:301";
  *(_QWORD *)(v1 + 16) = PlayerViewMgr::disappearAllViewEntities;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v1 + 32));
  PlayerViewMgr::getScene((const PlayerViewMgr *const)(v1 + 64));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL)
    && std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v1 + 64), 0LL) )
  {
    std::vector<std::shared_ptr<Entity>>::vector((std::vector<std::shared_ptr<Entity>> *const)(v1 + 128));
    __for_range = &this->view_entity_map_;
    __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::begin(&this->view_entity_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::end(&this->view_entity_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator*(&__for_begin);
      eid = std::get<0ul,unsigned int const,std::weak_ptr<Entity>>(v12);
      entity_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<Entity>>(v12);
      std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v1 + 96));
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v1 + 96), 0LL) )
        std::vector<std::shared_ptr<Entity>>::push_back(
          (std::vector<std::shared_ptr<Entity>> *const)(v1 + 128),
          (const std::vector<std::shared_ptr<Entity>>::value_type *)(v1 + 96));
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 96));
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator++(&__for_begin);
    }
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Scene::notifyEntityDisappear(
      v5,
      v6,
      (const std::vector<std::shared_ptr<Entity>> *)(v1 + 128),
      &VisionContext::miss_context);
    std::vector<std::shared_ptr<Entity>>::~vector((std::vector<std::shared_ptr<Entity>> *const)(v1 + 128));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_view_mgr.cpp",
      "disappearAllViewEntities",
      314);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"no player or scene");
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 319: range 0000000015C40EFA-0000000015C40F3A
void __cdecl PlayerViewMgr::clearViewContainer(PlayerViewMgr *const this)
{
  std::map<unsigned int,std::weak_ptr<Entity>>::clear(&this->view_entity_map_);
  std::map<unsigned int,std::weak_ptr<Entity>>::clear(&this->in_sight_range_entity_map_);
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::clear(&this->view_sight_group_map_);
};

// Line 326: range 0000000015C40F3C-0000000015C419FB
int32_t __cdecl PlayerViewMgr::setEyePoint(
        PlayerViewMgr *const this,
        Region *region,
        Region *related_big_region,
        bool is_stream,
        int32_t fix_lod_level)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Region *v17; // r14
  Scene *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  PlayerEyePoint *v21; // rax
  PlayerEyePoint *v22; // rax
  __int64 v23; // rdx
  void (__fastcall **vptr_DescribalBase)(common::milog::MiLogStream *, Region *); // rax
  const char *v25; // r14
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  __int64 EntityId; // rcx
  Scene *v28; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  unsigned __int64 v30; // rax
  void (__fastcall *v31)(SceneBlockGroupComp *, _QWORD, double, float); // r15
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  unsigned __int64 Position; // rax
  uint32_t uid; // edi
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // r14
  unsigned __int64 v36; // rax
  void (__fastcall *v37)(std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  int32_t result; // eax
  bool is_eye_point_as_eye_closed; // [rsp+37h] [rbp-189h]
  uint32_t cur_eye_point_region_entity_id; // [rsp+38h] [rbp-188h]
  std::shared_ptr<Config> v45; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v46; // [rsp+50h] [rbp-170h] BYREF
  common::milog::MiLogStream v47; // [rsp+70h] [rbp-150h] BYREF
  char v48[304]; // [rsp+90h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 16 14 player_ptr:327 64 16 13 scene_ptr:333 96 120 32 player_change_eye_prop_guard:353";
  *(_QWORD *)(v5 + 16) = PlayerViewMgr::setEyePoint;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -219021312;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v5 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v5 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "setEyePoint",
      330);
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v47,
           (const char (*)[20])"getPlayer() failed.");
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v47);
    v10 = -1;
  }
  else
  {
    Entity::getScene((const Entity *const)(v5 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_view_mgr.cpp",
        "setEyePoint",
        336);
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v47,
              (const char (*)[19])"scene_ptr is null.");
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->uid_);
      common::milog::MiLogStream::~MiLogStream(&v47);
      v10 = -1;
    }
    else
    {
      cur_eye_point_region_entity_id = 0;
      if ( std::operator!=<PlayerEyePoint>(&this->eye_point_ptr_, 0LL)
        && (v13 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_),
            cur_eye_point_region_entity_id = PlayerEyePoint::getRegionEntityId(v13),
            cur_eye_point_region_entity_id == Entity::getEntityId(region)) )
      {
        v10 = 0;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v45);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
        is_eye_point_as_eye_closed = FeatureSwitchMgr::isEyePointAsEyeClosed(&v14->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v45);
        std::enable_shared_from_this<PlayerViewMgr>::shared_from_this((std::enable_shared_from_this<PlayerViewMgr> *const)&v45);
        PlayerChangeEyePropGuard::PlayerChangeEyePropGuard(
          (PlayerChangeEyePropGuard *const)(v5 + 96),
          (PlayerViewMgrPtr *)&v45,
          !is_eye_point_as_eye_closed);
        std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)&v45);
        if ( PlayerViewMgr::clearEyePoint(this, cur_eye_point_region_entity_id, 1) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/player_view_mgr.cpp",
            "setEyePoint",
            358);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v47,
                  (const char (*)[22])"clearEyePoint failed.");
          v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->uid_);
          common::milog::MiLogStream::~MiLogStream(&v47);
          v10 = -1;
        }
        else
        {
          v17 = (Region *)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          v18 = (Scene *)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
          EntityMgr::createPlayerEyePoint((Player *)&v45, v18, v17, region);
          std::shared_ptr<PlayerEyePoint>::operator=(&this->eye_point_ptr_, (std::shared_ptr<PlayerEyePoint> *)&v45);
          std::shared_ptr<PlayerEyePoint>::~shared_ptr((std::shared_ptr<PlayerEyePoint> *const)&v45);
          if ( std::operator==<PlayerEyePoint>(&this->eye_point_ptr_, 0LL) )
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/player_view_mgr.cpp",
              "setEyePoint",
              365);
            v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v47,
                    (const char (*)[29])"createPlayerEyePoint failed.");
            v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->uid_);
            common::milog::MiLogStream::~MiLogStream(&v47);
            v10 = -1;
          }
          else
          {
            v21 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
            PlayerEyePoint::setIsStream(v21, is_stream);
            v22 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
            PlayerEyePoint::setFixLodLevel(v22, fix_lod_level);
            v23 = (*(_BYTE *)(((unsigned __int64)&this->is_eye_point_as_eye_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_eye_point_as_eye_ >> 3) + 0x7FFF8000));
            if ( (_BYTE)v23 )
              __asan_report_store1(&this->is_eye_point_as_eye_, !is_eye_point_as_eye_closed, v23);
            this->is_eye_point_as_eye_ = !is_eye_point_as_eye_closed;
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/player_view_mgr.cpp",
              "setEyePoint",
              372);
            if ( *(_BYTE *)(((unsigned __int64)region >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            vptr_DescribalBase = (void (__fastcall **)(common::milog::MiLogStream *, Region *))region->_vptr_DescribalBase;
            if ( *(_BYTE *)(((unsigned __int64)region->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
              vptr_DescribalBase = (void (__fastcall **)(common::milog::MiLogStream *, Region *))__asan_report_load8();
            (*vptr_DescribalBase)(&v47, region);
            v25 = (const char *)std::string::c_str(&v47);
            v26 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
            EntityId = Entity::getEntityId(v26);
            if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->uid_);
            }
            common::milog::MiLogStream::operator()(
              &v46,
              "uid:%u setEyePoint. eye_point_entity_id:%u region:%s",
              this->uid_,
              EntityId,
              v25);
            std::string::~string(&v47);
            common::milog::MiLogStream::~MiLogStream(&v46);
            PlayerViewMgr::notifyEyePointState(this);
            if ( !is_eye_point_as_eye_closed )
            {
              v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
              BlockGroupComp = Scene::getBlockGroupComp(v28);
              if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v30 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 11);
              if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                v30 = __asan_report_load8();
              v31 = *(void (__fastcall **)(SceneBlockGroupComp *, _QWORD, double, float))v30;
              v32 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
              Position = (unsigned __int64)Entity::getPosition(v32);
              if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
              {
                Position = __asan_report_load4(&this->uid_);
              }
              uid = this->uid_;
              if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
                && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
                && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
              {
                uid = Position;
                Position = __asan_report_load_n(Position, 12LL);
              }
              v31(BlockGroupComp, uid, *(double *)Position, *(float *)(Position + 8));
            }
            if ( std::operator!=<PlayerEyePoint>(&this->eye_point_ptr_, 0LL) )
            {
              v35 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
              if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v36 = (unsigned __int64)(v35->_vptr_DescribalBase + 7);
              if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                v36 = __asan_report_load8();
              v37 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v36;
              v38 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
              v37(v35, v38, &VisionContext::meet_context);
            }
            v10 = 0;
          }
        }
        PlayerChangeEyePropGuard::~PlayerChangeEyePropGuard((PlayerChangeEyePropGuard *const)(v5 + 96));
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 32));
  result = v10;
  if ( v48 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 389: range 0000000015C419FC-0000000015C425FF
__int64 __fastcall PlayerViewMgr::clearEyePoint(
        PlayerViewMgr *const this,
        uint32_t target_region_entity_id,
        bool is_change_to_another_eye_point)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  void (__fastcall **v21)(common::milog::MiLogStream *, unsigned __int64); // rdx
  const char *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  _BOOL4 v27; // r14d
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  _BOOL4 v30; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int v34; // r14d
  Scene *v35; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  unsigned __int64 v37; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  unsigned __int64 Position; // rax
  uint32_t uid; // edi
  Scene *v41; // r14
  Player *v42; // rax
  __int64 result; // rax
  void (__fastcall *v44)(SceneBlockGroupComp *, _QWORD, double, float); // [rsp+8h] [rbp-1D8h]
  bool is_eye_point_as_eye_closed; // [rsp+2Bh] [rbp-1B5h]
  unsigned int val; // [rsp+2Ch] [rbp-1B4h] BYREF
  common::milog::MiLogStream v48; // [rsp+30h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v49; // [rsp+50h] [rbp-190h] BYREF
  char v50[368]; // [rsp+70h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 27 target_region_entity_id:388 64 16 14 player_ptr:424 96 16 14 avatar_ptr:431 128 16 13 "
                        "scene_ptr:442 160 120 32 player_change_eye_prop_guard:411";
  *(_QWORD *)(v4 + 16) = PlayerViewMgr::clearEyePoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 48) = target_region_entity_id;
  if ( std::operator==<PlayerEyePoint>(&this->eye_point_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/scene/player_view_mgr.cpp",
      "clearEyePoint",
      394);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v49,
           (const char (*)[24])"eye_point_ptr_ is null.");
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v49);
    v3 = 0;
  }
  else
  {
    v9 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
    if ( PlayerEyePoint::getRegionEntityId(v9) == *(_DWORD *)(v4 + 48) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 128));
      v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      is_eye_point_as_eye_closed = FeatureSwitchMgr::isEyePointAsEyeClosed(&v17->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
      std::enable_shared_from_this<PlayerViewMgr>::shared_from_this((std::enable_shared_from_this<PlayerViewMgr> *const)(v4 + 128));
      PlayerChangeEyePropGuard::PlayerChangeEyePropGuard(
        (PlayerChangeEyePropGuard *const)(v4 + 160),
        (PlayerViewMgrPtr *)(v4 + 128),
        !is_eye_point_as_eye_closed);
      std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)(v4 + 128));
      v18 = (unsigned __int64)std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      v19 = *(_QWORD *)v18 + 128LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, VisionContext *))v19)(v18, &VisionContext::miss_context);
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_view_mgr.cpp",
        "clearEyePoint",
        415);
      v20 = (unsigned __int64)std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
      if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        v20 = __asan_report_load8();
      v21 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v20;
      if ( *(_BYTE *)((*(_QWORD *)v20 >> 3) + 0x7FFF8000LL) )
        v20 = __asan_report_load8();
      (*v21)(&v49, v20);
      v22 = (const char *)std::string::c_str(&v49);
      if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->uid_);
      }
      common::milog::MiLogStream::operator()(
        &v48,
        "clearEyePoint. uid:%u eye_point:%s is_change_to_another_eye_point:%d",
        this->uid_,
        v22,
        is_change_to_another_eye_point);
      std::string::~string(&v49);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v23 = ((_BYTE)this + 52) & 7;
      v24 = (*(_BYTE *)(((unsigned __int64)&this->is_eye_point_as_eye_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->is_eye_point_as_eye_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v24 )
        __asan_report_store1(&this->is_eye_point_as_eye_, v23, v24);
      this->is_eye_point_as_eye_ = 0;
      std::shared_ptr<PlayerEyePoint>::shared_ptr((std::shared_ptr<PlayerEyePoint> *const)(v4 + 128), 0LL);
      std::shared_ptr<PlayerEyePoint>::operator=(&this->eye_point_ptr_, (std::shared_ptr<PlayerEyePoint> *)(v4 + 128));
      std::shared_ptr<PlayerEyePoint>::~shared_ptr((std::shared_ptr<PlayerEyePoint> *const)(v4 + 128));
      if ( is_change_to_another_eye_point )
        goto LABEL_42;
      PlayerViewMgr::notifyEyePointState(this);
      if ( is_eye_point_as_eye_closed )
        goto LABEL_42;
      PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v4 + 64));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_view_mgr.cpp",
          "clearEyePoint",
          427);
        v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v49,
                (const char (*)[19])"player_ptr is null");
        v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->uid_);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v3 = -1;
        v27 = 0;
      }
      else
      {
        std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Player::getCurAvatar((Player *const)(v4 + 96));
        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/player_view_mgr.cpp",
            "clearEyePoint",
            434);
          v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v49,
                  (const char (*)[19])"avatar_ptr is null");
          v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->uid_);
          common::milog::MiLogStream::~MiLogStream(&v49);
          v3 = -1;
          v30 = 0;
        }
        else
        {
          v31 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( !Entity::isOnScene((const Entity *const)v31) )
          {
            v3 = 0;
            v30 = 0;
          }
          else
          {
            std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            Entity::getScene((const Entity *const)(v4 + 128));
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/player_view_mgr.cpp",
                "clearEyePoint",
                445);
              v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      &v49,
                      (const char (*)[18])"scene_ptr is null");
              v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->uid_);
              common::milog::MiLogStream::~MiLogStream(&v49);
              v3 = -1;
              v34 = 0;
            }
            else
            {
              v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              BlockGroupComp = Scene::getBlockGroupComp(v35);
              if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v37 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 11);
              if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                v37 = __asan_report_load8();
              v44 = *(void (__fastcall **)(SceneBlockGroupComp *, _QWORD, double, float))v37;
              v38 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              Position = (unsigned __int64)Entity::getPosition((const Entity *const)v38);
              if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
              {
                Position = __asan_report_load4(&this->uid_);
              }
              uid = this->uid_;
              if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
                && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
                && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
              {
                uid = Position;
                Position = __asan_report_load_n(Position, 12LL);
              }
              v44(BlockGroupComp, uid, *(double *)Position, *(float *)(Position + 8));
              v41 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              Scene::refreshPlayerInSightRangeEntitiesAndEnter(v41, v42);
              v34 = 1;
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
            v30 = v34 == 1;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
        v27 = v30;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
      if ( v27 )
LABEL_42:
        v3 = 0;
      PlayerChangeEyePropGuard::~PlayerChangeEyePropGuard((PlayerChangeEyePropGuard *const)(v4 + 160));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        0x19u,
        "./src/scene/player_view_mgr.cpp",
        "clearEyePoint",
        403);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v49, (const char (*)[5])"uid:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->uid_);
      v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v11,
              (const char (*)[33])" cur_eye_point region_entity_id:");
      v13 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
      val = PlayerEyePoint::getRegionEntityId(v13);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])off_259AE2E0);
      v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v15,
              (const char (*)[25])"target_region_entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v49);
      v3 = 0;
    }
  }
  result = v3;
  if ( v50 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 458: range 0000000015C42600-0000000015C42686
PlayerEyePointPtr __cdecl PlayerViewMgr::getEyePointAsEye(const PlayerViewMgr *const this)
{
  __int64 v1; // rsi
  PlayerEyePointPtr result; // rax

  if ( *(_BYTE *)(((unsigned __int64)(v1 + 52) >> 3) + 0x7FFF8000) != 0
    && ((v1 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)(v1 + 52) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v1 + 52);
  }
  if ( *(_BYTE *)(v1 + 52) != 1 )
    std::shared_ptr<PlayerEyePoint>::shared_ptr((std::shared_ptr<PlayerEyePoint> *const)this, 0LL);
  else
    std::shared_ptr<PlayerEyePoint>::shared_ptr(
      (std::shared_ptr<PlayerEyePoint> *const)this,
      (const std::shared_ptr<PlayerEyePoint> *)(v1 + 56));
  result._M_ptr = (std::__shared_ptr<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 467: range 0000000015C42688-0000000015C426CF
bool __cdecl PlayerViewMgr::isHasEyePointAsEye(const PlayerViewMgr *const this)
{
  bool v1; // bl
  std::shared_ptr<PlayerEyePoint> __a; // [rsp+10h] [rbp-20h] BYREF

  PlayerViewMgr::getEyePointAsEye((const PlayerViewMgr *const)&__a);
  v1 = std::operator!=<PlayerEyePoint>(&__a, 0LL);
  std::shared_ptr<PlayerEyePoint>::~shared_ptr(&__a);
  return v1;
};

// Line 472: range 0000000015C426D0-0000000015C438E6
void __cdecl PlayerViewMgr::notifyEyePointState(PlayerViewMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  char v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r15
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool IsStream; // al
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  int32_t FixLodLevel; // eax
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const Vector3 *Position; // rax
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t ConfigId; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  std::__shared_ptr_access<SphereRegion,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  float Radius; // xmm0_4
  common::milog::MiLogStream *v25; // r14
  unsigned __int64 v26; // rax
  void (__fastcall **v27)(common::milog::MiLogStream *, unsigned __int64); // rdx
  std::__shared_ptr_access<CubicRegion,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  const Vector3 *Size; // rax
  common::milog::MiLogStream *v30; // r14
  unsigned __int64 v31; // rax
  void (__fastcall **v32)(common::milog::MiLogStream *, unsigned __int64); // rdx
  std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  float v34; // xmm0_4
  std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  float Height; // xmm0_4
  common::milog::MiLogStream *v37; // r14
  unsigned __int64 v38; // rax
  void (__fastcall **v39)(common::milog::MiLogStream *, unsigned __int64); // rdx
  std::__shared_ptr_access<PolygonRegion,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<PolygonRegion,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  float v42; // xmm0_4
  common::milog::MiLogStream *v43; // r14
  unsigned __int64 v44; // rax
  void (__fastcall **v45)(common::milog::MiLogStream *, unsigned __int64); // rdx
  common::milog::MiLogStream *v46; // r14
  unsigned __int64 v47; // rax
  void (__fastcall **v48)(common::milog::MiLogStream *, unsigned __int64); // rdx
  unsigned __int64 v49; // rax
  void (__fastcall **v50)(common::milog::MiLogStream *, unsigned __int64); // rdx
  const char *v51; // r14
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  __int64 v53; // rcx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  unsigned __int64 v57; // rax
  void (__fastcall **v58)(common::milog::MiLogStream *, unsigned __int64); // rdx
  Player *v59; // rax
  google::protobuf::uint32 region_shape; // [rsp+1Ch] [rbp-1A4h]
  std::vector<data::Point2D>::const_iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::vector<data::Point2D>::const_iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  proto::Vector *proto_pos; // [rsp+30h] [rbp-190h]
  proto::PolygonRegionSize *proto_polygon_size; // [rsp+38h] [rbp-188h]
  const std::vector<data::Point2D> *point_vec; // [rsp+40h] [rbp-180h]
  const std::vector<data::Point2D> *__for_range; // [rsp+48h] [rbp-178h]
  const data::Point2D *point; // [rsp+50h] [rbp-170h]
  proto::VectorPlane *proto_point; // [rsp+58h] [rbp-168h]
  proto::CylinderRegionSize *proto_cylinder_size; // [rsp+60h] [rbp-160h]
  proto::Vector *proto_cubic_size; // [rsp+68h] [rbp-158h]
  proto::Vector from; // [rsp+70h] [rbp-150h] BYREF
  common::milog::MiLogStream v72; // [rsp+90h] [rbp-130h] BYREF
  char v73[272]; // [rsp+B0h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 14 player_ptr:473 64 16 14 region_ptr:495 96 16 22 polygon_region_ptr:544 128 64 10 notify:480";
  *(_QWORD *)(v1 + 16) = PlayerViewMgr::notifyEyePointState;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862726] = -202116109;
  PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "notifyEyePointState",
      476);
    v4 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v72, (const char (*)[10])"no player");
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v4, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v72);
  }
  else
  {
    proto::PlayerEyePointStateNotify::PlayerEyePointStateNotify((proto::PlayerEyePointStateNotify *const)(v1 + 128));
    v6 = 0;
    v8 = 1;
    if ( !std::operator==<PlayerEyePoint>(&this->eye_point_ptr_, 0LL) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v1 + 96));
      v6 = 1;
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( !FeatureSwitchMgr::isNotifyEyePointClosed(&v7->feature_switch_mgr) )
        v8 = 0;
    }
    if ( v6 )
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
    if ( v8 )
    {
      proto::PlayerEyePointStateNotify::set_is_use_eye_point((proto::PlayerEyePointStateNotify *const)(v1 + 128), 0);
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        0x19u,
        "./src/scene/player_view_mgr.cpp",
        "notifyEyePointState",
        485);
      if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->uid_);
      }
      common::milog::MiLogStream::operator()(&v72, "notify_to uid:%u no EyePoint", this->uid_);
      common::milog::MiLogStream::~MiLogStream(&v72);
    }
    else
    {
      proto::PlayerEyePointStateNotify::set_is_use_eye_point((proto::PlayerEyePointStateNotify *const)(v1 + 128), 1);
      v9 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
      IsStream = PlayerEyePoint::getIsStream(v9);
      proto::PlayerEyePointStateNotify::set_is_filter_stream_pos(
        (proto::PlayerEyePointStateNotify *const)(v1 + 128),
        IsStream);
      v11 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
      FixLodLevel = PlayerEyePoint::getFixLodLevel(v11);
      proto::PlayerEyePointStateNotify::set_fix_lod_level(
        (proto::PlayerEyePointStateNotify *const)(v1 + 128),
        FixLodLevel);
      proto_pos = proto::PlayerEyePointStateNotify::mutable_eye_point_pos((proto::PlayerEyePointStateNotify *const)(v1 + 128));
      v13 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
      Position = Entity::getPosition(v13);
      Vector3::operator proto::Vector(&from, Position);
      proto::Vector::operator=(proto_pos, &from);
      proto::Vector::~Vector(&from);
      std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
      PlayerEyePoint::getRegion((const PlayerEyePoint *const)(v1 + 64));
      if ( std::operator!=<Region>((const std::shared_ptr<Region> *)(v1 + 64), 0LL) )
      {
        v15 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        EntityId = Entity::getEntityId(v15);
        proto::PlayerEyePointStateNotify::set_region_entity_id(
          (proto::PlayerEyePointStateNotify *const)(v1 + 128),
          EntityId);
        v17 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        GroupId = Entity::getGroupId(v17);
        proto::PlayerEyePointStateNotify::set_region_group_id(
          (proto::PlayerEyePointStateNotify *const)(v1 + 128),
          GroupId);
        v19 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        ConfigId = Entity::getConfigId(v19);
        proto::PlayerEyePointStateNotify::set_region_config_id(
          (proto::PlayerEyePointStateNotify *const)(v1 + 128),
          ConfigId);
        v21 = (unsigned __int64)std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        v22 = *(_QWORD *)v21 + 240LL;
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        region_shape = (*(__int64 (__fastcall **)(unsigned __int64))v22)(v21);
        proto::PlayerEyePointStateNotify::set_region_shape(
          (proto::PlayerEyePointStateNotify *const)(v1 + 128),
          region_shape);
        switch ( region_shape )
        {
          case 1u:
            std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            toPtr<SphereRegion,Region>((Region *)(v1 + 96));
            if ( std::operator!=<SphereRegion>((const std::shared_ptr<SphereRegion> *)(v1 + 96), 0LL) )
            {
              v23 = std::__shared_ptr_access<SphereRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SphereRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              Radius = SphereRegion::getRadius(v23);
              proto::PlayerEyePointStateNotify::set_sphere_radius(
                (proto::PlayerEyePointStateNotify *const)(v1 + 128),
                Radius);
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&from,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/player_view_mgr.cpp",
                "notifyEyePointState",
                512);
              v25 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)&from,
                      (const char (*)[42])"eye_point wrong region_type. region Desc:");
              v26 = (unsigned __int64)std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                v26 = __asan_report_load8();
              v27 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v26;
              if ( *(_BYTE *)((*(_QWORD *)v26 >> 3) + 0x7FFF8000LL) )
                v26 = __asan_report_load8();
              (*v27)(&v72, v26);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)&v72);
              std::string::~string(&v72);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&from);
            }
            std::shared_ptr<SphereRegion>::~shared_ptr((std::shared_ptr<SphereRegion> *const)(v1 + 96));
            break;
          case 2u:
            std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            toPtr<CubicRegion,Region>((Region *)(v1 + 96));
            if ( std::operator!=<CubicRegion>((const std::shared_ptr<CubicRegion> *)(v1 + 96), 0LL) )
            {
              proto_cubic_size = proto::PlayerEyePointStateNotify::mutable_cubic_size((proto::PlayerEyePointStateNotify *const)(v1 + 128));
              v28 = std::__shared_ptr_access<CubicRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CubicRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              Size = CubicRegion::getSize(v28);
              Vector3::operator proto::Vector((proto::Vector *)&v72, Size);
              proto::Vector::operator=(proto_cubic_size, (proto::Vector *)&v72);
              proto::Vector::~Vector((proto::Vector *const)&v72);
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&from,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/player_view_mgr.cpp",
                "notifyEyePointState",
                525);
              v30 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)&from,
                      (const char (*)[42])"eye_point wrong region_type. region Desc:");
              v31 = (unsigned __int64)std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
                v31 = __asan_report_load8();
              v32 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v31;
              if ( *(_BYTE *)((*(_QWORD *)v31 >> 3) + 0x7FFF8000LL) )
                v31 = __asan_report_load8();
              (*v32)(&v72, v31);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, (const std::string *)&v72);
              std::string::~string(&v72);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&from);
            }
            std::shared_ptr<CubicRegion>::~shared_ptr((std::shared_ptr<CubicRegion> *const)(v1 + 96));
            break;
          case 3u:
            std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            toPtr<CylinderRegion,Region>((Region *)(v1 + 96));
            if ( std::operator!=<CylinderRegion>((const std::shared_ptr<CylinderRegion> *)(v1 + 96), 0LL) )
            {
              proto_cylinder_size = proto::PlayerEyePointStateNotify::mutable_cylinder_size((proto::PlayerEyePointStateNotify *const)(v1 + 128));
              v33 = std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              v34 = CylinderRegion::getRadius(v33);
              proto::CylinderRegionSize::set_radius(proto_cylinder_size, v34);
              v35 = std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              Height = CylinderRegion::getHeight(v35);
              proto::CylinderRegionSize::set_height(proto_cylinder_size, Height);
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&from,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/player_view_mgr.cpp",
                "notifyEyePointState",
                539);
              v37 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)&from,
                      (const char (*)[42])"eye_point wrong region_type. region Desc:");
              v38 = (unsigned __int64)std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                v38 = __asan_report_load8();
              v39 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v38;
              if ( *(_BYTE *)((*(_QWORD *)v38 >> 3) + 0x7FFF8000LL) )
                v38 = __asan_report_load8();
              (*v39)(&v72, v38);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, (const std::string *)&v72);
              std::string::~string(&v72);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&from);
            }
            std::shared_ptr<CylinderRegion>::~shared_ptr((std::shared_ptr<CylinderRegion> *const)(v1 + 96));
            break;
          case 4u:
            std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            toPtr<PolygonRegion,Region>((Region *)(v1 + 96));
            if ( std::operator!=<PolygonRegion>((const std::shared_ptr<PolygonRegion> *)(v1 + 96), 0LL) )
            {
              proto_polygon_size = proto::PlayerEyePointStateNotify::mutable_polygon_size((proto::PlayerEyePointStateNotify *const)(v1 + 128));
              v40 = std::__shared_ptr_access<PolygonRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PolygonRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              point_vec = PolygonRegion::getPoint2DList(v40);
              __for_range = point_vec;
              __for_begin._M_current = std::vector<data::Point2D>::begin(point_vec)._M_current;
              __for_end._M_current = std::vector<data::Point2D>::end(point_vec)._M_current;
              while ( __gnu_cxx::operator!=<data::Point2D const*,std::vector<data::Point2D>>(&__for_begin, &__for_end) )
              {
                point = __gnu_cxx::__normal_iterator<data::Point2D const*,std::vector<data::Point2D>>::operator*(&__for_begin);
                proto_point = proto::PolygonRegionSize::add_point_list(proto_polygon_size);
                if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(point);
                }
                proto::VectorPlane::set_x(proto_point, point->x);
                if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(&point->y);
                }
                proto::VectorPlane::set_y(proto_point, point->y);
                __gnu_cxx::__normal_iterator<data::Point2D const*,std::vector<data::Point2D>>::operator++(&__for_begin);
              }
              v41 = std::__shared_ptr_access<PolygonRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PolygonRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              v42 = PolygonRegion::getHeight(v41);
              proto::PolygonRegionSize::set_height(proto_polygon_size, v42);
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&from,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/player_view_mgr.cpp",
                "notifyEyePointState",
                559);
              v43 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)&from,
                      (const char (*)[42])"eye_point wrong region_type. region Desc:");
              v44 = (unsigned __int64)std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
                v44 = __asan_report_load8();
              v45 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v44;
              if ( *(_BYTE *)((*(_QWORD *)v44 >> 3) + 0x7FFF8000LL) )
                v44 = __asan_report_load8();
              (*v45)(&v72, v44);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, (const std::string *)&v72);
              std::string::~string(&v72);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&from);
            }
            std::shared_ptr<PolygonRegion>::~shared_ptr((std::shared_ptr<PolygonRegion> *const)(v1 + 96));
            break;
          default:
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&from,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/player_view_mgr.cpp",
              "notifyEyePointState",
              564);
            v46 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    (common::milog::MiLogStream *const)&from,
                    (const char (*)[42])"eye_point wrong region_type. region Desc:");
            v47 = (unsigned __int64)std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
              v47 = __asan_report_load8();
            v48 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v47;
            if ( *(_BYTE *)((*(_QWORD *)v47 >> 3) + 0x7FFF8000LL) )
              v47 = __asan_report_load8();
            (*v48)(&v72, v47);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, (const std::string *)&v72);
            std::string::~string(&v72);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&from);
            break;
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&from,
          &common::milog::MiLogDefault::default_log_obj_,
          0x19u,
          "./src/scene/player_view_mgr.cpp",
          "notifyEyePointState",
          567);
        v49 = (unsigned __int64)std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
          v49 = __asan_report_load8();
        v50 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v49;
        if ( *(_BYTE *)((*(_QWORD *)v49 >> 3) + 0x7FFF8000LL) )
          v49 = __asan_report_load8();
        (*v50)(&v72, v49);
        v51 = (const char *)std::string::c_str(&v72);
        v52 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
        v53 = Entity::getEntityId(v52);
        if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->uid_);
        }
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&from,
          "notify_to uid:%u setEyePoint. eye_point_entity_id:%u region:%s",
          this->uid_,
          v53,
          v51);
        std::string::~string(&v72);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&from);
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&from,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/player_view_mgr.cpp",
          "notifyEyePointState",
          572);
        v54 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                (common::milog::MiLogStream *const)&from,
                (const char (*)[5])"uid:");
        v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &this->uid_);
        v56 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v55,
                (const char (*)[40])" eye_point has no related region. Desc:");
        v57 = (unsigned __int64)std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
        if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
          v57 = __asan_report_load8();
        v58 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v57;
        if ( *(_BYTE *)((*(_QWORD *)v57 >> 3) + 0x7FFF8000LL) )
          v57 = __asan_report_load8();
        (*v58)(&v72, v57);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, (const std::string *)&v72);
        std::string::~string(&v72);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&from);
      }
      std::shared_ptr<Region>::~shared_ptr((std::shared_ptr<Region> *const)(v1 + 64));
    }
    v59 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::sendProto(v59, (const google::protobuf::Message *)(v1 + 128));
    proto::PlayerEyePointStateNotify::~PlayerEyePointStateNotify((proto::PlayerEyePointStateNotify *const)(v1 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v73 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 579: range 0000000015C438E8-0000000015C43F26
std::vector<std::shared_ptr<Entity>> *__cdecl PlayerViewMgr::validateAndGetEntitiesInView(
        std::vector<std::shared_ptr<Entity>> *retstr,
        PlayerViewMgr *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<std::shared_ptr<Entity>>::size_type v5; // rdx
  std::vector<std::shared_ptr<Entity>>::value_type *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Scene *v13; // r14
  Player *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self __y; // [rsp+18h] [rbp-138h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-130h] BYREF
  char v18[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 13 entity_id:593 64 8 8 iter:583 96 16 14 player_ptr:604 128 16 13 scene_ptr:610 160 24 2"
                        "5 expired_entity_id_vec:580";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::validateAndGetEntitiesInView;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160));
  std::vector<std::shared_ptr<Entity>>::vector(retstr);
  v5 = std::map<unsigned int,std::weak_ptr<Entity>>::size(&this->view_entity_map_);
  std::vector<std::shared_ptr<Entity>>::reserve(retstr, v5);
  *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 64) = std::map<unsigned int,std::weak_ptr<Entity>>::begin(&this->view_entity_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::end(&this->view_entity_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self *)(v2 + 64),
            &__y) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v2 + 64));
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v2 + 128));
    if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 128), 0LL) )
    {
      v6 = std::move<std::shared_ptr<Entity> &>((std::shared_ptr<Entity> *)(v2 + 128));
      std::vector<std::shared_ptr<Entity>>::push_back(retstr, v6);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v2 + 64));
    }
    else
    {
      v7 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v2 + 64));
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v7 >> 3) + 0x7FFF8000) <= 3 )
        v7 = __asan_report_load4(v7);
      *(_DWORD *)(v2 + 48) = *(_DWORD *)v7;
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_view_mgr.cpp",
        "validateAndGetEntitiesInView",
        594);
      v8 = *(unsigned int *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->uid_);
      }
      common::milog::MiLogStream::operator()(&v17, "uid:%u entity_id:%u weak_ptr expired", this->uid_, v8);
      common::milog::MiLogStream::~MiLogStream(&v17);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v2 + 160),
        (const std::vector<unsigned int>::value_type *)(v2 + 48));
      *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 64) = std::map<unsigned int,std::weak_ptr<Entity>>::erase[abi:cxx11](
                                                                               &this->view_entity_map_,
                                                                               *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 64));
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 128));
  }
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 160)) )
  {
    PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v2 + 96));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_view_mgr.cpp",
        "validateAndGetEntitiesInView",
        607);
      v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v17,
             (const char (*)[19])"player_ptr is null");
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->uid_);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      PlayerViewMgr::getScene((const PlayerViewMgr *const)(v2 + 128));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_view_mgr.cpp",
          "validateAndGetEntitiesInView",
          613);
        v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v17,
                (const char (*)[18])"scene_ptr is null");
        v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->uid_);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      else
      {
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Scene::sendNotifyEntityDisappear(
          v13,
          v14,
          (const std::vector<unsigned int> *)(v2 + 160),
          &VisionContext::miss_context);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return retstr;
};

// Line 626: range 0000000015C43F28-0000000015C43FFD
bool __cdecl PlayerViewMgr::isContainEntityInView(const PlayerViewMgr *const this, const EntityPtr *entity_ptr)
{
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::map<unsigned int,std::weak_ptr<Entity>>::key_type __x; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Entity>(entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "isContainEntityInView",
      629);
    common::milog::MiLogStream::operator()(&v5, "entity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
  else
  {
    v3 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    __x = Entity::getEntityId(v3);
    return std::map<unsigned int,std::weak_ptr<Entity>>::count(&this->view_entity_map_, &__x) != 0;
  }
};

// Line 636: range 0000000015C43FFE-0000000015C442C7
bool __cdecl PlayerViewMgr::addEntityInView(PlayerViewMgr *const this, const EntityPtr *entity_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int *v7; // rcx
  const std::shared_ptr<Entity> *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned int EntityId; // [rsp+14h] [rbp-9Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-90h] BYREF
  char v18[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 result:642";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::addEntityInView;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Entity>(entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "addEntityInView",
      639);
    common::milog::MiLogStream::operator()(&v17, "entity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    EntityId = Entity::getEntityId(v6);
    *(std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >,bool> *)(v2 + 32) = std::map<unsigned int,std::weak_ptr<Entity>>::emplace<unsigned int,std::shared_ptr<Entity> const&>(&this->view_entity_map_, &EntityId, entity_ptr, v7, v8);
    if ( *(_BYTE *)(v2 + 40) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        0x19u,
        "./src/scene/player_view_mgr.cpp",
        "addEntityInView",
        646);
      v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->uid_);
      v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v10,
              (const char (*)[24])" view_entity_map_ size:");
      val = std::map<unsigned int,std::weak_ptr<Entity>>::size(&this->view_entity_map_);
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" add entity:");
      v14 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
      EntityId = Entity::getEntityId(v14);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &EntityId);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    result = *(_BYTE *)(v2 + 40);
  }
  if ( v18 == (char *)v2 )
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

// Line 653: range 0000000015C442C8-0000000015C44497
size_t __cdecl PlayerViewMgr::delEntityInView(PlayerViewMgr *const this, const EntityPtr *entity_ptr)
{
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::map<unsigned int,std::weak_ptr<Entity>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-40h] BYREF
  size_t result; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<Entity>(entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "delEntityInView",
      656);
    common::milog::MiLogStream::operator()(&v13, "entity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 0LL;
  }
  else
  {
    v3 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    __x = Entity::getEntityId(v3);
    result = std::map<unsigned int,std::weak_ptr<Entity>>::erase(&this->view_entity_map_, &__x);
    if ( result )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        0x19u,
        "./src/scene/player_view_mgr.cpp",
        "delEntityInView",
        663);
      v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v13, (const char (*)[5])"uid:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->uid_);
      v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             v5,
             (const char (*)[24])" view_entity_map_ size:");
      val = std::map<unsigned int,std::weak_ptr<Entity>>::size(&this->view_entity_map_);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" del entity:");
      v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
      __x = Entity::getEntityId(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    return result;
  }
};

// Line 670: range 0000000015C44498-0000000015C447C0
std::vector<std::shared_ptr<Entity>> *__cdecl PlayerViewMgr::validateAndGetEntitiesInSightRange(
        std::vector<std::shared_ptr<Entity>> *retstr,
        PlayerViewMgr *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<std::shared_ptr<Entity>>::size_type v5; // rdx
  std::vector<std::shared_ptr<Entity>>::value_type *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:673 64 16 14 entity_ptr:675";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::validateAndGetEntitiesInSightRange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::vector<std::shared_ptr<Entity>>::vector(retstr);
  v5 = std::map<unsigned int,std::weak_ptr<Entity>>::size(&this->in_sight_range_entity_map_);
  std::vector<std::shared_ptr<Entity>>::reserve(retstr, v5);
  *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32) = std::map<unsigned int,std::weak_ptr<Entity>>::begin(&this->in_sight_range_entity_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::end(&this->in_sight_range_entity_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self *)(v2 + 32),
            &__y) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v2 + 32));
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v2 + 64));
    if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 64), 0LL) )
    {
      v6 = std::move<std::shared_ptr<Entity> &>((std::shared_ptr<Entity> *)(v2 + 64));
      std::vector<std::shared_ptr<Entity>>::push_back(retstr, v6);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_view_mgr.cpp",
        "validateAndGetEntitiesInSightRange",
        683);
      v7 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v2 + 32));
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v7 >> 3) + 0x7FFF8000) <= 3 )
        v7 = __asan_report_load4(v7);
      v8 = *(unsigned int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->uid_);
      }
      common::milog::MiLogStream::operator()(&v11, "uid:%u entity_id:%u weak_ptr expired", this->uid_, v8);
      common::milog::MiLogStream::~MiLogStream(&v11);
      *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32) = std::map<unsigned int,std::weak_ptr<Entity>>::erase[abi:cxx11](
                                                                               &this->in_sight_range_entity_map_,
                                                                               *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32));
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 64));
  }
  if ( v12 == (char *)v2 )
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

// Line 691: range 0000000015C447C2-0000000015C44897
bool __cdecl PlayerViewMgr::isContainEntityInSightRange(const PlayerViewMgr *const this, const EntityPtr *entity_ptr)
{
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::map<unsigned int,std::weak_ptr<Entity>>::key_type __x; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Entity>(entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "isContainEntityInSightRange",
      694);
    common::milog::MiLogStream::operator()(&v5, "entity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
  else
  {
    v3 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    __x = Entity::getEntityId(v3);
    return std::map<unsigned int,std::weak_ptr<Entity>>::count(&this->in_sight_range_entity_map_, &__x) != 0;
  }
};

// Line 701: range 0000000015C44898-0000000015C44B61
bool __cdecl PlayerViewMgr::addEntityInSightRange(PlayerViewMgr *const this, const EntityPtr *entity_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int *v7; // rcx
  const std::shared_ptr<Entity> *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned int EntityId; // [rsp+14h] [rbp-9Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-90h] BYREF
  char v18[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 result:707";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::addEntityInSightRange;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Entity>(entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "addEntityInSightRange",
      704);
    common::milog::MiLogStream::operator()(&v17, "entity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    EntityId = Entity::getEntityId(v6);
    *(std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >,bool> *)(v2 + 32) = std::map<unsigned int,std::weak_ptr<Entity>>::emplace<unsigned int,std::shared_ptr<Entity> const&>(&this->in_sight_range_entity_map_, &EntityId, entity_ptr, v7, v8);
    if ( *(_BYTE *)(v2 + 40) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        0x19u,
        "./src/scene/player_view_mgr.cpp",
        "addEntityInSightRange",
        711);
      v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->uid_);
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              v10,
              (const char (*)[34])" in_sight_range_entity_map_ size:");
      val = std::map<unsigned int,std::weak_ptr<Entity>>::size(&this->in_sight_range_entity_map_);
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" add entity:");
      v14 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
      EntityId = Entity::getEntityId(v14);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &EntityId);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    result = *(_BYTE *)(v2 + 40);
  }
  if ( v18 == (char *)v2 )
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

// Line 718: range 0000000015C44B62-0000000015C44D31
size_t __cdecl PlayerViewMgr::delEntityInSightRange(PlayerViewMgr *const this, const EntityPtr *entity_ptr)
{
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::map<unsigned int,std::weak_ptr<Entity>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-40h] BYREF
  size_t result; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<Entity>(entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "delEntityInSightRange",
      721);
    common::milog::MiLogStream::operator()(&v13, "entity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 0LL;
  }
  else
  {
    v3 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    __x = Entity::getEntityId(v3);
    result = std::map<unsigned int,std::weak_ptr<Entity>>::erase(&this->in_sight_range_entity_map_, &__x);
    if ( result )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        0x19u,
        "./src/scene/player_view_mgr.cpp",
        "delEntityInSightRange",
        728);
      v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v13, (const char (*)[5])"uid:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->uid_);
      v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             v5,
             (const char (*)[34])" in_sight_range_entity_map_ size:");
      val = std::map<unsigned int,std::weak_ptr<Entity>>::size(&this->in_sight_range_entity_map_);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" del entity:");
      v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
      __x = Entity::getEntityId(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    return result;
  }
};

// Line 735: range 0000000015C44D32-0000000015C45000
bool __cdecl PlayerViewMgr::addSightGroupInView(PlayerViewMgr *const this, const EntitySightGroupPtr *sight_group_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int *v7; // rcx
  const std::shared_ptr<EntitySightGroup> *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned int SelfId; // [rsp+14h] [rbp-9Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-90h] BYREF
  char v18[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 result:741";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::addSightGroupInView;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<EntitySightGroup>(sight_group_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "addSightGroupInView",
      738);
    common::milog::MiLogStream::operator()(&v17, "sight_group_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)sight_group_ptr);
    SelfId = EntitySightGroup::getSelfId(v6);
    *(std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<EntitySightGroup> > >,bool> *)(v2 + 32) = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::emplace<unsigned int,std::shared_ptr<EntitySightGroup> const&>(&this->view_sight_group_map_, &SelfId, sight_group_ptr, v7, v8);
    if ( *(_BYTE *)(v2 + 40) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        0x19u,
        "./src/scene/player_view_mgr.cpp",
        "addSightGroupInView",
        745);
      v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->uid_);
      v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v10,
              (const char (*)[29])" view_sight_group_map_ size:");
      val = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::size(&this->view_sight_group_map_);
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v12,
              (const char (*)[18])" add sight_group:");
      v14 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)sight_group_ptr);
      SelfId = EntitySightGroup::getSelfId(v14);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &SelfId);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    result = *(_BYTE *)(v2 + 40);
  }
  if ( v18 == (char *)v2 )
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

// Line 752: range 0000000015C45002-0000000015C451D6
size_t __cdecl PlayerViewMgr::delSightGroupInView(
        PlayerViewMgr *const this,
        const EntitySightGroupPtr *sight_group_ptr)
{
  std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-40h] BYREF
  size_t result; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<EntitySightGroup>(sight_group_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "delSightGroupInView",
      755);
    common::milog::MiLogStream::operator()(&v13, "sight_group_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 0LL;
  }
  else
  {
    v3 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)sight_group_ptr);
    __x = EntitySightGroup::getSelfId(v3);
    result = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::erase(&this->view_sight_group_map_, &__x);
    if ( result )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        0x19u,
        "./src/scene/player_view_mgr.cpp",
        "delSightGroupInView",
        762);
      v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v13, (const char (*)[5])"uid:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->uid_);
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             v5,
             (const char (*)[29])" view_sight_group_map_ size:");
      val = std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::size(&this->view_sight_group_map_);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])" del sight_group:");
      v9 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)sight_group_ptr);
      __x = EntitySightGroup::getSelfId(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    return result;
  }
};

// Line 769: range 0000000015C451D8-0000000015C452AF
bool __fastcall PlayerViewMgr::isContainGroupVisionType(const PlayerViewMgr *const this, uint32_t type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 type:768";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::isContainGroupVisionType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = type;
  result = std::set<unsigned int>::count(
             &this->final_group_vision_type_set_,
             (const std::set<unsigned int>::key_type *)(v2 + 32)) != 0;
  if ( v6 == (char *)v2 )
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

// Line 774: range 0000000015C452B0-0000000015C45906
void __cdecl PlayerViewMgr::setGroupVisionTypeSet(PlayerViewMgr *const this, const std::set<unsigned int> *type_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool isGroupVisionTypeClosed; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t v11; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  Scene *v14; // r14
  Player *v15; // rax
  std::shared_ptr<Config> v16; // [rsp+10h] [rbp-180h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-170h] BYREF
  char v18[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 14 player_ptr:783 64 16 13 scene_ptr:790 96 16 25 player_eye_entity_ptr:797 128 120 32 p"
                        "layer_change_eye_prop_guard:804";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::setGroupVisionTypeSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  isGroupVisionTypeClosed = FeatureSwitchMgr::isGroupVisionTypeClosed(&v5->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( isGroupVisionTypeClosed )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_view_mgr.cpp",
      "setGroupVisionTypeSet",
      778);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v17,
      (const char (*)[39])"[FEATURE_SWITCH] GroupVisionTypeClosed");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v2 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_view_mgr.cpp",
        "setGroupVisionTypeSet",
        786);
      v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v17,
             (const char (*)[19])"player_ptr is null");
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->uid_);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      PlayerViewMgr::getScene((const PlayerViewMgr *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_view_mgr.cpp",
          "setGroupVisionTypeSet",
          793);
        v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v17,
               (const char (*)[18])"scene_ptr is null");
        v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->uid_);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      else
      {
        v11 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->uid_);
        }
        Scene::getPlayerEyeEntity((Scene *const)(v2 + 96), v11);
        if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v2 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/player_view_mgr.cpp",
            "setGroupVisionTypeSet",
            800);
          v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v17,
                  (const char (*)[30])"player_eye_entity_ptr is null");
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->uid_);
          common::milog::MiLogStream::~MiLogStream(&v17);
        }
        else
        {
          std::enable_shared_from_this<PlayerViewMgr>::shared_from_this((std::enable_shared_from_this<PlayerViewMgr> *const)&v16);
          PlayerChangeEyePropGuard::PlayerChangeEyePropGuard(
            (PlayerChangeEyePropGuard *const)(v2 + 128),
            (PlayerViewMgrPtr *)&v16,
            1);
          std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)&v16);
          PlayerViewMgr::doSetGroupVisionTypeSet(this, type_set);
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          Scene::refreshPlayerInSightRangeEntitiesAndEnter(v14, v15);
          PlayerChangeEyePropGuard::~PlayerChangeEyePropGuard((PlayerChangeEyePropGuard *const)(v2 + 128));
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 810: range 0000000015C45908-0000000015C45A93
void __cdecl PlayerViewMgr::addGroupVisionTypeSet(PlayerViewMgr *const this, const std::set<unsigned int> *type_set)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v6; // rax
  char v7[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 16 tmp_type_set:811";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerViewMgr::addGroupVisionTypeSet;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set(v2 + 1, &this->group_vision_type_set_);
  M_node = std::set<unsigned int>::end(type_set)._M_node;
  v6._M_node = std::set<unsigned int>::begin(type_set)._M_node;
  std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
    v2 + 1,
    v6,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node);
  PlayerViewMgr::setGroupVisionTypeSet(this, v2 + 1);
  std::set<unsigned int>::~set(v2 + 1);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 817: range 0000000015C45A94-0000000015C45CB2
void __cdecl PlayerViewMgr::delGroupVisionTypeSet(PlayerViewMgr *const this, const std::set<unsigned int> *type_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 8 type:819 48 48 16 tmp_type_set:818";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::delGroupVisionTypeSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48), &this->group_vision_type_set_);
  __for_range = type_set;
  __for_begin._M_node = std::set<unsigned int>::begin(type_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(type_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    std::set<unsigned int>::erase(
      (std::set<unsigned int> *const)(v2 + 48),
      (const std::set<unsigned int>::key_type *)(v2 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  PlayerViewMgr::setGroupVisionTypeSet(this, (const std::set<unsigned int> *)(v2 + 48));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  if ( v10 == (char *)v2 )
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
};

// Line 827: range 0000000015C45CB4-0000000015C462F9
void __cdecl PlayerViewMgr::resetGroupVisionTypeSet(PlayerViewMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool isGroupVisionTypeClosed; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Scene *v13; // r14
  Player *v14; // rax
  std::shared_ptr<Config> v15; // [rsp+10h] [rbp-180h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-170h] BYREF
  char v17[336]; // [rsp+40h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 14 player_ptr:836 64 16 13 scene_ptr:843 96 16 25 player_eye_entity_ptr:850 128 120 32 p"
                        "layer_change_eye_prop_guard:857";
  *(_QWORD *)(v1 + 16) = PlayerViewMgr::resetGroupVisionTypeSet;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  isGroupVisionTypeClosed = FeatureSwitchMgr::isGroupVisionTypeClosed(&v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( isGroupVisionTypeClosed )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_view_mgr.cpp",
      "resetGroupVisionTypeSet",
      831);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v16,
      (const char (*)[39])"[FEATURE_SWITCH] GroupVisionTypeClosed");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v1 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_view_mgr.cpp",
        "resetGroupVisionTypeSet",
        839);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v16,
             (const char (*)[19])"player_ptr is null");
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->uid_);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      PlayerViewMgr::getScene((const PlayerViewMgr *const)(v1 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_view_mgr.cpp",
          "resetGroupVisionTypeSet",
          846);
        v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v16,
               (const char (*)[18])"scene_ptr is null");
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->uid_);
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      else
      {
        v10 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->uid_);
        }
        Scene::getPlayerEyeEntity((Scene *const)(v1 + 96), v10);
        if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v1 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/player_view_mgr.cpp",
            "resetGroupVisionTypeSet",
            853);
          v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v16,
                  (const char (*)[30])"player_eye_entity_ptr is null");
          v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->uid_);
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
        else
        {
          std::enable_shared_from_this<PlayerViewMgr>::shared_from_this((std::enable_shared_from_this<PlayerViewMgr> *const)&v15);
          PlayerChangeEyePropGuard::PlayerChangeEyePropGuard(
            (PlayerChangeEyePropGuard *const)(v1 + 128),
            (PlayerViewMgrPtr *)&v15,
            1);
          std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)&v15);
          PlayerViewMgr::doResetGroupVisionTypeSet(this);
          v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          Scene::refreshPlayerInSightRangeEntitiesAndEnter(v13, v14);
          PlayerChangeEyePropGuard::~PlayerChangeEyePropGuard((PlayerChangeEyePropGuard *const)(v1 + 128));
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  }
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 863: range 0000000015C462FA-0000000015C463FE
void __cdecl PlayerViewMgr::doSetGroupVisionTypeSet(PlayerViewMgr *const this, const std::set<unsigned int> *type_set)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_view_mgr.cpp",
    "doSetGroupVisionTypeSet",
    864);
  v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v7, (const char (*)[5])"uid:");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->uid_);
  v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         v3,
         (const char (*)[28])" set group_vision_set from ");
  v5 = common::milog::MiLogStream::operator<<<unsigned int>(v4, &this->group_vision_type_set_);
  v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v5, (const char (*)[5])off_259AEF80);
  common::milog::MiLogStream::operator<<<unsigned int>(v6, type_set);
  common::milog::MiLogStream::~MiLogStream(&v7);
  std::set<unsigned int>::operator=(&this->group_vision_type_set_, type_set);
  PlayerViewMgr::calcFinalGroupVisionTypeSet(this);
};

// Line 871: range 0000000015C46400-0000000015C46507
void __cdecl PlayerViewMgr::doResetGroupVisionTypeSet(PlayerViewMgr *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::set<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_view_mgr.cpp",
    "doResetGroupVisionTypeSet",
    872);
  v1 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v6, (const char (*)[5])"uid:");
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->uid_);
  v3 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         v2,
         (const char (*)[30])" reset group_vision_set from ");
  v4 = common::milog::MiLogStream::operator<<<unsigned int>(v3, &this->group_vision_type_set_);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v4, (const char (*)[8])off_259AF040);
  common::milog::MiLogStream::~MiLogStream(&v6);
  std::set<unsigned int>::clear(&this->group_vision_type_set_);
  __x = 1;
  std::set<unsigned int>::insert(&this->group_vision_type_set_, &__x);
  PlayerViewMgr::calcFinalGroupVisionTypeSet(this);
};

// Line 880: range 0000000015C46508-0000000015C4660C
void __cdecl PlayerViewMgr::clearRegionGroupVisionTypeSet(PlayerViewMgr *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_view_mgr.cpp",
    "clearRegionGroupVisionTypeSet",
    881);
  v1 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v3, (const char (*)[5])"uid:");
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->uid_);
  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
    v2,
    (const char (*)[31])" clearRegionGroupVisionTypeSet");
  common::milog::MiLogStream::~MiLogStream(&v3);
  std::map<unsigned int,std::set<unsigned int>>::clear(&this->region_group_vision_type_map_);
  if ( *(char *)(((unsigned __int64)&this->is_region_group_vision_active_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_region_group_vision_active_);
  if ( this->is_region_group_vision_active_ )
    PlayerViewMgr::calcFinalGroupVisionTypeSet(this);
};

// Line 890: range 0000000015C4660E-0000000015C46AB1
void __cdecl PlayerViewMgr::calcFinalGroupVisionTypeSet(PlayerViewMgr *const this)
{
  std::set<unsigned int> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r14d
  std::set<unsigned int>::iterator v10; // rax
  std::insert_iterator<std::set<unsigned int> > v11; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  std::set<unsigned int>::iterator v14; // rax
  std::insert_iterator<std::set<unsigned int> > v15; // r8
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+10h] [rbp-F0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+18h] [rbp-E8h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1; // [rsp+20h] [rbp-E0h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (std::set<unsigned int> *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::set<unsigned int> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 39 active_region_group_vision_type_set:895";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerViewMgr::calcFinalGroupVisionTypeSet;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_view_mgr.cpp",
    "calcFinalGroupVisionTypeSet",
    891);
  v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->uid_);
  v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         v5,
         (const char (*)[35])" calcFinalGroupVisionTypeSet from ");
  common::milog::MiLogStream::operator<<<unsigned int>(v6, &this->final_group_vision_type_set_);
  common::milog::MiLogStream::~MiLogStream(&v22);
  if ( *(char *)(((unsigned __int64)&this->is_region_group_vision_active_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_region_group_vision_active_);
  if ( !this->is_region_group_vision_active_ )
  {
    std::set<unsigned int>::operator=(&this->final_group_vision_type_set_, &this->group_vision_type_set_);
LABEL_13:
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_view_mgr.cpp",
      "calcFinalGroupVisionTypeSet",
      911);
    v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->uid_);
    v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v17,
            (const char (*)[33])" calcFinalGroupVisionTypeSet to ");
    common::milog::MiLogStream::operator<<<unsigned int>(v18, &this->final_group_vision_type_set_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    goto LABEL_14;
  }
  std::set<unsigned int>::set(v1 + 1);
  if ( PlayerViewMgr::fillActiveRegionGroupVisionTypeSet(this, v1 + 1) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "calcFinalGroupVisionTypeSet",
      898);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v22,
           (const char (*)[40])"fillActiveRegionGroupVisionTypeSet fail");
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v9 = 0;
  }
  else
  {
    std::set<unsigned int>::clear(&this->final_group_vision_type_set_);
    v10._M_node = std::set<unsigned int>::begin(&this->final_group_vision_type_set_)._M_node;
    v11 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
            &this->final_group_vision_type_set_,
            v10);
    container = v11.container;
    M_node = v11.iter._M_node;
    __last2 = std::set<unsigned int>::cend(v1 + 1)._M_node;
    __first2 = std::set<unsigned int>::cbegin(v1 + 1)._M_node;
    __last1 = std::set<unsigned int>::cend(&this->group_vision_type_set_)._M_node;
    v14._M_node = std::set<unsigned int>::cbegin(&this->group_vision_type_set_)._M_node;
    v15.container = container;
    v15.iter._M_node = M_node;
    std::set_union<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
      v14,
      (std::_Rb_tree_const_iterator<unsigned int>)__last1,
      (std::_Rb_tree_const_iterator<unsigned int>)__first2,
      (std::_Rb_tree_const_iterator<unsigned int>)__last2,
      v15);
    v9 = 1;
  }
  std::set<unsigned int>::~set(v1 + 1);
  if ( v9 == 1 )
    goto LABEL_13;
LABEL_14:
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 916: range 0000000015C46AB2-0000000015C47085
int32_t __cdecl PlayerViewMgr::fillActiveRegionGroupVisionTypeSet(
        PlayerViewMgr *const this,
        std::set<unsigned int> *active_region_group_vision_type_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int *v11; // rax
  uint32_t *v12; // rdx
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v13; // rax
  _DWORD *v14; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // rdx
  std::insert_iterator<std::set<unsigned int> > v16; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *v18; // r15
  std::set<unsigned int>::iterator v19; // rax
  std::insert_iterator<std::set<unsigned int> > v20; // r8
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+8h] [rbp-1C8h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+10h] [rbp-1C0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1; // [rsp+18h] [rbp-1B8h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-190h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-188h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+50h] [rbp-180h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-178h] BYREF
  const SceneScriptConfig *script_config_ptr; // [rsp+60h] [rbp-170h]
  std::set<unsigned int> *__for_range; // [rsp+68h] [rbp-168h]
  const std::unordered_set<unsigned int> *exclude_vision_type_set; // [rsp+70h] [rbp-160h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+78h] [rbp-158h]
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-150h] BYREF
  char v34[304]; // [rsp+A0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 23 exclude_vision_type:936 64 16 13 scene_ptr:917 96 48 32 region_group_vision_type_set:9"
                        "30 176 48 31 all_exclude_vision_type_set:932";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::fillActiveRegionGroupVisionTypeSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  PlayerViewMgr::getScene((const PlayerViewMgr *const)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "fillActiveRegionGroupVisionTypeSet",
      920);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v33, (const char (*)[18])"scene_ptr is null");
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    script_config_ptr = Scene::getScriptConfig(v8);
    if ( script_config_ptr )
    {
      common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,std::set<unsigned int>>>(
        (std::set<unsigned int> *)(v2 + 96),
        &this->region_group_vision_type_map_);
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 176));
      __for_range = (std::set<unsigned int> *)(v2 + 96);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 96))._M_node;
      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 96))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v11 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        exclude_vision_type_set = SceneScriptConfig::getRegionVisonTypeExcludeSet(script_config_ptr, *v12);
        __for_range_0 = exclude_vision_type_set;
        __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(exclude_vision_type_set)._M_cur;
        __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
        {
          v13 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
          v14 = v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          *(_DWORD *)(v2 + 48) = *v14;
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v2 + 176),
            (const std::set<unsigned int>::value_type *)(v2 + 48));
          std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      M_node = std::set<unsigned int>::begin(active_region_group_vision_type_set)._M_node;
      v16 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
              active_region_group_vision_type_set,
              (std::_Rb_tree_const_iterator<unsigned int>)M_node);
      container = v16.container;
      v18 = v16.iter._M_node;
      __last2 = std::set<unsigned int>::cend((const std::set<unsigned int> *const)(v2 + 176))._M_node;
      __first2 = std::set<unsigned int>::cbegin((const std::set<unsigned int> *const)(v2 + 176))._M_node;
      __last1 = std::set<unsigned int>::cend((const std::set<unsigned int> *const)(v2 + 96))._M_node;
      v19._M_node = std::set<unsigned int>::cbegin((const std::set<unsigned int> *const)(v2 + 96))._M_node;
      v20.container = container;
      v20.iter._M_node = v18;
      std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
        v19,
        (std::_Rb_tree_const_iterator<unsigned int>)__last1,
        (std::_Rb_tree_const_iterator<unsigned int>)__first2,
        (std::_Rb_tree_const_iterator<unsigned int>)__last2,
        v20);
      v7 = 0;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 176));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_view_mgr.cpp",
        "fillActiveRegionGroupVisionTypeSet",
        926);
      v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v33,
             (const char (*)[26])"script_config_ptr is null");
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->uid_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v7 = -1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = v7;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 949: range 0000000015C47086-0000000015C47792
void __fastcall PlayerViewMgr::addRegionGroupVisionTypeSet(
        PlayerViewMgr *const this,
        uint32_t region_entity_id,
        const std::set<unsigned int> *type_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v15; // rax
  _DWORD *v16; // rdx
  std::set<unsigned int> *v17; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  Scene *v22; // r14
  Player *v23; // rax
  bool is_region_group_vision_changed; // [rsp+27h] [rbp-199h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-198h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-190h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-188h]
  std::enable_shared_from_this<PlayerViewMgr> v29; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-170h] BYREF
  char v31[336]; // [rsp+70h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 15 vision_type:964 48 4 20 region_entity_id:948 64 16 14 player_ptr:951 96 16 13 scene_pt"
                        "r:957 128 120 32 player_change_eye_prop_guard:975";
  *(_QWORD *)(v3 + 16) = PlayerViewMgr::addRegionGroupVisionTypeSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = region_entity_id;
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_view_mgr.cpp",
    "addRegionGroupVisionTypeSet",
    950);
  v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         &v30,
         (const char (*)[47])"addRegionGroupVisionTypeSet. region_entity_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", type_set:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int>(v8, type_set);
  v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->uid_);
  common::milog::MiLogStream::~MiLogStream(&v30);
  PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v3 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "addRegionGroupVisionTypeSet",
      954);
    v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v30,
            (const char (*)[19])"player_ptr is null");
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    PlayerViewMgr::getScene((const PlayerViewMgr *const)(v3 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_view_mgr.cpp",
        "addRegionGroupVisionTypeSet",
        960);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v30,
              (const char (*)[18])"scene_ptr is null");
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->uid_);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      is_region_group_vision_changed = 0;
      __for_range = type_set;
      __for_begin._M_node = std::set<unsigned int>::begin(type_set)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(type_set)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v15 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        *(_DWORD *)(v3 + 32) = *v16;
        v17 = std::map<unsigned int,std::set<unsigned int>>::operator[](
                &this->region_group_vision_type_map_,
                (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        v18 = std::set<unsigned int>::insert(v17, (const std::set<unsigned int>::value_type *)(v3 + 48));
        if ( !v18.second )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/player_view_mgr.cpp",
            "addRegionGroupVisionTypeSet",
            968);
          v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v30,
                  (const char (*)[37])"[REGION] duplicate region_entity_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 48));
          v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v20,
                  (const char (*)[15])", vision_type:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          is_region_group_vision_changed = 1;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      if ( *(char *)(((unsigned __int64)&this->is_region_group_vision_active_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_region_group_vision_active_);
      if ( this->is_region_group_vision_active_ && is_region_group_vision_changed )
      {
        std::enable_shared_from_this<PlayerViewMgr>::shared_from_this(&v29);
        PlayerChangeEyePropGuard::PlayerChangeEyePropGuard(
          (PlayerChangeEyePropGuard *const)(v3 + 128),
          (PlayerViewMgrPtr *)&v29,
          1);
        std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)&v29);
        PlayerViewMgr::calcFinalGroupVisionTypeSet(this);
        v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Scene::refreshPlayerInSightRangeEntitiesAndEnter(v22, v23);
        PlayerChangeEyePropGuard::~PlayerChangeEyePropGuard((PlayerChangeEyePropGuard *const)(v3 + 128));
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 982: range 0000000015C47794-0000000015C48006
void __fastcall PlayerViewMgr::delRegionGroupVisionTypeSet(
        PlayerViewMgr *const this,
        uint32_t region_entity_id,
        const std::set<unsigned int> *type_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v15; // rax
  _DWORD *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v24; // rax
  Scene *v25; // r14
  Player *v26; // rax
  bool is_region_group_vision_changed; // [rsp+2Fh] [rbp-1E1h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-1E0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-1D8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self __y; // [rsp+40h] [rbp-1D0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-1C8h]
  std::enable_shared_from_this<PlayerViewMgr> v33; // [rsp+50h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-190h] BYREF
  char v36[368]; // [rsp+A0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 vision_type:997 48 4 20 region_entity_id:981 64 8 8 iter:999 96 16 14 player_ptr:984 1"
                        "28 16 13 scene_ptr:990 160 120 33 player_change_eye_prop_guard:1018";
  *(_QWORD *)(v3 + 16) = PlayerViewMgr::delRegionGroupVisionTypeSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = region_entity_id;
  common::milog::MiLogStream::create(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_view_mgr.cpp",
    "delRegionGroupVisionTypeSet",
    983);
  v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         &v35,
         (const char (*)[47])"delRegionGroupVisionTypeSet. region_entity_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", type_set:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int>(v8, type_set);
  v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->uid_);
  common::milog::MiLogStream::~MiLogStream(&v35);
  PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v3 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_view_mgr.cpp",
      "delRegionGroupVisionTypeSet",
      987);
    v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v35,
            (const char (*)[19])"player_ptr is null");
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  else
  {
    PlayerViewMgr::getScene((const PlayerViewMgr *const)(v3 + 128));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_view_mgr.cpp",
        "delRegionGroupVisionTypeSet",
        993);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v35,
              (const char (*)[18])"scene_ptr is null");
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->uid_);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    else
    {
      is_region_group_vision_changed = 0;
      __for_range = type_set;
      __for_begin._M_node = std::set<unsigned int>::begin(type_set)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(type_set)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v15 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        *(_DWORD *)(v3 + 32) = *v16;
        *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  &this->region_group_vision_type_map_,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        __y._M_node = std::map<unsigned int,std::set<unsigned int>>::end(&this->region_group_vision_type_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/player_view_mgr.cpp",
            "delRegionGroupVisionTypeSet",
            1002);
          v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v34,
                  (const char (*)[42])"[REGION] no vision_type region_entity_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v18,
                  (const char (*)[15])", vision_type:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v34);
        }
        else
        {
          v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 64));
          if ( std::set<unsigned int>::erase(&v20->second, (const std::set<unsigned int>::key_type *)(v3 + 48)) )
          {
            v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 64));
            if ( std::set<unsigned int>::empty(&v24->second) )
              std::map<unsigned int,std::set<unsigned int>>::erase[abi:cxx11](
                &this->region_group_vision_type_map_,
                *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 64));
            is_region_group_vision_changed = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/player_view_mgr.cpp",
              "delRegionGroupVisionTypeSet",
              1007);
            v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v35,
                    (const char (*)[30])"[REGION] no region_entity_id:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v3 + 48));
            v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v22,
                    (const char (*)[15])", vision_type:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      if ( *(char *)(((unsigned __int64)&this->is_region_group_vision_active_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_region_group_vision_active_);
      if ( this->is_region_group_vision_active_ && is_region_group_vision_changed )
      {
        std::enable_shared_from_this<PlayerViewMgr>::shared_from_this(&v33);
        PlayerChangeEyePropGuard::PlayerChangeEyePropGuard(
          (PlayerChangeEyePropGuard *const)(v3 + 160),
          (PlayerViewMgrPtr *)&v33,
          1);
        std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)&v33);
        PlayerViewMgr::calcFinalGroupVisionTypeSet(this);
        v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Scene::refreshPlayerInSightRangeEntitiesAndEnter(v25, v26);
        PlayerChangeEyePropGuard::~PlayerChangeEyePropGuard((PlayerChangeEyePropGuard *const)(v3 + 160));
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1025: range 0000000015C48008-0000000015C484C4
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerViewMgr::setRegionGroupVisionActive(PlayerViewMgr *const this, bool is_active)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Scene *v9; // r14
  Player *v10; // rax
  std::enable_shared_from_this<PlayerViewMgr> v11; // [rsp+10h] [rbp-160h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-150h] BYREF
  char v13[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 player_ptr:1035 64 16 14 scene_ptr:1041 96 120 33 player_change_eye_prop_guard:1047";
  *(_QWORD *)(v2 + 16) = PlayerViewMgr::setRegionGroupVisionActive;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_region_group_vision_active_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_region_group_vision_active_);
  if ( is_active != this->is_region_group_vision_active_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_region_group_vision_active_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_region_group_vision_active_, is_active, &this->is_region_group_vision_active_);
    this->is_region_group_vision_active_ = is_active;
    if ( !std::map<unsigned int,std::set<unsigned int>>::empty(&this->region_group_vision_type_map_) )
    {
      PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v2 + 32));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_view_mgr.cpp",
          "setRegionGroupVisionActive",
          1038);
        v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v12,
               (const char (*)[19])"player_ptr is null");
        v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->uid_);
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
      else
      {
        PlayerViewMgr::getScene((const PlayerViewMgr *const)(v2 + 64));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/player_view_mgr.cpp",
            "setRegionGroupVisionActive",
            1044);
          v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 &v12,
                 (const char (*)[18])"scene_ptr is null");
          v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->uid_);
          common::milog::MiLogStream::~MiLogStream(&v12);
        }
        else
        {
          std::enable_shared_from_this<PlayerViewMgr>::shared_from_this(&v11);
          PlayerChangeEyePropGuard::PlayerChangeEyePropGuard(
            (PlayerChangeEyePropGuard *const)(v2 + 96),
            (PlayerViewMgrPtr *)&v11,
            1);
          std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)&v11);
          PlayerViewMgr::calcFinalGroupVisionTypeSet(this);
          v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          Scene::refreshPlayerInSightRangeEntitiesAndEnter(v9, v10);
          PlayerChangeEyePropGuard::~PlayerChangeEyePropGuard((PlayerChangeEyePropGuard *const)(v2 + 96));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1053: range 0000000015C484C6-0000000015C48B6F
void __cdecl PlayerViewMgr::onTimer(PlayerViewMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Region *RelatedBigRegion; // r14
  unsigned __int64 v16; // rax
  unsigned __int8 (__fastcall *v17)(Region *, const Vector3 *); // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rbx
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t RegionEntityId; // ecx
  bool need_clear; // [rsp+1Fh] [rbp-B1h]
  common::milog::MiLogStream v36; // [rsp+20h] [rbp-B0h] BYREF
  char v37[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 player_ptr:1059 64 16 15 avatar_ptr:1067";
  *(_QWORD *)(v1 + 16) = PlayerViewMgr::onTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( std::operator!=<PlayerEyePoint>(&this->eye_point_ptr_, 0LL) )
  {
    need_clear = 0;
    PlayerViewMgr::getPlayer((const PlayerViewMgr *const)(v1 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_view_mgr.cpp",
        "onTimer",
        1062);
      v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v36,
             (const char (*)[19])"player_ptr is null");
      v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v4, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->uid_);
      common::milog::MiLogStream::~MiLogStream(&v36);
      need_clear = 1;
    }
    else
    {
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      Player::getCurAvatar((Player *const)(v1 + 64));
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/player_view_mgr.cpp",
          "onTimer",
          1070);
        v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v36,
               (const char (*)[19])"avatar_ptr is null");
        v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->uid_);
        common::milog::MiLogStream::~MiLogStream(&v36);
        need_clear = 1;
      }
      else
      {
        v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( !Entity::isOnScene((const Entity *const)v8) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/player_view_mgr.cpp",
            "onTimer",
            1077);
          v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                 &v36,
                 (const char (*)[26])"avatar_ptr is not onScene");
          v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->uid_);
          v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" avatar:");
          v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v12, v13);
          common::milog::MiLogStream::~MiLogStream(&v36);
          need_clear = 1;
        }
        else
        {
          v14 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
          RelatedBigRegion = PlayerEyePoint::getRelatedBigRegion(v14);
          if ( *(_BYTE *)(((unsigned __int64)RelatedBigRegion >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v16 = (unsigned __int64)(RelatedBigRegion->_vptr_DescribalBase + 31);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8();
          v17 = *(unsigned __int8 (__fastcall **)(Region *, const Vector3 *))v16;
          v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          Position = Entity::getPosition((const Entity *const)v18);
          if ( v17(RelatedBigRegion, Position) != 1 )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/player_view_mgr.cpp",
              "onTimer",
              1084);
            v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v36,
                    (const char (*)[32])"avatar_ptr is not in big region");
            v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->uid_);
            v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" avatar:");
            v24 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            v25 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v23, v24);
            v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v25,
                    (const char (*)[12])" eye_point:");
            v27 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
            common::milog::MiLogStream::operator<<<PlayerEyePoint,(PlayerEyePoint*)0>(v26, v27);
            common::milog::MiLogStream::~MiLogStream(&v36);
            need_clear = 1;
          }
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 64));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    if ( need_clear )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_view_mgr.cpp",
        "onTimer",
        1094);
      v28 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v36,
              (const char (*)[40])"eye_point_ptr_ check failed. clear it. ");
      v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->uid_);
      v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])" eye_point:");
      v32 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
      common::milog::MiLogStream::operator<<<PlayerEyePoint,(PlayerEyePoint*)0>(v31, v32);
      common::milog::MiLogStream::~MiLogStream(&v36);
      v33 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->eye_point_ptr_);
      RegionEntityId = PlayerEyePoint::getRegionEntityId(v33);
      PlayerViewMgr::clearEyePoint(this, RegionEntityId, 0);
    }
  }
  if ( v37 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

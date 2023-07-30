// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/room_scene.cpp

// Line 23: range 0000000015C64BBA-0000000015C64C62
int32_t __cdecl RoomScene::constructComps(RoomScene *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( !EcsBase<Scene,SceneCompBase,12u>::addComp<SceneRoomSightComp>((EcsBase<Scene,SceneCompBase,12> *const)&this->baseclass_0[24]) )
    return Scene::constructComps((Scene *const)this);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/room_scene.cpp",
    "constructComps",
    26);
  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
    &v2,
    (const char (*)[33])"addComp SceneRoomSightComp fails");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return -1;
};

// Line 33: range 0000000015C64C64-0000000015C6544C
int32_t __cdecl RoomScene::entityMoveRoom(RoomScene *const this, Entity *entity, uint32_t room_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  int32_t v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // rax
  Player *v18; // rax
  const Vector3 *Position; // rsi
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-1E0h] BYREF
  uint32_t prev_room; // [rsp+24h] [rbp-1DCh]
  SceneRoomSightComp *room_sight_comp; // [rsp+28h] [rbp-1D8h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-1D0h] BYREF
  char v27[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 16 13 entity_ptr:38 64 16 13 player_ptr:62 96 16 22 player_view_mgr_ptr:68 128 24 18 miss_e"
                        "ntity_vec:42 192 24 18 meet_entity_vec:43 256 24 15 miss_uid_vec:50 320 24 15 meet_uid_vec:51";
  *(_QWORD *)(v3 + 16) = RoomScene::entityMoveRoom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( !room_id )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/room_scene.cpp",
      "entityMoveRoom",
      36);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v26,
           (const char (*)[24])"room id: 0 pre room id:");
    val = Entity::getRoomId(entity);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" entity:");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v8, entity);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  toThisPtr<Entity>((Entity *)(v3 + 32));
  prev_room = Entity::getRoomId(entity);
  std::vector<std::shared_ptr<Entity>>::vector((std::vector<std::shared_ptr<Entity>> *const)(v3 + 128));
  std::vector<std::shared_ptr<Entity>>::vector((std::vector<std::shared_ptr<Entity>> *const)(v3 + 192));
  room_sight_comp = RoomScene::getRoomSightComp(this);
  if ( SceneRoomSightComp::entityMoveRoom(
         room_sight_comp,
         entity,
         room_id,
         (std::vector<std::shared_ptr<Entity>> *)(v3 + 128),
         (std::vector<std::shared_ptr<Entity>> *)(v3 + 192)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/room_scene.cpp",
      "entityMoveRoom",
      47);
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v26,
           (const char (*)[23])"entityMoveRoom failed ");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v9, entity);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v10 = -1;
  }
  else
  {
    Scene::getPlayerUidVecByViewEntity(
      (std::vector<unsigned int> *)(v3 + 256),
      (Scene *const)this,
      (const std::vector<std::shared_ptr<Entity>> *)(v3 + 128),
      0);
    Scene::getPlayerUidVecByViewEntity(
      (std::vector<unsigned int> *)(v3 + 320),
      (Scene *const)this,
      (const std::vector<std::shared_ptr<Entity>> *)(v3 + 192),
      0);
    Scene::entityLeavePlayersSightRange(
      (Scene *const)this,
      (const std::vector<unsigned int> *)(v3 + 256),
      (const EntityPtr *)(v3 + 32),
      &VisionContext::miss_context);
    Scene::entityEnterPlayersSightRange(
      (Scene *const)this,
      (const std::vector<unsigned int> *)(v3 + 320),
      (const EntityPtr *)(v3 + 32),
      &VisionContext::meet_context);
    if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Entity *))v11)(entity) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = (unsigned __int64)(entity->_vptr_DescribalBase + 19);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Entity *))v12)(v3 + 64, entity);
      if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      {
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::getUid(v13);
        Scene::findPlayerViewMgr((const Scene *const)(v3 + 96), (uint32_t)this);
        if ( std::operator==<PlayerViewMgr>((const std::shared_ptr<PlayerViewMgr> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/room_scene.cpp",
            "entityMoveRoom",
            71);
          v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Uid = Player::getUid(v14);
          common::milog::MiLogStream::operator()(&v26, "uid:%u view_mgr is null", Uid);
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
        else
        {
          v16 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( !PlayerViewMgr::isHasEyePointAsEye(v16) )
          {
            v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            Scene::entitiesLeavePlayerSightRange(
              (Scene *const)this,
              v17,
              (const std::vector<std::shared_ptr<Entity>> *)(v3 + 128),
              &VisionContext::miss_context);
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            Scene::entitiesEnterPlayerSightRange(
              (Scene *const)this,
              v18,
              (const std::vector<std::shared_ptr<Entity>> *)(v3 + 192),
              &VisionContext::meet_context);
          }
        }
        std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)(v3 + 96));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
    }
    Position = Entity::getPosition(entity);
    RoomScene::checkRoomRegion(this, Position, VISION_NONE, prev_room, entity);
    v10 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 320));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 256));
  }
  std::vector<std::shared_ptr<Entity>>::~vector((std::vector<std::shared_ptr<Entity>> *const)(v3 + 192));
  std::vector<std::shared_ptr<Entity>>::~vector((std::vector<std::shared_ptr<Entity>> *const)(v3 + 128));
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  result = v10;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 92: range 0000000015C6544E-0000000015C65C5C
void __fastcall RoomScene::checkRoomRegion(
        RoomScene *const this,
        const Vector3 *prev_pos,
        proto::VisionType vision_type,
        uint32_t prev_room,
        Entity *entity)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // rax
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  uint32_t EntityId; // eax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Region *v23; // rax
  unsigned __int64 v24; // rax
  void (__fastcall *v25)(unsigned __int64, SceneSightComp *, const Vector3 *, _QWORD); // r14
  uint32_t RoomId; // r15d
  const Vector3 *Position; // rax
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int8 (__fastcall *v30)(std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const Vector3 *); // r15
  const Vector3 *v31; // rax
  char v32; // al
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  Region *v37; // rax
  bool is_trigger_enter_leave_evt; // [rsp+33h] [rbp-16Dh]
  unsigned int val; // [rsp+34h] [rbp-16Ch] BYREF
  std::set<std::shared_ptr<Region>>::iterator __for_begin; // [rsp+38h] [rbp-168h] BYREF
  std::set<std::shared_ptr<Region>>::iterator __for_end; // [rsp+40h] [rbp-160h] BYREF
  SceneSightComp *sight_comp; // [rsp+48h] [rbp-158h]
  std::set<std::shared_ptr<Region>> *__for_range; // [rsp+50h] [rbp-150h]
  std::set<std::shared_ptr<Region>> *__for_range_0; // [rsp+58h] [rbp-148h]
  const std::shared_ptr<Region> *region_ptr_0; // [rsp+60h] [rbp-140h]
  const std::shared_ptr<Region> *region_ptr; // [rsp+68h] [rbp-138h]
  common::milog::MiLogStream v50; // [rsp+70h] [rbp-130h] BYREF
  char v51[272]; // [rsp+90h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 12 prev_room:91 64 48 19 prev_region_set:103 144 48 14 region_set:114";
  *(_QWORD *)(v5 + 16) = RoomScene::checkRoomRegion;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862723] = -219021312;
  v7[536862724] = 62194;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 48) = prev_room;
  common::milog::MiLogStream::create(
    &v50,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/room_scene.cpp",
    "checkRoomRegion",
    93);
  v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v50, (const char (*)[6])"room:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v9, (const char (*)[5])off_259BAA20);
  val = Entity::getRoomId(entity);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
  v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])" ");
  common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v12, entity);
  common::milog::MiLogStream::~MiLogStream(&v50);
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = (unsigned __int64)(entity->_vptr_DescribalBase + 28);
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    v13 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(Entity *))v13)(entity) == 1
    && Entity::getRoomId(entity) != *(_DWORD *)(v5 + 48) )
  {
    is_trigger_enter_leave_evt = Region::isTriggerEnterLeaveEvtByVisionType(vision_type);
    sight_comp = Scene::getSightComp((Scene *const)this);
    if ( *(_BYTE *)(((unsigned __int64)sight_comp >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = (unsigned __int64)(sight_comp->_vptr_SceneCompBase + 12);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, SceneSightComp *, const Vector3 *, _QWORD))v15)(
      v5 + 64,
      sight_comp,
      prev_pos,
      *(unsigned int *)(v5 + 48));
    __for_range = (std::set<std::shared_ptr<Region>> *)(v5 + 64);
    __for_begin._M_node = std::set<std::shared_ptr<Region>>::begin((const std::set<std::shared_ptr<Region>> *const)(v5 + 64))._M_node;
    __for_end._M_node = std::set<std::shared_ptr<Region>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      region_ptr = std::_Rb_tree_const_iterator<std::shared_ptr<Region>>::operator*(&__for_begin);
      if ( std::operator!=<Region>(region_ptr, 0LL) )
      {
        v16 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)region_ptr);
        EntityId = Entity::getEntityId(entity);
        if ( Region::isEntityInRegion(v16, EntityId) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/room_scene.cpp",
            "checkRoomRegion",
            108);
          v19 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v50,
                  (const char (*)[44])"[REGION] moveRoom entity is exiting region:");
          v20 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)region_ptr);
          v21 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v19, v20);
          v22 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v21, (const char (*)[2])" ");
          common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v22, entity);
          common::milog::MiLogStream::~MiLogStream(&v50);
          v23 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)region_ptr);
          Region::delEntity(v23, entity, is_trigger_enter_leave_evt, vision_type);
        }
      }
      std::_Rb_tree_const_iterator<std::shared_ptr<Region>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)sight_comp >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v24 = (unsigned __int64)(sight_comp->_vptr_SceneCompBase + 12);
    if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
      v24 = __asan_report_load8();
    v25 = *(void (__fastcall **)(unsigned __int64, SceneSightComp *, const Vector3 *, _QWORD))v24;
    RoomId = Entity::getRoomId(entity);
    Position = Entity::getPosition(entity);
    v25(v5 + 144, sight_comp, Position, RoomId);
    __for_range_0 = (std::set<std::shared_ptr<Region>> *)(v5 + 144);
    __for_begin._M_node = std::set<std::shared_ptr<Region>>::begin((const std::set<std::shared_ptr<Region>> *const)(v5 + 144))._M_node;
    __for_end._M_node = std::set<std::shared_ptr<Region>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      region_ptr_0 = std::_Rb_tree_const_iterator<std::shared_ptr<Region>>::operator*(&__for_begin);
      if ( !std::operator!=<Region>(region_ptr_0, 0LL) )
        goto LABEL_39;
      v28 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)region_ptr_0);
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v29 = (unsigned __int64)(v28->_vptr_DescribalBase + 31);
      if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        v29 = __asan_report_load8();
      v30 = *(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const Vector3 *))v29;
      v31 = Entity::getPosition(entity);
      if ( v30(v28, v31) )
        v32 = 1;
      else
LABEL_39:
        v32 = 0;
      if ( v32 )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/room_scene.cpp",
          "checkRoomRegion",
          120);
        v33 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v50,
                (const char (*)[45])"[REGION] moveRoom entity is entering region:");
        v34 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)region_ptr_0);
        v35 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v33, v34);
        v36 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v35, (const char (*)[2])" ");
        common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v36, entity);
        common::milog::MiLogStream::~MiLogStream(&v50);
        v37 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)region_ptr_0);
        Region::addEntity(v37, entity, is_trigger_enter_leave_evt, vision_type);
      }
      std::_Rb_tree_const_iterator<std::shared_ptr<Region>>::operator++(&__for_begin);
    }
    std::set<std::shared_ptr<Region>>::~set((std::set<std::shared_ptr<Region>> *const)(v5 + 144));
    std::set<std::shared_ptr<Region>>::~set((std::set<std::shared_ptr<Region>> *const)(v5 + 64));
  }
  if ( v51 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 128: range 0000000015C65C5E-0000000015C65D59
void __cdecl RoomScene::onTimer(RoomScene *const this, uint64_t now_ms)
{
  RoomScene *v2; // rdx
  unsigned __int64 v3; // rax
  uint32_t now; // [rsp+1Ch] [rbp-4h]

  Scene::onTimer((Scene *const)this, now_ms);
  now = now_ms / 0x3E8;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_location_notify_time_);
  }
  if ( now > this->last_location_notify_time_ + 5 )
  {
    this->last_location_notify_time_ = now;
    v2 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = *(_QWORD *)this->baseclass_0 + 488LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    (*(void (__fastcall **)(RoomScene *))v3)(v2);
  }
};

// Line 141: range 0000000015C65D5A-0000000015C66398
WeatherAreaPtr __cdecl RoomScene::findWeatherAreaByPosition(
        const RoomScene *const this,
        const Vector3 *a2,
        uint32_t prev_weather_area_id)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  const Vector3 *v7; // rdx
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  bool v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  void (__fastcall *v27)(const RoomScene *const, unsigned __int64, unsigned __int64, _QWORD); // r8
  WeatherAreaPtr result; // rax
  uint32_t prev_weather_area_ida; // [rsp+4h] [rbp-10Ch]
  unsigned int val; // [rsp+2Ch] [rbp-E4h] BYREF
  std::shared_ptr<Scene> __r; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-D0h] BYREF
  char v33[176]; // [rsp+60h] [rbp-B0h] BYREF

  prev_weather_area_ida = v3;
  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 12 12 position:159 64 16 13 world_ptr:142 96 16 13 scene_ptr:148";
  *(_QWORD *)(v4 + 16) = RoomScene::findWeatherAreaByPosition;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = *(_QWORD *)&a2->x + 56LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, const Vector3 *))v8)(v4 + 64, v7);
  if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/room_scene.cpp",
      "findWeatherAreaByPosition",
      145);
    v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v32,
           (const char (*)[30])"getOwnWorld fail, room_scene:");
    common::milog::MiLogStream::operator<<<RoomScene,(RoomScene*)0>(v9, (const RoomScene *)a2);
    common::milog::MiLogStream::~MiLogStream(&v32);
    std::shared_ptr<WeatherArea>::shared_ptr((std::shared_ptr<WeatherArea> *const)this, 0LL);
  }
  else
  {
    std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    World::getMainWorldScene((World *const)(v4 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/room_scene.cpp",
        "findWeatherAreaByPosition",
        151);
      v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v32,
              (const char (*)[36])"getMainWorldScene fail, room_scene:");
      v11 = common::milog::MiLogStream::operator<<<RoomScene,(RoomScene*)0>(v10, (const RoomScene *)a2);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" world_id:");
      v13 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      val = World::getWorldId(v13);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      std::shared_ptr<WeatherArea>::shared_ptr((std::shared_ptr<WeatherArea> *const)this, 0LL);
    }
    else
    {
      std::dynamic_pointer_cast<RoomScene,Scene>(&__r);
      v14 = std::operator!=<RoomScene>(0LL, (const std::shared_ptr<RoomScene> *)&__r);
      std::shared_ptr<RoomScene>::~shared_ptr((std::shared_ptr<RoomScene> *const)&__r);
      if ( v14 )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/room_scene.cpp",
          "findWeatherAreaByPosition",
          156);
        v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v32,
                (const char (*)[53])"MailWorldScene should not be room scene, room_scene:");
        v16 = common::milog::MiLogStream::operator<<<RoomScene,(RoomScene*)0>(v15, (const RoomScene *)a2);
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" world_scene:");
        v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v19 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v17, v18);
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" world_id:");
        v21 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        val = World::getWorldId(v21);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        common::milog::MiLogStream::~MiLogStream(&v32);
        std::shared_ptr<WeatherArea>::shared_ptr((std::shared_ptr<WeatherArea> *const)this, 0LL);
      }
      else
      {
        Vector3::Vector3((Vector3 *const)(v4 + 32), 0.0, 0.0, 0.0);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&__r);
        p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.json_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&a2[10] >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&a2[10] >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&a2[10]);
        }
        v23 = JsonConfigMgr::findRoomPositionInWorld(p_json_config_mgr, LODWORD(a2[10].x), (Vector3 *)(v4 + 32)) != 0;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
        if ( v23 )
        {
          std::shared_ptr<WeatherArea>::shared_ptr((std::shared_ptr<WeatherArea> *const)this, 0LL);
        }
        else
        {
          v24 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
            v24 = __asan_report_load8();
          v25 = *(_QWORD *)v24 + 376LL;
          v26 = *(unsigned __int8 *)((v25 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v26 )
            v24 = __asan_report_load8();
          v27 = *(void (__fastcall **)(const RoomScene *const, unsigned __int64, unsigned __int64, _QWORD))v25;
          if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            v24 = __asan_report_store16(this, v26);
          v27(this, v24, v4 + 32, prev_weather_area_ida);
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 64));
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<WeatherArea,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

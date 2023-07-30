// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_room_sight_comp.cpp

// Line 20: range 0000000015CED716-0000000015CED78E
void __cdecl SceneRoomSightComp::SceneRoomSightComp(SceneRoomSightComp *const this, Scene *scene)
{
  int (**v2)(...); // rdx

  ZN14SceneSightCompCI213SceneCompBaseER5Scene(this, scene);
  v2 = (int (**)(...))(&`vtable for'SceneRoomSightComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::unordered_map(&this->room_entity_wtr_map_);
  std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::unordered_map(&this->room_region_wtr_map_);
};

// Line 27: range 0000000015CED790-0000000015CEDB47
int32_t __cdecl SceneRoomSightComp::placeEntity(
        SceneRoomSightComp *const this,
        Entity *entity,
        std::vector<std::shared_ptr<Entity>> *entity_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rdx
  unsigned __int64 v7; // rax
  std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > *v8; // r12
  std::shared_ptr<Entity> v9; // rax
  int32_t result; // eax
  unsigned __int64 v11; // rax
  std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::mapped_type *entity_set; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Entity> __args_0; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 room_id:33";
  *(_QWORD *)(v3 + 16) = SceneRoomSightComp::placeEntity;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( !Entity::getRoomId(entity) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/scene/scene_room_sight_comp.cpp",
      "placeEntity",
      30);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v15,
           (const char (*)[30])"force lobby_room_id, entity: ");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, entity);
    common::milog::MiLogStream::~MiLogStream(&v15);
    Entity::setRoomId(entity, 1u);
  }
  *(_DWORD *)(v3 + 32) = Entity::getRoomId(entity);
  Entity::setOnGrid(entity, 1);
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Entity *))v7)(entity) == 5 )
  {
    v8 = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::operator[](
           &this->room_region_wtr_map_,
           (const std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::key_type *)(v3 + 32));
    v9 = toThisPtr<Entity>((Entity *)&__args_0);
    std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::emplace<std::shared_ptr<Entity>>(
      v8,
      &__args_0,
      (std::shared_ptr<Entity> *)v9._M_refcount._M_pi);
    std::shared_ptr<Entity>::~shared_ptr(&__args_0);
    result = 0;
  }
  else
  {
    entity_set = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::operator[](
                   &this->room_entity_wtr_map_,
                   (const std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::key_type *)(v3 + 32));
    toThisPtr<Entity>((Entity *)&__args_0);
    std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::emplace<std::shared_ptr<Entity>>(
      entity_set,
      &__args_0,
      &__args_0);
    std::shared_ptr<Entity>::~shared_ptr(&__args_0);
    if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Entity *))v11)(entity) == 1 )
      SceneRoomSightComp::getRoomEntityVec(this, entity, *(_DWORD *)(v3 + 32), entity_vec);
    else
      SceneRoomSightComp::getRoomAvatarVec(this, *(_DWORD *)(v3 + 32), entity_vec);
    result = 0;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 58: range 0000000015CEDB48-0000000015CEE048
int32_t __cdecl SceneRoomSightComp::removeEntity(SceneRoomSightComp *const this, Entity *entity)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  unsigned __int64 v6; // rax
  std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::mapped_type *entity_set; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Entity> __r; // [rsp+20h] [rbp-B0h] BYREF
  std::weak_ptr<Entity> __x; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 room_id:64";
  *(_QWORD *)(v2 + 16) = SceneRoomSightComp::removeEntity;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( !Entity::getRoomId(entity) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/scene/scene_room_sight_comp.cpp",
      "removeEntity",
      61);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v19,
           (const char (*)[30])"force lobby_room_id, entity: ");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v5, entity);
    common::milog::MiLogStream::~MiLogStream(&v19);
    Entity::setRoomId(entity, 1u);
  }
  *(_DWORD *)(v2 + 32) = Entity::getRoomId(entity);
  Entity::setOnGrid(entity, 0);
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Entity *))v6)(entity) == 5 )
  {
    v7 = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::operator[](
           &this->room_region_wtr_map_,
           (const std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::key_type *)(v2 + 32));
    toThisPtr<Entity>((Entity *)&__r);
    std::weak_ptr<Entity>::weak_ptr<Entity,void>(&__x, &__r);
    LOBYTE(v7) = std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::erase(
                   v7,
                   &__x) == 0;
    std::weak_ptr<Entity>::~weak_ptr(&__x);
    std::shared_ptr<Entity>::~shared_ptr(&__r);
    if ( (_BYTE)v7 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_room_sight_comp.cpp",
        "removeEntity",
        72);
      v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v19, (const char (*)[7])"room: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              v9,
              (const char (*)[37])" removeEntity, but not find region: ");
      common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v10, entity);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    result = 0;
  }
  else
  {
    entity_set = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::operator[](
                   &this->room_entity_wtr_map_,
                   (const std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::key_type *)(v2 + 32));
    toThisPtr<Entity>((Entity *)&__r);
    std::weak_ptr<Entity>::weak_ptr<Entity,void>(&__x, &__r);
    v12 = std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::erase(
            entity_set,
            &__x) == 0;
    std::weak_ptr<Entity>::~weak_ptr(&__x);
    std::shared_ptr<Entity>::~shared_ptr(&__r);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_room_sight_comp.cpp",
        "removeEntity",
        80);
      v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v19, (const char (*)[7])"room: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              v14,
              (const char (*)[37])" removeEntity, but not find entity: ");
      common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v15, entity);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    result = 0;
  }
  if ( v20 == (char *)v2 )
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

// Line 88: range 0000000015CEE04A-0000000015CEE447
void __fastcall SceneRoomSightComp::getRoomEntityVec(
        SceneRoomSightComp *const this,
        Entity *entity,
        uint32_t room_id,
        std::vector<std::shared_ptr<Entity>> *entity_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Entity *v7; // rax
  std::shared_ptr<Entity> *M_current; // r15
  std::shared_ptr<Entity> *v9; // r14
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false> __y; // [rsp+38h] [rbp-128h] BYREF
  std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > *entity_set; // [rsp+40h] [rbp-120h]
  std::vector<std::shared_ptr<Entity>> *surround_vec; // [rsp+48h] [rbp-118h]
  char v15[272]; // [rsp+50h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 10 room_id:87 48 8 7 iter:89 80 8 14 entity_iter:96 112 16 13 entity_ptr:98 144 48 10 visitor:95";
  *(_QWORD *)(v4 + 16) = SceneRoomSightComp::getRoomEntityVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 32) = room_id;
  *(std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::iterator *)(v4 + 48) = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::find(&this->room_entity_wtr_map_, (const std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::key_type *)(v4 + 32));
  __y._M_cur = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::end(&this->room_entity_wtr_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false> *)(v4 + 48),
          &__y) )
  {
    entity_set = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false,false> *const)(v4 + 48))->second;
    toThisPtr<Entity>((Entity *)(v4 + 112));
    ZN13EntityVisitorCI27VisitorESt10shared_ptrI6EntityE((EntityVisitor *const)(v4 + 144), (EntityPtr *)(v4 + 112));
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 112));
    *(std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >::iterator *)(v4 + 80) = std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::begin(entity_set);
    while ( 1 )
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false>::__node_type *)std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::end(entity_set)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::weak_ptr<Entity> >::_Self *)(v4 + 80),
              (const std::_Rb_tree_const_iterator<std::weak_ptr<Entity> >::_Self *)&__y) )
        break;
      std::_Rb_tree_const_iterator<std::weak_ptr<Entity>>::operator*((const std::_Rb_tree_const_iterator<std::weak_ptr<Entity> > *const)(v4 + 80));
      std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v4 + 112));
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v4 + 112), 0LL) )
      {
        std::_Rb_tree_const_iterator<std::weak_ptr<Entity>>::operator++((std::_Rb_tree_const_iterator<std::weak_ptr<Entity> > *const)(v4 + 80));
        v7 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        Entity::accept(v7, (Visitor *)(v4 + 144));
      }
      else
      {
        *(std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >::iterator *)(v4 + 80) = std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::erase[abi:cxx11](entity_set, *(std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >::const_iterator *)(v4 + 80));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 112));
    }
    surround_vec = Visitor::getEntityVec((Visitor *const)(v4 + 144));
    M_current = std::vector<std::shared_ptr<Entity>>::end(surround_vec)._M_current;
    v9 = std::vector<std::shared_ptr<Entity>>::begin(surround_vec)._M_current;
    *(std::vector<std::shared_ptr<Entity>>::iterator *)(v4 + 80) = std::vector<std::shared_ptr<Entity>>::end(entity_vec);
    __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> const*,std::vector<std::shared_ptr<Entity>>>::__normal_iterator<std::shared_ptr<Entity>*>(
      (__gnu_cxx::__normal_iterator<const std::shared_ptr<Entity>*,std::vector<std::shared_ptr<Entity>> > *const)&__y,
      (const __gnu_cxx::__normal_iterator<std::shared_ptr<Entity>*,std::vector<std::shared_ptr<Entity>> > *)(v4 + 80));
    std::vector<std::shared_ptr<Entity>>::insert<__gnu_cxx::__normal_iterator<std::shared_ptr<Entity>*,std::vector<std::shared_ptr<Entity>>>,void>(
      entity_vec,
      (std::vector<std::shared_ptr<Entity>>::const_iterator)__y._M_cur,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<Entity>*,std::vector<std::shared_ptr<Entity>> >)v9,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<Entity>*,std::vector<std::shared_ptr<Entity>> >)M_current);
    EntityVisitor::~EntityVisitor((EntityVisitor *const)(v4 + 144));
  }
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 114: range 0000000015CEE61E-0000000015CEE700
void __cdecl SceneRoomSightComp::getRoomAvatarVec(
        SceneRoomSightComp *const this,
        uint32_t room_id,
        std::vector<std::shared_ptr<Entity>> *entity_vec)
{
  std::vector<std::shared_ptr<Entity>>::size_type v3; // rdx
  Scene *scene; // rbx
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-40h] BYREF
  SceneRoomSightComp::getRoomAvatarVec::<lambda(Player&)> v7; // 0:rsi.8,8:edx.4

  v3 = std::vector<std::shared_ptr<Entity>>::size(entity_vec) + 4;
  std::vector<std::shared_ptr<Entity>>::reserve(entity_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  v7.__room_id = room_id;
  v7.__entity_vec = entity_vec;
  std::function<ForeachPolicy ()(Player &)>::function<SceneRoomSightComp::getRoomAvatarVec(unsigned int,std::vector<std::shared_ptr<Entity>> &)::{lambda(Player &)#1},void,void>(
    &p_func,
    v7);
  Scene::foreachPlayer(scene, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
};

// Line 116: range 0000000015CEE448-0000000015CEE61D
ForeachPolicy __cdecl SceneRoomSightComp::getRoomAvatarVec(unsigned int,std::vector<std::shared_ptr<Entity>> &)::{lambda(Player &)#1}::operator()(
        const SceneRoomSightComp::getRoomAvatarVec::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t RoomId; // ecx
  char v8; // al
  std::vector<std::shared_ptr<Entity>> *entity_vec; // r14
  std::shared_ptr<Avatar> *v10; // rax
  std::shared_ptr<Avatar> *v11; // rdx
  ForeachPolicy result; // eax
  char v13[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:118";
  *(_QWORD *)(v2 + 16) = SceneRoomSightComp::getRoomAvatarVec(unsigned int,std::vector<std::shared_ptr<Entity>> &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    goto LABEL_10;
  v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( !Entity::isOnScene((const Entity *const)v5) )
    goto LABEL_10;
  v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  RoomId = Entity::getRoomId((const Entity *const)v6);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( RoomId == __closure->__room_id )
    v8 = 1;
  else
LABEL_10:
    v8 = 0;
  if ( v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    entity_vec = __closure->__entity_vec;
    v10 = std::move<std::shared_ptr<Avatar> &>((std::shared_ptr<Avatar> *)(v2 + 32));
    std::vector<std::shared_ptr<Entity>>::emplace_back<std::shared_ptr<Avatar>>(entity_vec, v10, v11);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v13 == (char *)v2 )
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

// Line 128: range 0000000015CEE702-0000000015CEE720
int32_t __cdecl SceneRoomSightComp::entityMoveTo(
        SceneRoomSightComp *const this,
        Entity *entity,
        const Vector3 *dest_pos,
        std::vector<std::shared_ptr<Entity>> *miss_entity_vec,
        std::vector<std::shared_ptr<Entity>> *meet_entity_vec)
{
  return 0;
};

// Line 136: range 0000000015CEE722-0000000015CEE75C
void __cdecl SceneRoomSightComp::visitGridsInSight(SceneRoomSightComp *const this, Entity *entity, Visitor *visitor)
{
  uint32_t RoomId; // ecx

  RoomId = Entity::getRoomId(entity);
  SceneRoomSightComp::innerVisitGridsInSight(this, RoomId, visitor);
};

// Line 142: range 0000000015CEE75E-0000000015CEE9F3
void __fastcall SceneRoomSightComp::innerVisitGridsInSight(
        SceneRoomSightComp *const this,
        uint32_t room_id,
        Visitor *visitor)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Entity *v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false> __y; // [rsp+20h] [rbp-D0h] BYREF
  std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > *entity_set; // [rsp+28h] [rbp-C8h]
  char v10[192]; // [rsp+30h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 room_id:141 64 8 8 iter:143 96 8 8 iter:149 128 16 14 entity_ptr:151";
  *(_QWORD *)(v3 + 16) = SceneRoomSightComp::innerVisitGridsInSight;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = room_id;
  *(std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::find(&this->room_entity_wtr_map_, (const std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::end(&this->room_entity_wtr_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false> *)(v3 + 64),
          &__y) )
  {
    entity_set = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false,false> *const)(v3 + 64))->second;
    *(std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >::iterator *)(v3 + 96) = std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::begin(entity_set);
    while ( 1 )
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false>::__node_type *)std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::end(entity_set)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::weak_ptr<Entity> >::_Self *)(v3 + 96),
              (const std::_Rb_tree_const_iterator<std::weak_ptr<Entity> >::_Self *)&__y) )
        break;
      std::_Rb_tree_const_iterator<std::weak_ptr<Entity>>::operator*((const std::_Rb_tree_const_iterator<std::weak_ptr<Entity> > *const)(v3 + 96));
      std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 128));
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v3 + 128), 0LL) )
      {
        std::_Rb_tree_const_iterator<std::weak_ptr<Entity>>::operator++((std::_Rb_tree_const_iterator<std::weak_ptr<Entity> > *const)(v3 + 96));
        v6 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        Entity::accept(v6, visitor);
      }
      else
      {
        *(std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >::iterator *)(v3 + 96) = std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::erase[abi:cxx11](entity_set, *(std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >::const_iterator *)(v3 + 96));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 128));
    }
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 166: range 0000000015CEE9F4-0000000015CEEA1E
bool __cdecl SceneRoomSightComp::isEntityMoveGrid(
        SceneRoomSightComp *const this,
        Entity *entity,
        const Vector3 *prev_pos,
        uint32_t prev_room)
{
  return prev_room != Entity::getRoomId(entity);
};

// Line 172: range 0000000015CEEA20-0000000015CEEA9D
std::set<std::shared_ptr<Region>> *__cdecl SceneRoomSightComp::findPossibleRegionSet(
        std::set<std::shared_ptr<Region>> *retstr,
        SceneRoomSightComp *const this,
        const Vector3 *pos,
        uint32_t room_id)
{
  std::set<std::shared_ptr<Region>>::set(retstr);
  SceneRoomSightComp::innerFindPossibleRegonSet(this, room_id, retstr);
  if ( room_id )
    SceneRoomSightComp::innerFindPossibleRegonSet(this, 0, retstr);
  return retstr;
};

// Line 184: range 0000000015CEEA9E-0000000015CEEE11
void __fastcall SceneRoomSightComp::innerFindPossibleRegonSet(
        SceneRoomSightComp *const this,
        uint32_t room_id,
        std::set<std::shared_ptr<Region>> *region_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::shared_ptr<Region> *v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false> __y; // [rsp+20h] [rbp-120h] BYREF
  std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > *entity_set; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-110h] BYREF
  char v11[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 11 room_id:183 64 8 8 iter:185 96 8 15 entity_iter:189 128 16 14 entity_ptr:191 160 16 14 region_ptr:199";
  *(_QWORD *)(v3 + 16) = SceneRoomSightComp::innerFindPossibleRegonSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 48) = room_id;
  *(std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::find(&this->room_region_wtr_map_, (const std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::end(&this->room_region_wtr_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false> *)(v3 + 64),
         &__y) )
  {
    entity_set = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false,false> *const)(v3 + 64))->second;
    *(std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >::iterator *)(v3 + 96) = std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::begin(entity_set);
    while ( 1 )
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > >,false>::__node_type *)std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::end(entity_set)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::weak_ptr<Entity> >::_Self *)(v3 + 96),
              (const std::_Rb_tree_const_iterator<std::weak_ptr<Entity> >::_Self *)&__y) )
        break;
      std::_Rb_tree_const_iterator<std::weak_ptr<Entity>>::operator*((const std::_Rb_tree_const_iterator<std::weak_ptr<Entity> > *const)(v3 + 96));
      std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 128));
      if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v3 + 128)) )
      {
        *(std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >::iterator *)(v3 + 96) = std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::erase[abi:cxx11](entity_set, *(std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >::const_iterator *)(v3 + 96));
      }
      else
      {
        std::_Rb_tree_const_iterator<std::weak_ptr<Entity>>::operator++((std::_Rb_tree_const_iterator<std::weak_ptr<Entity> > *const)(v3 + 96));
        std::dynamic_pointer_cast<Region,Entity>((const std::shared_ptr<Entity> *)(v3 + 160));
        if ( std::operator!=<Region>((const std::shared_ptr<Region> *)(v3 + 160), 0LL) )
        {
          v6 = std::move<std::shared_ptr<Region> &>((std::shared_ptr<Region> *)(v3 + 160));
          std::set<std::shared_ptr<Region>>::emplace<std::shared_ptr<Region>>(region_set, v6, v6);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v10,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_room_sight_comp.cpp",
            "innerFindPossibleRegonSet",
            206);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v10,
            (const char (*)[34])"dynamic_pointer_cast region fails");
          common::milog::MiLogStream::~MiLogStream(&v10);
        }
        std::shared_ptr<Region>::~shared_ptr((std::shared_ptr<Region> *const)(v3 + 160));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 128));
    }
  }
  if ( v11 == (char *)v3 )
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
};

// Line 213: range 0000000015CEEE12-0000000015CEF1C7
__int64 __fastcall SceneRoomSightComp::entityMoveRoom(
        SceneRoomSightComp *const this,
        Entity *entity,
        uint32_t dest_room_id,
        std::vector<std::shared_ptr<Entity>> *miss_entity_vec,
        std::vector<std::shared_ptr<Entity>> *meet_entity_vec)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > > *v12; // rax
  unsigned __int64 v13; // rax
  __int64 result; // rax
  std::weak_ptr<Entity> __x; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 15 cur_room_id:214 48 4 16 dest_room_id:212 64 16 14 entity_ptr:221";
  *(_QWORD *)(v5 + 16) = SceneRoomSightComp::entityMoveRoom;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = dest_room_id;
  *(_DWORD *)(v5 + 32) = Entity::getRoomId(entity);
  if ( *(_DWORD *)(v5 + 32) != *(_DWORD *)(v5 + 48) )
  {
    toThisPtr<Entity>((Entity *)(v5 + 64));
    v8 = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::operator[](
           &this->room_entity_wtr_map_,
           (const std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::key_type *)(v5 + 32));
    std::weak_ptr<Entity>::weak_ptr<Entity,void>(&__x, (const std::shared_ptr<Entity> *)(v5 + 64));
    LOBYTE(v8) = std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::erase(
                   v8,
                   &__x) == 0;
    std::weak_ptr<Entity>::~weak_ptr(&__x);
    if ( (_BYTE)v8 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_room_sight_comp.cpp",
        "entityMoveRoom",
        224);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v19, (const char (*)[9])"entity: ");
      v10 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v9, entity);
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v10,
              (const char (*)[22])" not in cur_room_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    v12 = std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::operator[](
            &this->room_entity_wtr_map_,
            (const std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity> >,std::allocator<std::weak_ptr<Entity> > >>::key_type *)(v5 + 48));
    std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::emplace<std::shared_ptr<Entity> &>(
      v12,
      (std::shared_ptr<Entity> *)(v5 + 64),
      (std::shared_ptr<Entity> *)v12);
    Entity::setRoomId(entity, *(_DWORD *)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Entity *))v13)(entity) == 1 )
    {
      SceneRoomSightComp::getRoomEntityVec(this, entity, *(_DWORD *)(v5 + 32), miss_entity_vec);
      SceneRoomSightComp::getRoomEntityVec(this, entity, *(_DWORD *)(v5 + 48), meet_entity_vec);
    }
    else
    {
      SceneRoomSightComp::getRoomAvatarVec(this, *(_DWORD *)(v5 + 32), miss_entity_vec);
      SceneRoomSightComp::getRoomAvatarVec(this, *(_DWORD *)(v5 + 48), meet_entity_vec);
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v5 + 64));
  }
  result = 0LL;
  if ( v20 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/scene.cpp

// Line 22: range 000000000048336B-00000000004833FE
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Scene *scene)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  const Robot *Robot; // rax
  const RobotConf *Conf; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int val[5]; // [rsp+1Ch] [rbp-14h] BYREF

  v2 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(stream, (const char (*)[11])"[scene_id:");
  val[0] = Scene::getSceneId(scene);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, val);
  v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])",uid:");
  Robot = Scene::getRobot(scene);
  Conf = Robot::getConf(Robot);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &Conf->uid);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])"]");
  return stream;
};

// Line 29: range 0000000000483400-00000000004834F5
const data::SceneExcelConfig *__cdecl Scene::getConfig(const Scene *const this)
{
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  p_scene_config_mgr = &Config::config_ptr->design_config.txt_config_mgr.scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, this->scene_id_);
  if ( scene_config_ptr )
    return scene_config_ptr;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene.cpp",
    "getConfig",
    33);
  v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v5,
         (const char (*)[38])"findSceneExcelConfig fails, scene_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->scene_id_);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0LL;
};

// Line 41: range 00000000004834F6-00000000004835E4
data::SceneType __cdecl Scene::getSceneType(const Scene *const this)
{
  common::milog::MiLogStream *v1; // rdx
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  scene_config_ptr = Scene::getConfig(this);
  if ( scene_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&scene_config_ptr->type);
    }
    return scene_config_ptr->type;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "getSceneType",
      45);
    v1 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v4,
           (const char (*)[27])"getConfig fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->scene_id_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 0;
  }
};

// Line 52: range 00000000004835E6-000000000048380B
void __cdecl Scene::registerScriptFunc(lua_State_0 *lua_state_ptr)
{
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v1; // rax
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v2; // rax
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v3; // rax
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v4; // rax
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v5; // rax
  boost::arg<2> v6; // di
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v7; // rbx
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v8; // rax
  luabind::scope v9; // [rsp+68h] [rbp-68h] BYREF
  luabind::module_ v10; // [rsp+70h] [rbp-60h] BYREF
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> v11; // [rsp+80h] [rbp-50h] BYREF

  v10 = luabind::module(lua_state_ptr, 0LL);
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    &v11,
    "Scene");
  v1 = luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Scene::*)(void)const>(
         &v11,
         "getSceneId",
         (unsigned int (*)(const Scene *))Scene::getSceneId);
  v2 = luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Scene::*)(void)>(
         v1,
         "getSceneArea",
         (int (*)(Scene *))Scene::getSceneArea);
  v3 = luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Scene::*)(unsigned int,unsigned int)>(
         v2,
         "levelUpCity",
         (int (*)(Scene *, unsigned int, unsigned int))Scene::levelUpCity);
  v4 = luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<std::shared_ptr<Monster> (Scene::*)(unsigned int,Entity const&)>(
         v3,
         "forceGetMonster",
         (std::shared_ptr<Monster> (*)(Scene *, unsigned int, const Entity *))Scene::forceGetMonster);
  v5 = luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<std::shared_ptr<Monster> (Scene::*)(unsigned int)>(
         v4,
         "findMonster",
         (std::shared_ptr<Monster> (*)(Scene *, unsigned int))Scene::findMonster);
  v6.gap0[0] = (char)v5;
  v7 = luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<std::shared_ptr<Monster> (Scene::*)(unsigned int)>(
         v5,
         "findMonsterByEntityId",
         (std::shared_ptr<Monster> (*)(Scene *, unsigned int))Scene::findMonsterByEntityId);
  luabind::pure_out_value<2>(v6);
  v8 = luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Scene::*)(std::vector<unsigned int> &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>,luabind::detail::null_type>>(
         v7,
         "getMonsterEntityIdVec",
         (void (*)(Scene *, std::vector<unsigned int> *))Scene::getMonsterEntityIdVec,
         0);
  luabind::scope::scope(&v9, v8);
  luabind::module_::operator[](&v10, &v9);
  luabind::scope::~scope(&v9);
  luabind::class_<Scene,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_(&v11);
};

// Line 67: range 000000000048380C-0000000000483D76
EntityPtr __cdecl createEntity(Player *player, const proto::SceneEntityInfo *entity_info)
{
  const proto::SceneEntityInfo *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  EntityPtr result; // rax
  const proto::SceneEntityInfo *entity_infoa; // [rsp+8h] [rbp-118h]
  const proto::SceneAvatarInfo *avatar_info; // [rsp+20h] [rbp-100h]
  std::shared_ptr<Avatar> __r; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<Monster> v14; // [rsp+40h] [rbp-E0h] BYREF
  std::shared_ptr<Avatar> p_cur_avatar_ptr__out; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+80h] [rbp-A0h] BYREF

  entity_infoa = v2;
  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 entity_type:68 64 16 13 entity_ptr:69 96 16 13 avatar_ptr:76";
  *(_QWORD *)(v3 + 16) = createEntity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::SceneEntityInfo::entity_type(entity_infoa);
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  v6 = *(_DWORD *)(v3 + 48);
  if ( v6 == 4 )
  {
    std::make_shared<Gadget>();
    std::shared_ptr<Entity>::operator=<Gadget>(
      (std::shared_ptr<Entity> *const)(v3 + 64),
      (std::shared_ptr<Gadget> *)&p_cur_avatar_ptr__out);
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&p_cur_avatar_ptr__out);
  }
  else
  {
    if ( v6 > 4 )
    {
LABEL_17:
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene.cpp",
        "createEntity",
        98);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v16,
             (const char (*)[27])"entity_type not supported:");
      common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(
        v7,
        (const proto::ProtEntityType *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)player, 0LL);
      goto LABEL_27;
    }
    switch ( v6 )
    {
      case 3:
        std::make_shared<Npc>();
        std::shared_ptr<Entity>::operator=<Npc>(
          (std::shared_ptr<Entity> *const)(v3 + 64),
          (std::shared_ptr<Npc> *)(v3 + 96));
        std::shared_ptr<Npc>::~shared_ptr((std::shared_ptr<Npc> *const)(v3 + 96));
        break;
      case 1:
        avatar_info = proto::SceneEntityInfo::avatar(entity_infoa);
        proto::SceneAvatarInfo::guid(avatar_info);
        Player::findAvatarByGuid((Player *const)(v3 + 96), (uint64_t)entity_info);
        if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
        {
          std::shared_ptr<Entity>::operator=<Avatar>(
            (std::shared_ptr<Entity> *const)(v3 + 64),
            (const std::shared_ptr<Avatar> *)(v3 + 96));
          std::shared_ptr<Avatar>::shared_ptr(&p_cur_avatar_ptr__out, (const std::shared_ptr<Avatar> *)(v3 + 96));
          Player::setCurAvatar((Player *const)entity_info, &p_cur_avatar_ptr__out);
          std::shared_ptr<Avatar>::~shared_ptr(&p_cur_avatar_ptr__out);
        }
        else
        {
          std::make_shared<Avatar>();
          std::shared_ptr<Entity>::operator=<Avatar>((std::shared_ptr<Entity> *const)(v3 + 64), &__r);
          std::shared_ptr<Avatar>::~shared_ptr(&__r);
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
        break;
      case 2:
        std::make_shared<Monster>();
        std::shared_ptr<Entity>::operator=<Monster>((std::shared_ptr<Entity> *const)(v3 + 64), &v14);
        std::shared_ptr<Monster>::~shared_ptr(&v14);
        break;
      default:
        goto LABEL_17;
    }
  }
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "createEntity",
      103);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v16, (const char (*)[19])"createEntity fails");
    common::milog::MiLogStream::~MiLogStream(&v16);
    std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)player, 0LL);
  }
  else
  {
    v8 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8);
    v9 = *(_QWORD *)v8 + 32LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)v8 + 32LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, const proto::SceneEntityInfo *))v9)(v8, entity_infoa) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene.cpp",
        "createEntity",
        108);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v16, (const char (*)[16])"fromProto fails");
      common::milog::MiLogStream::~MiLogStream(&v16);
      std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)player, 0LL);
    }
    else
    {
      std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)player, (std::shared_ptr<Entity> *)(v3 + 64));
    }
  }
LABEL_27:
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Entity,(__gnu_cxx::_Lock_policy)2>::element_type *)player;
  return result;
};

// Line 115: range 0000000000483D78-00000000004843E6
void __cdecl Scene::onEntityAppear(Scene *const this, proto::SceneEntityAppearNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int v6; // eax
  Player *Player; // rax
  Entity *v8; // rdx
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int *v10; // rcx
  std::shared_ptr<Entity> *v11; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity> >,false,false>,bool> v12; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // eax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  EntityGroupIdConfigIdUnionKey *v24; // rcx
  unsigned int *v25; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >,bool> v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  uint32_t v36; // r14d
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::mapped_type *v37; // rax
  uint32_t *v38; // rdx
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  unsigned int ConfigId; // [rsp+18h] [rbp-E8h] BYREF
  unsigned int EntityId; // [rsp+1Ch] [rbp-E4h] BYREF
  uint32_t cur_avatar_entity_id; // [rsp+20h] [rbp-E0h]
  int i; // [rsp+24h] [rbp-DCh]
  const proto::SceneEntityInfo *entity_info; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v45; // [rsp+30h] [rbp-D0h] BYREF
  char v46[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 32 group_id_config_id_union_key:135 64 16 18 cur_avatar_ptr:117 96 16 14 entity_ptr:123";
  *(_QWORD *)(v2 + 16) = Scene::onEntityAppear;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  cur_avatar_entity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->robot_);
  Robot::getPlayer(this->robot_);
  Player::getCurAvatar((const Player *const)(v2 + 64));
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    cur_avatar_entity_id = Entity::getEntityId(v5);
  }
  for ( i = 0; ; ++i )
  {
    v6 = proto::SceneEntityAppearNotify::entity_list_size(notify);
    if ( i >= v6 )
      break;
    entity_info = proto::SceneEntityAppearNotify::entity_list(notify, i);
    if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->robot_);
    Player = Robot::getPlayer(this->robot_);
    createEntity((Player *)(v2 + 96), (const proto::SceneEntityInfo *)Player);
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene.cpp",
        "onEntityAppear",
        126);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v45, (const char (*)[19])"createEntity fails");
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
    else
    {
      v8 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Entity::setScene(v8, this);
      v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      EntityId = Entity::getEntityId(v9);
      v12 = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::emplace<unsigned int,std::shared_ptr<Entity>&>(
              &this->entity_map_,
              &EntityId,
              (std::shared_ptr<Entity> *)(v2 + 96),
              v10,
              v11);
      if ( !v12.second )
      {
        v13 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v14 = Entity::getEntityId(v13);
        if ( cur_avatar_entity_id != v14 )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene.cpp",
            "onEntityAppear",
            131);
          v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  &v45,
                  (const char (*)[17])"duplicate entity");
          v17 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          operator<<(v16, v17);
          common::milog::MiLogStream::~MiLogStream(&v45);
        }
      }
      v18 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( Entity::getGroupId(v18) )
      {
        v19 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( Entity::getConfigId(v19) )
        {
          *(_DWORD *)(v2 + 32) = 0;
          *(_DWORD *)(v2 + 36) = 0;
          v21 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          *(_DWORD *)(v2 + 32) = Entity::getGroupId(v21);
          v22 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          *(_DWORD *)(v2 + 36) = Entity::getConfigId(v22);
          v23 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          EntityId = Entity::getEntityId(v23);
          v26 = std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::emplace<EntityGroupIdConfigIdUnionKey&,unsigned int>(
                  &this->entity_group_id_config_id_key_map_,
                  (EntityGroupIdConfigIdUnionKey *)(v2 + 32),
                  &EntityId,
                  v24,
                  v25);
          if ( !v26.second )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene.cpp",
              "onEntityAppear",
              140);
            v27 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    &v45,
                    (const char (*)[57])"duplicate entity group_id_config_id_union_key. group_id:");
            v28 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            val = Entity::getGroupId(v28);
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
            v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v29,
                    (const char (*)[12])" config_id:");
            v31 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            ConfigId = Entity::getConfigId(v31);
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &ConfigId);
            v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v32,
                    (const char (*)[12])" entity_id:");
            v34 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            EntityId = Entity::getEntityId(v34);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &EntityId);
            common::milog::MiLogStream::~MiLogStream(&v45);
          }
          v35 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v36 = Entity::getEntityId(v35);
          v37 = std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::operator[](
                  &this->no_del_entity_group_id_config_id_key_map_,
                  (const std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::key_type *)(v2 + 32));
          v38 = v37;
          if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v37);
          }
          *v38 = v36;
        }
      }
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 96));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  if ( v46 == (char *)v2 )
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
};

// Line 149: range 00000000004843E8-0000000000484945
void __cdecl Scene::onEntityDisappear(Scene *const this, proto::SceneEntityDisappearNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  common::milog::MiLogStream *v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity> >,false,false>::pointer v7; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  unsigned int GroupId; // [rsp+10h] [rbp-100h] BYREF
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  unsigned int ConfigId; // [rsp+18h] [rbp-F8h] BYREF
  int i; // [rsp+1Ch] [rbp-F4h]
  common::milog::MiLogStream v30; // [rsp+20h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 entity_id:152 64 8 8 iter:153 96 8 32 group_id_config_id_union_key:166 128 16 14 entity_ptr:160";
  *(_QWORD *)(v2 + 16) = Scene::onEntityDisappear;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202178560;
  for ( i = 0; ; ++i )
  {
    v5 = proto::SceneEntityDisappearNotify::entity_list_size(notify);
    if ( i >= v5 )
      break;
    *(_DWORD *)(v2 + 48) = proto::SceneEntityDisappearNotify::entity_list(notify, i);
    *(std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::find(
                                                                                         &this->entity_map_,
                                                                                         (const std::unordered_map<unsigned int,std::shared_ptr<Entity>>::key_type *)(v2 + 48));
    *(std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&this->entity_map_);
    if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene.cpp",
        "onEntityDisappear",
        156);
      v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v30,
             (const char (*)[22])"can't find entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity> >,false,false> *const)(v2 + 64));
      std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)(v2 + 128), &v7->second);
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 128), 0LL) )
      {
        v8 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( Entity::getGroupId(v8) )
        {
          v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( Entity::getConfigId(v9) )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene.cpp",
              "onEntityDisappear",
              165);
            v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v30, (const char (*)[10])"group_id:");
            v12 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            val = Entity::getGroupId(v12);
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
            v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v13,
                    (const char (*)[12])" config_id:");
            v15 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            ConfigId = Entity::getConfigId(v15);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &ConfigId);
            common::milog::MiLogStream::~MiLogStream(&v30);
            *(_DWORD *)(v2 + 96) = 0;
            *(_DWORD *)(v2 + 100) = 0;
            v16 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            *(_DWORD *)(v2 + 96) = Entity::getGroupId(v16);
            v17 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            *(_DWORD *)(v2 + 100) = Entity::getConfigId(v17);
            if ( !std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::erase(
                    &this->entity_group_id_config_id_key_map_,
                    (const std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::key_type *)(v2 + 96)) )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene.cpp",
                "onEntityDisappear",
                171);
              v18 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                      &v30,
                      (const char (*)[58])"can't find entity group_id_config_id_union_key. group_id:");
              v19 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              GroupId = Entity::getGroupId(v19);
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &GroupId);
              v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v20,
                      (const char (*)[12])" config_id:");
              v22 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              val = Entity::getConfigId(v22);
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
              v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v23,
                      (const char (*)[12])" entity_id:");
              v25 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              ConfigId = Entity::getEntityId(v25);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &ConfigId);
              common::milog::MiLogStream::~MiLogStream(&v30);
            }
          }
        }
      }
      std::unordered_map<unsigned int,std::shared_ptr<Entity>>::erase(
        &this->entity_map_,
        *(std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator *)(v2 + 64));
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 128));
    }
  }
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 182: range 0000000000484946-0000000000484ACE
const Scene *__fastcall Scene::findEntity(const Scene *const this, __int64 entity_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Entity> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 entity_id:181 64 8 6 it:183";
  *(_QWORD *)(v3 + 16) = Scene::findEntity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<Entity>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::find(
                                                                                             (const std::unordered_map<unsigned int,std::shared_ptr<Entity>> *const)(entity_id + 24),
                                                                                             (const std::unordered_map<unsigned int,std::shared_ptr<Entity>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end((const std::unordered_map<unsigned int,std::shared_ptr<Entity>> *const)(entity_id + 24))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Entity> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)this, 0LL);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 190: range 0000000000484AD0-0000000000484CD6
void __cdecl Scene::getMonsterEntityIdVec(Scene *const this, std::vector<unsigned int> *monster_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<unsigned int>::size_type v5; // rdx
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::vector<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-A4h] BYREF
  std::vector<std::shared_ptr<Monster>>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<Monster>>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<Monster>> *__for_range; // [rsp+30h] [rbp-90h]
  MonsterPtr *monster_ptr; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 15 monster_vec:191";
  *(_QWORD *)(v2 + 16) = Scene::getMonsterEntityIdVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<std::shared_ptr<Monster>>::vector((std::vector<std::shared_ptr<Monster>> *const)(v2 + 32));
  Scene::getEntityVec<Monster>(this, (std::vector<std::shared_ptr<Monster>> *)(v2 + 32));
  v5 = std::vector<std::shared_ptr<Monster>>::size((const std::vector<std::shared_ptr<Monster>> *const)(v2 + 32));
  std::vector<unsigned int>::reserve(monster_id_vec, v5);
  __for_range = (std::vector<std::shared_ptr<Monster>> *)(v2 + 32);
  __for_begin._M_current = std::vector<std::shared_ptr<Monster>>::begin((std::vector<std::shared_ptr<Monster>> *const)(v2 + 32))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Monster>>::end((std::vector<std::shared_ptr<Monster>> *const)(v2 + 32))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>(
            &__for_begin,
            &__for_end) )
  {
    monster_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator*(&__for_begin);
    v6 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_ptr);
    __x = Entity::getEntityId(v6);
    std::vector<unsigned int>::push_back(monster_id_vec, &__x);
    __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<Monster>>::~vector((std::vector<std::shared_ptr<Monster>> *const)(v2 + 32));
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
};

// Line 201: range 0000000000484CD8-0000000000484EE9
// local variable allocation has failed, the output may be wrong!
MonsterPtr __cdecl Scene::findMonsterByEntityId(Scene *const this, uint32_t entity_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MonsterPtr result; // rax
  uint32_t entity_ida; // [rsp+Ch] [rbp-B4h]
  std::vector<std::shared_ptr<Monster>>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<Monster>>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<Monster>> *__for_range; // [rsp+30h] [rbp-90h]
  MonsterPtr *monster_ptr; // [rsp+38h] [rbp-88h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  entity_ida = v2;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 15 monster_vec:202";
  *(_QWORD *)(v3 + 16) = Scene::findMonsterByEntityId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<std::shared_ptr<Monster>>::vector((std::vector<std::shared_ptr<Monster>> *const)(v3 + 32));
  Scene::getEntityVec<Monster>(*(Scene *const *)&entity_id, (std::vector<std::shared_ptr<Monster>> *)(v3 + 32));
  __for_range = (std::vector<std::shared_ptr<Monster>> *)(v3 + 32);
  __for_begin._M_current = std::vector<std::shared_ptr<Monster>>::begin((std::vector<std::shared_ptr<Monster>> *const)(v3 + 32))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Monster>>::end((std::vector<std::shared_ptr<Monster>> *const)(v3 + 32))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>(
            &__for_begin,
            &__for_end) )
  {
    monster_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator*(&__for_begin);
    v6 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_ptr);
    if ( entity_ida == Entity::getEntityId(v6) )
    {
      std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)this, monster_ptr);
      goto LABEL_10;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)this, 0LL);
LABEL_10:
  std::vector<std::shared_ptr<Monster>>::~vector((std::vector<std::shared_ptr<Monster>> *const)(v3 + 32));
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 213: range 0000000000484EEA-00000000004850FB
// local variable allocation has failed, the output may be wrong!
MonsterPtr __cdecl Scene::findMonster(Scene *const this, uint32_t monster_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MonsterPtr result; // rax
  uint32_t monster_ida; // [rsp+Ch] [rbp-B4h]
  std::vector<std::shared_ptr<Monster>>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<Monster>>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<Monster>> *__for_range; // [rsp+30h] [rbp-90h]
  MonsterPtr *monster_ptr; // [rsp+38h] [rbp-88h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  monster_ida = v2;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 15 monster_vec:214";
  *(_QWORD *)(v3 + 16) = Scene::findMonster;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<std::shared_ptr<Monster>>::vector((std::vector<std::shared_ptr<Monster>> *const)(v3 + 32));
  Scene::getEntityVec<Monster>(*(Scene *const *)&monster_id, (std::vector<std::shared_ptr<Monster>> *)(v3 + 32));
  __for_range = (std::vector<std::shared_ptr<Monster>> *)(v3 + 32);
  __for_begin._M_current = std::vector<std::shared_ptr<Monster>>::begin((std::vector<std::shared_ptr<Monster>> *const)(v3 + 32))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Monster>>::end((std::vector<std::shared_ptr<Monster>> *const)(v3 + 32))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>(
            &__for_begin,
            &__for_end) )
  {
    monster_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator*(&__for_begin);
    v6 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_ptr);
    if ( monster_ida == Monster::getMonsterId(v6) )
    {
      std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)this, monster_ptr);
      goto LABEL_10;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)this, 0LL);
LABEL_10:
  std::vector<std::shared_ptr<Monster>>::~vector((std::vector<std::shared_ptr<Monster>> *const)(v3 + 32));
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 225: range 00000000004850FC-000000000048566F
Scene *__fastcall Scene::forceGetMonster(
        Scene *const this,
        unsigned __int64 monster_id,
        const Entity *near_entity,
        const Entity *a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 Pos; // rax
  unsigned __int64 Rot; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  int v15; // [rsp+Ch] [rbp-114h]
  std::shared_ptr<Monster> __r; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-E0h] BYREF
  char v18[192]; // [rsp+60h] [rbp-C0h] BYREF

  v15 = (int)near_entity;
  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 14 monster_id:224 48 16 15 monster_ptr:226 80 44 9 param:229";
  *(_QWORD *)(v4 + 16) = Scene::forceGetMonster;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = 0x4000000;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 32) = v15;
  Scene::findMonster((Scene *const)(v4 + 48), monster_id);
  if ( !std::operator==<Monster>((const std::shared_ptr<Monster> *)(v4 + 48), 0LL) )
    goto LABEL_21;
  QuestEntityParam::QuestEntityParam((QuestEntityParam *const)(v4 + 80));
  if ( *(_BYTE *)((monster_id >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((monster_id >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(monster_id);
  *(_DWORD *)(v4 + 80) = *(_DWORD *)monster_id;
  Pos = (unsigned __int64)Entity::getPos(a4);
  if ( (char)(Pos & 7) >= *(_BYTE *)((Pos >> 3) + 0x7FFF8000) && *(_BYTE *)((Pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Pos + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Pos + 11) & 7) >= *(_BYTE *)(((Pos + 11) >> 3) + 0x7FFF8000) )
  {
    Pos = __asan_report_load_n(Pos, 12LL);
  }
  *(_QWORD *)(v4 + 84) = *(_QWORD *)Pos;
  *(_DWORD *)(v4 + 92) = *(_DWORD *)(Pos + 8);
  Rot = (unsigned __int64)Entity::getRot(a4);
  if ( (char)(Rot & 7) >= *(_BYTE *)((Rot >> 3) + 0x7FFF8000) && *(_BYTE *)((Rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Rot + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Rot + 11) & 7) >= *(_BYTE *)(((Rot + 11) >> 3) + 0x7FFF8000) )
  {
    Rot = __asan_report_load_n(Rot, 12LL);
  }
  *(_QWORD *)(v4 + 96) = *(_QWORD *)Rot;
  *(_DWORD *)(v4 + 104) = *(_DWORD *)(Rot + 8);
  *(_DWORD *)(v4 + 108) = *(_DWORD *)(v4 + 32);
  if ( *(_BYTE *)(((monster_id + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(monster_id + 16);
  if ( Robot::questCreateEntity(*(Robot *const *)(monster_id + 16), (const QuestEntityParam *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "forceGetMonster",
      237);
    v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v17,
           (const char (*)[37])"questCreateEntity fails, monster_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    if ( *(_BYTE *)(((monster_id + 16) >> 3) + 0x7FFF8000) )
      __asan_report_load8(monster_id + 16);
    operator<<(v10, *(const Robot **)(monster_id + 16));
    common::milog::MiLogStream::~MiLogStream(&v17);
    std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)this, 0LL);
    goto LABEL_22;
  }
  Scene::findMonster((Scene *const)&__r, monster_id);
  std::shared_ptr<Monster>::operator=((std::shared_ptr<Monster> *const)(v4 + 48), &__r);
  std::shared_ptr<Monster>::~shared_ptr(&__r);
  if ( !std::operator==<Monster>((const std::shared_ptr<Monster> *)(v4 + 48), 0LL) )
  {
LABEL_21:
    std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)this, (std::shared_ptr<Monster> *)(v4 + 48));
    goto LABEL_22;
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene.cpp",
    "forceGetMonster",
    243);
  v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v17,
          (const char (*)[31])"findMonster fails, monster_id:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
  if ( *(_BYTE *)(((monster_id + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(monster_id + 16);
  operator<<(v12, *(const Robot **)(monster_id + 16));
  common::milog::MiLogStream::~MiLogStream(&v17);
  std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)this, 0LL);
LABEL_22:
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 48));
  if ( v18 == (char *)v4 )
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
  return this;
};

// Line 251: range 0000000000485670-0000000000485881
// local variable allocation has failed, the output may be wrong!
GadgetPtr __cdecl Scene::findGadget(Scene *const this, uint32_t gadget_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GadgetPtr result; // rax
  uint32_t gadget_ida; // [rsp+Ch] [rbp-B4h]
  std::vector<std::shared_ptr<Gadget>>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<Gadget>>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<Gadget>> *__for_range; // [rsp+30h] [rbp-90h]
  GadgetPtr *gadget_ptr; // [rsp+38h] [rbp-88h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  gadget_ida = v2;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 14 gadget_vec:252";
  *(_QWORD *)(v3 + 16) = Scene::findGadget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<std::shared_ptr<Gadget>>::vector((std::vector<std::shared_ptr<Gadget>> *const)(v3 + 32));
  Scene::getEntityVec<Gadget>(*(Scene *const *)&gadget_id, (std::vector<std::shared_ptr<Gadget>> *)(v3 + 32));
  __for_range = (std::vector<std::shared_ptr<Gadget>> *)(v3 + 32);
  __for_begin._M_current = std::vector<std::shared_ptr<Gadget>>::begin((std::vector<std::shared_ptr<Gadget>> *const)(v3 + 32))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Gadget>>::end((std::vector<std::shared_ptr<Gadget>> *const)(v3 + 32))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Gadget> *,std::vector<std::shared_ptr<Gadget>>>(
            &__for_begin,
            &__for_end) )
  {
    gadget_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Gadget> *,std::vector<std::shared_ptr<Gadget>>>::operator*(&__for_begin);
    v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_ptr);
    if ( gadget_ida == Gadget::getGadgetId(v6) )
    {
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, gadget_ptr);
      goto LABEL_10;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Gadget> *,std::vector<std::shared_ptr<Gadget>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, 0LL);
LABEL_10:
  std::vector<std::shared_ptr<Gadget>>::~vector((std::vector<std::shared_ptr<Gadget>> *const)(v3 + 32));
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 263: range 0000000000485882-0000000000485DF5
Scene *__fastcall Scene::forceGetGadget(
        Scene *const this,
        unsigned __int64 gadget_id,
        const Entity *near_entity,
        const Entity *a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 Pos; // rax
  unsigned __int64 Rot; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  int v15; // [rsp+Ch] [rbp-114h]
  std::shared_ptr<Gadget> __r; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-E0h] BYREF
  char v18[192]; // [rsp+60h] [rbp-C0h] BYREF

  v15 = (int)near_entity;
  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 13 gadget_id:262 48 16 14 gadget_ptr:264 80 44 9 param:267";
  *(_QWORD *)(v4 + 16) = Scene::forceGetGadget;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = 0x4000000;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 32) = v15;
  Scene::findGadget((Scene *const)(v4 + 48), gadget_id);
  if ( !std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v4 + 48), 0LL) )
    goto LABEL_21;
  QuestEntityParam::QuestEntityParam((QuestEntityParam *const)(v4 + 80));
  if ( *(_BYTE *)((gadget_id >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_id >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(gadget_id);
  *(_DWORD *)(v4 + 80) = *(_DWORD *)gadget_id;
  Pos = (unsigned __int64)Entity::getPos(a4);
  if ( (char)(Pos & 7) >= *(_BYTE *)((Pos >> 3) + 0x7FFF8000) && *(_BYTE *)((Pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Pos + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Pos + 11) & 7) >= *(_BYTE *)(((Pos + 11) >> 3) + 0x7FFF8000) )
  {
    Pos = __asan_report_load_n(Pos, 12LL);
  }
  *(_QWORD *)(v4 + 84) = *(_QWORD *)Pos;
  *(_DWORD *)(v4 + 92) = *(_DWORD *)(Pos + 8);
  Rot = (unsigned __int64)Entity::getRot(a4);
  if ( (char)(Rot & 7) >= *(_BYTE *)((Rot >> 3) + 0x7FFF8000) && *(_BYTE *)((Rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Rot + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Rot + 11) & 7) >= *(_BYTE *)(((Rot + 11) >> 3) + 0x7FFF8000) )
  {
    Rot = __asan_report_load_n(Rot, 12LL);
  }
  *(_QWORD *)(v4 + 96) = *(_QWORD *)Rot;
  *(_DWORD *)(v4 + 104) = *(_DWORD *)(Rot + 8);
  *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 32);
  if ( *(_BYTE *)(((gadget_id + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(gadget_id + 16);
  if ( Robot::questCreateEntity(*(Robot *const *)(gadget_id + 16), (const QuestEntityParam *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "forceGetGadget",
      275);
    v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v17,
           (const char (*)[36])"questCreateEntity fails, gadget_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    if ( *(_BYTE *)(((gadget_id + 16) >> 3) + 0x7FFF8000) )
      __asan_report_load8(gadget_id + 16);
    operator<<(v10, *(const Robot **)(gadget_id + 16));
    common::milog::MiLogStream::~MiLogStream(&v17);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, 0LL);
    goto LABEL_22;
  }
  Scene::findGadget((Scene *const)&__r, gadget_id);
  std::shared_ptr<Gadget>::operator=((std::shared_ptr<Gadget> *const)(v4 + 48), &__r);
  std::shared_ptr<Gadget>::~shared_ptr(&__r);
  if ( !std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v4 + 48), 0LL) )
  {
LABEL_21:
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, (std::shared_ptr<Gadget> *)(v4 + 48));
    goto LABEL_22;
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene.cpp",
    "forceGetGadget",
    281);
  v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v17,
          (const char (*)[32])"create gadget fails, gadget_id:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
  if ( *(_BYTE *)(((gadget_id + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(gadget_id + 16);
  operator<<(v12, *(const Robot **)(gadget_id + 16));
  common::milog::MiLogStream::~MiLogStream(&v17);
  std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, 0LL);
LABEL_22:
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 48));
  if ( v18 == (char *)v4 )
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
  return this;
};

// Line 289: range 0000000000485DF6-0000000000486007
// local variable allocation has failed, the output may be wrong!
NpcPtr __cdecl Scene::findNpc(Scene *const this, uint32_t npc_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  NpcPtr result; // rax
  uint32_t npc_ida; // [rsp+Ch] [rbp-B4h]
  std::vector<std::shared_ptr<Npc>>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<Npc>>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<Npc>> *__for_range; // [rsp+30h] [rbp-90h]
  NpcPtr *npc_ptr; // [rsp+38h] [rbp-88h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  npc_ida = v2;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 11 npc_vec:290";
  *(_QWORD *)(v3 + 16) = Scene::findNpc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<std::shared_ptr<Npc>>::vector((std::vector<std::shared_ptr<Npc>> *const)(v3 + 32));
  Scene::getEntityVec<Npc>(*(Scene *const *)&npc_id, (std::vector<std::shared_ptr<Npc>> *)(v3 + 32));
  __for_range = (std::vector<std::shared_ptr<Npc>> *)(v3 + 32);
  __for_begin._M_current = std::vector<std::shared_ptr<Npc>>::begin((std::vector<std::shared_ptr<Npc>> *const)(v3 + 32))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Npc>>::end((std::vector<std::shared_ptr<Npc>> *const)(v3 + 32))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Npc> *,std::vector<std::shared_ptr<Npc>>>(&__for_begin, &__for_end) )
  {
    npc_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Npc> *,std::vector<std::shared_ptr<Npc>>>::operator*(&__for_begin);
    v6 = std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)npc_ptr);
    if ( npc_ida == Npc::getNpcId(v6) )
    {
      std::shared_ptr<Npc>::shared_ptr((std::shared_ptr<Npc> *const)this, npc_ptr);
      goto LABEL_10;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Npc> *,std::vector<std::shared_ptr<Npc>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Npc>::shared_ptr((std::shared_ptr<Npc> *const)this, 0LL);
LABEL_10:
  std::vector<std::shared_ptr<Npc>>::~vector((std::vector<std::shared_ptr<Npc>> *const)(v3 + 32));
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<Npc,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 301: range 0000000000486008-000000000048657B
Scene *__fastcall Scene::forceGetNpc(
        Scene *const this,
        unsigned __int64 npc_id,
        const Entity *near_entity,
        const Entity *a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 Pos; // rax
  unsigned __int64 Rot; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  int v15; // [rsp+Ch] [rbp-114h]
  std::shared_ptr<Npc> __r; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-E0h] BYREF
  char v18[192]; // [rsp+60h] [rbp-C0h] BYREF

  v15 = (int)near_entity;
  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 10 npc_id:300 48 16 11 npc_ptr:302 80 44 9 param:305";
  *(_QWORD *)(v4 + 16) = Scene::forceGetNpc;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = 0x4000000;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 32) = v15;
  Scene::findNpc((Scene *const)(v4 + 48), npc_id);
  if ( !std::operator==<Npc>((const std::shared_ptr<Npc> *)(v4 + 48), 0LL) )
    goto LABEL_21;
  QuestEntityParam::QuestEntityParam((QuestEntityParam *const)(v4 + 80));
  if ( *(_BYTE *)((npc_id >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((npc_id >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(npc_id);
  *(_DWORD *)(v4 + 80) = *(_DWORD *)npc_id;
  Pos = (unsigned __int64)Entity::getPos(a4);
  if ( (char)(Pos & 7) >= *(_BYTE *)((Pos >> 3) + 0x7FFF8000) && *(_BYTE *)((Pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Pos + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Pos + 11) & 7) >= *(_BYTE *)(((Pos + 11) >> 3) + 0x7FFF8000) )
  {
    Pos = __asan_report_load_n(Pos, 12LL);
  }
  *(_QWORD *)(v4 + 84) = *(_QWORD *)Pos;
  *(_DWORD *)(v4 + 92) = *(_DWORD *)(Pos + 8);
  Rot = (unsigned __int64)Entity::getRot(a4);
  if ( (char)(Rot & 7) >= *(_BYTE *)((Rot >> 3) + 0x7FFF8000) && *(_BYTE *)((Rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Rot + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Rot + 11) & 7) >= *(_BYTE *)(((Rot + 11) >> 3) + 0x7FFF8000) )
  {
    Rot = __asan_report_load_n(Rot, 12LL);
  }
  *(_QWORD *)(v4 + 96) = *(_QWORD *)Rot;
  *(_DWORD *)(v4 + 104) = *(_DWORD *)(Rot + 8);
  *(_DWORD *)(v4 + 116) = *(_DWORD *)(v4 + 32);
  if ( *(_BYTE *)(((npc_id + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(npc_id + 16);
  if ( Robot::questCreateEntity(*(Robot *const *)(npc_id + 16), (const QuestEntityParam *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "forceGetNpc",
      313);
    v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v17,
           (const char (*)[33])"questCreateEntity fails, npc_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    if ( *(_BYTE *)(((npc_id + 16) >> 3) + 0x7FFF8000) )
      __asan_report_load8(npc_id + 16);
    operator<<(v10, *(const Robot **)(npc_id + 16));
    common::milog::MiLogStream::~MiLogStream(&v17);
    std::shared_ptr<Npc>::shared_ptr((std::shared_ptr<Npc> *const)this, 0LL);
    goto LABEL_22;
  }
  Scene::findNpc((Scene *const)&__r, npc_id);
  std::shared_ptr<Npc>::operator=((std::shared_ptr<Npc> *const)(v4 + 48), &__r);
  std::shared_ptr<Npc>::~shared_ptr(&__r);
  if ( !std::operator==<Npc>((const std::shared_ptr<Npc> *)(v4 + 48), 0LL) )
  {
LABEL_21:
    std::shared_ptr<Npc>::shared_ptr((std::shared_ptr<Npc> *const)this, (std::shared_ptr<Npc> *)(v4 + 48));
    goto LABEL_22;
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene.cpp",
    "forceGetNpc",
    319);
  v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v17,
          (const char (*)[31])"create talk npc fails, npc_id:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
  if ( *(_BYTE *)(((npc_id + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(npc_id + 16);
  operator<<(v12, *(const Robot **)(npc_id + 16));
  common::milog::MiLogStream::~MiLogStream(&v17);
  std::shared_ptr<Npc>::shared_ptr((std::shared_ptr<Npc> *const)this, 0LL);
LABEL_22:
  std::shared_ptr<Npc>::~shared_ptr((std::shared_ptr<Npc> *const)(v4 + 48));
  if ( v18 == (char *)v4 )
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
  return this;
};

// Line 327: range 000000000048657C-00000000004867AF
void __fastcall Scene::unlockArea(Scene *const this, uint32_t area_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::CityInfo *v5; // r8
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::CityInfo>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  char v7[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 11 city_id:329 48 4 11 area_id:326 64 8 6 it:330 96 32 13 city_info:333";
  *(_QWORD *)(v2 + 16) = Scene::unlockArea;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = area_id;
  std::unordered_set<unsigned int>::insert(
    &this->unlocked_area_set_,
    (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
  *(_DWORD *)(v2 + 32) = WorldAreaExcelConfigMgr::findAreaCityId(
                           &Config::config_ptr->design_config.txt_config_mgr.world_area_config_mgr,
                           *(_DWORD *)(v2 + 48));
  *(std::unordered_map<unsigned int,proto::CityInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,proto::CityInfo>::find(
                                                                               &this->city_map_,
                                                                               (const std::unordered_map<unsigned int,proto::CityInfo>::key_type *)(v2 + 32));
  __y._M_cur = std::unordered_map<unsigned int,proto::CityInfo>::end(&this->city_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,proto::CityInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::CityInfo>,false> *)(v2 + 64),
         &__y) )
  {
    proto::CityInfo::CityInfo((proto::CityInfo *const)(v2 + 96));
    proto::CityInfo::set_city_id((proto::CityInfo *const)(v2 + 96), *(_DWORD *)(v2 + 32));
    proto::CityInfo::set_level((proto::CityInfo *const)(v2 + 96), 1u);
    std::unordered_map<unsigned int,proto::CityInfo>::emplace<unsigned int &,proto::CityInfo&>(
      &this->city_map_,
      (unsigned int *)(v2 + 32),
      (proto::CityInfo *)(v2 + 96),
      (unsigned int *)&this->city_map_,
      v5);
    proto::CityInfo::~CityInfo((proto::CityInfo *const)(v2 + 96));
  }
  if ( v7 == (char *)v2 )
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

// Line 341: range 00000000004867B0-0000000000486CA5
int32_t __cdecl Scene::getSceneArea(Scene *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  proto::CityInfo *v5; // rax
  int32_t result; // eax
  int32_t retcode; // [rsp+14h] [rbp-16Ch]
  google::protobuf::RepeatedPtrField<proto::CityInfo>::const_iterator __for_begin_0; // [rsp+18h] [rbp-168h] BYREF
  google::protobuf::RepeatedPtrField<proto::CityInfo>::const_iterator __for_end_0; // [rsp+20h] [rbp-160h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-158h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-150h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::CityInfo> *__for_range_0; // [rsp+40h] [rbp-140h]
  const proto::CityInfo *city_info; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-130h] BYREF
  char v16[272]; // [rsp+70h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 11 area_id:357 48 32 7 req:342 112 80 7 rsp:345";
  *(_QWORD *)(v1 + 16) = Scene::getSceneArea;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862726] = -202116109;
  proto::GetSceneAreaReq::GetSceneAreaReq((proto::GetSceneAreaReq *const)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GetSceneAreaReq::set_scene_id((proto::GetSceneAreaReq *const)(v1 + 48), this->scene_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->belong_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->belong_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->belong_uid_);
  }
  proto::GetSceneAreaReq::set_belong_uid((proto::GetSceneAreaReq *const)(v1 + 48), this->belong_uid_);
  proto::GetSceneAreaRsp::GetSceneAreaRsp((proto::GetSceneAreaRsp *const)(v1 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->robot_);
  if ( Robot::sendProto<proto::GetSceneAreaReq,proto::GetSceneAreaRsp>(
         this->robot_,
         (proto::GetSceneAreaReq *)(v1 + 48),
         (proto::GetSceneAreaRsp *)(v1 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "getSceneArea",
      348);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v15, (const char (*)[17])"sendProto failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v4 = -1;
  }
  else
  {
    retcode = proto::GetSceneAreaRsp::retcode((const proto::GetSceneAreaRsp *const)(v1 + 112));
    if ( retcode )
    {
      v4 = retcode;
    }
    else
    {
      std::unordered_set<unsigned int>::clear(&this->unlocked_area_set_);
      __for_range = proto::GetSceneAreaRsp::area_id_list((const proto::GetSceneAreaRsp *const)(v1 + 112));
      __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
      __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
      while ( __for_begin != __for_end )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(__for_begin);
        }
        *(_DWORD *)(v1 + 32) = *__for_begin;
        std::unordered_set<unsigned int>::insert(
          &this->unlocked_area_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v1 + 32));
        ++__for_begin;
      }
      std::unordered_map<unsigned int,proto::CityInfo>::clear(&this->city_map_);
      __for_range_0 = proto::GetSceneAreaRsp::city_info_list((const proto::GetSceneAreaRsp *const)(v1 + 112));
      __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::CityInfo>::begin(__for_range_0).it_;
      __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::CityInfo>::end(__for_range_0).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::CityInfo const>::operator!=(
                &__for_begin_0,
                &__for_end_0) )
      {
        city_info = google::protobuf::internal::RepeatedPtrIterator<proto::CityInfo const>::operator*(&__for_begin_0);
        *(_DWORD *)(v1 + 32) = proto::CityInfo::city_id(city_info);
        v5 = std::unordered_map<unsigned int,proto::CityInfo>::operator[](
               &this->city_map_,
               (std::unordered_map<unsigned int,proto::CityInfo>::key_type *)(v1 + 32));
        proto::CityInfo::operator=(v5, city_info);
        google::protobuf::internal::RepeatedPtrIterator<proto::CityInfo const>::operator++(&__for_begin_0);
      }
      v4 = 0;
    }
  }
  proto::GetSceneAreaRsp::~GetSceneAreaRsp((proto::GetSceneAreaRsp *const)(v1 + 112));
  proto::GetSceneAreaReq::~GetSceneAreaReq((proto::GetSceneAreaReq *const)(v1 + 48));
  result = v4;
  if ( v16 == (char *)v1 )
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
  return result;
};

// Line 370: range 0000000000486CA6-0000000000487033
int32_t __cdecl Scene::levelUpCity(Scene *const this, uint32_t area_id, uint32_t item_num)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  proto::CityInfo *v8; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,proto::CityInfo>::key_type __k; // [rsp+10h] [rbp-120h] BYREF
  int32_t retcode; // [rsp+14h] [rbp-11Ch]
  const proto::CityInfo *city_info; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-110h] BYREF
  char v15[240]; // [rsp+40h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 7 req:371 112 40 7 rsp:375";
  *(_QWORD *)(v3 + 16) = Scene::levelUpCity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  proto::LevelupCityReq::LevelupCityReq((proto::LevelupCityReq *const)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::LevelupCityReq::set_scene_id((proto::LevelupCityReq *const)(v3 + 48), this->scene_id_);
  proto::LevelupCityReq::set_area_id((proto::LevelupCityReq *const)(v3 + 48), area_id);
  proto::LevelupCityReq::set_item_num((proto::LevelupCityReq *const)(v3 + 48), item_num);
  proto::LevelupCityRsp::LevelupCityRsp((proto::LevelupCityRsp *const)(v3 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->robot_);
  if ( Robot::sendProto<proto::LevelupCityReq,proto::LevelupCityRsp>(
         this->robot_,
         (proto::LevelupCityReq *)(v3 + 48),
         (proto::LevelupCityRsp *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "levelUpCity",
      378);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v14, (const char (*)[18])"sendProto fails, ");
    operator<<(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = -1;
  }
  else
  {
    retcode = proto::LevelupCityRsp::retcode((const proto::LevelupCityRsp *const)(v3 + 112));
    if ( retcode )
    {
      v7 = retcode;
    }
    else
    {
      city_info = proto::LevelupCityRsp::city_info((const proto::LevelupCityRsp *const)(v3 + 112));
      __k = proto::CityInfo::city_id(city_info);
      v8 = std::unordered_map<unsigned int,proto::CityInfo>::operator[](&this->city_map_, &__k);
      proto::CityInfo::operator=(v8, city_info);
      v7 = 0;
    }
  }
  proto::LevelupCityRsp::~LevelupCityRsp((proto::LevelupCityRsp *const)(v3 + 112));
  proto::LevelupCityReq::~LevelupCityReq((proto::LevelupCityReq *const)(v3 + 48));
  result = v7;
  if ( v15 == (char *)v3 )
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

// Line 392: range 0000000000487034-000000000048718C
proto::CityInfo *__fastcall Scene::findCityInfo(Scene *const this, uint32_t city_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::CityInfo *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::CityInfo>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 city_id:391 64 8 6 it:393";
  *(_QWORD *)(v2 + 16) = Scene::findCityInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = city_id;
  *(std::unordered_map<unsigned int,proto::CityInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,proto::CityInfo>::find(
                                                                               &this->city_map_,
                                                                               (const std::unordered_map<unsigned int,proto::CityInfo>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,proto::CityInfo>::end(&this->city_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,proto::CityInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::CityInfo>,false> *)(v2 + 64),
         &__y) )
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,proto::CityInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,proto::CityInfo>,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 == (char *)v2 )
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
  return result;
};

// Line 400: range 000000000048718E-000000000048733F
uint32_t __cdecl Scene::getEntityIdByGroupIdConfigId(Scene *const this, uint32_t group_id, uint32_t config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  uint32_t result; // eax
  std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 iter:404 64 8 13 union_key:401";
  *(_QWORD *)(v3 + 16) = Scene::getEntityIdByGroupIdConfigId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 64) = group_id;
  *(_DWORD *)(v3 + 68) = config_id;
  *(std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::iterator *)(v3 + 32) = std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::find(
                                                                                   &this->no_del_entity_group_id_config_id_key_map_,
                                                                                   (const std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::key_type *)(v3 + 64));
  __y._M_node = std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::end(&this->no_del_entity_group_id_config_id_key_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::_Self *)(v3 + 32),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<EntityGroupIdConfigIdUnionKey const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> > *const)(v3 + 32));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second;
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 413: range 0000000000487340-000000000048743F
void __cdecl Scene::clear(Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id_);
  }
  this->dungeon_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->belong_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->belong_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->belong_uid_);
  }
  this->belong_uid_ = 0;
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::clear(&this->no_del_entity_group_id_config_id_key_map_);
  std::unordered_set<unsigned int>::clear(&this->unlocked_area_set_);
  std::unordered_map<unsigned int,proto::CityInfo>::clear(&this->city_map_);
};

// Line 425: range 0000000000487440-000000000048760A
void __cdecl Scene::printEntityGroupIdConfigIdUnionKeyMap(Scene *const this)
{
  std::tuple_element<1,const std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::type v1; // esi
  __int64 config_id; // rcx
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> *v6; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::type *k; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::type *v; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->entity_group_id_config_id_key_map_;
  __for_begin._M_node = std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::begin(&this->entity_group_id_config_id_key_map_)._M_node;
  __for_end._M_node = std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::end(&this->entity_group_id_config_id_key_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<EntityGroupIdConfigIdUnionKey const,unsigned int>>::operator*(&__for_begin);
    k = std::get<0ul,EntityGroupIdConfigIdUnionKey const,unsigned int>(v6);
    v = (std::tuple_element<1,const std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::type *)std::get<1ul,EntityGroupIdConfigIdUnionKey const,unsigned int>(v6);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene.cpp",
      "printEntityGroupIdConfigIdUnionKeyMap",
      428);
    if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v);
    }
    v1 = *v;
    if ( *(_BYTE *)(((unsigned __int64)&k->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)k + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&k->config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&k->config_id);
    }
    config_id = k->config_id;
    if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(k);
    }
    common::milog::MiLogStream::operator()(&v9, "(%u,%u):%u", k->group_id, config_id, v1);
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::_Rb_tree_iterator<std::pair<EntityGroupIdConfigIdUnionKey const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 433: range 000000000048760C-0000000000487E85
int32_t __cdecl Scene::validateAppearEntityList(
        Scene *const this,
        std::set<EntityGroupIdConfigIdUnionKey> *expected_set,
        uint32_t expected_avatar_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t AvatarId; // eax
  const std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::key_type *v12; // rax
  std::tuple_element<1,std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::type v13; // esi
  __int64 config_id; // rcx
  __int64 v15; // rcx
  int32_t v16; // r14d
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::key_type __x; // [rsp+20h] [rbp-150h] BYREF
  int32_t ret; // [rsp+24h] [rbp-14Ch]
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int> *__for_range; // [rsp+30h] [rbp-140h]
  std::set<EntityGroupIdConfigIdUnionKey> *__for_range_0; // [rsp+38h] [rbp-138h]
  const EntityGroupIdConfigIdUnionKey *e; // [rsp+40h] [rbp-130h]
  std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> *__in; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::type *k; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::type *v; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-110h] BYREF
  char v30[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 8 8 iter:456 80 16 18 cur_avatar_ptr:435 112 48 12 cur_copy:455";
  *(_QWORD *)(v3 + 16) = Scene::validateAppearEntityList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->robot_);
  Robot::getPlayer(this->robot_);
  Player::getCurAvatar((const Player *const)(v3 + 80));
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 80), 0LL) )
  {
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&this->entity_map_)._M_cur;
    v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    __x = Entity::getEntityId(v6);
    *(std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::find(
                                                                                         &this->entity_map_,
                                                                                         &__x);
    if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false> *)(v3 + 48),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false> *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene.cpp",
        "validateAppearEntityList",
        440);
      v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      EntityId = Entity::getEntityId(v7);
      common::milog::MiLogStream::operator()(&v29, "cur_avatar:%u not find in entity_map_", EntityId);
      common::milog::MiLogStream::~MiLogStream(&v29);
      --ret;
    }
    v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    if ( expected_avatar_id != Avatar::getAvatarId(v9) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene.cpp",
        "validateAppearEntityList",
        445);
      v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      AvatarId = Avatar::getAvatarId(v10);
      common::milog::MiLogStream::operator()(
        &v29,
        "cur_avatar avatar_id:%u != expected_id:%u",
        AvatarId,
        expected_avatar_id);
      common::milog::MiLogStream::~MiLogStream(&v29);
      --ret;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "validateAppearEntityList",
      451);
    common::milog::MiLogStream::operator()(&v29, "cur_avatar_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v29);
    --ret;
  }
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::map(
    (std::map<EntityGroupIdConfigIdUnionKey,unsigned int> *const)(v3 + 112),
    &this->entity_group_id_config_id_key_map_);
  *(std::set<EntityGroupIdConfigIdUnionKey>::iterator *)(v3 + 48) = std::set<EntityGroupIdConfigIdUnionKey>::begin(expected_set);
  while ( 1 )
  {
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::_Base_ptr)std::set<EntityGroupIdConfigIdUnionKey>::end(expected_set)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey>::_Self *)(v3 + 48),
            (const std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey>::_Self *)&__for_end) )
      break;
    v12 = std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey>::operator*((const std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey> *const)(v3 + 48));
    if ( std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::erase(
           (std::map<EntityGroupIdConfigIdUnionKey,unsigned int> *const)(v3 + 112),
           v12) )
    {
      *(std::set<EntityGroupIdConfigIdUnionKey>::iterator *)(v3 + 48) = std::set<EntityGroupIdConfigIdUnionKey>::erase[abi:cxx11](
                                                                          expected_set,
                                                                          *(std::set<EntityGroupIdConfigIdUnionKey>::const_iterator *)(v3 + 48));
    }
    else
    {
      std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey>::operator++((std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey> *const)(v3 + 48));
    }
  }
  __for_range = (std::map<EntityGroupIdConfigIdUnionKey,unsigned int> *)(v3 + 112);
  *(std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::iterator *)(v3 + 48) = std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::begin((std::map<EntityGroupIdConfigIdUnionKey,unsigned int> *const)(v3 + 112));
  __for_end._M_node = std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::_Self *)(v3 + 48),
            &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<EntityGroupIdConfigIdUnionKey const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> > *const)(v3 + 48));
    k = std::get<0ul,EntityGroupIdConfigIdUnionKey const,unsigned int>(__in);
    v = std::get<1ul,EntityGroupIdConfigIdUnionKey const,unsigned int>(__in);
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "validateAppearEntityList",
      469);
    if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v);
    }
    v13 = *v;
    if ( *(_BYTE *)(((unsigned __int64)&k->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)k + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&k->config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&k->config_id);
    }
    config_id = k->config_id;
    if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(k);
    }
    common::milog::MiLogStream::operator()(&v29, "(%u,%u):%u not in input_set", k->group_id, config_id, v13);
    common::milog::MiLogStream::~MiLogStream(&v29);
    --ret;
    std::_Rb_tree_iterator<std::pair<EntityGroupIdConfigIdUnionKey const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> > *const)(v3 + 48));
  }
  __for_range_0 = expected_set;
  *(std::set<EntityGroupIdConfigIdUnionKey>::iterator *)(v3 + 48) = std::set<EntityGroupIdConfigIdUnionKey>::begin(expected_set);
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const EntityGroupIdConfigIdUnionKey,unsigned int> >::_Base_ptr)std::set<EntityGroupIdConfigIdUnionKey>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey>::_Self *)(v3 + 48),
            (const std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey>::_Self *)&__for_end) )
  {
    e = std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey>::operator*((const std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey> *const)(v3 + 48));
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene.cpp",
      "validateAppearEntityList",
      474);
    if ( *(_BYTE *)(((unsigned __int64)&e->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)e + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&e->config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&e->config_id);
    }
    v15 = e->config_id;
    if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(e);
    }
    common::milog::MiLogStream::operator()(&v29, "(%u,%u) not in cur_map", e->group_id, v15);
    common::milog::MiLogStream::~MiLogStream(&v29);
    --ret;
    std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey>::operator++((std::_Rb_tree_const_iterator<EntityGroupIdConfigIdUnionKey> *const)(v3 + 48));
  }
  v16 = ret;
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::~map((std::map<EntityGroupIdConfigIdUnionKey,unsigned int> *const)(v3 + 112));
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 80));
  result = v16;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 478: range 00000000004AA66F-00000000004AA6A1
void __cdecl GLOBAL__sub_I_merge_merge_main_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
  __static_initialization_and_destruction_2(1, 0xFFFF);
};

// Line 478: range 000000000049014E-00000000004A9C9E
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);

// Line 478: range 00000000004A9C9F-00000000004A9F65
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  luabind::detail::class_id v4; // rax
  _BYTE *v5; // rcx
  _BYTE *v6; // rcx
  luabind::detail::class_id v7; // rax
  _BYTE *v8; // rcx
  _BYTE *v9; // rcx
  luabind::detail::class_id v10; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_main.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<Robot *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Robot *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Robot *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Robot *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Robot *>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<Robot *>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Robot *>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Robot *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Robot *>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<Robot *>::id);
        }
        *v3 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Robot *);
        v4 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Robot *>::id >> 3) + 0x7FFF8000) )
          v4 = __asan_report_store8();
        luabind::detail::registered_class<Robot *>::id = v4;
      }
      v5 = &`guard variable for'luabind::detail::registered_class<Entity>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Entity>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Entity>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Entity>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Entity>::id);
      }
      if ( !*v5 )
      {
        v6 = &`guard variable for'luabind::detail::registered_class<Entity>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Entity>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Entity>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Entity>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<Entity>::id);
        }
        *v6 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Entity);
        v7 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Entity>::id >> 3) + 0x7FFF8000) )
          v7 = __asan_report_store8();
        luabind::detail::registered_class<Entity>::id = v7;
      }
      v8 = &`guard variable for'luabind::detail::registered_class<Monster>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Monster>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Monster>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Monster>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Monster>::id);
      }
      if ( !*v8 )
      {
        v9 = &`guard variable for'luabind::detail::registered_class<Monster>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Monster>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Monster>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Monster>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<Monster>::id);
        }
        *v9 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Monster);
        v10 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Monster>::id >> 3) + 0x7FFF8000) )
          v10 = __asan_report_store8();
        luabind::detail::registered_class<Monster>::id = v10;
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 478: range 00000000004A9F66-00000000004AA66E
void __cdecl __static_initialization_and_destruction_2(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  luabind::detail::class_id v4; // rax
  _BYTE *v5; // rcx
  _BYTE *v6; // rcx
  luabind::detail::class_id v7; // rax
  _BYTE *v8; // rcx
  _BYTE *v9; // rcx
  luabind::detail::class_id v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rcx
  luabind::detail::class_id v13; // rax
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  luabind::detail::class_id v16; // rax
  _BYTE *v17; // rcx
  _BYTE *v18; // rcx
  luabind::detail::class_id v19; // rax
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  luabind::detail::class_id v22; // rax
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  luabind::detail::class_id v25; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_main.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Quest>>::id);
        }
        *v3 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'std::shared_ptr<Quest>);
        v4 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<std::shared_ptr<Quest>>::id >> 3)
                      + 0x7FFF8000) )
          v4 = __asan_report_store8();
        luabind::detail::registered_class<std::shared_ptr<Quest>>::id = v4;
      }
      v5 = &`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id);
      }
      if ( !*v5 )
      {
        v6 = &`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Avatar>>::id);
        }
        *v6 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'std::shared_ptr<Avatar>);
        v7 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<std::shared_ptr<Avatar>>::id >> 3)
                      + 0x7FFF8000) )
          v7 = __asan_report_store8();
        luabind::detail::registered_class<std::shared_ptr<Avatar>>::id = v7;
      }
      v8 = &`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id);
      }
      if ( !*v8 )
      {
        v9 = &`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<std::shared_ptr<Monster>>::id);
        }
        *v9 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'std::shared_ptr<Monster>);
        v10 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<std::shared_ptr<Monster>>::id >> 3)
                      + 0x7FFF8000) )
          v10 = __asan_report_store8();
        luabind::detail::registered_class<std::shared_ptr<Monster>>::id = v10;
      }
      v11 = &`guard variable for'luabind::detail::registered_class<Scene *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Scene *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Scene *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Scene *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Scene *>::id);
      }
      if ( !*v11 )
      {
        v12 = &`guard variable for'luabind::detail::registered_class<Scene *>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Scene *>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Scene *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Scene *>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<Scene *>::id);
        }
        *v12 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Scene *);
        v13 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Scene *>::id >> 3) + 0x7FFF8000) )
          v13 = __asan_report_store8();
        luabind::detail::registered_class<Scene *>::id = v13;
      }
      v14 = &`guard variable for'luabind::detail::registered_class<Player *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Player *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Player *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Player *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Player *>::id);
      }
      if ( !*v14 )
      {
        v15 = &`guard variable for'luabind::detail::registered_class<Player *>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Player *>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Player *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Player *>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<Player *>::id);
        }
        *v15 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Player *);
        v16 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Player *>::id >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8();
        luabind::detail::registered_class<Player *>::id = v16;
      }
      v17 = &`guard variable for'luabind::detail::registered_class<RobotReporter *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<RobotReporter *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<RobotReporter *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<RobotReporter *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<RobotReporter *>::id);
      }
      if ( !*v17 )
      {
        v18 = &`guard variable for'luabind::detail::registered_class<RobotReporter *>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<RobotReporter *>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<RobotReporter *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<RobotReporter *>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<RobotReporter *>::id);
        }
        *v18 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'RobotReporter *);
        v19 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<RobotReporter *>::id >> 3) + 0x7FFF8000) )
          v19 = __asan_report_store8();
        luabind::detail::registered_class<RobotReporter *>::id = v19;
      }
      v20 = &`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id);
        }
        *v21 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'common::tools::TxtFile::Row const*);
        v22 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id >> 3)
                      + 0x7FFF8000) )
          v22 = __asan_report_store8();
        luabind::detail::registered_class<common::tools::TxtFile::Row const*>::id = v22;
      }
      v23 = &`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id);
      }
      if ( !*v23 )
      {
        v24 = &`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id);
        }
        *v24 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'std::auto_ptr<common::tools::TxtFile>);
        v25 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id >> 3)
                      + 0x7FFF8000) )
          v25 = __asan_report_store8();
        luabind::detail::registered_class<std::auto_ptr<common::tools::TxtFile>>::id = v25;
      }
    }
    __asan_after_dynamic_init();
  }
};

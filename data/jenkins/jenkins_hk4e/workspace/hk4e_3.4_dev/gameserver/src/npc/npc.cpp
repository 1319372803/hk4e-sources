// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/npc/npc.cpp

// Line 22: range 0000000016C5D81A-0000000016C5D97D
int32_t __cdecl Npc::onAfterEnterScene(Npc *const this, Scene *scene, const VisionContext *context)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  Player *v7; // rax
  PlayerSceneComp *SceneComp; // rdx
  int32_t result; // eax
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:23";
  *(_QWORD *)(v3 + 16) = Npc::onAfterEnterScene;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Scene::getOwnPlayer((const Scene *const)(v3 + 32));
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 32))
    && !Entity::getGroupId((const Entity *const)this) )
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    SceneComp = Player::getSceneComp(v7);
    PlayerSceneComp::addQuestNpcEntity(SceneComp, this);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 33: range 0000000016C5D97E-0000000016C5DC23
int32_t __cdecl Npc::onBeforeLeaveScene(Npc *const this, const VisionContext *context)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  Player *v10; // rax
  PlayerSceneComp *SceneComp; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 scene_ptr:34 64 16 13 player_ptr:40";
  *(_QWORD *)(v2 + 16) = Npc::onBeforeLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/npc/npc.cpp",
      "onBeforeLeaveScene",
      37);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v13,
           (const char (*)[27])"scene ptr is null, npc id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->npc_id_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" entity id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->entity_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Scene::getOwnPlayer((const Scene *const)(v2 + 64));
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64))
      && !Entity::getGroupId((const Entity *const)this) )
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      SceneComp = Player::getSceneComp(v10);
      PlayerSceneComp::removeQuestNpcEntity(SceneComp, this);
    }
    v8 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v8;
  if ( v14 == (char *)v2 )
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

// Line 51: range 0000000016C5DC24-0000000016C5DE01
std::string *__cdecl Npc::getDesc[abi:cxx11](std::string *retstr, const Npc *const this)
{
  std::string __lhs; // [rsp+10h] [rbp-90h] BYREF
  std::string v4; // [rsp+30h] [rbp-70h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-50h] BYREF
  std::string v6; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  common::tools::StringUtils::numToStr<unsigned int>(&__rhs, this->npc_id_);
  Entity::getDesc[abi:cxx11](&__lhs, (const Entity *const)this);
  std::operator+<char>(&v4, &__lhs, "[npc_id:");
  std::operator+<char>(&v6, &v4, &__rhs);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v6, "]");
  std::string::~string(&v6);
  std::string::~string(&v4);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 57: range 0000000016C5DE02-0000000016C5DFD0
int32_t __cdecl Npc::toClient(const Npc *const this, proto::SceneEntityInfo *entity_info, Player *player)
{
  uint32_t BlockId; // edx
  proto::SceneNpcInfo *npc_info; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  if ( Entity::toClient((const Entity *const)this, entity_info, player) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/npc/npc.cpp",
      "toClient",
      60);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v6, (const char (*)[15])"toClient fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    npc_info = proto::SceneEntityInfo::mutable_npc(entity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SceneNpcInfo::set_npc_id(npc_info, this->npc_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->room_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->room_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SceneNpcInfo::set_room_id(npc_info, this->room_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SceneNpcInfo::set_parent_quest_id(npc_info, this->parent_quest_id_);
    BlockId = Entity::getBlockId((const Entity *const)this);
    proto::SceneNpcInfo::set_block_id(npc_info, BlockId);
    return 0;
  }
};

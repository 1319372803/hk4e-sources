// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/entity/entity.cpp

// Line 35: range 000000001660591D-00000000166059FE
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Transform *platform_transform)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  std::string val; // [rsp+10h] [rbp-50h] BYREF
  std::string v8; // [rsp+30h] [rbp-30h] BYREF

  v2 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(stream, (const char (*)[6])"[pos:");
  Vector3::toString[abi:cxx11](&val, &platform_transform->position);
  v3 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" rot:");
  Vector3::toString[abi:cxx11](&v8, &platform_transform->rotation);
  v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &v8);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])"]");
  std::string::~string(&v8);
  std::string::~string(&val);
  return stream;
};

// Line 42: range 00000000166059FF-0000000016605B85
__int64 __fastcall toClient(proto::ProtEntityType entity_type)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 entity_type:41";
  *(_QWORD *)(v1 + 16) = toClient;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = entity_type;
  switch ( *(_DWORD *)(v1 + 32) )
  {
    case 1:
      result = 1LL;
      break;
    case 2:
      result = 2LL;
      break;
    case 3:
      result = 3LL;
      break;
    case 4:
    case 6:
    case 7:
      result = 4LL;
      break;
    default:
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/entity/entity.cpp",
        "toClient",
        57);
      v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v6,
             (const char (*)[21])"invalid entity_type:");
      common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(
        v5,
        (const proto::ProtEntityType *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v6);
      result = 0LL;
      break;
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
  return result;
};

// Line 63: range 0000000016605B86-0000000016605E6D
std::vector<std::shared_ptr<Player>> *__cdecl EntityViewMgr::validateAndGetViewingPlayers(
        std::vector<std::shared_ptr<Player>> *retstr,
        EntityViewMgr *const this)
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
  *(_QWORD *)(v2 + 8) = "2 32 8 7 iter:66 64 16 13 player_ptr:68";
  *(_QWORD *)(v2 + 16) = EntityViewMgr::validateAndGetViewingPlayers;
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
        1u,
        "./src/entity/entity.cpp",
        "validateAndGetViewingPlayers",
        76);
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player> > > *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v7);
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

// Line 85: range 0000000016605E6E-0000000016605FFF
void __cdecl EntityViewMgr::onPlayerDoView(EntityViewMgr *const this, const PlayerPtr *player_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned int *v3; // rcx
  const std::shared_ptr<Player> *v4; // r8
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int Uid; // [rsp+14h] [rbp-3Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Player>(player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/entity/entity.cpp",
      "onPlayerDoView",
      88);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v11,
      (const char (*)[26])"[VIEW] player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v11);
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
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/entity/entity.cpp",
      "onPlayerDoView",
      94);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v11,
           (const char (*)[26])"viewing_player_map_ size:");
    val = std::map<unsigned int,std::weak_ptr<Player>>::size(&this->viewing_player_map_);
    v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" add uid:");
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    Uid = Player::getUid(v8);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 99: range 0000000016606000-000000001660618D
void __cdecl EntityViewMgr::onPlayerUndoView(EntityViewMgr *const this, const PlayerPtr *player_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::map<unsigned int,std::weak_ptr<Player>>::key_type __x; // [rsp+14h] [rbp-3Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Player>(player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/entity/entity.cpp",
      "onPlayerUndoView",
      102);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v9,
      (const char (*)[26])"[VIEW] player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v2 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    __x = Player::getUid(v2);
    std::map<unsigned int,std::weak_ptr<Player>>::erase(&this->viewing_player_map_, &__x);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/entity/entity.cpp",
      "onPlayerUndoView",
      108);
    v3 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v9,
           (const char (*)[26])"viewing_player_map_ size:");
    val = std::map<unsigned int,std::weak_ptr<Player>>::size(&this->viewing_player_map_);
    v4 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v3, &val);
    v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v4, (const char (*)[10])" del uid:");
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    __x = Player::getUid(v6);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &__x);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
};

// Line 116: range 000000001660618E-00000000166066A1
std::string *__cdecl Entity::getDesc[abi:cxx11](std::string *retstr, const Entity *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // r14
  unsigned int SceneId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // r14
  unsigned int RoomId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int GroupId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // rcx
  char v22[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 8 ostr:117 64 16 13 group_ptr:119";
  *(_QWORD *)(v2 + 16) = Entity::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[entity_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_id_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->entity_id_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",scene_id:");
  SceneId = Entity::getSceneId(this);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, SceneId);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, ",room_id:");
  RoomId = Entity::getRoomId(this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, RoomId);
  Entity::getGroup((const Entity *const)(v2 + 64));
  if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 64), 0LL) )
  {
    v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            ",group_id:");
    v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    GroupId = Group::getGroupId(v13);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, GroupId);
    if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->config_id_);
    }
    if ( this->config_id_ )
    {
      v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
              ",config_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->config_id_);
      }
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, this->config_id_);
    }
  }
  if ( !Vector3::isZero(&this->position_) )
  {
    v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            ",pos:");
    if ( *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->position_);
    }
    v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, this->position_.x);
    v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, ",");
    if ( *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->position_.y);
    }
    v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, this->position_.y);
    v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, ",");
    if ( *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->position_.z);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, this->position_.z);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v22 == (char *)v2 )
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

// Line 134: range 00000000166066A2-0000000016606723
void __cdecl Entity::setScene(Entity *const this, ScenePtr *p_scene_ptr)
{
  std::weak_ptr<Scene>::operator=<Scene>(&this->scene_wtr_, p_scene_ptr);
  if ( std::operator==<Scene>(p_scene_ptr, 0LL) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_move_sent_reliable_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_move_sent_reliable_);
    this->is_move_sent_reliable_ = 1;
  }
};

// Line 142: range 0000000016606724-0000000016606866
PlayerPtr __cdecl Entity::findSceneOwnPlayer(const Entity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerPtr result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:143";
  *(_QWORD *)(v1 + 16) = Entity::findSceneOwnPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    Scene::getOwnPlayer((const Scene *const)this);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 151: range 00000000166068EE-0000000016606E92
int32_t __cdecl Entity::enterScene(Entity *const this, Scene *scene, const VisionContext *context)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const Vector3 *Position; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  const Vector3 *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int32_t v12; // r13d
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  uint32_t Now; // esi
  unsigned __int64 v18; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-E4h]
  int32_t reta; // [rsp+2Ch] [rbp-E4h]
  int32_t retb; // [rsp+2Ch] [rbp-E4h]
  ScenePtr p_scene_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 13 committer:165";
  *(_QWORD *)(v3 + 16) = Entity::enterScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  Position = Entity::getPosition(this);
  if ( !Scene::isPosValid(scene, Position) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.cpp",
      "enterScene",
      155);
    v7 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(&v26, this);
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" invalid scene pos ");
    v9 = Entity::getPosition(this);
    v10 = operator<<(v8, v9);
    v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" scene:");
    common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v11, scene);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v12 = -1;
  }
  else if ( Scene::isEntityExist(scene, this) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity.cpp",
      "enterScene",
      161);
    v13 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(&v26, this);
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" exists on ");
    common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v14, scene);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v12 = -1;
  }
  else
  {
    toThisPtr<Scene>((Scene *)&p_scene_ptr);
    Entity::setScene(this, &p_scene_ptr);
    std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
    std::function<void ()(void)>::function<Entity::enterScene(Scene &,VisionContext const&)::{lambda(void)#1},void,void>(
      (std::function<void()> *const)&v26,
      (Entity::enterScene::<lambda()>)this);
    common::tools::ScopedCommitter::ScopedCommitter(
      (common::tools::ScopedCommitter *const)(v3 + 48),
      (std::function<void()> *)&v26);
    std::function<void ()(void)>::~function((std::function<void()> *const)&v26);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = (unsigned __int64)(this->_vptr_DescribalBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8();
    ret = (*(__int64 (__fastcall **)(Entity *const, Scene *, const VisionContext *))v15)(this, scene, context);
    if ( ret )
    {
      v12 = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = (unsigned __int64)(scene->_vptr_DescribalBase + 13);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      reta = (*(__int64 (__fastcall **)(Scene *, Entity *const, const VisionContext *))v16)(scene, this, context);
      if ( reta )
      {
        v12 = reta;
      }
      else
      {
        Now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->enter_scene_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->enter_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->enter_scene_time_);
        }
        this->enter_scene_time_ = Now;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v18 = (unsigned __int64)(this->_vptr_DescribalBase + 9);
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8();
        retb = (*(__int64 (__fastcall **)(Entity *const, Scene *, const VisionContext *))v18)(this, scene, context);
        if ( retb )
        {
          v12 = retb;
        }
        else
        {
          common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v3 + 48));
          v12 = 0;
        }
      }
    }
    common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v3 + 48));
  }
  result = v12;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 165: range 0000000016606868-00000000166068ED
void __cdecl Entity::enterScene(Scene &,VisionContext const&)::{lambda(void)#1}::operator()(
        const Entity::enterScene::<lambda()> *const __closure)
{
  Entity *this; // rbx
  std::shared_ptr<Scene> p_scene_ptr; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  std::shared_ptr<Scene>::shared_ptr(&p_scene_ptr, 0LL);
  Entity::setScene(this, &p_scene_ptr);
  std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
};

// Line 179: range 0000000016606E94-0000000016606FA1
uint32_t __cdecl Entity::getSceneId(const Entity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t SceneId; // r14d
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:180";
  *(_QWORD *)(v1 + 16) = Entity::getSceneId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneId = Scene::getSceneId(v4);
  }
  else
  {
    SceneId = 0;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = SceneId;
  if ( v7 == (char *)v1 )
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

// Line 188: range 0000000016606FA2-00000000166070AF
uint32_t __cdecl Entity::getGroupId(const Entity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t GroupId; // r14d
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:189";
  *(_QWORD *)(v1 + 16) = Entity::getGroupId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Entity::getGroup((const Entity *const)(v1 + 32));
  if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    GroupId = Group::getGroupId(v4);
  }
  else
  {
    GroupId = 0;
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  result = GroupId;
  if ( v7 == (char *)v1 )
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

// Line 196: range 00000000166070B0-000000001660722C
uint32_t __cdecl Entity::getBlockId(const Entity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t block_id; // r14d
  uint32_t result; // eax
  const GroupInfoScriptConfig *info_config_ptr; // [rsp+18h] [rbp-78h]
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:197";
  *(_QWORD *)(v1 + 16) = Entity::getBlockId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Entity::getGroup((const Entity *const)(v1 + 32));
  if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL)
    && (v4 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
        (info_config_ptr = Group::getInfoScriptConfig(v4)) != 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&info_config_ptr->block_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info_config_ptr->block_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&info_config_ptr->block_id);
    }
    block_id = info_config_ptr->block_id;
  }
  else
  {
    block_id = 0;
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  result = block_id;
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

// Line 211: range 000000001660722E-000000001660738F
void __cdecl Entity::setBornPosition(Entity *const this, const Vector3 *pos)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 10);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(Entity *const, const Vector3 *))v2)(this, pos);
  if ( *(char *)(((unsigned __int64)&this->born_pos_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_pos_, 12LL);
  }
  if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  this->born_pos_ = *pos;
};

// Line 218: range 0000000016607390-0000000016607616
int32_t __cdecl Entity::checkPosition(Entity *const this, const Vector3 *pos)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  _BOOL4 v6; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:219";
  *(_QWORD *)(v2 + 16) = Entity::checkPosition;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.cpp",
      "checkPosition",
      222);
    v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v12, (const char (*)[15])"getScene fails");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    scene_script_config_ptr = Scene::getScriptConfig(v7);
    if ( scene_script_config_ptr )
    {
      v6 = !SceneScriptConfig::isPosValid(scene_script_config_ptr, pos);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/entity/entity.cpp",
        "checkPosition",
        228);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v12,
             (const char (*)[22])"getScriptConfig fails");
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v8, v9);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v6 = 0;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v6;
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

// Line 238: range 0000000016607618-00000000166077AE
// local variable allocation has failed, the output may be wrong!
float __fastcall Entity::getSlopeAngle(Vector3 rot)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  float result; // xmm0_4
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 12 7 dir:239 64 12 12 back_dir:240 96 12 7 rot:237";
  *(_QWORD *)(v1 + 16) = Entity::getSlopeAngle;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -219020288;
  v3[536862723] = -202177536;
  *(Vector3 *)(v1 + 96) = rot;
  *(Vector3 *)(v1 + 32) = rotationToDirection((const Vector3 *)(v1 + 96), 1);
  Vector3::Vector3((Vector3 *const)(v1 + 64), -*(float *)(v1 + 32), -*(float *)(v1 + 36), -*(float *)(v1 + 40));
  result = calcTwoDirAngle(&Vector3::up, (const Vector3 *)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 246: range 00000000166077B0-00000000166078EA
void __cdecl Entity::getMotionInfo(const Entity *const this, proto::MotionInfo *motion_info)
{
  proto::Vector *proto_pos; // [rsp+18h] [rbp-38h]
  proto::Vector *proto_rot; // [rsp+20h] [rbp-30h]
  proto::Vector *proto_speed; // [rsp+28h] [rbp-28h]
  proto::Vector from; // [rsp+30h] [rbp-20h] BYREF

  proto_pos = proto::MotionInfo::mutable_pos(motion_info);
  Vector3::operator proto::Vector(&from, &this->position_);
  proto::Vector::operator=(proto_pos, &from);
  proto::Vector::~Vector(&from);
  proto_rot = proto::MotionInfo::mutable_rot(motion_info);
  Vector3::operator proto::Vector(&from, &this->rotation_);
  proto::Vector::operator=(proto_rot, &from);
  proto::Vector::~Vector(&from);
  proto_speed = proto::MotionInfo::mutable_speed(motion_info);
  Vector3::operator proto::Vector(&from, &this->speed_);
  proto::Vector::operator=(proto_speed, &from);
  proto::Vector::~Vector(&from);
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  proto::MotionInfo::set_state(motion_info, this->motion_state_);
};

// Line 258: range 00000000166078EC-00000000166084E2
int32_t __cdecl Entity::setMotionInfo(
        Entity *const this,
        const proto::MotionInfo *motion_info,
        MotionContext *motion_context)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  int (__fastcall *v9)(Entity *const, const proto::MotionInfo *, _QWORD); // r8
  common::milog::MiLogStream *v10; // rdx
  const proto::Vector *v11; // rsi
  unsigned __int64 v12; // rax
  const Vector3 *Position; // rax
  _DWORD *p_x; // rdx
  const Vector3 *v16; // rdx
  float *p_z; // rax
  const proto::Vector *v18; // rax
  const proto::Vector *v19; // rax
  uint32_t v20; // edi
  unsigned __int64 v21; // rax
  unsigned int (__fastcall *v22)(Entity *const, __int64, unsigned __int64, MotionContext *); // r14
  __int64 v23; // rsi
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  Scene *v29; // rcx
  common::milog::MiLogStream *v30; // rdx
  Scene *v31; // rsi
  uint32_t reliable_seq; // ecx
  uint32_t scene_time_ms; // ecx
  int32_t result; // eax
  bool is_broadcast; // [rsp+23h] [rbp-13Dh]
  Vector3 v39; // [rsp+24h] [rbp-13Ch] BYREF
  std::vector<unsigned int> __x; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v41; // [rsp+50h] [rbp-110h] BYREF
  std::string val; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v43; // [rsp+90h] [rbp-D0h] BYREF
  char v44[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 7 pos:271 64 12 9 speed:298 96 16 13 scene_ptr:259";
  *(_QWORD *)(v3 + 16) = Entity::setMotionInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -202178560;
  Entity::getScene((const Entity *const)(v3 + 96));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.cpp",
      "setMotionInfo",
      262);
    v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v43,
           (const char (*)[23])"entity is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(int (__fastcall **)(Entity *const, const proto::MotionInfo *, _QWORD))v8;
    if ( *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(motion_context);
    }
    if ( v9(this, motion_info, motion_context->scene_time_ms) >= 0 )
    {
      is_broadcast = 1;
      v11 = proto::MotionInfo::pos(motion_info);
      Vector3::Vector3((Vector3 *const)(v3 + 32), v11);
      switch ( proto::MotionInfo::state(motion_info) )
      {
        case MOTION_NONE:
          v7 = 0;
          break;
        case MOTION_FIGHT:
        case MOTION_LAND_SPEED:
          if ( *(char *)(((unsigned __int64)&motion_context->is_do_move >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&motion_context->is_do_move);
          motion_context->is_do_move = 0;
          is_broadcast = 0;
          goto LABEL_35;
        case MOTION_FALL_ON_GROUND:
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v12 = (unsigned __int64)(this->_vptr_DescribalBase + 3);
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v12 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(Entity *const))v12)(this) == 1
            && *(float *)(v3 + 32) < 0.00000011920929
            && *(float *)(v3 + 40) < 0.00000011920929 )
          {
            Position = Entity::getPosition(this);
            p_x = (_DWORD *)&Position->x;
            if ( *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)Position & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(Position);
            }
            *(_DWORD *)(v3 + 32) = *p_x;
            v16 = Entity::getPosition(this);
            p_z = &v16->z;
            if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_z);
            }
            *(float *)(v3 + 40) = v16->z;
          }
          goto LABEL_35;
        case MOTION_NOTIFY:
          is_broadcast = 0;
          goto LABEL_35;
        default:
LABEL_35:
          v18 = proto::MotionInfo::speed(motion_info);
          Vector3::Vector3((Vector3 *const)(v3 + 64), v18);
          if ( *(char *)(((unsigned __int64)&motion_context->is_do_move >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&motion_context->is_do_move);
          if ( !motion_context->is_do_move )
            goto LABEL_52;
          v19 = proto::MotionInfo::rot(motion_info);
          Vector3::Vector3(&v39, v19);
          if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_store_n(&this->rotation_, 12LL);
          }
          this->rotation_ = v39;
          if ( *(char *)(((unsigned __int64)&this->speed_ >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_store_n(&this->speed_, 12LL);
          }
          this->speed_ = *(Vector3 *)(v3 + 64);
          v20 = proto::MotionInfo::interval_velocity(motion_info);
          if ( *(_BYTE *)(((unsigned __int64)&motion_context->interval_velocity >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)motion_context + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&motion_context->interval_velocity >> 3)
                                                                          + 0x7FFF8000) )
          {
            v20 = (_DWORD)motion_context + 20;
            __asan_report_store4(&motion_context->interval_velocity);
          }
          motion_context->interval_velocity = v20;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v21 = (unsigned __int64)(this->_vptr_DescribalBase + 14);
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8();
          v22 = *(unsigned int (__fastcall **)(Entity *const, __int64, unsigned __int64, MotionContext *))v21;
          v23 = (unsigned int)proto::MotionInfo::state(motion_info);
          if ( v22(this, v23, v3 + 32, motion_context) )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/entity/entity.cpp",
              "setMotionInfo",
              306);
            v24 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v41,
                    (const char (*)[30])"checkMoveSpeed fails, target:");
            Vector3::toString[abi:cxx11](&val, (const Vector3 *const)(v3 + 32));
            v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &val);
            v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])" cur_pos:");
            Vector3::toString[abi:cxx11]((std::string *)&v43, &this->position_);
            v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)&v43);
            v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" entity:");
            common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v28, this);
            std::string::~string(&v43);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v41);
            v7 = -1;
          }
          else
          {
            v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( Scene::entityMoveTo(v29, this, (const Vector3 *)(v3 + 32)) )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/entity/entity.cpp",
                "setMotionInfo",
                311);
              v30 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      &v43,
                      (const char (*)[19])"entityMoveTo fails");
              common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v30, this);
              common::milog::MiLogStream::~MiLogStream(&v43);
              v7 = -1;
            }
            else
            {
LABEL_52:
              if ( is_broadcast )
              {
                if ( *(char *)(((unsigned __int64)&motion_context->is_notify >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(&motion_context->is_notify);
                if ( motion_context->is_notify )
                  Entity::broadcastMotionInfo(this, motion_info, motion_context);
                v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                if ( *(_BYTE *)(((unsigned __int64)&motion_context->exclude_uid >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)motion_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&motion_context->exclude_uid >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(&motion_context->exclude_uid);
                }
                Scene::getViewingPlayers(&__x, v31, this, motion_context->exclude_uid, 1);
                std::vector<unsigned int>::operator=(&motion_context->sync_uid_vec, &__x);
                std::vector<unsigned int>::~vector(&__x);
              }
              if ( *(_BYTE *)(((unsigned __int64)&motion_context->reliable_seq >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)motion_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&motion_context->reliable_seq >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(&motion_context->reliable_seq);
              }
              reliable_seq = motion_context->reliable_seq;
              if ( *(_BYTE *)(((unsigned __int64)&this->last_move_reliable_seq_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->last_move_reliable_seq_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&this->last_move_reliable_seq_);
              }
              this->last_move_reliable_seq_ = reliable_seq;
              if ( *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(motion_context);
              }
              scene_time_ms = motion_context->scene_time_ms;
              if ( *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_store4(&this->last_move_scene_time_ms_);
              }
              this->last_move_scene_time_ms_ = scene_time_ms;
              v7 = 0;
            }
          }
          break;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/entity/entity.cpp",
        "setMotionInfo",
        267);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v43,
              (const char (*)[21])"setMotionState fails");
      common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v10, this);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v7 = -1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  result = v7;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 330: range 00000000166084E4-0000000016608A55
int32_t __cdecl Entity::forceSetMotionInfo(
        Entity *const this,
        const proto::MotionInfo *motion_info,
        uint32_t scene_time_ms)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rdx
  const proto::Vector *v10; // rax
  const proto::Vector *v11; // rax
  const proto::Vector *v12; // rax
  Scene *v13; // rcx
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  Vector3 v17; // [rsp+24h] [rbp-BCh] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 7 pos:343 64 16 13 scene_ptr:331";
  *(_QWORD *)(v3 + 16) = Entity::forceSetMotionInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -202178560;
  Entity::getScene((const Entity *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.cpp",
      "forceSetMotionInfo",
      334);
    v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v18,
           (const char (*)[23])"entity is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    if ( (*(int (__fastcall **)(Entity *const, const proto::MotionInfo *, _QWORD))v8)(this, motion_info, scene_time_ms) >= 0 )
    {
      v10 = proto::MotionInfo::pos(motion_info);
      Vector3::Vector3((Vector3 *const)(v3 + 32), v10);
      v11 = proto::MotionInfo::rot(motion_info);
      Vector3::Vector3(&v17, v11);
      if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store_n(&this->rotation_, 12LL);
      }
      this->rotation_ = v17;
      v12 = proto::MotionInfo::speed(motion_info);
      Vector3::Vector3(&v17, v12);
      if ( *(char *)(((unsigned __int64)&this->speed_ >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&this->speed_, 12LL);
      }
      this->speed_ = v17;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->last_move_scene_time_ms_);
      }
      this->last_move_scene_time_ms_ = scene_time_ms;
      v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Scene::entityMoveTo(v13, this, (const Vector3 *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/entity/entity.cpp",
          "forceSetMotionInfo",
          349);
        v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v18,
                (const char (*)[19])"entityMoveTo fails");
        common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v14, this);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/entity/entity.cpp",
        "forceSetMotionInfo",
        339);
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v18,
             (const char (*)[21])"setMotionState fails");
      common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v7 = -1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v7;
  if ( v19 == (char *)v3 )
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

// Line 357: range 0000000016608A56-0000000016608C14
int32_t __cdecl Entity::setMotionState(
        Entity *const this,
        const proto::MotionInfo *motion_info,
        uint32_t scene_time_ms)
{
  int motion_state; // [rsp+2Ch] [rbp-4h]

  motion_state = proto::MotionInfo::state(motion_info);
  if ( motion_state == 43 )
    return 1;
  if ( !motion_state || motion_state >= 0 && (unsigned int)(motion_state - 37) <= 1 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  if ( motion_state == this->motion_state_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  if ( this->motion_state_ == MOTION_FIGHT && motion_state != 10 )
  {
    if ( *(char *)(((unsigned __int64)&this->is_move_sent_reliable_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_move_sent_reliable_);
    this->is_move_sent_reliable_ = 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->motion_state_);
  }
  this->motion_state_ = motion_state;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_motion_state_change_time_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_motion_state_change_time_ms_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_motion_state_change_time_ms_);
  }
  this->last_motion_state_change_time_ms_ = scene_time_ms;
  return 0;
};

// Line 388: range 0000000016608C16-00000000166095E3
int32_t __cdecl Entity::broadcastMotionInfo(
        Entity *const this,
        const proto::MotionInfo *motion_info,
        const MotionContext *motion_context)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  common::minet::Packet *v8; // rax
  Scene *v10; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rax
  _DWORD *v12; // rdx
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  proto::SceneEntitiesMoveCombineNotify *v15; // rax
  proto::SceneEntityMoveNotify *v16; // rcx
  proto::SceneEntityMoveNotify *v17; // rax
  proto::SceneEntityMoveNotify *v18; // rcx
  proto::SceneEntityMoveNotify *v19; // rcx
  Scene *v20; // r15
  uint32_t exclude_uid; // r14d
  int32_t result; // eax
  bool can_merge; // [rsp+2Eh] [rbp-182h]
  bool is_reliable; // [rsp+2Fh] [rbp-181h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  proto::MotionInfo *proto_motion_info_0; // [rsp+40h] [rbp-170h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-168h]
  proto::EntityMoveInfo *move_info; // [rsp+50h] [rbp-160h]
  proto::MotionInfo *proto_motion_info; // [rsp+58h] [rbp-158h]
  common::milog::MiLogStream v33; // [rsp+60h] [rbp-150h] BYREF
  char v34[304]; // [rsp+80h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 uid:416 64 16 13 scene_ptr:389 96 16 26 pending_moves_info_ptr:412 128 16 14 notify_ptr"
                        ":435 160 16 18 cur_packet_ptr:400 192 24 11 uid_vec:415";
  *(_QWORD *)(v3 + 16) = Entity::broadcastMotionInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  Entity::getScene((const Entity *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity.cpp",
      "broadcastMotionInfo",
      392);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v33, (const char (*)[15])"getScene fails");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v7 = -1;
  }
  else
  {
    can_merge = 1;
    if ( *(char *)(((unsigned __int64)&motion_context->is_reliable >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&motion_context->is_reliable);
    is_reliable = motion_context->is_reliable;
    if ( *(char *)(((unsigned __int64)&this->is_move_sent_reliable_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_move_sent_reliable_);
    if ( this->is_move_sent_reliable_ )
    {
      CoroutineHelper::getContextPacketPtr();
      if ( std::operator!=<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 160), 0LL) )
      {
        v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        common::minet::Packet::setEnetIsReliable(v8, 1u);
      }
      if ( !is_reliable )
        can_merge = 0;
      if ( *(char *)(((unsigned __int64)&this->is_move_sent_reliable_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_move_sent_reliable_);
      this->is_move_sent_reliable_ = 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 160));
    }
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Scene::getPendingMovesInfo((const Scene *const)(v3 + 96));
    if ( can_merge
      && std::operator!=<SceneEntityMovesInfo>((const std::shared_ptr<SceneEntityMovesInfo> *)(v3 + 96), 0LL) )
    {
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&motion_context->exclude_uid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)motion_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&motion_context->exclude_uid >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&motion_context->exclude_uid);
      }
      Scene::getViewingPlayers((std::vector<unsigned int> *)(v3 + 192), v10, this, motion_context->exclude_uid, 1);
      __for_range = (std::vector<unsigned int> *)(v3 + 192);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 192))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 192))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        *(_DWORD *)(v3 + 48) = *v12;
        v13 = (unsigned int)std::__shared_ptr_access<SceneEntityMovesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneEntityMovesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        SceneEntityMovesInfo::getNotifyPtr((SceneEntityMovesInfo *const)(v3 + 160), v13);
        if ( std::operator==<proto::SceneEntitiesMoveCombineNotify>(
               (const std::shared_ptr<proto::SceneEntitiesMoveCombineNotify> *)(v3 + 160),
               0LL) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/entity/entity.cpp",
            "broadcastMotionInfo",
            421);
          v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v33,
                  (const char (*)[26])"getNotifyPtr fails, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          v15 = std::__shared_ptr_access<proto::SceneEntitiesMoveCombineNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SceneEntitiesMoveCombineNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          move_info = proto::SceneEntitiesMoveCombineNotify::add_entity_move_info_list(v15);
          if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->entity_id_);
          }
          proto::EntityMoveInfo::set_entity_id(move_info, this->entity_id_);
          proto_motion_info = proto::EntityMoveInfo::mutable_motion_info(move_info);
          proto::MotionInfo::operator=(proto_motion_info, motion_info);
          if ( *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(motion_context);
          }
          proto::EntityMoveInfo::set_scene_time(move_info, motion_context->scene_time_ms);
          if ( *(_BYTE *)(((unsigned __int64)&motion_context->reliable_seq >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)motion_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&motion_context->reliable_seq >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&motion_context->reliable_seq);
          }
          proto::EntityMoveInfo::set_reliable_seq(move_info, motion_context->reliable_seq);
        }
        std::shared_ptr<proto::SceneEntitiesMoveCombineNotify>::~shared_ptr((std::shared_ptr<proto::SceneEntitiesMoveCombineNotify> *const)(v3 + 160));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v7 = 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
    }
    else
    {
      common::tools::perf::make_shared<proto::SceneEntityMoveNotify>();
      v16 = std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->entity_id_);
      }
      proto::SceneEntityMoveNotify::set_entity_id(v16, this->entity_id_);
      v17 = std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      proto_motion_info_0 = proto::SceneEntityMoveNotify::mutable_motion_info(v17);
      proto::MotionInfo::operator=(proto_motion_info_0, motion_info);
      v18 = std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(motion_context);
      }
      proto::SceneEntityMoveNotify::set_scene_time(v18, motion_context->scene_time_ms);
      v19 = std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&motion_context->reliable_seq >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)motion_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&motion_context->reliable_seq >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&motion_context->reliable_seq);
      }
      proto::SceneEntityMoveNotify::set_reliable_seq(v19, motion_context->reliable_seq);
      v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&motion_context->exclude_uid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)motion_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&motion_context->exclude_uid >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&motion_context->exclude_uid);
      }
      exclude_uid = motion_context->exclude_uid;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::SceneEntityMoveNotify>((const std::shared_ptr<proto::SceneEntityMoveNotify> *)(v3 + 160));
      v7 = Scene::notifyViewingPlayersExclude(v20, this, (common::minet::ConstMessagePtr *)(v3 + 160), exclude_uid, 1);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v3 + 160));
      std::shared_ptr<proto::SceneEntityMoveNotify>::~shared_ptr((std::shared_ptr<proto::SceneEntityMoveNotify> *const)(v3 + 128));
    }
    std::shared_ptr<SceneEntityMovesInfo>::~shared_ptr((std::shared_ptr<SceneEntityMovesInfo> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v7;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 447: range 00000000166095E4-0000000016609708
void __cdecl Entity::getLastMoveNotify(Entity *const this, proto::SceneEntityMoveNotify *notify)
{
  proto::MotionInfo *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_id_);
  }
  proto::SceneEntityMoveNotify::set_entity_id(notify, this->entity_id_);
  v2 = proto::SceneEntityMoveNotify::mutable_motion_info(notify);
  Entity::getMotionInfo(this, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_move_scene_time_ms_);
  }
  proto::SceneEntityMoveNotify::set_scene_time(notify, this->last_move_scene_time_ms_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_reliable_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_move_reliable_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_move_reliable_seq_);
  }
  proto::SceneEntityMoveNotify::set_reliable_seq(notify, this->last_move_reliable_seq_);
};

// Line 457: range 000000001660970A-0000000016609A2F
int32_t __cdecl Entity::notifyLastMotionInfo(Entity *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  bool v7; // r14
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(Entity *const, std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r14
  std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  int32_t result; // eax
  std::shared_ptr<Player> __b; // [rsp+10h] [rbp-A0h] BYREF
  char v13[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 20 owner_player_ptr:460 64 16 14 notify_ptr:463";
  *(_QWORD *)(v2 + 16) = Entity::notifyLastMotionInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  if ( this->motion_state_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Entity *const))v6)(v2 + 32, this);
    toThisPtr<Player>((Player *)&__b);
    v7 = std::operator==<Player,Player>((const std::shared_ptr<Player> *)(v2 + 32), &__b);
    std::shared_ptr<Player>::~shared_ptr(&__b);
    if ( v7 )
    {
      v5 = 0;
    }
    else
    {
      common::tools::perf::make_shared<proto::SceneEntityMoveNotify>();
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(this->_vptr_DescribalBase + 29);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(void (__fastcall **)(Entity *const, std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8;
      v10 = std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v9(this, v10);
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::SceneEntityMoveNotify>((const std::shared_ptr<proto::SceneEntityMoveNotify> *)&__b);
      v5 = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__b, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__b);
      std::shared_ptr<proto::SceneEntityMoveNotify>::~shared_ptr((std::shared_ptr<proto::SceneEntityMoveNotify> *const)(v2 + 64));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 469: range 0000000016609A30-0000000016609C4F
int32_t __cdecl Entity::notifyLastMotionInfo(Entity *const this, std::vector<unsigned int> *uid_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(Entity *const, std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r14
  std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  GameserverService *v9; // rax
  PlayerMgr *p_player_mgr; // r14
  int32_t result; // eax
  std::shared_ptr<proto::SceneEntityMoveNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v13[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:472";
  *(_QWORD *)(v2 + 16) = Entity::notifyLastMotionInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  if ( this->motion_state_ )
  {
    common::tools::perf::make_shared<proto::SceneEntityMoveNotify>();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(this->_vptr_DescribalBase + 29);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(void (__fastcall **)(Entity *const, std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6;
    v8 = std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneEntityMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7(this, v8);
    v9 = ServiceBox::findService<GameserverService>();
    p_player_mgr = &GameserverService::getGameThreadLocal(v9)->player_mgr;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::SceneEntityMoveNotify>(&__r);
    v5 = PlayerMgr::sendToPlayerList<google::protobuf::Message>(
           p_player_mgr,
           uid_vec,
           (common::minet::ConstMessagePtr *)&__r);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::SceneEntityMoveNotify>::~shared_ptr((std::shared_ptr<proto::SceneEntityMoveNotify> *const)(v2 + 32));
  }
  else
  {
    v5 = 0;
  }
  result = v5;
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

// Line 479: range 0000000016609C50-0000000016609FC8
// local variable allocation has failed, the output may be wrong!
EntityPtr __cdecl Entity::findEntityInSameScene(const Entity *const this, uint32_t entity_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  EntityPtr result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  bool *p_is_find_entity_same_scene_with_dead; // rax
  bool v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  void (__fastcall *v12)(const Entity *const, unsigned __int64, _QWORD); // r8
  unsigned __int64 v13; // rdx
  uint32_t entity_ida; // [rsp+Ch] [rbp-94h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF

  entity_ida = v2;
  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 scene_ptr:484";
  *(_QWORD *)(v3 + 16) = Entity::findEntityInSameScene;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&entity_id + 256LL) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&entity_id + 256LL) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(*(_QWORD *)&entity_id + 256LL);
  }
  if ( entity_ida == *(_DWORD *)(*(_QWORD *)&entity_id + 256LL) )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = toThisPtr<Entity>((Entity *)this);
  }
  else
  {
    Entity::getScene((const Entity *const)(v3 + 32));
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
      p_is_find_entity_same_scene_with_dead = &v7->is_find_entity_same_scene_with_dead;
      if ( *(_BYTE *)(((unsigned __int64)p_is_find_entity_same_scene_with_dead >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_find_entity_same_scene_with_dead & 7) >= *(_BYTE *)(((unsigned __int64)p_is_find_entity_same_scene_with_dead >> 3)
                                                                                    + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_find_entity_same_scene_with_dead);
      }
      v9 = !v7->is_find_entity_same_scene_with_dead;
      std::shared_ptr<Config>::~shared_ptr(&v15);
      if ( v9 )
      {
        v10 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = *(_QWORD *)v10 + 120LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v12 = *(void (__fastcall **)(const Entity *const, unsigned __int64, _QWORD))v11;
        if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          v10 = __asan_report_store16(this);
      }
      else
      {
        v10 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v13 = *(_QWORD *)v10 + 128LL;
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v12 = *(void (__fastcall **)(const Entity *const, unsigned __int64, _QWORD))v13;
        if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          v10 = __asan_report_store16(this);
      }
      v12(this, v10, entity_ida);
    }
    else
    {
      std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)this, 0LL);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
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
  result._M_ptr = (std::__shared_ptr<Entity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 501: range 0000000016609FCA-000000001660A2FB
int32_t __cdecl Entity::leaveScene(Entity *const this, const VisionContext *context)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // r14
  unsigned __int64 v10; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:504";
  *(_QWORD *)(v2 + 16) = Entity::leaveScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  ret = (*(__int64 (__fastcall **)(Entity *const, const VisionContext *))v5)(this, context);
  if ( ret )
  {
    v6 = ret;
  }
  else
  {
    Entity::getScene((const Entity *const)(v2 + 32));
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
    {
      v7 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = *(_QWORD *)v7 + 112LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      ret = (*(__int64 (__fastcall **)(unsigned __int64, Entity *const, const VisionContext *))v8)(v7, this, context);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/entity/entity.cpp",
        "leaveScene",
        511);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v14,
             (const char (*)[30])"scene is nullptr, config_id: ");
      val = Entity::getConfigId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    if ( ret )
    {
      v6 = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = (unsigned __int64)(this->_vptr_DescribalBase + 18);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v6 = (*(__int64 (__fastcall **)(Entity *const, const VisionContext *))v10)(this, context);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 518: range 000000001660A2FC-000000001660A457
uint32_t __cdecl Entity::getPlayerUid(const Entity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t Uid; // r14d
  uint32_t result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:519";
  *(_QWORD *)(v1 + 16) = Entity::getPlayerUid;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, const Entity *const))v4)(v1 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Uid = Player::getUid(v5);
  }
  else
  {
    Uid = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = Uid;
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

// Line 529: range 000000001660A458-000000001660A8A0
int32_t __cdecl Entity::toClient(const Entity *const this, proto::SceneEntityInfo *entity_info, Player *player)
{
  unsigned __int64 v3; // rax
  proto::ProtEntityType v4; // edx
  const EntityAnimatorComp *AnimatorComp; // rdx
  proto::EntityAuthorityInfo *v6; // rax
  unsigned __int64 v7; // rax
  proto::EntityAuthorityInfo *v8; // rax
  proto::Vector *v9; // rax
  const Vector3 *SkillAnchorPosition; // rbx
  proto::Vector *v11; // rax
  proto::EntityClientData *v12; // rax
  proto::ProtEntityType entity_type; // [rsp+24h] [rbp-6Ch]
  proto::MotionInfo *proto_motion_info; // [rsp+28h] [rbp-68h]
  proto::Vector *proto_pos; // [rsp+30h] [rbp-60h]
  proto::Vector *proto_rot; // [rsp+38h] [rbp-58h]
  proto::Vector *proto_speed; // [rsp+40h] [rbp-50h]
  proto::SceneEntityAiInfo *ai_info; // [rsp+48h] [rbp-48h]
  proto::EntityAuthorityInfo *entity_authority_info; // [rsp+50h] [rbp-40h]
  proto::EntityClientExtraInfo *entity_client_extra_info; // [rsp+58h] [rbp-38h]
  proto::Vector from; // [rsp+60h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  entity_type = (*(unsigned int (__fastcall **)(const Entity *const))v3)(this);
  v4 = (unsigned int)toClient(entity_type);
  proto::SceneEntityInfo::set_entity_type(entity_info, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_id_);
  }
  proto::SceneEntityInfo::set_entity_id(entity_info, this->entity_id_);
  proto::SceneEntityInfo::set_name(entity_info, &this->name_);
  proto_motion_info = proto::SceneEntityInfo::mutable_motion_info(entity_info);
  proto_pos = proto::MotionInfo::mutable_pos(proto_motion_info);
  Vector3::operator proto::Vector(&from, &this->position_);
  proto::Vector::operator=(proto_pos, &from);
  proto::Vector::~Vector(&from);
  proto_rot = proto::MotionInfo::mutable_rot(proto_motion_info);
  Vector3::operator proto::Vector(&from, &this->rotation_);
  proto::Vector::operator=(proto_rot, &from);
  proto::Vector::~Vector(&from);
  proto_speed = proto::MotionInfo::mutable_speed(proto_motion_info);
  Vector3::operator proto::Vector(&from, &this->speed_);
  proto::Vector::operator=(proto_speed, &from);
  proto::Vector::~Vector(&from);
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  proto::MotionInfo::set_state(proto_motion_info, this->motion_state_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_move_scene_time_ms_);
  }
  proto::SceneEntityInfo::set_last_move_scene_time_ms(entity_info, this->last_move_scene_time_ms_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_reliable_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_move_reliable_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_move_reliable_seq_);
  }
  proto::SceneEntityInfo::set_last_move_reliable_seq(entity_info, this->last_move_reliable_seq_);
  AnimatorComp = Entity::getAnimatorComp(this);
  EntityAnimatorComp::toClient(AnimatorComp, entity_info);
  v6 = proto::SceneEntityInfo::mutable_entity_authority_info(entity_info);
  ai_info = proto::EntityAuthorityInfo::mutable_ai_info(v6);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 6);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(const Entity *const, proto::SceneEntityAiInfo *))v7)(this, ai_info);
  Vector3::operator proto::Vector(&from, &this->born_pos_);
  v8 = proto::SceneEntityInfo::mutable_entity_authority_info(entity_info);
  v9 = proto::EntityAuthorityInfo::mutable_born_pos(v8);
  proto::Vector::operator=(v9, &from);
  proto::Vector::~Vector(&from);
  entity_authority_info = proto::SceneEntityInfo::mutable_entity_authority_info(entity_info);
  entity_client_extra_info = proto::EntityAuthorityInfo::mutable_client_extra_info(entity_authority_info);
  SkillAnchorPosition = Entity::getSkillAnchorPosition(this);
  v11 = proto::EntityClientExtraInfo::mutable_skill_anchor_position(entity_client_extra_info);
  Vector3::toClient(SkillAnchorPosition, v11);
  v12 = proto::SceneEntityInfo::mutable_entity_client_data(entity_info);
  google::protobuf::MessageLite::ParseFromString(v12, &this->client_data_);
  return 0;
};

// Line 560: range 000000001660A8A2-000000001660ACD6
int32_t __cdecl Entity::toClient(const Entity *const this, proto::SceneEntityAiInfo *ai_info)
{
  proto::Vector *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v3; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v4; // ebx
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v8; // ebx
  unsigned int *v9; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v10; // rdx
  std::__shared_ptr_access<proto::ServantInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rbx
  proto::ServantInfo *v12; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v13; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *skill_cd_map; // [rsp+20h] [rbp-80h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-78h]
  google::protobuf::Map<unsigned int,unsigned int> *skill_group_cd_map; // [rsp+30h] [rbp-70h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v21; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *skill_group_id; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *skill_cd_0; // [rsp+50h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v24; // [rsp+58h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+60h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *skill_cd; // [rsp+68h] [rbp-38h]
  proto::Vector from; // [rsp+70h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->ai_info_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->ai_info_);
  proto::SceneEntityAiInfo::set_is_ai_open(ai_info, this->ai_info_.is_ai_open);
  Vector3::operator proto::Vector(&from, &this->born_pos_);
  v2 = proto::SceneEntityAiInfo::mutable_born_pos(ai_info);
  proto::Vector::operator=(v2, &from);
  proto::Vector::~Vector(&from);
  skill_cd_map = proto::SceneEntityAiInfo::mutable_skill_cd_map(ai_info);
  __for_range = &this->ai_info_.skill_cd_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->ai_info_.skill_cd_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->ai_info_.skill_cd_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    skill_id = std::get<0ul,unsigned int const,unsigned int>(v24);
    v3 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v24);
    skill_cd = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v4 = *skill_cd;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](skill_cd_map, skill_id);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v4;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  skill_group_cd_map = proto::SceneEntityAiInfo::mutable_skill_group_cd_map(ai_info);
  __for_range_0 = &this->ai_info_.skill_group_cd_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->ai_info_.skill_group_cd_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    skill_group_id = std::get<0ul,unsigned int const,unsigned int>(v21);
    v7 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v21);
    skill_cd_0 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v8 = *skill_cd_0;
    v9 = google::protobuf::Map<unsigned int,unsigned int>::operator[](skill_group_cd_map, skill_group_id);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = v8;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( std::operator!=<proto::ServantInfo>(&this->ai_info_.servant_info_ptr, 0LL) )
  {
    v11 = std::__shared_ptr_access<proto::ServantInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServantInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ai_info_.servant_info_ptr);
    v12 = proto::SceneEntityAiInfo::mutable_servant_info(ai_info);
    proto::ServantInfo::operator=(v12, v11);
  }
  v13 = proto::SceneEntityAiInfo::mutable_ai_threat_map(ai_info);
  google::protobuf::Map<unsigned int,unsigned int>::operator=(v13, &this->ai_info_.ai_threat_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_info_.cur_tactic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_info_.cur_tactic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ai_info_.cur_tactic);
  }
  proto::SceneEntityAiInfo::set_cur_tactic(ai_info, this->ai_info_.cur_tactic);
  return 0;
};

// Line 586: range 000000001660ACD8-000000001660AE6A
int32_t __cdecl Entity::beforeEnterPlayerView(Entity *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Group *v5; // rcx
  int32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 group_ptr:588";
  *(_QWORD *)(v2 + 16) = Entity::beforeEnterPlayerView;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  toThisPtr<Player>((Player *)(v2 + 32));
  EntityViewMgr::onPlayerDoView(&this->view_mgr_, (const PlayerPtr *)(v2 + 32));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  Entity::getGroup((const Entity *const)(v2 + 32));
  if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Group::onEnterPlayerView(v5, player, this);
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  result = 0;
  if ( v7 == (char *)v2 )
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

// Line 598: range 000000001660AE6C-000000001660AE7E
int32_t __cdecl Entity::onEnterPlayerView(Entity *const this, Player *player)
{
  return 0;
};

// Line 604: range 000000001660AE80-000000001660B012
int32_t __cdecl Entity::onExitPlayerView(Entity *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Group *v5; // rcx
  int32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 group_ptr:606";
  *(_QWORD *)(v2 + 16) = Entity::onExitPlayerView;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  toThisPtr<Player>((Player *)(v2 + 32));
  EntityViewMgr::onPlayerUndoView(&this->view_mgr_, (const PlayerPtr *)(v2 + 32));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  Entity::getGroup((const Entity *const)(v2 + 32));
  if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Group::onExitPlayerView(v5, player, this);
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  result = 0;
  if ( v7 == (char *)v2 )
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

// Line 618: range 000000001660B014-000000001660B800
__int64 __fastcall Entity::buildDropParamForPlayer(
        Entity *const this,
        uint32_t drop_id,
        uint32_t drop_count,
        Player *player,
        unsigned __int64 drop_param)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t v8; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int v16; // r14d
  uint32_t entity_id; // ecx
  uint32_t Uid; // ecx
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  __int64 result; // rax
  std::enable_shared_from_this<Entity> v25; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 11 drop_id:614 64 16 15 monster_ptr:634";
  *(_QWORD *)(v5 + 16) = Entity::buildDropParamForPlayer;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = drop_id;
  v8 = *(_DWORD *)(v5 + 48);
  if ( *(_BYTE *)((drop_param >> 3) + 0x7FFF8000) != 0
    && (char)((drop_param & 7) + 3) >= *(_BYTE *)((drop_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(drop_param);
  }
  *(_DWORD *)drop_param = v8;
  if ( *(_BYTE *)(((drop_param + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((drop_param + 4) & 7) + 3) >= *(_BYTE *)(((drop_param + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(drop_param + 4);
  }
  *(_DWORD *)(drop_param + 4) = drop_count;
  if ( *(_DWORD *)drop_param && *(_DWORD *)(drop_param + 4) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->entity_id_);
    }
    entity_id = this->entity_id_;
    if ( *(_BYTE *)(((drop_param + 8) >> 3) + 0x7FFF8000) != 0
      && (char)(((drop_param + 8) & 7) + 3) >= *(_BYTE *)(((drop_param + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(drop_param + 8);
    }
    *(_DWORD *)(drop_param + 8) = entity_id;
    Uid = Player::getUid(player);
    if ( *(_BYTE *)(((drop_param + 12) >> 3) + 0x7FFF8000) != 0
      && (char)(((drop_param + 12) & 7) + 3) >= *(_BYTE *)(((drop_param + 12) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(drop_param + 12);
    }
    *(_DWORD *)(drop_param + 12) = Uid;
    if ( (char)((drop_param + 16) & 7) >= *(_BYTE *)(((drop_param + 16) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((drop_param + 16) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((drop_param + 27) >> 3) + 0x7FFF8000) != 0
      && (char)((drop_param + 27) & 7) >= *(_BYTE *)(((drop_param + 27) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(drop_param + 16, 12LL);
    }
    if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(&this->position_, 12LL);
    }
    *(Vector3 *)(drop_param + 16) = this->position_;
    if ( (char)((drop_param + 28) & 7) >= *(_BYTE *)(((drop_param + 28) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((drop_param + 28) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((drop_param + 39) >> 3) + 0x7FFF8000) != 0
      && (char)((drop_param + 39) & 7) >= *(_BYTE *)(((drop_param + 39) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(drop_param + 28, 12LL);
    }
    if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(&this->rotation_, 12LL);
    }
    *(Vector3 *)(drop_param + 28) = this->rotation_;
    std::enable_shared_from_this<Entity>::shared_from_this(&v25);
    std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v5 + 64));
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)&v25);
    if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v5 + 64)) )
    {
      v19 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( Creature::getDieType(v19) == PLAYER_DIE_ABYSS )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/entity/entity.cpp",
          "buildDropParamForPlayer",
          639);
        v20 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v26, (const char (*)[42])off_25D33F20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->entity_id_);
        common::milog::MiLogStream::~MiLogStream(&v26);
        if ( (char)((drop_param + 16) & 7) >= *(_BYTE *)(((drop_param + 16) >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((drop_param + 16) >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((drop_param + 27) >> 3) + 0x7FFF8000) != 0
          && (char)((drop_param + 27) & 7) >= *(_BYTE *)(((drop_param + 27) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(drop_param + 16, 12LL);
        }
        if ( *(char *)(((unsigned __int64)&this->born_pos_ >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load_n(&this->born_pos_, 12LL);
        }
        *(Vector3 *)(drop_param + 16) = this->born_pos_;
      }
    }
    v16 = 0;
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v5 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity.cpp",
      "buildDropParamForPlayer",
      624);
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v26,
           (const char (*)[29])"invalid drop_param! drop_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)drop_param);
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" drop_count:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v11,
            (const unsigned int *)(drop_param + 4));
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" drop_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" entity:");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v15, this);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v16 = -1;
  }
  result = v16;
  if ( v27 == (char *)v5 )
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

// Line 651: range 000000001660B802-000000001660BF13
__int64 __fastcall Entity::dropItemsForPlayers(
        Entity *const this,
        uint32_t drop_id,
        uint32_t drop_count,
        const ActionReason *action_reason,
        const std::vector<std::shared_ptr<Player>> *player_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  Player *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // r15d
  uint32_t v15; // r14d
  Player *v16; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Scene *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  __int64 result; // rax
  std::vector<std::shared_ptr<Player>>::const_iterator __for_begin; // [rsp+30h] [rbp-190h] BYREF
  std::vector<std::shared_ptr<Player>>::const_iterator __for_end; // [rsp+38h] [rbp-188h] BYREF
  const std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+40h] [rbp-180h]
  const std::shared_ptr<Player> *player_ptr; // [rsp+48h] [rbp-178h]
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-170h] BYREF
  common::milog::MiLogStream v38; // [rsp+70h] [rbp-150h] BYREF
  char v39[304]; // [rsp+90h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 11 drop_id:647 48 8 17 output_result:678 80 16 13 scene_ptr:652 112 24 17 drop_item_vec:6"
                        "76 176 40 14 drop_param:669";
  *(_QWORD *)(v5 + 16) = Entity::dropItemsForPlayers;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862724] = -218959360;
  v7[536862725] = 62194;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  *(_DWORD *)(v5 + 32) = drop_id;
  Entity::getScene((const Entity *const)(v5 + 80));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.cpp",
      "dropItemsForPlayers",
      655);
    v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v38,
           (const char (*)[25])"getScene failed, entity:");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v38);
    v9 = -1;
  }
  else
  {
    __for_range = player_vec;
    __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin(player_vec)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Player>>::end(player_vec)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>(
              &__for_begin,
              &__for_end) )
    {
      player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
      if ( std::operator==<Player>(player_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/entity/entity.cpp",
          "dropItemsForPlayers",
          664);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v37, (const char (*)[19])"player_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
      else
      {
        DropParam::DropParam((DropParam *const)(v5 + 176));
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
        if ( (unsigned int)Entity::buildDropParamForPlayer(this, *(_DWORD *)(v5 + 32), drop_count, v10, v5 + 176) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/entity/entity.cpp",
            "dropItemsForPlayers",
            672);
          v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v38,
                  (const char (*)[31])"buiildDropParam fail! drop_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v5 + 32));
          v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" entity:");
          common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v13, this);
          common::milog::MiLogStream::~MiLogStream(&v38);
          v9 = -1;
          goto LABEL_20;
        }
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v5 + 112));
        v14 = *(_DWORD *)(v5 + 180);
        v15 = *(_DWORD *)(v5 + 176);
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
        *(OutputResult *)(v5 + 48) = DropUtils::dropAndSplitItems(
                                       v16,
                                       v15,
                                       v14,
                                       action_reason,
                                       (std::vector<ItemParam> *)(v5 + 112));
        if ( *(_DWORD *)(v5 + 48) )
        {
          LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v5 + 48));
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            LogLevel,
            "./src/entity/entity.cpp",
            "dropItemsForPlayers",
            681);
          v18 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v38,
                  (const char (*)[35])"dropAndSplitItems failed, drop_id:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v5 + 176));
          v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" drop_count:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v5 + 180));
          v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
          v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
          operator<<(v22, v23);
          common::milog::MiLogStream::~MiLogStream(&v38);
        }
        else if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v5 + 112)) )
        {
          v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
          if ( Scene::dropItems(
                 v24,
                 (const std::vector<ItemParam> *)(v5 + 112),
                 (const DropParam *)(v5 + 176),
                 action_reason) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/entity/entity.cpp",
              "dropItemsForPlayers",
              694);
            v25 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v38,
                    (const char (*)[26])"dropItems failed, entity:");
            v26 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v25, this);
            v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" player:");
            v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
            operator<<(v27, v28);
            common::milog::MiLogStream::~MiLogStream(&v38);
          }
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v5 + 112));
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
    }
    v9 = 0;
  }
LABEL_20:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 80));
  result = v9;
  if ( v39 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 704: range 000000001660BF14-000000001660C13A
int32_t __cdecl Entity::notifyViewingPlayers(
        Entity *const this,
        common::minet::ConstMessagePtr *p_msg_ptr,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // r15
  int32_t result; // eax
  std::shared_ptr<const google::protobuf::Message> v11; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 scene_ptr:705";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.cpp",
      "notifyViewingPlayers",
      708);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v11, p_msg_ptr);
    v7 = Scene::notifyViewingPlayers(v8, this, &v11, include_me);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v11);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 715: range 000000001660C13C-000000001660C305
int32_t __cdecl Entity::notifySelf(Entity *const this, common::minet::ConstMessagePtr *p_msg_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // r14
  int32_t v7; // r14d
  int32_t result; // eax
  std::shared_ptr<const google::protobuf::Message> v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:716";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v9, p_msg_ptr);
    v7 = Player::sendMessage(v6, &v9, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v9);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
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

// Line 725: range 000000001660C306-000000001660C538
int32_t __cdecl Entity::notifyViewingPlayersExclude(
        Entity *const this,
        common::minet::ConstMessagePtr *p_msg_ptr,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  Scene *v9; // r14
  int32_t result; // eax
  std::shared_ptr<const google::protobuf::Message> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 scene_ptr:726";
  *(_QWORD *)(v4 + 16) = Entity::notifyViewingPlayersExclude;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v4 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.cpp",
      "notifyViewingPlayersExclude",
      729);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v14,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v13, p_msg_ptr);
    v8 = Scene::notifyViewingPlayersExclude(v9, this, &v13, exclude_uid, include_me);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v13);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 32));
  result = v8;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 736: range 000000001660C53A-000000001660C60C
int32_t __cdecl Entity::notifyViewingPlayersAndSelf(Entity *const this, common::minet::ConstMessagePtr *p_msg_ptr)
{
  int32_t v2; // ebx
  std::shared_ptr<const google::protobuf::Message> v4; // [rsp+10h] [rbp-20h] BYREF

  if ( Entity::isOnScene(this) )
  {
    std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v4, p_msg_ptr);
    v2 = Entity::notifyViewingPlayers(this, &v4, 1);
  }
  else
  {
    std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v4, p_msg_ptr);
    v2 = Entity::notifySelf(this, &v4);
  }
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v4);
  return v2;
};

// Line 749: range 000000001660C60E-000000001660C632
int32_t __cdecl Entity::accept(Entity *const this, Visitor *visitor)
{
  return Visitor::visitEntity(visitor, this);
};

// Line 755: range 000000001660C634-000000001660C68A
void __cdecl Entity::setIsAiOpen(Entity *const this, bool is_ai_open)
{
  if ( *(char *)(((unsigned __int64)&this->ai_info_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ai_info_);
  this->ai_info_.is_ai_open = is_ai_open;
};

// Line 761: range 000000001660C68C-000000001660C8E0
void __cdecl Entity::updateAiSkillCdInfo(Entity *const this, const proto::AiSkillCdInfo *skill_cd_info)
{
  unsigned int *p_second; // rax
  unsigned int second; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v4; // rax
  unsigned int *v5; // rdx
  unsigned int *v6; // rax
  unsigned int v7; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+18h] [rbp-78h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-68h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_skill_group_id; // [rsp+30h] [rbp-60h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_skill_id; // [rsp+38h] [rbp-58h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-30h] BYREF

  __for_range = proto::AiSkillCdInfo::skill_cd_map(skill_cd_info);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_skill_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    p_second = &p_skill_id->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = p_skill_id->second;
    v4 = std::map<unsigned int,unsigned int>::operator[](
           &this->ai_info_.skill_cd_map,
           (const std::map<unsigned int,unsigned int>::key_type *)p_skill_id);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v4);
    }
    *v5 = second;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  __for_range_0 = proto::AiSkillCdInfo::skill_group_cd_map(skill_cd_info);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_skill_group_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v6 = &p_skill_group_id->second;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v7 = p_skill_group_id->second;
    v8 = std::map<unsigned int,unsigned int>::operator[](
           &this->ai_info_.skill_group_cd_map,
           (const std::map<unsigned int,unsigned int>::key_type *)p_skill_group_id);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v8);
    }
    *v9 = v7;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
};

// Line 776: range 000000001660C8E2-000000001660C942
void __cdecl Entity::updateAIState(Entity *const this, const proto::ClientAIStateNotify *notify)
{
  uint32_t v2; // edx

  v2 = proto::ClientAIStateNotify::cur_tactic(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_info_.cur_tactic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_info_.cur_tactic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_info_.cur_tactic);
  }
  this->ai_info_.cur_tactic = v2;
};

// Line 782: range 000000001660C944-000000001660CA85
void __cdecl Entity::setServantInfo(Entity *const this, uint32_t master_entity_id, uint32_t born_slot_index)
{
  std::__shared_ptr_access<proto::ServantInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<proto::ServantInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::shared_ptr<proto::ServantInfo> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( master_entity_id || born_slot_index )
  {
    if ( std::operator==<proto::ServantInfo>(&this->ai_info_.servant_info_ptr, 0LL) )
    {
      common::tools::perf::make_shared<proto::ServantInfo>();
      std::shared_ptr<proto::ServantInfo>::operator=(&this->ai_info_.servant_info_ptr, &__r);
      std::shared_ptr<proto::ServantInfo>::~shared_ptr(&__r);
    }
    if ( std::operator==<proto::ServantInfo>(&this->ai_info_.servant_info_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity.cpp",
        "setServantInfo",
        793);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v7,
        (const char (*)[25])"servant_info_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
    else
    {
      v3 = std::__shared_ptr_access<proto::ServantInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServantInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ai_info_.servant_info_ptr);
      proto::ServantInfo::set_master_entity_id(v3, master_entity_id);
      v4 = std::__shared_ptr_access<proto::ServantInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServantInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ai_info_.servant_info_ptr);
      proto::ServantInfo::set_born_slot_index(v4, born_slot_index);
    }
  }
};

// Line 802: range 000000001660CA86-000000001660CB1E
void __cdecl Entity::setAiThreatMap(Entity *const this, ProtoAiThreatMap *proto_ai_threat_map)
{
  google::protobuf::Map<unsigned int,unsigned int>::iterator first; // [rsp+10h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::iterator last; // [rsp+30h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> other; // [rsp+50h] [rbp-30h] BYREF

  google::protobuf::Map<unsigned int,unsigned int>::begin(&first, proto_ai_threat_map);
  google::protobuf::Map<unsigned int,unsigned int>::end(&last, proto_ai_threat_map);
  google::protobuf::Map<unsigned int,unsigned int>::Map<google::protobuf::Map<unsigned int,unsigned int>::iterator>(
    &other,
    &first,
    &last);
  google::protobuf::Map<unsigned int,unsigned int>::operator=(&this->ai_info_.ai_threat_map, &other);
  google::protobuf::Map<unsigned int,unsigned int>::~Map(&other);
};

// Line 808: range 000000001660CB20-000000001660CB4C
void __cdecl Entity::setClientData(Entity *const this, std::string *client_data)
{
  std::string::swap(&this->client_data_, client_data);
};

// Line 814: range 000000001660CB4E-000000001660CF76
uint32_t __cdecl Entity::getIdForEntityLog(Entity *const this)
{
  uint32_t GadgetId; // r14d
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  int v6; // eax
  int v7; // r15d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // r15d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int v11; // r15d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-90h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 gadget_ptr:839";
  *(_QWORD *)(v2 + 16) = Entity::getIdForEntityLog;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = (*(__int64 (__fastcall **)(Entity *const))v5)(this);
  if ( v6 == 4 )
  {
    toPtr<Gadget,Entity>((Entity *)(v2 + 32));
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity.cpp",
        "getIdForEntityLog",
        842);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v14, (const char (*)[15])"gadget is null");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v11 = 0;
    }
    else
    {
      v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      GadgetId = Gadget::getGadgetId(v12);
      v11 = 1;
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
    if ( !v11 )
      goto LABEL_27;
  }
  else
  {
    if ( v6 > 4 )
    {
LABEL_27:
      GadgetId = 0;
      goto LABEL_28;
    }
    if ( v6 == 1 )
    {
      toPtr<Avatar,Entity>((Entity *)(v2 + 32));
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/entity/entity.cpp",
          "getIdForEntityLog",
          822);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v14, (const char (*)[15])"avatar is null");
        common::milog::MiLogStream::~MiLogStream(&v14);
        v7 = 0;
      }
      else
      {
        v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        GadgetId = Avatar::getAvatarId(v8);
        v7 = 1;
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
      if ( !v7 )
        goto LABEL_27;
    }
    else
    {
      if ( v6 != 2 )
        goto LABEL_27;
      toPtr<Monster,Entity>((Entity *)(v2 + 32));
      if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/entity/entity.cpp",
          "getIdForEntityLog",
          832);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"monster is null");
        common::milog::MiLogStream::~MiLogStream(&v14);
        v9 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        GadgetId = Monster::getMonsterId(v10);
        v9 = 1;
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 32));
      if ( !v9 )
        goto LABEL_27;
    }
  }
LABEL_28:
  result = GadgetId;
  if ( v15 == (char *)v2 )
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

// Line 854: range 000000001660CF78-000000001660D3AA
int32_t __cdecl Entity::getEntityLog(Entity *const this, proto_log::EntityLog *entity_log)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  google::protobuf::uint32 v6; // edx
  uint32_t IdForEntityLog; // edx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t ConfigLevel; // edx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t ReviseLevel; // edx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t Level; // edx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t GroupId; // edx
  int32_t result; // eax
  char v17[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 16 creature_ptr:857 64 16 13 group_ptr:864";
  *(_QWORD *)(v2 + 16) = Entity::getEntityLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = (*(__int64 (__fastcall **)(Entity *const))v5)(this);
  proto_log::EntityLog::set_entity_type(entity_log, v6);
  IdForEntityLog = Entity::getIdForEntityLog(this);
  proto_log::EntityLog::set_id(entity_log, IdForEntityLog);
  toPtr<Creature,Entity>((Entity *)(v2 + 32));
  if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
  {
    v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ConfigLevel = Creature::getConfigLevel(v8);
    proto_log::EntityLog::add_level(entity_log, ConfigLevel);
    v10 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ReviseLevel = Creature::getReviseLevel(v10);
    proto_log::EntityLog::add_level(entity_log, ReviseLevel);
    v12 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Level = Creature::getLevel(v12);
    proto_log::EntityLog::add_level(entity_log, Level);
  }
  Entity::getGroup((const Entity *const)(v2 + 64));
  if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 64)) )
  {
    v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    GroupId = Group::getGroupId(v14);
    proto_log::EntityLog::set_group_id(entity_log, GroupId);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  proto_log::EntityLog::set_config_id(entity_log, this->config_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_);
  }
  proto_log::EntityLog::set_x_coordinate(entity_log, (int)this->position_.x);
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->position_.y);
  }
  proto_log::EntityLog::set_y_coordinate(entity_log, (int)this->position_.y);
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_.z);
  }
  proto_log::EntityLog::set_z_coordinate(entity_log, (int)this->position_.z);
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 878: range 000000001660D3AC-000000001660D699
bool __cdecl Entity::isBanLootByOneoff(Entity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool isBanLootByOneoff; // r14
  void (__fastcall **vptr_DescribalBase)(char *, Entity *const); // rax
  const char *v6; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  uint32_t ConfigId; // r15d
  unsigned __int64 v9; // rax
  proto::ProtEntityType v10; // eax
  bool result; // al
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[32]; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:886";
  *(_QWORD *)(v1 + 16) = Entity::isBanLootByOneoff;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( Entity::getConfigId(this) )
  {
    Entity::getGroup((const Entity *const)(v1 + 32));
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/entity/entity.cpp",
        "isBanLootByOneoff",
        890);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      vptr_DescribalBase = (void (__fastcall **)(char *, Entity *const))this->_vptr_DescribalBase;
      if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
        vptr_DescribalBase = (void (__fastcall **)(char *, Entity *const))__asan_report_load8();
      (*vptr_DescribalBase)(v13, this);
      v6 = (const char *)std::string::c_str(v13);
      common::milog::MiLogStream::operator()(&v12, "group_ptr null for %s", v6);
      std::string::~string(v13);
      common::milog::MiLogStream::~MiLogStream(&v12);
      isBanLootByOneoff = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      ConfigId = Entity::getConfigId(this);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = (unsigned __int64)(this->_vptr_DescribalBase + 3);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v10 = (*(unsigned int (__fastcall **)(Entity *const))v9)(this);
      isBanLootByOneoff = Group::isBanLootByOneoff(v7, v10, ConfigId);
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  }
  else
  {
    isBanLootByOneoff = 0;
  }
  result = isBanLootByOneoff;
  if ( v14 == (char *)v1 )
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

// Line 899: range 000000001660D69A-000000001660D736
bool __cdecl Entity::isMovable(const Entity *const this)
{
  unsigned __int64 v1; // rax
  bool result; // al

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  switch ( (*(unsigned int (__fastcall **)(const Entity *const))v1)(this) )
  {
    case 0x1Au:
    case 0x1Cu:
    case 0x1Eu:
    case 0x23u:
    case 0x29u:
    case 0x2Cu:
    case 0x2Du:
    case 0x2Fu:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
};

// Line 918: range 000000001660D738-000000001660DC42
EntitySightGroupPtr __cdecl Entity::getOrCreateSightGroup(Entity *const this)
{
  const Entity *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool isSightGroupClosed; // r14
  EntitySightGroupPtr result; // rax
  EntitySightGroup *v8; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t AuthorityPeerId; // eax
  EntitySightGroup *v11; // r14
  EntitySightGroup *v12; // rax
  EntitySightGroup *v13; // r14
  uint32_t GroupVisionType; // eax
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+20h] [rbp-D0h]
  std::shared_ptr<Player> *ele; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<std::shared_ptr<Player>> v20; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-90h] BYREF
  char v22[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 creature_ptr:935";
  *(_QWORD *)(v2 + 16) = Entity::getOrCreateSightGroup;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  isSightGroupClosed = FeatureSwitchMgr::isSightGroupClosed(&v5->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( isSightGroupClosed )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.cpp",
      "getOrCreateSightGroup",
      922);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v21,
      (const char (*)[34])"[FEATURE_SWITCH] SightGroupClosed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::shared_ptr<EntitySightGroup>::shared_ptr((std::shared_ptr<EntitySightGroup> *const)this, 0LL);
    goto LABEL_16;
  }
  if ( std::operator==<EntitySightGroup>(&v1->view_mgr_.sight_group_ptr_, 0LL) )
  {
    common::tools::perf::make_shared<EntitySightGroup>();
    std::shared_ptr<EntitySightGroup>::operator=(
      &v1->view_mgr_.sight_group_ptr_,
      (std::shared_ptr<EntitySightGroup> *)&v19);
    std::shared_ptr<EntitySightGroup>::~shared_ptr((std::shared_ptr<EntitySightGroup> *const)&v19);
    if ( std::operator==<EntitySightGroup>(&v1->view_mgr_.sight_group_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/entity/entity.cpp",
        "getOrCreateSightGroup",
        932);
      common::milog::MiLogStream::operator()(&v21, "view_mgr_.sight_group_ptr_ construct failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
      std::shared_ptr<EntitySightGroup>::shared_ptr((std::shared_ptr<EntitySightGroup> *const)this, 0LL);
      goto LABEL_16;
    }
    toPtr<Creature,Entity>((Entity *)(v2 + 32));
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1->view_mgr_.sight_group_ptr_);
      v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      AuthorityPeerId = Creature::getAuthorityPeerId(v9);
      EntitySightGroup::setAuthorityPeerId(v8, AuthorityPeerId);
    }
    v11 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1->view_mgr_.sight_group_ptr_);
    std::enable_shared_from_this<Entity>::shared_from_this((std::enable_shared_from_this<Entity> *const)&v19);
    EntitySightGroup::addEntityInSightGroup(v11, (const EntityPtr *)&v19);
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)&v19);
    EntityViewMgr::validateAndGetViewingPlayers(&v20, &v1->view_mgr_);
    __for_range = &v20;
    __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin(&v20)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Player>>::end(&v20)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
              &__for_begin,
              &__for_end) )
    {
      ele = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
      v12 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1->view_mgr_.sight_group_ptr_);
      EntitySightGroup::onPlayerDoView(v12, ele);
      __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
    }
    std::vector<std::shared_ptr<Player>>::~vector(&v20);
    v13 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1->view_mgr_.sight_group_ptr_);
    GroupVisionType = Entity::getGroupVisionType(v1);
    EntitySightGroup::setGroupVisionType(v13, GroupVisionType);
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  std::shared_ptr<EntitySightGroup>::shared_ptr(
    (std::shared_ptr<EntitySightGroup> *const)this,
    &v1->view_mgr_.sight_group_ptr_);
LABEL_16:
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<EntitySightGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 952: range 000000001660DC44-000000001660DF33
void __fastcall Entity::setGroupVisionType(Entity *const this, uint32_t type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v7; // r14
  void (__fastcall **vptr_DescribalBase)(std::string *, Entity *const); // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  unsigned int GroupVisionType; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-B0h] BYREF
  std::string val; // [rsp+40h] [rbp-90h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 type:951";
  *(_QWORD *)(v2 + 16) = Entity::setGroupVisionType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = type;
  if ( std::operator!=<EntitySightGroup>(&this->view_mgr_.sight_group_ptr_, 0LL)
    && (v5 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->view_mgr_.sight_group_ptr_),
        EntitySightGroup::getGroupVisionType(v5) != *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/entity/entity.cpp",
      "setGroupVisionType",
      957);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v16, (const char (*)[8])"entity:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    vptr_DescribalBase = (void (__fastcall **)(std::string *, Entity *const))this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      vptr_DescribalBase = (void (__fastcall **)(std::string *, Entity *const))__asan_report_load8();
    (*vptr_DescribalBase)(&val, this);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            v9,
            (const char (*)[48])". sight_group_ptr_ is not null and vision_type:");
    v11 = std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EntitySightGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->view_mgr_.sight_group_ptr_);
    GroupVisionType = EntitySightGroup::getGroupVisionType(v11);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &GroupVisionType);
    v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v12, (const char (*)[5])off_25D34780);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v14 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->view_mgr_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->view_mgr_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->view_mgr_);
    }
    this->view_mgr_.group_vision_type_ = v14;
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
};

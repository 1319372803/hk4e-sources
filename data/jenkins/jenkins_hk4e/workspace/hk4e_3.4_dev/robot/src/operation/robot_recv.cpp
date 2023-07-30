// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/operation/robot_recv.cpp

// Line 31: range 00000000004E2030-00000000004E2069
void __cdecl DoSetPlayerBornDataNotifyRecvRegister::DoSetPlayerBornDataNotifyRecvRegister(
        DoSetPlayerBornDataNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 147;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))DoSetPlayerBornDataNotifyRecvFunc);
};

// Line 32: range 00000000004667D9-00000000004669CB
void __cdecl DoSetPlayerBornDataNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  Player *player; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 notify:33";
  *(_QWORD *)(v2 + 16) = DoSetPlayerBornDataNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::DoSetPlayerBornDataNotify::DoSetPlayerBornDataNotify((proto::DoSetPlayerBornDataNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::DoSetPlayerBornDataNotify>(
         v5,
         (proto::DoSetPlayerBornDataNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "DoSetPlayerBornDataNotifyRecvFunc",
      36);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v7, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    player = Robot::getPlayer(robot);
    Player::setIsNeedSetBornData(player, 1);
  }
  proto::DoSetPlayerBornDataNotify::~DoSetPlayerBornDataNotify((proto::DoSetPlayerBornDataNotify *const)(v2 + 32));
  if ( v8 == (char *)v2 )
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

// Line 43: range 00000000004E206A-00000000004E20A3
void __cdecl PlayerDataNotifyRecvRegister::PlayerDataNotifyRecvRegister(PlayerDataNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 190;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))PlayerDataNotifyRecvFunc);
};

// Line 44: range 00000000004669CC-0000000000466BF5
void __cdecl PlayerDataNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  const std::string *v6; // rdx
  Player *player; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-110h] BYREF
  char v9[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 120 9 notify:45";
  *(_QWORD *)(v2 + 16) = PlayerDataNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::PlayerDataNotify::PlayerDataNotify((proto::PlayerDataNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::PlayerDataNotify>(v5, (proto::PlayerDataNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "PlayerDataNotifyRecvFunc",
      48);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v8, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    player = Robot::getPlayer(robot);
    v6 = proto::PlayerDataNotify::nick_name[abi:cxx11]((const proto::PlayerDataNotify *const)(v2 + 32));
    Player::setNickName(player, v6);
  }
  proto::PlayerDataNotify::~PlayerDataNotify((proto::PlayerDataNotify *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 55: range 00000000004E20A4-00000000004E20DD
void __cdecl LifeStateChangeNotifyRecvRegister::LifeStateChangeNotifyRecvRegister(
        LifeStateChangeNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 1298;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))LifeStateChangeNotifyRecvFunc);
};

// Line 56: range 0000000000466BF6-0000000000466E87
void __cdecl LifeStateChangeNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::minet::Packet *v5; // rax
  Creature *v6; // r14
  signed int v7; // eax
  uint32_t scene; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 15 creature_ptr:64 80 72 9 notify:57";
  *(_QWORD *)(v2 + 16) = LifeStateChangeNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::LifeStateChangeNotify::LifeStateChangeNotify((proto::LifeStateChangeNotify *const)(v2 + 80));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::LifeStateChangeNotify>(v5, (proto::LifeStateChangeNotify *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "LifeStateChangeNotifyRecvFunc",
      60);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v9, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    scene = (unsigned int)Robot::getScene(robot);
    proto::LifeStateChangeNotify::entity_id((const proto::LifeStateChangeNotify *const)(v2 + 80));
    Scene::findEntity<Creature>((const Scene *const)(v2 + 48), scene);
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 48), 0LL) )
    {
      v6 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v7 = proto::LifeStateChangeNotify::life_state((const proto::LifeStateChangeNotify *const)(v2 + 80));
      Creature::setLifeState(v6, (data::LifeState)v7);
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 48));
  }
  proto::LifeStateChangeNotify::~LifeStateChangeNotify((proto::LifeStateChangeNotify *const)(v2 + 80));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 71: range 00000000004E211A-00000000004E2153
void __cdecl AvatarLifeStateChangeNotifyRecvRegister::AvatarLifeStateChangeNotifyRecvRegister(
        AvatarLifeStateChangeNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 1290;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))AvatarLifeStateChangeNotifyRecvFunc);
};

// Line 72: range 0000000000466E88-000000000046710F
void __cdecl AvatarLifeStateChangeNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::minet::Packet *v5; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  signed int v7; // eax
  Player *player; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 13 avatar_ptr:80 80 80 9 notify:73";
  *(_QWORD *)(v2 + 16) = AvatarLifeStateChangeNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862725] = -202116109;
  proto::AvatarLifeStateChangeNotify::AvatarLifeStateChangeNotify((proto::AvatarLifeStateChangeNotify *const)(v2 + 80));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::AvatarLifeStateChangeNotify>(
         v5,
         (proto::AvatarLifeStateChangeNotify *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "AvatarLifeStateChangeNotifyRecvFunc",
      76);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v9, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    player = Robot::getPlayer(robot);
    proto::AvatarLifeStateChangeNotify::avatar_guid((const proto::AvatarLifeStateChangeNotify *const)(v2 + 80));
    Player::findAvatarByGuid((Player *const)(v2 + 48), (uint64_t)player);
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 48), 0LL) )
    {
      v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v7 = proto::AvatarLifeStateChangeNotify::life_state((const proto::AvatarLifeStateChangeNotify *const)(v2 + 80));
      Creature::setLifeState(v6, (data::LifeState)v7);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 48));
  }
  proto::AvatarLifeStateChangeNotify::~AvatarLifeStateChangeNotify((proto::AvatarLifeStateChangeNotify *const)(v2 + 80));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 87: range 00000000004E2154-00000000004E218D
void __cdecl SceneEntityAppearNotifyRecvRegister::SceneEntityAppearNotifyRecvRegister(
        SceneEntityAppearNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 221;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))SceneEntityAppearNotifyRecvFunc);
};

// Line 88: range 0000000000467110-000000000046730D
void __cdecl SceneEntityAppearNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  Scene *scene; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-D0h] BYREF
  char v8[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 9 notify:89";
  *(_QWORD *)(v2 + 16) = SceneEntityAppearNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::SceneEntityAppearNotify::SceneEntityAppearNotify((proto::SceneEntityAppearNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::SceneEntityAppearNotify>(v5, (proto::SceneEntityAppearNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "SceneEntityAppearNotifyRecvFunc",
      92);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v7, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    scene = Robot::getScene(robot);
    Scene::onEntityAppear(scene, (proto::SceneEntityAppearNotify *)(v2 + 32));
  }
  proto::SceneEntityAppearNotify::~SceneEntityAppearNotify((proto::SceneEntityAppearNotify *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 99: range 00000000004E218E-00000000004E21C7
void __cdecl SceneEntityDisappearNotifyRecvRegister::SceneEntityDisappearNotifyRecvRegister(
        SceneEntityDisappearNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 203;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))SceneEntityDisappearNotifyRecvFunc);
};

// Line 100: range 000000000046730E-000000000046750B
void __cdecl SceneEntityDisappearNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  Scene *scene; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-D0h] BYREF
  char v8[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:101";
  *(_QWORD *)(v2 + 16) = SceneEntityDisappearNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::SceneEntityDisappearNotify::SceneEntityDisappearNotify((proto::SceneEntityDisappearNotify *const)(v2 + 48));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::SceneEntityDisappearNotify>(
         v5,
         (proto::SceneEntityDisappearNotify *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "SceneEntityDisappearNotifyRecvFunc",
      104);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v7, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    scene = Robot::getScene(robot);
    Scene::onEntityDisappear(scene, (proto::SceneEntityDisappearNotify *)(v2 + 48));
  }
  proto::SceneEntityDisappearNotify::~SceneEntityDisappearNotify((proto::SceneEntityDisappearNotify *const)(v2 + 48));
  if ( v8 == (char *)v2 )
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

// Line 111: range 00000000004E21C8-00000000004E2201
void __cdecl EntityPropNotifyRecvRegister::EntityPropNotifyRecvRegister(EntityPropNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 1272;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))EntityPropNotifyRecvFunc);
};

// Line 112: range 000000000046750C-000000000046784D
void __cdecl EntityPropNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  common::milog::MiLogStream *v6; // rax
  Entity *v7; // r14
  const google::protobuf::Map<unsigned int,proto::PropValue> *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-130h] BYREF
  char v10[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 entity_id:119 64 16 14 entity_ptr:120 96 96 10 notify:113";
  *(_QWORD *)(v2 + 16) = EntityPropNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862726] = -202116109;
  proto::EntityPropNotify::EntityPropNotify((proto::EntityPropNotify *const)(v2 + 96));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::EntityPropNotify>(v5, (proto::EntityPropNotify *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "EntityPropNotifyRecvFunc",
      116);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v9, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    *(_DWORD *)(v2 + 48) = proto::EntityPropNotify::entity_id((const proto::EntityPropNotify *const)(v2 + 96));
    Robot::findEntity((Robot *const)(v2 + 64), (uint32_t)robot);
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_recv.cpp",
        "EntityPropNotifyRecvFunc",
        123);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v9,
             (const char (*)[30])"can't find entity, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      v7 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v8 = proto::EntityPropNotify::prop_map((const proto::EntityPropNotify *const)(v2 + 96));
      Entity::updatePropVal(v7, v8);
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 64));
  }
  proto::EntityPropNotify::~EntityPropNotify((proto::EntityPropNotify *const)(v2 + 96));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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
};

// Line 129: range 00000000004E2202-00000000004E223B
void __cdecl QuestListNotifyRecvRegister::QuestListNotifyRecvRegister(QuestListNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 472;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))QuestListNotifyRecvFunc);
};

// Line 130: range 000000000046784E-0000000000467A9C
void __cdecl QuestListNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  proto::QuestListNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  const proto::Quest *v6; // rdx
  int i; // [rsp+14h] [rbp-DCh]
  Player *player; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (proto::QuestListNotify *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::QuestListNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 10 notify:131";
  v2->quest_list_.arena_ = (google::protobuf::Arena *)QuestListNotifyRecvFunc;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::QuestListNotify::QuestListNotify(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::QuestListNotify>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "QuestListNotifyRecvFunc",
      134);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v9, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    player = Robot::getPlayer(robot);
    Player::removeAllQuest(player);
    for ( i = 0; i < proto::QuestListNotify::quest_list_size(v2 + 1); ++i )
    {
      v6 = proto::QuestListNotify::quest_list(v2 + 1, i);
      Player::updateQuest(player, v6);
    }
  }
  proto::QuestListNotify::~QuestListNotify(v2 + 1);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 145: range 00000000004E223C-00000000004E2275
void __cdecl QuestListUpdateNotifyRecvRegister::QuestListUpdateNotifyRecvRegister(
        QuestListUpdateNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 498;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))QuestListUpdateNotifyRecvFunc);
};

// Line 146: range 0000000000467A9D-0000000000467CD9
void __cdecl QuestListUpdateNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  proto::QuestListUpdateNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  const proto::Quest *v6; // rdx
  int i; // [rsp+14h] [rbp-DCh]
  Player *player; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (proto::QuestListUpdateNotify *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::QuestListUpdateNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 10 notify:147";
  v2->quest_list_.arena_ = (google::protobuf::Arena *)QuestListUpdateNotifyRecvFunc;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::QuestListUpdateNotify::QuestListUpdateNotify(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::QuestListUpdateNotify>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "QuestListUpdateNotifyRecvFunc",
      150);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v9, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    player = Robot::getPlayer(robot);
    for ( i = 0; i < proto::QuestListUpdateNotify::quest_list_size(v2 + 1); ++i )
    {
      v6 = proto::QuestListUpdateNotify::quest_list(v2 + 1, i);
      Player::updateQuest(player, v6);
    }
  }
  proto::QuestListUpdateNotify::~QuestListUpdateNotify(v2 + 1);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 160: range 00000000004E2276-00000000004E22AF
void __cdecl QuestDelNotifyRecvRegister::QuestDelNotifyRecvRegister(QuestDelNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 412;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))QuestDelNotifyRecvFunc);
};

// Line 161: range 0000000000467CDA-0000000000467ED7
void __cdecl QuestDelNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  uint32_t v6; // edx
  Player *player; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:162";
  *(_QWORD *)(v2 + 16) = QuestDelNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::QuestDelNotify::QuestDelNotify((proto::QuestDelNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::QuestDelNotify>(v5, (proto::QuestDelNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "QuestDelNotifyRecvFunc",
      165);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v8, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    player = Robot::getPlayer(robot);
    v6 = proto::QuestDelNotify::quest_id((const proto::QuestDelNotify *const)(v2 + 32));
    Player::removeQuest(player, v6);
  }
  proto::QuestDelNotify::~QuestDelNotify((proto::QuestDelNotify *const)(v2 + 32));
  if ( v9 == (char *)v2 )
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

// Line 172: range 00000000004E22B0-00000000004E22E9
void __cdecl FinishedParentQuestNotifyRecvRegister::FinishedParentQuestNotifyRecvRegister(
        FinishedParentQuestNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 435;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))FinishedParentQuestNotifyRecvFunc);
};

// Line 173: range 0000000000467ED8-000000000046816D
void __cdecl FinishedParentQuestNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  proto::FinishedParentQuestNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  google::protobuf::RepeatedPtrField<proto::ParentQuest>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ParentQuest>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  Player *player; // [rsp+28h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::ParentQuest> *__for_range; // [rsp+30h] [rbp-E0h]
  const proto::ParentQuest *parent_quest; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (proto::FinishedParentQuestNotify *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::FinishedParentQuestNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 10 notify:174";
  v2->parent_quest_list_.arena_ = (google::protobuf::Arena *)FinishedParentQuestNotifyRecvFunc;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::FinishedParentQuestNotify::FinishedParentQuestNotify(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::FinishedParentQuestNotify>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "FinishedParentQuestNotifyRecvFunc",
      177);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v11, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    player = Robot::getPlayer(robot);
    Player::removeAllParentQuest(player);
    __for_range = proto::FinishedParentQuestNotify::parent_quest_list(v2 + 1);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ParentQuest>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ParentQuest>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ParentQuest const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      parent_quest = google::protobuf::internal::RepeatedPtrIterator<proto::ParentQuest const>::operator*(&__for_begin);
      Player::updateParentQuest(player, parent_quest);
      google::protobuf::internal::RepeatedPtrIterator<proto::ParentQuest const>::operator++(&__for_begin);
    }
  }
  proto::FinishedParentQuestNotify::~FinishedParentQuestNotify(v2 + 1);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 188: range 00000000004E22EA-00000000004E2323
void __cdecl FinishedParentQuestUpdateNotifyRecvRegister::FinishedParentQuestUpdateNotifyRecvRegister(
        FinishedParentQuestUpdateNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 407;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))FinishedParentQuestUpdateNotifyRecvFunc);
};

// Line 189: range 000000000046816E-00000000004683F4
void __cdecl FinishedParentQuestUpdateNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  proto::FinishedParentQuestUpdateNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  google::protobuf::RepeatedPtrField<proto::ParentQuest>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ParentQuest>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  Player *player; // [rsp+28h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::ParentQuest> *__for_range; // [rsp+30h] [rbp-E0h]
  const proto::ParentQuest *parent_quest; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (proto::FinishedParentQuestUpdateNotify *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::FinishedParentQuestUpdateNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 10 notify:190";
  v2->parent_quest_list_.arena_ = (google::protobuf::Arena *)FinishedParentQuestUpdateNotifyRecvFunc;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::FinishedParentQuestUpdateNotify::FinishedParentQuestUpdateNotify(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::FinishedParentQuestUpdateNotify>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "FinishedParentQuestUpdateNotifyRecvFunc",
      193);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v11, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    player = Robot::getPlayer(robot);
    __for_range = proto::FinishedParentQuestUpdateNotify::parent_quest_list(v2 + 1);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ParentQuest>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ParentQuest>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ParentQuest const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      parent_quest = google::protobuf::internal::RepeatedPtrIterator<proto::ParentQuest const>::operator*(&__for_begin);
      Player::updateParentQuest(player, parent_quest);
      google::protobuf::internal::RepeatedPtrIterator<proto::ParentQuest const>::operator++(&__for_begin);
    }
  }
  proto::FinishedParentQuestUpdateNotify::~FinishedParentQuestUpdateNotify(v2 + 1);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 203: range 00000000004E2324-00000000004E235D
void __cdecl PlayerEnterSceneNotifyRecvRegister::PlayerEnterSceneNotifyRecvRegister(
        PlayerEnterSceneNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 272;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))PlayerEnterSceneNotifyRecvFunc);
};

// Line 204: range 00000000004683F5-00000000004687E7
void __cdecl PlayerEnterSceneNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::minet::Packet *v5; // rax
  uint32_t SceneId; // r14d
  uint32_t DungeonId; // r14d
  uint32_t v9; // edx
  uint32_t v10; // edx
  uint32_t v11; // edx
  common::milog::MiLogStream *v12; // r14
  Scene *scene; // [rsp+10h] [rbp-140h]
  Player *player; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-130h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-110h] BYREF
  char v17[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 120 10 notify:205";
  *(_QWORD *)(v2 + 16) = PlayerEnterSceneNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::PlayerEnterSceneNotify::PlayerEnterSceneNotify((proto::PlayerEnterSceneNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::PlayerEnterSceneNotify>(v5, (proto::PlayerEnterSceneNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "PlayerEnterSceneNotifyRecvFunc",
      208);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v16, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    scene = Robot::getScene(robot);
    SceneId = Scene::getSceneId(scene);
    if ( SceneId != proto::PlayerEnterSceneNotify::scene_id((const proto::PlayerEnterSceneNotify *const)(v2 + 32))
      || (DungeonId = Scene::getDungeonId(scene),
          DungeonId != proto::PlayerEnterSceneNotify::dungeon_id((const proto::PlayerEnterSceneNotify *const)(v2 + 32))) )
    {
      Scene::clear(scene);
      v9 = proto::PlayerEnterSceneNotify::scene_id((const proto::PlayerEnterSceneNotify *const)(v2 + 32));
      Scene::setSceneId(scene, v9);
      v10 = proto::PlayerEnterSceneNotify::dungeon_id((const proto::PlayerEnterSceneNotify *const)(v2 + 32));
      Scene::setDungeonId(scene, v10);
    }
    player = Robot::getPlayer(robot);
    v11 = proto::PlayerEnterSceneNotify::enter_scene_token((const proto::PlayerEnterSceneNotify *const)(v2 + 32));
    Player::setEnterSceneToken(player, v11);
    if ( *(_BYTE *)(((unsigned __int64)&player->is_recv_enter_scene >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)player + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&player->is_recv_enter_scene >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_store1(&player->is_recv_enter_scene);
    }
    player->is_recv_enter_scene = 1;
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/operation/robot_recv.cpp",
      "PlayerEnterSceneNotifyRecvFunc",
      221);
    v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v15,
            (const char (*)[31])"HPTEST PlayerEnterSceneNotify:");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v16, (google::protobuf::Message *)(v2 + 32));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v16);
    std::string::~string((std::string *const)&v16);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  proto::PlayerEnterSceneNotify::~PlayerEnterSceneNotify((proto::PlayerEnterSceneNotify *const)(v2 + 32));
  if ( v17 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 224: range 00000000004E235E-00000000004E2397
void __cdecl PlayerEnterSceneInfoNotifyRecvRegister::PlayerEnterSceneInfoNotifyRecvRegister(
        PlayerEnterSceneInfoNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 214;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))PlayerEnterSceneInfoNotifyRecvFunc);
};

// Line 225: range 00000000004687E8-0000000000468B03
void __cdecl PlayerEnterSceneInfoNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::minet::Packet *v5; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  uint32_t v7; // eax
  google::protobuf::RepeatedPtrField<proto::AvatarEnterSceneInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  google::protobuf::RepeatedPtrField<proto::AvatarEnterSceneInfo>::const_iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  Player *player; // [rsp+28h] [rbp-128h]
  const google::protobuf::RepeatedPtrField<proto::AvatarEnterSceneInfo> *__for_range; // [rsp+30h] [rbp-120h]
  const proto::AvatarEnterSceneInfo *avatar_enter_info; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-110h] BYREF
  char v14[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 avatar_ptr:235 80 72 10 notify:226";
  *(_QWORD *)(v2 + 16) = PlayerEnterSceneInfoNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::PlayerEnterSceneInfoNotify::PlayerEnterSceneInfoNotify((proto::PlayerEnterSceneInfoNotify *const)(v2 + 80));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::PlayerEnterSceneInfoNotify>(
         v5,
         (proto::PlayerEnterSceneInfoNotify *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "PlayerEnterSceneInfoNotifyRecvFunc",
      229);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v13, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    player = Robot::getPlayer(robot);
    __for_range = proto::PlayerEnterSceneInfoNotify::avatar_enter_info((const proto::PlayerEnterSceneInfoNotify *const)(v2 + 80));
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::AvatarEnterSceneInfo>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::AvatarEnterSceneInfo>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::AvatarEnterSceneInfo const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      avatar_enter_info = google::protobuf::internal::RepeatedPtrIterator<proto::AvatarEnterSceneInfo const>::operator*(&__for_begin);
      proto::AvatarEnterSceneInfo::avatar_guid(avatar_enter_info);
      Player::findAvatarByGuid((Player *const)(v2 + 48), (uint64_t)player);
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 48), 0LL) )
      {
        v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v7 = proto::AvatarEnterSceneInfo::avatar_entity_id(avatar_enter_info);
        Entity::setEntityId(v6, v7);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 48));
      google::protobuf::internal::RepeatedPtrIterator<proto::AvatarEnterSceneInfo const>::operator++(&__for_begin);
    }
  }
  proto::PlayerEnterSceneInfoNotify::~PlayerEnterSceneInfoNotify((proto::PlayerEnterSceneInfoNotify *const)(v2 + 80));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 243: range 00000000004E2398-00000000004E23D1
void __cdecl AvatarAddNotifyRecvRegister::AvatarAddNotifyRecvRegister(AvatarAddNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 1769;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))AvatarAddNotifyRecvFunc);
};

// Line 244: range 0000000000468B04-0000000000468EEF
void __cdecl AvatarAddNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::minet::Packet *v5; // rax
  Avatar *v6; // r14
  const proto::AvatarInfo *v7; // rax
  Avatar *v8; // rdx
  Player *player; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 avatar_ptr:252 64 32 10 notify:245";
  *(_QWORD *)(v2 + 16) = AvatarAddNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  proto::AvatarAddNotify::AvatarAddNotify((proto::AvatarAddNotify *const)(v2 + 64));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::AvatarAddNotify>(v5, (proto::AvatarAddNotify *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "AvatarAddNotifyRecvFunc",
      248);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v10, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    player = Robot::getPlayer(robot);
    std::make_shared<Avatar>();
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_recv.cpp",
        "AvatarAddNotifyRecvFunc",
        255);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"avatar_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v7 = proto::AvatarAddNotify::avatar((const proto::AvatarAddNotify *const)(v2 + 64));
      if ( Avatar::fromProto(v6, v7) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_recv.cpp",
          "AvatarAddNotifyRecvFunc",
          260);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"fromProto fails");
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
      else
      {
        v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( Player::addAvatar(player, v8) )
        {
          common::milog::MiLogStream::create(
            &v10,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_recv.cpp",
            "AvatarAddNotifyRecvFunc",
            265);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"addAvatar fails");
          common::milog::MiLogStream::~MiLogStream(&v10);
        }
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  }
  proto::AvatarAddNotify::~AvatarAddNotify((proto::AvatarAddNotify *const)(v2 + 64));
  if ( v11 == (char *)v2 )
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

// Line 269: range 00000000004E23D2-00000000004E240B
void __cdecl AvatarTeamUpdateNotifyRecvRegister::AvatarTeamUpdateNotifyRecvRegister(
        AvatarTeamUpdateNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 1706;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))AvatarTeamUpdateNotifyRecvFunc);
};

// Line 270: range 0000000000468EF0-00000000004690DF
void __cdecl AvatarTeamUpdateNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-110h] BYREF
  char v7[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 112 10 notify:271";
  *(_QWORD *)(v2 + 16) = AvatarTeamUpdateNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862725] = -202116109;
  proto::AvatarTeamUpdateNotify::AvatarTeamUpdateNotify((proto::AvatarTeamUpdateNotify *const)(v2 + 48));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::AvatarTeamUpdateNotify>(v5, (proto::AvatarTeamUpdateNotify *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "AvatarTeamUpdateNotifyRecvFunc",
      274);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v6, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  proto::AvatarTeamUpdateNotify::~AvatarTeamUpdateNotify((proto::AvatarTeamUpdateNotify *const)(v2 + 48));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 279: range 00000000004E240C-00000000004E2445
void __cdecl PlayerStoreNotifyRecvRegister::PlayerStoreNotifyRecvRegister(PlayerStoreNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 672;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))PlayerStoreNotifyRecvFunc);
};

// Line 280: range 00000000004690E0-0000000000469373
void __cdecl PlayerStoreNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  proto::StoreType v6; // eax
  google::protobuf::RepeatedPtrField<proto::Item>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::Item>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  Player *player; // [rsp+28h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::Item> *__for_range; // [rsp+30h] [rbp-E0h]
  const proto::Item *item; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 10 notify:281";
  *(_QWORD *)(v2 + 16) = PlayerStoreNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::PlayerStoreNotify::PlayerStoreNotify((proto::PlayerStoreNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::PlayerStoreNotify>(v5, (proto::PlayerStoreNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "PlayerStoreNotifyRecvFunc",
      284);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v12, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    player = Robot::getPlayer(robot);
    __for_range = proto::PlayerStoreNotify::item_list((const proto::PlayerStoreNotify *const)(v2 + 32));
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Item>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Item>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::Item const>::operator!=(&__for_begin, &__for_end) )
    {
      item = google::protobuf::internal::RepeatedPtrIterator<proto::Item const>::operator*(&__for_begin);
      v6 = proto::PlayerStoreNotify::store_type((const proto::PlayerStoreNotify *const)(v2 + 32));
      Player::addItem(player, v6, item);
      google::protobuf::internal::RepeatedPtrIterator<proto::Item const>::operator++(&__for_begin);
    }
  }
  proto::PlayerStoreNotify::~PlayerStoreNotify((proto::PlayerStoreNotify *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 294: range 00000000004E2446-00000000004E247F
void __cdecl StoreItemChangeNotifyRecvRegister::StoreItemChangeNotifyRecvRegister(
        StoreItemChangeNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 612;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))StoreItemChangeNotifyRecvFunc);
};

// Line 295: range 0000000000469374-0000000000469607
void __cdecl StoreItemChangeNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  proto::StoreItemChangeNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  proto::StoreType v6; // eax
  google::protobuf::RepeatedPtrField<proto::Item>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::Item>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  Player *player; // [rsp+28h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::Item> *__for_range; // [rsp+30h] [rbp-E0h]
  const proto::Item *item; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (proto::StoreItemChangeNotify *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::StoreItemChangeNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 10 notify:296";
  v2->item_list_.arena_ = (google::protobuf::Arena *)StoreItemChangeNotifyRecvFunc;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::StoreItemChangeNotify::StoreItemChangeNotify(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::StoreItemChangeNotify>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "StoreItemChangeNotifyRecvFunc",
      299);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v12, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    player = Robot::getPlayer(robot);
    __for_range = proto::StoreItemChangeNotify::item_list(v2 + 1);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Item>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Item>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::Item const>::operator!=(&__for_begin, &__for_end) )
    {
      item = google::protobuf::internal::RepeatedPtrIterator<proto::Item const>::operator*(&__for_begin);
      v6 = proto::StoreItemChangeNotify::store_type(v2 + 1);
      Player::addItem(player, v6, item);
      google::protobuf::internal::RepeatedPtrIterator<proto::Item const>::operator++(&__for_begin);
    }
  }
  proto::StoreItemChangeNotify::~StoreItemChangeNotify(v2 + 1);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 309: range 00000000004E2480-00000000004E24B9
void __cdecl StoreItemDelNotifyRecvRegister::StoreItemDelNotifyRecvRegister(StoreItemDelNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 635;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))StoreItemDelNotifyRecvFunc);
};

// Line 310: range 0000000000469608-00000000004698A6
void __cdecl StoreItemDelNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  proto::StoreItemDelNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  proto::StoreType v6; // ecx
  unsigned __int64 *__for_begin; // [rsp+18h] [rbp-F8h]
  Player *player; // [rsp+20h] [rbp-F0h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+28h] [rbp-E8h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h]
  unsigned __int64 guid; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (proto::StoreItemDelNotify *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::StoreItemDelNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 10 notify:311";
  *(_QWORD *)&v2->guid_list_.current_size_ = StoreItemDelNotifyRecvFunc;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::StoreItemDelNotify::StoreItemDelNotify(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::StoreItemDelNotify>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "StoreItemDelNotifyRecvFunc",
      314);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v12, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    player = Robot::getPlayer(robot);
    __for_range = proto::StoreItemDelNotify::guid_list(v2 + 1);
    __for_begin = (unsigned __int64 *)google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
        __asan_report_load8(__for_begin);
      guid = *__for_begin;
      v6 = proto::StoreItemDelNotify::store_type(v2 + 1);
      Player::delItem(player, v6, guid);
      ++__for_begin;
    }
  }
  proto::StoreItemDelNotify::~StoreItemDelNotify(v2 + 1);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 324: range 00000000004E24BA-00000000004E24F3
void __cdecl AvatarDataNotifyRecvRegister::AvatarDataNotifyRecvRegister(AvatarDataNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 1633;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))AvatarDataNotifyRecvFunc);
};

// Line 325: range 00000000004698A7-0000000000469CC5
void __cdecl AvatarDataNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::minet::Packet *v5; // rax
  int v6; // r14d
  Avatar *v7; // rdx
  Avatar *v8; // rdx
  int i; // [rsp+1Ch] [rbp-1E4h]
  Player *player; // [rsp+20h] [rbp-1E0h]
  const proto::AvatarInfo *avatar_info; // [rsp+28h] [rbp-1D8h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-1D0h] BYREF
  char v13[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 avatar_ptr:335 64 248 10 notify:326";
  *(_QWORD *)(v2 + 16) = AvatarDataNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  v4[536862731] = -202116109;
  proto::AvatarDataNotify::AvatarDataNotify((proto::AvatarDataNotify *const)(v2 + 64));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::AvatarDataNotify>(v5, (proto::AvatarDataNotify *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "AvatarDataNotifyRecvFunc",
      329);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v12, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    player = Robot::getPlayer(robot);
    for ( i = 0; i < proto::AvatarDataNotify::avatar_list_size((const proto::AvatarDataNotify *const)(v2 + 64)); ++i )
    {
      std::make_shared<Avatar>();
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_recv.cpp",
          "AvatarDataNotifyRecvFunc",
          338);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v12, (const char (*)[19])"avatar_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v12);
        v6 = 0;
      }
      else
      {
        avatar_info = proto::AvatarDataNotify::avatar_list((const proto::AvatarDataNotify *const)(v2 + 64), i);
        v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( Avatar::fromProto(v7, avatar_info) )
        {
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_recv.cpp",
            "AvatarDataNotifyRecvFunc",
            344);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"fromProto fails");
          common::milog::MiLogStream::~MiLogStream(&v12);
          v6 = 0;
        }
        else
        {
          v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          Player::addAvatar(player, v8);
          v6 = 1;
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
      if ( v6 != 1 )
        break;
    }
  }
  proto::AvatarDataNotify::~AvatarDataNotify((proto::AvatarDataNotify *const)(v2 + 64));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 351: range 00000000004E24F4-00000000004E252D
void __cdecl EnterScenePeerNotifyRecvRegister::EnterScenePeerNotifyRecvRegister(
        EnterScenePeerNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 252;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))EnterScenePeerNotifyRecvFunc);
};

// Line 352: range 0000000000469CC6-0000000000469EA3
void __cdecl EnterScenePeerNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-D0h] BYREF
  char v7[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 10 notify:353";
  *(_QWORD *)(v2 + 16) = EnterScenePeerNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::EnterScenePeerNotify::EnterScenePeerNotify((proto::EnterScenePeerNotify *const)(v2 + 48));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::EnterScenePeerNotify>(v5, (proto::EnterScenePeerNotify *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "EnterScenePeerNotifyRecvFunc",
      356);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v6, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  proto::EnterScenePeerNotify::~EnterScenePeerNotify((proto::EnterScenePeerNotify *const)(v2 + 48));
  if ( v7 == (char *)v2 )
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

// Line 361: range 00000000004E252E-00000000004E2567
void __cdecl SceneAreaUnlockNotifyRecvRegister::SceneAreaUnlockNotifyRecvRegister(
        SceneAreaUnlockNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 293;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))SceneAreaUnlockNotifyRecvFunc);
};

// Line 362: range 0000000000469EA4-000000000046A147
void __cdecl SceneAreaUnlockNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  proto::SceneAreaUnlockNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  uint32_t *__for_begin; // [rsp+20h] [rbp-F0h]
  Scene *scene; // [rsp+28h] [rbp-E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (proto::SceneAreaUnlockNotify *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::SceneAreaUnlockNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 10 notify:363";
  *(_QWORD *)&v2->area_list_.current_size_ = SceneAreaUnlockNotifyRecvFunc;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::SceneAreaUnlockNotify::SceneAreaUnlockNotify(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::SceneAreaUnlockNotify>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "SceneAreaUnlockNotifyRecvFunc",
      366);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v10, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    scene = Robot::getScene(robot);
    __for_range = proto::SceneAreaUnlockNotify::area_list(v2 + 1);
    __for_begin = (uint32_t *)google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      Scene::unlockArea(scene, *__for_begin++);
    }
  }
  proto::SceneAreaUnlockNotify::~SceneAreaUnlockNotify(v2 + 1);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 376: range 00000000004E2568-00000000004E25A1
void __cdecl DungeonSettleNotifyRecvRegister::DungeonSettleNotifyRecvRegister(
        DungeonSettleNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 999;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))DungeonSettleNotifyRecvFunc);
};

// Line 377: range 000000000046A446-000000000046A6A9
void __cdecl DungeonSettleNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::minet::Packet *v5; // rax
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-1B0h] BYREF
  char v7[400]; // [rsp+40h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 248 10 notify:378";
  *(_QWORD *)(v2 + 16) = DungeonSettleNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  proto::DungeonSettleNotify::DungeonSettleNotify((proto::DungeonSettleNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::DungeonSettleNotify>(v5, (proto::DungeonSettleNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "DungeonSettleNotifyRecvFunc",
      381);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v6, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::function<int ()(Robot &)>::function<DungeonSettleNotifyRecvFunc(Robot &,std::shared_ptr<common::minet::Packet> &)::{lambda(Robot &)#1},void,void>(
      (std::function<int(Robot&)> *const)&v6,
      (DungeonSettleNotifyRecvFunc::<lambda(Robot&)>)(v2 + 32));
    Robot::delayExecLogicFunc(robot, (RobotLogicFunc *)&v6);
    std::function<int ()(Robot &)>::~function((std::function<int(Robot&)> *const)&v6);
  }
  proto::DungeonSettleNotify::~DungeonSettleNotify((proto::DungeonSettleNotify *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 384: range 000000000046A148-000000000046A445
int __cdecl DungeonSettleNotifyRecvFunc(Robot &,std::shared_ptr<common::minet::Packet> &)::{lambda(Robot &)#1}::operator()(
        const DungeonSettleNotifyRecvFunc::<lambda(Robot&)> *const __closure,
        Robot *robot)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  int result; // eax
  const Scene *scene; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 7 req:389 96 32 7 rsp:390";
  *(_QWORD *)(v2 + 16) = DungeonSettleNotifyRecvFunc(Robot &,std::shared_ptr<common::minet::Packet> &)::{lambda(Robot &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  scene = Robot::getScene(robot);
  if ( Scene::getSceneType(scene) == SCENE_DUNGEON )
  {
    proto::PlayerQuitDungeonReq::PlayerQuitDungeonReq((proto::PlayerQuitDungeonReq *const)(v2 + 32));
    proto::PlayerQuitDungeonRsp::PlayerQuitDungeonRsp((proto::PlayerQuitDungeonRsp *const)(v2 + 96));
    if ( Robot::sendProto<proto::PlayerQuitDungeonReq,proto::PlayerQuitDungeonRsp>(
           robot,
           (proto::PlayerQuitDungeonReq *)(v2 + 32),
           (proto::PlayerQuitDungeonRsp *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_recv.cpp",
        "operator()",
        393);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"sendProto fails");
      operator<<(v6, robot);
      common::milog::MiLogStream::~MiLogStream(&v10);
      v5 = -1;
    }
    else if ( Robot::enterScene(robot) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_recv.cpp",
        "operator()",
        398);
      v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v10, (const char (*)[17])"enterScene fails");
      operator<<(v7, robot);
      common::milog::MiLogStream::~MiLogStream(&v10);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    proto::PlayerQuitDungeonRsp::~PlayerQuitDungeonRsp((proto::PlayerQuitDungeonRsp *const)(v2 + 96));
    proto::PlayerQuitDungeonReq::~PlayerQuitDungeonReq((proto::PlayerQuitDungeonReq *const)(v2 + 32));
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
  return result;
};

// Line 405: range 00000000004E25BE-00000000004E25F7
void __cdecl RobotPushPlayerDataNotifyRecvRegister::RobotPushPlayerDataNotifyRecvRegister(
        RobotPushPlayerDataNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 97;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))RobotPushPlayerDataNotifyRecvFunc);
};

// Line 406: range 000000000046A6AA-000000000046A8D9
void __cdecl RobotPushPlayerDataNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::minet::Packet *v5; // rax
  std::string *v6; // rax
  Player *player; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:407";
  *(_QWORD *)(v2 + 16) = RobotPushPlayerDataNotifyRecvFunc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::RobotPushPlayerDataNotify::RobotPushPlayerDataNotify((proto::RobotPushPlayerDataNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::RobotPushPlayerDataNotify>(
         v5,
         (proto::RobotPushPlayerDataNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "RobotPushPlayerDataNotifyRecvFunc",
      410);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v8, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    player = Robot::getPlayer(robot);
    v6 = proto::RobotPushPlayerDataNotify::mutable_bin[abi:cxx11]((proto::RobotPushPlayerDataNotify *const)(v2 + 32));
    std::string::basic_string((std::string *const)&v8, v6);
    Player::setPlayerDataBin(player, (std::string *)&v8);
    std::string::~string((std::string *const)&v8);
  }
  proto::RobotPushPlayerDataNotify::~RobotPushPlayerDataNotify((proto::RobotPushPlayerDataNotify *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 417: range 00000000004E25F8-00000000004E2631
void __cdecl BargainStartNotifyRecvRegister::BargainStartNotifyRecvRegister(BargainStartNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 404;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))BargainStartNotifyRecvFunc);
};

// Line 418: range 000000000046A8DA-000000000046AAAC
void __cdecl BargainStartNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::minet::Packet *v5; // rax
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:419";
  *(_QWORD *)(v2 + 16) = BargainStartNotifyRecvFunc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::BargainStartNotify::BargainStartNotify((proto::BargainStartNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::BargainStartNotify>(v5, (proto::BargainStartNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "BargainStartNotifyRecvFunc",
      422);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v6, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    Robot::getPlayer(robot);
  }
  proto::BargainStartNotify::~BargainStartNotify((proto::BargainStartNotify *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 429: range 00000000004E2632-00000000004E266B
void __cdecl PlayerApplyEnterMpResultNotifyRecvRegister::PlayerApplyEnterMpResultNotifyRecvRegister(
        PlayerApplyEnterMpResultNotifyRecvRegister *const this)
{
  std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> *v1; // rax
  std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type __k; // [rsp+1Eh] [rbp-2h] BYREF

  __k = 1807;
  v1 = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::operator[](
         &g_robot_recv_map,
         &__k);
  std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator=<void (&)(Robot &,std::shared_ptr<common::minet::Packet> &)>(
    v1,
    (void (*)(Robot *, std::shared_ptr<common::minet::Packet> *))PlayerApplyEnterMpResultNotifyRecvFunc);
};

// Line 430: range 000000000046AAAD-000000000046ADED
void __cdecl PlayerApplyEnterMpResultNotifyRecvFunc(Robot *robot, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  bool is_agreed; // cl
  common::milog::MiLogStream *v7; // r14
  Player *player; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 10 notify:431";
  *(_QWORD *)(v2 + 16) = PlayerApplyEnterMpResultNotifyRecvFunc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::PlayerApplyEnterMpResultNotify::PlayerApplyEnterMpResultNotify((proto::PlayerApplyEnterMpResultNotify *const)(v2 + 48));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::getProto<proto::PlayerApplyEnterMpResultNotify>(
         v5,
         (proto::PlayerApplyEnterMpResultNotify *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_recv.cpp",
      "PlayerApplyEnterMpResultNotifyRecvFunc",
      434);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v10, (const char (*)[15])"getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    player = Robot::getPlayer(robot);
    if ( *(char *)(((unsigned __int64)player >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(player);
    player->is_recv_apply_mp_result = 1;
    is_agreed = proto::PlayerApplyEnterMpResultNotify::is_agreed((const proto::PlayerApplyEnterMpResultNotify *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&player->is_apply_mp_agreed >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)player + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&player->is_apply_mp_agreed >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_store1(&player->is_apply_mp_agreed);
    }
    player->is_apply_mp_agreed = is_agreed;
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/operation/robot_recv.cpp",
      "PlayerApplyEnterMpResultNotifyRecvFunc",
      440);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v9,
           (const char (*)[37])"Recv PlayerApplyEnterMpResultNotify:");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v10, (google::protobuf::Message *)(v2 + 48));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v10);
    std::string::~string((std::string *const)&v10);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  proto::PlayerApplyEnterMpResultNotify::~PlayerApplyEnterMpResultNotify((proto::PlayerApplyEnterMpResultNotify *const)(v2 + 48));
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
};

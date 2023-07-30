// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/miracle_ring_comp.cpp

// Line 22: range 0000000014516C82-0000000014516D56
void __cdecl MiracleRingComp::MiracleRingComp(
        MiracleRingComp *const this,
        Gadget *gadget,
        const MiracleRingParam *param)
{
  int (**v3)(...); // rdx
  uint32_t owner_uid; // ecx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'MiracleRingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  owner_uid = param->owner_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid_);
  }
  this->owner_uid_ = owner_uid;
};

// Line 27: range 0000000014516D58-0000000014516E84
int32_t __cdecl MiracleRingComp::interactCheck(
        MiracleRingComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  uint32_t Uid; // ecx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid == this->owner_uid_ )
    return 0;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/miracle_ring_comp.cpp",
    "interactCheck",
    30);
  v4 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         &v9,
         (const char (*)[51])"MiracleRing can only interact by owner, owner_uid:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->owner_uid_);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])", interact_uid:");
  val = Player::getUid(player);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return -1;
};

// Line 40: range 0000000014516E86-0000000014516E9C
int32_t __cdecl MiracleRingComp::interact(
        MiracleRingComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  return -1;
};

// Line 45: range 0000000014516E9E-0000000014517067
int32_t __cdecl MiracleRingComp::onExitPlayerView(MiracleRingComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t Uid; // ecx
  PlayerMiracleRingComp *MiracleRingComp; // r14
  Scene *v7; // rax
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 scene_ptr:49";
  *(_QWORD *)(v2 + 16) = MiracleRingComp::onExitPlayerView;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid == this->owner_uid_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v2 + 32));
    if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
    {
      MiracleRingComp = Player::getMiracleRingComp(player);
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      PlayerMiracleRingComp::tryDestroyMiracleRingGadgetAndQuitScene(
        MiracleRingComp,
        v7,
        &proto_log::PlayerLogBodyMiracleRingDestroy::REASON_EXIT_SIGHT,
        1);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  result = 0;
  if ( v9 == (char *)v2 )
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

// Line 59: range 0000000014517068-00000000145172E9
void __cdecl MiracleRingComp::onDie(MiracleRingComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t v4; // ecx
  Player *v5; // rax
  PlayerMiracleRingComp *MiracleRingComp; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-A0h] BYREF
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 scene_ptr:61 64 16 19 owner_player_ptr:64";
  *(_QWORD *)(v1 + 16) = MiracleRingComp::onDie;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    v4 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v1 + 64), v4);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      MiracleRingComp = Player::getMiracleRingComp(v5);
      PlayerMiracleRingComp::grantMiracleRingDropItems(MiracleRingComp);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/miracle_ring_comp.cpp",
        "onDie",
        71);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        &v7,
        (const char (*)[54])"player leave scene, but miraclering don't leave scene");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

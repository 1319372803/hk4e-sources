// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/monster/monster_fish_comp.cpp

// Line 19: range 00000000168D36BE-00000000168D37B7
void __cdecl MonsterFishComp::MonsterFishComp(
        MonsterFishComp *const this,
        Monster *monster,
        GadgetPtr *p_fish_pool_ptr,
        uint32_t fish_id)
{
  int (**v4)(...); // rdx

  MonsterCompBase::MonsterCompBase(this, monster);
  v4 = (int (**)(...))(&`vtable for'MonsterFishComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterCompBase = v4;
  std::weak_ptr<Gadget>::weak_ptr<Gadget,void>(&this->fish_pool_wtr_, p_fish_pool_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_id_);
  }
  this->fish_id_ = fish_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_shock_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_shock_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_shock_time_);
  }
  this->last_shock_time_ = 0;
};

// Line 24: range 00000000168D37B8-00000000168D3A66
int32_t __cdecl MonsterFishComp::toClient(const MonsterFishComp *const this, proto::SceneMonsterInfo *monster_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t EntityId; // edx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const Vector3 *Position; // rax
  proto::Vector *v9; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t GadgetId; // edx
  int32_t result; // eax
  proto::SceneFishInfo *fish_info; // [rsp+18h] [rbp-98h]
  proto::Vector from; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 pool_ptr:28";
  *(_QWORD *)(v2 + 16) = MonsterFishComp::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  fish_info = proto::SceneMonsterInfo::mutable_fish_info(monster_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneFishInfo::set_fish_id(fish_info, this->fish_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_shock_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_shock_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneFishInfo::set_last_shock_time(fish_info, this->last_shock_time_);
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EntityId = Entity::getEntityId((const Entity *const)v5);
    proto::SceneFishInfo::set_fish_pool_entity_id(fish_info, EntityId);
    v7 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Position = Entity::getPosition((const Entity *const)v7);
    Vector3::operator proto::Vector(&from, Position);
    v9 = proto::SceneFishInfo::mutable_fish_pool_pos(fish_info);
    proto::Vector::operator=(v9, &from);
    proto::Vector::~Vector(&from);
    v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GadgetId = Gadget::getGadgetId(v10);
    proto::SceneFishInfo::set_fish_pool_gadget_id(fish_info, GadgetId);
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  result = 0;
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

// Line 39: range 00000000168D3A68-00000000168D3D9C
int32_t __cdecl MonsterFishComp::doHurt(MonsterFishComp *const this, Creature *attacker, HurtContext *context)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 gadget_ptr:41 64 16 16 pool_comp_ptr:47";
  *(_QWORD *)(v3 + 16) = MonsterFishComp::doHurt;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v3 + 32));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster_fish_comp.cpp",
      "doHurt",
      44);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v12,
           (const char (*)[37])"pool entity is null, fish_entity_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Entity::getEntityId((const Entity *const)this->monster_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
    if ( std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster_fish_comp.cpp",
        "doHurt",
        50);
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v12,
             (const char (*)[35])"pool comp is null, pool_entity_id:");
      v8 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = Entity::getEntityId((const Entity *const)v8);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      v9 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      FishPoolComp::disperseFishPool(v9);
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v3 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
  result = 0;
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
  return result;
};

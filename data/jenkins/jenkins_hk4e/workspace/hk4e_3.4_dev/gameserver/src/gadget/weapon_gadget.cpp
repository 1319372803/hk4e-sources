// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/weapon_gadget.cpp

// Line 21: range 0000000015CCA1DC-0000000015CCA388
int32_t __cdecl WeaponGadget::init(WeaponGadget *const this)
{
  WeaponGadget *v1; // rdx
  unsigned __int64 v2; // rax
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *(_QWORD *)this->baseclass_0 + 408LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(WeaponGadget *, _QWORD))v2)(v1, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/weapon_gadget.cpp",
      "init",
      24);
    v3 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v6, (const char (*)[18])"initAbility fails");
    common::milog::MiLogStream::operator<<<WeaponGadget,(WeaponGadget*)0>(v3, this);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else if ( Creature::calcProp(this) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/weapon_gadget.cpp",
      "init",
      29);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v6, (const char (*)[16])"calcProp fails ");
    common::milog::MiLogStream::operator<<<WeaponGadget,(WeaponGadget*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    Creature::setCurHpFull(this, 0);
    return 0;
  }
};

// Line 38: range 0000000015CCA38A-0000000015CCA511
int32_t __cdecl WeaponGadget::toClient(const WeaponGadget *const this, proto::SceneWeaponInfo *weapon_info)
{
  const EntityAnimatorComp *AnimatorComp; // rdx
  proto::AbilitySyncStateInfo *ability_info; // [rsp+10h] [rbp-40h]
  proto::EntityRendererChangedInfo *renderer_changed_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneWeaponInfo::set_entity_id(weapon_info, *(_DWORD *)&this->baseclass_0[256]);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneWeaponInfo::set_gadget_id(weapon_info, this->gadget_id_);
  ability_info = proto::SceneWeaponInfo::mutable_ability_info(weapon_info);
  if ( AbilityComp::toClient(&this->ability_comp_, ability_info) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/weapon_gadget.cpp",
      "toClient",
      44);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v6, (const char (*)[15])"toClient fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    renderer_changed_info = proto::SceneWeaponInfo::mutable_renderer_changed_info(weapon_info);
    AnimatorComp = Entity::getAnimatorComp((const Entity *const)this);
    EntityAnimatorComp::toClient(AnimatorComp, renderer_changed_info);
    return 0;
  }
};

// Line 54: range 0000000015CCA512-0000000015CCAA2F
int32_t __cdecl WeaponGadget::enterScene(WeaponGadget *const this, Scene *scene, const VisionContext *context)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t v11; // r14d
  common::milog::MiLogStream *v12; // rdx
  Scene *v13; // rdx
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v16; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *comp_type; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+38h] [rbp-C8h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 15 creature_ptr:63 64 16 12 scene_ptr:69";
  *(_QWORD *)(v3 + 16) = WeaponGadget::enterScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(
            (const EcsBase<Gadget,GadgetCompBase,28>::Iterator *const)(v3 + 64),
            &__for_end) )
  {
    v16 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*((const EcsBase<Gadget,GadgetCompBase,28>::Iterator *const)(v3 + 64));
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v16);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v16);
    v6 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(_QWORD *)v6 + 32LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v7)(v6) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/weapon_gadget.cpp",
        "enterScene",
        59);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v20,
             (const char (*)[39])"gadget comp start comp failed, gadget:");
      v9 = common::milog::MiLogStream::operator<<<WeaponGadget,(WeaponGadget*)0>(v8, this);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])", comp:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, comp_type);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v11 = -1;
      goto LABEL_22;
    }
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++((EcsBase<Gadget,GadgetCompBase,28>::Iterator *const)(v3 + 64));
  }
  std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v3 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v3 + 32), 0LL) )
  {
    v11 = -1;
  }
  else
  {
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Entity::getScene((const Entity *const)(v3 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/weapon_gadget.cpp",
        "enterScene",
        72);
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v20,
              (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::operator<<<WeaponGadget,(WeaponGadget*)0>(v12, this);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v11 = -1;
    }
    else
    {
      v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Scene::addGridlessEntity(v13, (Entity *)this) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/weapon_gadget.cpp",
          "enterScene",
          77);
        v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v20,
                (const char (*)[24])"addGridlessEntity fails");
        common::milog::MiLogStream::operator<<<WeaponGadget,(WeaponGadget*)0>(v14, this);
        common::milog::MiLogStream::~MiLogStream(&v20);
        v11 = -1;
      }
      else
      {
        std::shared_ptr<Scene>::shared_ptr(
          (std::shared_ptr<Scene> *const)&__for_end,
          (const std::shared_ptr<Scene> *)(v3 + 64));
        Entity::setScene((Entity *const)this, (ScenePtr *)&__for_end);
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&__for_end);
        v11 = 0;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 32));
LABEL_22:
  result = v11;
  if ( v21 == (char *)v3 )
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

// Line 86: range 0000000015CCAA30-0000000015CCAC33
int32_t __cdecl WeaponGadget::leaveScene(WeaponGadget *const this, const VisionContext *context)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Scene *v7; // rcx
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 scene_ptr:87";
  *(_QWORD *)(v2 + 16) = WeaponGadget::leaveScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/weapon_gadget.cpp",
      "leaveScene",
      90);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v9, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::operator<<<WeaponGadget,(WeaponGadget*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    Scene::delGridlessEntity(v7, *(_DWORD *)&this->baseclass_0[256]);
    v6 = 0;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v6;
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

// Line 99: range 0000000015CCAC34-0000000015CCAF71
// local variable allocation has failed, the output may be wrong!
EntityPtr __cdecl WeaponGadget::findEntityInSameScene(const WeaponGadget *const this, uint32_t entity_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  Player *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void (__fastcall *v11)(const WeaponGadget *const, unsigned __int64, _QWORD); // r8
  int v12; // r14d
  EntityPtr result; // rax
  uint32_t entity_ida; // [rsp+Ch] [rbp-C4h]
  char v15[176]; // [rsp+20h] [rbp-B0h] BYREF

  entity_ida = v2;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 14 entity_ptr:100 64 16 14 player_ptr:105 96 16 13 scene_ptr:108";
  *(_QWORD *)(v3 + 16) = WeaponGadget::findEntityInSameScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  Entity::findEntityInSameScene((const Entity *const)(v3 + 32), entity_id);
  if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)this, (std::shared_ptr<Entity> *)(v3 + 32));
  }
  else
  {
    v6 = *(_QWORD *)&entity_id;
    if ( *(_BYTE *)((*(_QWORD *)&entity_id >> 3) + 0x7FFF8000LL) )
      __asan_report_load8();
    v7 = **(_QWORD **)&entity_id + 152LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, __int64))v7)(v3 + 64, v6);
    if ( !std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      goto LABEL_21;
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Player::getSceneComp(v8);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
    {
      v9 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v10 = *(_QWORD *)v9 + 120LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v11 = *(void (__fastcall **)(const WeaponGadget *const, unsigned __int64, _QWORD))v10;
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v9 = __asan_report_store16(this);
      v11(this, v9, entity_ida);
      v12 = 0;
    }
    else
    {
      v12 = 1;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
    if ( v12 == 1 )
LABEL_21:
      std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)this, 0LL);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v15 == (char *)v3 )
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
  result._M_ptr = (std::__shared_ptr<Entity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 119: range 0000000015CCAF72-0000000015CCAF85
void __cdecl WeaponGadget::onChangeHp(WeaponGadget *const this, float old_hp, ChangeHpContext *context)
{
  ;
};

// Line 126: range 0000000015CCAF86-0000000015CCB301
std::string *__cdecl AvatarWeaponGadget::getDesc[abi:cxx11](std::string *retstr, const AvatarWeaponGadget *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int ItemId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  unsigned __int64 v12; // rax
  void (__fastcall **v13)(std::string *, unsigned __int64); // rdx
  std::string v; // [rsp+10h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 6 os:127 64 16 16 creature_ptr:131";
  *(_QWORD *)(v2 + 16) = AvatarWeaponGadget::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( std::operator!=<Weapon>(&this->weapon_ptr_, 0LL) )
  {
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "weapon:[item_id:");
    v6 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_ptr_);
    ItemId = Item::getItemId(v6);
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, ItemId);
    v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, ",gadget_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->gadget_id_);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "]");
    std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v2 + 64));
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL) )
    {
      v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
              ",owner:");
      v12 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      v13 = *(void (__fastcall ***)(std::string *, unsigned __int64))v12;
      if ( *(_BYTE *)((*(_QWORD *)v12 >> 3) + 0x7FFF8000LL) )
        v12 = __asan_report_load8();
      (*v13)(&v, v12);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, &v);
      std::string::~string(&v);
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  }
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
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v16 == (char *)v2 )
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

// Line 142: range 0000000015CCB440-0000000015CCB635
int32_t __cdecl AvatarWeaponGadget::toClient(const AvatarWeaponGadget *const this, proto::SceneWeaponInfo *weapon_info)
{
  common::milog::MiLogStream *v2; // rdx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t ItemId; // edx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint64_t Guid; // rdx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Level; // edx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t PromoteLevel; // edx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rbx
  google::protobuf::Map<unsigned int,unsigned int> *affix_map; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-30h] BYREF

  if ( WeaponGadget::toClient(this, weapon_info) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/weapon_gadget.cpp",
      "toClient",
      145);
    v2 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v14, (const char (*)[15])"toClient fails");
    common::milog::MiLogStream::operator<<<AvatarWeaponGadget,(AvatarWeaponGadget*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
  else
  {
    if ( std::operator!=<Weapon>(&this->weapon_ptr_, 0LL) )
    {
      v4 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_ptr_);
      ItemId = Item::getItemId(v4);
      proto::SceneWeaponInfo::set_item_id(weapon_info, ItemId);
      v6 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_ptr_);
      Guid = Item::getGuid(v6);
      proto::SceneWeaponInfo::set_guid(weapon_info, Guid);
      v8 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_ptr_);
      Level = Weapon::getLevel(v8);
      proto::SceneWeaponInfo::set_level(weapon_info, Level);
      v10 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_ptr_);
      PromoteLevel = Weapon::getPromoteLevel(v10);
      proto::SceneWeaponInfo::set_promote_level(weapon_info, PromoteLevel);
      affix_map = proto::SceneWeaponInfo::mutable_affix_map(weapon_info);
      v12 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_ptr_);
      std::function<ForeachPolicy ()(unsigned int,unsigned int)>::function<AvatarWeaponGadget::toClient(proto::SceneWeaponInfo &)::{lambda(unsigned int,unsigned int)#1},void,void>(
        (std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v14,
        (AvatarWeaponGadget::toClient::<lambda(uint32_t, uint32_t)>)affix_map);
      Weapon::foreachSkillAffix(v12, (std::function<ForeachPolicy(unsigned int,unsigned int)> *)&v14);
      std::function<ForeachPolicy ()(unsigned int,unsigned int)>::~function((std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v14);
    }
    return 0;
  }
};

// Line 155: range 0000000015CCB302-0000000015CCB43E
__int64 __fastcall AvatarWeaponGadget::toClient(proto::SceneWeaponInfo &)const::{lambda(unsigned int,unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t affix_id,
        uint32_t affix_level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rdx
  unsigned __int64 v6; // r12
  unsigned int *v7; // rax
  _DWORD *v8; // rdx
  __int64 result; // rax
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 64);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 affix_id:155";
  *(_QWORD *)(v3 + 16) = AvatarWeaponGadget::toClient(proto::SceneWeaponInfo &)const::{lambda(unsigned int,unsigned int)#1}::operator();
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = affix_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
         *(google::protobuf::Map<unsigned int,unsigned int> *const *)__closure,
         (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)v5 - 8);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = affix_level;
  result = 0LL;
  if ( v11 == (char *)v3 )
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

// Line 166: range 0000000015CCB636-0000000015CCB7E9
PlayerPtr __cdecl AvatarWeaponGadget::getPlayer(const AvatarWeaponGadget *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  void (__fastcall *v6)(const AvatarWeaponGadget *const, unsigned __int64); // rcx
  PlayerPtr result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 16 creature_ptr:167";
  *(_QWORD *)(v1 + 16) = AvatarWeaponGadget::getPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v1 + 32));
  if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v1 + 32), 0LL) )
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    v5 = *(_QWORD *)v4 + 152LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    v6 = *(void (__fastcall **)(const AvatarWeaponGadget *const, unsigned __int64))v5;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store16(this);
    v6(this, v4);
  }
  else
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

// Line 178: range 0000000015CCB7EA-0000000015CCBB73
int32_t __cdecl MonsterWeaponGadget::leaveScene(MonsterWeaponGadget *const this, const VisionContext *context)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Scene *v5; // r14
  uint32_t EntityId; // eax
  int32_t v7; // r14d
  Monster *v8; // rdi
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 16 creature_ptr:179 64 16 15 monster_ptr:189";
  *(_QWORD *)(v2 + 16) = MonsterWeaponGadget::leaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v2 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
  {
    Entity::getScene((const Entity *const)(v2 + 64));
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      EntityId = Entity::getEntityId((const Entity *const)this);
      Scene::delGridlessEntity(v5, EntityId);
    }
    v7 = 0;
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  else
  {
    std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 64));
    if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/weapon_gadget.cpp",
        "leaveScene",
        192);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v12, (const char (*)[20])"monster_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v12);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
      {
        v8 = (Monster *)context;
        __asan_report_load4();
      }
      if ( Monster::delWeaponGadget(v8, &this->attach_to_, 1, context->type == VISION_DIE) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/weapon_gadget.cpp",
          "leaveScene",
          197);
        v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               &v12,
               (const char (*)[22])"delWeaponGadget fails");
        common::milog::MiLogStream::operator<<<MonsterWeaponGadget,(MonsterWeaponGadget*)0>(v9, this);
        common::milog::MiLogStream::~MiLogStream(&v12);
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  result = v7;
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

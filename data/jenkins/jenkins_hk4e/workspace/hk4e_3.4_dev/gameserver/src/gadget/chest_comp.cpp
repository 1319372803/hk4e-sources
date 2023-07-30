// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/chest_comp.cpp

// Line 33: range 000000001313C70E-000000001313C8E2
void __cdecl ChestComp::ChestComp(ChestComp *const this, Gadget *gadget, const ChestParam *chest_param)
{
  int (**v3)(...); // rdx
  uint32_t chest_drop_id; // ecx
  bool is_show_cutscene; // cl
  bool is_auto_pick; // cl

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'ChestComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)chest_param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)chest_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chest_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  chest_drop_id = chest_param->chest_drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->chest_drop_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chest_drop_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chest_drop_id_);
  }
  this->chest_drop_id_ = chest_drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&chest_param->is_show_cutscene >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)chest_param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&chest_param->is_show_cutscene >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load1(&chest_param->is_show_cutscene);
  }
  is_show_cutscene = chest_param->is_show_cutscene;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_show_cutscene_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_show_cutscene_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_show_cutscene_);
  }
  this->is_show_cutscene_ = is_show_cutscene;
  if ( *(_BYTE *)(((unsigned __int64)&chest_param->is_auto_pick >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)chest_param + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&chest_param->is_auto_pick >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load1(&chest_param->is_auto_pick);
  }
  is_auto_pick = chest_param->is_auto_pick;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_pick_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_pick_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_auto_pick_);
  }
  this->is_auto_pick_ = is_auto_pick;
};

// Line 42: range 000000001313C8E4-000000001313CEC1
int32_t __cdecl ChestComp::toClient(const ChestComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  Player *v7; // rax
  PlayerMpComp *MpComp; // rax
  Group *v9; // rax
  Group *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 config_id:72 64 16 12 scene_ptr:53 96 16 13 player_ptr:59 128 16 12 group_ptr:71";
  *(_QWORD *)(v2 + 16) = ChestComp::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  proto::SceneGadgetInfo::set_is_show_cutscene(gadget_info, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_show_cutscene_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_show_cutscene_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_show_cutscene_);
  }
  if ( this->is_show_cutscene_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/chest_comp.cpp",
        "toClient",
        56);
      v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v18, (const char (*)[17])"getScene failed ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Scene::getOwnPlayer((const Scene *const)(v2 + 96));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/chest_comp.cpp",
          "toClient",
          62);
        v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v18,
               (const char (*)[23])"getOwnerPlayer failed ");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        MpComp = Player::getMpComp(v7);
        if ( !PlayerMpComp::isInMpMode(MpComp) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Entity::getGroup((const Entity *const)(v2 + 128));
          *(_DWORD *)(v2 + 48) = Entity::getConfigId((const Entity *const)this->gadget_);
          if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 128), 0LL)
            || (v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128)),
                !Group::isChestCutSceneShowed(v9, *(_DWORD *)(v2 + 48))) )
          {
            proto::SceneGadgetInfo::set_is_show_cutscene(gadget_info, 1);
            if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 128), 0LL) )
            {
              v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              Group::onChestShowCutScene(v11, *(_DWORD *)(v2 + 48));
              common::milog::MiLogStream::create(
                &v18,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/chest_comp.cpp",
                "toClient",
                83);
              v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v18,
                      (const char (*)[33])"chest cutscene showed, group_id:");
              v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              val = Group::getGroupId(v13);
              v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
              v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v14,
                      (const char (*)[13])", config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v18);
            }
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 128));
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  result = 0;
  if ( v19 == (char *)v2 )
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
  return result;
};

// Line 91: range 000000001313CEC2-000000001313D647
int32_t __cdecl ChestComp::interactCheck(ChestComp *const this, Player *player, const EntityInteractParam *param)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int v15; // r15d
  uint32_t CityComp; // eax
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  int v22; // r15d
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  uint32_t group_id; // [rsp+28h] [rbp-B8h]
  uint32_t config_id; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 13 scene_ptr:106 64 16 12 city_ptr:134";
  *(_QWORD *)(v4 + 16) = ChestComp::interactCheck;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Gadget::getState(this->gadget_) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/chest_comp.cpp",
      "interactCheck",
      95);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v27, (const char (*)[17])"gadget is locked");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v3 = 804;
  }
  else
  {
    SceneComp = Player::getSceneComp(player);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/chest_comp.cpp",
        "interactCheck",
        101);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v27,
             (const char (*)[29])"isInMyPlayerWorld is false. ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v9, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v3 = 512;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getScene((const Entity *const)(v4 + 32));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/chest_comp.cpp",
          "interactCheck",
          109);
        v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v27, (const char (*)[6])"uid: ");
        val = Player::getUid(player);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          v11,
          (const char (*)[24])" gadget_.getScene fails");
        common::milog::MiLogStream::~MiLogStream(&v27);
        v3 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        group_id = Entity::getGroupId((const Entity *const)this->gadget_);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        config_id = Entity::getConfigId((const Entity *const)this->gadget_);
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( Scene::getSceneType(v12) != SCENE_DUNGEON )
          goto LABEL_48;
        std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 64));
        if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/chest_comp.cpp",
            "interactCheck",
            120);
          v13 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v27,
                  (const char (*)[53])"dynamic_pointer_cast<DungeonScene> failed,scene_id: ");
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          val = Scene::getSceneId(v14);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v3 = -1;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 64));
        if ( v15 == 1 )
        {
LABEL_48:
          if ( group_id != 133104622 || config_id != 622005 && config_id != 622019 && config_id != 622018 )
            goto LABEL_41;
          CityComp = (unsigned int)Player::getCityComp(player);
          PlayerCityComp::findCity((const PlayerCityComp *const)(v4 + 64), CityComp);
          if ( std::operator==<City>(0LL, (const std::shared_ptr<City> *)(v4 + 64))
            || (v17 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
                City::getLevel(v17) <= 9) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/gadget/chest_comp.cpp",
              "interactCheck",
              137);
            v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v27, (const char (*)[5])"uid:");
            val = Player::getUid(player);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
            v21 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v20,
                    (const char (*)[25])" chest is still locked!!");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v21, this->gadget_);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v3 = 804;
            v22 = 0;
          }
          else
          {
            v22 = 1;
          }
          std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v4 + 64));
          if ( v22 == 1 )
LABEL_41:
            v3 = 0;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 32));
    }
  }
  result = v3;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 146: range 000000001313D648-000000001313ED93
int32_t __cdecl ChestComp::interact(ChestComp *const this, Player *player, const EntityInteractParam *param)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  data::ItemLimitType GadgetItemLimitType; // eax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Scene *v15; // r15
  Vector3 *Position; // rax
  Gadget *v17; // rdx
  Entity *v18; // r15
  Player *v19; // rcx
  uint32_t v20; // esi
  common::milog::MiLogStream *v21; // rcx
  uint32_t v22; // r15d
  Player *v23; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  int v29; // r15d
  Player *v30; // rax
  PlayerSceneComp *v31; // rcx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rcx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  Player *v38; // rax
  PlayerItemComp *v39; // rax
  PlayerItemComp *ItemComp; // rax
  Scene *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  Player *v45; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  Scene *v47; // r14
  uint32_t GroupId; // eax
  Group *v49; // rcx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  Player *v54; // rax
  PlayerEventComp *EventComp; // r14
  PlayerSceneComp *SceneComp; // r14
  uint32_t v57; // eax
  Gadget *gadget; // r15
  _QWORD *baseclass_0; // rax
  unsigned __int64 v60; // rax
  void (__fastcall *v61)(Gadget *, VisionContext *); // r14
  int32_t result; // eax
  std::string v63; // [rsp+0h] [rbp-380h]
  Player *playera; // [rsp+20h] [rbp-360h]
  ChestComp *thisa; // [rsp+28h] [rbp-358h]
  unsigned int *v66; // [rsp+30h] [rbp-350h] BYREF
  unsigned int *v67; // [rsp+38h] [rbp-348h] BYREF
  unsigned int GadgetId; // [rsp+40h] [rbp-340h] BYREF
  unsigned int CityId; // [rsp+44h] [rbp-33Ch] BYREF
  unsigned int val; // [rsp+48h] [rbp-338h] BYREF
  GroupType group_type; // [rsp+4Ch] [rbp-334h]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+50h] [rbp-330h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+58h] [rbp-328h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+60h] [rbp-320h]
  std::shared_ptr<Player> *player_ptr; // [rsp+68h] [rbp-318h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *drop_id; // [rsp+70h] [rbp-310h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *drop_count; // [rsp+78h] [rbp-308h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+80h] [rbp-300h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+8Ch] [rbp-2F4h] BYREF
  VisionContext v80; // [rsp+94h] [rbp-2ECh] BYREF
  std::vector<std::shared_ptr<Player>>::value_type __x; // [rsp+A0h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v82; // [rsp+B0h] [rbp-2D0h] BYREF
  char v83[688]; // [rsp+D0h] [rbp-2B0h] BYREF

  thisa = this;
  playera = player;
  *(&v63._anon_0._M_allocated_capacity + 1) = (std::string::size_type)param;
  v4 = (unsigned __int64)v83;
  v63._M_string_length = (std::string::size_type)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "15 32 1 10 holder:158 48 4 28 deprecated_group_city_id:250 64 4 28 deprecated_group_area_id:251 "
                        "80 4 14 dungeon_id:257 96 8 17 output_result:191 128 16 13 scene_ptr:152 160 16 13 group_ptr:229"
                        " 192 16 20 owner_player_ptr:247 224 16 21 dungeon_scene_ptr:258 256 16 13 event_ptr:263 288 24 1"
                        "7 action_reason:160 352 24 14 player_vec:161 416 24 18 item_param_vec:190 480 40 14 drop_param:1"
                        "83 560 48 25 player_item_param_map:159";
  *(_QWORD *)(v4 + 16) = ChestComp::interact;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -234881024;
  v6[536862730] = -218959118;
  v6[536862731] = -234881024;
  v6[536862732] = -218959118;
  v6[536862733] = -234881024;
  v6[536862734] = -218959118;
  v6[536862736] = -218959360;
  v6[536862737] = 62194;
  v6[536862739] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_GadgetCompBase + 16);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( !(*(unsigned int (__fastcall **)(ChestComp *const, Player *, __int64))v7)(
          this,
          player,
          *(&v63._anon_0._M_allocated_capacity + 1)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v4 + 128));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/chest_comp.cpp",
        "interact",
        155);
      v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v82,
              (const char (*)[32])"getCurScene is nullptr, player:");
      operator<<(v11, player);
      common::milog::MiLogStream::~MiLogStream(&v82);
      v3 = -1;
LABEL_117:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
      goto LABEL_118;
    }
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v82, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x5DEu, v63);
    std::string::~string(&v82);
    std::map<std::shared_ptr<Player>,std::vector<ItemParam>>::map((std::map<std::shared_ptr<Player>,std::vector<ItemParam>> *const)(v4 + 560));
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GadgetItemLimitType = Gadget::getGadgetItemLimitType(this->gadget_);
    ActionReason::ActionReason((ActionReason *const)(v4 + 288), ACTION_REASON_OPEN_CHEST, GadgetItemLimitType);
    std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 352));
    v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( Scene::getSceneType(v14) == SCENE_DUNGEON )
    {
      v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Position = (Vector3 *)Entity::getPosition((const Entity *const)this->gadget_);
      if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) )
      {
        Position = (Vector3 *)__asan_report_load_n(Position, 12LL);
      }
      Scene::getDropSurroundPlayers((std::vector<std::shared_ptr<Player>> *)(v4 + 416), v15, *Position);
      std::vector<std::shared_ptr<Player>>::operator=(
        (std::vector<std::shared_ptr<Player>> *const)(v4 + 352),
        (std::vector<std::shared_ptr<Player>> *)(v4 + 416));
      std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 416));
    }
    else
    {
      toThisPtr<Player>((Player *)&__x);
      std::vector<std::shared_ptr<Player>>::push_back((std::vector<std::shared_ptr<Player>> *const)(v4 + 352), &__x);
      std::shared_ptr<Player>::~shared_ptr(&__x);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Entity::isBanLootByOneoff((Entity *const)this->gadget_) )
    {
LABEL_68:
      group_type = NORMAL_3;
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getGroup((const Entity *const)(v4 + 160));
      if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 160)) )
      {
        v46 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        group_type = Group::getGroupType(v46);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
      if ( gadget_script_config_ptr && group_type != PATTERN )
      {
        v47 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GroupId = Entity::getGroupId((const Entity *const)this->gadget_);
        Scene::tryAddExplorePointOnChestOpen(v47, playera, GroupId, gadget_script_config_ptr);
      }
      if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v4 + 160), 0LL) )
      {
        v49 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Group::onGroupGadgetDieEvent(v49, this->gadget_);
      }
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      Scene::getOwnPlayer((const Scene *const)(v4 + 192));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 192), 0LL) )
      {
        *(_DWORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 64) = 0;
        if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v4 + 160), 0LL) )
        {
          v50 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          *(_DWORD *)(v4 + 48) = Group::getCityId(v50);
          v51 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          *(_DWORD *)(v4 + 64) = Group::getAreaId(v51);
        }
        *(_DWORD *)(v4 + 80) = 0;
        std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 224));
        if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 224), 0LL) )
        {
          v52 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
          *(_DWORD *)(v4 + 80) = DungeonScene::getDungeonId(v52);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Gadget::getAreaId(this->gadget_);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        CityId = Gadget::getCityId(this->gadget_);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GadgetId = Gadget::getGadgetId(this->gadget_);
        v53 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        HIDWORD(v67) = Scene::getSceneId(v53);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        LODWORD(v67) = Entity::getGroupId((const Entity *const)this->gadget_);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        HIDWORD(v66) = Entity::getConfigId((const Entity *const)this->gadget_);
        common::tools::perf::make_shared<ChestOpenEvent,unsigned int,unsigned int,unsigned int,unsigned int &,unsigned int,unsigned int &,unsigned int &,unsigned int,unsigned int>(
          (unsigned int *)&__x,
          (unsigned int *)&v66 + 1,
          (unsigned int *)&v67,
          (unsigned int *)&v67 + 1,
          (unsigned int *)(v4 + 80),
          &GadgetId,
          (unsigned int *)(v4 + 48),
          (unsigned int *)(v4 + 64),
          &CityId,
          &val,
          (unsigned int *)v63._M_dataplus._M_p,
          (unsigned int *)v63._M_string_length,
          (unsigned int *)v63._anon_0._M_allocated_capacity,
          *((unsigned int **)&v63._anon_0._M_allocated_capacity + 1),
          (unsigned int *)playera,
          (unsigned int *)this,
          v66,
          v67);
        std::shared_ptr<BaseEvent>::shared_ptr<ChestOpenEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v4 + 256),
          (std::shared_ptr<ChestOpenEvent> *)&__x);
        std::shared_ptr<ChestOpenEvent>::~shared_ptr((std::shared_ptr<ChestOpenEvent> *const)&__x);
        if ( std::operator!=<BaseEvent>((const std::shared_ptr<BaseEvent> *)(v4 + 256), 0LL) )
        {
          v54 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          EventComp = Player::getEventComp(v54);
          std::shared_ptr<BaseEvent>::shared_ptr(
            (std::shared_ptr<BaseEvent> *const)&__x,
            (const std::shared_ptr<BaseEvent> *)(v4 + 256));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__x);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__x);
        }
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 256));
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 224));
      }
      SceneComp = Player::getSceneComp(playera);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v57 = Gadget::getGadgetId(thisa->gadget_);
      PlayerSceneComp::addChestOpenNum(SceneComp, v57);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Gadget::setEnableInteract(thisa->gadget_, 0, 0);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Gadget::setState(thisa->gadget_, 0x66u, 0, 1);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Creature::changeLifeState(thisa->gadget_, LIFE_DEAD, 0LL, 1);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      gadget = thisa->gadget_;
      baseclass_0 = gadget->baseclass_0;
      if ( *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) )
        baseclass_0 = (_QWORD *)__asan_report_load8();
      v60 = *baseclass_0 + 128LL;
      if ( *(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
        v60 = __asan_report_load8();
      v61 = *(void (__fastcall **)(Gadget *, VisionContext *))v60;
      VisionContext::VisionContext(&v80, VISION_DIE);
      v61(gadget, &v80);
      v3 = 0;
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 192));
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 160));
LABEL_116:
      std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 352));
      std::map<std::shared_ptr<Player>,std::vector<ItemParam>>::~map((std::map<std::shared_ptr<Player>,std::vector<ItemParam>> *const)(v4 + 560));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
      goto LABEL_117;
    }
    __for_range = (std::vector<std::shared_ptr<Player>> *)(v4 + 352);
    __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v4 + 352))._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v4 + 352))._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
              &__for_begin,
              &__for_end) )
        goto LABEL_68;
      player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
      if ( !std::operator==<Player>(player_ptr, 0LL) )
        break;
LABEL_67:
      __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
    }
    DropParam::DropParam((DropParam *const)(v4 + 480));
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->gadget_;
    if ( *(_BYTE *)(((unsigned __int64)&this->chest_drop_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->chest_drop_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    __in = Gadget::findDropIdCountByFallbackDropIdOrDropTag(v17, this->chest_drop_id_);
    drop_id = std::get<0ul,unsigned int,unsigned int>(&__in);
    drop_count = std::get<1ul,unsigned int,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = (Entity *)this->gadget_;
    v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    if ( *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v20 = *drop_count;
    if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( (unsigned int)Entity::buildDropParamForPlayer(v18, *drop_id, v20, v19, v4 + 480) )
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/chest_comp.cpp",
        "interact",
        187);
      v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v82,
              (const char (*)[30])"buildDropParamForPlayer fails");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v21, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v82);
      v3 = -1;
      goto LABEL_116;
    }
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 416));
    HIDWORD(v63._anon_0._M_allocated_capacity) = *(_DWORD *)(v4 + 484);
    v22 = *(_DWORD *)(v4 + 480);
    v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    *(OutputResult *)(v4 + 96) = DropUtils::dropAndSplitItems(
                                   v23,
                                   v22,
                                   HIDWORD(v63._anon_0._M_allocated_capacity),
                                   (const ActionReason *)(v4 + 288),
                                   (std::vector<ItemParam> *)(v4 + 416));
    if ( *(_DWORD *)(v4 + 96) )
    {
      LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v4 + 96));
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        LogLevel,
        "./src/gadget/chest_comp.cpp",
        "interact",
        194);
      v25 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v82,
              (const char (*)[33])"dropAndSplitItems fails, player:");
      v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
      v27 = operator<<(v25, v26);
      v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v27, (const char (*)[10])" gadget_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v28, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v82);
      v3 = *(_DWORD *)(v4 + 96);
      v29 = 0;
    }
    else
    {
      v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
      v31 = Player::getSceneComp(v30);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerSceneComp::tryRecordDailyGadgetDropCategoryCount(v31, this->gadget_);
      if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 416)) )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/gadget/chest_comp.cpp",
          "interact",
          205);
        v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v82, (const char (*)[10])"drop_id: ");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v4 + 480));
        v34 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                v33,
                (const char (*)[31])" item_param_vec empty, chest: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v35 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v34, this->gadget_);
        v36 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v35, (const char (*)[13])" owner uid: ");
        v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        val = Scene::getOwnerUid(v37);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
        common::milog::MiLogStream::~MiLogStream(&v82);
        v29 = 1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_pick_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_pick_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_auto_pick_);
        }
        if ( this->is_auto_pick_
          && (v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr),
              v39 = Player::getItemComp(v38),
              !PlayerItemComp::checkAddItemBatch(
                 v39,
                 (const std::vector<ItemParam> *)(v4 + 416),
                 (const ActionReason *)(v4 + 288))) )
        {
          ItemComp = Player::getItemComp(playera);
          PlayerItemComp::addItemBatch(
            ItemComp,
            (const std::vector<ItemParam> *)(v4 + 416),
            (const ActionReason *)(v4 + 288),
            0LL);
        }
        else
        {
          v42 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          if ( Scene::dropItems(
                 v42,
                 (const std::vector<ItemParam> *)(v4 + 416),
                 (const DropParam *)(v4 + 480),
                 (const ActionReason *)(v4 + 288)) )
          {
            common::milog::MiLogStream::create(
              &v82,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/chest_comp.cpp",
              "interact",
              219);
            v43 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v82,
                    (const char (*)[32])"scene dropItems fails , player:");
            v44 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
            operator<<(v43, v44);
            common::milog::MiLogStream::~MiLogStream(&v82);
            v3 = -1;
            v29 = 0;
            goto LABEL_66;
          }
        }
        v45 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
        ChestComp::logOpenChest(this, v45, (const std::vector<ItemParam> *)(v4 + 416));
        v29 = 2;
      }
    }
LABEL_66:
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 416));
    if ( !v29 )
      goto LABEL_116;
    goto LABEL_67;
  }
  common::milog::MiLogStream::create(
    &v82,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/gadget/chest_comp.cpp",
    "interact",
    149);
  v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
         &v82,
         (const char (*)[22])"interactCheck false. ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
  v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player;");
  operator<<(v10, player);
  common::milog::MiLogStream::~MiLogStream(&v82);
  v3 = -1;
LABEL_118:
  result = v3;
  if ( v63._M_string_length == v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 282: range 000000001313ED94-000000001313F1BA
void __cdecl ChestComp::logOpenChest(
        ChestComp *const this,
        Player *player,
        const std::vector<ItemParam> *item_param_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  uint32_t GadgetId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  Entity *gadget; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  proto_log::EntityLog *v12; // rax
  Gadget *v13; // r14
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+30h] [rbp-A0h]
  const GadgetScriptConfig *gadget_script_config; // [rsp+38h] [rbp-98h]
  const ItemParam *item_param; // [rsp+40h] [rbp-90h]
  proto_log::ItemLog *item_log; // [rsp+48h] [rbp-88h]
  std::shared_ptr<google::protobuf::Message> p_log_message_ptr; // [rsp+50h] [rbp-80h] BYREF
  char v22[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 22 open_chest_log_ptr:283";
  *(_QWORD *)(v3 + 16) = ChestComp::logOpenChest;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyOpenChest>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GadgetId = Gadget::getGadgetId(this->gadget_);
  proto_log::PlayerLogBodyOpenChest::set_gadget_id(v6, GadgetId);
  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    item_log = proto_log::PlayerLogBodyOpenChest::add_item_vec(v8);
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::ItemLog::set_item_id(item_log, item_param->item_id);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::ItemLog::set_count(item_log, item_param->count);
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_script_config = Gadget::getScriptConfig(this->gadget_);
  if ( gadget_script_config )
  {
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config->gadget_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_script_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config->gadget_state >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyOpenChest::set_state(v9, gadget_script_config->gadget_state);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget = (Entity *)this->gadget_;
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v12 = proto_log::PlayerLogBodyOpenChest::mutable_entity_log(v11);
  Entity::getEntityLog(gadget, v12);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = this->gadget_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyOpenChest,void>(
    &p_log_message_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyOpenChest> *)(v3 + 32));
  Gadget::logGadgetInteract(v13, player, &p_log_message_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_log_message_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyOpenChest>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyOpenChest> *const)(v3 + 32));
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

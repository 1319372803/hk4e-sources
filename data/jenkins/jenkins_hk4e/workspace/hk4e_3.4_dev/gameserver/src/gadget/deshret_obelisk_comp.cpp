// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/deshret_obelisk_comp.cpp

// Line 25: range 00000000131418B2-0000000013141B40
int32_t __cdecl DeshretObeliskComp::toClient(const DeshretObeliskComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  common::milog::MiLogStream *v2; // rcx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+20h] [rbp-50h]
  proto::DeshretObeliskGadgetInfo *deshret_obelisk_info; // [rsp+28h] [rbp-48h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-40h]
  const unsigned int *argument_id; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
  if ( !gadget_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/deshret_obelisk_comp.cpp",
      "toClient",
      29);
    v2 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v10,
           (const char (*)[60])"[DeshretObelisk] cannot find gadget script config, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_6:
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v2, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  if ( std::vector<unsigned int>::empty(&gadget_script_config_ptr->argument_vec) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/deshret_obelisk_comp.cpp",
      "toClient",
      34);
    v2 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v10,
           (const char (*)[49])"[DeshretObelisk] argument vec is empty, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_6;
  }
  deshret_obelisk_info = proto::SceneGadgetInfo::mutable_deshret_obelisk_gadget_info(gadget_info);
  __for_range = &gadget_script_config_ptr->argument_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&gadget_script_config_ptr->argument_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&gadget_script_config_ptr->argument_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    argument_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)argument_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)argument_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)argument_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::DeshretObeliskGadgetInfo::add_argument_list(deshret_obelisk_info, *argument_id);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 46: range 0000000013141B42-0000000013142107
int32_t __cdecl DeshretObeliskComp::interactCheck(
        DeshretObeliskComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  PlayerSceneComp *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  int32_t result; // eax
  common::milog::MiLogStream v25; // [rsp+20h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 11 group_id:53 48 4 12 config_id:54 64 16 12 scene_ptr:55";
  *(_QWORD *)(v3 + 16) = DeshretObeliskComp::interactCheck;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  SceneComp = Player::getSceneComp(player);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/deshret_obelisk_comp.cpp",
      "interactCheck",
      50);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v25,
           (const char (*)[46])"[DeshretObelisk] isInMyPlayerWorld is false. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v8 = 512;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 32) = Entity::getGroupId((const Entity *const)this->gadget_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Entity::getConfigId((const Entity *const)this->gadget_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v3 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/deshret_obelisk_comp.cpp",
        "interactCheck",
        58);
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v25,
             (const char (*)[49])"[DeshretObelisk] getCurScene is nullptr, player:");
      operator<<(v9, player);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v8 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Scene::getSceneType(v10) == SCENE_WORLD )
      {
        v18 = Player::getSceneComp(player);
        if ( PlayerSceneComp::isDuplicateDeshretObelisk(v18, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/deshret_obelisk_comp.cpp",
            "interactCheck",
            70);
          v19 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v25,
                  (const char (*)[62])"[DeshretObelisk] duplicate deshret obelisk gadget, group_id: ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v20,
                  (const char (*)[14])", config_id: ");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])", gadget:");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v23, this->gadget_);
          common::milog::MiLogStream::~MiLogStream(&v25);
          v8 = 832;
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/deshret_obelisk_comp.cpp",
          "interactCheck",
          63);
        v11 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                &v25,
                (const char (*)[73])"[DeshretObelisk] DeshretObelisk can only be used in SCENE_WORLD, player:");
        v12 = operator<<(v11, player);
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"group_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", config_id: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])", gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v17, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v25);
        v8 = -1;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  result = v8;
  if ( v26 == (char *)v3 )
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

// Line 78: range 0000000013142108-000000001314283A
int32_t __cdecl DeshretObeliskComp::interact(
        DeshretObeliskComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDeshretObeliskInteract,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDeshretObeliskInteract,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int32_t result; // eax
  std::string v23; // [rsp+0h] [rbp-160h]
  Player *const playera; // [rsp+10h] [rbp-150h]
  int32_t ret; // [rsp+24h] [rbp-13Ch]
  PlayerSceneComp *scene_comp; // [rsp+28h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-110h] BYREF
  char v30[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v23._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v23._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v23._M_string_length = (std::string::size_type)param;
  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 10 holder:103 48 4 11 group_id:85 64 4 12 config_id:86 80 16 11 log_ptr:104 112 48 31 des"
                        "hret_obelisk_chest_notify:87";
  *(_QWORD *)(v3 + 16) = DeshretObeliskComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_GadgetCompBase + 16);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  ret = (*(__int64 (__fastcall **)(DeshretObeliskComp *const, Player *, std::string::size_type))v6)(
          this,
          player,
          v23._M_string_length);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/deshret_obelisk_comp.cpp",
      "interact",
      82);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v29,
           (const char (*)[49])"[DeshretObelisk] interactCheck failed. gadget_: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    operator<<(v9, player);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v10 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Entity::getGroupId((const Entity *const)this->gadget_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 64) = Entity::getConfigId((const Entity *const)this->gadget_);
    proto::DeshretObeliskChestInfoNotify::DeshretObeliskChestInfoNotify((proto::DeshretObeliskChestInfoNotify *const)(v3 + 112));
    scene_comp = Player::getSceneComp(player);
    PlayerSceneComp::fillDeshretObeliskChestInfoNotify(
      scene_comp,
      (proto::DeshretObeliskChestInfoNotify *)(v3 + 112),
      *(_DWORD *)(v3 + 48),
      *(_DWORD *)(v3 + 64));
    if ( proto::DeshretObeliskChestInfoNotify::chest_info_list_size((const proto::DeshretObeliskChestInfoNotify *const)(v3 + 112)) > 0 )
    {
      if ( PlayerSceneComp::trySetCurDeshretObelisk(scene_comp, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/deshret_obelisk_comp.cpp",
          "interact",
          98);
        v14 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v29,
                (const char (*)[60])"[DeshretObelisk] trySetCurDeshretObelisk failed, group_id: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", config_id: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])", gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v18, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v10 = 832;
      }
      else
      {
        PlayerSceneComp::broadcastDeshretObeliskChestInfoNotify(
          scene_comp,
          (const proto::DeshretObeliskChestInfoNotify *)(v3 + 112));
        BasicComp = Player::getBasicComp(player);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v29, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xE83u, v23);
        std::string::~string(&v29);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyDeshretObeliskInteract>();
        v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyDeshretObeliskInteract,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDeshretObeliskInteract,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        proto_log::PlayerLogBodyDeshretObeliskInteract::set_group_id(v20, *(_DWORD *)(v3 + 48));
        v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyDeshretObeliskInteract,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDeshretObeliskInteract,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        proto_log::PlayerLogBodyDeshretObeliskInteract::set_config_id(v21, *(_DWORD *)(v3 + 64));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDeshretObeliskInteract,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyDeshretObeliskInteract> *)(v3 + 80));
        Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        v10 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyDeshretObeliskInteract>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDeshretObeliskInteract> *const)(v3 + 80));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/deshret_obelisk_comp.cpp",
        "interact",
        92);
      v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v29,
              (const char (*)[52])"[DeshretObelisk] no available chest info, gadget_: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, this->gadget_);
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
      operator<<(v13, player);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v10 = 833;
    }
    proto::DeshretObeliskChestInfoNotify::~DeshretObeliskChestInfoNotify((proto::DeshretObeliskChestInfoNotify *const)(v3 + 112));
  }
  result = v10;
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

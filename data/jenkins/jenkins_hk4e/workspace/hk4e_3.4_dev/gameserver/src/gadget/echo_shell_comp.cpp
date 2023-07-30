// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/echo_shell_comp.cpp

// Line 26: range 000000001314283C-0000000013142910
void __cdecl EchoShellComp::EchoShellComp(EchoShellComp *const this, Gadget *gadget, const EchoShellParam *param)
{
  int (**v3)(...); // rdx
  uint32_t voice_id; // ecx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'EchoShellComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  voice_id = param->voice_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->voice_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->voice_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->voice_id_);
  }
  this->voice_id_ = voice_id;
};

// Line 31: range 0000000013142912-0000000013142980
int32_t __cdecl EchoShellComp::toClient(const EchoShellComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  proto::EchoShellInfo *shell_info; // [rsp+18h] [rbp-8h]

  shell_info = proto::SceneGadgetInfo::mutable_shell_info(gadget_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->voice_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->voice_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::EchoShellInfo::set_shell_id(shell_info, this->voice_id_);
  return 0;
};

// Line 38: range 0000000013142982-0000000013142D58
int32_t __cdecl EchoShellComp::interactCheck(
        EchoShellComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  bool v14; // r14
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int v17; // [rsp+28h] [rbp-A8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<EchoShellActivity> __a; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-90h] BYREF
  char v21[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:39";
  *(_QWORD *)(v3 + 16) = EchoShellComp::interactCheck;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/echo_shell_comp.cpp",
      "interactCheck",
      42);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v20,
           (const char (*)[25])"scene_ptr is null, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    OwnerUid = Scene::getOwnerUid(v8);
    if ( OwnerUid == Player::getUid(player) )
    {
      Player::getActivityComp(player);
      PlayerActivityComp::findOpenningActivity<EchoShellActivity>((PlayerActivityComp *const)&__a);
      v14 = std::operator==<EchoShellActivity>(0LL, &__a);
      std::shared_ptr<EchoShellActivity>::~shared_ptr(&__a);
      if ( v14 )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/echo_shell_comp.cpp",
          "interactCheck",
          52);
        v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v20,
                (const char (*)[43])"[EchoShell] activity is not opening, uid: ");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v20);
        v7 = 860;
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/echo_shell_comp.cpp",
        "interactCheck",
        47);
      v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v20,
              (const char (*)[38])"player is not scene owner, owner_uid:");
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v17 = Scene::getOwnerUid(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v17);
      v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = -1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v21 == (char *)v3 )
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

// Line 59: range 0000000013142D5A-0000000013143A8B
int32_t __cdecl EchoShellComp::interact(EchoShellComp *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  ActivityEchoShellExcelConfigMgr *p_activity_echo_shell_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  EchoShellActivity *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  Group *v12; // rcx
  Gadget *gadget; // r15
  _QWORD *baseclass_0; // rax
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(Gadget *, VisionContext *); // r14
  uint32_t v17; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t *v19; // rax
  uint32_t v20; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  int32_t *v22; // rax
  uint32_t v23; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  uint32_t *v25; // rax
  Group *v26; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  uint32_t *p_source_entity_id; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  int32_t *p_param1; // rax
  data::EchoShellType echo_shell_type; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::vector<unsigned int>::const_reference v35; // rdx
  int32_t v36; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rdx
  int32_t *p_param3; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rdx
  uint32_t *p_uid; // rax
  Group *v42; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-110h] BYREF
  const data::EchoShellExcelConfig *echo_shell_config_ptr; // [rsp+28h] [rbp-108h]
  VisionContext v47; // [rsp+34h] [rbp-FCh] BYREF
  common::milog::MiLogStream v48; // [rsp+40h] [rbp-F0h] BYREF
  char v49[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 12 scene_ptr:60 64 16 12 group_ptr:66 96 16 15 activity_ptr:79 128 16 11 evt_ptr:115";
  *(_QWORD *)(v3 + 16) = EchoShellComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/echo_shell_comp.cpp",
      "interact",
      63);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v48, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v48);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getGroup((const Entity *const)(v3 + 64));
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/echo_shell_comp.cpp",
        "interact",
        69);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v48, (const char (*)[16])"getGroup failed");
      common::milog::MiLogStream::~MiLogStream(&v48);
      v6 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 128));
      p_activity_echo_shell_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128))->design_config.txt_config_mgr.activity_echo_shell_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->voice_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->voice_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      echo_shell_config_ptr = data::ActivityEchoShellExcelConfigMgrBase::findEchoShellExcelConfig(
                                p_activity_echo_shell_config_mgr,
                                this->voice_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
      if ( echo_shell_config_ptr )
      {
        Player::getActivityComp(player);
        PlayerActivityComp::findOpenningActivity<EchoShellActivity>((PlayerActivityComp *const)(v3 + 96));
        if ( std::operator==<EchoShellActivity>((const std::shared_ptr<EchoShellActivity> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/echo_shell_comp.cpp",
            "interact",
            82);
          v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                 &v48,
                 (const char (*)[43])"[EchoShell] activity is not opening, uid: ");
          val = Player::getUid(player);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v48);
          v6 = 860;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&echo_shell_config_ptr->echo_shell_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)echo_shell_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&echo_shell_config_ptr->echo_shell_type >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( echo_shell_config_ptr->echo_shell_type == ECHO_SHELL_TYPE_NORMAL_INTERACT )
            goto LABEL_25;
          v10 = std::__shared_ptr_access<EchoShellActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EchoShellActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&this->voice_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->voice_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( !EchoShellActivity::addVoice(v10, this->voice_id_) )
          {
LABEL_25:
            if ( *(_BYTE *)(((unsigned __int64)&echo_shell_config_ptr->echo_shell_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)echo_shell_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&echo_shell_config_ptr->echo_shell_type >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( echo_shell_config_ptr->echo_shell_type )
            {
              EventUtil::createEvent((data::EventType)(v3 + 128));
              if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 128), 0LL) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
                v28 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                p_source_entity_id = &v28->source_entity_id;
                if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                       + 0x7FFF8000) )
                {
                  __asan_report_store4(p_source_entity_id);
                }
                v28->source_entity_id = EntityId;
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
                v31 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                p_param1 = &v31->param1;
                if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(p_param1);
                }
                v31->param1 = ConfigId;
                if ( *(_BYTE *)(((unsigned __int64)&echo_shell_config_ptr->echo_shell_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)echo_shell_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&echo_shell_config_ptr->echo_shell_type >> 3)
                                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                echo_shell_type = echo_shell_config_ptr->echo_shell_type;
                v34 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v34->param2 >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v34->param2 >> 3) + 0x7FFF8000) <= 3 )
                {
                  v34 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v34->param2);
                }
                v34->param2 = echo_shell_type;
                if ( !std::vector<unsigned int>::empty(&echo_shell_config_ptr->reminder_list) )
                {
                  v35 = std::vector<unsigned int>::operator[](&echo_shell_config_ptr->reminder_list, 0LL);
                  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v36 = *v35;
                  v37 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  p_param3 = &v37->param3;
                  if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_param3);
                  }
                  v37->param3 = v36;
                }
                Uid = Player::getUid(player);
                v40 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                p_uid = &v40->uid;
                if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(p_uid);
                }
                v40->uid = Uid;
                v42 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                Group::handleEvent(v42, (EventPtr *)(v3 + 128));
              }
              std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 128));
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Creature::changeLifeState(this->gadget_, LIFE_DEAD, 0LL, 1);
              v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Group::onGroupGadgetDieEvent(v12, this->gadget_);
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              gadget = this->gadget_;
              baseclass_0 = gadget->baseclass_0;
              if ( *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) )
                baseclass_0 = (_QWORD *)__asan_report_load8();
              v15 = *baseclass_0 + 128LL;
              if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
                v15 = __asan_report_load8();
              v16 = *(void (__fastcall **)(Gadget *, VisionContext *))v15;
              VisionContext::VisionContext(&v47, VISION_DIE);
              v16(gadget, &v47);
              EventUtil::createEvent((data::EventType)(v3 + 128));
              if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 128), 0LL) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v17 = Entity::getEntityId((const Entity *const)this->gadget_);
                v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                v19 = &v18->source_entity_id;
                if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(v19);
                }
                v18->source_entity_id = v17;
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v20 = Entity::getConfigId((const Entity *const)this->gadget_);
                v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                v22 = &v21->param1;
                if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(v22);
                }
                v21->param1 = v20;
                v23 = Player::getUid(player);
                v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                v25 = &v24->uid;
                if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(v25);
                }
                v24->uid = v23;
                v26 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                Group::handleEvent(v26, (EventPtr *)(v3 + 128));
              }
              std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 128));
            }
            v6 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/echo_shell_comp.cpp",
              "interact",
              92);
            v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v48,
                    (const char (*)[27])"addVoice failed, voice_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->voice_id_);
            common::milog::MiLogStream::~MiLogStream(&v48);
            v6 = -1;
          }
        }
        std::shared_ptr<EchoShellActivity>::~shared_ptr((std::shared_ptr<EchoShellActivity> *const)(v3 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/echo_shell_comp.cpp",
          "interact",
          76);
        v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v48,
               (const char (*)[43])"findEchoShellExcelConfig failed, voice_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->voice_id_);
        common::milog::MiLogStream::~MiLogStream(&v48);
        v6 = -1;
      }
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v6;
  if ( v49 == (char *)v3 )
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
  return result;
};

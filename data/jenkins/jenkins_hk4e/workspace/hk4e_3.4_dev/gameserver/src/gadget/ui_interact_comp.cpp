// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/ui_interact_comp.cpp

// Line 25: range 0000000015CC3110-0000000015CC33ED
int32_t __cdecl UIInteractComp::interactCheck(
        UIInteractComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  UIInteractExcelConfigMgr *p_ui_interact_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  unsigned int val; // [rsp+20h] [rbp-50h] BYREF
  int32_t ret; // [rsp+24h] [rbp-4Ch]
  const data::UIInteractExcelConfig *ui_interact_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  p_ui_interact_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.ui_interact_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&param->ui_interact_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->ui_interact_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ui_interact_config_ptr = data::UIInteractExcelConfigMgrBase::findUIInteractExcelConfig(
                             p_ui_interact_config_mgr,
                             param->ui_interact_id);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( ui_interact_config_ptr )
  {
    ret = 0;
    if ( *(_BYTE *)(((unsigned __int64)&ui_interact_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)ui_interact_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ui_interact_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( ui_interact_config_ptr->type )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/ui_interact_comp.cpp",
        "interactCheck",
        38);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v16,
             (const char (*)[26])"invalid ui_interact type ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      return -1;
    }
    return ret;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/ui_interact_comp.cpp",
      "interactCheck",
      29);
    v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v16,
           (const char (*)[28])"find UIInteractConfig fail ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
    v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v5, (const char (*)[7])" uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
};

// Line 46: range 0000000015CC33EE-0000000015CC3AA4
int32_t __cdecl UIInteractComp::interact(UIInteractComp *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  uint32_t *p_source_entity_id; // rax
  uint32_t ui_interact_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  int32_t *p_param1; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  uint32_t *p_uid; // rax
  Group *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 group_ptr:52 64 16 12 event_ptr:58";
  *(_QWORD *)(v3 + 16) = UIInteractComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_GadgetCompBase + 16);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(UIInteractComp *const, Player *, const EntityInteractParam *))v6)(
         this,
         player,
         param) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/ui_interact_comp.cpp",
      "interact",
      49);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v33,
           (const char (*)[22])"interactCheck false. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" player: ");
    operator<<(v9, player);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v10 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getGroup((const Entity *const)(v3 + 32));
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/ui_interact_comp.cpp",
        "interact",
        55);
      v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              &v33,
              (const char (*)[17])"group not fount ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, this->gadget_);
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" player: ");
      operator<<(v13, player);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v10 = -1;
    }
    else
    {
      EventUtil::createEvent((data::EventType)(v3 + 64));
      if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 64)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
        v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_source_entity_id = &v15->source_entity_id;
        if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(p_source_entity_id);
        }
        v15->source_entity_id = EntityId;
        if ( *(_BYTE *)(((unsigned __int64)&param->ui_interact_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->ui_interact_id >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ui_interact_id = param->ui_interact_id;
        v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_param1 = &v18->param1;
        if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param1);
        }
        v18->param1 = ui_interact_id;
        Uid = Player::getUid(player);
        v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_uid = &v21->uid;
        if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_uid);
        }
        v21->uid = Uid;
      }
      v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Group::handleEvent(v23, (EventPtr *)(v3 + 64));
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/ui_interact_comp.cpp",
        "interact",
        66);
      v24 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v33,
              (const char (*)[29])"send event, ui_interact_id: ");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &param->ui_interact_id);
      v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" gourp: ");
      v27 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = Group::getGroupId(v27);
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" gadget: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v29, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v10 = 0;
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 64));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 32));
  }
  result = v10;
  if ( v34 == (char *)v3 )
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gather_comp.cpp

// Line 36: range 000000001755207C-000000001755215A
void __cdecl GatherComp::GatherComp(GatherComp *const this, Gadget *gadget, uint32_t gather_id)
{
  int (**v3)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'GatherComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gather_id_);
  }
  this->gather_id_ = gather_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_id_);
  }
  this->item_id_ = 0;
};

// Line 41: range 000000001755215C-00000000175522D7
int32_t __cdecl GatherComp::initByConfig(GatherComp *const this, const GadgetParam *gadget_param)
{
  uint32_t item_id; // ecx
  Gadget *Gadget; // rax
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  gather_config_ptr = GatherComp::getGatherConfig(this);
  if ( gather_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gather_config_ptr->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    item_id = gather_config_ptr->item_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->item_id_);
    }
    this->item_id_ = item_id;
    if ( *(char *)(((unsigned __int64)&gather_config_ptr->init_disable_interact >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&gather_config_ptr->init_disable_interact);
    if ( gather_config_ptr->init_disable_interact )
    {
      Gadget = GadgetCompBase::getGadget(this);
      Gadget::initEnableInteract(Gadget, 0);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gather_comp.cpp",
      "initByConfig",
      45);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v6, (const char (*)[22])"getGatherConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 58: range 00000000175522D8-000000001755241C
const data::GatherExcelConfig *__cdecl GatherComp::getGatherConfig(const GatherComp *const this)
{
  GatherExcelConfigMgr *p_gather_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_gather_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.gather_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gather_config_ptr = data::GatherExcelConfigMgrBase::findGatherExcelConfig(p_gather_config_mgr, this->gather_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( gather_config_ptr )
    return gather_config_ptr;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/gadget/gather_comp.cpp",
    "getGatherConfig",
    62);
  v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v6,
         (const char (*)[40])"findGatherExcelConfig fails, gather_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->gather_id_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0LL;
};

// Line 69: range 000000001755241E-00000000175525D3
int32_t __cdecl GatherComp::toClient(const GatherComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  proto::GadgetBornType born_type; // [rsp+1Ch] [rbp-44h]
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+20h] [rbp-40h]
  proto::GatherGadgetInfo *gather_gadget_info_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  born_type = GADGET_BORN_NONE;
  gather_config_ptr = GatherComp::getGatherConfig(this);
  if ( gather_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->point_location >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gather_config_ptr->point_location >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( gather_config_ptr->point_location == POINT_AIR )
      born_type = GADGET_BORN_IN_AIR;
    proto::SceneGadgetInfo::set_born_type(gadget_info, born_type);
    gather_gadget_info_ptr = proto::SceneGadgetInfo::mutable_gather_gadget(gadget_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GatherGadgetInfo::set_item_id(gather_gadget_info_ptr, this->item_id_);
    if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_forbid_guest >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)gather_config_ptr + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_forbid_guest >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load1(&gather_config_ptr->is_forbid_guest);
    }
    proto::GatherGadgetInfo::set_is_forbid_guest(gather_gadget_info_ptr, gather_config_ptr->is_forbid_guest);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gather_comp.cpp",
      "toClient",
      75);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v6,
      (const char (*)[28])"findGatherExcelConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 92: range 00000000175525D4-000000001755277B
int32_t __cdecl GatherComp::interactCheck(GatherComp *const this, Player *player, const EntityInteractParam *param)
{
  common::milog::MiLogStream *v3; // rax
  PlayerMpComp *MpComp; // rax
  PlayerSceneComp *SceneComp; // rax
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  gather_config_ptr = GatherComp::getGatherConfig(this);
  if ( gather_config_ptr )
  {
    if ( *(char *)(((unsigned __int64)&gather_config_ptr->is_forbid_mp_mode >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&gather_config_ptr->is_forbid_mp_mode);
    if ( gather_config_ptr->is_forbid_mp_mode && (MpComp = Player::getMpComp(player), PlayerMpComp::isInMpMode(MpComp)) )
    {
      return -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_forbid_guest >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)gather_config_ptr + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_forbid_guest >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load1(&gather_config_ptr->is_forbid_guest);
      }
      if ( gather_config_ptr->is_forbid_guest
        && (SceneComp = Player::getSceneComp(player), !PlayerSceneComp::isInMyPlayerWorld(SceneComp)) )
      {
        return -1;
      }
      else
      {
        return 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gather_comp.cpp",
      "interactCheck",
      96);
    v3 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v10,
           (const char (*)[33])"getGatherConfig fail, gather_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gather_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 114: range 000000001755277C-00000000175542B7
int32_t __cdecl GatherComp::interact(GatherComp *const this, Player *player, const EntityInteractParam *param)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  char v10; // r15
  FeatureSwitchMgr *p_feature_switch_mgr; // rcx
  GatherExcelConfigMgr *p_gather_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  GatherExcelConfigMgr *v14; // r15
  uint32_t State; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  unsigned int *v19; // rdx
  _BOOL4 v20; // r15d
  unsigned int *v21; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v23; // rdx
  int v24; // r15d
  PlayerItemComp *v25; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v27; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  PlayerItemComp *v32; // rax
  PlayerItemComp *v33; // r15
  Gadget *Gadget; // rax
  const Vector3 *Position; // rax
  Gadget *v36; // rax
  uint32_t GadgetId; // edi
  Player *v38; // rdx
  common::milog::MiLogStream *v39; // rcx
  Scene *p_exp; // rdi
  uint32_t exp; // ecx
  Gadget *v42; // rax
  Gadget *v43; // rax
  Gadget *v44; // rax
  unsigned int *v45; // r9
  PlayerEventComp *EventComp; // r14
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t gather_id; // ecx
  Gadget *v49; // rax
  unsigned int *p_point_type; // r14
  Gadget *v51; // rax
  const unsigned int *v52; // r8
  unsigned int *v53; // r9
  Player *v54; // rax
  PlayerEventComp *v55; // r14
  Group *v56; // r14
  Gadget *v57; // rax
  Gadget *v58; // rax
  uint32_t v59; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rdx
  uint32_t *p_source_entity_id; // rax
  Gadget *v62; // rax
  unsigned int v63; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  Gadget *v65; // rax
  uint32_t v66; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rdx
  int32_t *p_param1; // rax
  uint32_t v69; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  uint32_t v71; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rdx
  int32_t *p_param3; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rdx
  uint32_t *p_uid; // rax
  Gadget *v77; // rax
  Gadget *v78; // r14
  unsigned __int64 v79; // rax
  void (__fastcall *v80)(Gadget *, VisionContext *); // r15
  Group *v81; // rax
  int32_t result; // eax
  std::string v83; // [rsp+0h] [rbp-2B0h]
  unsigned int *v84; // [rsp+0h] [rbp-2B0h]
  unsigned int *v85; // [rsp+8h] [rbp-2A8h]
  char v86; // [rsp+17h] [rbp-299h]
  unsigned int EntityId; // [rsp+30h] [rbp-280h] BYREF
  unsigned int ConfigId; // [rsp+34h] [rbp-27Ch] BYREF
  unsigned int val; // [rsp+38h] [rbp-278h] BYREF
  unsigned int item_id_0; // [rsp+3Ch] [rbp-274h]
  unsigned int item_id; // [rsp+40h] [rbp-270h]
  int32_t ret; // [rsp+44h] [rbp-26Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-268h] BYREF
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+50h] [rbp-260h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-258h]
  const data::MultiStateGatherExcelConfig *multi_state_config_ptr; // [rsp+60h] [rbp-250h]
  const data::MultiStateGatherConfig *config_ptr; // [rsp+68h] [rbp-248h]
  const std::vector<unsigned int> *__for_range; // [rsp+70h] [rbp-240h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+78h] [rbp-238h]
  VisionContext v101; // [rsp+84h] [rbp-22Ch] BYREF
  std::shared_ptr<GatherEvent> __r; // [rsp+90h] [rbp-220h] BYREF
  std::string v103; // [rsp+A0h] [rbp-210h] BYREF
  char v104[496]; // [rsp+C0h] [rbp-1F0h] BYREF

  *(&v83._anon_0._M_allocated_capacity + 1) = (std::string::size_type)param;
  v4 = (unsigned __int64)v104;
  v83._M_string_length = (std::string::size_type)v104;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 48 1 10 holder:115 64 8 17 output_result:183 96 16 13 scene_ptr:117 128 16 13 group_ptr:131 1"
                        "60 16 14 gather_ptr:211 192 16 13 event_ptr:213 224 16 20 owner_player_ptr:217 256 16 11 evt_ptr"
                        ":231 288 16 9 param:154 320 24 18 item_param_vec:135 384 24 17 action_reason:176";
  *(_QWORD *)(v4 + 16) = GatherComp::interact;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -218103808;
  v6[536862733] = -202116109;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v103, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x5DDu, v83);
  std::string::~string(&v103);
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v4 + 96));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v103,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gather_comp.cpp",
      "interact",
      120);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&v103,
      (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v103);
    v3 = -1;
    goto LABEL_110;
  }
  gather_config_ptr = GatherComp::getGatherConfig(this);
  if ( !gather_config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v103,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gather_comp.cpp",
      "interact",
      126);
    v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
           (common::milog::MiLogStream *const)&v103,
           (const char (*)[17])"getGatherConfig ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gather_id_);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v103);
    v3 = -1;
    goto LABEL_110;
  }
  GadgetCompBase::getGadget(this);
  Entity::getGroup((const Entity *const)(v4 + 128));
  v10 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Entity::isBanLootByOneoff((Entity *const)this->gadget_) )
    goto LABEL_15;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 288));
  v10 = 1;
  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288))->feature_switch_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !FeatureSwitchMgr::isGatherIdClosed(p_feature_switch_mgr, this->gather_id_) )
    v86 = 1;
  else
LABEL_15:
    v86 = 0;
  if ( v10 )
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 288));
  if ( !v86 )
    goto LABEL_67;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 320));
  if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_multi_state >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)gather_config_ptr + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_multi_state >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load1(&gather_config_ptr->is_multi_state);
  }
  if ( gather_config_ptr->is_multi_state )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 288));
    p_gather_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288))->design_config.txt_config_mgr.gather_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    multi_state_config_ptr = data::GatherExcelConfigMgrBase::findMultiStateGatherExcelConfig(
                               p_gather_config_mgr,
                               this->gather_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 288));
    if ( !multi_state_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v103,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gadget/gather_comp.cpp",
        "interact",
        142);
      v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              (common::milog::MiLogStream *const)&v103,
              (const char (*)[48])"multistate gather config not found, gather_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->gather_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v103);
      v3 = -1;
LABEL_42:
      v20 = 0;
      goto LABEL_66;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 288));
    v14 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288))->design_config.txt_config_mgr.gather_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    State = Gadget::getState(this->gadget_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    config_ptr = GatherExcelConfigMgr::findMultiStateGatherConfigByGadgetState(v14, this->gather_id_, State);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 288));
    if ( !config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v103,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gather_comp.cpp",
        "interact",
        149);
      v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              (common::milog::MiLogStream *const)&v103,
              (const char (*)[54])"multistate gather config state not found, gather_id: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gather_id_);
      v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])", gadget_state: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Gadget::getState(this->gadget_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v103);
      v3 = -1;
      goto LABEL_42;
    }
    __for_range = &config_ptr->extra_item_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->extra_item_id_vec)._M_current;
    *(std::vector<unsigned int>::const_iterator *)(v4 + 64) = std::vector<unsigned int>::end(&config_ptr->extra_item_id_vec);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 64)) )
    {
      v19 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      item_id = *v19;
      *(_QWORD *)(v4 + 288) = 0LL;
      *(_QWORD *)(v4 + 296) = 0LL;
      *(_DWORD *)(v4 + 292) = 1;
      *(_DWORD *)(v4 + 288) = item_id;
      std::vector<ItemParam>::emplace_back<ItemParam&>(
        (std::vector<ItemParam> *const)(v4 + 320),
        (ItemParam *)(v4 + 288),
        (ItemParam *)(v4 + 288));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    *(_DWORD *)(v4 + 288) = 0;
    *(_DWORD *)(v4 + 292) = 0;
    *(_DWORD *)(v4 + 296) = 0;
    *(_DWORD *)(v4 + 300) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->item_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->item_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 288) = config_ptr->item_id;
    *(_DWORD *)(v4 + 292) = 1;
    std::vector<ItemParam>::emplace_back<ItemParam&>(
      (std::vector<ItemParam> *const)(v4 + 320),
      (ItemParam *)(v4 + 288),
      (ItemParam *)(v4 + 288));
  }
  else
  {
    __for_range_0 = &gather_config_ptr->extra_item_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&gather_config_ptr->extra_item_id_vec)._M_current;
    *(std::vector<unsigned int>::const_iterator *)(v4 + 64) = std::vector<unsigned int>::end(&gather_config_ptr->extra_item_id_vec);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 64)) )
    {
      v21 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      item_id_0 = *v21;
      *(_QWORD *)(v4 + 288) = 0LL;
      *(_QWORD *)(v4 + 296) = 0LL;
      *(_DWORD *)(v4 + 292) = 1;
      *(_DWORD *)(v4 + 288) = item_id_0;
      std::vector<ItemParam>::emplace_back<ItemParam&>(
        (std::vector<ItemParam> *const)(v4 + 320),
        (ItemParam *)(v4 + 288),
        (ItemParam *)(v4 + 288));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    *(_DWORD *)(v4 + 288) = 0;
    *(_DWORD *)(v4 + 292) = 0;
    *(_DWORD *)(v4 + 296) = 0;
    *(_DWORD *)(v4 + 300) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 288) = this->item_id_;
    *(_DWORD *)(v4 + 292) = 1;
    std::vector<ItemParam>::emplace_back<ItemParam&>(
      (std::vector<ItemParam> *const)(v4 + 320),
      (ItemParam *)(v4 + 288),
      (ItemParam *)(v4 + 288));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::findSceneOwnPlayer((const Entity *const)(v4 + 288));
  ActionReason::ActionReason((ActionReason *const)(v4 + 384), ACTION_REASON_GATHER, ITEM_LIMIT_GATHER);
  ItemComp = Player::getItemComp(player);
  ret = PlayerItemComp::checkAddItemBatch(
          ItemComp,
          (const std::vector<ItemParam> *)(v4 + 320),
          (const ActionReason *)(v4 + 384));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v103,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gather_comp.cpp",
      "interact",
      180);
    v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
            (common::milog::MiLogStream *const)&v103,
            (const char (*)[17])"canAddItem fails");
    operator<<(v23, player);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v103);
    v3 = ret;
    v24 = 0;
  }
  else
  {
    v25 = Player::getItemComp(player);
    *(OutputResult *)(v4 + 64) = PlayerItemComp::checkAndRecordItemLimitOutputCount(
                                   v25,
                                   OUTPUT_CONTROL_OTHER,
                                   (const ActionReason *)(v4 + 384));
    if ( *(_DWORD *)(v4 + 64) )
    {
      LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v4 + 64));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v103,
        &common::milog::MiLogDefault::default_log_obj_,
        LogLevel,
        "./src/gadget/gather_comp.cpp",
        "interact",
        186);
      v27 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              (common::milog::MiLogStream *const)&v103,
              (const char (*)[49])"checkAndRecordItemLimitOutputCount fail, gadget:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v28 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v27, this->gadget_);
      v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" item_id:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->item_id_);
      v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" player:");
      operator<<(v31, player);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v103);
      v3 = *(_DWORD *)(v4 + 64);
      v24 = 0;
    }
    else
    {
      v32 = Player::getItemComp(player);
      PlayerItemComp::addItemBatch(
        v32,
        (const std::vector<ItemParam> *)(v4 + 320),
        (const ActionReason *)(v4 + 384),
        0LL);
      v33 = Player::getItemComp(player);
      Gadget = GadgetCompBase::getGadget(this);
      Position = Entity::getPosition((const Entity *const)Gadget);
      PlayerItemComp::notifyDropHint(v33, (const std::vector<ItemParam> *)(v4 + 320), Position);
      v36 = GadgetCompBase::getGadget(this);
      GadgetId = Gadget::getGadgetId(v36);
      GatherComp::logCollectGather(this, player, GadgetId, (const std::vector<ItemParam> *)(v4 + 320));
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 288)) )
      {
        v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
        GatherComp::activityDropOnGather(this, player, v38);
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v103,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gather_comp.cpp",
          "interact",
          200);
        v39 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                (common::milog::MiLogStream *const)&v103,
                (const char (*)[27])"getOwnPlayer fail. gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v39, this->gadget_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v103);
      }
      GatherComp::widgetDropOnGather(this, player);
      v24 = 1;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 288));
  v20 = v24 == 1;
LABEL_66:
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 320));
  if ( v20 )
  {
LABEL_67:
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
    if ( gadget_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->explore_config.exp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_script_config_ptr - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->explore_config.exp >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( gadget_script_config_ptr->explore_config.exp )
      {
        p_exp = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->explore_config.exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_script_config_ptr - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->explore_config.exp >> 3)
                                                                                  + 0x7FFF8000) )
        {
          p_exp = (Scene *)&gadget_script_config_ptr->explore_config.exp;
          __asan_report_load4();
        }
        exp = gadget_script_config_ptr->explore_config.exp;
        if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->area_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->area_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_exp = (Scene *)&gadget_script_config_ptr->area_id;
          __asan_report_load4();
        }
        Scene::onGather(p_exp, player, gadget_script_config_ptr->area_id, exp);
      }
    }
    GadgetCompBase::getGadget(this);
    toThisPtr<Gadget>((Gadget *)(v4 + 160));
    v42 = GadgetCompBase::getGadget(this);
    val = Gadget::getGadgetId(v42);
    v43 = GadgetCompBase::getGadget(this);
    ConfigId = Entity::getConfigId((const Entity *const)v43);
    v44 = GadgetCompBase::getGadget(this);
    EntityId = Entity::getEntityId((const Entity *const)v44);
    common::tools::perf::make_shared<GatherEvent,unsigned int,unsigned int,unsigned int &,unsigned int>(
      (unsigned int *)&__r,
      &EntityId,
      &ConfigId,
      &this->gather_id_,
      &val,
      v45,
      v84,
      v85);
    std::shared_ptr<BaseEvent>::shared_ptr<GatherEvent,void>((std::shared_ptr<BaseEvent> *const)(v4 + 192), &__r);
    std::shared_ptr<GatherEvent>::~shared_ptr(&__r);
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr(
      (std::shared_ptr<BaseEvent> *const)(v4 + 288),
      (const std::shared_ptr<BaseEvent> *)(v4 + 192));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v4 + 288));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 288));
    WatcherComp = Player::getWatcherComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      WatcherComp = (PlayerWatcherComp *)&this->gather_id_;
      __asan_report_load4();
    }
    gather_id = this->gather_id_;
    if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->area_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gather_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->area_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      WatcherComp = (PlayerWatcherComp *)&gather_config_ptr->area_id;
      __asan_report_load4();
    }
    PlayerWatcherComp::triggerMpAreaGatherTimes(WatcherComp, gather_config_ptr->area_id, gather_id);
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    Scene::getOwnPlayer((const Scene *const)(v4 + 224));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 224), 0LL) )
    {
      v49 = GadgetCompBase::getGadget(this);
      val = Entity::getConfigId((const Entity *const)v49);
      p_point_type = &gather_config_ptr->point_type;
      v51 = GadgetCompBase::getGadget(this);
      ConfigId = Entity::getGroupId((const Entity *const)v51);
      common::tools::perf::make_shared<WorldGatherEvent,unsigned int,unsigned int const&,unsigned int>(
        (unsigned int *)(v4 + 288),
        &ConfigId,
        p_point_type,
        &val,
        v52,
        v53);
      std::shared_ptr<BaseEvent>::shared_ptr<WorldGatherEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v4 + 256),
        (std::shared_ptr<WorldGatherEvent> *)(v4 + 288));
      std::shared_ptr<WorldGatherEvent>::~shared_ptr((std::shared_ptr<WorldGatherEvent> *const)(v4 + 288));
      v54 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
      v55 = Player::getEventComp(v54);
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)(v4 + 288),
        (const std::shared_ptr<BaseEvent> *)(v4 + 256));
      PlayerEventComp::notifyEvent(v55, (BaseEventPtr *)(v4 + 288));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 288));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 256));
    }
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v4 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v103,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gather_comp.cpp",
        "interact",
        227);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
        (common::milog::MiLogStream *const)&v103,
        (const char (*)[16])"getGroup failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v103);
      v3 = 0;
    }
    else
    {
      v56 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      v57 = GadgetCompBase::getGadget(this);
      Group::onGroupGadgetDieEvent(v56, v57);
      EventUtil::createEvent((data::EventType)(v4 + 256));
      if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v4 + 256), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v103,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gather_comp.cpp",
          "interact",
          234);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)&v103,
          (const char (*)[32])"createEvent EVENT_GATHER failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v103);
        v3 = -1;
      }
      else
      {
        v58 = GadgetCompBase::getGadget(this);
        v59 = Entity::getEntityId((const Entity *const)v58);
        v60 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        p_source_entity_id = &v60->source_entity_id;
        if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(p_source_entity_id);
        }
        v60->source_entity_id = v59;
        v62 = GadgetCompBase::getGadget(this);
        v63 = Entity::getConfigId((const Entity *const)v62);
        std::to_string(&v103, v63);
        v64 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        std::string::operator=(&v64->source_name, &v103);
        std::string::~string(&v103);
        v65 = GadgetCompBase::getGadget(this);
        v66 = Entity::getConfigId((const Entity *const)v65);
        v67 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        p_param1 = &v67->param1;
        if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param1);
        }
        v67->param1 = v66;
        if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v69 = this->gather_id_;
        v70 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        if ( *(_BYTE *)(((unsigned __int64)&v70->param2 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v70->param2 >> 3) + 0x7FFF8000) <= 3 )
        {
          v70 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v70->param2);
        }
        v70->param2 = v69;
        if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v71 = this->item_id_;
        v72 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        p_param3 = &v72->param3;
        if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param3);
        }
        v72->param3 = v71;
        Uid = Player::getUid(player);
        v75 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        p_uid = &v75->uid;
        if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_uid);
        }
        v75->uid = Uid;
        std::shared_ptr<Group>::shared_ptr(
          (std::shared_ptr<Group> *const)(v4 + 288),
          (const std::shared_ptr<Group> *)(v4 + 128));
        GatherComp::setGatherTime(this, (GroupPtr *)(v4 + 288));
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 288));
        v77 = GadgetCompBase::getGadget(this);
        Creature::changeLifeState(v77, LIFE_DEAD, 0LL, 1);
        v78 = GadgetCompBase::getGadget(this);
        if ( *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v79 = *(_QWORD *)v78->baseclass_0 + 128LL;
        if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
          v79 = __asan_report_load8();
        v80 = *(void (__fastcall **)(Gadget *, VisionContext *))v79;
        VisionContext::VisionContext(&v101, VISION_DIE);
        v80(v78, &v101);
        v81 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        Group::handleEvent(v81, (EventPtr *)(v4 + 256));
        v3 = 0;
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 256));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 224));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 192));
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 160));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 128));
LABEL_110:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  result = v3;
  if ( v85 == (unsigned int *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 254: range 00000000175542B8-00000000175546FC
void __cdecl GatherComp::widgetDropOnGather(GatherComp *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerWidgetComp *WidgetComp; // rax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  PlayerItemComp *v14; // rax
  uint32_t material_id; // [rsp+14h] [rbp-ECh]
  const data::HomeWorldPlantExcelConfig *plant_config_ptr; // [rsp+18h] [rbp-E8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-E0h] BYREF
  char v18[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 ret:270 64 16 9 param:267 96 24 17 action_reason:265";
  *(_QWORD *)(v2 + 16) = GatherComp::widgetDropOnGather;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  material_id = ConstValueExcelConfigMgr::getHomePlantBoxMaterialID(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  WidgetComp = Player::getWidgetComp(player);
  if ( material_id == PlayerWidgetComp::getQuickUseMaterialId(WidgetComp) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.home_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    plant_config_ptr = HomeWorldExcelConfigMgr::findHomeWorldPlantExcelConfigByGatherId(
                         p_home_config_mgr,
                         this->gather_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    if ( plant_config_ptr )
    {
      ActionReason::ActionReason(
        (ActionReason *const)(v2 + 96),
        ACTION_REASON_HOME_PLANT_BOX_GATHER,
        ITEM_LIMIT_HOME_PLANT_BOX_SEED_DROP);
      *(_DWORD *)(v2 + 112) = 1;
      *(_DWORD *)(v2 + 64) = 0;
      *(_DWORD *)(v2 + 68) = 0;
      *(_DWORD *)(v2 + 72) = 0;
      *(_DWORD *)(v2 + 76) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&plant_config_ptr->seed_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&plant_config_ptr->seed_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 64) = plant_config_ptr->seed_id;
      if ( *(_BYTE *)(((unsigned __int64)&plant_config_ptr->collect_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plant_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&plant_config_ptr->collect_num >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 68) = plant_config_ptr->collect_num;
      ItemComp = Player::getItemComp(player);
      *(_DWORD *)(v2 + 48) = PlayerItemComp::checkAddItem(
                               ItemComp,
                               (const ItemParam *)(v2 + 64),
                               (const ActionReason *)(v2 + 96));
      if ( *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/gather_comp.cpp",
          "widgetDropOnGather",
          273);
        v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v17, (const char (*)[19])off_2612C120);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" ret: ");
        v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
        operator<<(v13, player);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      else
      {
        v14 = Player::getItemComp(player);
        PlayerItemComp::addItem(v14, (const ItemParam *)(v2 + 64), (const ActionReason *)(v2 + 96), 0LL);
      }
    }
  }
  if ( v18 == (char *)v2 )
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
};

// Line 281: range 00000000175546FE-0000000017554D4D
void __cdecl GatherComp::activityDropOnGather(GatherComp *const this, Player *player, Player *scene_owner_player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerActivityComp *ActivityComp; // r14
  uint32_t Level; // eax
  common::milog::MiLogStream *v10; // rcx
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType>*,std::vector<std::pair<unsigned int,data::ItemLimitType>> >::reference v11; // rax
  std::pair<unsigned int,data::ItemLimitType> *v12; // rdx
  PlayerItemComp *ItemComp; // rdi
  std::allocator<std::pair<unsigned int,unsigned int> > __a; // [rsp+23h] [rbp-16Dh] BYREF
  data::NewActivityDropType __x; // [rsp+24h] [rbp-16Ch] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+38h] [rbp-158h]
  std::vector<std::pair<unsigned int,data::ItemLimitType>> *__for_range; // [rsp+40h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int,data::ItemLimitType> >::type *drop_id; // [rsp+48h] [rbp-148h]
  std::tuple_element<1,std::pair<unsigned int,data::ItemLimitType> >::type *activity_drop_item_limit_type; // [rsp+50h] [rbp-140h]
  std::pair<unsigned int,data::ItemLimitType> __in; // [rsp+58h] [rbp-138h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-130h] BYREF
  char v25[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 24 activity_subject_vec:288 96 24 20 drop_id_type_vec:289 160 24 17 action_reason:298";
  *(_QWORD *)(v3 + 16) = GatherComp::activityDropOnGather;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  gather_config_ptr = GatherComp::getGatherConfig(this);
  if ( gather_config_ptr )
  {
    __x = NEW_ACTIVITY_DROP_TYPE_GATHER;
    std::pair<unsigned int,unsigned int>::pair<data::NewActivityDropType,true>(
      (std::pair<unsigned int,unsigned int> *const)&__in,
      &__x,
      &gather_config_ptr->point_type);
    std::allocator<std::pair<unsigned int,unsigned int>>::allocator(&__a);
    std::vector<std::pair<unsigned int,unsigned int>>::vector(
      (std::vector<std::pair<unsigned int,unsigned int>> *const)(v3 + 32),
      (std::initializer_list<std::pair<unsigned int,unsigned int> >)__PAIR128__(1LL, &__in),
      &__a);
    std::allocator<std::pair<unsigned int,unsigned int>>::~allocator(&__a);
    std::vector<std::pair<unsigned int,data::ItemLimitType>>::vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v3 + 96));
    ActivityComp = Player::getActivityComp(scene_owner_player);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Level = Creature::getLevel(this->gadget_);
    if ( PlayerActivityComp::findActivityDrops(
           ActivityComp,
           (std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v3 + 96),
           (std::vector<std::pair<unsigned int,unsigned int>> *)(v3 + 32),
           Level) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gather_comp.cpp",
        "activityDropOnGather",
        292);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v24,
              (const char (*)[33])"findActivityDrops fails, gadget:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v10, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      __for_range = (std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v3 + 96);
      __for_begin._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::begin((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v3 + 96))._M_current;
      __for_end._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>(
                &__for_begin,
                &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator*(&__for_begin);
        v12 = v11;
        if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v11, 8LL);
        }
        __in = *v12;
        drop_id = std::get<0ul,unsigned int,data::ItemLimitType>(&__in);
        activity_drop_item_limit_type = std::get<1ul,unsigned int,data::ItemLimitType>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)activity_drop_item_limit_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)activity_drop_item_limit_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_drop_item_limit_type >> 3)
                                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 160),
          ACTION_REASON_ACTIVITY_GATHER,
          *activity_drop_item_limit_type);
        ItemComp = Player::getItemComp(player);
        if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
        {
          ItemComp = (PlayerItemComp *)drop_id;
          __asan_report_load4();
        }
        PlayerItemComp::grantDropItems(ItemComp, *drop_id, 1u, (const ActionReason *)(v3 + 160), 0LL);
        __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator++(&__for_begin);
      }
    }
    std::vector<std::pair<unsigned int,data::ItemLimitType>>::~vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v3 + 96));
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v3 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gather_comp.cpp",
      "activityDropOnGather",
      285);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v24, (const char (*)[17])"getGatherConfig ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gather_id_);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 305: range 0000000017554D4E-000000001755501F
void __cdecl GatherComp::logCollectGather(
        GatherComp *const this,
        Player *player,
        uint32_t gadget_id,
        const std::vector<ItemParam> *item_param_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyCollectGather,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCollectGather,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Gadget *Gadget; // r14
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+38h] [rbp-98h]
  const ItemParam *item_param; // [rsp+40h] [rbp-90h]
  proto_log::ItemLog *item_log; // [rsp+48h] [rbp-88h]
  std::shared_ptr<google::protobuf::Message> p_log_message_ptr; // [rsp+50h] [rbp-80h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 19 collect_log_ptr:306";
  *(_QWORD *)(v4 + 16) = GatherComp::logCollectGather;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyCollectGather>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyCollectGather,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCollectGather,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyCollectGather::set_gadget_id(v7, gadget_id);
  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyCollectGather,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCollectGather,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    item_log = proto_log::PlayerLogBodyCollectGather::add_item_vec(v8);
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
  Gadget = GadgetCompBase::getGadget(this);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCollectGather,void>(
    &p_log_message_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyCollectGather> *)(v4 + 32));
  Gadget::logGadgetInteract(Gadget, player, &p_log_message_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_log_message_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyCollectGather>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCollectGather> *const)(v4 + 32));
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 319: range 0000000017555020-00000000175550E4
void __cdecl GatherComp::setGatherTime(GatherComp *const this, GroupPtr *p_group_ptr)
{
  Group *v2; // rbx
  Gadget *Gadget; // rax
  uint32_t ConfigId; // eax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gather_comp.cpp",
      "setGatherTime",
      322);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"getGroup failed");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    v2 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    Gadget = GadgetCompBase::getGadget(this);
    ConfigId = Entity::getConfigId((const Entity *const)Gadget);
    Group::setGatherRefreshTime(v2, ConfigId);
  }
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/regional_play/base_regional_play.cpp

// Line 25: range 0000000015C9CDAA-0000000015C9CDC8
int32_t __cdecl BaseRegionalPlay::init(BaseRegionalPlay *const this)
{
  BaseRegionalPlay::tryInitVariables(this);
  return 0;
};

// Line 31: range 0000000015C9CDCA-0000000015C9D731
// local variable allocation has failed, the output may be wrong!
void __cdecl BaseRegionalPlay::enable(BaseRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  data::StringList *p_ability_group_name_list; // rsi
  PlayerAbilityGroupComp *v14; // r14
  data::StringList *v15; // rsi
  PlayerAbilityGroupComp *v16; // rax
  unsigned __int64 v17; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  PlayerEventComp *EventComp; // r14
  bool *v20; // r8
  bool *v21; // r9
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayEnable,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayEnable,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayEnable,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t CurSceneId; // eax
  Player *v27; // r14
  std::string v28; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> v29; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+50h] [rbp-B0h] BYREF

  v28._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 holder:48 64 16 13 config_ptr:40 96 16 10 log_ptr:82";
  *(_QWORD *)(v1 + 16) = BaseRegionalPlay::enable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((v28._M_string_length + 68) >> 3) + 0x7FFF8000) != 0
    && ((LOBYTE(v28._M_string_length) + 68) & 7) >= *(_BYTE *)(((v28._M_string_length + 68) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v28._M_string_length + 68);
  }
  if ( *(_BYTE *)(v28._M_string_length + 68) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/base_regional_play.cpp",
      "enable",
      34);
    v4 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v30,
           (const char (*)[62])"[REGIONAL_PLAY] regional play is already enabled, play_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      v4,
      (const std::string *)(v28._M_string_length + 32));
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v5 = (LOBYTE(v28._M_string_length) + 68) & 7;
    v6 = (*(_BYTE *)(((v28._M_string_length + 68) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((v28._M_string_length + 68) >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store1(v28._M_string_length + 68, v5, v6);
    *(_BYTE *)(v28._M_string_length + 68) = 1;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    JsonConfigMgr::findRegionalPlayConfig(
      (const JsonConfigMgr *const)(v1 + 64),
      (const std::string *)&v7->design_config.json_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
    if ( std::operator==<data::ConfigRegionalPlayBase>(
           0LL,
           (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/base_regional_play.cpp",
        "enable",
        43);
      v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v30,
             (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v8,
        (const std::string *)(v28._M_string_length + 32));
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      if ( *(_BYTE *)(((v28._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v28._M_string_length + 24);
      BasicComp = Player::getBasicComp(*(Player *const *)(v28._M_string_length + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v30, BasicComp);
      std::string::operator=(v28._M_string_length + 96, &v30);
      std::string::~string(&v30);
      std::string::basic_string(&v30, v28._M_string_length + 96);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x616u, v28);
      std::string::~string(&v30);
      v10 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( !std::vector<std::string>::empty(&v10->ability_group_name_list) )
      {
        v11 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(char *)(((unsigned __int64)&v11->is_team >> 3) + 0x7FFF8000) < 0 )
          v11 = (std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v11->is_team);
        if ( v11->is_team )
        {
          if ( *(_BYTE *)(((v28._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v28._M_string_length + 24);
          AbilityGroupComp = Player::getAbilityGroupComp(*(Player *const *)(v28._M_string_length + 24));
          p_ability_group_name_list = &std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->ability_group_name_list;
          PlayerAbilityGroupComp::addTeamAbilityGroup(AbilityGroupComp, p_ability_group_name_list, 0);
        }
        else
        {
          if ( *(_BYTE *)(((v28._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v28._M_string_length + 24);
          v14 = Player::getAbilityGroupComp(*(Player *const *)(v28._M_string_length + 24));
          v15 = &std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->ability_group_name_list;
          PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v14, v15, 0);
        }
        if ( *(_BYTE *)(((v28._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v28._M_string_length + 24);
        v16 = Player::getAbilityGroupComp(*(Player *const *)(v28._M_string_length + 24));
        PlayerAbilityGroupComp::tryRefreshAbilityGroup(v16);
      }
      BaseRegionalPlay::checkIsInRegion((BaseRegionalPlay *const)v28._M_string_length);
      BaseRegionalPlay::updatePlayStatusSgv((BaseRegionalPlay *const)v28._M_string_length);
      if ( *(_BYTE *)((v28._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v28._M_string_length);
      v17 = *(_QWORD *)v28._M_string_length + 104LL;
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8(*(_QWORD *)v28._M_string_length + 104LL);
      (*(void (__fastcall **)(std::string::size_type))v17)(v28._M_string_length);
      if ( *(_BYTE *)(((v28._M_string_length + 76) >> 3) + 0x7FFF8000) != 0
        && ((LOBYTE(v28._M_string_length) + 76) & 7) >= *(_BYTE *)(((v28._M_string_length + 76) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v28._M_string_length + 76);
      }
      if ( *(_BYTE *)(v28._M_string_length + 76) )
      {
        if ( *(_BYTE *)(((v28._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v28._M_string_length + 24);
        RegionalPlayComp = Player::getRegionalPlayComp(*(Player *const *)(v28._M_string_length + 24));
        PlayerRegionalPlayComp::setLastPlayName(RegionalPlayComp, (const std::string *)(v28._M_string_length + 32));
      }
      if ( *(_BYTE *)(((v28._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v28._M_string_length + 24);
      EventComp = Player::getEventComp(*(Player *const *)(v28._M_string_length + 24));
      common::tools::perf::make_shared<RegionalPlayStatusChangeEvent,std::string &,bool &,bool &>(
        (std::string *)&v28._anon_0,
        (bool *)(v28._M_string_length + 32),
        (bool *)(v28._M_string_length + 68),
        (std::string *)(v28._M_string_length + 76),
        v20,
        v21);
      std::shared_ptr<BaseEvent>::shared_ptr<RegionalPlayStatusChangeEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v29,
        (std::shared_ptr<RegionalPlayStatusChangeEvent> *)&v28._anon_0);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v29);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v29);
      std::shared_ptr<RegionalPlayStatusChangeEvent>::~shared_ptr((std::shared_ptr<RegionalPlayStatusChangeEvent> *const)&v28._anon_0);
      BaseRegionalPlay::startTimer((BaseRegionalPlay *const)v28._M_string_length);
      BaseRegionalPlay::sendRegionalPlayInfoNotify((BaseRegionalPlay *const)v28._M_string_length);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyRegionalPlayEnable>();
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayEnable,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayEnable,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyRegionalPlayEnable::set_transaction(v22, (const std::string *)(v28._M_string_length + 96));
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayEnable,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayEnable,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyRegionalPlayEnable::set_play_name(v23, (const std::string *)(v28._M_string_length + 32));
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayEnable,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayEnable,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((v28._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v28._M_string_length + 24);
      SceneComp = Player::getSceneComp(*(Player *const *)(v28._M_string_length + 24));
      CurSceneId = PlayerSceneComp::getCurSceneId(SceneComp);
      proto_log::PlayerLogBodyRegionalPlayEnable::set_scene_id(v24, CurSceneId);
      if ( *(_BYTE *)(((v28._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v28._M_string_length + 24);
      v27 = *(Player **)(v28._M_string_length + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v29, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRegionalPlayEnable,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&v28._anon_0,
        (const std::shared_ptr<proto_log::PlayerLogBodyRegionalPlayEnable> *)(v1 + 96));
      Player::printStatLog(v27, (MessagePtr *)&v28._anon_0, &v29, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v28._anon_0);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v29);
      std::shared_ptr<proto_log::PlayerLogBodyRegionalPlayEnable>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRegionalPlayEnable> *const)(v1 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
    }
    std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 64));
  }
  if ( v31 == (char *)v1 )
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
};

// Line 90: range 0000000015C9D732-0000000015C9DFB4
// local variable allocation has failed, the output may be wrong!
void __cdecl BaseRegionalPlay::disable(BaseRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  PlayerBasicComp *BasicComp; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  PlayerEventComp *EventComp; // r14
  bool *v10; // r8
  bool *v11; // r9
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  PlayerAbilityGroupComp *v18; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  PlayerAbilityGroupComp *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayDisable,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayDisable,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayDisable,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t CurSceneId; // eax
  Player *v26; // r14
  std::string v27; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> v28; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+50h] [rbp-B0h] BYREF

  v27._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 holder:97 64 16 14 config_ptr:108 96 16 11 log_ptr:132";
  *(_QWORD *)(v1 + 16) = BaseRegionalPlay::disable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((v27._M_string_length + 68) >> 3) + 0x7FFF8000) != 0
    && ((LOBYTE(v27._M_string_length) + 68) & 7) >= *(_BYTE *)(((v27._M_string_length + 68) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v27._M_string_length + 68);
  }
  if ( *(_BYTE *)(v27._M_string_length + 68) != 1 )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/base_regional_play.cpp",
      "disable",
      93);
    v4 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v29,
           (const char (*)[63])"[REGIONAL_PLAY] regional play is already disabled, play_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      v4,
      (const std::string *)(v27._M_string_length + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v27._M_string_length + 24);
    BasicComp = Player::getBasicComp(*(Player *const *)(v27._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v29, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x617u, v27);
    std::string::~string(&v29);
    v6 = (LOBYTE(v27._M_string_length) + 68) & 7;
    v7 = (*(_BYTE *)(((v27._M_string_length + 68) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((v27._M_string_length + 68) >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(v27._M_string_length + 68, v6, v7);
    *(_BYTE *)(v27._M_string_length + 68) = 0;
    if ( *(_BYTE *)((v27._M_string_length >> 3) + 0x7FFF8000) )
      __asan_report_load8(v27._M_string_length);
    v8 = *(_QWORD *)v27._M_string_length + 112LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)v27._M_string_length + 112LL);
    (*(void (__fastcall **)(std::string::size_type))v8)(v27._M_string_length);
    if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v27._M_string_length + 24);
    EventComp = Player::getEventComp(*(Player *const *)(v27._M_string_length + 24));
    common::tools::perf::make_shared<RegionalPlayStatusChangeEvent,std::string &,bool &,bool &>(
      (std::string *)&v27._anon_0,
      (bool *)(v27._M_string_length + 32),
      (bool *)(v27._M_string_length + 68),
      (std::string *)(v27._M_string_length + 76),
      v10,
      v11);
    std::shared_ptr<BaseEvent>::shared_ptr<RegionalPlayStatusChangeEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&v28,
      (std::shared_ptr<RegionalPlayStatusChangeEvent> *)&v27._anon_0);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v28);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v28);
    std::shared_ptr<RegionalPlayStatusChangeEvent>::~shared_ptr((std::shared_ptr<RegionalPlayStatusChangeEvent> *const)&v27._anon_0);
    BaseRegionalPlay::stopTimer((BaseRegionalPlay *const)v27._M_string_length);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
    JsonConfigMgr::findRegionalPlayConfig(
      (const JsonConfigMgr *const)(v1 + 64),
      (const std::string *)&v12->design_config.json_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
    if ( std::operator==<data::ConfigRegionalPlayBase>(
           0LL,
           (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/base_regional_play.cpp",
        "disable",
        111);
      v13 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v29,
              (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v13,
        (const std::string *)(v27._M_string_length + 32));
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      v14 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( !std::vector<std::string>::empty(&v14->ability_group_name_list) )
      {
        v15 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(char *)(((unsigned __int64)&v15->is_team >> 3) + 0x7FFF8000) < 0 )
          v15 = (std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v15->is_team);
        if ( v15->is_team )
        {
          if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v27._M_string_length + 24);
          AbilityGroupComp = Player::getAbilityGroupComp(*(Player *const *)(v27._M_string_length + 24));
          v17 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          PlayerAbilityGroupComp::delTeamAbilityGroup(AbilityGroupComp, &v17->ability_group_name_list);
        }
        else
        {
          if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v27._M_string_length + 24);
          v18 = Player::getAbilityGroupComp(*(Player *const *)(v27._M_string_length + 24));
          v19 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v18, &v19->ability_group_name_list);
        }
        if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v27._M_string_length + 24);
        v20 = Player::getAbilityGroupComp(*(Player *const *)(v27._M_string_length + 24));
        PlayerAbilityGroupComp::tryRefreshAbilityGroup(v20);
      }
      BaseRegionalPlay::sendRegionalPlayInfoNotify((BaseRegionalPlay *const)v27._M_string_length);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyRegionalPlayDisable>();
      v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayDisable,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayDisable,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyRegionalPlayDisable::set_transaction(
        v21,
        (const std::string *)(v27._M_string_length + 96));
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayDisable,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayDisable,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyRegionalPlayDisable::set_play_name(v22, (const std::string *)(v27._M_string_length + 32));
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayDisable,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionalPlayDisable,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v27._M_string_length + 24);
      SceneComp = Player::getSceneComp(*(Player *const *)(v27._M_string_length + 24));
      CurSceneId = PlayerSceneComp::getCurSceneId(SceneComp);
      proto_log::PlayerLogBodyRegionalPlayDisable::set_scene_id(v23, CurSceneId);
      if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v27._M_string_length + 24);
      v26 = *(Player **)(v27._M_string_length + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v28, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRegionalPlayDisable,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&v27._anon_0,
        (const std::shared_ptr<proto_log::PlayerLogBodyRegionalPlayDisable> *)(v1 + 96));
      Player::printStatLog(v26, (MessagePtr *)&v27._anon_0, &v28, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v27._anon_0);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v28);
      std::string::clear(v27._M_string_length + 96);
      std::shared_ptr<proto_log::PlayerLogBodyRegionalPlayDisable>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRegionalPlayDisable> *const)(v1 + 96));
    }
    std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  if ( v30 == (char *)v1 )
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
};

// Line 142: range 0000000015C9DFB6-0000000015C9DFD3
void __cdecl BaseRegionalPlay::onChangePolygon(BaseRegionalPlay *const this, uint32_t cur_polygon_id)
{
  BaseRegionalPlay::checkIsInRegion(this);
};

// Line 147: range 0000000015C9DFD4-0000000015C9E6DF
void __cdecl BaseRegionalPlay::checkIsInRegion(BaseRegionalPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  uint32_t *p_bind_scene; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerPolygonComp *PolygonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  data::PolygonType polygon_type; // r14d
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool last_is_in_region; // [rsp+1Fh] [rbp-B1h]
  uint32_t cur_polygon_id; // [rsp+20h] [rbp-B0h]
  uint32_t cur_scene_id; // [rsp+24h] [rbp-ACh]
  const data::ConfigCommonPolygon *polygon_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v29; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-90h] BYREF
  char v31[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:148";
  *(_QWORD *)(v1 + 16) = BaseRegionalPlay::checkIsInRegion;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  JsonConfigMgr::findRegionalPlayConfig(
    (const JsonConfigMgr *const)(v1 + 32),
    (const std::string *)&v4->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( std::operator==<data::ConfigRegionalPlayBase>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/base_regional_play.cpp",
      "checkIsInRegion",
      151);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v30,
           (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &this->play_name_);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_region_);
    }
    last_is_in_region = this->is_in_region_;
    this->is_in_region_ = 0;
    v6 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    p_bind_scene = &v6->bind_scene;
    if ( *(_BYTE *)(((unsigned __int64)p_bind_scene >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_bind_scene & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_bind_scene >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_bind_scene);
    }
    if ( v6->bind_scene )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = Player::getSceneComp(this->player_);
      cur_scene_id = PlayerSceneComp::getCurSceneId(SceneComp);
      v9 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v10 = &v9->bind_scene;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      if ( cur_scene_id == v9->bind_scene )
      {
        v11 = ((_BYTE)this + 76) & 7;
        v12 = (*(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v12 )
          __asan_report_store1(&this->is_in_region_, v11, v12);
        this->is_in_region_ = 1;
      }
    }
    else
    {
      v13 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v13->bind_polygon_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->bind_polygon_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v13 = (std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->bind_polygon_type);
      }
      if ( v13->bind_polygon_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        PolygonComp = Player::getPolygonComp(this->player_);
        cur_polygon_id = PlayerPolygonComp::getCurPolygonId(PolygonComp);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        polygon_config_ptr = JsonConfigMgr::findCommonPolygonConfig(&v15->design_config.json_config_mgr, cur_polygon_id);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        if ( !polygon_config_ptr )
          goto LABEL_31;
        if ( *(_BYTE *)(((unsigned __int64)&polygon_config_ptr->polygon_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)polygon_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&polygon_config_ptr->polygon_type >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&polygon_config_ptr->polygon_type);
        }
        polygon_type = polygon_config_ptr->polygon_type;
        v17 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v17->bind_polygon_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->bind_polygon_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v17 = (std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v17->bind_polygon_type);
        }
        if ( polygon_type == v17->bind_polygon_type )
          v18 = 1;
        else
LABEL_31:
          v18 = 0;
        if ( v18 )
        {
          v19 = ((_BYTE)this + 76) & 7;
          v20 = (*(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v20 )
            __asan_report_store1(&this->is_in_region_, v19, v20);
          this->is_in_region_ = 1;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_region_);
    }
    if ( !this->is_in_region_ )
      goto LABEL_45;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v21 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 11);
    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      v21 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 11);
    if ( (*(unsigned __int8 (__fastcall **)(BaseRegionalPlay *const))v21)(this) != 1 )
      v22 = 1;
    else
LABEL_45:
      v22 = 0;
    if ( v22 )
    {
      v23 = ((_BYTE)this + 76) & 7;
      v24 = (*(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v24 )
        __asan_report_store1(&this->is_in_region_, v23, v24);
      this->is_in_region_ = 0;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_region_);
    }
    if ( last_is_in_region != this->is_in_region_ )
      BaseRegionalPlay::onIsInRegionChange(this);
  }
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 32));
  if ( v31 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 185: range 0000000015C9E6E0-0000000015C9E8A2
void __cdecl BaseRegionalPlay::onIsInRegionChange(BaseRegionalPlay *const this)
{
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  PlayerEventComp *EventComp; // rbx
  bool *v3; // r8
  bool *v4; // r9
  std::string v5; // [rsp+10h] [rbp-30h] BYREF

  BaseRegionalPlay::updatePlayStatusSgv(this);
  BaseRegionalPlay::sendRegionalPlayInfoNotify(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_enabled_);
  }
  if ( this->is_enabled_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_region_);
    }
    if ( this->is_in_region_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
      PlayerRegionalPlayComp::setLastPlayName(RegionalPlayComp, &this->play_name_);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  common::tools::perf::make_shared<RegionalPlayStatusChangeEvent,std::string &,bool &,bool &>(
    &v5,
    (bool *)&this->play_name_,
    &this->is_enabled_,
    (std::string *)&this->is_in_region_,
    v3,
    v4);
  std::shared_ptr<BaseEvent>::shared_ptr<RegionalPlayStatusChangeEvent,void>(
    (std::shared_ptr<BaseEvent> *const)&v5._anon_0,
    (std::shared_ptr<RegionalPlayStatusChangeEvent> *)&v5);
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v5._anon_0);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v5._anon_0);
  std::shared_ptr<RegionalPlayStatusChangeEvent>::~shared_ptr((std::shared_ptr<RegionalPlayStatusChangeEvent> *const)&v5);
};

// Line 196: range 0000000015C9E8A4-0000000015C9EBBE
bool __cdecl BaseRegionalPlay::checkCanDestory(BaseRegionalPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  unsigned __int64 v8; // rax
  bool result; // al
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:202";
  *(_QWORD *)(v1 + 16) = BaseRegionalPlay::checkCanDestory;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_region_);
  }
  if ( this->is_in_region_ )
  {
    v4 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
    JsonConfigMgr::findRegionalPlayConfig(
      (const JsonConfigMgr *const)(v1 + 32),
      (const std::string *)&v5->design_config.json_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( std::operator==<data::ConfigRegionalPlayBase>(
           0LL,
           (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/base_regional_play.cpp",
        "checkCanDestory",
        205);
      v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v11,
             (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->play_name_);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v7->mode_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v7 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->mode_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&v7->mode_type);
      }
      if ( v7->mode_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v8 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 10);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 10);
        v4 = (*(__int64 (__fastcall **)(BaseRegionalPlay *const))v8)(this);
      }
      else
      {
        v4 = 1;
      }
    }
    std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 32));
  }
  result = v4;
  if ( v12 == (char *)v1 )
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

// Line 218: range 0000000015C9EBC0-0000000015C9F187
void __cdecl BaseRegionalPlay::updatePlayStatusSgv(BaseRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int v10; // xmm0_4
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r15
  float v12; // r14d
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 13 sgv_value:235 64 16 14 config_ptr:219 96 16 26 avatar_team_entity_ptr:229";
  *(_QWORD *)(v1 + 16) = BaseRegionalPlay::updatePlayStatusSgv;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 96));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
  JsonConfigMgr::findRegionalPlayConfig(
    (const JsonConfigMgr *const)(v1 + 64),
    (const std::string *)&v4->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
  if ( std::operator==<data::ConfigRegionalPlayBase>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/base_regional_play.cpp",
      "updatePlayStatusSgv",
      222);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v22,
           (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &this->play_name_);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    v6 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( !(unsigned __int8)std::string::empty(&v6->play_status_sgv) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getAvatarComp(this->player_);
      PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v1 + 96));
      if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v1 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/regional_play/base_regional_play.cpp",
          "updatePlayStatusSgv",
          232);
        v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v22,
               (const char (*)[47])"[REGIONAL_PLAY] getTeamEntity fail, play_name:");
        v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &this->play_name_);
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_region_);
        }
        if ( this->is_in_region_ )
          v10 = 1065353216;
        else
          v10 = 0;
        *(_DWORD *)(v1 + 48) = v10;
        v11 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        v12 = *(float *)(v1 + 48);
        v13 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        Creature::setServerGlobalValue(v11, &v13->play_status_sgv, v12, 1);
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/regional_play/base_regional_play.cpp",
          "updatePlayStatusSgv",
          237);
        v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v22,
                (const char (*)[47])"[REGIONAL_PLAY] updatePlayStatusSgv, sgv_name:");
        v15 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &v15->play_status_sgv);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" sgv_value:");
        v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v17, (const float *)(v1 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" play_name:");
        v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &this->play_name_);
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 96));
    }
  }
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 64));
  if ( v23 == (char *)v1 )
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
};

// Line 242: range 0000000015C9F188-0000000015C9F477
bool __cdecl BaseRegionalPlay::isValidVarType(const BaseRegionalPlay *const this, uint32_t var_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  bool v7; // r15
  const data::ConfigRegionalPlayVarData *v8; // rax
  bool result; // al
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<data::ConfigRegionalPlayVarData> *__for_range; // [rsp+20h] [rbp-B0h]
  const data::ConfigRegionalPlayVarData *v13; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-90h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:243";
  *(_QWORD *)(v2 + 16) = BaseRegionalPlay::isValidVarType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  JsonConfigMgr::findRegionalPlayConfig(
    (const JsonConfigMgr *const)(v2 + 32),
    (const std::string *)&v5->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( std::operator==<data::ConfigRegionalPlayBase>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/base_regional_play.cpp",
      "isValidVarType",
      246);
    v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v15,
           (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->play_name_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = 0;
  }
  else
  {
    __for_range = &std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->var_list;
    __for_begin._M_current = std::vector<data::ConfigRegionalPlayVarData>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<data::ConfigRegionalPlayVarData>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>(
              &__for_begin,
              &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator*(&__for_begin);
      v13 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      if ( var_type == v13->var_type )
      {
        v7 = 1;
        goto LABEL_14;
      }
      __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator++(&__for_begin);
    }
    v7 = 0;
  }
LABEL_14:
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v2 + 32));
  result = v7;
  if ( v16 == (char *)v2 )
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

// Line 262: range 0000000015C9F478-0000000015C9F8F1
void __cdecl BaseRegionalPlay::fillVarList(
        BaseRegionalPlay *const this,
        google::protobuf::RepeatedPtrField<proto::RegionalPlayVar> *var_list)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  unsigned __int64 v9; // rax
  float v10; // xmm0_4
  unsigned __int64 v11; // rax
  float v12; // xmm0_4
  data::RegionalPlayVarType type; // [rsp+10h] [rbp-D0h]
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<data::ConfigRegionalPlayVarData> *__for_range; // [rsp+28h] [rbp-B8h]
  const data::ConfigRegionalPlayVarData *v17; // [rsp+30h] [rbp-B0h]
  proto::RegionalPlayVar *proto_var; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 config_ptr:263";
  *(_QWORD *)(v3 + 16) = BaseRegionalPlay::fillVarList;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  JsonConfigMgr::findRegionalPlayConfig(
    (const JsonConfigMgr *const)(v3 + 32),
    (const std::string *)&v6->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( std::operator==<data::ConfigRegionalPlayBase>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/base_regional_play.cpp",
      "fillVarList",
      266);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v20,
           (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &this->play_name_);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    __for_range = &std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32))->var_list;
    __for_begin._M_current = std::vector<data::ConfigRegionalPlayVarData>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<data::ConfigRegionalPlayVarData>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>(
              &__for_begin,
              &__for_end) )
    {
      v17 = __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator*(&__for_begin);
      proto_var = google::protobuf::RepeatedPtrField<proto::RegionalPlayVar>::Add(var_list);
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      type = v17->var_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
      *(float *)v2.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, type);
      proto::RegionalPlayVar::set_type(proto_var, type);
      v2 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v2));
      proto::RegionalPlayVar::set_value(proto_var, *(float *)v2.m128i_i32);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v9 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 6);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 6);
      v10 = (*(float (__fastcall **)(BaseRegionalPlay *const, _QWORD))v9)(this, (unsigned int)type);
      proto::RegionalPlayVar::set_base_value(proto_var, v10);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v11 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 4);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 4);
      v12 = (*(float (__fastcall **)(BaseRegionalPlay *const, _QWORD))v11)(this, (unsigned int)type);
      proto::RegionalPlayVar::set_max_value(proto_var, v12);
      __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v3 + 32));
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 283: range 0000000015C9F8F2-0000000015C9FD4C
void __cdecl BaseRegionalPlay::onTimer(BaseRegionalPlay *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v6; // rax
  char v7; // al
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // r14
  unsigned __int64 v10; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:297";
  *(_QWORD *)(v2 + 16) = BaseRegionalPlay::onTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_enabled_);
  }
  if ( this->is_enabled_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInTransfer(SceneComp) )
      goto LABEL_14;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v6 = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::getEnterSceneState(v6) > ENTER_SCENE_NOTIFY )
      v7 = 1;
    else
LABEL_14:
      v7 = 0;
    if ( v7 )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/regional_play/base_regional_play.cpp",
        "onTimer",
        293);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v12,
             (const char (*)[35])"[REGIONAL_PLAY] in transfer, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getAvatarComp(this->player_);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 32));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/regional_play/base_regional_play.cpp",
          "onTimer",
          300);
        v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v12,
               (const char (*)[42])"[REGIONAL_PLAY] cur avatar is null, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v10 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 12);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 12);
        (*(void (__fastcall **)(BaseRegionalPlay *const))v10)(this);
        BaseRegionalPlay::sendRegionalPlayInfoNotify(this);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 311: range 0000000015C9FE94-0000000015CA040F
void __cdecl BaseRegionalPlay::startTimer(BaseRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  PlayerTimer *v8; // rax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::weak_ptr<BaseRegionalPlay> v10; // [rsp+20h] [rbp-F0h] BYREF
  std::enable_shared_from_this<BaseRegionalPlay> v11; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 12 this_ptr:318 64 16 12 this_wtr:319 96 16 14 player_ptr:320";
  *(_QWORD *)(v1 + 16) = BaseRegionalPlay::startTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( std::operator!=<PlayerTimer>(0LL, &this->timer_ptr_) )
  {
    v4 = std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    if ( common::tools::MiTimer::isActive(v4) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/base_regional_play.cpp",
        "startTimer",
        314);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        &v12,
        (const char (*)[45])"[REGIONAL_PLAY] timer_ptr_ is already active");
      common::milog::MiLogStream::~MiLogStream(&v12);
      v6 = std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
      common::tools::MiTimer::cancel(v6);
    }
  }
  std::enable_shared_from_this<BaseRegionalPlay>::shared_from_this(&v11);
  std::dynamic_pointer_cast<BaseRegionalPlay,BaseRegionalPlay>((const std::shared_ptr<BaseRegionalPlay> *)(v1 + 32));
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)&v11);
  std::weak_ptr<BaseRegionalPlay>::weak_ptr<BaseRegionalPlay,void>(
    (std::weak_ptr<BaseRegionalPlay> *const)(v1 + 64),
    (const std::shared_ptr<BaseRegionalPlay> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toThisPtr<Player>((Player *)(v1 + 96));
  std::weak_ptr<BaseRegionalPlay>::weak_ptr(&v10, (const std::weak_ptr<BaseRegionalPlay> *)(v1 + 64));
  common::tools::perf::make_shared<PlayerTimer,std::shared_ptr<Player> &,BaseRegionalPlay::startTimer(void)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<Player> *)&v11,
    (BaseRegionalPlay::startTimer::<lambda(uint64_t)> *)(v1 + 96),
    (std::shared_ptr<Player> *)&v10,
    (BaseRegionalPlay::startTimer::<lambda(uint64_t)> *)(v1 + 96));
  std::shared_ptr<PlayerTimer>::operator=(&this->timer_ptr_, (std::shared_ptr<PlayerTimer> *)&v11);
  std::shared_ptr<PlayerTimer>::~shared_ptr((std::shared_ptr<PlayerTimer> *const)&v11);
  BaseRegionalPlay::startTimer(void)::{lambda(unsigned long)#1}::~startTimer((BaseRegionalPlay::startTimer::<lambda(uint64_t)> *const)&v10);
  if ( std::operator==<PlayerTimer>(0LL, &this->timer_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/base_regional_play.cpp",
      "startTimer",
      332);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v12,
           (const char (*)[47])"[REGIONAL_PLAY] create timer_ptr_ failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_15:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    goto LABEL_20;
  }
  v8 = std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
  if ( PlayerTimer::startS(v8, 1u, 1, "./src/player/regional_play/base_regional_play.cpp", "startTimer", 337) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/base_regional_play.cpp",
      "startTimer",
      339);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v12,
           (const char (*)[46])"[REGIONAL_PLAY] timer_ptr_ start failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_15;
  }
LABEL_20:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
  std::weak_ptr<BaseRegionalPlay>::~weak_ptr((std::weak_ptr<BaseRegionalPlay> *const)(v1 + 64));
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
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
};

// Line 321: range 0000000015C9FD4E-0000000015C9FE76
void __cdecl BaseRegionalPlay::startTimer(void)::{lambda(unsigned long)#1}::operator()(
        const BaseRegionalPlay::startTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseRegionalPlay *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 this_ptr:323";
  *(_QWORD *)(v2 + 16) = BaseRegionalPlay::startTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BaseRegionalPlay>::lock((const std::weak_ptr<BaseRegionalPlay> *const)(v2 + 32));
  if ( std::operator!=<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BaseRegionalPlay::onTimer(v5, now_ms);
  }
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 321: range 0000000015D24E5A-0000000015D24E7F
void __cdecl BaseRegionalPlay::startTimer(void)::{lambda(unsigned long)#1}::startTimer(
        BaseRegionalPlay::startTimer::<lambda(uint64_t)> *const this,
        BaseRegionalPlay::startTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseRegionalPlay>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 321: range 0000000015D26BA2-0000000015D26BC7
void __cdecl BaseRegionalPlay::startTimer(void)::{lambda(unsigned long)#1}::startTimer(
        BaseRegionalPlay::startTimer::<lambda(uint64_t)> *const this,
        const BaseRegionalPlay::startTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseRegionalPlay>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 321: range 0000000015C9FE78-0000000015C9FE92
void __cdecl BaseRegionalPlay::startTimer(void)::{lambda(unsigned long)#1}::~startTimer(
        BaseRegionalPlay::startTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BaseRegionalPlay>::~weak_ptr(&this->__this_wtr);
};

// Line 345: range 0000000015CA0410-0000000015CA047B
void __cdecl BaseRegionalPlay::stopTimer(BaseRegionalPlay *const this)
{
  std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( std::operator!=<PlayerTimer>(0LL, &this->timer_ptr_) )
  {
    v1 = std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    if ( common::tools::MiTimer::isActive(v1) )
    {
      v3 = std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
      common::tools::MiTimer::cancel(v3);
    }
  }
};

// Line 353: range 0000000015CA047C-0000000015CA07EE
void __cdecl BaseRegionalPlay::tryInitVariables(BaseRegionalPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rdi
  float init_value; // ecx
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<data::ConfigRegionalPlayVarData> *__for_range; // [rsp+20h] [rbp-B0h]
  const data::ConfigRegionalPlayVarData *v12; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-90h] BYREF
  char v15[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:354";
  *(_QWORD *)(v1 + 16) = BaseRegionalPlay::tryInitVariables;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  JsonConfigMgr::findRegionalPlayConfig(
    (const JsonConfigMgr *const)(v1 + 32),
    (const std::string *)&v4->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( std::operator==<data::ConfigRegionalPlayBase>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/base_regional_play.cpp",
      "tryInitVariables",
      357);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v14,
           (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &this->play_name_);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    __for_range = &std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->var_list;
    __for_begin._M_current = std::vector<data::ConfigRegionalPlayVarData>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<data::ConfigRegionalPlayVarData>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>(
              &__for_begin,
              &__for_end) )
    {
      v12 = __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&v12->init_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->init_value >> 3) + 0x7FFF8000) )
      {
        RegionalPlayComp = (PlayerRegionalPlayComp *)&v12->init_value;
        __asan_report_load4(&v12->init_value);
      }
      init_value = v12->init_value;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        RegionalPlayComp = (PlayerRegionalPlayComp *)v12;
        __asan_report_load4(v12);
      }
      PlayerRegionalPlayComp::tryInitVariable(RegionalPlayComp, v12->var_type, init_value);
      __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 32));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 368: range 0000000015CA07F0-0000000015CA0ADA
void __cdecl BaseRegionalPlay::sendRegionalPlayInfoNotify(BaseRegionalPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rax
  void (__fastcall *v5)(BaseRegionalPlay *const, google::protobuf::RepeatedPtrField<proto::RegionalPlayVar> *); // r14
  google::protobuf::RepeatedPtrField<proto::RegionalPlayVar> *v6; // rdx
  char v7[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 64 10 notify:369";
  *(_QWORD *)(v1 + 16) = BaseRegionalPlay::sendRegionalPlayInfoNotify;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450892) = -202116109;
  proto::RegionalPlayInfoNotify::RegionalPlayInfoNotify((proto::RegionalPlayInfoNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_enabled_);
  }
  proto::RegionalPlayInfoNotify::set_is_enabled((proto::RegionalPlayInfoNotify *const)(v1 + 32), this->is_enabled_);
  proto::RegionalPlayInfoNotify::set_play_name((proto::RegionalPlayInfoNotify *const)(v1 + 32), &this->play_name_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_type_);
  }
  proto::RegionalPlayInfoNotify::set_play_type((proto::RegionalPlayInfoNotify *const)(v1 + 32), this->play_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_region_);
  }
  proto::RegionalPlayInfoNotify::set_is_in_region((proto::RegionalPlayInfoNotify *const)(v1 + 32), this->is_in_region_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 8);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 8);
  v5 = *(void (__fastcall **)(BaseRegionalPlay *const, google::protobuf::RepeatedPtrField<proto::RegionalPlayVar> *))v4;
  v6 = proto::RegionalPlayInfoNotify::mutable_var_list((proto::RegionalPlayInfoNotify *const)(v1 + 32));
  v5(this, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::RegionalPlayInfoNotify::~RegionalPlayInfoNotify((proto::RegionalPlayInfoNotify *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

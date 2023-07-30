// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mp/player_mp_comp.cpp

// Line 38: range 0000000016CAC354-0000000016CAC413
int32_t __cdecl PlayerMpComp::fromBin(PlayerMpComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  google::protobuf::uint32 v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  const proto::PlayerMpCompBin *proto_comp; // [rsp+18h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mp_bin(player_data_bin);
  v2 = proto::PlayerMpCompBin::mp_setting_type(proto_comp);
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
  {
    v2 = (_DWORD)this + 36;
    __asan_report_store4(&this->mp_setting_type_, v3, v4);
  }
  this->mp_setting_type_ = v2;
  LOBYTE(v5) = proto::PlayerMpCompBin::is_only_mp_with_ps_player(proto_comp);
  v6 = v5;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_only_mp_with_ps_player_ >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_only_mp_with_ps_player_, v3, v6);
  }
  this->is_only_mp_with_ps_player_ = v6;
  return 0;
};

// Line 49: range 0000000016CAC414-0000000016CAC4D8
int32_t __cdecl PlayerMpComp::toBin(PlayerMpComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::PlayerMpCompBin *proto_comp; // [rsp+18h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_mp_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mp_setting_type_);
  }
  proto::PlayerMpCompBin::set_mp_setting_type(proto_comp, this->mp_setting_type_);
  if ( *(char *)(((unsigned __int64)&this->is_only_mp_with_ps_player_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_only_mp_with_ps_player_);
  proto::PlayerMpCompBin::set_is_only_mp_with_ps_player(proto_comp, this->is_only_mp_with_ps_player_);
  return 0;
};

// Line 60: range 0000000016CAC4DA-0000000016CAC624
int32_t __cdecl PlayerMpComp::onLogin(PlayerMpComp *const this, bool is_new_player)
{
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( !common::tools::MiTimer::isActive(&this->mp_update_timer_)
    && PlayerUnixTimer::startS(&this->mp_update_timer_, 0xAu, 1, "./src/player/mp/player_mp_comp.cpp", "onLogin", 61) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp/player_mp_comp.cpp",
      "onLogin",
      63);
    v3 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v6,
           (const char (*)[36])"mp_update_timer_ start failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    proto::UpdateMpStatusNotify::Clear(&this->last_update_mp_status_notify_);
    return 0;
  }
};

// Line 72: range 0000000016CAC626-0000000016CAC644
int32_t __cdecl PlayerMpComp::onLogout(PlayerMpComp *const this)
{
  PlayerMpComp::sendDelMpStatusNotify(this);
  return 0;
};

// Line 79: range 0000000016CAC646-0000000016CAC69E
int32_t __cdecl PlayerMpComp::onFirstLogin(PlayerMpComp *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->mp_setting_type_, (((_BYTE)this + 36) & 7u) + 3, v1);
  this->mp_setting_type_ = MP_SETTING_ENTER_AFTER_APPLY;
  return 0;
};

// Line 85: range 0000000016CAC6A0-0000000016CAC942
int32_t __cdecl PlayerMpComp::notifyAllData(PlayerMpComp *const this)
{
  int first; // esi
  Player *player; // rbx
  Player *v3; // rbx
  Player *v4; // rbx
  bool IsOnlyMpWithPSPlayer; // al
  std::pair<int,std::vector<unsigned int> > v7; // [rsp+10h] [rbp-60h] BYREF
  proto::PropValue prop_value; // [rsp+30h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::checkMpModeAvailability(&v7, this->player_);
  first = v7.first;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_mode_availability_, (unsigned int)v7.first, &this->mp_mode_availability_);
  }
  this->mp_mode_availability_ = first;
  std::pair<int,std::vector<unsigned int>>::~pair(&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_mode_availability_);
  }
  buildIntProp(&prop_value, 0x2722u, this->mp_mode_availability_ == 0);
  Player::notifyPlayerProp(player, &prop_value);
  proto::PropValue::~PropValue(&prop_value);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = this->player_;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mp_setting_type_);
  }
  buildIntProp(&prop_value, 0x2721u, this->mp_setting_type_);
  Player::notifyPlayerProp(v3, &prop_value);
  proto::PropValue::~PropValue(&prop_value);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = this->player_;
  IsOnlyMpWithPSPlayer = PlayerMpComp::getIsOnlyMpWithPSPlayer(this);
  buildIntProp(&prop_value, 0x2728u, IsOnlyMpWithPSPlayer);
  Player::notifyPlayerProp(v4, &prop_value);
  proto::PropValue::~PropValue(&prop_value);
  PlayerMpComp::updateMpPlayerInfo(this);
  return 0;
};

// Line 96: range 0000000016CAC944-0000000016CACDBA
void __cdecl PlayerMpComp::setMpSettingType(
        PlayerMpComp *const this,
        proto::MpSettingType mp_setting_type,
        bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  Player *player; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyTeamSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTeamSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  Player *v10; // r14
  std::string is_notifya; // [rsp+0h] [rbp-120h]
  bool is_notifyb; // [rsp+0h] [rbp-120h]
  proto::MpSettingType mp_setting_typea; // [rsp+4h] [rbp-11Ch]
  PlayerMpComp *thisa; // [rsp+8h] [rbp-118h]
  google::protobuf::uint32 old_mp_setting_type; // [rsp+1Ch] [rbp-104h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-100h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::string v18; // [rsp+40h] [rbp-E0h] BYREF
  proto::PropValue prop_value; // [rsp+60h] [rbp-C0h] BYREF
  char v20[144]; // [rsp+90h] [rbp-90h] BYREF

  is_notifya._M_string_length = (std::string::size_type)this;
  HIDWORD(is_notifya._M_dataplus._M_p) = mp_setting_type;
  LOBYTE(is_notifya._M_dataplus._M_p) = is_notify;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 holder:97 64 16 23 team_switch_log_ptr:113";
  *(_QWORD *)(v3 + 16) = PlayerMpComp::setMpSettingType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v18, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x70Au, is_notifya);
  std::string::~string(&v18);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->mp_setting_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->mp_setting_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->mp_setting_type_);
  }
  if ( mp_setting_typea != thisa->mp_setting_type_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->mp_setting_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->mp_setting_type_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->mp_setting_type_);
    }
    old_mp_setting_type = thisa->mp_setting_type_;
    thisa->mp_setting_type_ = mp_setting_typea;
    if ( is_notifyb )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      buildIntProp(&prop_value, 0x2721u, thisa->mp_setting_type_);
      Player::notifyPlayerProp(player, &prop_value);
      proto::PropValue::~PropValue(&prop_value);
    }
    PlayerMpComp::updateMpPlayerInfo(thisa);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyTeamSwitch>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTeamSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTeamSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyTeamSwitch::set_before_op(v8, old_mp_setting_type);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyTeamSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTeamSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->mp_setting_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->mp_setting_type_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->mp_setting_type_);
    }
    proto_log::PlayerLogBodyTeamSwitch::set_op(v9, thisa->mp_setting_type_);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTeamSwitch,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyTeamSwitch> *)(v3 + 64));
    Player::printStatLog(v10, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyTeamSwitch>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTeamSwitch> *const)(v3 + 64));
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v20 == (char *)v3 )
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
};

// Line 122: range 0000000016CACDBC-0000000016CACF38
void __cdecl PlayerMpComp::refreshMpModeAvailability(PlayerMpComp *const this)
{
  Player *player; // rbx
  char old_mp_available; // [rsp+1Eh] [rbp-62h]
  unsigned __int8 new_mp_available; // [rsp+1Fh] [rbp-61h]
  std::pair<int,std::vector<unsigned int> > v4; // [rsp+20h] [rbp-60h] BYREF
  proto::PropValue prop_value; // [rsp+40h] [rbp-40h] BYREF

  PlayerMpComp::updateMpPlayerInfo(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_mode_availability_);
  }
  old_mp_available = this->mp_mode_availability_ == 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::checkMpModeAvailability(&v4, this->player_);
  this->mp_mode_availability_ = v4.first;
  std::pair<int,std::vector<unsigned int>>::~pair(&v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_mode_availability_);
  }
  new_mp_available = this->mp_mode_availability_ == 0;
  if ( new_mp_available != old_mp_available )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    buildIntProp(&prop_value, 0x2722u, new_mp_available);
    Player::notifyPlayerProp(player, &prop_value);
    proto::PropValue::~PropValue(&prop_value);
  }
};

// Line 141: range 0000000016CACF3A-0000000016CAD2E1
int32_t __cdecl PlayerMpComp::checkMpSceneEnterable(PlayerMpComp *const this, uint32_t enter_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Scene *v10; // rax
  SceneMultistagePlayComp *MultistagePlayComp; // rax
  Scene *v12; // rax
  SceneGalleryComp *GalleryComp; // rax
  Scene *v14; // rax
  SceneTransferGuardComp *TransferGuardComp; // rax
  int32_t result; // eax
  std::shared_ptr<Scene> p_scene_ptr; // [rsp+10h] [rbp-A0h] BYREF
  char v18[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:142 64 16 18 dest_scene_ptr:143";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::checkMpSceneEnterable;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL)
    && (v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
        Scene::getSceneMpType(v5) == SCENE_MP_SINGLE_PLAYER_SINGLE_MODE) )
  {
    v7 = 1248;
  }
  else if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL)
         && (v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
             Scene::getSceneMpType(v8) == SCENE_MP_SINGLE_PLAYER_SINGLE_MODE) )
  {
    v7 = 1248;
  }
  else
  {
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
      std::shared_ptr<Scene>::operator=(
        (std::shared_ptr<Scene> *const)(v2 + 32),
        (const std::shared_ptr<Scene> *)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
    {
      v7 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      MultistagePlayComp = Scene::getMultistagePlayComp(v10);
      if ( SceneMultistagePlayComp::checkMpSceneEnterable(MultistagePlayComp, enter_uid) )
      {
        v7 = 1240;
      }
      else
      {
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        GalleryComp = Scene::getGalleryComp(v12);
        if ( SceneGalleryComp::isForbidPlayerEnterBySceneTransferAwaiter(GalleryComp, enter_uid) )
        {
          v7 = 1233;
        }
        else
        {
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          TransferGuardComp = Scene::getTransferGuardComp(v14);
          if ( SceneTransferGuardComp::checkMpSceneEnterable(TransferGuardComp, enter_uid) )
          {
            v7 = 1251;
          }
          else
          {
            std::shared_ptr<Scene>::shared_ptr(&p_scene_ptr, (const std::shared_ptr<Scene> *)(v2 + 32));
            v7 = PlayerMpComp::checkMyWorldEnterable(this, &p_scene_ptr);
            std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
          }
        }
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v7;
  if ( v18 == (char *)v2 )
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

// Line 181: range 0000000016CAD2E2-0000000016CAD491
std::pair<int,std::vector<unsigned int> > *__cdecl PlayerMpComp::checkMpModeAvailability(
        std::pair<int,std::vector<unsigned int> > *retstr,
        const PlayerMpComp *const this)
{
  std::allocator<unsigned int> __a; // [rsp+13h] [rbp-6Dh] BYREF
  proto::Retcode __l[11]; // [rsp+14h] [rbp-6Ch] BYREF
  std::pair<proto::Retcode,std::vector<unsigned int> > __p; // [rsp+40h] [rbp-40h] BYREF

  __l[2] = PlayerMpComp::getMpBlockEndTime(this);
  if ( __l[2] && (unsigned int)__l[2] > common::tools::TimeUtils::getNow() )
  {
    __l[0] = __l[2];
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)&__l[3],
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
      &__a);
    __l[1] = RET_MP_IS_BLOCK;
    std::make_pair<proto::Retcode,std::vector<unsigned int>>(&__p, &__l[1], (std::vector<unsigned int> *)&__l[3]);
    std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &__p);
    std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&__p);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&__l[3]);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  else
  {
    memset(&__l[3], 0, 24);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)&__l[3]);
    __l[1] = RET_SUCC;
    std::make_pair<proto::Retcode,std::vector<unsigned int>>(&__p, &__l[1], (std::vector<unsigned int> *)&__l[3]);
    std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &__p);
    std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&__p);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&__l[3]);
  }
  return retstr;
};

// Line 193: range 0000000016CAD492-0000000016CADD0D
int32_t __cdecl PlayerMpComp::checkMyWorldEnterable(PlayerMpComp *const this, ScenePtr *p_scene_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t OwnerUid; // r14d
  PlayerBasicComp *BasicComp; // rax
  bool v14; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t v16; // r14d
  bool v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // r14d
  char v20; // al
  PlayerScenePlayComp *ScenePlayComp; // rax
  PlayerDraftComp *DraftComp; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 v24; // rdx
  PlayerDungeonComp *DungeonComp; // rax
  char v26; // al
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  int32_t result; // eax
  uint32_t mp_block_end_time; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<Player> __a; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 world_ptr:199 64 16 18 dest_scene_ptr:256";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::checkMyWorldEnterable;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( std::operator==<Scene>(p_scene_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp/player_mp_comp.cpp",
      "checkMyWorldEnterable",
      196);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v31, (const char (*)[18])"scene_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(v7->_vptr_DescribalBase + 8);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8)(
      v2 + 32,
      v7);
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mp/player_mp_comp.cpp",
        "checkMyWorldEnterable",
        202);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v31,
        (const char (*)[24])"getOwnPlayerWorld fails");
      common::milog::MiLogStream::~MiLogStream(&v31);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(this->player_);
      mp_block_end_time = PlayerMpComp::getMpBlockEndTime(MpComp);
      if ( mp_block_end_time && mp_block_end_time > common::tools::TimeUtils::getNow() )
      {
        v6 = 1226;
      }
      else
      {
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
        OwnerUid = Scene::getOwnerUid(v11);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( OwnerUid == Player::getUid(this->player_) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x31u) )
          {
            v6 = 1223;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::checkMpModeAvailability((std::pair<int,std::vector<unsigned int> > *)&v31, this->player_);
            v14 = LODWORD(v31.log_) != 0;
            std::pair<int,std::vector<unsigned int>>::~pair((std::pair<int,std::vector<unsigned int> > *const)&v31);
            if ( v14 )
            {
              v6 = 1204;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->mp_setting_type_);
              }
              if ( this->mp_setting_type_ )
              {
                v15 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                if ( World::isWorldFull(v15) )
                {
                  v6 = 1208;
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  if ( !Player::isConnected(this->player_) )
                  {
                    v6 = 1210;
                  }
                  else
                  {
                    v16 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    Player::getUid(this->player_);
                    World::findPlayerPtr((World *const)&__a, v16);
                    v17 = std::operator==<Player>(0LL, &__a);
                    std::shared_ptr<Player>::~shared_ptr(&__a);
                    if ( v17 )
                    {
                      v6 = 1212;
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      Player::getSceneComp(this->player_);
                      PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 64));
                      if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
                        goto LABEL_55;
                      v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                      v19 = Scene::getOwnerUid(v18);
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      if ( v19 == Player::getUid(this->player_) )
LABEL_55:
                        v20 = 0;
                      else
                        v20 = 1;
                      if ( v20 )
                      {
                        v6 = 1215;
                      }
                      else
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        ScenePlayComp = Player::getScenePlayComp(this->player_);
                        if ( PlayerScenePlayComp::checkHasBattleWithDirectType(ScenePlayComp) )
                        {
                          v6 = 1227;
                        }
                        else
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8();
                          DraftComp = Player::getDraftComp(this->player_);
                          if ( PlayerDraftComp::checkDraftSceneEnterable(DraftComp) )
                          {
                            v6 = 1235;
                          }
                          else
                          {
                            v23 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
                              __asan_report_load8();
                            v24 = (unsigned __int64)(v23->_vptr_World + 23);
                            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
                              __asan_report_load8();
                            if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v24)(v23) == 1 )
                              goto LABEL_75;
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8();
                            DungeonComp = Player::getDungeonComp(this->player_);
                            if ( PlayerDungeonComp::isInDungeon(DungeonComp) )
                              v26 = 1;
                            else
LABEL_75:
                              v26 = 0;
                            if ( v26 )
                            {
                              v6 = 1236;
                            }
                            else
                            {
                              v27 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                              if ( World::isForbidOtherPlayerEnter(v27) )
                                v6 = 1233;
                              else
                                v6 = 0;
                            }
                          }
                        }
                      }
                      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
                    }
                  }
                }
              }
              else
              {
                v6 = 1205;
              }
            }
          }
        }
        else
        {
          v6 = -1;
        }
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
  }
  result = v6;
  if ( v32 == (char *)v2 )
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

// Line 289: range 0000000016CADD0E-0000000016CAE0B3
bool __cdecl PlayerMpComp::isInMpMode(PlayerMpComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  char v8; // al
  bool v9; // r14
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t v11; // r14d
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rdx
  char v14; // al
  bool result; // al
  char v16[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:291 64 16 13 world_ptr:296";
  *(_QWORD *)(v1 + 16) = PlayerMpComp::isInMpMode;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
    goto LABEL_16;
  v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  OwnerUid = Scene::getOwnerUid(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( OwnerUid != Player::getUid(this->player_) )
    goto LABEL_15;
  v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(v6->_vptr_DescribalBase + 49);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6) )
LABEL_15:
    v8 = 1;
  else
LABEL_16:
    v8 = 0;
  if ( v8 )
  {
    v9 = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v1 + 64));
    if ( !std::operator!=<World>((const std::shared_ptr<World> *)(v1 + 64), 0LL) )
      goto LABEL_31;
    v10 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v11 = World::getOwnerUid(v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v11 != Player::getUid(this->player_) )
      goto LABEL_30;
    v12 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)(v12->_vptr_World + 23);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13)(v12) )
LABEL_30:
      v14 = 1;
    else
LABEL_31:
      v14 = 0;
    v9 = v14 != 0;
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v9;
  if ( v16 == (char *)v1 )
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
  return result;
};

// Line 307: range 0000000016CAE0B4-0000000016CAE360
bool __cdecl PlayerMpComp::isInSingleMpMode(PlayerMpComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  bool v4; // r14
  char v5; // r14
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t OwnerUid; // r15d
  uint32_t v8; // r15d
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char v10; // r15
  bool result; // al
  std::shared_ptr<Player> __a; // [rsp+10h] [rbp-80h] BYREF
  char v13[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 world_ptr:312";
  *(_QWORD *)(v1 + 16) = PlayerMpComp::isInSingleMpMode;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( !PlayerMpComp::isInMpMode(this) )
  {
    v4 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v1 + 32));
    v5 = 0;
    if ( !std::operator!=<World>((const std::shared_ptr<World> *)(v1 + 32), 0LL) )
      goto LABEL_17;
    v6 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    OwnerUid = World::getOwnerUid(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid != Player::getUid(this->player_) )
      goto LABEL_17;
    v8 = (unsigned int)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getUid(this->player_);
    World::findPlayerPtr((World *const)&__a, v8);
    v5 = 1;
    if ( std::operator!=<Player>(&__a, 0LL)
      && (v9 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
          World::getPlayerCount(v9) == 1) )
    {
      v10 = 1;
    }
    else
    {
LABEL_17:
      v10 = 0;
    }
    if ( v5 )
      std::shared_ptr<Player>::~shared_ptr(&__a);
    v4 = v10 != 0;
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 32));
  }
  result = v4;
  if ( v13 == (char *)v1 )
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

// Line 324: range 0000000016CAE362-0000000016CAE629
bool __cdecl PlayerMpComp::isInOtherWorldOrScene(PlayerMpComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t OwnerUid; // r14d
  char v6; // al
  bool v7; // r14
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // r14d
  char v10; // al
  bool result; // al
  char v12[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:326 64 16 13 world_ptr:331";
  *(_QWORD *)(v1 + 16) = PlayerMpComp::isInOtherWorldOrScene;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
    goto LABEL_11;
  v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  OwnerUid = Scene::getOwnerUid(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( OwnerUid == Player::getUid(this->player_) )
LABEL_11:
    v6 = 0;
  else
    v6 = 1;
  if ( v6 )
  {
    v7 = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v1 + 64));
    if ( !std::operator!=<World>((const std::shared_ptr<World> *)(v1 + 64), 0LL) )
      goto LABEL_21;
    v8 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v9 = World::getOwnerUid(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v9 == Player::getUid(this->player_) )
LABEL_21:
      v10 = 0;
    else
      v10 = 1;
    v7 = v10 != 0;
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v7;
  if ( v12 == (char *)v1 )
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
  return result;
};

// Line 342: range 0000000016CAE62A-0000000016CAE75B
__int64 __fastcall PlayerMpComp::checkAllowEnterByPlayerUid(const PlayerMpComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rcx
  unsigned __int64 v5; // r12
  __int64 result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:341";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::checkAllowEnterByPlayerUid;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mp_setting_type_);
  }
  if ( (unsigned int)(this->mp_setting_type_ - 1) > 1 )
  {
    result = 0xFFFFFFFFLL;
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
              &this->allow_enter_uid_timestamp_map_,
              (const unsigned int *)v4 - 8) )
  {
    result = 0LL;
  }
  else
  {
    result = 1209LL;
  }
  if ( v7 == (char *)v2 )
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

// Line 356: range 0000000016CAE75C-0000000016CAE76A
void __cdecl PlayerMpComp::onEnterDungeonScene(PlayerMpComp *const this, DungeonScene *dungeon_scene)
{
  ;
};

// Line 373: range 0000000016CAE76C-0000000016CAE77A
void __cdecl PlayerMpComp::onLeaveDungeonScene(PlayerMpComp *const this, DungeonScene *dungeon_scene)
{
  ;
};

// Line 389: range 0000000016CAE77C-0000000016CAE8F7
bool __cdecl PlayerMpComp::isAllowEnterPlayerFull(const PlayerMpComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // r14
  uint32_t ValidAllowEnterPlayerNum; // r14d
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool result; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 world_ptr:390";
  *(_QWORD *)(v1 + 16) = PlayerMpComp::isAllowEnterPlayerFull;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v1 + 32)) )
  {
    v4 = 1;
  }
  else
  {
    ValidAllowEnterPlayerNum = PlayerMpComp::getValidAllowEnterPlayerNum(this);
    v6 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v4 = ValidAllowEnterPlayerNum >= 4 - World::getPlayerCount(v6);
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 32));
  result = v4;
  if ( v8 == (char *)v1 )
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

// Line 399: range 0000000016CAE8F8-0000000016CAE916
bool __cdecl PlayerMpComp::isAllowEnterPlayerEmpty(const PlayerMpComp *const this)
{
  return PlayerMpComp::getValidAllowEnterPlayerNum(this) == 0;
};

// Line 405: range 0000000016CAE918-0000000016CAEA1E
uint32_t __cdecl PlayerMpComp::getValidAllowEnterPlayerNum(const PlayerMpComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *M_cur; // r14
  std::unordered_map<unsigned int,unsigned int>::const_iterator v5; // rax
  uint32_t result; // eax
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 11 in_time:407";
  *(_QWORD *)(v1 + 16) = PlayerMpComp::getValidAllowEnterPlayerNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = common::tools::TimeUtils::getNow();
  M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->allow_enter_uid_timestamp_map_)._M_cur;
  v5._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->allow_enter_uid_timestamp_map_)._M_cur;
  result = std::count_if<std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>,PlayerMpComp::getValidAllowEnterPlayerNum(void)::{lambda(std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> &)#1}>(
             v5,
             (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>)M_cur,
             *(PlayerMpComp::getValidAllowEnterPlayerNum::<lambda(auto:25&)> *)(v1 + 32));
  if ( v7 == (char *)v1 )
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

// Line 407: range 0000000016D35C6A-0000000016D35D03
bool __cdecl PlayerMpComp::getValidAllowEnterPlayerNum::_lambda_auto_25___::operator()_const_std::pair_unsigned_int_const_unsigned_int___(
        const PlayerMpComp::getValidAllowEnterPlayerNum::<lambda(auto:25&)> *const __closure,
        const std::pair<unsigned int const,unsigned int> *p)
{
  uint32_t v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&p->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p->second);
  }
  v2 = p->second + 60;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 > __closure->__now;
};

// Line 412: range 0000000016CAEA20-0000000016CAEB55
void __fastcall PlayerMpComp::setEnterAllowPlayerUid(PlayerMpComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 *v5; // r8
  uint32_t now; // [rsp+14h] [rbp-7Ch]
  __int64 v7; // [rsp+18h] [rbp-78h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:411";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::setEnterAllowPlayerUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  now = common::tools::TimeUtils::getNow();
  common::tools::MiscUtils::erase_if<unsigned int,unsigned int,PlayerMpComp::setEnterAllowPlayerUid(unsigned int)::{lambda(unsigned int &)#1}>(
    &this->allow_enter_uid_timestamp_map_,
    (PlayerMpComp::setEnterAllowPlayerUid::<lambda(auto:26&)>)now);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
          &this->allow_enter_uid_timestamp_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    v7 = common::tools::TimeUtils::getNow();
    std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,long>(
      &this->allow_enter_uid_timestamp_map_,
      (unsigned int *)(v2 + 32),
      &v7,
      (unsigned int *)(v2 + 32),
      v5);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 415: range 0000000016D2AA48-0000000016D2AAE1
bool __cdecl PlayerMpComp::setEnterAllowPlayerUid::_lambda_auto_26___::operator()_std::pair_unsigned_int_const_unsigned_int___(
        const PlayerMpComp::setEnterAllowPlayerUid::<lambda(auto:26&)> *const __closure,
        std::pair<unsigned int const,unsigned int> *p)
{
  uint32_t v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&p->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p->second);
  }
  v2 = p->second + 60;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 <= __closure->__now;
};

// Line 428: range 0000000016CAEB56-0000000016CAEC26
void __fastcall PlayerMpComp::removeEnterAllowPlayerUid(PlayerMpComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:427";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::removeEnterAllowPlayerUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::unordered_map<unsigned int,unsigned int>::erase(
    &this->allow_enter_uid_timestamp_map_,
    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 434: range 0000000016CAEC28-0000000016CAED0D
void __cdecl PlayerMpComp::updateMpPlayerInfo(PlayerMpComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  bool is_mp_scene_enterable; // [rsp+1Bh] [rbp-5h]
  int32_t retcode; // [rsp+1Ch] [rbp-4h]

  retcode = PlayerMpComp::checkMpSceneEnterable(this, 0);
  is_mp_scene_enterable = retcode == 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_mp_scene_enterable_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_mp_scene_enterable_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_mp_scene_enterable_);
  }
  if ( is_mp_scene_enterable != this->is_mp_scene_enterable_ )
  {
    v1 = ((_BYTE)this + 44) & 7;
    v2 = (*(_BYTE *)(((unsigned __int64)&this->is_mp_scene_enterable_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_mp_scene_enterable_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v2 )
      __asan_report_store1(&this->is_mp_scene_enterable_, v1, v2);
    this->is_mp_scene_enterable_ = is_mp_scene_enterable;
    if ( this->is_mp_scene_enterable_ )
    {
      PlayerMpComp::sendUpdateMpStatusNotify(this);
    }
    else if ( retcode != 1205 )
    {
      PlayerMpComp::sendDelMpStatusNotify(this);
    }
  }
};

// Line 455: range 0000000016CAED0E-0000000016CAF347
void __cdecl PlayerMpComp::fillOnlinePlayerInfo(const PlayerMpComp *const this, proto::OnlinePlayerInfo *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t Uid; // edx
  PlayerBasicComp *BasicComp; // rax
  const std::string *v7; // rdx
  PlayerBasicComp *v8; // rax
  uint32_t Level; // edx
  PlayerBasicComp *v10; // r14
  proto::ProfilePicture *v11; // rax
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t PlayerCount; // edx
  PlayerBasicComp *v14; // rax
  uint32_t WorldLevel; // edx
  PlayerSocialComp *SocialComp; // rax
  uint32_t NameCardId; // edx
  PlayerSocialComp *v18; // rax
  PlayerSocialComp *v19; // rax
  google::protobuf::RepeatedField<unsigned int> *v20; // rax
  std::string value; // [rsp+10h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 world_ptr:461 64 24 13 blacklist:470";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::fillOnlinePlayerInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::OnlinePlayerInfo::set_uid(proto, Uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  v7 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
  proto::OnlinePlayerInfo::set_nickname(proto, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = Player::getBasicComp(this->player_);
  Level = PlayerBasicComp::getLevel(v8);
  proto::OnlinePlayerInfo::set_player_level(proto, Level);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = Player::getBasicComp(this->player_);
  v11 = proto::OnlinePlayerInfo::mutable_profile_picture(proto);
  PlayerBasicComp::getProfilePictureToClient(v10, v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mp_setting_type_);
  }
  proto::OnlinePlayerInfo::set_mp_setting_type(proto, this->mp_setting_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator!=<World>(0LL, (const std::shared_ptr<World> *)(v2 + 32)) )
  {
    v12 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerCount = World::getPlayerCount(v12);
    proto::OnlinePlayerInfo::set_cur_player_num_in_world(proto, PlayerCount);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = Player::getBasicComp(this->player_);
  WorldLevel = PlayerBasicComp::getWorldLevel(v14);
  proto::OnlinePlayerInfo::set_world_level(proto, WorldLevel);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getOnlineId[abi:cxx11](&value, this->player_);
  proto::OnlinePlayerInfo::set_online_id(proto, &value);
  std::string::~string(&value);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getPsnId[abi:cxx11](&value, this->player_);
  proto::OnlinePlayerInfo::set_psn_id(proto, &value);
  std::string::~string(&value);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  NameCardId = PlayerSocialComp::getNameCardId(SocialComp);
  proto::OnlinePlayerInfo::set_name_card_id(proto, NameCardId);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v18 = Player::getSocialComp(this->player_);
  PlayerSocialComp::getBlacklist(v18, (std::vector<unsigned int> *)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v19 = Player::getSocialComp(this->player_);
  PlayerSocialComp::getSignature[abi:cxx11](&value, v19);
  proto::OnlinePlayerInfo::set_signature(proto, &value);
  std::string::~string(&value);
  v20 = proto::OnlinePlayerInfo::mutable_blacklist_uid_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)(v2 + 64),
    v20);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 32));
  if ( v22 == (char *)v2 )
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

// Line 479: range 0000000016CAF348-0000000016CAF7E0
bool __cdecl PlayerMpComp::canSendOnlinePlayerInfo(PlayerMpComp *const this, const proto::UpdateMpStatusNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  bool is_only_mp_with_ps_player; // r14
  bool v6; // r14
  const std::string *v7; // r14
  const std::string *v8; // rax
  google::protobuf::uint32 v9; // r14d
  const proto::ProfilePicture *v10; // rax
  google::protobuf::uint32 v11; // r14d
  const proto::ProfilePicture *v12; // rax
  const proto::ProfilePicture *v13; // rax
  google::protobuf::uint32 v14; // r14d
  const proto::ProfilePicture *v15; // rax
  proto::MpSettingType v16; // r14d
  google::protobuf::uint32 v17; // r14d
  google::protobuf::uint32 v18; // r14d
  google::protobuf::uint32 v19; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v20; // rax
  const unsigned int *v21; // r14
  const google::protobuf::RepeatedField<unsigned int> *v22; // rax
  const unsigned int *v23; // rax
  const google::protobuf::RepeatedField<unsigned int> *v24; // rax
  const unsigned int *v25; // r14
  const google::protobuf::RepeatedField<unsigned int> *v26; // rax
  const unsigned int *v27; // rax
  const std::string *v28; // r14
  const std::string *v29; // rax
  bool result; // al
  const proto::OnlinePlayerInfo *online_player_info; // [rsp+10h] [rbp-100h]
  const proto::OnlinePlayerInfo *last_send_online_player_info; // [rsp+18h] [rbp-F8h]
  char v33[240]; // [rsp+20h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 48 22 new_black_list_set:518 112 48 22 old_black_list_set:519";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::canSendOnlinePlayerInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  online_player_info = proto::UpdateMpStatusNotify::online_player_info(notify);
  last_send_online_player_info = proto::UpdateMpStatusNotify::online_player_info(&this->last_update_mp_status_notify_);
  is_only_mp_with_ps_player = proto::UpdateMpStatusNotify::is_only_mp_with_ps_player(notify);
  if ( is_only_mp_with_ps_player == proto::UpdateMpStatusNotify::is_only_mp_with_ps_player(&this->last_update_mp_status_notify_) )
  {
    v7 = proto::OnlinePlayerInfo::nickname[abi:cxx11](last_send_online_player_info);
    v8 = proto::OnlinePlayerInfo::nickname[abi:cxx11](online_player_info);
    if ( std::operator!=<char>(v8, v7) )
    {
      v6 = 1;
    }
    else
    {
      v9 = proto::OnlinePlayerInfo::player_level(online_player_info);
      if ( v9 == proto::OnlinePlayerInfo::player_level(last_send_online_player_info) )
      {
        v10 = proto::OnlinePlayerInfo::profile_picture(online_player_info);
        v11 = proto::ProfilePicture::avatar_id(v10);
        v12 = proto::OnlinePlayerInfo::profile_picture(last_send_online_player_info);
        if ( v11 == proto::ProfilePicture::avatar_id(v12) )
        {
          v13 = proto::OnlinePlayerInfo::profile_picture(online_player_info);
          v14 = proto::ProfilePicture::costume_id(v13);
          v15 = proto::OnlinePlayerInfo::profile_picture(last_send_online_player_info);
          if ( v14 == proto::ProfilePicture::costume_id(v15) )
          {
            v16 = proto::OnlinePlayerInfo::mp_setting_type(online_player_info);
            if ( v16 == proto::OnlinePlayerInfo::mp_setting_type(last_send_online_player_info) )
            {
              v17 = proto::OnlinePlayerInfo::cur_player_num_in_world(online_player_info);
              if ( v17 == proto::OnlinePlayerInfo::cur_player_num_in_world(last_send_online_player_info) )
              {
                v18 = proto::OnlinePlayerInfo::world_level(online_player_info);
                if ( v18 == proto::OnlinePlayerInfo::world_level(last_send_online_player_info) )
                {
                  v19 = proto::OnlinePlayerInfo::name_card_id(online_player_info);
                  if ( v19 == proto::OnlinePlayerInfo::name_card_id(last_send_online_player_info) )
                  {
                    v20 = proto::OnlinePlayerInfo::blacklist_uid_list(online_player_info);
                    v21 = google::protobuf::RepeatedField<unsigned int>::end(v20);
                    v22 = proto::OnlinePlayerInfo::blacklist_uid_list(online_player_info);
                    v23 = google::protobuf::RepeatedField<unsigned int>::begin(v22);
                    std::set<unsigned int>::set<unsigned int const*>((std::set<unsigned int> *const)(v2 + 32), v23, v21);
                    v24 = proto::OnlinePlayerInfo::blacklist_uid_list(last_send_online_player_info);
                    v25 = google::protobuf::RepeatedField<unsigned int>::end(v24);
                    v26 = proto::OnlinePlayerInfo::blacklist_uid_list(last_send_online_player_info);
                    v27 = google::protobuf::RepeatedField<unsigned int>::begin(v26);
                    std::set<unsigned int>::set<unsigned int const*>(
                      (std::set<unsigned int> *const)(v2 + 112),
                      v27,
                      v25);
                    if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
                           (const std::set<unsigned int> *)(v2 + 32),
                           (const std::set<unsigned int> *)(v2 + 112)) )
                    {
                      v6 = 1;
                    }
                    else
                    {
                      v28 = proto::OnlinePlayerInfo::signature[abi:cxx11](last_send_online_player_info);
                      v29 = proto::OnlinePlayerInfo::signature[abi:cxx11](online_player_info);
                      v6 = std::operator!=<char>(v29, v28);
                    }
                    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
                    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 32));
                  }
                  else
                  {
                    v6 = 1;
                  }
                }
                else
                {
                  v6 = 1;
                }
              }
              else
              {
                v6 = 1;
              }
            }
            else
            {
              v6 = 1;
            }
          }
          else
          {
            v6 = 1;
          }
        }
        else
        {
          v6 = 1;
        }
      }
      else
      {
        v6 = 1;
      }
    }
  }
  else
  {
    v6 = 1;
  }
  result = v6;
  if ( v33 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 534: range 0000000016CAF7E2-0000000016CAFD7D
void __cdecl PlayerMpComp::sendUpdateMpStatusNotify(PlayerMpComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t Uid; // eax
  bool IsOnlyMpWithPSPlayer; // al
  signed int PlatformType; // eax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t v10; // eax
  common::minet::Packet *v11; // r14
  GameserverApp *v12; // rax
  uint32_t AppId; // eax
  GameserverService *v14; // r14
  NetworkMgrBase *v15; // r14
  uint32_t v16; // r8d
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  proto::OnlinePlayerInfo *proto_player_info; // [rsp+18h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 14 packet_ptr:546 80 40 10 notify:535";
  *(_QWORD *)(v1 + 16) = PlayerMpComp::sendUpdateMpStatusNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  proto::UpdateMpStatusNotify::UpdateMpStatusNotify((proto::UpdateMpStatusNotify *const)(v1 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::UpdateMpStatusNotify::set_uid((proto::UpdateMpStatusNotify *const)(v1 + 80), Uid);
  proto_player_info = proto::UpdateMpStatusNotify::mutable_online_player_info((proto::UpdateMpStatusNotify *const)(v1 + 80));
  PlayerMpComp::fillOnlinePlayerInfo(this, proto_player_info);
  IsOnlyMpWithPSPlayer = PlayerMpComp::getIsOnlyMpWithPSPlayer(this);
  proto::UpdateMpStatusNotify::set_is_only_mp_with_ps_player(
    (proto::UpdateMpStatusNotify *const)(v1 + 80),
    IsOnlyMpWithPSPlayer);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlatformType = Player::getPlatformType(this->player_);
  proto::UpdateMpStatusNotify::set_platform_type(
    (proto::UpdateMpStatusNotify *const)(v1 + 80),
    (proto::PlatformType)PlatformType);
  if ( PlayerMpComp::canSendOnlinePlayerInfo(this, (const proto::UpdateMpStatusNotify *)(v1 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mp/player_mp_comp.cpp",
      "sendUpdateMpStatusNotify",
      545);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v20,
           (const char (*)[48])"[MP_UPDATE] sendUpdateMpStatusNotify, player_: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    common::minet::PacketUtils::createPacket<proto::UpdateMpStatusNotify>((const proto::UpdateMpStatusNotify *)(v1 + 48));
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v1 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp/player_mp_comp.cpp",
        "sendUpdateMpStatusNotify",
        549);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v20,
             (const char (*)[26])"createPacket failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = Player::getUid(this->player_);
      common::minet::Packet::setUserId(v9, v10);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      v12 = Singleton<GameserverApp>::instance();
      AppId = AppBase::getAppId((AppBase *const)v12);
      common::minet::Packet::setSource(v11, 3u, AppId);
      v14 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v1 + 48));
      GameserverService::setPacketGameThreadIndex(v14, &p_packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v1 + 48));
      NetworkMgrBase::sendPacketToTargetService(
        v15,
        (common::minet::PacketPtr)__PAIR128__(11LL, &p_packet_ptr),
        0xFFFFFFFF,
        v16);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      proto::UpdateMpStatusNotify::CopyFrom(
        &this->last_update_mp_status_notify_,
        (const proto::UpdateMpStatusNotify *)(v1 + 80));
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 48));
  }
  proto::UpdateMpStatusNotify::~UpdateMpStatusNotify((proto::UpdateMpStatusNotify *const)(v1 + 80));
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 562: range 0000000016CAFD7E-0000000016CB017D
void __cdecl PlayerMpComp::sendDelMpStatusNotify(PlayerMpComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t Uid; // eax
  common::milog::MiLogStream *v5; // r14
  common::minet::Packet *v6; // r14
  uint32_t v7; // eax
  common::minet::Packet *v8; // r14
  GameserverApp *v9; // rax
  uint32_t AppId; // eax
  GameserverService *v11; // r14
  NetworkMgrBase *v12; // r14
  uint32_t v13; // r8d
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 packet_ptr:565 64 24 10 notify:563";
  *(_QWORD *)(v1 + 16) = PlayerMpComp::sendDelMpStatusNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::DelMpStatusNotify::DelMpStatusNotify((proto::DelMpStatusNotify *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::DelMpStatusNotify::set_uid((proto::DelMpStatusNotify *const)(v1 + 64), Uid);
  common::minet::PacketUtils::createPacket<proto::DelMpStatusNotify>((const proto::DelMpStatusNotify *)(v1 + 32));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp/player_mp_comp.cpp",
      "sendDelMpStatusNotify",
      568);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v16,
           (const char (*)[26])"createPacket failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v6, v7);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v9 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v9);
    common::minet::Packet::setSource(v8, 3u, AppId);
    v11 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v1 + 32));
    GameserverService::setPacketGameThreadIndex(v11, &p_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v1 + 32));
    NetworkMgrBase::sendPacketToTargetService(
      v12,
      (common::minet::PacketPtr)__PAIR128__(11LL, &p_packet_ptr),
      0xFFFFFFFF,
      v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
    proto::UpdateMpStatusNotify::Clear(&this->last_update_mp_status_notify_);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 32));
  proto::DelMpStatusNotify::~DelMpStatusNotify((proto::DelMpStatusNotify *const)(v1 + 64));
  if ( v17 == (char *)v1 )
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

// Line 580: range 0000000016CB017E-0000000016CB01F1
void __cdecl PlayerMpComp::onMpUpdateTimer(PlayerMpComp *const this, uint64_t now_ms)
{
  PlayerMpComp::refreshMpModeAvailability(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_mp_scene_enterable_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_mp_scene_enterable_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_mp_scene_enterable_);
  }
  if ( this->is_mp_scene_enterable_ )
    PlayerMpComp::sendUpdateMpStatusNotify(this);
};

// Line 591: range 0000000016CB01F2-0000000016CB05CA
int32_t __cdecl PlayerMpComp::applyEnterMp(PlayerMpComp *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GameserverApp *v5; // rax
  uint32_t AppId; // eax
  unsigned __int64 v7; // rax
  google::protobuf::uint32 *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // r14
  GameserverApp *v13; // rax
  uint32_t v14; // eax
  NetworkMgrBase *v15; // r14
  uint32_t v16; // r8d
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  proto::OnlinePlayerInfo *online_player_info; // [rsp+18h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 packet_ptr:597 80 40 16 apply_notify:592";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::applyEnterMp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  proto::PlayerApplyEnterMpNotify::PlayerApplyEnterMpNotify((proto::PlayerApplyEnterMpNotify *const)(v2 + 80));
  online_player_info = proto::PlayerApplyEnterMpNotify::mutable_src_player_info((proto::PlayerApplyEnterMpNotify *const)(v2 + 80));
  PlayerMpComp::fillOnlinePlayerInfo(this, online_player_info);
  v5 = Singleton<GameserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v5);
  proto::PlayerApplyEnterMpNotify::set_src_app_id((proto::PlayerApplyEnterMpNotify *const)(v2 + 80), AppId);
  v7 = ZTWN11ThreadLocal17work_thread_indexE();
  v8 = (google::protobuf::uint32 *)v7;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v7);
  proto::PlayerApplyEnterMpNotify::set_src_thread_index((proto::PlayerApplyEnterMpNotify *const)(v2 + 80), *v8);
  common::minet::PacketUtils::createPacket<proto::PlayerApplyEnterMpNotify>((const proto::PlayerApplyEnterMpNotify *)(v2 + 48));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp/player_mp_comp.cpp",
      "applyEnterMp",
      600);
    v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v21,
           (const char (*)[26])"createPacket failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v10 = -1;
  }
  else
  {
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    common::minet::Packet::setUserId(v11, target_uid);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    v13 = Singleton<GameserverApp>::instance();
    v14 = AppBase::getAppId((AppBase *const)v13);
    common::minet::Packet::setSource(v12, 3u, v14);
    v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 48));
    NetworkMgrBase::sendPacketToTargetService(v15, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v16);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    PlayerMpComp::onApplyEnterMpBegin(this);
    v10 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 48));
  proto::PlayerApplyEnterMpNotify::~PlayerApplyEnterMpNotify((proto::PlayerApplyEnterMpNotify *const)(v2 + 80));
  result = v10;
  if ( v22 == (char *)v2 )
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

// Line 612: range 0000000016CB05CC-0000000016CB0648
int32_t __cdecl PlayerMpComp::fillMpBriefData(PlayerMpComp *const this, proto::PlayerMpBriefData *mp_brief_data)
{
  char is_brief_mp_available; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_mode_availability_);
  }
  is_brief_mp_available = this->mp_mode_availability_ == 0;
  if ( this->mp_mode_availability_ == 1226 )
    is_brief_mp_available = 1;
  proto::PlayerMpBriefData::set_is_mp_avaliable(mp_brief_data, is_brief_mp_available);
  return 0;
};

// Line 623: range 0000000016CB064A-0000000016CB0838
void __cdecl PlayerMpComp::onApplyEnterMpBegin(PlayerMpComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mp/player_mp_comp.cpp",
    "onApplyEnterMpBegin",
    624);
  v1 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v4,
         (const char (*)[32])"[MP] onApplyEnterMpBegin, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  PlayerMpComp::setIsApplyingEnterMp(this, 1);
  if ( common::tools::MiTimer::isActive(&this->mp_apply_timer_) )
    common::tools::MiTimer::cancel(&this->mp_apply_timer_);
  if ( PlayerUnixTimer::startS(
         &this->mp_apply_timer_,
         0xAu,
         0,
         "./src/player/mp/player_mp_comp.cpp",
         "onApplyEnterMpBegin",
         630) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mp/player_mp_comp.cpp",
      "onApplyEnterMpBegin",
      632);
    v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v4,
           (const char (*)[38])"mp_apply_timer_->startS failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
};

// Line 637: range 0000000016CB083A-0000000016CB0927
void __cdecl PlayerMpComp::onApplyEnterMpEnd(PlayerMpComp *const this, uint64_t now_ms)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mp/player_mp_comp.cpp",
    "onApplyEnterMpEnd",
    638);
  v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v4,
         (const char (*)[30])"[MP] onApplyEnterMpEnd, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  PlayerMpComp::setIsApplyingEnterMp(this, 0);
  common::tools::MiTimer::cancel(&this->mp_apply_timer_);
};

// Line 644: range 0000000016CB0928-0000000016CB09E3
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerMpComp::setIsOnlyMpWithPSPlayer(PlayerMpComp *const this, bool is_only)
{
  PlayerBasicComp *BasicComp; // rbx
  uint64_t NowMs; // rax
  bool old; // [rsp+1Fh] [rbp-11h]

  old = PlayerMpComp::getIsOnlyMpWithPSPlayer(this);
  if ( *(char *)(((unsigned __int64)&this->is_only_mp_with_ps_player_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_only_mp_with_ps_player_, is_only, &this->is_only_mp_with_ps_player_);
  this->is_only_mp_with_ps_player_ = is_only;
  if ( old != this->is_only_mp_with_ps_player_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    NowMs = common::tools::TimeUtils::getNowMs();
    PlayerBasicComp::notifyPlayerDataToMulti(BasicComp, NowMs);
  }
};

// Line 655: range 0000000016CB09E4-0000000016CB0A6C
bool __cdecl PlayerMpComp::getIsOnlyMpWithPSPlayer(PlayerMpComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isPsnPlatform(this->player_) )
    return 0;
  if ( *(char *)(((unsigned __int64)&this->is_only_mp_with_ps_player_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_only_mp_with_ps_player_);
  return this->is_only_mp_with_ps_player_;
};

// Line 667: range 0000000016CB0A6E-0000000016CB0C84
__int64 __fastcall PlayerMpComp::getApplyPlayerAppId(PlayerMpComp *const this, uint32_t apply_player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v8; // rdx
  std::pair<unsigned int,unsigned int> *v9; // rax
  uint32_t now; // [rsp+14h] [rbp-8Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 20 apply_player_uid:666 64 8 8 iter:669";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::getApplyPlayerAppId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = apply_player_uid;
  now = common::tools::TimeUtils::getNow();
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(
                                                                                                    &this->apply_uid_app_id_map_,
                                                                                                    (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(&this->apply_uid_app_id_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 64));
    p_second = &v6->second.second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    if ( now <= v6->second.second + 10 )
    {
      v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 64));
      v9 = &v8->second;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      result = v8->second.first;
    }
    else
    {
      std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::erase(
        &this->apply_uid_app_id_map_,
        *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 64));
      result = 0LL;
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 685: range 0000000016CB0C86-0000000016CB0DEA
void __fastcall PlayerMpComp::onBeApplied(PlayerMpComp *const this, uint32_t uid, uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<unsigned int,long int> v6; // rax
  std::pair<unsigned int,unsigned int> *v7; // rax
  __int64 __y; // [rsp+18h] [rbp-98h] BYREF
  std::pair<unsigned int,long int> __p; // [rsp+20h] [rbp-90h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:684 64 4 10 app_id:684";
  *(_QWORD *)(v3 + 16) = PlayerMpComp::onBeApplied;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 64) = app_id;
  __y = common::tools::TimeUtils::getNow();
  v6 = std::make_pair<unsigned int &,long>((unsigned int *)(v3 + 64), &__y);
  __p.first = v6.first;
  __p.second = v6.second;
  v7 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
         &this->apply_uid_app_id_map_,
         (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
  std::pair<unsigned int,unsigned int>::operator=<unsigned int,long>(v7, &__p);
  if ( v11 == (char *)v3 )
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
};

// Line 691: range 0000000016CB0DEC-0000000016CB0EBC
void __fastcall PlayerMpComp::removeApplyPlayer(PlayerMpComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:690";
  *(_QWORD *)(v2 + 16) = PlayerMpComp::removeApplyPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::erase(
    &this->apply_uid_app_id_map_,
    (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

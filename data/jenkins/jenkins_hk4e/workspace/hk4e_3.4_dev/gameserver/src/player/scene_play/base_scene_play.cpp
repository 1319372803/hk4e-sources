// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/scene_play/base_scene_play.cpp

// Line 26: range 0000000016CFD32A-0000000016CFD4D3
int32_t __cdecl BaseScenePlay::fromBin(BaseScenePlay *const this, const proto::ScenePlayBin *play_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  bool v4; // dl
  uint32_t v5; // edx
  char v6; // al
  google::protobuf::uint32 v7; // edi
  bool v8; // dl
  __int64 v9; // rsi
  uint32_t v10; // ecx
  char v11; // dl
  bool v12; // dl
  const proto::ScenePlayBin *play_bina; // [rsp+0h] [rbp-20h]
  const proto::ScenePlaySourceBin *source_bin; // [rsp+18h] [rbp-8h]

  play_bina = play_bin;
  v2 = proto::ScenePlayBin::play_type(play_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000);
  LOBYTE(play_bin) = v3 != 0;
  v4 = v3 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v3;
  if ( v4 )
    __asan_report_store4(&this->play_type_, play_bin, v4);
  this->play_type_ = v2;
  v5 = proto::ScenePlayBin::entry_id(play_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(play_bin) = v6 != 0;
    __asan_report_store4(&this->entry_id_, play_bin, v5);
  }
  this->entry_id_ = v5;
  v7 = proto::ScenePlayBin::phase(play_bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000);
  if ( v8 )
  {
    v7 = (_DWORD)this + 44;
    __asan_report_store4(&this->phase_, (((_BYTE)this + 44) & 7u) + 3, v8);
  }
  this->phase_ = v7;
  source_bin = proto::ScenePlayBin::source_bin(play_bina);
  v9 = proto::ScenePlaySourceBin::type(source_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->source_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_info_, v9, (_BYTE)this + 48);
  }
  this->source_info_.type = v9;
  v10 = proto::ScenePlaySourceBin::param(source_bin);
  v11 = *(_BYTE *)(((unsigned __int64)&this->source_info_.param >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v11 != 0;
  v12 = v11 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v11;
  if ( v12 )
    __asan_report_store4(&this->source_info_.param, v9, v12);
  this->source_info_.param = v10;
  return 0;
};

// Line 39: range 0000000016CFD4D4-0000000016CFD6C6
int32_t __cdecl BaseScenePlay::toBin(const BaseScenePlay *const this, proto::ScenePlayBin *play_bin)
{
  proto::ScenePlaySourceBin *source_bin; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  proto::ScenePlayBin::set_play_id(play_bin, this->play_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->play_type_);
  }
  proto::ScenePlayBin::set_play_type(play_bin, this->play_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  proto::ScenePlayBin::set_entry_id(play_bin, this->entry_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->phase_);
  }
  proto::ScenePlayBin::set_phase(play_bin, this->phase_);
  source_bin = proto::ScenePlayBin::mutable_source_bin(play_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->source_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->source_info_);
  }
  proto::ScenePlaySourceBin::set_type(source_bin, this->source_info_.type);
  if ( *(_BYTE *)(((unsigned __int64)&this->source_info_.param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_info_.param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->source_info_.param);
  }
  proto::ScenePlaySourceBin::set_param(source_bin, this->source_info_.param);
  return 0;
};

// Line 53: range 0000000016CFD6C8-0000000016CFD88A
void __cdecl BaseScenePlay::onLogin(BaseScenePlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
  {
    if ( BaseScenePlay::isDisabled(this) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play.cpp",
        "onLogin",
        61);
      v1 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v4,
             (const char (*)[44])"[SCENE_PLAY] scene play disabled, play_id: ");
      v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->play_id_);
      v3 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v2, (const char (*)[13])" ,entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->phase_);
      }
      if ( this->phase_ == Activated )
      {
        BaseScenePlay::loadActivateGroups(this);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->phase_);
        }
        if ( this->phase_ == Open )
        {
          BaseScenePlay::loadActivateGroups(this);
          BaseScenePlay::loadOpenGroups(this);
        }
      }
    }
  }
};

// Line 77: range 0000000016CFD88C-0000000016CFD8CB
void __cdecl BaseScenePlay::onLogout(BaseScenePlay *const this)
{
  BaseScenePlayBattle *v1; // rax

  if ( std::operator!=<BaseScenePlayBattle>(0LL, &this->battle_ptr_) )
  {
    v1 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->battle_ptr_);
    BaseScenePlayBattle::interruptBattle(v1);
  }
};

// Line 85: range 0000000016CFD8CC-0000000016CFDC5D
int32_t __cdecl BaseScenePlay::init(BaseScenePlay *const this, const ScenePlaySourceInfo *source_info)
{
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  __int64 v5; // rsi
  uint32_t play_type; // ecx
  char v7; // dl
  bool v8; // dl
  MpPlayExcelConfigMgr *v9; // rcx
  __int64 play_id; // rsi
  uint32_t v11; // edx
  char v12; // al
  __int64 v13; // rsi
  bool v14; // dl
  const data::MpPlayMatchExcelConfig *match_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(p_mp_play_config_mgr, this->play_id_);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( match_config_ptr )
  {
    v5 = (((_BYTE)match_config_ptr + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->play_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&match_config_ptr->play_type);
    }
    play_type = match_config_ptr->play_type;
    v7 = *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v7 != 0;
    v8 = v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7;
    if ( v8 )
      __asan_report_store4(&this->play_type_, v5, v8);
    this->play_type_ = play_type;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    play_id = this->play_id_;
    v11 = MpPlayExcelConfigMgr::randomOneMpConfigId(v9, play_id);
    v12 = *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(play_id) = v12 != 0;
      __asan_report_store4(&this->entry_id_, play_id, v11);
    }
    this->entry_id_ = v11;
    std::shared_ptr<Config>::~shared_ptr(&v17);
    v13 = (((_BYTE)this + 44) & 7u) + 3;
    v14 = *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000);
    if ( v14 )
      __asan_report_store4(&this->phase_, v13, v14);
    this->phase_ = None_22;
    if ( *(_BYTE *)(((unsigned __int64)&this->source_info_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->source_info_, v13);
    if ( ((unsigned __int8)source_info & 7) >= *(_BYTE *)(((unsigned __int64)source_info >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)source_info >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&source_info->param + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)source_info + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&source_info->param + 3) >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load_n(source_info, 8LL);
    }
    this->source_info_ = *source_info;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "init",
      89);
    v3 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v18,
           (const char (*)[57])"[SCENE_PLAY] findMpPlayMatchExcelConfig failed, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->play_id_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
};

// Line 102: range 0000000016CFDC5E-0000000016CFDF05
int32_t __cdecl BaseScenePlay::activate(BaseScenePlay *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rcx
  bool v4; // dl
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play.cpp",
    "activate",
    103);
  v1 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v6,
         (const char (*)[40])"[SCENE_PLAY] activate scene play, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->phase_);
  }
  if ( this->phase_ )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "activate",
      106);
    v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v6,
           (const char (*)[40])"[SCENE_PLAY] cur phase invalid, phase: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->phase_);
    }
    val = this->phase_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    v4 = *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000);
    if ( v4 )
      __asan_report_store4(&this->phase_, (((_BYTE)this + 44) & 7u) + 3, v4);
    this->phase_ = Activated;
    if ( BaseScenePlay::loadActivateGroups(this) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play.cpp",
        "activate",
        113);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v6,
        (const char (*)[39])"[SCENE_PLAY] loadActivateGroups failed");
      common::milog::MiLogStream::~MiLogStream(&v6);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 121: range 0000000016CFDF06-0000000016CFE1BA
int32_t __cdecl BaseScenePlay::open(BaseScenePlay *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rcx
  bool v4; // dl
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play.cpp",
    "open",
    122);
  v1 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v6,
         (const char (*)[36])"[SCENE_PLAY] open scene play, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->phase_);
  }
  if ( this->phase_ == Activated )
  {
    v4 = *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000);
    if ( v4 )
      __asan_report_store4(&this->phase_, (((_BYTE)this + 44) & 7u) + 3, v4);
    this->phase_ = Open;
    if ( BaseScenePlay::loadOpenGroups(this) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play.cpp",
        "open",
        132);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v6,
        (const char (*)[35])"[SCENE_PLAY] loadOpenGroups failed");
      common::milog::MiLogStream::~MiLogStream(&v6);
      return -1;
    }
    else
    {
      BaseScenePlay::notifyScenePlayOpenEvent(this);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "open",
      125);
    v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v6,
           (const char (*)[40])"[SCENE_PLAY] cur phase invalid, phase: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->phase_);
    }
    val = this->phase_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 143: range 0000000016CFE1BC-0000000016CFE4B8
int32_t __cdecl BaseScenePlay::close(BaseScenePlay *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rbx
  BaseScenePlayBattle *v4; // rax
  bool v5; // dl
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play.cpp",
    "close",
    144);
  v1 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v7,
         (const char (*)[37])"[SCENE_PLAY] close scene play, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->phase_);
  }
  if ( this->phase_ == Closed )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/base_scene_play.cpp",
      "close",
      147);
    v2 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v7,
           (const char (*)[46])"[SCENE_PLAY] scene play already closed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    if ( std::operator!=<BaseScenePlayBattle>(0LL, &this->battle_ptr_) )
    {
      v4 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->battle_ptr_);
      BaseScenePlayBattle::interruptBattle(v4);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->phase_);
    }
    if ( this->phase_ == Activated )
    {
      BaseScenePlay::unloadActivateGroups(this);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->phase_);
      }
      if ( this->phase_ == Open )
      {
        BaseScenePlay::unloadActivateGroups(this);
        BaseScenePlay::unloadOpenGroups(this);
      }
    }
    v5 = *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000);
    if ( v5 )
      __asan_report_store4(&this->phase_, (((_BYTE)this + 44) & 7u) + 3, v5);
    this->phase_ = Closed;
    return 0;
  }
};

// Line 175: range 0000000016CFE4BA-0000000016CFE8F1
int32_t __cdecl BaseScenePlay::enableBattle(BaseScenePlay *const this, ScenePlayBattleType type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  BaseScenePlayBattle *v10; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<BaseScenePlayBattle> __r; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 world_scene_ptr:182";
  *(_QWORD *)(v2 + 16) = BaseScenePlay::enableBattle;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->phase_);
  }
  if ( this->phase_ == Open )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v2 + 32));
    if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play.cpp",
        "enableBattle",
        185);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v14,
        (const char (*)[37])"[SCENE_PLAY] world_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = -1;
    }
    else if ( std::operator!=<BaseScenePlayBattle>(0LL, &this->battle_ptr_)
           && (v7 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->battle_ptr_),
               BaseScenePlayBattle::getState(v7)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play.cpp",
        "enableBattle",
        191);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v14,
        (const char (*)[35])"[SCENE_PLAY] battle already enable");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::tools::perf::make_shared<BaseScenePlayBattle,PlayerWorldScene &,BaseScenePlay &>(
        (PlayerWorldScene *)&__r,
        (BaseScenePlay *)v9,
        (PlayerWorldScene *)this,
        (BaseScenePlay *)v9);
      std::shared_ptr<BaseScenePlayBattle>::operator=(&this->battle_ptr_, &__r);
      std::shared_ptr<BaseScenePlayBattle>::~shared_ptr(&__r);
      v10 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->battle_ptr_);
      v6 = BaseScenePlayBattle::onBattleInit(v10, type);
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "enableBattle",
      178);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v14,
           (const char (*)[40])"[SCENE_PLAY] cur phase invalid, phase: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->phase_);
    }
    val = this->phase_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  result = v6;
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

// Line 201: range 0000000016CFE8F2-0000000016CFE9C8
int32_t __cdecl BaseScenePlay::stopBattle(BaseScenePlay *const this, bool is_win)
{
  BaseScenePlayBattle *v3; // rax
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<BaseScenePlayBattle>(0LL, &this->battle_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "stopBattle",
      204);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v4,
      (const char (*)[33])"[SCENE_PLAY] battle_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->battle_ptr_);
    return BaseScenePlayBattle::onBattleStop(v3, (ScenePlayBattleStopReason)is_win);
  }
};

// Line 212: range 0000000016CFE9CA-0000000016CFEC91
int32_t __cdecl BaseScenePlay::loadActivateGroups(BaseScenePlay *const this)
{
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( entry_config_ptr )
  {
    if ( std::vector<unsigned int>::empty(&entry_config_ptr->activate_group_list) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play.cpp",
        "loadActivateGroups",
        222);
      v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v8,
             (const char (*)[50])"[SCENE_PLAY] activate groups is empty, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v8);
      return 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->revise_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->revise_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config_ptr->revise_id);
      }
      if ( BaseScenePlay::loadDynamicGroups(this, &entry_config_ptr->activate_group_list, entry_config_ptr->revise_id) )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play.cpp",
          "loadActivateGroups",
          228);
        v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v8,
               (const char (*)[50])"[SCENE_PLAY] loadDynamicGroups failed, entry_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->entry_id_);
        common::milog::MiLogStream::~MiLogStream(&v8);
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
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "loadActivateGroups",
      216);
    v2 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v8,
           (const char (*)[59])"[SCENE_PLAY] findMpPlayGroupExcelConfig failed, entry_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 236: range 0000000016CFEC92-0000000016CFEF5E
int32_t __cdecl BaseScenePlay::loadOpenGroups(BaseScenePlay *const this)
{
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( entry_config_ptr )
  {
    if ( std::vector<unsigned int>::empty(&entry_config_ptr->group_list) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play.cpp",
        "loadOpenGroups",
        246);
      v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v8,
             (const char (*)[46])"[SCENE_PLAY] open groups is empty, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v8);
      return 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->revise_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->revise_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config_ptr->revise_id);
      }
      if ( BaseScenePlay::loadDynamicGroups(this, &entry_config_ptr->group_list, entry_config_ptr->revise_id) )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play.cpp",
          "loadOpenGroups",
          252);
        v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v8,
               (const char (*)[50])"[SCENE_PLAY] loadDynamicGroups failed, entry_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->entry_id_);
        common::milog::MiLogStream::~MiLogStream(&v8);
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
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "loadOpenGroups",
      240);
    v2 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v8,
           (const char (*)[59])"[SCENE_PLAY] findMpPlayGroupExcelConfig failed, entry_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 260: range 0000000016CFEF60-0000000016CFF2BB
__int64 __fastcall BaseScenePlay::loadDynamicGroups(
        BaseScenePlay *const this,
        const std::vector<unsigned int> *group_vec,
        uint32_t revise_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Scene *v13; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v15; // rdx
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 revise_id:259 64 16 13 scene_ptr:261";
  *(_QWORD *)(v3 + 16) = BaseScenePlay::loadDynamicGroups;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = revise_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "loadDynamicGroups",
      264);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v19,
      (const char (*)[38])"[SCENE_PLAY] getMainWorldScene failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/base_scene_play.cpp",
      "loadDynamicGroups",
      268);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v19,
           (const char (*)[37])"[SCENE_PLAY] loadDynamicGroups uid: ");
    v8 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    val = Scene::getOwnerUid((const Scene *const)v8);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" group_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, group_vec);
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])", revise_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v13);
    if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(BlockGroupComp);
    v15 = *(_QWORD *)BlockGroupComp + 96LL;
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 96LL);
    (*(void (__fastcall **)(unsigned __int64, const std::vector<unsigned int> *, _QWORD, _QWORD))v15)(
      BlockGroupComp,
      group_vec,
      0LL,
      *(unsigned int *)(v3 + 48));
    v6 = 0;
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 64));
  result = v6;
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
  return result;
};

// Line 274: range 0000000016CFF2BC-0000000016CFF6FA
int32_t __cdecl BaseScenePlay::unloadActivateGroups(BaseScenePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  Scene *v8; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v10; // rdx
  int32_t result; // eax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:288";
  *(_QWORD *)(v1 + 16) = BaseScenePlay::unloadActivateGroups;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  if ( entry_config_ptr )
  {
    if ( std::vector<unsigned int>::empty(&entry_config_ptr->activate_group_list) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play.cpp",
        "unloadActivateGroups",
        284);
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v13,
             (const char (*)[50])"[SCENE_PLAY] activate groups is empty, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 32));
      if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play.cpp",
          "unloadActivateGroups",
          291);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v13,
          (const char (*)[38])"[SCENE_PLAY] getMainWorldScene failed");
        common::milog::MiLogStream::~MiLogStream(&v13);
        v6 = -1;
      }
      else
      {
        v8 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v8);
        if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8(BlockGroupComp);
        v10 = *(_QWORD *)BlockGroupComp + 104LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
        (*(void (__fastcall **)(unsigned __int64, std::vector<unsigned int> *, __int64))v10)(
          BlockGroupComp,
          &entry_config_ptr->activate_group_list,
          1LL);
        v6 = 0;
      }
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "unloadActivateGroups",
      278);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v13,
           (const char (*)[59])"[SCENE_PLAY] findMpPlayGroupExcelConfig failed, entry_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  result = v6;
  if ( v14 == (char *)v1 )
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

// Line 300: range 0000000016CFF6FC-0000000016CFFB3F
int32_t __cdecl BaseScenePlay::unloadOpenGroups(BaseScenePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  Scene *v8; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v10; // rdx
  int32_t result; // eax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:314";
  *(_QWORD *)(v1 + 16) = BaseScenePlay::unloadOpenGroups;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  if ( entry_config_ptr )
  {
    if ( std::vector<unsigned int>::empty(&entry_config_ptr->group_list) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play.cpp",
        "unloadOpenGroups",
        310);
      v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v13,
             (const char (*)[46])"[SCENE_PLAY] open groups is empty, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 32));
      if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play.cpp",
          "unloadOpenGroups",
          317);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v13,
          (const char (*)[38])"[SCENE_PLAY] getMainWorldScene failed");
        common::milog::MiLogStream::~MiLogStream(&v13);
        v6 = -1;
      }
      else
      {
        v8 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v8);
        if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8(BlockGroupComp);
        v10 = *(_QWORD *)BlockGroupComp + 104LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
        (*(void (__fastcall **)(unsigned __int64, std::vector<unsigned int> *, __int64))v10)(
          BlockGroupComp,
          &entry_config_ptr->group_list,
          1LL);
        v6 = 0;
      }
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "unloadOpenGroups",
      304);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v13,
           (const char (*)[59])"[SCENE_PLAY] findMpPlayGroupExcelConfig failed, entry_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  result = v6;
  if ( v14 == (char *)v1 )
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

// Line 326: range 0000000016CFFB40-0000000016D0023D
void __cdecl BaseScenePlay::notifyScenePlayOpenEvent(BaseScenePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  __int64 v6; // rsi
  uint32_t play_type; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  char v9; // cl
  uint32_t play_id; // r14d
  __int64 v11; // rax
  char v12; // dl
  bool v13; // dl
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  char v16; // cl
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v17; // rax
  uint32_t v18; // eax
  Group *v19; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+28h] [rbp-E8h]
  const std::vector<unsigned int> *group_vec; // [rsp+30h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 13 scene_ptr:327 64 16 11 evt_ptr:342 96 16 13 group_ptr:356";
  *(_QWORD *)(v1 + 16) = BaseScenePlay::notifyScenePlayOpenEvent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "notifyScenePlayOpenEvent",
      330);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v25,
      (const char (*)[38])"[SCENE_PLAY] getMainWorldScene failed");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 96));
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
    if ( entry_config_ptr )
    {
      EventUtil::createEvent((data::EventType)(v1 + 64));
      if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play.cpp",
          "notifyScenePlayOpenEvent",
          345);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v25,
          (const char (*)[29])"[SCENE_PLAY] evt_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        v6 = (((_BYTE)this + 36) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->play_type_);
        }
        play_type = this->play_type_;
        v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v9 = *(_BYTE *)(((unsigned __int64)&v8->param1 >> 3) + 0x7FFF8000);
        if ( v9 != 0 && (char)((((_BYTE)v8 + 44) & 7) + 3) >= v9 )
        {
          LOBYTE(v6) = v9 != 0;
          __asan_report_store4(&v8->param1, v6, (_BYTE)v8);
        }
        v8->param1 = play_type;
        if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->play_id_);
        }
        play_id = this->play_id_;
        v11 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v12 = *(_BYTE *)(((unsigned __int64)(v11 + 48) >> 3) + 0x7FFF8000);
        LOBYTE(v6) = v12 != 0;
        v13 = v12 != 0 && v12 <= 3;
        if ( v13 )
          v11 = __asan_report_store4(v11 + 48, v6, v13);
        *(_DWORD *)(v11 + 48) = play_id;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v16 = *(_BYTE *)(((unsigned __int64)&v15->uid >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)((((_BYTE)v15 + 60) & 7) + 3) >= v16 )
        {
          LOBYTE(v6) = v16 != 0;
          __asan_report_store4(&v15->uid, v6, (_BYTE)v15);
        }
        v15->uid = Uid;
        group_vec = &entry_config_ptr->activate_group_list;
        __for_range = &entry_config_ptr->activate_group_list;
        __for_begin._M_current = std::vector<unsigned int>::begin(&entry_config_ptr->activate_group_list)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&entry_config_ptr->activate_group_list)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v17 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          v18 = (unsigned int)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          Scene::findGroup((Scene *const)(v1 + 96), v18);
          if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 96)) )
          {
            v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            Group::handleEvent(v19, (EventPtr *)(v1 + 64));
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 96));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play.cpp",
        "notifyScenePlayOpenEvent",
        337);
      v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v25,
             (const char (*)[59])"[SCENE_PLAY] findMpPlayGroupExcelConfig failed, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
  if ( v26 == (char *)v1 )
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

// Line 365: range 0000000016D0023E-0000000016D0083A
bool __cdecl BaseScenePlay::isRewardRemained(const BaseScenePlay *const this, uint32_t player_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  uint32_t v8; // esi
  uint32_t v9; // ecx
  std::__shared_ptr_access<GadgetGeneralRewardComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool result; // al
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 13 scene_ptr:378 64 16 13 group_ptr:385 96 16 14 gadget_ptr:391 128 16 19 reward_comp_ptr:397";
  *(_QWORD *)(v2 + 16) = BaseScenePlay::isRewardRemained;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->phase_);
  }
  if ( this->phase_ == Open )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    if ( entry_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v2 + 32));
      if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play.cpp",
          "isRewardRemained",
          381);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v14,
          (const char (*)[38])"[SCENE_PLAY] getMainWorldScene failed");
        common::milog::MiLogStream::~MiLogStream(&v14);
        v5 = 0;
      }
      else
      {
        v8 = (unsigned int)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&entry_config_ptr->reward_group_id);
        }
        Scene::findGroup((Scene *const)(v2 + 64), v8);
        if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 64)) )
        {
          v5 = 0;
        }
        else
        {
          v9 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->general_reward_config_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->general_reward_config_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&entry_config_ptr->general_reward_config_id);
          }
          Group::findEntityByConfigId<Gadget>((Group *const)(v2 + 96), v9);
          if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 96)) )
          {
            v5 = 0;
          }
          else
          {
            std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetGeneralRewardComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 128));
            if ( std::operator==<GadgetGeneralRewardComp>(
                   0LL,
                   (const std::shared_ptr<GadgetGeneralRewardComp> *)(v2 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v14,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/scene_play/base_scene_play.cpp",
                "isRewardRemained",
                400);
              common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v14,
                (const char (*)[49])"[SCENE_PLAY] find GadgetGeneralRewardComp failed");
              common::milog::MiLogStream::~MiLogStream(&v14);
              v5 = 0;
            }
            else
            {
              v10 = std::__shared_ptr_access<GadgetGeneralRewardComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetGeneralRewardComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              v5 = GadgetGeneralRewardComp::checkRewardIsRemained(v10, player_uid) == 0;
            }
            std::shared_ptr<GadgetGeneralRewardComp>::~shared_ptr((std::shared_ptr<GadgetGeneralRewardComp> *const)(v2 + 128));
          }
          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 96));
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
      }
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play.cpp",
        "isRewardRemained",
        374);
      v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v14,
             (const char (*)[59])"[SCENE_PLAY] findMpPlayGroupExcelConfig failed, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v5 = 0;
    }
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 408: range 0000000016D0083C-0000000016D00987
void __cdecl BaseScenePlay::fillScenePlayInfo(const BaseScenePlay *const this, proto::ScenePlayInfo *play_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  proto::ScenePlayInfo::set_play_id(play_info, this->play_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->play_type_);
  }
  proto::ScenePlayInfo::set_play_type(play_info, this->play_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  proto::ScenePlayInfo::set_entry_id(play_info, this->entry_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->phase_);
  }
  proto::ScenePlayInfo::set_is_open(play_info, this->phase_ == Open);
};

// Line 416: range 0000000016D00988-0000000016D00BB9
data::ItemLimitType __cdecl BaseScenePlay::getGeneralRewardItemLimitType(const BaseScenePlay *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  data::ItemLimitType DropItemLimitType; // ebx
  common::milog::MiLogStream *v4; // rcx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  uint32_t schedule_id; // [rsp+18h] [rbp-48h]
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->source_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->source_info_);
  }
  if ( this->source_info_.type == Activity )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->source_info_.param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_info_.param >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->source_info_.param);
    }
    schedule_id = this->source_info_.param;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
    activity_type = NewActivityExcelConfigMgr::getActivityTypeByScheduleId(
                      &v1->design_config.txt_config_mgr.new_activity_config_mgr,
                      schedule_id);
    std::shared_ptr<Config>::~shared_ptr(&v9);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
    DropItemLimitType = NewActivityExcelConfigMgr::getDropItemLimitType(
                          &v2->design_config.txt_config_mgr.new_activity_config_mgr,
                          activity_type);
    std::shared_ptr<Config>::~shared_ptr(&v9);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "getGeneralRewardItemLimitType",
      427);
    v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v10,
           (const char (*)[35])"[SCENE_PLAY] invalid source type: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->source_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->source_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->source_info_);
    }
    val = this->source_info_.type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 0;
  }
  return DropItemLimitType;
};

// Line 436: range 0000000016D00BBA-0000000016D00D3B
bool __cdecl BaseScenePlay::isDisabled(const BaseScenePlay *const this)
{
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( entry_config_ptr )
  {
    if ( *(char *)(((unsigned __int64)&entry_config_ptr->is_disabled >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&entry_config_ptr->is_disabled);
    return entry_config_ptr->is_disabled;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play.cpp",
      "isDisabled",
      440);
    v2 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v6,
           (const char (*)[59])"[SCENE_PLAY] findMpPlayGroupExcelConfig failed, entry_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 1;
  }
};

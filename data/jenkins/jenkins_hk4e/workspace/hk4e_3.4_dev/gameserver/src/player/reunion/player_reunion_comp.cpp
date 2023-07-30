// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/reunion/player_reunion_comp.cpp

// Line 21: range 0000000016CE6B56-0000000016CE6E31
int32_t __cdecl PlayerReunionComp::init(PlayerReunionComp *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  int32_t result; // eax
  std::weak_ptr<PlayerReunionComp> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<PlayerReunionComp> v7; // [rsp+20h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+30h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 11 this_ptr:22 64 16 11 this_wtr:28";
  *(_QWORD *)(p_pending_que + 16) = PlayerReunionComp::init;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerReunionComp>((PlayerReunionComp *)(p_pending_que + 32));
  if ( std::operator==<PlayerReunionComp>(0LL, (const std::shared_ptr<PlayerReunionComp> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "init",
      25);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[49])"dynamic_pointer_cast to PlayerReunionComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
    v4 = -1;
  }
  else
  {
    std::weak_ptr<PlayerReunionComp>::weak_ptr<PlayerReunionComp,void>(
      (std::weak_ptr<PlayerReunionComp> *const)(p_pending_que + 64),
      (const std::shared_ptr<PlayerReunionComp> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    p_this_wtr = (std::weak_ptr<PlayerReunionComp> *)Player::getEventComp(this->player_);
    std::weak_ptr<PlayerReunionComp>::weak_ptr(&v7, (const std::weak_ptr<PlayerReunionComp> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<PlayerReunionComp,WatcherProgressUpdateEvent>(
      &varC0,
      p_this_wtr,
      (void (*)(PlayerReunionComp *, const WatcherProgressUpdateEvent *))&v7);
    std::weak_ptr<Observer>::operator=(&this->watcher_progress_obs_wtr_, (std::weak_ptr<Observer> *)&varC0);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<PlayerReunionComp>::~weak_ptr(&v7);
    v4 = 0;
    std::weak_ptr<PlayerReunionComp>::~weak_ptr((std::weak_ptr<PlayerReunionComp> *const)(p_pending_que + 64));
  }
  std::shared_ptr<PlayerReunionComp>::~shared_ptr((std::shared_ptr<PlayerReunionComp> *const)(p_pending_que + 32));
  result = v4;
  if ( &varC0.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 35: range 0000000016CE6E32-0000000016CE6F1C
int32_t __cdecl PlayerReunionComp::fromBin(PlayerReunionComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  uint32_t activate_reunion_time; // edx
  char v3; // al
  const proto::ReunionRecordBin *v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  const proto::PlayerReunionCompBin *comp_bin; // [rsp+18h] [rbp-18h]

  comp_bin = proto::PlayerDataBin::reunion_bin(player_data_bin);
  activate_reunion_time = proto::PlayerReunionCompBin::last_activate_reunion_time(comp_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(player_data_bin) = v3 != 0;
    __asan_report_store4(&this->last_activate_reunion_time_, player_data_bin, activate_reunion_time);
  }
  this->last_activate_reunion_time_ = activate_reunion_time;
  v4 = proto::PlayerReunionCompBin::reunion_record(comp_bin);
  Reunion::fromBin(&this->reunion_, v4);
  LOBYTE(v5) = proto::PlayerReunionCompBin::is_activated_when_close(comp_bin);
  v6 = v5;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_activated_when_close_ >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v4) = v7 != 0;
    __asan_report_store1(&this->is_activated_when_close_, v4, v6);
  }
  this->is_activated_when_close_ = v6;
  return 0;
};

// Line 44: range 0000000016CE6F1E-0000000016CE700A
int32_t __cdecl PlayerReunionComp::toBin(PlayerReunionComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::ReunionRecordBin *v2; // rax
  proto::PlayerReunionCompBin *comp_bin; // [rsp+18h] [rbp-18h]

  comp_bin = proto::PlayerDataBin::mutable_reunion_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_activate_reunion_time_);
  }
  proto::PlayerReunionCompBin::set_last_activate_reunion_time(comp_bin, this->last_activate_reunion_time_);
  v2 = proto::PlayerReunionCompBin::mutable_reunion_record(comp_bin);
  Reunion::toBin(&this->reunion_, v2);
  if ( *(char *)(((unsigned __int64)&this->is_activated_when_close_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_activated_when_close_);
  proto::PlayerReunionCompBin::set_is_activated_when_close(comp_bin, this->is_activated_when_close_);
  return 0;
};

// Line 53: range 0000000016CE700C-0000000016CE71C8
int32_t __cdecl PlayerReunionComp::onLogin(PlayerReunionComp *const this, bool is_new_player)
{
  bool v2; // al
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
  {
    if ( PlayerReunionComp::tryRefreshReunion(this, is_new_player) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/player_reunion_comp.cpp",
        "onLogin",
        59);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v4,
        (const char (*)[35])"[REUNION] tryRefreshReunion failed");
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
    PlayerReunionComp::updateReunionSettleTimer(this);
    v2 = Reunion::isActivated(&this->reunion_) && !Reunion::isFinished(&this->reunion_);
    if ( v2 && Reunion::onLogin(&this->reunion_) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/player_reunion_comp.cpp",
        "onLogin",
        66);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v4,
        (const char (*)[25])"[REUNION] onLogin failed");
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
  }
  else
  {
    PlayerReunionComp::sendReunionActivateNotify(this);
  }
  return 0;
};

// Line 79: range 0000000016CE71CA-0000000016CE7361
void __cdecl PlayerReunionComp::onDailyRefresh(PlayerReunionComp *const this)
{
  bool v1; // al
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  v1 = Reunion::isFinished(&this->reunion_) && Reunion::isActivated(&this->reunion_);
  if ( v1 && PlayerReunionComp::internalDeactivateReunion(this) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "onDailyRefresh",
      85);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v3,
      (const char (*)[37])"[REUNION] reunion_ deactivate failed");
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
  if ( Reunion::isActivated(&this->reunion_) && !Reunion::isFinished(&this->reunion_) )
  {
    if ( Reunion::onDailyRefresh(&this->reunion_) )
    {
      common::milog::MiLogStream::create(
        &v3,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/player_reunion_comp.cpp",
        "onDailyRefresh",
        92);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v3,
        (const char (*)[25])"[REUNION] onLogin failed");
      common::milog::MiLogStream::~MiLogStream(&v3);
    }
  }
};

// Line 98: range 0000000016CE7362-0000000016CE74D2
int32_t __cdecl PlayerReunionComp::tryRefreshReunion(PlayerReunionComp *const this, bool is_new_player)
{
  bool v2; // al
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  v2 = Reunion::isFinished(&this->reunion_) && Reunion::isActivated(&this->reunion_);
  if ( v2 && PlayerReunionComp::internalDeactivateReunion(this) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "tryRefreshReunion",
      103);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v4,
      (const char (*)[37])"[REUNION] reunion_ deactivate failed");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  if ( !PlayerReunionComp::isCanActivateReunion(this, is_new_player)
    || !PlayerReunionComp::internalActivateReunion(this) )
  {
    return 0;
  }
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/reunion/player_reunion_comp.cpp",
    "tryRefreshReunion",
    110);
  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
    &v4,
    (const char (*)[41])"[REUNION] internalActivateReunion failed");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return -1;
};

// Line 118: range 0000000016CE74D4-0000000016CE7D73
bool __cdecl PlayerReunionComp::isCanActivateReunion(PlayerReunionComp *const this, bool is_new_player)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerBasicComp *v12; // rax
  uint32_t LastLogoutTime; // eax
  time_t Now; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t v16; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  time_t v18; // rdx
  common::milog::MiLogStream *v19; // rax
  uint32_t v20; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  __int64 v22; // rsi
  common::milog::MiLogStream *v23; // rax
  bool is_closed_with_mark; // [rsp+13h] [rbp-5Dh]
  unsigned int val; // [rsp+14h] [rbp-5Ch] BYREF
  uint32_t time_offset; // [rsp+18h] [rbp-58h]
  uint32_t last_logout_day; // [rsp+1Ch] [rbp-54h]
  uint32_t cur_login_day; // [rsp+20h] [rbp-50h]
  uint32_t last_activate_day; // [rsp+24h] [rbp-4Ch]
  const data::ReunionScheduleExcelConfig *schedule_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v31; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-30h] BYREF

  if ( is_new_player )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "isCanActivateReunion",
      121);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v32,
      (const char (*)[29])"[REUNION] is_new_player true");
    common::milog::MiLogStream::~MiLogStream(&v32);
    return 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
    schedule_config_ptr = ReunionExcelConfigMgr::findCurVersionReunionScheduleConfig(&v3->design_config.txt_config_mgr.reunion_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v31);
    if ( schedule_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      BasicComp = Player::getBasicComp(this->player_);
      Level = PlayerBasicComp::getLevel(BasicComp);
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->activate_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->activate_level >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config_ptr->activate_level);
      }
      if ( Level >= schedule_config_ptr->activate_level )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v31);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
        is_closed_with_mark = FeatureSwitchMgr::isReuionClosedWithMark(&v9->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v31);
        if ( is_closed_with_mark )
          goto LABEL_18;
        if ( *(char *)(((unsigned __int64)&this->is_activated_when_close_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_activated_when_close_);
        if ( this->is_activated_when_close_ )
        {
          this->is_activated_when_close_ = 0;
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/reunion/player_reunion_comp.cpp",
            "isCanActivateReunion",
            144);
          v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v32,
                  (const char (*)[52])"[REUNION] open onced activated in when close @time:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v10,
            &this->last_activate_reunion_time_);
          common::milog::MiLogStream::~MiLogStream(&v32);
          return 1;
        }
        else
        {
LABEL_18:
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v31);
          v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
          time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v11->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v31);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v12 = Player::getBasicComp(this->player_);
          LastLogoutTime = PlayerBasicComp::getLastLogoutTime(v12);
          last_logout_day = common::tools::TimeUtils::getTimeDay(LastLogoutTime, time_offset);
          Now = common::tools::TimeUtils::getNow();
          cur_login_day = common::tools::TimeUtils::getTimeDay(Now, time_offset);
          if ( cur_login_day >= last_logout_day )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/reunion/player_reunion_comp.cpp",
              "isCanActivateReunion",
              157);
            v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v32,
                    (const char (*)[25])"[REUNION] login day gap:");
            val = cur_login_day - last_logout_day;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
            common::milog::MiLogStream::~MiLogStream(&v32);
            v16 = cur_login_day - last_logout_day;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v31);
            v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
            LOBYTE(v16) = v16 < ConstValueExcelConfigMgr::getReunionPlayerLostTime(&v17->design_config.txt_config_mgr.const_value_config_mgr);
            std::shared_ptr<Config>::~shared_ptr(&v31);
            if ( (_BYTE)v16 )
            {
              return 0;
            }
            else
            {
              v18 = time_offset;
              if ( *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->last_activate_reunion_time_);
              }
              last_activate_day = common::tools::TimeUtils::getTimeDay(this->last_activate_reunion_time_, v18);
              if ( last_activate_day <= cur_login_day )
              {
                common::milog::MiLogStream::create(
                  &v32,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/reunion/player_reunion_comp.cpp",
                  "isCanActivateReunion",
                  170);
                v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v32,
                        (const char (*)[36])"[REUNION] activate reunion day gap:");
                val = cur_login_day - last_activate_day;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
                common::milog::MiLogStream::~MiLogStream(&v32);
                v20 = cur_login_day - last_activate_day;
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v31);
                v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
                LOBYTE(v20) = v20 < ConstValueExcelConfigMgr::getReunionCDTime(&v21->design_config.txt_config_mgr.const_value_config_mgr);
                std::shared_ptr<Config>::~shared_ptr(&v31);
                if ( (_BYTE)v20 )
                {
                  return 0;
                }
                else if ( is_closed_with_mark )
                {
                  if ( *(char *)(((unsigned __int64)&this->is_activated_when_close_ >> 3) + 0x7FFF8000) < 0 )
                    __asan_report_load1(&this->is_activated_when_close_);
                  if ( !this->is_activated_when_close_ )
                  {
                    this->is_activated_when_close_ = 1;
                    v22 = (unsigned int)common::tools::TimeUtils::getNow();
                    if ( *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(&this->last_activate_reunion_time_, v22, (_BYTE)this - 120);
                    }
                    this->last_activate_reunion_time_ = v22;
                    common::milog::MiLogStream::create(
                      &v32,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/reunion/player_reunion_comp.cpp",
                      "isCanActivateReunion",
                      182);
                    v23 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                            &v32,
                            (const char (*)[34])"[REUNION] closed with mark @time:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      &this->last_activate_reunion_time_);
                    common::milog::MiLogStream::~MiLogStream(&v32);
                  }
                  return 0;
                }
                else
                {
                  return 1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v32,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/reunion/player_reunion_comp.cpp",
                  "isCanActivateReunion",
                  166);
                common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v32,
                  (const char (*)[50])"[REUNION] last_activate_day cannot early than now");
                common::milog::MiLogStream::~MiLogStream(&v32);
                return 0;
              }
            }
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
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/reunion/player_reunion_comp.cpp",
          "isCanActivateReunion",
          134);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v32,
               (const char (*)[39])"[REUNION] player under required level:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v6,
               &schedule_config_ptr->activate_level);
        v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v32);
        return 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/player_reunion_comp.cpp",
        "isCanActivateReunion",
        128);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        &v32,
        (const char (*)[57])"[REUNION] current version has no reunion schedule config");
      common::milog::MiLogStream::~MiLogStream(&v32);
      return 0;
    }
  }
};

// Line 191: range 0000000016CE7D74-0000000016CE8059
int32_t __cdecl PlayerReunionComp::internalActivateReunion(PlayerReunionComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  Reunion *p_reunion; // rcx
  __int64 Now; // rsi
  const data::ReunionScheduleExcelConfig *schedule_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( Reunion::isActivated(&this->reunion_) || !Reunion::isFinished(&this->reunion_) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "internalActivateReunion",
      194);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v8,
      (const char (*)[32])"[REUNION] reunion has activated");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
    schedule_config_ptr = ReunionExcelConfigMgr::findCurVersionReunionScheduleConfig(&v3->design_config.txt_config_mgr.reunion_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v7);
    if ( schedule_config_ptr )
    {
      Reunion::clearAll(&this->reunion_);
      p_reunion = &this->reunion_;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_config_ptr->id);
      }
      if ( Reunion::activate(p_reunion, schedule_config_ptr->id) )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reunion/player_reunion_comp.cpp",
          "internalActivateReunion",
          209);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v8,
          (const char (*)[34])"[REUNION] reunion activate failed");
        common::milog::MiLogStream::~MiLogStream(&v8);
        Reunion::clearAll(&this->reunion_);
        return -1;
      }
      else
      {
        Now = (unsigned int)common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->last_activate_reunion_time_, Now, (_BYTE)this - 120);
        }
        this->last_activate_reunion_time_ = Now;
        PlayerReunionComp::sendReunionActivateNotify(this);
        return 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/player_reunion_comp.cpp",
        "internalActivateReunion",
        201);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        &v8,
        (const char (*)[57])"[REUNION] current version has no reunion schedule config");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
  }
};

// Line 220: range 0000000016CE805A-0000000016CE825B
int32_t __cdecl PlayerReunionComp::internalDeactivateReunion(PlayerReunionComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:226";
  *(_QWORD *)(v1 + 16) = PlayerReunionComp::internalDeactivateReunion;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( Reunion::deactivate(&this->reunion_) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "internalDeactivateReunion",
      223);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v6,
      (const char (*)[37])"[REUNION] reunion deactivates failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    v4 = -1;
  }
  else
  {
    proto::ReunionSettleNotify::ReunionSettleNotify((proto::ReunionSettleNotify *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
    v4 = 0;
    proto::ReunionSettleNotify::~ReunionSettleNotify((proto::ReunionSettleNotify *const)(v1 + 32));
  }
  result = v4;
  if ( v7 == (char *)v1 )
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

// Line 232: range 0000000016CE825C-0000000016CE8402
void __cdecl PlayerReunionComp::updateReunionSettleTimer(PlayerReunionComp *const this)
{
  uint32_t finish_time; // [rsp+18h] [rbp-38h]
  uint32_t now; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( Reunion::isActivated(&this->reunion_) && !Reunion::isFinished(&this->reunion_) )
  {
    finish_time = Reunion::getFinishTime(&this->reunion_);
    now = common::tools::TimeUtils::getNow();
    if ( finish_time > common::tools::TimeUtils::getNow() )
    {
      common::tools::MiTimer::cancel(&this->runion_settle_timer_);
      if ( PlayerUnixTimer::startS(
             &this->runion_settle_timer_,
             finish_time - now,
             0,
             "./src/player/reunion/player_reunion_comp.cpp",
             "updateReunionSettleTimer",
             247) )
      {
        common::milog::MiLogStream::create(
          &v4,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reunion/player_reunion_comp.cpp",
          "updateReunionSettleTimer",
          249);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v4,
          (const char (*)[29])"[REUNION] timer start failed");
        common::milog::MiLogStream::~MiLogStream(&v4);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/player_reunion_comp.cpp",
        "updateReunionSettleTimer",
        242);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v4,
        (const char (*)[48])"[REUNION] finish_time should not early than now");
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
  }
};

// Line 255: range 0000000016CE8404-0000000016CE8499
void __cdecl PlayerReunionComp::onReunionSettleTimer(PlayerReunionComp *const this, uint64_t now_ms)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( PlayerReunionComp::internalDeactivateReunion(this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "onReunionSettleTimer",
      258);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v2,
      (const char (*)[43])"[REUNION] internalDeactivateReunion failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
};

// Line 264: range 0000000016CE849A-0000000016CE8609
bool __cdecl PlayerReunionComp::isReunionPrivilegeValid(
        PlayerReunionComp *const this,
        uint32_t privilege_type,
        uint32_t sub_type)
{
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( !Reunion::isActivated(&this->reunion_) || Reunion::isFinished(&this->reunion_) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "isReunionPrivilegeValid",
      267);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v6,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
  else if ( Reunion::getCurDayPrivilegeRemainNum(&this->reunion_) )
  {
    return Reunion::isPrivilegeMatch(&this->reunion_, privilege_type, sub_type);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "isReunionPrivilegeValid",
      273);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v6,
      (const char (*)[43])"[REUNION] getCurDayPrivilegeRemainNum is 0");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 281: range 0000000016CE860A-0000000016CE866F
int32_t __cdecl PlayerReunionComp::addPrivilegeCount(PlayerReunionComp *const this)
{
  if ( !Reunion::isActivated(&this->reunion_) || Reunion::isFinished(&this->reunion_) )
    return -1;
  else
    return Reunion::addPrivilegeCount(&this->reunion_);
};

// Line 291: range 0000000016CE8670-0000000016CE86D7
int32_t __cdecl PlayerReunionComp::clearAllByGm(PlayerReunionComp *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_activate_reunion_time_, v1, (_BYTE)this - 120);
  }
  this->last_activate_reunion_time_ = 0;
  Reunion::clearAll(&this->reunion_);
  return 0;
};

// Line 298: range 0000000016CE86D8-0000000016CE8745
void __cdecl PlayerReunionComp::onWatcherProgressUpdate(
        PlayerReunionComp *const this,
        const WatcherProgressUpdateEvent *event)
{
  if ( Reunion::isActivated(&this->reunion_) && !Reunion::isFinished(&this->reunion_) )
    Reunion::onWatcherProgressUpdate(&this->reunion_, event);
};

// Line 307: range 0000000016CE8746-0000000016CE88FE
int32_t __cdecl PlayerReunionComp::forceTakeReunion(PlayerReunionComp *const this)
{
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( Reunion::isActivated(&this->reunion_) || !Reunion::isFinished(&this->reunion_) )
    PlayerReunionComp::internalDeactivateReunion(this);
  if ( PlayerReunionComp::internalActivateReunion(this) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/player_reunion_comp.cpp",
      "forceTakeReunion",
      315);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v4,
      (const char (*)[41])"[REUNION] internalActivateReunion failed");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    PlayerReunionComp::updateReunionSettleTimer(this);
    if ( Reunion::isActivated(&this->reunion_) && !Reunion::isFinished(&this->reunion_) )
    {
      if ( Reunion::onLogin(&this->reunion_) )
      {
        common::milog::MiLogStream::create(
          &v4,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reunion/player_reunion_comp.cpp",
          "forceTakeReunion",
          324);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v4,
          (const char (*)[25])"[REUNION] onLogin failed");
        common::milog::MiLogStream::~MiLogStream(&v4);
      }
    }
    return 0;
  }
};

// Line 332: range 0000000016CE8900-0000000016CE8A40
std::string *__cdecl PlayerReunionComp::getActivatedReunionVersion[abi:cxx11](
        std::string *retstr,
        PlayerReunionComp *const this)
{
  Reunion *p_reunion; // rsi

  if ( !(_BYTE)`guard variable for'PlayerReunionComp::getActivatedReunionVersion[abi:cxx11](void)::empty_str
    && __cxa_guard_acquire(&`guard variable for'PlayerReunionComp::getActivatedReunionVersion[abi:cxx11](void)::empty_str) )
  {
    std::string::basic_string(&PlayerReunionComp::getActivatedReunionVersion[abi:cxx11](void)::empty_str);
    __cxa_guard_release(&`guard variable for'PlayerReunionComp::getActivatedReunionVersion[abi:cxx11](void)::empty_str);
    __cxa_atexit(
      (void (__fastcall *)(void *))&std::string::~string,
      &PlayerReunionComp::getActivatedReunionVersion[abi:cxx11](void)::empty_str,
      &_dso_handle);
  }
  if ( !Reunion::isActivated(&this->reunion_) || Reunion::isFinished(&this->reunion_) )
  {
    std::string::basic_string(retstr, &PlayerReunionComp::getActivatedReunionVersion[abi:cxx11](void)::empty_str);
  }
  else
  {
    p_reunion = &this->reunion_;
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      p_reunion = (Reunion *)32;
      __asan_report_store_n(retstr, 32LL);
    }
    Reunion::getGameVersion[abi:cxx11](retstr, p_reunion);
  }
  return retstr;
};

// Line 343: range 0000000016CE8A42-0000000016CE8AA7
uint32_t __cdecl PlayerReunionComp::getCurReunionPrivilgeId(PlayerReunionComp *const this)
{
  if ( !Reunion::isActivated(&this->reunion_) || Reunion::isFinished(&this->reunion_) )
    return 0;
  else
    return Reunion::getPrivilgeId(&this->reunion_);
};

// Line 352: range 0000000016CE8AA8-0000000016CE8C45
void __cdecl PlayerReunionComp::sendReunionActivateNotify(const PlayerReunionComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::ReunionBriefInfo *v4; // rax
  char v5[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:353";
  *(_QWORD *)(v1 + 16) = PlayerReunionComp::sendReunionActivateNotify;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::ReunionActivateNotify::ReunionActivateNotify((proto::ReunionActivateNotify *const)(v1 + 32));
  if ( Reunion::isActivated(&this->reunion_) )
  {
    v4 = proto::ReunionActivateNotify::mutable_reunion_brief_info((proto::ReunionActivateNotify *const)(v1 + 32));
    Reunion::fillBriefInfo(&this->reunion_, v4);
    proto::ReunionActivateNotify::set_is_activate((proto::ReunionActivateNotify *const)(v1 + 32), 1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::ReunionActivateNotify::~ReunionActivateNotify((proto::ReunionActivateNotify *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 363: range 0000000016CE8C46-0000000016CE8CB9
int32_t __cdecl PlayerReunionComp::addMissionScoreByGm(PlayerReunionComp *const this, uint32_t score)
{
  if ( Reunion::isActivated(&this->reunion_) && !Reunion::isFinished(&this->reunion_) )
    Reunion::addScoreByGm(&this->reunion_, score);
  return 0;
};

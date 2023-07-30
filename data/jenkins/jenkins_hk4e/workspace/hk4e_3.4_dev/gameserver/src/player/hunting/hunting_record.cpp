// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/hunting/hunting_record.cpp

// Line 43: range 0000000016C775CC-0000000016C7805B
int32_t __cdecl HuntingRecord::start(HuntingRecord *const this, bool is_by_repair)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  _DWORD *v4; // r15
  int32_t v5; // ebx
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerUnixTimer *v7; // rax
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v9; // r12
  PlayerEventComp *v10; // r12
  PlayerEventComp *v11; // r12
  PlayerEventComp *v12; // r12
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  std::shared_ptr<Player> v19; // [rsp+70h] [rbp-D0h] BYREF
  std::shared_ptr<HuntingRecord> __r; // [rsp+80h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+90h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+B0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 21 hunting_record_wtr:45 64 16 11 this_wtr:58";
  *(_QWORD *)(v2 + 16) = HuntingRecord::start;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  toThisPtr<HuntingRecord>((HuntingRecord *)&__r);
  std::weak_ptr<HuntingRecord>::weak_ptr<HuntingRecord,void>((std::weak_ptr<HuntingRecord> *const)(v2 + 32), &__r);
  std::shared_ptr<HuntingRecord>::~shared_ptr(&__r);
  std::weak_ptr<HuntingRecord>::weak_ptr(
    (std::weak_ptr<HuntingRecord> *const)&__r,
    (const std::weak_ptr<HuntingRecord> *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)(v2 + 64));
  common::tools::perf::make_shared<PlayerUnixTimer,std::shared_ptr<Player>,HuntingRecord::start(bool)::{lambda(unsigned long)#1}>(
    &v19,
    (HuntingRecord::start::<lambda(uint64_t)> *)(v2 + 64),
    (std::shared_ptr<Player> *)&__r,
    (HuntingRecord::start::<lambda(uint64_t)> *)&v19);
  std::shared_ptr<PlayerUnixTimer>::operator=(&this->player_timer_ptr_, (std::shared_ptr<PlayerUnixTimer> *)&v19);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr((std::shared_ptr<PlayerUnixTimer> *const)&v19);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  HuntingRecord::start(bool)::{lambda(unsigned long)#1}::~start((HuntingRecord::start::<lambda(uint64_t)> *const)&__r);
  if ( std::operator==<PlayerUnixTimer>(&this->player_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "start",
      48);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v21,
      (const char (*)[26])"player_timer_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_timer_ptr_);
    common::tools::MiTimer::cancel(v6);
    v7 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_timer_ptr_);
    if ( PlayerUnixTimer::startS(v7, 1u, 1, "./src/player/hunting/hunting_record.cpp", "start", 53) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "start",
        55);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v21,
        (const char (*)[38])"[HUNTING] player_timer_ startS failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
    else
    {
      toThisPtr<HuntingRecord>((HuntingRecord *)&__r);
      std::weak_ptr<HuntingRecord>::weak_ptr<HuntingRecord,void>((std::weak_ptr<HuntingRecord> *const)(v2 + 64), &__r);
      std::shared_ptr<HuntingRecord>::~shared_ptr(&__r);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::weak_ptr<HuntingRecord>::weak_ptr(
        (std::weak_ptr<HuntingRecord> *const)&v19,
        (const std::weak_ptr<HuntingRecord> *)(v2 + 64));
      PlayerEventComp::registerObserver<HuntingRecord,GroupsReplaceEvent>(
        (PlayerEventComp *const)&__r,
        (std::weak_ptr<HuntingRecord> *)EventComp,
        (void (*)(HuntingRecord *, const GroupsReplaceEvent *))&v19);
      std::vector<std::weak_ptr<Observer>>::push_back(
        &this->observer_vec_,
        (std::vector<std::weak_ptr<Observer>>::value_type *)&__r);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
      std::weak_ptr<HuntingRecord>::~weak_ptr((std::weak_ptr<HuntingRecord> *const)&v19);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = Player::getEventComp(this->player_);
      std::weak_ptr<HuntingRecord>::weak_ptr(
        (std::weak_ptr<HuntingRecord> *const)&v19,
        (const std::weak_ptr<HuntingRecord> *)(v2 + 64));
      PlayerEventComp::registerObserver<HuntingRecord,MonsterDieEvent>(
        (PlayerEventComp *const)&__r,
        (std::weak_ptr<HuntingRecord> *)v9,
        (void (*)(HuntingRecord *, const MonsterDieEvent *))&v19);
      std::vector<std::weak_ptr<Observer>>::push_back(
        &this->observer_vec_,
        (std::vector<std::weak_ptr<Observer>>::value_type *)&__r);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
      std::weak_ptr<HuntingRecord>::~weak_ptr((std::weak_ptr<HuntingRecord> *const)&v19);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = Player::getEventComp(this->player_);
      std::weak_ptr<HuntingRecord>::weak_ptr(
        (std::weak_ptr<HuntingRecord> *const)&v19,
        (const std::weak_ptr<HuntingRecord> *)(v2 + 64));
      PlayerEventComp::registerObserver<HuntingRecord,WorldGatherEvent>(
        (PlayerEventComp *const)&__r,
        (std::weak_ptr<HuntingRecord> *)v10,
        (void (*)(HuntingRecord *, const WorldGatherEvent *))&v19);
      std::vector<std::weak_ptr<Observer>>::push_back(
        &this->observer_vec_,
        (std::vector<std::weak_ptr<Observer>>::value_type *)&__r);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
      std::weak_ptr<HuntingRecord>::~weak_ptr((std::weak_ptr<HuntingRecord> *const)&v19);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = Player::getEventComp(this->player_);
      std::weak_ptr<HuntingRecord>::weak_ptr(
        (std::weak_ptr<HuntingRecord> *const)&v19,
        (const std::weak_ptr<HuntingRecord> *)(v2 + 64));
      PlayerEventComp::registerObserver<HuntingRecord,InteractGadgetEvent>(
        (PlayerEventComp *const)&__r,
        (std::weak_ptr<HuntingRecord> *)v11,
        (void (*)(HuntingRecord *, const InteractGadgetEvent *))&v19);
      std::vector<std::weak_ptr<Observer>>::push_back(
        &this->observer_vec_,
        (std::vector<std::weak_ptr<Observer>>::value_type *)&__r);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
      std::weak_ptr<HuntingRecord>::~weak_ptr((std::weak_ptr<HuntingRecord> *const)&v19);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = Player::getEventComp(this->player_);
      std::weak_ptr<HuntingRecord>::weak_ptr(
        (std::weak_ptr<HuntingRecord> *const)&v19,
        (const std::weak_ptr<HuntingRecord> *)(v2 + 64));
      PlayerEventComp::registerObserver<HuntingRecord,ClearGroupMonsterEvent>(
        (PlayerEventComp *const)&__r,
        (std::weak_ptr<HuntingRecord> *)v12,
        (void (*)(HuntingRecord *, const ClearGroupMonsterEvent *))&v19);
      std::vector<std::weak_ptr<Observer>>::push_back(
        &this->observer_vec_,
        (std::vector<std::weak_ptr<Observer>>::value_type *)&__r);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
      std::weak_ptr<HuntingRecord>::~weak_ptr((std::weak_ptr<HuntingRecord> *const)&v19);
      HuntingRecord::createTransaction[abi:cxx11]((std::string *)&v21, this);
      std::string::operator=(&this->transaction_, &v21);
      std::string::~string(&v21);
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/hunting_record.cpp",
        "start",
        65);
      v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v21,
              (const char (*)[26])"[HUNTING] hunting start: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->refresh_id_);
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" monster_id: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->monster_config_id_);
      v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" transaction: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &this->transaction_);
      common::milog::MiLogStream::~MiLogStream(&v21);
      HuntingRecord::initAbilityGroup(this);
      if ( is_by_repair )
        HuntingRecord::notifyOngoing(this);
      v5 = 0;
      std::weak_ptr<HuntingRecord>::~weak_ptr((std::weak_ptr<HuntingRecord> *const)(v2 + 64));
    }
  }
  std::weak_ptr<HuntingRecord>::~weak_ptr((std::weak_ptr<HuntingRecord> *const)(v2 + 32));
  result = v5;
  if ( v22 == (char *)v2 )
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

// Line 45: range 0000000016C773FE-0000000016C775AF
void __cdecl HuntingRecord::start(bool)::{lambda(unsigned long)#1}::operator()(
        const HuntingRecord::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HuntingRecord *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 hunting_record_ptr:45";
  *(_QWORD *)(v2 + 16) = HuntingRecord::start(bool)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<HuntingRecord>::lock((const std::weak_ptr<HuntingRecord> *const)(v2 + 32));
  if ( std::operator==<HuntingRecord>((const std::shared_ptr<HuntingRecord> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "operator()",
      45);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v6,
      (const char (*)[44])"hunting record is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    HuntingRecord::onPlayerTimer(v5, now_ms);
  }
  std::shared_ptr<HuntingRecord>::~shared_ptr((std::shared_ptr<HuntingRecord> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 45: range 0000000016D3DCC2-0000000016D3DCE7
void __cdecl HuntingRecord::start(bool)::{lambda(unsigned long)#1}::start(
        HuntingRecord::start::<lambda(uint64_t)> *const this,
        HuntingRecord::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<HuntingRecord>::weak_ptr(&this->__hunting_record_wtr, &a2->__hunting_record_wtr);
};

// Line 45: range 0000000016D3F430-0000000016D3F455
void __cdecl HuntingRecord::start(bool)::{lambda(unsigned long)#1}::start(
        HuntingRecord::start::<lambda(uint64_t)> *const this,
        const HuntingRecord::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<HuntingRecord>::weak_ptr(&this->__hunting_record_wtr, &a2->__hunting_record_wtr);
};

// Line 45: range 0000000016C775B0-0000000016C775CA
void __cdecl HuntingRecord::start(bool)::{lambda(unsigned long)#1}::~start(
        HuntingRecord::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<HuntingRecord>::~weak_ptr(&this->__hunting_record_wtr);
};

// Line 75: range 0000000016C7805C-0000000016C781D9
const data::HuntingRegionExcelConfig *__cdecl HuntingRecord::getRegionConfig(HuntingRecord *const this)
{
  const data::HuntingExcelConfigMgrBase *v1; // rdx
  common::milog::MiLogStream *v2; // rax
  const data::HuntingExcelConfigMgrBase *v4; // rcx
  HuntingExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-50h]
  const data::HuntingRefreshExcelConfig *refresh_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.hunting_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v7);
  v1 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->refresh_id_);
  }
  refresh_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(v1, this->refresh_id_);
  if ( refresh_config_ptr )
  {
    v4 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refresh_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&refresh_config_ptr->region_id);
    }
    return data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig(v4, refresh_config_ptr->region_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "getRegionConfig",
      80);
    v2 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v8,
           (const char (*)[51])"[HUNTING] refresh_config_ptr is null, refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->refresh_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return 0LL;
  }
};

// Line 87: range 0000000016C781DA-0000000016C78293
const data::HuntingRefreshExcelConfig *__cdecl HuntingRecord::getRefreshConfig(HuntingRecord *const this)
{
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  const data::HuntingRefreshExcelConfig *HuntingRefreshExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.hunting_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->refresh_id_);
  }
  HuntingRefreshExcelConfig = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
                                p_hunting_config_mgr,
                                this->refresh_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return HuntingRefreshExcelConfig;
};

// Line 92: range 0000000016C78294-0000000016C78355
const data::HuntingMonsterExcelConfig *__cdecl HuntingRecord::getMonsterConfig(HuntingRecord *const this)
{
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  const data::HuntingMonsterExcelConfig *HuntingMonsterExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.hunting_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monster_config_id_);
  }
  HuntingMonsterExcelConfig = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                                p_hunting_config_mgr,
                                this->monster_config_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return HuntingMonsterExcelConfig;
};

// Line 97: range 0000000016C78356-0000000016C7838B
int32_t __cdecl HuntingRecord::onLogin(HuntingRecord *const this)
{
  if ( !HuntingRecord::isFinish(this) )
    HuntingRecord::notifyOngoing(this);
  return 0;
};

// Line 107: range 0000000016C7838C-0000000016C78753
void __cdecl HuntingRecord::onPlayerTimer(HuntingRecord *const this, uint64_t now_s)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  char *v7; // rsi
  const data::HuntingRegionExcelConfig *region_config_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 10 center:122";
  *(_QWORD *)(v2 + 16) = HuntingRecord::onPlayerTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( HuntingRecord::getMonsterConfig(this) )
  {
    region_config_ptr = HuntingRecord::getRegionConfig(this);
    if ( region_config_ptr )
    {
      Vector3::Vector3((Vector3 *const)(v2 + 32), &region_config_ptr->center_pos_list);
      if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->center_radius >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config_ptr->center_radius >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&region_config_ptr->center_radius);
      }
      v7 = (char *)(v2 + 32);
      if ( HuntingRecord::isPlayerInHuntingArea(this, (const Vector3 *)(v2 + 32), region_config_ptr->center_radius) )
      {
        if ( *(char *)(((unsigned __int64)&this->is_last_check_in_area_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_last_check_in_area_);
        if ( !this->is_last_check_in_area_ )
          HuntingRecord::onPlayerEnterArea(this);
        if ( *(char *)(((unsigned __int64)&this->is_last_check_in_area_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_last_check_in_area_, v7, &this->is_last_check_in_area_);
        this->is_last_check_in_area_ = 1;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_last_check_in_area_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_last_check_in_area_);
        if ( this->is_last_check_in_area_ )
          HuntingRecord::onPlayerLeaveArea(this);
        if ( *(char *)(((unsigned __int64)&this->is_last_check_in_area_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_last_check_in_area_, v7, &this->is_last_check_in_area_);
        this->is_last_check_in_area_ = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "onPlayerTimer",
        118);
      v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v9,
             (const char (*)[50])"[HUNTING] region_config_ptr is null, refresh_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->refresh_id_);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "onPlayerTimer",
      111);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v9,
           (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->monster_config_id_);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 143: range 0000000016C78754-0000000016C78901
bool __cdecl HuntingRecord::isPlayerInHuntingArea(
        HuntingRecord *const this,
        const Vector3 *center_pos,
        uint32_t radius)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *Position; // rdx
  bool v8; // r15
  bool result; // al
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 avatar_ptr:144";
  *(_QWORD *)(v3 + 16) = HuntingRecord::isPlayerInHuntingArea;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 32));
  v8 = 0;
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Position = Entity::getPosition((const Entity *const)v6);
    if ( (float)(int)radius > getPlaneDistance(Position, center_pos) )
      v8 = 1;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
  result = v8;
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

// Line 149: range 0000000016C78AD0-0000000016C79E27
void __cdecl HuntingRecord::onPlayerEnterArea(HuntingRecord *const this)
{
  unsigned __int64 p_M_bucket_count; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerUnixTimer *p_limit_time; // rdi
  int Now; // edi
  __int64 v10; // rsi
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rdx
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v16; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v17; // rax
  _DWORD *v18; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  data::HuntingMonsterCreatePosType pos_type; // ecx
  const unsigned int *v22; // r14
  std::vector<unsigned int>::const_iterator v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  std::vector<unsigned int>::size_type v26; // r14
  common::milog::MiLogStream *v27; // rax
  std::vector<unsigned int>::size_type v28; // rsi
  std::vector<unsigned int>::reference v29; // rax
  int *v30; // rdx
  int v31; // ecx
  char v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  Player *player; // r14
  std::string v43; // [rsp+0h] [rbp-1C0h]
  HuntingRecord *thisa; // [rsp+8h] [rbp-1B8h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  const data::HuntingRegionExcelConfig *region_config_ptr; // [rsp+30h] [rbp-190h]
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+38h] [rbp-188h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-180h]
  const data::HuntingGroupInfoExcelConfig *group_info_ptr; // [rsp+48h] [rbp-178h]
  HuntingRecord t; // [rsp+50h] [rbp-170h] BYREF

  v43._M_string_length = (std::string::size_type)this;
  p_M_bucket_count = (unsigned __int64)&t.chosen_group_set_._M_h._M_bucket_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      p_M_bucket_count = v2;
  }
  *(_QWORD *)p_M_bucket_count = 1102416563LL;
  *(_QWORD *)(p_M_bucket_count + 8) = "7 48 1 10 holder:251 64 4 16 random_index:231 80 4 12 group_id:209 96 16 9 timer:1"
                                      "50 128 16 22 hunting_record_wtr:178 160 16 11 log_ptr:252 192 24 35 candidate_dest"
                                      "ination_group_vec:202";
  *(_QWORD *)(p_M_bucket_count + 16) = HuntingRecord::onPlayerEnterArea;
  v3 = (_DWORD *)(p_M_bucket_count >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556924;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(p_M_bucket_count + 96));
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&t.refresh_id_,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/hunting/hunting_record.cpp",
    "onPlayerEnterArea",
    151);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    (common::milog::MiLogStream *const)&t.refresh_id_,
    (const char (*)[28])"[HUNTING] onPlayerEnterArea");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == hunting_none )
  {
    region_config_ptr = HuntingRecord::getRegionConfig(this);
    if ( region_config_ptr )
    {
      monster_config_ptr = HuntingRecord::getMonsterConfig(this);
      if ( monster_config_ptr )
      {
        if ( !HuntingRecord::isMeetRefreshCond(this) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&t.refresh_id_,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/hunting/hunting_record.cpp",
            "onPlayerEnterArea",
            173);
          v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 (common::milog::MiLogStream *const)&t.refresh_id_,
                 (const char (*)[34])"[HUNTING] not meet refresh cond, ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->refresh_id_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
        }
        else
        {
          toThisPtr<HuntingRecord>(&t);
          std::weak_ptr<HuntingRecord>::weak_ptr<HuntingRecord,void>(
            (std::weak_ptr<HuntingRecord> *const)(p_M_bucket_count + 128),
            (const std::shared_ptr<HuntingRecord> *)&t);
          std::shared_ptr<HuntingRecord>::~shared_ptr((std::shared_ptr<HuntingRecord> *const)&t);
          std::weak_ptr<HuntingRecord>::weak_ptr(
            (std::weak_ptr<HuntingRecord> *const)&t,
            (const std::weak_ptr<HuntingRecord> *)(p_M_bucket_count + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          toPtr<Player,Player>((Player *)(p_M_bucket_count + 160));
          common::tools::perf::make_shared<PlayerUnixTimer,std::shared_ptr<Player>,HuntingRecord::onPlayerEnterArea(void)::{lambda(unsigned long)#1}>(
            (std::shared_ptr<Player> *)&t._M_weak_this._M_refcount,
            (HuntingRecord::onPlayerEnterArea::<lambda(uint64_t)> *)(p_M_bucket_count + 160),
            (std::shared_ptr<Player> *)&t,
            (HuntingRecord::onPlayerEnterArea::<lambda(uint64_t)> *)(p_M_bucket_count + 160));
          std::shared_ptr<PlayerUnixTimer>::operator=(
            &this->hunting_timer_ptr_,
            (std::shared_ptr<PlayerUnixTimer> *)&t._M_weak_this._M_refcount);
          std::shared_ptr<PlayerUnixTimer>::~shared_ptr((std::shared_ptr<PlayerUnixTimer> *const)&t._M_weak_this._M_refcount);
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_M_bucket_count + 160));
          HuntingRecord::onPlayerEnterArea(void)::{lambda(unsigned long)#1}::~onPlayerEnterArea((HuntingRecord::onPlayerEnterArea::<lambda(uint64_t)> *const)&t);
          if ( std::operator==<PlayerUnixTimer>(0LL, &this->hunting_timer_ptr_) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&t.refresh_id_,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/hunting_record.cpp",
              "onPlayerEnterArea",
              181);
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&t.refresh_id_,
              (const char (*)[27])"hunting_timer_ptr_ is null");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
          }
          else
          {
            v7 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->hunting_timer_ptr_);
            common::tools::MiTimer::cancel(v7);
            p_limit_time = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->hunting_timer_ptr_);
            if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->limit_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)monster_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->limit_time >> 3)
                                                                                 + 0x7FFF8000) )
            {
              p_limit_time = (PlayerUnixTimer *)&monster_config_ptr->limit_time;
              __asan_report_load4(&monster_config_ptr->limit_time);
            }
            if ( PlayerUnixTimer::startS(
                   p_limit_time,
                   monster_config_ptr->limit_time,
                   0,
                   "./src/player/hunting/hunting_record.cpp",
                   "onPlayerEnterArea",
                   186) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&t.refresh_id_,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/hunting/hunting_record.cpp",
                "onPlayerEnterArea",
                188);
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)&t.refresh_id_,
                (const char (*)[39])"[HUNTING] hunting_timer_ startS failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
            }
            else
            {
              Now = common::tools::TimeUtils::getNow();
              v10 = (((_BYTE)monster_config_ptr + 124) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->limit_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)monster_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->limit_time >> 3)
                                                                                   + 0x7FFF8000) )
              {
                Now = (_DWORD)monster_config_ptr + 124;
                __asan_report_load4(&monster_config_ptr->limit_time);
              }
              v11 = Now + monster_config_ptr->limit_time;
              v12 = *(_BYTE *)(((v43._M_string_length + 116) >> 3) + 0x7FFF8000);
              LOBYTE(v10) = v12 != 0;
              v13 = (v12 != 0) & (unsigned __int8)((char)(((LOBYTE(v43._M_string_length) + 116) & 7) + 3) >= v12);
              if ( (_BYTE)v13 )
                __asan_report_store4(v43._M_string_length + 116, v10, v13);
              *(_DWORD *)(v43._M_string_length + 116) = v11;
              v14 = (*(_BYTE *)(((v43._M_string_length + 156) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((LOBYTE(v43._M_string_length) - 100) & 7) + 3) >= *(_BYTE *)(((v43._M_string_length + 156) >> 3) + 0x7FFF8000));
              if ( (_BYTE)v14 )
                __asan_report_store4(v43._M_string_length + 156, ((LOBYTE(v43._M_string_length) - 100) & 7u) + 3, v14);
              *(_DWORD *)(v43._M_string_length + 156) = 1;
              if ( std::vector<unsigned int>::size(&region_config_ptr->destination_group) )
              {
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(p_M_bucket_count + 192));
                if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->create_pos_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->create_pos_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&monster_config_ptr->create_pos_type);
                }
                if ( monster_config_ptr->create_pos_type )
                {
                  __for_range = &region_config_ptr->destination_group;
                  __for_begin._M_current = std::vector<unsigned int>::begin(&region_config_ptr->destination_group)._M_current;
                  __for_end._M_current = std::vector<unsigned int>::end(&region_config_ptr->destination_group)._M_current;
                  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
                  {
                    v17 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
                    v18 = v17;
                    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v17);
                    }
                    *(_DWORD *)(p_M_bucket_count + 80) = *v18;
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)&t._M_weak_this._M_refcount);
                    v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&t._M_weak_this._M_refcount);
                    group_info_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                                       &v19->design_config.txt_config_mgr.hunting_config_mgr,
                                       *(_DWORD *)(p_M_bucket_count + 80));
                    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&t._M_weak_this._M_refcount);
                    if ( !group_info_ptr )
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&t.refresh_id_,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/hunting/hunting_record.cpp",
                        "onPlayerEnterArea",
                        214);
                      v20 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                              (common::milog::MiLogStream *const)&t.refresh_id_,
                              (const char (*)[50])"[HUNTING] group info config not found, group_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v20,
                        (const unsigned int *)(p_M_bucket_count + 80));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
                      goto LABEL_74;
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&group_info_ptr->pos_type >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&group_info_ptr->pos_type >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&group_info_ptr->pos_type);
                    }
                    pos_type = group_info_ptr->pos_type;
                    if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->create_pos_type >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->create_pos_type >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&monster_config_ptr->create_pos_type);
                    }
                    if ( pos_type == monster_config_ptr->create_pos_type )
                      std::vector<unsigned int>::push_back(
                        (std::vector<unsigned int> *const)(p_M_bucket_count + 192),
                        (const std::vector<unsigned int>::value_type *)(p_M_bucket_count + 80));
                    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
                  }
                }
                else
                {
                  M_current = std::vector<unsigned int>::end(&region_config_ptr->destination_group)._M_current;
                  v16._M_current = std::vector<unsigned int>::begin(&region_config_ptr->destination_group)._M_current;
                  std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
                    (std::vector<unsigned int> *const)(p_M_bucket_count + 192),
                    v16,
                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
                }
                if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(p_M_bucket_count + 192)) )
                {
                  v22 = std::vector<unsigned int>::end(&region_config_ptr->destination_group)._M_current;
                  v23._M_current = std::vector<unsigned int>::begin(&region_config_ptr->destination_group)._M_current;
                  std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
                    (std::vector<unsigned int> *const)(p_M_bucket_count + 192),
                    v23,
                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v22);
                }
                v24 = (*(_BYTE *)(((v43._M_string_length + 52) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((LOBYTE(v43._M_string_length) + 52) & 7) + 3) >= *(_BYTE *)(((v43._M_string_length + 52) >> 3) + 0x7FFF8000));
                if ( (_BYTE)v24 )
                  __asan_report_store4(v43._M_string_length + 52, ((LOBYTE(v43._M_string_length) + 52) & 7u) + 3, v24);
                *(_DWORD *)(v43._M_string_length + 52) = 0;
                v25 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(p_M_bucket_count + 192));
                *(_DWORD *)(p_M_bucket_count + 64) = common::tools::RandomUtils::rand<unsigned int>(0, v25 - 1);
                v26 = *(unsigned int *)(p_M_bucket_count + 64);
                if ( v26 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(p_M_bucket_count
                                                                                                  + 192)) )
                {
                  if ( *(_BYTE *)(((v43._M_string_length + 112) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v43._M_string_length + 112) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(v43._M_string_length + 112);
                  }
                  if ( *(_DWORD *)(v43._M_string_length + 112) )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&t.refresh_id_,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/hunting/hunting_record.cpp",
                      "onPlayerEnterArea",
                      244);
                    v33 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                            (common::milog::MiLogStream *const)&t.refresh_id_,
                            (const char (*)[73])"[HUNTING] destination group id has already setted, destination_group_id_");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v43._M_string_length + 112));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
                  }
                  else
                  {
                    v28 = *(unsigned int *)(p_M_bucket_count + 64);
                    v29 = std::vector<unsigned int>::operator[](
                            (std::vector<unsigned int> *const)(p_M_bucket_count + 192),
                            v28);
                    v30 = (int *)v29;
                    if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v29);
                    }
                    v31 = *v30;
                    v32 = *(_BYTE *)(((v43._M_string_length + 112) >> 3) + 0x7FFF8000);
                    if ( v32 != 0 && v32 <= 3 )
                    {
                      LOBYTE(v28) = v32 != 0;
                      __asan_report_store4(v43._M_string_length + 112, v28, v43._M_string_length + 112);
                    }
                    *(_DWORD *)(v43._M_string_length + 112) = v31;
                  }
                  *((_DWORD *)&v43._anon_0._M_allocated_capacity + 3) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(p_M_bucket_count + 96));
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&t.refresh_id_,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/hunting/hunting_record.cpp",
                    "onPlayerEnterArea",
                    247);
                  v34 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          (common::milog::MiLogStream *const)&t.refresh_id_,
                          (const char (*)[45])"[HUNTING] hunting real start, des group_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v43._M_string_length + 112));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
                  HuntingRecord::updateHuntingProgress((HuntingRecord *const)v43._M_string_length, 1);
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&t.refresh_id_,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/hunting/hunting_record.cpp",
                    "onPlayerEnterArea",
                    249);
                  v35 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                          (common::milog::MiLogStream *const)&t.refresh_id_,
                          (const char (*)[46])"[HUNTING] [PERF] updateHuntingProgress cost: ");
                  *(_DWORD *)(p_M_bucket_count + 80) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(p_M_bucket_count + 96))
                                                     - *((_DWORD *)&v43._anon_0._M_allocated_capacity + 3);
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v35, (const int *)(p_M_bucket_count + 80));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
                  if ( *(_BYTE *)(((v43._M_string_length + 24) >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  BasicComp = Player::getBasicComp(*(Player *const *)(v43._M_string_length + 24));
                  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&t.refresh_id_, BasicComp);
                  StatLogUtils::ContextHolder::ContextHolder(
                    (StatLogUtils::ContextHolder *const)(p_M_bucket_count + 48),
                    0xB65u,
                    v43);
                  std::string::~string(&t.refresh_id_);
                  common::tools::perf::make_shared<proto_log::PlayerLogBodyHuntingStart>();
                  v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_bucket_count + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->city_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&thisa->city_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&thisa->city_id_);
                  }
                  proto_log::PlayerLogBodyHuntingStart::set_city_id(v37, thisa->city_id_);
                  v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_bucket_count + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->refresh_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&thisa->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&thisa->refresh_id_);
                  }
                  proto_log::PlayerLogBodyHuntingStart::set_refresh_id(v38, thisa->refresh_id_);
                  v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_bucket_count + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->monster_config_id_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->monster_config_id_ >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4(&thisa->monster_config_id_);
                  }
                  proto_log::PlayerLogBodyHuntingStart::set_monster_config_id(v39, thisa->monster_config_id_);
                  v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_bucket_count + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&monster_config_ptr->difficulty);
                  }
                  proto_log::PlayerLogBodyHuntingStart::set_difficulty(v40, monster_config_ptr->difficulty);
                  v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_bucket_count + 160));
                  proto_log::PlayerLogBodyHuntingStart::set_hunting_transaction(v41, &thisa->transaction_);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  player = thisa->player_;
                  std::shared_ptr<google::protobuf::Message>::shared_ptr(
                    (std::shared_ptr<google::protobuf::Message> *const)&t._M_weak_this._M_refcount,
                    0LL);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHuntingStart,void>(
                    (std::shared_ptr<google::protobuf::Message> *const)&t,
                    (const std::shared_ptr<proto_log::PlayerLogBodyHuntingStart> *)(p_M_bucket_count + 160));
                  Player::printStatLog(player, (MessagePtr *)&t, (MessagePtr *)&t._M_weak_this._M_refcount, 0xEu);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&t);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&t._M_weak_this._M_refcount);
                  std::shared_ptr<proto_log::PlayerLogBodyHuntingStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHuntingStart> *const)(p_M_bucket_count + 160));
                  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(p_M_bucket_count + 48));
                }
                else
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&t.refresh_id_,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/hunting/hunting_record.cpp",
                    "onPlayerEnterArea",
                    234);
                  v27 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          (common::milog::MiLogStream *const)&t.refresh_id_,
                          (const char (*)[30])"[HUNTING] random_index exceed");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(p_M_bucket_count + 64));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
                }
LABEL_74:
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(p_M_bucket_count + 192));
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&t.refresh_id_,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/hunting/hunting_record.cpp",
                  "onPlayerEnterArea",
                  197);
                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  (common::milog::MiLogStream *const)&t.refresh_id_,
                  (const char (*)[48])"[HUNTING] destination_group should not be empty");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
              }
            }
          }
          std::weak_ptr<HuntingRecord>::~weak_ptr((std::weak_ptr<HuntingRecord> *const)(p_M_bucket_count + 128));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&t.refresh_id_,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "onPlayerEnterArea",
          167);
        v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
               (common::milog::MiLogStream *const)&t.refresh_id_,
               (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->monster_config_id_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&t.refresh_id_,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "onPlayerEnterArea",
        160);
      v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             (common::milog::MiLogStream *const)&t.refresh_id_,
             (const char (*)[50])"[HUNTING] region_config_ptr is null, refresh_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->refresh_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t.refresh_id_);
    }
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(p_M_bucket_count + 96));
  if ( &t.chosen_group_set_._M_h._M_bucket_count == (std::_Hashtable<unsigned int,unsigned int,std::allocator<unsigned int>,std::__detail::_Identity,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true> >::size_type *)p_M_bucket_count )
  {
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_bucket_count = 1172321806LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 178: range 0000000016D3DFEE-0000000016D3E013
void __cdecl HuntingRecord::onPlayerEnterArea(void)::{lambda(unsigned long)#1}::onPlayerEnterArea(
        HuntingRecord::onPlayerEnterArea::<lambda(uint64_t)> *const this,
        HuntingRecord::onPlayerEnterArea::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<HuntingRecord>::weak_ptr(&this->__hunting_record_wtr, &a2->__hunting_record_wtr);
};

// Line 178: range 0000000016D3F612-0000000016D3F637
void __cdecl HuntingRecord::onPlayerEnterArea(void)::{lambda(unsigned long)#1}::onPlayerEnterArea(
        HuntingRecord::onPlayerEnterArea::<lambda(uint64_t)> *const this,
        const HuntingRecord::onPlayerEnterArea::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<HuntingRecord>::weak_ptr(&this->__hunting_record_wtr, &a2->__hunting_record_wtr);
};

// Line 178: range 0000000016C78902-0000000016C78AB3
void __cdecl HuntingRecord::onPlayerEnterArea(void)::{lambda(unsigned long)#1}::operator()(
        const HuntingRecord::onPlayerEnterArea::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HuntingRecord *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 22 hunting_record_ptr:178";
  *(_QWORD *)(v2 + 16) = HuntingRecord::onPlayerEnterArea(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<HuntingRecord>::lock((const std::weak_ptr<HuntingRecord> *const)(v2 + 32));
  if ( std::operator==<HuntingRecord>((const std::shared_ptr<HuntingRecord> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "operator()",
      178);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v6,
      (const char (*)[44])"hunting record is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    HuntingRecord::onHuntingTimer(v5, now_ms);
  }
  std::shared_ptr<HuntingRecord>::~shared_ptr((std::shared_ptr<HuntingRecord> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 178: range 0000000016C78AB4-0000000016C78ACE
void __cdecl HuntingRecord::onPlayerEnterArea(void)::{lambda(unsigned long)#1}::~onPlayerEnterArea(
        HuntingRecord::onPlayerEnterArea::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<HuntingRecord>::~weak_ptr(&this->__hunting_record_wtr);
};

// Line 262: range 0000000016C79E28-0000000016C7A0F5
__m128i __fastcall HuntingRecord::getGroupPos(HuntingRecord *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __m128i v10; // [rsp+8h] [rbp-D8h] BYREF
  uint32_t v11; // [rsp+24h] [rbp-BCh]
  HuntingRecord *thisa; // [rsp+28h] [rbp-B8h]
  const GroupInfoScriptConfig *group_info_script; // [rsp+30h] [rbp-B0h]
  Vector3 v14; // [rsp+38h] [rbp-A8h] BYREF
  Vector3 pos; // [rsp+44h] [rbp-9Ch]
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-80h] BYREF
  char v18[96]; // [rsp+80h] [rbp-60h] BYREF

  thisa = this;
  v11 = group_id;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:261";
  *(_QWORD *)(v2 + 16) = HuntingRecord::getGroupPos;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = v11;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  group_info_script = LuaConfigMgr::findGroupInfoConfig(&v5->design_config.lua_config_mgr, *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( group_info_script )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/hunting_record.cpp",
      "getGroupPos",
      268);
    v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v17,
           (const char (*)[21])"[HUNTING] group_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" pos: ");
    operator<<(v8, &group_info_script->pos);
    common::milog::MiLogStream::~MiLogStream(&v17);
    if ( *(char *)(((unsigned __int64)&group_info_script->pos >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&group_info_script->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)group_info_script + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&group_info_script->pos.z + 3) >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load_n(&group_info_script->pos, 12LL);
    }
    pos = group_info_script->pos;
  }
  else
  {
    Vector3::Vector3(&v14, 0.0, 0.0, 0.0);
    pos = v14;
  }
  v10.m128i_i64[0] = *(_QWORD *)&pos.x;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return _mm_loadl_epi64(&v10);
};

// Line 273: range 0000000016C7A0F6-0000000016C7A172
void __cdecl HuntingRecord::onPlayerLeaveArea(HuntingRecord *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/hunting/hunting_record.cpp",
    "onPlayerLeaveArea",
    274);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    &v1,
    (const char (*)[28])"[HUNTING] onPlayerLeaveArea");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 279: range 0000000016C7A174-0000000016C7ABDE
__int64 __fastcall HuntingRecord::processClueGroup(HuntingRecord *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  data::HuntingCluePointType point_type; // eax
  int v11; // eax
  __int64 v12; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  uint32_t monster_config_id; // ecx
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t *p_cur_ref_index; // rsi
  uint32_t v26; // ecx
  char v27; // al
  Scene *v28; // rax
  unsigned __int64 v29; // rax
  std::array<unsigned int,3>::value_type *v30; // rax
  unsigned int *v31; // rdx
  __int64 result; // rax
  void (__fastcall *v33)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // [rsp+10h] [rbp-130h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+18h] [rbp-128h]
  unsigned int v35; // [rsp+20h] [rbp-120h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-105h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-104h] BYREF
  uint32_t difficulty; // [rsp+40h] [rbp-100h]
  uint32_t rand; // [rsp+44h] [rbp-FCh]
  const data::HuntingGroupInfoExcelConfig *group_info_config_ptr; // [rsp+48h] [rbp-F8h]
  const std::array<unsigned int,3> *revise_level_config; // [rsp+50h] [rbp-F0h]
  const data::HuntingRefreshExcelConfig *refresh_config_ptr; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v43; // [rsp+60h] [rbp-E0h] BYREF
  std::vector<unsigned int> v44; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v45; // [rsp+90h] [rbp-B0h] BYREF
  char v46[144]; // [rsp+B0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:278 64 16 13 scene_ptr:286";
  *(_QWORD *)(v2 + 16) = HuntingRecord::processClueGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v43);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
  group_info_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                            &v5->design_config.txt_config_mgr.hunting_config_mgr,
                            *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v43);
  if ( !group_info_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "processClueGroup",
      283);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v45,
           (const char (*)[51])"[HUNTING] hunting group info not found, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v45);
    v7 = -1;
    goto LABEL_51;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "processClueGroup",
      289);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v45,
           (const char (*)[42])"[HUNTING] getMainWorldScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v7 = -1;
    goto LABEL_50;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v43);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
  revise_level_config = ConstValueExcelConfigMgr::getHuntingDifficultyReviseLevelConfig(&v9->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v43);
  refresh_config_ptr = HuntingRecord::getRefreshConfig(this);
  if ( refresh_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->difficulty);
    }
    difficulty = refresh_config_ptr->difficulty;
    if ( difficulty >= std::array<unsigned int,3ul>::size(revise_level_config) )
    {
      v7 = -1;
      goto LABEL_50;
    }
    if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&group_info_config_ptr->point_type);
    }
    point_type = group_info_config_ptr->point_type;
    if ( point_type == HUNTING_CLUE_FINAL )
    {
      v18 = (((_BYTE)this + 36) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->monster_config_id_);
      }
      monster_config_id = this->monster_config_id_;
      v20 = *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000);
      LOBYTE(v18) = v20 != 0;
      v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v20);
      if ( (_BYTE)v21 )
        __asan_report_store4(&this->cur_ref_index_, v18, v21);
      this->cur_ref_index_ = monster_config_id;
      goto LABEL_41;
    }
    if ( point_type <= HUNTING_CLUE_FINAL )
    {
      if ( point_type == HUNTING_CLUE_ITERACT )
      {
        v22 = (*(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v22 )
          __asan_report_store4(&this->cur_ref_index_, (((_BYTE)this + 44) & 7u) + 3, v22);
        this->cur_ref_index_ = 0;
        goto LABEL_41;
      }
      if ( point_type >= HUNTING_CLUE_ITERACT && (unsigned int)(point_type - 1) <= 1 )
      {
        if ( !std::vector<unsigned int>::size(&group_info_config_ptr->ref_index) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/hunting_record.cpp",
            "processClueGroup",
            311);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v45,
            (const char (*)[39])"[HUNTING] ref_index.size() cannot be 0");
          common::milog::MiLogStream::~MiLogStream(&v45);
          v7 = -1;
          goto LABEL_50;
        }
        v11 = std::vector<unsigned int>::size(&group_info_config_ptr->ref_index);
        rand = common::tools::RandomUtils::rand<unsigned int>(0, v11 - 1);
        v12 = rand;
        v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &group_info_config_ptr->ref_index,
                                                                                                    rand);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = *v14;
        v16 = *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000);
        LOBYTE(v12) = v16 != 0;
        v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v16);
        if ( (_BYTE)v17 )
          __asan_report_store4(&this->cur_ref_index_, v12, v17);
        this->cur_ref_index_ = v15;
LABEL_41:
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/hunting/hunting_record.cpp",
          "processClueGroup",
          334);
        v24 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v45,
                (const char (*)[27])"[HUNTING] cur_ref_index_: ");
        p_cur_ref_index = &this->cur_ref_index_;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->cur_ref_index_);
        common::milog::MiLogStream::~MiLogStream(&v45);
        v26 = *(_DWORD *)(v2 + 48);
        v27 = *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000);
        if ( v27 != 0 && v27 <= 3 )
        {
          LOBYTE(p_cur_ref_index) = v27 != 0;
          __asan_report_store4(&this->cur_loaded_group_id_, p_cur_ref_index, &this->cur_loaded_group_id_);
        }
        this->cur_loaded_group_id_ = v26;
        v28 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        BlockGroupComp = Scene::getBlockGroupComp(v28);
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v29 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v33 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v29;
        v30 = (std::array<unsigned int,3>::value_type *)std::array<unsigned int,3ul>::operator[](
                                                          revise_level_config,
                                                          difficulty);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        v35 = *v31;
        val = *(_DWORD *)(v2 + 48);
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&v44, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
        v33(BlockGroupComp, &v44, v35, 0LL);
        std::vector<unsigned int>::~vector(&v44);
        std::allocator<unsigned int>::~allocator(&__a);
        v7 = 0;
        goto LABEL_50;
      }
    }
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "processClueGroup",
      330);
    v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v45,
            (const char (*)[31])"[HUNTING] unknown point_type: ");
    common::milog::MiLogStream::operator<<<data::HuntingCluePointType,(data::HuntingCluePointType*)0>(
      v23,
      &group_info_config_ptr->point_type);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v7 = -1;
    goto LABEL_50;
  }
  common::milog::MiLogStream::create(
    &v45,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/hunting/hunting_record.cpp",
    "processClueGroup",
    296);
  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
    &v45,
    (const char (*)[37])"[HUNTING] refresh_config_ptr is null");
  common::milog::MiLogStream::~MiLogStream(&v45);
  v7 = -1;
LABEL_50:
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 64));
LABEL_51:
  result = v7;
  if ( v46 == (char *)v2 )
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

// Line 341: range 0000000016C7ABE0-0000000016C7B030
bool __cdecl HuntingRecord::isMeetRefreshCond(HuntingRecord *const this)
{
  common::milog::MiLogStream *v1; // rax
  data::HuntingRefreshCondType cond_type; // eax
  PlayerBasicComp *BasicComp; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v5; // rax
  uint32_t *v6; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  uint32_t *v8; // rdx
  char v9; // al
  PlayerSceneComp *SceneComp; // rax
  uint32_t CurrentWeatherType; // ebx
  std::vector<unsigned int>::const_reference v12; // rax
  _DWORD *v13; // rdx
  char res; // [rsp+13h] [rbp-5Dh]
  uint32_t hour; // [rsp+14h] [rbp-5Ch]
  std::vector<data::HuntingRefreshCond>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::vector<data::HuntingRefreshCond>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+28h] [rbp-48h]
  const std::vector<data::HuntingRefreshCond> *__for_range; // [rsp+30h] [rbp-40h]
  const data::HuntingRefreshCond *cond; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-30h] BYREF

  monster_config_ptr = HuntingRecord::getMonsterConfig(this);
  if ( monster_config_ptr )
  {
    res = 1;
    __for_range = &monster_config_ptr->refresh_cond;
    __for_begin._M_current = std::vector<data::HuntingRefreshCond>::begin(&monster_config_ptr->refresh_cond)._M_current;
    __for_end._M_current = std::vector<data::HuntingRefreshCond>::end(&monster_config_ptr->refresh_cond)._M_current;
    while ( __gnu_cxx::operator!=<data::HuntingRefreshCond const*,std::vector<data::HuntingRefreshCond>>(
              &__for_begin,
              &__for_end) )
    {
      cond = __gnu_cxx::__normal_iterator<data::HuntingRefreshCond const*,std::vector<data::HuntingRefreshCond>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->cond_type);
      }
      cond_type = cond->cond_type;
      if ( cond_type == HUNTING_REFRESH_COND_TIME )
      {
        if ( std::vector<unsigned int>::size(&cond->param) != 2 )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/hunting_record.cpp",
            "isMeetRefreshCond",
            357);
          common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v21,
            (const char (*)[54])"[HUNTING] HUNTING_REFRESH_COND_TIME param should be 2");
          common::milog::MiLogStream::~MiLogStream(&v21);
          return 0;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        hour = PlayerBasicComp::getGameHour(BasicComp);
        v5 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &cond->param,
                                                                                                   0LL);
        v6 = v5;
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v5);
        }
        if ( hour < *v6 )
          goto LABEL_21;
        v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &cond->param,
                                                                                                   1uLL);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        if ( hour >= *v8 )
LABEL_21:
          v9 = 0;
        else
          v9 = 1;
        res = (unsigned __int8)(res & v9) != 0;
      }
      else if ( cond_type == HUNTING_REFRESH_COND_WEATHER )
      {
        if ( std::vector<unsigned int>::size(&cond->param) != 1 )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/hunting_record.cpp",
            "isMeetRefreshCond",
            368);
          common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            &v21,
            (const char (*)[57])"[HUNTING] HUNTING_REFRESH_COND_WEATHER param should be 1");
          common::milog::MiLogStream::~MiLogStream(&v21);
          return 0;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        CurrentWeatherType = PlayerSceneComp::getCurrentWeatherType(SceneComp);
        v12 = std::vector<unsigned int>::operator[](&cond->param, 0LL);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        res = ((unsigned __int8)res & (CurrentWeatherType == *v13)) != 0;
      }
      else
      {
        res = (res & 1) != 0;
      }
      __gnu_cxx::__normal_iterator<data::HuntingRefreshCond const*,std::vector<data::HuntingRefreshCond>>::operator++(&__for_begin);
    }
    return res;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "isMeetRefreshCond",
      345);
    v1 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v21,
           (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->monster_config_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    return 0;
  }
};

// Line 386: range 0000000016C7B032-0000000016C7B1BA
void __cdecl HuntingRecord::onHuntingTimer(HuntingRecord *const this, uint64_t now_s)
{
  __int64 v2; // rdx
  PlayerHuntingComp *HuntingComp; // rdi
  uint32_t monster_config_id; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == hunting_start )
  {
    v2 = (*(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v2 )
      __asan_report_store4(&this->state_, (((_BYTE)this - 100) & 7u) + 3, v2);
    this->state_ = hunting_none;
    HuntingRecord::notifyHuntingFinalEvent(this, 0);
    HuntingRecord::clear(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HuntingComp = Player::getHuntingComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      HuntingComp = (PlayerHuntingComp *)&this->monster_config_id_;
      __asan_report_load4(&this->monster_config_id_);
    }
    monster_config_id = this->monster_config_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      HuntingComp = (PlayerHuntingComp *)&this->refresh_id_;
      __asan_report_load4(&this->refresh_id_);
    }
    PlayerHuntingComp::onFailOngoingHunting(HuntingComp, this->refresh_id_, monster_config_id);
  }
};

// Line 401: range 0000000016C7B1BC-0000000016C7B1DA
int32_t __cdecl HuntingRecord::forceTerminate(HuntingRecord *const this)
{
  HuntingRecord::clear(this);
  return 0;
};

// Line 407: range 0000000016C7B1DC-0000000016C7B239
int32_t __cdecl HuntingRecord::forceFinish(HuntingRecord *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->state_, (((_BYTE)this - 100) & 7u) + 3, v1);
  this->state_ = hunting_finish;
  return 0;
};

// Line 413: range 0000000016C7B23A-0000000016C7B325
int32_t __cdecl HuntingRecord::forceFail(HuntingRecord *const this)
{
  PlayerHuntingComp *HuntingComp; // rdi
  uint32_t monster_config_id; // edx

  HuntingRecord::notifyHuntingFinalEvent(this, 0);
  HuntingRecord::clear(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HuntingComp = Player::getHuntingComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) )
  {
    HuntingComp = (PlayerHuntingComp *)&this->monster_config_id_;
    __asan_report_load4(&this->monster_config_id_);
  }
  monster_config_id = this->monster_config_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    HuntingComp = (PlayerHuntingComp *)&this->refresh_id_;
    __asan_report_load4(&this->refresh_id_);
  }
  PlayerHuntingComp::onFailOngoingHunting(HuntingComp, this->refresh_id_, monster_config_id);
  return 0;
};

// Line 421: range 0000000016C7B326-0000000016C7BA9E
void __cdecl HuntingRecord::clear(HuntingRecord *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 v4; // rdx
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v8; // rax
  _DWORD *v9; // rdx
  Scene *v10; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  const std::weak_ptr<Observer> *v18; // rax
  PlayerEventComp *EventComp; // rax
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-130h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-128h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+20h] [rbp-120h]
  std::vector<std::weak_ptr<Observer>> *__for_range_0; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-110h] BYREF
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 12 group_id:440 64 16 13 scene_ptr:433 96 16 11 obs_wtr:452 128 24 13 group_vec:439";
  *(_QWORD *)(v1 + 16) = HuntingRecord::clear;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->state_, (((_BYTE)this - 100) & 7u) + 3, v4);
  this->state_ = hunting_none;
  HuntingRecord::clearAbilityGroup(this);
  if ( std::operator!=<PlayerUnixTimer>(&this->player_timer_ptr_, 0LL) )
  {
    v5 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_timer_ptr_);
    common::tools::MiTimer::cancel(v5);
  }
  if ( std::operator!=<PlayerUnixTimer>(&this->hunting_timer_ptr_, 0LL) )
  {
    v6 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->hunting_timer_ptr_);
    common::tools::MiTimer::cancel(v6);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 64));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "clear",
      436);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v24,
           (const char (*)[42])"[HUNTING] getMainWorldScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
    __for_range = &this->chosen_group_set_;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->chosen_group_set_)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->chosen_group_set_)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v8 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v1 + 48) = *v9;
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v1 + 128),
        (const std::vector<unsigned int>::value_type *)(v1 + 48));
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    v10 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BlockGroupComp = Scene::getBlockGroupComp(v10);
    if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(SceneBlockGroupComp *, unsigned __int64, __int64))v12)(BlockGroupComp, v1 + 128, 1LL);
    std::unordered_set<unsigned int>::clear(&this->chosen_group_set_);
    v13 = (((_BYTE)this + 52) & 7u) + 3;
    v14 = (*(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v14 )
      __asan_report_store4(&this->finished_clue_group_num_, v13, v14);
    this->finished_clue_group_num_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_loaded_group_id_, v13, &this->cur_loaded_group_id_);
    }
    this->cur_loaded_group_id_ = 0;
    v15 = (*(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v15 )
      __asan_report_store4(&this->cur_ref_index_, (((_BYTE)this + 44) & 7u) + 3, v15);
    this->cur_ref_index_ = 0;
    v16 = (((_BYTE)this + 116) & 7u) + 3;
    v17 = (*(_BYTE *)(((unsigned __int64)&this->hunting_fail_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hunting_fail_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v17 )
      __asan_report_store4(&this->hunting_fail_time_, v16, v17);
    this->hunting_fail_time_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->destination_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->destination_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->destination_group_id_, v16, &this->destination_group_id_);
    }
    this->destination_group_id_ = 0;
    __for_range_0 = &this->observer_vec_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<std::weak_ptr<Observer>>::begin(&this->observer_vec_)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<std::weak_ptr<Observer>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::weak_ptr<Observer> *,std::vector<std::weak_ptr<Observer>>>(
              (const __gnu_cxx::__normal_iterator<std::weak_ptr<Observer>*,std::vector<std::weak_ptr<Observer>> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<std::weak_ptr<Observer>*,std::vector<std::weak_ptr<Observer>> > *)&__for_end) )
    {
      v18 = __gnu_cxx::__normal_iterator<std::weak_ptr<Observer> *,std::vector<std::weak_ptr<Observer>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Observer>*,std::vector<std::weak_ptr<Observer>> > *const)&__for_begin);
      std::weak_ptr<Observer>::weak_ptr((std::weak_ptr<Observer> *const)(v1 + 96), v18);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, (std::weak_ptr<Observer> *)(v1 + 96));
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)(v1 + 96));
      __gnu_cxx::__normal_iterator<std::weak_ptr<Observer> *,std::vector<std::weak_ptr<Observer>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Observer>*,std::vector<std::weak_ptr<Observer>> > *const)&__for_begin);
    }
    std::vector<std::weak_ptr<Observer>>::clear(&this->observer_vec_);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 64));
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 461: range 0000000016C7BAA0-0000000016C7CDAD
int32_t __cdecl HuntingRecord::calcNextClueGroupId(
        HuntingRecord *const this,
        const Vector3 *pos,
        uint32_t *next_group_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>> >,false,false>::pointer v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // eax
  std::vector<unsigned int>::size_type v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::vector<unsigned int>::reference v23; // rax
  _DWORD *v24; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>> >,false,false>::pointer v25; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>> >,false,false>::pointer v26; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v27; // rax
  _DWORD *v28; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::pointer v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  unsigned int *M_current; // r15
  unsigned int *v38; // r14
  int v39; // eax
  std::vector<unsigned int>::size_type v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::vector<unsigned int>::size_type v44; // rsi
  std::vector<unsigned int>::reference v45; // rax
  uint32_t *v46; // rdx
  uint32_t v47; // ecx
  char v48; // dl
  __int64 v49; // rdx
  int32_t result; // eax
  float search_radius; // [rsp+2Ch] [rbp-2B4h]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-2B0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-2A8h] BYREF
  const data::HuntingRegionExcelConfig *region_config_ptr; // [rsp+40h] [rbp-2A0h]
  const GroupInfoScriptConfig *des_group_info_ptr; // [rsp+48h] [rbp-298h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+50h] [rbp-290h]
  const GroupInfoScriptConfig *group_info_ptr; // [rsp+58h] [rbp-288h]
  std::shared_ptr<Config> v59; // [rsp+60h] [rbp-280h] BYREF
  common::milog::MiLogStream v60; // [rsp+70h] [rbp-270h] BYREF
  char v61[592]; // [rsp+90h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 8 rand:507 64 4 20 target_clue_type:513 80 4 12 group_id:523 96 8 8 iter:494 128 8 25 ta"
                        "rget_group_set_iter:514 160 8 14 des_2d_pos:489 192 8 17 source_2d_pos:490 224 8 11 des_dir:491 "
                        "256 8 14 target_pos:535 288 16 13 scene_ptr:469 320 16 9 timer:522 352 24 12 type_vec:500 416 24"
                        " 23 candidate_group_vec:520 480 24 22 unchosen_point_vec:521";
  *(_QWORD *)(v3 + 16) = HuntingRecord::calcNextClueGroupId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -219021312;
  v5[536862730] = -219021312;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  region_config_ptr = HuntingRecord::getRegionConfig(this);
  if ( region_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v3 + 288));
    if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v3 + 288)) )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "calcNextClueGroupId",
        472);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v60,
             (const char (*)[42])"[HUNTING] getMainWorldScene failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v60);
      v7 = -1;
    }
    else if ( std::vector<unsigned int>::size(&region_config_ptr->destination_group) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v59);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->destination_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->destination_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->destination_group_id_);
      }
      des_group_info_ptr = LuaConfigMgr::findGroupInfoConfig(p_lua_config_mgr, this->destination_group_id_);
      std::shared_ptr<Config>::~shared_ptr(&v59);
      if ( des_group_info_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->center_radius >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr->center_radius >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr->center_radius);
        }
        search_radius = (float)(int)region_config_ptr->center_radius;
        Vector2::Vector2((Vector2 *const)(v3 + 160), &des_group_info_ptr->pos);
        Vector2::Vector2((Vector2 *const)(v3 + 192), pos);
        *(Vector2 *)(v3 + 224) = Vector2::operator-((const Vector2 *const)(v3 + 160), (const Vector2 *)(v3 + 192));
        Vector2::normalize((Vector2 *const)(v3 + 224));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v59);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59);
        *(std::unordered_map<unsigned int,std::map<unsigned int,std::unordered_set<unsigned int>>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,std::unordered_set<unsigned int>>>::find(&v12->design_config.txt_config_mgr.hunting_config_mgr.hunting_region_clue_type_group_map_, &region_config_ptr->id);
        std::shared_ptr<Config>::~shared_ptr(&v59);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v59);
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59);
        *(std::unordered_map<unsigned int,std::map<unsigned int,std::unordered_set<unsigned int>>>::const_iterator *)(v3 + 256) = std::unordered_map<unsigned int,std::map<unsigned int,std::unordered_set<unsigned int>>>::end(&v13->design_config.txt_config_mgr.hunting_config_mgr.hunting_region_clue_type_group_map_);
        v14 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>> >,false> *)(v3 + 96),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>> >,false> *)(v3 + 256));
        std::shared_ptr<Config>::~shared_ptr(&v59);
        if ( v14 )
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/hunting_record.cpp",
            "calcNextClueGroupId",
            497);
          v15 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  &v60,
                  (const char (*)[63])"[HUNTING] hunting_region_clue_type_group_map_ cannot find id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &region_config_ptr->id);
          common::milog::MiLogStream::~MiLogStream(&v60);
          v7 = -1;
        }
        else
        {
          v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>> >,false,false> *const)(v3 + 96));
          common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,std::unordered_set<unsigned int>>>(
            (std::vector<unsigned int> *)(v3 + 352),
            &v16->second);
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352)) )
          {
            v18 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352));
            *(_DWORD *)(v3 + 48) = common::tools::RandomUtils::rand<unsigned int>(0, v18 - 1);
            v19 = *(unsigned int *)(v3 + 48);
            if ( v19 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352)) )
            {
              v23 = std::vector<unsigned int>::operator[](
                      (std::vector<unsigned int> *const)(v3 + 352),
                      *(unsigned int *)(v3 + 48));
              v24 = v23;
              if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v23);
              }
              *(_DWORD *)(v3 + 64) = *v24;
              v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>> >,false,false> *const)(v3 + 96));
              *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 128) = std::map<unsigned int,std::unordered_set<unsigned int>>::find(&v25->second, (const std::map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 64));
              v26 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::unordered_set<unsigned int>> >,false,false> *const)(v3 + 96));
              *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 256) = std::map<unsigned int,std::unordered_set<unsigned int>>::end(&v26->second);
              if ( std::operator==(
                     (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v3 + 128),
                     (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v3 + 256)) )
              {
                common::milog::MiLogStream::create(
                  &v60,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/hunting/hunting_record.cpp",
                  "calcNextClueGroupId",
                  517);
                common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v60,
                  (const char (*)[41])"[HUNTING] target_group_set_iter is end()");
                common::milog::MiLogStream::~MiLogStream(&v60);
                v7 = -1;
              }
              else
              {
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 416));
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 480));
                common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 320));
                __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > > *const)(v3 + 128))->second;
                __for_begin._M_cur = std::unordered_set<unsigned int>::begin(__for_range)._M_cur;
                __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
                while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
                {
                  v27 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
                  v28 = v27;
                  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v27);
                  }
                  *(_DWORD *)(v3 + 80) = *v28;
                  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                          &this->chosen_group_set_,
                          (const unsigned int *)(v3 + 80)) )
                  {
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)&v59);
                    v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59);
                    group_info_ptr = LuaConfigMgr::findGroupInfoConfig(
                                       &v29->design_config.lua_config_mgr,
                                       *(_DWORD *)(v3 + 80));
                    std::shared_ptr<Config>::~shared_ptr(&v59);
                    if ( !group_info_ptr )
                    {
                      common::milog::MiLogStream::create(
                        &v60,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/hunting/hunting_record.cpp",
                        "calcNextClueGroupId",
                        532);
                      v30 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                              &v60,
                              (const char (*)[45])"[HUNTING] group_info_ptr is null, group_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v3 + 80));
                      common::milog::MiLogStream::~MiLogStream(&v60);
                      v7 = -1;
                      goto LABEL_52;
                    }
                    Vector2::Vector2((Vector2 *const)(v3 + 256), &group_info_ptr->pos);
                    if ( isPointInsideSectorRing(
                           (const Vector2 *)(v3 + 192),
                           (const Vector2 *)(v3 + 224),
                           search_radius / 2.0,
                           search_radius,
                           60.0,
                           (const Vector2 *)(v3 + 256)) )
                    {
                      std::vector<unsigned int>::push_back(
                        (std::vector<unsigned int> *const)(v3 + 416),
                        (const std::vector<unsigned int>::value_type *)(v3 + 80));
                    }
                    std::vector<unsigned int>::push_back(
                      (std::vector<unsigned int> *const)(v3 + 480),
                      (const std::vector<unsigned int>::value_type *)(v3 + 80));
                  }
                  std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
                }
                common::milog::MiLogStream::create(
                  &v60,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/hunting/hunting_record.cpp",
                  "calcNextClueGroupId",
                  543);
                v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        &v60,
                        (const char (*)[35])"[HUNTING] [PERF] find group cost: ");
                *(_DWORD *)(v3 + 80) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 320));
                v32 = common::milog::MiLogStream::operator<<<int,(int *)0>(v31, (const int *)(v3 + 80));
                v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v32,
                        (const char (*)[14])" group size: ");
                v34 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > > *const)(v3 + 128));
                __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_set<unsigned int>::size(&v34->second);
                v35 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v33,
                        (const unsigned __int64 *)&__for_end);
                v36 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v35,
                        (const char (*)[24])", candidate_group_vec: ");
                *(_QWORD *)(v3 + 256) = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 416));
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v36,
                  (const unsigned __int64 *)(v3 + 256));
                common::milog::MiLogStream::~MiLogStream(&v60);
                if ( !std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 416)) )
                {
                  common::milog::MiLogStream::create(
                    &v60,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/hunting/hunting_record.cpp",
                    "calcNextClueGroupId",
                    548);
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v60,
                    (const char (*)[39])"[HUNTING] candidate_group_vec is empty");
                  common::milog::MiLogStream::~MiLogStream(&v60);
                  M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 480))._M_current;
                  v38 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 480))._M_current;
                  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 416))._M_current;
                  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256),
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end);
                  std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
                    (std::vector<unsigned int> *const)(v3 + 416),
                    *(std::vector<unsigned int>::const_iterator *)(v3 + 256),
                    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v38,
                    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
                }
                if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 416)) )
                {
                  v39 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 416));
                  *(_DWORD *)(v3 + 48) = common::tools::RandomUtils::rand<unsigned int>(0, v39 - 1);
                  v40 = *(unsigned int *)(v3 + 48);
                  if ( v40 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 416)) )
                  {
                    v44 = *(unsigned int *)(v3 + 48);
                    v45 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 416), v44);
                    v46 = v45;
                    if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v45);
                    }
                    v47 = *v46;
                    v48 = *(_BYTE *)(((unsigned __int64)next_group_id >> 3) + 0x7FFF8000);
                    LOBYTE(v44) = v48 != 0;
                    v49 = (v48 != 0) & (unsigned __int8)((char)(((unsigned __int8)next_group_id & 7) + 3) >= v48);
                    if ( (_BYTE)v49 )
                      __asan_report_store4(next_group_id, v44, v49);
                    *next_group_id = v47;
                    v7 = 0;
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v60,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/hunting/hunting_record.cpp",
                      "calcNextClueGroupId",
                      561);
                    v41 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                            &v60,
                            (const char (*)[31])"[HUNTING] random error, rand: ");
                    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v41,
                            (const unsigned int *)(v3 + 48));
                    v43 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                            v42,
                            (const char (*)[31])" ,candidate_group_vec.size(): ");
                    *(_QWORD *)(v3 + 256) = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 416));
                    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v43,
                      (const unsigned __int64 *)(v3 + 256));
                    common::milog::MiLogStream::~MiLogStream(&v60);
                    v7 = -1;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v60,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/hunting/hunting_record.cpp",
                    "calcNextClueGroupId",
                    555);
                  common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    &v60,
                    (const char (*)[46])"[HUNTING] candidate group shoule not be empty");
                  common::milog::MiLogStream::~MiLogStream(&v60);
                  v7 = -1;
                }
LABEL_52:
                common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 320));
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 480));
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 416));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v60,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/hunting/hunting_record.cpp",
                "calcNextClueGroupId",
                510);
              v20 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v60,
                      (const char (*)[31])"[HUNTING] random error, rand: ");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v3 + 48));
              v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v21,
                      (const char (*)[20])" ,type_vec.size(): ");
              *(_QWORD *)(v3 + 256) = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352));
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v22,
                (const unsigned __int64 *)(v3 + 256));
              common::milog::MiLogStream::~MiLogStream(&v60);
              v7 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v60,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/hunting_record.cpp",
              "calcNextClueGroupId",
              504);
            v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v60,
                    (const char (*)[45])"[HUNTING] region has not group!, region_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &region_config_ptr->id);
            common::milog::MiLogStream::~MiLogStream(&v60);
            v7 = -1;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 352));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "calcNextClueGroupId",
          484);
        v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v60,
                (const char (*)[49])"[HUNTING] des_group_info_ptr is null, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int>(v11, &region_config_ptr->destination_group);
        common::milog::MiLogStream::~MiLogStream(&v60);
        v7 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "calcNextClueGroupId",
        478);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v60,
             (const char (*)[47])"[HUNTING] destination_group should not empty: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->refresh_id_);
      common::milog::MiLogStream::~MiLogStream(&v60);
      v7 = -1;
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 288));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "calcNextClueGroupId",
      465);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v60,
           (const char (*)[50])"[HUNTING] region_config_ptr is null, refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->refresh_id_);
    common::milog::MiLogStream::~MiLogStream(&v60);
    v7 = -1;
  }
  result = v7;
  if ( v61 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 569: range 0000000016C7CDAE-0000000016C7D4F2
void __cdecl HuntingRecord::onGroupsReplace(HuntingRecord *const this, const GroupsReplaceEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  std::vector<unsigned int>::const_reference v8; // rax
  _DWORD *v9; // rdx
  int v10; // eax
  std::vector<unsigned int>::const_reference v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  uint32_t rand_0; // [rsp+18h] [rbp-A8h]
  uint32_t rand; // [rsp+1Ch] [rbp-A4h]
  const data::HuntingGroupInfoExcelConfig *group_info_ptr; // [rsp+20h] [rbp-A0h]
  const data::HuntingRegionExcelConfig *region_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-80h] BYREF
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 next_group_id:591";
  *(_QWORD *)(v2 + 16) = HuntingRecord::onGroupsReplace;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &event->replaced_groups,
         &this->cur_loaded_group_id_) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/hunting_record.cpp",
      "onGroupsReplace",
      575);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v19,
      (const char (*)[43])"[HUNTING] cur loaded group has be replaced");
    common::milog::MiLogStream::~MiLogStream(&v19);
    std::unordered_set<unsigned int>::erase(&this->chosen_group_set_, &this->cur_loaded_group_id_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.hunting_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_loaded_group_id_);
    }
    group_info_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                       p_hunting_config_mgr,
                       this->cur_loaded_group_id_);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( !group_info_ptr )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "onGroupsReplace",
        581);
      v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v19,
             (const char (*)[56])"[HUNTING] group_info_ptr is null, cur_loaded_group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_loaded_group_id_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      goto LABEL_28;
    }
    region_config_ptr = HuntingRecord::getRegionConfig(this);
    if ( !region_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "onGroupsReplace",
        588);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v19,
        (const char (*)[36])"[HUNTING] region_config_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v19);
      goto LABEL_28;
    }
    *(_DWORD *)(v2 + 32) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&group_info_ptr->point_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&group_info_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&group_info_ptr->point_type);
    }
    if ( group_info_ptr->point_type == HUNTING_CLUE_FINAL )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/hunting_record.cpp",
        "onGroupsReplace",
        594);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v19,
        (const char (*)[48])"[HUNTING] hunting final group has been repaced!");
      common::milog::MiLogStream::~MiLogStream(&v19);
      if ( !std::vector<unsigned int>::size(&region_config_ptr->safe_destination_group) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "onGroupsReplace",
          597);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          &v19,
          (const char (*)[49])"[HUNTING] region safe_destination_group is empty");
        common::milog::MiLogStream::~MiLogStream(&v19);
        goto LABEL_28;
      }
      v7 = std::vector<unsigned int>::size(&region_config_ptr->safe_destination_group);
      rand = common::tools::RandomUtils::rand<unsigned int>(0, v7 - 1);
      v8 = std::vector<unsigned int>::operator[](&region_config_ptr->safe_destination_group, rand);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v2 + 32) = *v9;
    }
    else
    {
      if ( !std::vector<unsigned int>::size(&region_config_ptr->safe_clue_group) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "onGroupsReplace",
          607);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          &v19,
          (const char (*)[42])"[HUNTING] region safe_clue_group is empty");
        common::milog::MiLogStream::~MiLogStream(&v19);
        goto LABEL_28;
      }
      v10 = std::vector<unsigned int>::size(&region_config_ptr->safe_clue_group);
      rand_0 = common::tools::RandomUtils::rand<unsigned int>(0, v10 - 1);
      v11 = std::vector<unsigned int>::operator[](&region_config_ptr->safe_clue_group, rand_0);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v2 + 32) = *v12;
    }
    if ( (unsigned int)HuntingRecord::processClueGroup(this, *(_DWORD *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "onGroupsReplace",
        616);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v19,
        (const char (*)[34])"[HUNTING] processClueGroup failed");
    }
    else
    {
      std::unordered_set<unsigned int>::insert(
        &this->chosen_group_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/hunting_record.cpp",
        "onGroupsReplace",
        620);
      v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v19,
              (const char (*)[35])"[HUNTING] after replace group to: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
    }
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
LABEL_28:
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 624: range 0000000016C7D4F4-0000000016C7DE40
void __cdecl HuntingRecord::onMonsterDie(HuntingRecord *const this, const MonsterDieEvent *event)
{
  uint32_t group_id; // ecx
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  data::HuntingCluePointType point_type; // eax
  HuntingExcelConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  uint32_t monster_group_id; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t config_id; // ecx
  PlayerHuntingComp *HuntingComp; // rdi
  uint32_t monster_config_id; // edx
  __int64 v18; // rdx
  const data::HuntingGroupInfoExcelConfig *group_info_config_ptr; // [rsp+18h] [rbp-58h]
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+20h] [rbp-50h]
  const data::HuntingClueMonsterExcelConfig *clue_monster_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v23; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == hunting_start )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->group_id);
    }
    group_id = event->group_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_loaded_group_id_);
    }
    if ( group_id == this->cur_loaded_group_id_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.hunting_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_loaded_group_id_);
      }
      group_info_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                                p_hunting_config_mgr,
                                this->cur_loaded_group_id_);
      std::shared_ptr<Config>::~shared_ptr(&v23);
      if ( group_info_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&group_info_config_ptr->point_type);
        }
        if ( group_info_config_ptr->point_type == HUNTING_CLUE_FINAL
          || group_info_config_ptr->point_type == HUNTING_CLUE_MONSTER )
        {
          if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&group_info_config_ptr->point_type);
          }
          point_type = group_info_config_ptr->point_type;
          if ( point_type == HUNTING_CLUE_MONSTER )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v23);
            v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.hunting_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->config_id >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&event->config_id);
            }
            clue_monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingClueMonsterExcelConfig(
                                        v9,
                                        event->config_id);
            std::shared_ptr<Config>::~shared_ptr(&v23);
            if ( clue_monster_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&clue_monster_config_ptr->monster_group_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&clue_monster_config_ptr->monster_group_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&clue_monster_config_ptr->monster_group_id);
              }
              monster_group_id = clue_monster_config_ptr->monster_group_id;
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->cur_ref_index_);
              }
              if ( monster_group_id == this->cur_ref_index_ )
              {
                if ( *(char *)(((unsigned __int64)&clue_monster_config_ptr->is_clue_monster >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(&clue_monster_config_ptr->is_clue_monster);
                if ( clue_monster_config_ptr->is_clue_monster )
                {
                  common::milog::MiLogStream::create(
                    &v24,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/hunting/hunting_record.cpp",
                    "onMonsterDie",
                    665);
                  v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v24,
                          (const char (*)[49])"[HUNTING] clue monster dead, monster_config_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &event->config_id);
                  common::milog::MiLogStream::~MiLogStream(&v24);
                  if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4(&this->finished_clue_group_num_);
                  }
                  ++this->finished_clue_group_num_;
                  HuntingRecord::updateHuntingProgress(this, 0);
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v24,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/hunting/hunting_record.cpp",
                  "onMonsterDie",
                  659);
                v12 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                        &v24,
                        (const char (*)[63])"[HUNTING] hunting monster group id not match, cur_ref_index_: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->cur_ref_index_);
                common::milog::MiLogStream::~MiLogStream(&v24);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v24,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/hunting/hunting_record.cpp",
                "onMonsterDie",
                654);
              v10 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                      &v24,
                      (const char (*)[69])"[HUNTING] hunting clue monster config not found, monster_config_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->config_id);
              common::milog::MiLogStream::~MiLogStream(&v24);
            }
          }
          else if ( point_type == HUNTING_CLUE_FINAL )
          {
            monster_config_ptr = HuntingRecord::getMonsterConfig(this);
            if ( monster_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->config_id >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&event->config_id);
              }
              config_id = event->config_id;
              if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->monster_config_id_);
              }
              if ( config_id == this->monster_config_id_ )
              {
                if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->hunting_finish_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)monster_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->hunting_finish_type >> 3)
                                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load4(&monster_config_ptr->hunting_finish_type);
                }
                if ( monster_config_ptr->hunting_finish_type == HUNTING_FINISH_TYPE_TARGET_MONSTER )
                {
                  HuntingRecord::notifyHuntingFinalEvent(this, 1);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  HuntingComp = Player::getHuntingComp(this->player_);
                  if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    HuntingComp = (PlayerHuntingComp *)&this->monster_config_id_;
                    __asan_report_load4(&this->monster_config_id_);
                  }
                  monster_config_id = this->monster_config_id_;
                  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    HuntingComp = (PlayerHuntingComp *)&this->refresh_id_;
                    __asan_report_load4(&this->refresh_id_);
                  }
                  PlayerHuntingComp::onSuccOngoingHunting(HuntingComp, this->refresh_id_, monster_config_id);
                  v18 = (*(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000));
                  if ( (_BYTE)v18 )
                    __asan_report_store4(&this->state_, (((_BYTE)this - 100) & 7u) + 3, v18);
                  this->state_ = hunting_finish;
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v24,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/hunting/hunting_record.cpp",
                "onMonsterDie",
                676);
              v14 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                      &v24,
                      (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->monster_config_id_);
              common::milog::MiLogStream::~MiLogStream(&v24);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/hunting_record.cpp",
            "onMonsterDie",
            643);
          v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                 &v24,
                 (const char (*)[56])"[HUNTING] hunting group info type not match, group_id: ");
          v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_loaded_group_id_);
          v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])", type: ");
          common::milog::MiLogStream::operator<<<data::HuntingCluePointType,(data::HuntingCluePointType*)0>(
            v7,
            &group_info_config_ptr->point_type);
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "onMonsterDie",
          637);
        v4 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v24,
               (const char (*)[51])"[HUNTING] hunting group info not found, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_loaded_group_id_);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
    }
  }
};

// Line 695: range 0000000016C7DE42-0000000016C7E4CE
void __cdecl HuntingRecord::onWorldGather(HuntingRecord *const this, const WorldGatherEvent *event)
{
  uint32_t group_id; // ecx
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  HuntingExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  uint32_t cur_ref_index; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const data::HuntingGroupInfoExcelConfig *group_info_config_ptr; // [rsp+10h] [rbp-50h]
  const data::HuntingClueGatherExcelConfig *clue_gather_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == hunting_start )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->group_id);
    }
    group_id = event->group_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_loaded_group_id_);
    }
    if ( group_id == this->cur_loaded_group_id_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v13);
      p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.hunting_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_loaded_group_id_);
      }
      group_info_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                                p_hunting_config_mgr,
                                this->cur_loaded_group_id_);
      std::shared_ptr<Config>::~shared_ptr(&v13);
      if ( group_info_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&group_info_config_ptr->point_type);
        }
        if ( group_info_config_ptr->point_type == HUNTING_CLUE_GATHER )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v13);
          v6 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.hunting_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event->config_id);
          }
          clue_gather_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingClueGatherExcelConfig(
                                     v6,
                                     event->config_id);
          std::shared_ptr<Config>::~shared_ptr(&v13);
          if ( clue_gather_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->cur_ref_index_);
            }
            cur_ref_index = this->cur_ref_index_;
            if ( *(_BYTE *)(((unsigned __int64)&clue_gather_config_ptr->gather_group_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&clue_gather_config_ptr->gather_group_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&clue_gather_config_ptr->gather_group_id);
            }
            if ( cur_ref_index == clue_gather_config_ptr->gather_group_id )
            {
              if ( *(_BYTE *)(((unsigned __int64)&clue_gather_config_ptr->is_clue_gather >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)clue_gather_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&clue_gather_config_ptr->is_clue_gather >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load1(&clue_gather_config_ptr->is_clue_gather);
              }
              if ( clue_gather_config_ptr->is_clue_gather )
              {
                common::milog::MiLogStream::create(
                  &v14,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/hunting/hunting_record.cpp",
                  "onWorldGather",
                  733);
                v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v14,
                        (const char (*)[47])"[HUNTING] clue gather dead, gather_config_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->config_id);
                common::milog::MiLogStream::~MiLogStream(&v14);
                if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->finished_clue_group_num_);
                }
                ++this->finished_clue_group_num_;
                HuntingRecord::updateHuntingProgress(this, 0);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v14,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/hunting/hunting_record.cpp",
                "onWorldGather",
                726);
              v9 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                     &v14,
                     (const char (*)[67])"[HUNTING] hunting clue gather config not found, gather_config_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->config_id);
              common::milog::MiLogStream::~MiLogStream(&v14);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v14,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/hunting/hunting_record.cpp",
              "onWorldGather",
              720);
            v7 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                   &v14,
                   (const char (*)[67])"[HUNTING] hunting clue gather config not found, gather_config_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->config_id);
            common::milog::MiLogStream::~MiLogStream(&v14);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v14,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/hunting_record.cpp",
            "onWorldGather",
            713);
          v5 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                 &v14,
                 (const char (*)[74])"[HUNTING] hunting group info point_type is not HUNTING_CLUE_GATHER type: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_loaded_group_id_);
          common::milog::MiLogStream::~MiLogStream(&v14);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "onWorldGather",
          708);
        v4 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v14,
               (const char (*)[51])"[HUNTING] hunting group info not found, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_loaded_group_id_);
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/hunting_record.cpp",
        "onWorldGather",
        702);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v14,
        (const char (*)[29])"[HUNTING] group_id not match");
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
};

// Line 740: range 0000000016C7E4D0-0000000016C7E8D8
void __cdecl HuntingRecord::onInteractGadgetEvent(HuntingRecord *const this, const InteractGadgetEvent *event)
{
  uint32_t group_id; // ecx
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  const data::HuntingGroupInfoExcelConfig *group_info_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == hunting_start )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->group_id);
    }
    group_id = event->group_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_loaded_group_id_);
    }
    if ( group_id == this->cur_loaded_group_id_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v7);
      p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.hunting_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_loaded_group_id_);
      }
      group_info_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                                p_hunting_config_mgr,
                                this->cur_loaded_group_id_);
      std::shared_ptr<Config>::~shared_ptr(&v7);
      if ( group_info_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&group_info_config_ptr->point_type);
        }
        if ( group_info_config_ptr->point_type )
        {
          common::milog::MiLogStream::create(
            &v8,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/hunting_record.cpp",
            "onInteractGadgetEvent",
            758);
          v5 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                 &v8,
                 (const char (*)[75])"[HUNTING] hunting group info point_type is not HUNTING_CLUE_ITERACT type: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_loaded_group_id_);
          common::milog::MiLogStream::~MiLogStream(&v8);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v8,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/hunting/hunting_record.cpp",
            "onInteractGadgetEvent",
            762);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v8,
            (const char (*)[27])"[HUNTING] clue gadget dead");
          common::milog::MiLogStream::~MiLogStream(&v8);
          if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->finished_clue_group_num_);
          }
          ++this->finished_clue_group_num_;
          HuntingRecord::updateHuntingProgress(this, 0);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "onInteractGadgetEvent",
          753);
        v4 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v8,
               (const char (*)[51])"[HUNTING] hunting group info not found, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_loaded_group_id_);
        common::milog::MiLogStream::~MiLogStream(&v8);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/hunting_record.cpp",
        "onInteractGadgetEvent",
        747);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v8,
        (const char (*)[29])"[HUNTING] group_id not match");
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
};

// Line 768: range 0000000016C7E8DA-0000000016C7EDAB
void __cdecl HuntingRecord::onClearGroupMonsterEvent(HuntingRecord *const this, const ClearGroupMonsterEvent *event)
{
  uint32_t group_id; // ecx
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerHuntingComp *HuntingComp; // rdi
  uint32_t monster_config_id; // edx
  __int64 v9; // rdx
  const data::HuntingGroupInfoExcelConfig *group_info_config_ptr; // [rsp+10h] [rbp-50h]
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == hunting_start )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->group_id);
    }
    group_id = event->group_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_loaded_group_id_);
    }
    if ( group_id == this->cur_loaded_group_id_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v13);
      p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.hunting_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_loaded_group_id_);
      }
      group_info_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                                p_hunting_config_mgr,
                                this->cur_loaded_group_id_);
      std::shared_ptr<Config>::~shared_ptr(&v13);
      if ( group_info_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&group_info_config_ptr->point_type);
        }
        if ( group_info_config_ptr->point_type == HUNTING_CLUE_FINAL )
        {
          monster_config_ptr = HuntingRecord::getMonsterConfig(this);
          if ( monster_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->hunting_finish_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)monster_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->hunting_finish_type >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(&monster_config_ptr->hunting_finish_type);
            }
            if ( monster_config_ptr->hunting_finish_type == HUNTING_FINISH_TYPE_ALL )
            {
              HuntingRecord::notifyHuntingFinalEvent(this, 1);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              HuntingComp = Player::getHuntingComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                HuntingComp = (PlayerHuntingComp *)&this->monster_config_id_;
                __asan_report_load4(&this->monster_config_id_);
              }
              monster_config_id = this->monster_config_id_;
              if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                HuntingComp = (PlayerHuntingComp *)&this->refresh_id_;
                __asan_report_load4(&this->refresh_id_);
              }
              PlayerHuntingComp::onSuccOngoingHunting(HuntingComp, this->refresh_id_, monster_config_id);
              v9 = (*(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000));
              if ( (_BYTE)v9 )
                __asan_report_store4(&this->state_, (((_BYTE)this - 100) & 7u) + 3, v9);
              this->state_ = hunting_finish;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v14,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/hunting_record.cpp",
              "onClearGroupMonsterEvent",
              794);
            v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                   &v14,
                   (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->monster_config_id_);
            common::milog::MiLogStream::~MiLogStream(&v14);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v14,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/hunting/hunting_record.cpp",
            "onClearGroupMonsterEvent",
            787);
          v5 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                 &v14,
                 (const char (*)[73])"[HUNTING] hunting group info point_type is not HUNTING_CLUE_FINAL type: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_loaded_group_id_);
          common::milog::MiLogStream::~MiLogStream(&v14);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "onClearGroupMonsterEvent",
          781);
        v4 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v14,
               (const char (*)[51])"[HUNTING] hunting group info not found, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_loaded_group_id_);
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
    }
  }
};

// Line 808: range 0000000016C7EE80-0000000016C80510
int32_t __cdecl HuntingRecord::updateHuntingProgress(HuntingRecord *const this, bool is_first)
{
  int v2; // xmm1_4
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  Scene *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t finished_clue_group_num; // ecx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const Vector3 *Position; // rcx
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  proto::Vector *v26; // rax
  Player *player; // r14
  std::__shared_ptr_access<proto::HuntingRevealFinalNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto::HuntingRevealFinalNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto::HuntingRevealFinalNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  proto::Vector *v31; // rax
  Player *v32; // r14
  std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  proto::Vector *v35; // rax
  std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rcx
  std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  Player *v38; // r14
  unsigned int *v39; // r8
  unsigned int *v40; // r9
  int v41; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r14
  common::milog::MiLogStream *v43; // r14
  int32_t result; // eax
  void (__fastcall *v45)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // [rsp+10h] [rbp-210h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+18h] [rbp-208h]
  int32_t v47; // [rsp+20h] [rbp-200h]
  std::allocator<unsigned int> __a; // [rsp+36h] [rbp-1EAh] BYREF
  bool is_final; // [rsp+37h] [rbp-1E9h]
  int v50; // [rsp+38h] [rbp-1E8h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-1E4h] BYREF
  int32_t cor_time; // [rsp+40h] [rbp-1E0h]
  uint32_t old_group_id; // [rsp+44h] [rbp-1DCh]
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+48h] [rbp-1D8h]
  proto::HuntingPair *hunting_pair_1; // [rsp+58h] [rbp-1C8h]
  proto::HuntingPair *hunting_pair_0; // [rsp+60h] [rbp-1C0h]
  proto::HuntingPair *hunting_pair; // [rsp+68h] [rbp-1B8h]
  std::vector<unsigned int> v59; // [rsp+70h] [rbp-1B0h] BYREF
  HuntingRecord::updateHuntingProgress::<lambda(Player&)> v60; // [rsp+90h] [rbp-190h] BYREF
  common::milog::MiLogStream v61; // [rsp+B0h] [rbp-170h] BYREF
  char v62[336]; // [rsp+D0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 8 time:823 48 4 17 next_group_id:846 64 12 18 next_group_pos:868 96 16 9 timer:809 128 16"
                        " 13 scene_ptr:810 160 16 14 avatar_ptr:839 192 16 14 notify_ptr:907 224 16 13 event_ptr:916 256 "
                        "16 13 world_ptr:917";
  *(_QWORD *)(v3 + 16) = HuntingRecord::updateHuntingProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219020288;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -202178560;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v3 + 128));
  if ( !std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v3 + 128)) )
  {
    cor_time = CoroutineHelper::time();
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_loaded_group_id_);
    }
    if ( this->cur_loaded_group_id_ )
    {
      v7 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      BlockGroupComp = Scene::getBlockGroupComp(v7);
      if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v45 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v8;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_loaded_group_id_);
      }
      val = this->cur_loaded_group_id_;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&v59, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
      v45(BlockGroupComp, &v59, 1LL);
      std::vector<unsigned int>::~vector(&v59);
      std::allocator<unsigned int>::~allocator(&__a);
    }
    *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 96));
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/hunting_record.cpp",
      "updateHuntingProgress",
      824);
    v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v61,
           (const char (*)[41])"[HUNTING] [PERF] unregisterGroups cost: ");
    v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])" coroutine cost:");
    val = CoroutineHelper::time() - cor_time;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)&val);
    common::milog::MiLogStream::~MiLogStream(&v61);
    monster_config_ptr = HuntingRecord::getMonsterConfig(this);
    if ( !monster_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "updateHuntingProgress",
        830);
      v12 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v61,
              (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->monster_config_id_);
      common::milog::MiLogStream::~MiLogStream(&v61);
      v47 = -1;
      goto LABEL_78;
    }
    if ( !HuntingRecord::getRegionConfig(this) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "updateHuntingProgress",
        836);
      v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v61,
              (const char (*)[50])"[HUNTING] region_config_ptr is null, refresh_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->refresh_id_);
      common::milog::MiLogStream::~MiLogStream(&v61);
      v47 = -1;
      goto LABEL_78;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 160));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "updateHuntingProgress",
        842);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v61,
        (const char (*)[29])"[HUNTING] avatar_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v61);
      v47 = -1;
    }
    else
    {
      *(_DWORD *)(v3 + 48) = 0;
      is_final = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->finished_clue_group_num_);
      }
      finished_clue_group_num = this->finished_clue_group_num_;
      if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->search_point_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->search_point_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&monster_config_ptr->search_point_num);
      }
      if ( finished_clue_group_num < monster_config_ptr->search_point_num )
      {
        v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        Position = Entity::getPosition((const Entity *const)v15);
        if ( HuntingRecord::calcNextClueGroupId(this, Position, (uint32_t *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/hunting_record.cpp",
            "updateHuntingProgress",
            859);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v61,
            (const char (*)[37])"[HUNTING] calcNextClueGroupId failed");
          common::milog::MiLogStream::~MiLogStream(&v61);
          v47 = -1;
          goto LABEL_77;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/hunting/hunting_record.cpp",
          "updateHuntingProgress",
          851);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          &v61,
          (const char (*)[47])"[HUNTING] finish all clue, next is destination");
        common::milog::MiLogStream::~MiLogStream(&v61);
        if ( *(_BYTE *)(((unsigned __int64)&this->destination_group_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->destination_group_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->destination_group_id_);
        }
        *(_DWORD *)(v3 + 48) = this->destination_group_id_;
        is_final = 1;
      }
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/hunting_record.cpp",
        "updateHuntingProgress",
        863);
      v17 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v61,
              (const char (*)[44])"[HUNTING] [PERF] calcNextClueGroupId cost: ");
      val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 96))
          - *(_DWORD *)(v3 + 32);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)&val);
      common::milog::MiLogStream::~MiLogStream(&v61);
      *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 96));
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/hunting_record.cpp",
        "updateHuntingProgress",
        866);
      v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v61,
              (const char (*)[26])"[HUNTING] next group id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v61);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_loaded_group_id_);
      }
      old_group_id = this->cur_loaded_group_id_;
      *(_QWORD *)(v3 + 64) = HuntingRecord::getGroupPos(this, *(_DWORD *)(v3 + 48)).m128i_u64[0];
      *(_DWORD *)(v3 + 72) = v2;
      cor_time = CoroutineHelper::time();
      if ( (unsigned int)HuntingRecord::processClueGroup(this, *(_DWORD *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "updateHuntingProgress",
          873);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v61,
          (const char (*)[34])"[HUNTING] processClueGroup failed");
        common::milog::MiLogStream::~MiLogStream(&v61);
        v47 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/hunting/hunting_record.cpp",
          "updateHuntingProgress",
          877);
        v19 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v61,
                (const char (*)[41])"[HUNTING] [PERF] processClueGroup cost: ");
        v50 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 96))
            - *(_DWORD *)(v3 + 32);
        v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, &v50);
        v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v20,
                (const char (*)[17])" coroutine cost:");
        val = CoroutineHelper::time() - cor_time;
        common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)&val);
        common::milog::MiLogStream::~MiLogStream(&v61);
        *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 96));
        std::unordered_set<unsigned int>::insert(
          &this->chosen_group_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
        if ( !is_first )
        {
          if ( !is_final )
          {
            common::tools::perf::make_shared<proto::HuntingRevealClueNotify>();
            v22 = std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            hunting_pair = proto::HuntingRevealClueNotify::mutable_hunting_pair(v22);
            if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->refresh_id_);
            }
            proto::HuntingPair::set_refresh_id(hunting_pair, this->refresh_id_);
            if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->monster_config_id_);
            }
            proto::HuntingPair::set_monster_config_id(hunting_pair, this->monster_config_id_);
            v23 = std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            proto::HuntingRevealClueNotify::set_finished_group_id(v23, old_group_id);
            v24 = std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->finished_clue_group_num_);
            }
            proto::HuntingRevealClueNotify::set_finish_clue_count(v24, this->finished_clue_group_num_);
            v25 = std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            v26 = proto::HuntingRevealClueNotify::mutable_clue_position(v25);
            Vector3::toClient((const Vector3 *const)(v3 + 64), v26);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            player = this->player_;
            std::dynamic_pointer_cast<google::protobuf::Message const,proto::HuntingRevealClueNotify>((const std::shared_ptr<proto::HuntingRevealClueNotify> *)(v3 + 256));
            Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v3 + 256), 0LL);
            std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v3 + 256));
            std::shared_ptr<proto::HuntingRevealClueNotify>::~shared_ptr((std::shared_ptr<proto::HuntingRevealClueNotify> *const)(v3 + 224));
          }
          else
          {
            common::tools::perf::make_shared<proto::HuntingRevealFinalNotify>();
            v28 = std::__shared_ptr_access<proto::HuntingRevealFinalNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealFinalNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            hunting_pair_0 = proto::HuntingRevealFinalNotify::mutable_hunting_pair(v28);
            if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->refresh_id_);
            }
            proto::HuntingPair::set_refresh_id(hunting_pair_0, this->refresh_id_);
            if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->monster_config_id_);
            }
            proto::HuntingPair::set_monster_config_id(hunting_pair_0, this->monster_config_id_);
            v29 = std::__shared_ptr_access<proto::HuntingRevealFinalNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealFinalNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            proto::HuntingRevealFinalNotify::set_finished_group_id(v29, old_group_id);
            v30 = std::__shared_ptr_access<proto::HuntingRevealFinalNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealFinalNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            v31 = proto::HuntingRevealFinalNotify::mutable_final_position(v30);
            Vector3::toClient((const Vector3 *const)(v3 + 64), v31);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v32 = this->player_;
            std::dynamic_pointer_cast<google::protobuf::Message const,proto::HuntingRevealFinalNotify>((const std::shared_ptr<proto::HuntingRevealFinalNotify> *)(v3 + 256));
            Player::sendMessage(v32, (common::minet::ConstMessagePtr *)(v3 + 256), 0LL);
            std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v3 + 256));
            std::shared_ptr<proto::HuntingRevealFinalNotify>::~shared_ptr((std::shared_ptr<proto::HuntingRevealFinalNotify> *const)(v3 + 224));
          }
        }
        else
        {
          common::tools::perf::make_shared<proto::HuntingStartNotify>();
          v33 = std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          hunting_pair_1 = proto::HuntingStartNotify::mutable_hunting_pair(v33);
          if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->refresh_id_);
          }
          proto::HuntingPair::set_refresh_id(hunting_pair_1, this->refresh_id_);
          if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->monster_config_id_);
          }
          proto::HuntingPair::set_monster_config_id(hunting_pair_1, this->monster_config_id_);
          v34 = std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          v35 = proto::HuntingStartNotify::mutable_clue_position(v34);
          Vector3::toClient((const Vector3 *const)(v3 + 64), v35);
          v36 = std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&this->hunting_fail_time_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hunting_fail_time_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->hunting_fail_time_);
          }
          proto::HuntingStartNotify::set_fail_time(v36, this->hunting_fail_time_);
          v37 = std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingStartNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          proto::HuntingStartNotify::set_is_final(v37, is_final);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v38 = this->player_;
          std::dynamic_pointer_cast<google::protobuf::Message const,proto::HuntingStartNotify>((const std::shared_ptr<proto::HuntingStartNotify> *)(v3 + 256));
          Player::sendMessage(v38, (common::minet::ConstMessagePtr *)(v3 + 256), 0LL);
          std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v3 + 256));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::tools::perf::make_shared<WorldHuntingStartEvent,unsigned int &,unsigned int &,unsigned int>(
            (unsigned int *)(v3 + 224),
            &this->refresh_id_,
            &this->monster_config_id_,
            &val,
            v39,
            v40);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 256));
          if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 256)) )
          {
            common::milog::MiLogStream::create(
              &v61,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/hunting_record.cpp",
              "updateHuntingProgress",
              920);
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v61,
              (const char (*)[18])"world_ptr is null");
            common::milog::MiLogStream::~MiLogStream(&v61);
            v47 = -1;
            v41 = 0;
          }
          else
          {
            v42 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
            std::shared_ptr<PlayerWorld>::shared_ptr(&v60.__world_ptr, (const std::shared_ptr<PlayerWorld> *)(v3 + 256));
            std::shared_ptr<WorldHuntingStartEvent>::shared_ptr(
              &v60.__event_ptr,
              (const std::shared_ptr<WorldHuntingStartEvent> *)(v3 + 224));
            std::function<ForeachPolicy ()(Player &)>::function<HuntingRecord::updateHuntingProgress(bool)::{lambda(Player &)#1},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v61,
              &v60);
            World::foreachPlayer(v42, (std::function<ForeachPolicy(Player&)> *)&v61);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v61);
            HuntingRecord::updateHuntingProgress(bool)::{lambda(Player &)#1}::~Player(&v60);
            v41 = 1;
          }
          std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 256));
          std::shared_ptr<WorldHuntingStartEvent>::~shared_ptr((std::shared_ptr<WorldHuntingStartEvent> *const)(v3 + 224));
          std::shared_ptr<proto::HuntingStartNotify>::~shared_ptr((std::shared_ptr<proto::HuntingStartNotify> *const)(v3 + 192));
          if ( v41 != 1 )
            goto LABEL_77;
        }
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/hunting/hunting_record.cpp",
          "updateHuntingProgress",
          931);
        v43 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                &v61,
                (const char (*)[54])"[HUNTING] [PERF] updateHuntingProgress summary cost: ");
        val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 96));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v43, (const int *)&val);
        common::milog::MiLogStream::~MiLogStream(&v61);
        v47 = 0;
      }
    }
LABEL_77:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
    goto LABEL_78;
  }
  common::milog::MiLogStream::create(
    &v61,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/hunting/hunting_record.cpp",
    "updateHuntingProgress",
    813);
  v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v61,
         (const char (*)[42])"[HUNTING] getMainWorldScene failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v61);
  v47 = -1;
LABEL_78:
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 128));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 96));
  result = v47;
  if ( v62 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 923: range 0000000016C7EDAC-0000000016C7EE52
ForeachPolicy __cdecl HuntingRecord::updateHuntingProgress(bool)::{lambda(Player &)#1}::operator()(
        const HuntingRecord::updateHuntingProgress::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ebx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+10h] [rbp-20h] BYREF

  Uid = Player::getUid(player);
  v3 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  if ( Uid != World::getOwnerUid(v3) )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<WorldHuntingStartEvent,void>(&p_event_ptr, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  }
  return 0;
};

// Line 923: range 0000000016D34B2A-0000000016D34B6A
void __cdecl HuntingRecord::updateHuntingProgress(bool)::{lambda(Player &)#1}::Player(
        HuntingRecord::updateHuntingProgress::<lambda(Player&)> *const this,
        HuntingRecord::updateHuntingProgress::<lambda(Player&)> *a2)
{
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  std::shared_ptr<WorldHuntingStartEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
};

// Line 923: range 0000000016D34C36-0000000016D34C76
void __cdecl HuntingRecord::updateHuntingProgress(bool)::{lambda(Player &)#1}::Player(
        HuntingRecord::updateHuntingProgress::<lambda(Player&)> *const this,
        const HuntingRecord::updateHuntingProgress::<lambda(Player&)> *a2)
{
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  std::shared_ptr<WorldHuntingStartEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
};

// Line 923: range 0000000016C7EE54-0000000016C7EE7E
void __cdecl HuntingRecord::updateHuntingProgress(bool)::{lambda(Player &)#1}::~Player(
        HuntingRecord::updateHuntingProgress::<lambda(Player&)> *const this)
{
  std::shared_ptr<WorldHuntingStartEvent>::~shared_ptr(&this->__event_ptr);
  std::shared_ptr<PlayerWorld>::~shared_ptr(&this->__world_ptr);
};

// Line 936: range 0000000016C80512-0000000016C80878
std::string *__cdecl HuntingRecord::createTransaction[abi:cxx11](std::string *retstr, HuntingRecord *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  uint32_t Uid; // eax
  __int64 v10; // rax
  __int64 v11; // r14
  time_t Now; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char v16[560]; // [rsp+10h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 6 ss:938";
  *(_QWORD *)(v2 + 16) = HuntingRecord::createTransaction[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->refresh_id_);
  }
  v5 = std::ostream::operator<<(v2 + 64, this->refresh_id_);
  v6 = std::operator<<<std::char_traits<char>>(v5, "-");
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monster_config_id_);
  }
  v7 = std::ostream::operator<<(v6, this->monster_config_id_);
  v8 = std::operator<<<std::char_traits<char>>(v7, "-");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v10 = std::ostream::operator<<(v8, Uid);
  v11 = std::operator<<<std::char_traits<char>>(v10, "-");
  Now = common::tools::TimeUtils::getNow();
  v13 = std::ostream::operator<<(v11, Now);
  v14 = std::operator<<<std::char_traits<char>>(v13, "-");
  std::ostream::operator<<(v14, ++HuntingRecord::createTransaction[abi:cxx11](void)::transaction_id);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 944: range 0000000016C8087A-0000000016C80A39
int32_t __cdecl HuntingRecord::forceFinishClueByGm(HuntingRecord *const this)
{
  common::milog::MiLogStream *v1; // rax
  uint32_t finished_clue_group_num; // ecx
  char v4; // al
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  monster_config_ptr = HuntingRecord::getMonsterConfig(this);
  if ( monster_config_ptr )
  {
    if ( HuntingRecord::isFinish(this) )
      goto LABEL_9;
    if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->finished_clue_group_num_);
    }
    finished_clue_group_num = this->finished_clue_group_num_;
    if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->search_point_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->search_point_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&monster_config_ptr->search_point_num);
    }
    if ( finished_clue_group_num >= monster_config_ptr->search_point_num )
LABEL_9:
      v4 = 1;
    else
      v4 = 0;
    if ( v4 )
    {
      return 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->finished_clue_group_num_);
      }
      ++this->finished_clue_group_num_;
      return HuntingRecord::updateHuntingProgress(this, 0);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "forceFinishClueByGm",
      948);
    v1 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v6,
           (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->monster_config_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 962: range 0000000016C80A3A-0000000016C80E6F
void __fastcall HuntingRecord::forceSetDestinationGroup(HuntingRecord *const this, uint32_t destination_group_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v7; // rax
  const unsigned int *v8; // r15
  const unsigned int *v9; // r14
  std::vector<unsigned int>::size_type v10; // r14
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::size_type v12; // rsi
  std::vector<unsigned int>::reference v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // al
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-E9h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+28h] [rbp-E8h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __position; // [rsp+30h] [rbp-E0h] BYREF
  const data::HuntingRegionExcelConfig *region_config_ptr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 27 destination_group_index:961 64 24 18 dest_group_vec:973";
  *(_QWORD *)(v2 + 16) = HuntingRecord::forceSetDestinationGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = destination_group_index;
  if ( !HuntingRecord::isFinish(this) )
  {
    region_config_ptr = HuntingRecord::getRegionConfig(this);
    if ( region_config_ptr )
    {
      std::allocator<unsigned int>::allocator(&__a);
      M_current = std::vector<unsigned int>::end(&region_config_ptr->safe_destination_group)._M_current;
      v7._M_current = std::vector<unsigned int>::begin(&region_config_ptr->safe_destination_group)._M_current;
      std::vector<unsigned int>::vector<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
        (std::vector<unsigned int> *const)(v2 + 64),
        v7,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
        &__a);
      std::allocator<unsigned int>::~allocator(&__a);
      v8 = std::vector<unsigned int>::end(&region_config_ptr->destination_group)._M_current;
      v9 = std::vector<unsigned int>::begin(&region_config_ptr->destination_group)._M_current;
      __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        &__position,
        &__i);
      std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
        (std::vector<unsigned int> *const)(v2 + 64),
        __position,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v9,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v8);
      v10 = *(unsigned int *)(v2 + 48);
      if ( v10 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 64)) )
      {
        v12 = *(unsigned int *)(v2 + 48);
        v13 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 64), v12);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = *v14;
        v16 = *(_BYTE *)(((unsigned __int64)&this->destination_group_id_ >> 3) + 0x7FFF8000);
        if ( v16 != 0 && v16 <= 3 )
        {
          LOBYTE(v12) = v16 != 0;
          __asan_report_store4(&this->destination_group_id_, v12, &this->destination_group_id_);
        }
        this->destination_group_id_ = v15;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/hunting_record.cpp",
          "forceSetDestinationGroup",
          977);
        v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v21,
                (const char (*)[47])"[HUNTING] safe_destination_group out of range ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "forceSetDestinationGroup",
        970);
      v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v21,
             (const char (*)[50])"[HUNTING] region_config_ptr is null, refresh_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->refresh_id_);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
  }
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

// Line 984: range 0000000016C80E70-0000000016C81EAB
__int64 __fastcall HuntingRecord::loadGroupByGm(
        HuntingRecord *const this,
        uint32_t group_id,
        uint32_t ref_index,
        double a4,
        float a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  uint32_t finished_clue_group_num; // ecx
  common::milog::MiLogStream *v12; // rax
  std::vector<unsigned int>::const_iterator v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::vector<unsigned int>::const_iterator v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  Scene *v21; // rax
  unsigned __int64 v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t v24; // ecx
  char v25; // dl
  __int64 v26; // rsi
  __int64 v27; // rdx
  Scene *v28; // rax
  unsigned __int64 v29; // rax
  std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rcx
  std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  proto::Vector *v34; // rax
  Player *player; // r14
  __int64 result; // rax
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-190h]
  void (__fastcall *__la)(const unsigned int *, std::vector<unsigned int> *, __int64, _QWORD); // [rsp+10h] [rbp-190h]
  void (__fastcall *v39)(const unsigned int *, std::vector<unsigned int> *, __int64); // [rsp+20h] [rbp-180h]
  const unsigned int *__lastb; // [rsp+28h] [rbp-178h]
  const unsigned int *__lastc; // [rsp+28h] [rbp-178h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __last; // [rsp+28h] [rbp-178h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lasta; // [rsp+28h] [rbp-178h]
  std::allocator<unsigned int> __a; // [rsp+47h] [rbp-159h] BYREF
  unsigned int val; // [rsp+48h] [rbp-158h] BYREF
  uint32_t old_group_id; // [rsp+4Ch] [rbp-154h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+50h] [rbp-150h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+58h] [rbp-148h] BYREF
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+60h] [rbp-140h]
  const data::HuntingRegionExcelConfig *region_config_ptr; // [rsp+68h] [rbp-138h]
  const data::HuntingGroupInfoExcelConfig *group_info_config_ptr; // [rsp+70h] [rbp-130h]
  proto::HuntingPair *hunting_pair; // [rsp+78h] [rbp-128h]
  std::shared_ptr<const google::protobuf::Message> v54; // [rsp+80h] [rbp-120h] BYREF
  std::vector<unsigned int> v55; // [rsp+90h] [rbp-110h] BYREF
  common::milog::MiLogStream v56; // [rsp+B0h] [rbp-F0h] BYREF
  char v57[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 12 group_id:983 48 4 13 ref_index:983 64 12 19 next_group_pos:1049 96 16 14 scene_ptr:103"
                        "4 128 16 15 notify_ptr:1055";
  *(_QWORD *)(v5 + 16) = HuntingRecord::loadGroupByGm;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -219020288;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  *(_DWORD *)(v5 + 32) = group_id;
  *(_DWORD *)(v5 + 48) = ref_index;
  if ( HuntingRecord::isFinish(this) || !HuntingRecord::isStart(this) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "loadGroupByGm",
      987);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v56,
      (const char (*)[42])"[HUNTING] hunting finished or not started");
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_63;
  }
  monster_config_ptr = HuntingRecord::getMonsterConfig(this);
  if ( !monster_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "loadGroupByGm",
      993);
    v10 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            &v56,
            (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->monster_config_id_);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_63;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->finished_clue_group_num_);
  }
  finished_clue_group_num = this->finished_clue_group_num_;
  if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->search_point_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->search_point_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&monster_config_ptr->search_point_num);
  }
  if ( finished_clue_group_num >= monster_config_ptr->search_point_num )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "loadGroupByGm",
      998);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v56,
      (const char (*)[43])"[HUNTING] destination group cannot replace");
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_63;
  }
  region_config_ptr = HuntingRecord::getRegionConfig(this);
  if ( !region_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "loadGroupByGm",
      1004);
    v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v56,
            (const char (*)[50])"[HUNTING] region_config_ptr is null, refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->refresh_id_);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_63;
  }
  __rhs._M_current = std::vector<unsigned int>::end(&region_config_ptr->clue_group)._M_current;
  __lastb = std::vector<unsigned int>::end(&region_config_ptr->clue_group)._M_current;
  v13._M_current = std::vector<unsigned int>::begin(&region_config_ptr->clue_group)._M_current;
  __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                       v13,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lastb,
                       (const unsigned int *)(v5 + 32))._M_current;
  if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "loadGroupByGm",
      1009);
    v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            &v56,
            (const char (*)[53])"[HUNTING] group id not in clue group vec, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_63;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v54);
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54);
  group_info_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                            &v15->design_config.txt_config_mgr.hunting_config_mgr,
                            *(_DWORD *)(v5 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v54);
  if ( !group_info_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "loadGroupByGm",
      1016);
    v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v56,
            (const char (*)[51])"[HUNTING] hunting group info not found, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_63;
  }
  if ( std::vector<unsigned int>::size(&group_info_config_ptr->ref_index) )
  {
    __rhs._M_current = std::vector<unsigned int>::end(&group_info_config_ptr->ref_index)._M_current;
    __lastc = std::vector<unsigned int>::end(&group_info_config_ptr->ref_index)._M_current;
    v17._M_current = std::vector<unsigned int>::begin(&group_info_config_ptr->ref_index)._M_current;
    __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                         v17,
                         (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lastc,
                         (const unsigned int *)(v5 + 48))._M_current;
    if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "loadGroupByGm",
        1024);
      v18 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v56,
              (const char (*)[36])"[HUNTING] ref_index not in config: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v9 = -1;
      goto LABEL_63;
    }
  }
  else if ( *(_DWORD *)(v5 + 48) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "loadGroupByGm",
      1030);
    v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v56,
            (const char (*)[34])"[HUNTING] ref_index should be 0: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_63;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v5 + 96));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v5 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "loadGroupByGm",
      1037);
    v20 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v56,
            (const char (*)[42])"[HUNTING] getMainWorldScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_loaded_group_id_);
    }
    if ( this->cur_loaded_group_id_ )
    {
      v21 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      __last._M_current = (const unsigned int *)Scene::getBlockGroupComp(v21);
      if ( *(_BYTE *)(((unsigned __int64)__last._M_current >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = *(_QWORD *)__last._M_current + 104LL;
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v39 = *(void (__fastcall **)(const unsigned int *, std::vector<unsigned int> *, __int64))v22;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_loaded_group_id_);
      }
      val = this->cur_loaded_group_id_;
      __l._M_array = &val;
      __l._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&v55, __l, &__a);
      v39(__last._M_current, &v55, 1LL);
      std::vector<unsigned int>::~vector(&v55);
      std::allocator<unsigned int>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/hunting_record.cpp",
      "loadGroupByGm",
      1047);
    v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v56,
            (const char (*)[26])"[HUNTING] next group id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v56);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_loaded_group_id_);
    }
    old_group_id = this->cur_loaded_group_id_;
    v26 = *(unsigned int *)(v5 + 32);
    *(_QWORD *)(v5 + 64) = HuntingRecord::getGroupPos(this, v26).m128i_u64[0];
    *(float *)(v5 + 72) = a5;
    v24 = *(_DWORD *)(v5 + 48);
    v25 = *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000);
    LOBYTE(v26) = v25 != 0;
    v27 = (v25 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v25);
    if ( (_BYTE)v27 )
      __asan_report_store4(&this->cur_ref_index_, v26, v27);
    this->cur_ref_index_ = v24;
    this->cur_loaded_group_id_ = *(_DWORD *)(v5 + 32);
    v28 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    __lasta._M_current = (const unsigned int *)Scene::getBlockGroupComp(v28);
    if ( *(_BYTE *)(((unsigned __int64)__lasta._M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v29 = *(_QWORD *)__lasta._M_current + 96LL;
    if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __la = *(void (__fastcall **)(const unsigned int *, std::vector<unsigned int> *, __int64, _QWORD))v29;
    val = *(_DWORD *)(v5 + 32);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&v55, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
    __la(__lasta._M_current, &v55, 1LL, 0LL);
    std::vector<unsigned int>::~vector(&v55);
    std::allocator<unsigned int>::~allocator(&__a);
    std::unordered_set<unsigned int>::insert(
      &this->chosen_group_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v5 + 32));
    common::tools::perf::make_shared<proto::HuntingRevealClueNotify>();
    v30 = std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    hunting_pair = proto::HuntingRevealClueNotify::mutable_hunting_pair(v30);
    if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->refresh_id_);
    }
    proto::HuntingPair::set_refresh_id(hunting_pair, this->refresh_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->monster_config_id_);
    }
    proto::HuntingPair::set_monster_config_id(hunting_pair, this->monster_config_id_);
    v31 = std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    proto::HuntingRevealClueNotify::set_finished_group_id(v31, old_group_id);
    v32 = std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->finished_clue_group_num_);
    }
    proto::HuntingRevealClueNotify::set_finish_clue_count(v32, this->finished_clue_group_num_);
    v33 = std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingRevealClueNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    v34 = proto::HuntingRevealClueNotify::mutable_clue_position(v33);
    Vector3::toClient((const Vector3 *const)(v5 + 64), v34);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::HuntingRevealClueNotify>((const std::shared_ptr<proto::HuntingRevealClueNotify> *)&v54);
    Player::sendMessage(player, &v54, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v54);
    v9 = 0;
    std::shared_ptr<proto::HuntingRevealClueNotify>::~shared_ptr((std::shared_ptr<proto::HuntingRevealClueNotify> *const)(v5 + 128));
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v5 + 96));
LABEL_63:
  result = v9;
  if ( v57 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1068: range 0000000016C81EAC-0000000016C820C6
void __cdecl HuntingRecord::initAbilityGroup(HuntingRecord *const this)
{
  common::milog::MiLogStream *v1; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v3; // rbx
  PlayerAbilityGroupComp *v4; // rax
  std::allocator<std::string > __a; // [rsp+17h] [rbp-59h] BYREF
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-58h]
  std::vector<std::string> group_vec; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-30h] BYREF

  monster_config_ptr = HuntingRecord::getMonsterConfig(this);
  if ( monster_config_ptr )
  {
    if ( !(unsigned __int8)std::string::empty(&monster_config_ptr->ability_group) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
      if ( !PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, &monster_config_ptr->ability_group) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v3 = Player::getAbilityGroupComp(this->player_);
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, 1uLL, &monster_config_ptr->ability_group, &__a);
        PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v3, &group_vec, 0);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v4 = Player::getAbilityGroupComp(this->player_);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v4);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "initAbilityGroup",
      1072);
    v1 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v8,
           (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->monster_config_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 1088: range 0000000016C820C8-0000000016C82287
void __cdecl HuntingRecord::clearAbilityGroup(HuntingRecord *const this)
{
  common::milog::MiLogStream *v1; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rbx
  PlayerAbilityGroupComp *v3; // rax
  std::allocator<std::string > __a; // [rsp+17h] [rbp-59h] BYREF
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-58h]
  std::vector<std::string> group_vec; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v7; // [rsp+40h] [rbp-30h] BYREF

  monster_config_ptr = HuntingRecord::getMonsterConfig(this);
  if ( monster_config_ptr )
  {
    if ( !(unsigned __int8)std::string::empty(&monster_config_ptr->ability_group) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, 1uLL, &monster_config_ptr->ability_group, &__a);
      PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v3 = Player::getAbilityGroupComp(this->player_);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v3);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "clearAbilityGroup",
      1092);
    v1 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v7,
           (const char (*)[59])"[HUNTING] monster_config_ptr is null, monster_config_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->monster_config_id_);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 1105: range 0000000016C82288-0000000016C82743
void __cdecl HuntingRecord::notifyOngoing(HuntingRecord *const this)
{
  int v1; // xmm1_4
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::Vector *position; // rax
  uint32_t finished_clue_group_num; // ecx
  proto::HuntingPair *hunting_pair; // [rsp+10h] [rbp-D0h]
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-C8h]
  char v9[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 12 14 group_pos:1112 80 48 11 notify:1106";
  *(_QWORD *)(v2 + 16) = HuntingRecord::notifyOngoing;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  proto::HuntingOngoingNotify::HuntingOngoingNotify((proto::HuntingOngoingNotify *const)(v2 + 80));
  hunting_pair = proto::HuntingOngoingNotify::mutable_hunting_pair((proto::HuntingOngoingNotify *const)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->refresh_id_);
  }
  proto::HuntingPair::set_refresh_id(hunting_pair, this->refresh_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monster_config_id_);
  }
  proto::HuntingPair::set_monster_config_id(hunting_pair, this->monster_config_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_loaded_group_id_);
  }
  if ( this->cur_loaded_group_id_ )
  {
    *(_QWORD *)(v2 + 48) = HuntingRecord::getGroupPos(this, this->cur_loaded_group_id_).m128i_u64[0];
    *(_DWORD *)(v2 + 56) = v1;
    position = proto::HuntingOngoingNotify::mutable_next_position((proto::HuntingOngoingNotify *const)(v2 + 80));
    Vector3::toClient((const Vector3 *const)(v2 + 48), position);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hunting_fail_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hunting_fail_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hunting_fail_time_);
  }
  proto::HuntingOngoingNotify::set_fail_time((proto::HuntingOngoingNotify *const)(v2 + 80), this->hunting_fail_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  proto::HuntingOngoingNotify::set_is_started(
    (proto::HuntingOngoingNotify *const)(v2 + 80),
    this->state_ == hunting_start);
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->finished_clue_group_num_);
  }
  proto::HuntingOngoingNotify::set_finish_clue_count(
    (proto::HuntingOngoingNotify *const)(v2 + 80),
    this->finished_clue_group_num_);
  monster_config_ptr = HuntingRecord::getMonsterConfig(this);
  if ( monster_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->finished_clue_group_num_);
    }
    finished_clue_group_num = this->finished_clue_group_num_;
    if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->search_point_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->search_point_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&monster_config_ptr->search_point_num);
    }
    proto::HuntingOngoingNotify::set_is_final(
      (proto::HuntingOngoingNotify *const)(v2 + 80),
      finished_clue_group_num >= monster_config_ptr->search_point_num);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
  proto::HuntingOngoingNotify::~HuntingOngoingNotify((proto::HuntingOngoingNotify *const)(v2 + 80));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 1127: range 0000000016C82744-0000000016C82ECB
void __cdecl HuntingRecord::notifyHuntingFinalEvent(HuntingRecord *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  Scene *v9; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v11; // rdx
  void (__fastcall *v12)(unsigned __int64, SceneBlockGroupComp *, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  common::milog::MiLogStream *v13; // rax
  char *v14; // rsi
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  char v16; // cl
  Group *v17; // rax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  const data::HuntingGroupInfoExcelConfig *group_info_config_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 scene_ptr:1144 64 16 14 group_ptr:1150 96 16 12 evt_ptr:1156";
  *(_QWORD *)(v2 + 16) = HuntingRecord::notifyHuntingFinalEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_loaded_group_id_);
  }
  if ( this->cur_loaded_group_id_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.hunting_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_loaded_group_id_);
    }
    group_info_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                              p_hunting_config_mgr,
                              this->cur_loaded_group_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( group_info_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_info_config_ptr->point_type);
      }
      if ( group_info_config_ptr->point_type == HUNTING_CLUE_FINAL )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v2 + 32));
        if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/hunting_record.cpp",
            "notifyHuntingFinalEvent",
            1147);
          v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v21,
                 (const char (*)[42])"[HUNTING] getMainWorldScene failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
          common::milog::MiLogStream::~MiLogStream(&v21);
        }
        else
        {
          v9 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          BlockGroupComp = Scene::getBlockGroupComp(v9);
          if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v11 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 10);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v12 = *(void (__fastcall **)(unsigned __int64, SceneBlockGroupComp *, _QWORD, _QWORD, _QWORD, _QWORD))v11;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->cur_loaded_group_id_);
          }
          v12(v2 + 64, BlockGroupComp, this->cur_loaded_group_id_, 0LL, 0LL, 0LL);
          if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/hunting_record.cpp",
              "notifyHuntingFinalEvent",
              1153);
            v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v21,
                    (const char (*)[31])"[HUNTING] findGroup, group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->cur_loaded_group_id_);
            common::milog::MiLogStream::~MiLogStream(&v21);
          }
          else
          {
            EventUtil::createEvent((data::EventType)(v2 + 96));
            v14 = (char *)(v2 + 96);
            if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 96)) )
            {
              v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              v16 = *(_BYTE *)(((unsigned __int64)&v15->param1 >> 3) + 0x7FFF8000);
              if ( v16 != 0 && (char)((((_BYTE)v15 + 44) & 7) + 3) >= v16 )
              {
                LOBYTE(v14) = v16 != 0;
                __asan_report_store4(&v15->param1, v14, v15);
              }
              v15->param1 = is_succ;
              v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              Group::handleEvent(v17, (EventPtr *)(v2 + 96));
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 96));
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
        }
        std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/hunting/hunting_record.cpp",
          "notifyHuntingFinalEvent",
          1141);
        v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               &v21,
               (const char (*)[55])"[HUNTING] cur loaded group shoule be final, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->cur_loaded_group_id_);
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/hunting_record.cpp",
        "notifyHuntingFinalEvent",
        1136);
      v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v21,
             (const char (*)[51])"[HUNTING] hunting group info not found, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_loaded_group_id_);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/hunting_record.cpp",
      "notifyHuntingFinalEvent",
      1130);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v21,
      (const char (*)[36])"[HUNTING] cur_loaded_group_id_ is 0");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
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

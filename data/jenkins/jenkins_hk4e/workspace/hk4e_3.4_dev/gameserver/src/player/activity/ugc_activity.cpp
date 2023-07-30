// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/ugc_activity.cpp

// Line 20: range 00000000161C7410-00000000161C7422
int32_t __cdecl UgcActivity::fromScheduleBin(UgcActivity *const this, const proto::ActivityScheduleBin *bin)
{
  return 0;
};

// Line 25: range 00000000161C7424-00000000161C7436
int32_t __cdecl UgcActivity::toScheduleBin(const UgcActivity *const this, proto::ActivityScheduleBin *bin)
{
  return 0;
};

// Line 30: range 00000000161C7438-00000000161C757D
int32_t __cdecl UgcActivity::toClient(UgcActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  PlayerCustomDungeonComp *CustomDungeonComp; // rbx
  proto::UgcActivityDetailInfo *v5; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/ugc_activity.cpp",
      "toClient",
      33);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v7,
           (const char (*)[36])"BaseActivity::toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    v5 = proto::ActivityInfo::mutable_ugc_info(activity_info);
    PlayerCustomDungeonComp::toClient(CustomDungeonComp, v5);
    return 0;
  }
};

// Line 42: range 00000000161C757E-00000000161C75DB
int32_t __cdecl UgcActivity::init(UgcActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    UgcActivity::registerObserver(this);
  return 0;
};

// Line 53: range 00000000161C75DC-00000000161C75F6
void __cdecl UgcActivity::onStart(UgcActivity *const this)
{
  UgcActivity::registerObserver(this);
};

// Line 58: range 00000000161C75F8-00000000161C7612
void __cdecl UgcActivity::onSettle(UgcActivity *const this)
{
  UgcActivity::unregisterObserver(this);
};

// Line 63: range 00000000161C7614-00000000161C78A4
void __cdecl UgcActivity::registerObserver(UgcActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::weak_ptr<UgcActivity> *p_this_wtr; // [rsp+10h] [rbp-C0h]
  std::weak_ptr<UgcActivity> v5; // [rsp+20h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseActivity> v6; // [rsp+30h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 11 this_ptr:64 64 16 11 this_wtr:65";
  *(_QWORD *)(v1 + 16) = UgcActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<UgcActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<UgcActivity>::weak_ptr<UgcActivity,void>(
    (std::weak_ptr<UgcActivity> *const)(v1 + 64),
    (const std::shared_ptr<UgcActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->official_dungeon_finish_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    p_this_wtr = (std::weak_ptr<UgcActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<UgcActivity>::weak_ptr(&v5, (const std::weak_ptr<UgcActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<UgcActivity,OfficialCustomDungeonFinishEvent>(
      (PlayerEventComp *const)&v6,
      p_this_wtr,
      (void (*)(UgcActivity *, const OfficialCustomDungeonFinishEvent *))&v5);
    std::weak_ptr<Observer>::operator=(&this->official_dungeon_finish_obs_wtr_, (std::weak_ptr<Observer> *)&v6);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
    std::weak_ptr<UgcActivity>::~weak_ptr(&v5);
  }
  std::weak_ptr<UgcActivity>::~weak_ptr((std::weak_ptr<UgcActivity> *const)(v1 + 64));
  std::shared_ptr<UgcActivity>::~shared_ptr((std::shared_ptr<UgcActivity> *const)(v1 + 32));
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
};

// Line 73: range 00000000161C78A6-00000000161C792C
void __cdecl UgcActivity::unregisterObserver(UgcActivity *const this)
{
  PlayerEventComp *EventComp; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->official_dungeon_finish_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->official_dungeon_finish_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->official_dungeon_finish_obs_wtr_);
  }
};

// Line 82: range 00000000161C792E-00000000161C795D
void __cdecl UgcActivity::onOfficialCustomDungeonFinishEvent(
        UgcActivity *const this,
        const OfficialCustomDungeonFinishEvent *event)
{
  BaseActivity::updateAllConds(this);
  BaseActivity::notifyClientData(this, 0);
};

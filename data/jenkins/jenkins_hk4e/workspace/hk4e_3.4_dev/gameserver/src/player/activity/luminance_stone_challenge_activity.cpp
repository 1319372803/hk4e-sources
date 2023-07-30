// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/luminance_stone_challenge_activity.cpp

// Line 23: range 0000000014551086-00000000145511F9
int32_t __cdecl LuminanceStoneChallengeActivity::fromScheduleBin(
        LuminanceStoneChallengeActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  bool is_content_closed; // cl
  uint32_t v3; // ecx
  bool is_final_gallery_complete; // dl
  uint32_t v5; // ecx
  const proto::LuminanceStoneChallengeScheduleBin *schedule_bin; // [rsp+18h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::luminance_stone_challenge_bin(bin);
  is_content_closed = proto::LuminanceStoneChallengeScheduleBin::is_content_closed(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = is_content_closed;
  v3 = proto::LuminanceStoneChallengeScheduleBin::current_stage_id(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->current_stage_id_);
  }
  this->current_stage_id_ = v3;
  is_final_gallery_complete = proto::LuminanceStoneChallengeScheduleBin::is_final_gallery_complete(schedule_bin);
  if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_final_gallery_complete_);
  this->is_final_gallery_complete_ = is_final_gallery_complete;
  v5 = proto::LuminanceStoneChallengeScheduleBin::best_score(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score_);
  }
  this->best_score_ = v5;
  return 0;
};

// Line 33: range 00000000145511FA-0000000014551371
int32_t __cdecl LuminanceStoneChallengeActivity::toScheduleBin(
        const LuminanceStoneChallengeActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::LuminanceStoneChallengeScheduleBin *schedule_bin; // [rsp+18h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_luminance_stone_challenge_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  proto::LuminanceStoneChallengeScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LuminanceStoneChallengeScheduleBin::set_current_stage_id(schedule_bin, this->current_stage_id_);
  if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_final_gallery_complete_);
  proto::LuminanceStoneChallengeScheduleBin::set_is_final_gallery_complete(
    schedule_bin,
    this->is_final_gallery_complete_);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LuminanceStoneChallengeScheduleBin::set_best_score(schedule_bin, this->best_score_);
  return 0;
};

// Line 43: range 0000000014551372-00000000145515CC
int32_t __cdecl LuminanceStoneChallengeActivity::toClient(
        LuminanceStoneChallengeActivity *const this,
        proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::LuminanceStoneChallengeActivityDetailInfo *detail_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/luminance_stone_challenge_activity.cpp",
      "toClient",
      46);
    v2 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v6,
           (const char (*)[64])"[Luminance Stone Challenge] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_luminance_stone_challenge_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_content_closed_);
    }
    proto::LuminanceStoneChallengeActivityDetailInfo::set_is_content_closed(detail_info, this->is_content_closed_);
    if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LuminanceStoneChallengeActivityDetailInfo::set_current_stage_id(detail_info, this->current_stage_id_);
    if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_final_gallery_complete_);
    proto::LuminanceStoneChallengeActivityDetailInfo::set_is_final_gallery_complete(
      detail_info,
      this->is_final_gallery_complete_);
    if ( *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LuminanceStoneChallengeActivityDetailInfo::set_best_score(detail_info, this->best_score_);
    return 0;
  }
};

// Line 58: range 00000000145515CE-00000000145518CA
void __cdecl LuminanceStoneChallengeActivity::registerObserver(LuminanceStoneChallengeActivity *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<LuminanceStoneChallengeActivity> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<LuminanceStoneChallengeActivity> v5; // [rsp+20h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+30h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 11 this_ptr:59 64 16 11 this_wtr:65";
  *(_QWORD *)(p_pending_que + 16) = LuminanceStoneChallengeActivity::registerObserver;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<LuminanceStoneChallengeActivity>((LuminanceStoneChallengeActivity *)(p_pending_que + 32));
  if ( std::operator==<LuminanceStoneChallengeActivity>(
         0LL,
         (const std::shared_ptr<LuminanceStoneChallengeActivity> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/luminance_stone_challenge_activity.cpp",
      "registerObserver",
      62);
    common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[91])"[Luminance Stone Challenge] dynamic_pointer_cast to LuminanceStoneChallengeActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  }
  else
  {
    std::weak_ptr<LuminanceStoneChallengeActivity>::weak_ptr<LuminanceStoneChallengeActivity,void>(
      (std::weak_ptr<LuminanceStoneChallengeActivity> *const)(p_pending_que + 64),
      (const std::shared_ptr<LuminanceStoneChallengeActivity> *)(p_pending_que + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->gallery_settle_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_this_wtr = (std::weak_ptr<LuminanceStoneChallengeActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<LuminanceStoneChallengeActivity>::weak_ptr(
        &v5,
        (const std::weak_ptr<LuminanceStoneChallengeActivity> *)(p_pending_que + 64));
      PlayerEventComp::registerObserver<LuminanceStoneChallengeActivity,LuminanceStoneChallengeGallerySettleEvent>(
        &varC0,
        p_this_wtr,
        (void (*)(LuminanceStoneChallengeActivity *, const LuminanceStoneChallengeGallerySettleEvent *))&v5);
      std::weak_ptr<Observer>::operator=(&this->gallery_settle_wtr_, (std::weak_ptr<Observer> *)&varC0);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
      std::weak_ptr<LuminanceStoneChallengeActivity>::~weak_ptr(&v5);
    }
    std::weak_ptr<LuminanceStoneChallengeActivity>::~weak_ptr((std::weak_ptr<LuminanceStoneChallengeActivity> *const)(p_pending_que + 64));
  }
  std::shared_ptr<LuminanceStoneChallengeActivity>::~shared_ptr((std::shared_ptr<LuminanceStoneChallengeActivity> *const)(p_pending_que + 32));
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
};

// Line 73: range 00000000145518CC-0000000014551952
void __cdecl LuminanceStoneChallengeActivity::unregisterObserver(LuminanceStoneChallengeActivity *const this)
{
  PlayerEventComp *EventComp; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->gallery_settle_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->gallery_settle_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->gallery_settle_wtr_);
  }
};

// Line 82: range 0000000014551954-00000000145519FA
int32_t __cdecl LuminanceStoneChallengeActivity::init(LuminanceStoneChallengeActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
    LuminanceStoneChallengeActivity::registerObserver(this);
  return 0;
};

// Line 92: range 00000000145519FC-0000000014551BB8
void __cdecl LuminanceStoneChallengeActivity::onPreStart(LuminanceStoneChallengeActivity *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t stage_id; // ecx
  const data::LuminanceStoneChallengeStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v4; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4);
  stage_config_ptr = ActivityLuminanceStoneChallengeExcelConfigMgr::getInitialStageConfig(&v1->design_config.txt_config_mgr.activity_luminance_stone_challenge_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v4);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    stage_id = stage_config_ptr->stage_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->current_stage_id_);
    }
    this->current_stage_id_ = stage_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/luminance_stone_challenge_activity.cpp",
      "onPreStart",
      96);
    common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
      &v5,
      (const char (*)[64])"[Luminance Stone Challenge] initial stage_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->current_stage_id_);
    }
    this->current_stage_id_ = 1;
  }
};

// Line 105: range 0000000014551BBA-0000000014551BD4
void __cdecl LuminanceStoneChallengeActivity::onStart(LuminanceStoneChallengeActivity *const this)
{
  LuminanceStoneChallengeActivity::registerObserver(this);
};

// Line 110: range 0000000014551BD6-0000000014551D5D
void __cdecl LuminanceStoneChallengeActivity::onSettle(LuminanceStoneChallengeActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( !this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/luminance_stone_challenge_activity.cpp",
      "onSettle",
      114);
    v1 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v4,
           (const char (*)[33])"[Luminance Stone Challenge] uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v2,
      (const char (*)[30])" is_content_closed_ not false");
    common::milog::MiLogStream::~MiLogStream(&v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_content_closed_);
    }
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
  LuminanceStoneChallengeActivity::unregisterObserver(this);
};

// Line 122: range 0000000014551D5E-0000000014551E87
void __cdecl LuminanceStoneChallengeActivity::onClear(LuminanceStoneChallengeActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->current_stage_id_);
  }
  this->current_stage_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_final_gallery_complete_);
  this->is_final_gallery_complete_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score_);
  }
  this->best_score_ = 0;
};

// Line 130: range 0000000014551E88-00000000145521DB
bool __cdecl LuminanceStoneChallengeActivity::checkCondIsMeet(
        LuminanceStoneChallengeActivity *const this,
        const data::NewActivityCond *cond)
{
  data::NewActivityCondType type; // eax
  common::milog::MiLogStream *v3; // rax
  uint32_t v5; // ebx
  std::vector<int>::const_reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  uint32_t current_stage_id; // ebx
  std::vector<int>::const_reference v9; // rdx
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = cond->type;
  if ( type == NEW_ACTIVITY_COND_LUMINANCE_STONE_CHALLENGE_STAGE_GREAT_EQUAL )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      current_stage_id = this->current_stage_id_;
      v9 = std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      return current_stage_id >= *v9;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/luminance_stone_challenge_activity.cpp",
        "checkCondIsMeet",
        152);
      v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v10,
             (const char (*)[64])"[Luminance Stone Challenge] cond param size error, activity id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 0;
    }
  }
  else
  {
    if ( type > NEW_ACTIVITY_COND_LUMINANCE_STONE_CHALLENGE_STAGE_GREAT_EQUAL )
      return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
    if ( type == NEW_ACTIVITY_COND_CURRENT_LUMINANCE_STONE_CHALLENGE_STAGE )
    {
      if ( std::vector<int>::size(&cond->param) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v5 = this->current_stage_id_;
        v6 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        return v5 == *v6;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/luminance_stone_challenge_activity.cpp",
          "checkCondIsMeet",
          138);
        v3 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
               &v10,
               (const char (*)[64])"[Luminance Stone Challenge] cond param size error, activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v10);
        return 0;
      }
    }
    else
    {
      if ( type != NEW_ACTIVITY_COND_LUMINANCE_STONE_CHALLENGE_FINAL_GALLERY_COMPLETE )
        return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
      if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_final_gallery_complete_);
      return this->is_final_gallery_complete_;
    }
  }
};

// Line 167: range 00000000145521DC-00000000145521FB
void __cdecl LuminanceStoneChallengeActivity::onDailyRefresh(LuminanceStoneChallengeActivity *const this)
{
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 172: range 00000000145521FC-000000001455273A
__int64 __fastcall LuminanceStoneChallengeActivity::finishStage(
        LuminanceStoneChallengeActivity *const this,
        uint32_t group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  common::milog::MiLogStream *v6; // rcx
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  ActivityLuminanceStoneChallengeExcelConfigMgr *conf_mgr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-C0h] BYREF
  char v18[160]; // [rsp+50h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 18 is_need_update:195 64 4 13 bundle_id:179 80 4 16 cur_stage_id:187 96 4 12 group_id:171";
  *(_QWORD *)(v2 + 16) = LuminanceStoneChallengeActivity::finishStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -202116348;
  *(_DWORD *)(v2 + 96) = group_id;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/luminance_stone_challenge_activity.cpp",
      "finishStage",
      175);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v17,
           (const char (*)[55])"[Luminance Stone Challenge] activity has been closed. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    *(_DWORD *)(v2 + 64) = ActivityGroupLinksExcelConfigMgr::getBundleIdByGroupId(
                             &v8->design_config.txt_config_mgr.activity_group_links_config_mgr,
                             *(_DWORD *)(v2 + 96));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( *(_DWORD *)(v2 + 64) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v16);
      conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_luminance_stone_challenge_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v16);
      *(_DWORD *)(v2 + 80) = ActivityLuminanceStoneChallengeExcelConfigMgr::findLuminanceStageByBundleId(
                               conf_mgr,
                               *(_DWORD *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( this->current_stage_id_ == *(_DWORD *)(v2 + 80) )
      {
        *(_BYTE *)(v2 + 48) = 0;
        LuminanceStoneChallengeActivity::tryUpdateLuminanceStage(this, (bool *)(v2 + 48));
        if ( *(_BYTE *)(v2 + 48) )
        {
          BaseActivity::updateAllConds((BaseActivity *const)this);
          BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        }
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/luminance_stone_challenge_activity.cpp",
          "finishStage",
          190);
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v17,
                (const char (*)[48])"[Luminance Stone Challenge] current_stage_id_: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->current_stage_id_);
        v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                v11,
                (const char (*)[37])"is not equal to correponding stage: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 80));
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])off_253FE7A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/luminance_stone_challenge_activity.cpp",
        "finishStage",
        182);
      v9 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
             &v17,
             (const char (*)[67])"[Luminance Stone Challenge] getBundleIdByGroupId fail. group id : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v18 == (char *)v2 )
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
  return result;
};

// Line 206: range 000000001455273C-0000000014552C76
void __cdecl LuminanceStoneChallengeActivity::tryUpdateLuminanceStage(
        LuminanceStoneChallengeActivity *const this,
        bool *is_need_update)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  uint32_t stage_id; // ecx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  uint32_t final_stage_id; // [rsp+14h] [rbp-5Ch]
  ActivityLuminanceStoneChallengeExcelConfigMgr *conf_mgr; // [rsp+18h] [rbp-58h]
  const data::LuminanceStoneChallengeOverallExcelConfig *overall_excel_ptr; // [rsp+20h] [rbp-50h]
  const data::LuminanceStoneChallengeStageExcelConfig *next_stage_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_luminance_stone_challenge_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  overall_excel_ptr = ActivityLuminanceStoneChallengeExcelConfigMgr::findLuminanceOverallConfig(
                        conf_mgr,
                        this->activity_id_);
  if ( !overall_excel_ptr )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/luminance_stone_challenge_activity.cpp",
      "tryUpdateLuminanceStage",
      211);
    v2 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
           &v15,
           (const char (*)[76])"[Luminance Stone Challenge] findLuminanceOverallConfig fail. activity_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)&overall_excel_ptr->final_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&overall_excel_ptr->final_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  final_stage_id = overall_excel_ptr->final_stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( final_stage_id != this->current_stage_id_ )
    goto LABEL_16;
  if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_final_gallery_complete_);
  if ( !this->is_final_gallery_complete_ )
  {
    this->is_final_gallery_complete_ = 1;
    if ( *(_BYTE *)(((unsigned __int64)is_need_update >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_need_update & 7) >= *(_BYTE *)(((unsigned __int64)is_need_update >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_need_update);
    }
    *is_need_update = 1;
  }
  else
  {
LABEL_16:
    if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( final_stage_id > this->current_stage_id_ )
    {
      next_stage_config_ptr = ActivityLuminanceStoneChallengeExcelConfigMgr::findNextStageConfig(
                                conf_mgr,
                                this->current_stage_id_);
      if ( !next_stage_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/luminance_stone_challenge_activity.cpp",
          "tryUpdateLuminanceStage",
          228);
        v3 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
               &v15,
               (const char (*)[68])"[Luminance Stone Challenge] cannot find next stage, current stage: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->current_stage_id_);
        common::milog::MiLogStream::~MiLogStream(&v15);
        return;
      }
      if ( *(_BYTE *)(((unsigned __int64)&next_stage_config_ptr->stage_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&next_stage_config_ptr->stage_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      stage_id = next_stage_config_ptr->stage_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->current_stage_id_);
      }
      this->current_stage_id_ = stage_id;
      if ( *(_BYTE *)(((unsigned __int64)is_need_update >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_need_update & 7) >= *(_BYTE *)(((unsigned __int64)is_need_update >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_need_update);
      }
      *is_need_update = 1;
    }
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/luminance_stone_challenge_activity.cpp",
    "tryUpdateLuminanceStage",
    234);
  v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
         &v15,
         (const char (*)[59])"[Luminance Stone Challenge] stage updated, current_stage: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->current_stage_id_);
  v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         v6,
         (const char (*)[31])", is_final_gallery_complete_: ");
  if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_final_gallery_complete_);
  v8 = common::milog::MiLogStream::operator<<(v7, this->is_final_gallery_complete_);
  v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])", is_need_update: ");
  if ( *(_BYTE *)(((unsigned __int64)is_need_update >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)is_need_update & 7) >= *(_BYTE *)(((unsigned __int64)is_need_update >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(is_need_update);
  }
  common::milog::MiLogStream::operator<<(v9, *is_need_update);
  common::milog::MiLogStream::~MiLogStream(&v15);
};

// Line 240: range 0000000014552C78-000000001455308E
void __cdecl LuminanceStoneChallengeActivity::onLuminanceStoneChallengeGallerySettleEvent(
        LuminanceStoneChallengeActivity *const this,
        const LuminanceStoneChallengeGallerySettleEvent *gallery_settle_event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint32_t v8; // ecx
  proto::LuminanceStoneChallengeGallerySettleInfo *v9; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  proto::LuminanceStoneChallengeSettleInfo *luminance_settle_info; // [rsp+18h] [rbp-B8h]
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 17 is_new_record:247 64 32 10 notify:254";
  *(_QWORD *)(v2 + 16) = LuminanceStoneChallengeActivity::onLuminanceStoneChallengeGallerySettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 64),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/luminance_stone_challenge_activity.cpp",
    "onLuminanceStoneChallengeGallerySettleEvent",
    241);
  v5 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
         (common::milog::MiLogStream *const)(v2 + 64),
         (const char (*)[79])"[Luminance Stone Challenge] onLuminanceStoneChallengeGallerySettleEvent, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" ,gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &gallery_settle_event->gallery_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&gallery_settle_event->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gallery_settle_event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !LuminanceStoneChallengeActivity::isFinalGalleryStartOrSettleValid(
          this,
          gallery_settle_event->gallery_id,
          gallery_settle_event) )
  {
    *(_BYTE *)(v2 + 48) = 0;
    v8 = proto::LuminanceStoneChallengeGallerySettleInfo::final_score(&gallery_settle_event->gallery_settle_info);
    if ( LuminanceStoneChallengeActivity::tryRecordGalleryScore(this, v8, (bool *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/luminance_stone_challenge_activity.cpp",
        "onLuminanceStoneChallengeGallerySettleEvent",
        250);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        (common::milog::MiLogStream *const)(v2 + 64),
        (const char (*)[56])"[Luminance Stone Challenge] tryRecordGalleryScore fail.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    }
    else
    {
      proto::LuminanceStoneChallengeSettleNotify::LuminanceStoneChallengeSettleNotify((proto::LuminanceStoneChallengeSettleNotify *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&gallery_settle_event->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gallery_settle_event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::LuminanceStoneChallengeSettleNotify::set_gallery_id(
        (proto::LuminanceStoneChallengeSettleNotify *const)(v2 + 64),
        gallery_settle_event->gallery_id);
      luminance_settle_info = proto::LuminanceStoneChallengeSettleNotify::mutable_settle_info((proto::LuminanceStoneChallengeSettleNotify *const)(v2 + 64));
      v9 = proto::LuminanceStoneChallengeSettleInfo::mutable_settle_info(luminance_settle_info);
      proto::LuminanceStoneChallengeGallerySettleInfo::operator=(v9, &gallery_settle_event->gallery_settle_info);
      proto::LuminanceStoneChallengeSettleInfo::set_is_new_record(luminance_settle_info, *(_BYTE *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
      proto::LuminanceStoneChallengeSettleNotify::~LuminanceStoneChallengeSettleNotify((proto::LuminanceStoneChallengeSettleNotify *const)(v2 + 64));
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 265: range 0000000014553090-0000000014553755
__int64 __fastcall LuminanceStoneChallengeActivity::isFinalGalleryStartOrSettleValid(
        const LuminanceStoneChallengeActivity *const this,
        uint32_t gallery_id,
        const LuminanceStoneChallengeGallerySettleEvent *gallery_settle_event)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // al
  common::milog::MiLogStream *v7; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerSceneComp *SceneComp; // rax
  ActivityLuminanceStoneChallengeExcelConfigMgr *conf_mgr; // [rsp+20h] [rbp-C0h]
  const data::LuminanceStoneChallengeOverallExcelConfig *overall_excel_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 final_stage_id:279 64 4 14 gallery_id:264";
  *(_QWORD *)(v3 + 16) = LuminanceStoneChallengeActivity::isFinalGalleryStartOrSettleValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = gallery_id;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
LABEL_9:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/luminance_stone_challenge_activity.cpp",
      "isFinalGalleryStartOrSettleValid",
      268);
    v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v22,
           (const char (*)[55])"[Luminance Stone Challenge] activity has been closed. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 860LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_luminance_stone_challenge_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    overall_excel_ptr = ActivityLuminanceStoneChallengeExcelConfigMgr::findLuminanceOverallConfig(
                          conf_mgr,
                          this->activity_id_);
    if ( overall_excel_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&overall_excel_ptr->final_stage_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overall_excel_ptr->final_stage_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = overall_excel_ptr->final_stage_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( this->current_stage_id_ == *(_DWORD *)(v3 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&overall_excel_ptr->final_gallery_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)overall_excel_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_excel_ptr->final_gallery_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( overall_excel_ptr->final_gallery_id == *(_DWORD *)(v3 + 64) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(this->player_);
          if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
          {
            result = 512LL;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&this->is_final_gallery_complete_);
            if ( !this->is_final_gallery_complete_
              && proto::LuminanceStoneChallengeGallerySettleInfo::reason(&gallery_settle_event->gallery_settle_info) == GALLERY_STOP_CLIENT_INTERRUPT )
            {
              result = 0xFFFFFFFFLL;
            }
            else
            {
              result = 0LL;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/luminance_stone_challenge_activity.cpp",
            "isFinalGalleryStartOrSettleValid",
            289);
          v13 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v22,
                  (const char (*)[61])"[Luminance Stone Challenge] gallery_id invalid, gallery_id: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 64));
          v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v14,
                  (const char (*)[31])", final_gallery_id in config: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v15,
            &overall_excel_ptr->final_gallery_id);
          common::milog::MiLogStream::~MiLogStream(&v22);
          result = 0xFFFFFFFFLL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/luminance_stone_challenge_activity.cpp",
          "isFinalGalleryStartOrSettleValid",
          282);
        v10 = common::milog::MiLogStream::operator<<<char [87],(char *[87])0>(
                &v22,
                (const char (*)[87])"[Luminance Stone Challenge] final gallery didn't start in final stage, current stage: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->current_stage_id_);
        v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v11,
                (const char (*)[19])", final_stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/luminance_stone_challenge_activity.cpp",
        "isFinalGalleryStartOrSettleValid",
        276);
      v9 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
             &v22,
             (const char (*)[76])"[Luminance Stone Challenge] findLuminanceOverallConfig fail. activity_id_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 5LL;
    }
  }
  if ( v23 == (char *)v3 )
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

// Line 307: range 0000000014553756-0000000014553A48
int32_t __cdecl LuminanceStoneChallengeActivity::tryRecordGalleryScore(
        LuminanceStoneChallengeActivity *const this,
        uint32_t final_score,
        bool *is_new_record)
{
  int32_t v3; // r15d
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int v7; // r14d
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 event_ptr:313";
  *(_QWORD *)(v4 + 16) = LuminanceStoneChallengeActivity::tryRecordGalleryScore;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( final_score <= this->best_score_ )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(is_new_record);
  }
  *is_new_record = 1;
  this->best_score_ = final_score;
  common::tools::perf::make_shared<LuminanceStoneChallengeReachNewScoreEvent,unsigned int &>(
    (unsigned int *)(v4 + 32),
    &this->best_score_);
  if ( std::operator==<LuminanceStoneChallengeReachNewScoreEvent>(
         0LL,
         (const std::shared_ptr<LuminanceStoneChallengeReachNewScoreEvent> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/luminance_stone_challenge_activity.cpp",
      "tryRecordGalleryScore",
      316);
    common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
      &v12,
      (const char (*)[86])"[Luminance Stone Challenge] make LuminanceStoneChallengeReachNewScoreEvent ptr failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v3 = -1;
    v7 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<LuminanceStoneChallengeReachNewScoreEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<LuminanceStoneChallengeReachNewScoreEvent> *)(v4 + 32));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    v7 = 1;
  }
  std::shared_ptr<LuminanceStoneChallengeReachNewScoreEvent>::~shared_ptr((std::shared_ptr<LuminanceStoneChallengeReachNewScoreEvent> *const)(v4 + 32));
  if ( v7 == 1 )
LABEL_15:
    v3 = 0;
  result = v3;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 325: range 0000000014553A4A-0000000014553CA0
__int64 __fastcall LuminanceStoneChallengeActivity::setStageByGm(
        LuminanceStoneChallengeActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t v9; // ecx
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:324";
  *(_QWORD *)(v2 + 16) = LuminanceStoneChallengeActivity::setStageByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  v6 = data::ActivityLumianceStoneChallengeExcelConfigMgrBase::findLuminanceStoneChallengeStageExcelConfig(
         &v5->design_config.txt_config_mgr.activity_luminance_stone_challenge_config_mgr,
         *(_DWORD *)(v2 + 32)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/luminance_stone_challenge_activity.cpp",
      "setStageByGm",
      328);
    v7 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v11,
           (const char (*)[61])"[Luminance Stone Challenge] cannot find stage id, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->current_stage_id_);
    }
    this->current_stage_id_ = v9;
    BaseActivity::updateAllConds((BaseActivity *const)this);
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    result = 0LL;
  }
  if ( v12 == (char *)v2 )
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

// Line 338: range 0000000014553CA2-0000000014553D15
void __cdecl LuminanceStoneChallengeActivity::setFinalGalleryCompletebyGm(
        LuminanceStoneChallengeActivity *const this,
        bool is_complete)
{
  if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_final_gallery_complete_);
  this->is_final_gallery_complete_ = is_complete;
  BaseActivity::updateAllConds((BaseActivity *const)this);
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home.h

// Line 55: range 0000000014622E6E-000000001462301B
void __cdecl HomeEventInfo::HomeEventInfo(HomeEventInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->event_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_id);
  }
  this->avatar_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->suit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->suit_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->suit_id);
  }
  this->suit_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->event_over_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_over_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->event_over_time);
  }
  this->event_over_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_position >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->random_position);
  }
  this->random_position = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = 0;
};

// Line 67: range 000000001461533E-00000000146154DD
void __cdecl HomeEventData::HomeEventData(HomeEventData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->reward_event_avatar_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_event_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_event_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_event_id);
  }
  this->reward_event_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_event_random_position >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_event_random_position >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_event_random_position);
  }
  this->reward_event_random_position = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_reward_event_trigger >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_reward_event_trigger >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_reward_event_trigger);
  }
  this->is_reward_event_trigger = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_suite_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_suite_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_suite_id);
  }
  this->reward_suite_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_guid);
  }
  this->reward_guid = 0;
  std::map<unsigned int,HomeEventInfo>::map(&this->summon_event_map);
};

// Line 67: range 00000000146154DE-00000000146154FC
void __cdecl HomeEventData::~HomeEventData(HomeEventData *const this)
{
  std::map<unsigned int,HomeEventInfo>::~map(&this->summon_event_map);
};

// Line 78: range 0000000014864E72-0000000014864F2B
void __cdecl Home::~Home(Home *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Home + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  HomeEventData::~HomeEventData(&this->event_data_);
  std::shared_ptr<HomeTimerMgr>::~shared_ptr(&this->home_timer_mgr_ptr_);
  std::shared_ptr<UnixTimerMgr>::~shared_ptr(&this->unix_timer_mgr_ptr_);
  UnixTimer::~UnixTimer(&this->s_timer_);
  std::weak_ptr<HomeSession>::~weak_ptr(&this->session_wtr_);
  EcsBase<Home,HomeCompBase,12u>::~EcsBase(&this->EcsBase<Home,HomeCompBase,12>);
  std::enable_shared_from_this<Home>::~enable_shared_from_this(&this->std::enable_shared_from_this<Home>);
};

// Line 91: range 00000000146154FE-0000000014615B37
void __cdecl Home::Home(Home *const this, uint32_t home_uid)
{
  int (**v2)(...); // rdx
  Home **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  uint64_t NowMs; // rbx
  uint64_t v6; // rcx
  uint32_t now; // [rsp+14h] [rbp-6Ch]
  Home *v8; // [rsp+18h] [rbp-68h] BYREF
  void (*__f[2])(Home *, unsigned __int64); // [rsp+20h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (Home::*)(long unsigned int),Home*,const std::_Placeholder<1>&>::type p___f; // [rsp+30h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+50h] [rbp-30h] BYREF

  std::enable_shared_from_this<Home>::enable_shared_from_this(&this->std::enable_shared_from_this<Home>);
  common::milog::DescribalBase::DescribalBase(this);
  EcsBase<Home,HomeCompBase,12u>::EcsBase(&this->EcsBase<Home,HomeCompBase,12>);
  v2 = (int (**)(...))(&`vtable for'Home + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_uid_);
  }
  this->home_uid_ = home_uid;
  std::weak_ptr<HomeSession>::weak_ptr(&this->session_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_offset_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_offset_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_offset_);
  }
  this->time_offset_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->data_version_);
  }
  this->data_version_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->block_end_time_);
  }
  this->block_end_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->load_rand_);
  this->load_rand_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = HOME_STATE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_send_online_notify_time_);
  }
  this->last_send_online_notify_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_save_time_ms_);
  this->last_save_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_from_bin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_from_bin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_from_bin_time_);
  }
  this->last_from_bin_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_succ_data_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_succ_data_version >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_succ_data_version);
  }
  this->last_succ_data_version = 0;
  v8 = this;
  __f[0] = (void (*)(Home *, unsigned __int64))Home::onTimer;
  __f[1] = 0LL;
  std::bind<void (Home::*)(unsigned long),Home*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v8,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (Home::*)(unsigned long) ()(Home*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  UnixTimer::UnixTimer(&this->s_timer_, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<UnixTimerMgr>::shared_ptr(&this->unix_timer_mgr_ptr_);
  std::shared_ptr<HomeTimerMgr>::shared_ptr(&this->home_timer_mgr_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_sync_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_sync_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_sync_seq_);
  }
  this->client_sync_seq_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_edit_mode_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_edit_mode_time_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_edit_mode_time_);
  }
  this->last_edit_mode_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_arrangement_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_arrangement_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_update_arrangement_time_);
  }
  this->last_update_arrangement_time_ = 0;
  HomeEventData::HomeEventData(&this->event_data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_force_silent_reload_group_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_force_silent_reload_group_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_force_silent_reload_group_time_);
  }
  this->last_check_force_silent_reload_group_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_turn_off_load_limit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_turn_off_load_limit_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_turn_off_load_limit_);
  }
  this->is_turn_off_load_limit_ = 0;
  now = common::tools::TimeUtils::getNow();
  NowMs = common::tools::TimeUtils::getNowMs();
  v6 = NowMs + common::tools::RandomUtils::rand<unsigned long>(0LL, 0x1D4C0uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_save_time_ms_);
  this->last_save_time_ms_ = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_send_online_notify_time_);
  }
  this->last_send_online_notify_time_ = now;
};

// Line 138: range 00000000155B6794-00000000155B67C3
UnixTimerMgrPtr __cdecl Home::getUnixTimerMgr(Home *const this)
{
  __int64 v1; // rsi
  UnixTimerMgrPtr result; // rax

  std::shared_ptr<UnixTimerMgr>::shared_ptr(
    (std::shared_ptr<UnixTimerMgr> *const)this,
    (const std::shared_ptr<UnixTimerMgr> *)(v1 + 216));
  result._M_ptr = (std::__shared_ptr<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 139: range 00000000155B6868-00000000155B6897
HomeTimerMgrPtr __cdecl Home::getHomeTimerMgr(Home *const this)
{
  __int64 v1; // rsi
  HomeTimerMgrPtr result; // rax

  std::shared_ptr<HomeTimerMgr>::shared_ptr(
    (std::shared_ptr<HomeTimerMgr> *const)this,
    (const std::shared_ptr<HomeTimerMgr> *)(v1 + 232));
  result._M_ptr = (std::__shared_ptr<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 141: range 0000000014615B38-0000000014615B8D
uint32_t __cdecl Home::getLastSaveTime(Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->last_save_time_ms_ / 0x3E8;
};

// Line 169: range 00000000131D3100-00000000131D3147
uint32_t __cdecl Home::getHomeUid(const Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->home_uid_;
};

// Line 170: range 0000000014615B8E-0000000014615BDD
uint32_t __cdecl Home::getDataVersion(Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->data_version_;
};

// Line 177: range 0000000014615BDE-0000000014615C18
uint64_t __cdecl Home::getLoadRand(const Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->load_rand_;
};

// Line 201: range 0000000017D6787C-0000000017D678CE
bool __cdecl Home::isTurnOffLoadLimit(const Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_turn_off_load_limit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_turn_off_load_limit_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_turn_off_load_limit_);
  }
  return this->is_turn_off_load_limit_;
};

// Line 203: range 0000000017D678D0-0000000017D67923
void __cdecl Home::updateArrangementCD(Home *const this)
{
  uint32_t Now; // esi

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_arrangement_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_arrangement_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_update_arrangement_time_);
  }
  this->last_update_arrangement_time_ = Now;
};

// Line 204: range 0000000017D67924-0000000017D67974
void __cdecl Home::onGMClearUpdateArrangementCD(Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_arrangement_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_arrangement_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_update_arrangement_time_);
  }
  this->last_update_arrangement_time_ = 0;
};

// Line 206: range 0000000017D67976-0000000017D679D1
void __cdecl Home::updateEditModeCD(Home *const this)
{
  uint32_t Now; // edi

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_edit_mode_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_edit_mode_time_ >> 3)
                                                       + 0x7FFF8000) )
  {
    Now = (_DWORD)this + 252;
    __asan_report_store4(&this->last_edit_mode_time_);
  }
  this->last_edit_mode_time_ = Now;
};

// Line 207: range 0000000017D679D2-0000000017D67A2A
void __cdecl Home::onGMClearUpdateEditModeCD(Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_edit_mode_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_edit_mode_time_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_edit_mode_time_);
  }
  this->last_edit_mode_time_ = 0;
};

// Line 208: range 0000000017D67A2C-0000000017D67A7E
void __cdecl Home::onGMTurnOffLoadLimit(Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_turn_off_load_limit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_turn_off_load_limit_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_turn_off_load_limit_);
  }
  this->is_turn_off_load_limit_ = 1;
};

// Line 244: range 0000000014615C1A-0000000014615C61
int32_t __cdecl Home::getBlockEndTime(const Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->block_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->block_end_time_;
};

// Line 244: range 0000000014615C62-0000000014615CB0
void __cdecl Home::setBlockEndTime(Home *const this, int32_t block_end_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->block_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->block_end_time_);
  }
  this->block_end_time_ = block_end_time__out;
};

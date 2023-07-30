// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/player_activity_comp.cpp

// Line 106: range 0000000016C16D5C-0000000016C16E7F
int32_t __cdecl PlayerActivityComp::init(PlayerActivityComp *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+38h] [rbp-8h]

  PlayerActivityComp::initEventObservers(this);
  PlayerActivityComp::initOfflineOp(this);
  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    activity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    if ( std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v1 = (unsigned __int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
        v1 = __asan_report_load8();
      v2 = *(_QWORD *)v1 + 48LL;
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v1 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v2)(v1);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 121: range 0000000016C16E80-0000000016C174A9
int32_t __cdecl PlayerActivityComp::fromBin(
        PlayerActivityComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 p_M_refcount; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t v6; // edx
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // r15d
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  BaseActivity *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int ret; // [rsp+2Ch] [rbp-104h]
  const proto::PlayerActivityCompBin *proto_comp; // [rsp+30h] [rbp-100h]
  const google::protobuf::Map<unsigned int,proto::ActivityBin> *__for_range; // [rsp+40h] [rbp-F0h]
  google::protobuf::Map<unsigned int,proto::ActivityBin>::const_reference p_activity_id; // [rsp+48h] [rbp-E8h]
  PlayerActivityComp v21; // [rsp+50h] [rbp-E0h] BYREF

  p_M_refcount = (unsigned __int64)&v21.activity_timer_.timer_mgr_wtr_._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      p_M_refcount = v4;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "1 32 16 16 activity_ptr:134";
  *(_QWORD *)(p_M_refcount + 16) = PlayerActivityComp::fromBin;
  v5 = p_M_refcount >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  proto_comp = proto::PlayerDataBin::activity_bin(player_data_bin);
  v6 = proto::PlayerActivityCompBin::fly_sea_lamp_num(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fly_sea_lamp_num_);
  }
  this->fly_sea_lamp_num_ = v6;
  v7 = proto::PlayerActivityCompBin::fly_sea_lamp_time(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fly_sea_lamp_time_);
  }
  this->fly_sea_lamp_time_ = v7;
  __for_range = proto::PlayerActivityCompBin::activity_bin_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::ActivityBin>::begin(
    (google::protobuf::Map<unsigned int,proto::ActivityBin>::const_iterator *)&v21._M_weak_this._M_refcount,
    __for_range);
  google::protobuf::Map<unsigned int,proto::ActivityBin>::end(
    (google::protobuf::Map<unsigned int,proto::ActivityBin>::const_iterator *)&v21.activity_map_._M_h._M_before_begin,
    __for_range);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::ActivityBin>::const_iterator *)&v21._M_weak_this._M_refcount,
            (const google::protobuf::Map<unsigned int,proto::ActivityBin>::const_iterator *)&v21.activity_map_._M_h._M_before_begin) )
  {
    p_activity_id = google::protobuf::Map<unsigned int,proto::ActivityBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::ActivityBin>::const_iterator *const)&v21._M_weak_this._M_refcount);
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( p_activity_id->first == 6004 )
      goto LABEL_26;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(p_M_refcount + 32), (uint32_t)this);
    if ( !std::operator==<BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_refcount + 32), 0LL) )
      goto LABEL_22;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerActivityComp::createActivity(&v21, (uint32_t)this);
    std::shared_ptr<BaseActivity>::operator=(
      (std::shared_ptr<BaseActivity> *const)(p_M_refcount + 32),
      (std::shared_ptr<BaseActivity> *)&v21);
    std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v21);
    if ( std::operator==<BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_refcount + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v21.activity_map_._M_h._M_single_bucket,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/player_activity_comp.cpp",
        "fromBin",
        140);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             (common::milog::MiLogStream *const)&v21.activity_map_._M_h._M_single_bucket,
             (const char (*)[22])"findOrCreateActivity ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &p_activity_id->first);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21.activity_map_._M_h._M_single_bucket);
      v2 = -1;
      v10 = 0;
      goto LABEL_25;
    }
    std::shared_ptr<BaseActivity>::shared_ptr(
      (std::shared_ptr<BaseActivity> *const)&v21,
      (const std::shared_ptr<BaseActivity> *)(p_M_refcount + 32));
    ret = PlayerActivityComp::insertActivityPtr(this, (BaseActivityPtr *)&v21);
    std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v21);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v21.activity_map_._M_h._M_single_bucket,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/player_activity_comp.cpp",
        "fromBin",
        147);
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              (common::milog::MiLogStream *const)&v21.activity_map_._M_h._M_single_bucket,
              (const char (*)[19])"insertActivityPtr ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &p_activity_id->first);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21.activity_map_._M_h._M_single_bucket);
      v2 = -1;
      v10 = 0;
    }
    else
    {
LABEL_22:
      v13 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 32));
      if ( BaseActivity::fromBin(v13, &p_activity_id->second) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v21.activity_map_._M_h._M_single_bucket,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/player_activity_comp.cpp",
          "fromBin",
          153);
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                (common::milog::MiLogStream *const)&v21.activity_map_._M_h._M_single_bucket,
                (const char (*)[18])"activity fromBin ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &p_activity_id->first);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21.activity_map_._M_h._M_single_bucket);
        v2 = -1;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
    }
LABEL_25:
    std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(p_M_refcount + 32));
    if ( v10 != 1 )
      goto LABEL_28;
LABEL_26:
    google::protobuf::Map<unsigned int,proto::ActivityBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::ActivityBin>::const_iterator *const)&v21._M_weak_this._M_refcount);
  }
  v2 = 0;
LABEL_28:
  result = v2;
  if ( &v21.activity_timer_.timer_mgr_wtr_._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 161: range 0000000016C174AA-0000000016C176FD
int32_t __cdecl PlayerActivityComp::toBin(PlayerActivityComp *const this, proto::PlayerDataBin *player_data_bin)
{
  BaseActivity *v2; // rax
  common::milog::MiLogStream *v3; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::PlayerActivityCompBin *proto_comp; // [rsp+28h] [rbp-68h]
  google::protobuf::Map<unsigned int,proto::ActivityBin> *activity_bin_map; // [rsp+30h] [rbp-60h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+38h] [rbp-58h]
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *__in; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+50h] [rbp-40h]
  proto::ActivityBin *activity_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_activity_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::PlayerActivityCompBin::set_fly_sea_lamp_num(proto_comp, this->fly_sea_lamp_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PlayerActivityCompBin::set_fly_sea_lamp_time(proto_comp, this->fly_sea_lamp_time_);
  activity_bin_map = proto::PlayerActivityCompBin::mutable_activity_bin_map(proto_comp);
  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    activity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    if ( std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      activity_bin = google::protobuf::Map<unsigned int,proto::ActivityBin>::operator[](activity_bin_map, activity_id);
      v2 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::toBin(v2, activity_bin) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/player_activity_comp.cpp",
          "toBin",
          174);
        v3 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v14,
               (const char (*)[41])"activity_ptr from bin error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, activity_id);
        common::milog::MiLogStream::~MiLogStream(&v14);
        return -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 183: range 0000000016C176FE-0000000016C1787A
int32_t __cdecl PlayerActivityComp::onLogin(PlayerActivityComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+38h] [rbp-8h]

  PlayerActivityComp::refreshActivityAndUpdateTimer(this);
  PlayerActivityComp::notifyScheduleInfo(this);
  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    activity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    if ( std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v2 = (unsigned __int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      v3 = *(_QWORD *)v2 + 112LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v3)(v2);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  PlayerActivityComp::notifyServerAnnounceOnLogin(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    PlayerActivityComp::checkAndClearActivity(this);
  return 0;
};

// Line 210: range 0000000016C1787C-0000000016C1788A
int32_t __cdecl PlayerActivityComp::onLogout(PlayerActivityComp *const this)
{
  return 0;
};

// Line 217: range 0000000016C1788C-0000000016C1799F
void __cdecl PlayerActivityComp::onDailyRefresh(PlayerActivityComp *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+38h] [rbp-8h]

  PlayerActivityComp::refreshActivityAndUpdateTimer(this);
  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    activity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    if ( std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v1 = (unsigned __int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
        v1 = __asan_report_load8();
      v2 = *(_QWORD *)v1 + 120LL;
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v1 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v2)(v1);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
};

// Line 231: range 0000000016C179A0-0000000016C179AE
int32_t __cdecl PlayerActivityComp::notifyAllData(PlayerActivityComp *const this)
{
  return 0;
};

// Line 236: range 0000000016C179B0-0000000016C17B38
PlayerActivityComp *__fastcall PlayerActivityComp::findBaseActivity(
        PlayerActivityComp *const this,
        __int64 activity_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 activity_id:235 64 8 8 iter:237";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findBaseActivity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::find(
                                                                                             (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(activity_id + 32),
                                                                                             (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(activity_id + 32))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v3 + 64));
    std::shared_ptr<BaseActivity>::shared_ptr((std::shared_ptr<BaseActivity> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<BaseActivity>::shared_ptr((std::shared_ptr<BaseActivity> *const)this, 0LL);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 247: range 0000000016C17B3A-0000000016C180DB
bool __fastcall PlayerActivityComp::checkScheduleCondIsMeet(
        const PlayerActivityComp *const this,
        uint32_t schedule_id,
        const data::NewActivityScheduleCond *cond)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  data::NewActivityScheduleCondType type; // eax
  common::milog::MiLogStream *v7; // rax
  bool result; // al
  PlayerBasicComp *v9; // rax
  uint32_t Level; // r13d
  std::vector<int>::const_reference v11; // rdx
  common::milog::MiLogStream *v12; // rax
  PlayerQuestComp *QuestComp; // r13
  uint32_t *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  PlayerBasicComp *BasicComp; // r13
  uint32_t *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-80h] BYREF
  char v22[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 schedule_id:246";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::checkScheduleCondIsMeet;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = cond->type;
  if ( type == NEW_ACTIVITY_SCHEDULE_COND_OPEN_STATE_OPENED )
  {
    if ( std::vector<int>::empty(&cond->param) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/player_activity_comp.cpp",
        "checkScheduleCondIsMeet",
        272);
      v15 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v21,
              (const char (*)[36])"cond param size error, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      v17 = (uint32_t *)std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      result = PlayerBasicComp::isStateOpen(BasicComp, *v17);
    }
  }
  else
  {
    if ( type > NEW_ACTIVITY_SCHEDULE_COND_OPEN_STATE_OPENED )
      goto LABEL_33;
    if ( type != NEW_ACTIVITY_SCHEDULE_COND_QUEST_FINISH )
    {
      if ( type == NEW_ACTIVITY_SCHEDULE_COND_NONE )
      {
        result = 1;
        goto LABEL_34;
      }
      if ( type == NEW_ACTIVITY_SCHEDULE_COND_PLAYER_LEVEL_GREATER )
      {
        if ( std::vector<int>::size(&cond->param) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v9 = Player::getBasicComp(this->player_);
          Level = PlayerBasicComp::getLevel(v9);
          v11 = std::vector<int>::operator[](&cond->param, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          result = Level > *v11;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/player_activity_comp.cpp",
            "checkScheduleCondIsMeet",
            254);
          v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                 &v21,
                 (const char (*)[36])"cond param size error, schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v21);
          result = 0;
        }
        goto LABEL_34;
      }
LABEL_33:
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/player_activity_comp.cpp",
        "checkScheduleCondIsMeet",
        282);
      v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v21, (const char (*)[12])"cond type: ");
      v19 = common::milog::MiLogStream::operator<<<data::NewActivityScheduleCondType,(data::NewActivityScheduleCondType*)0>(
              v18,
              &cond->type);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])off_25F06FA0);
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0;
      goto LABEL_34;
    }
    if ( std::vector<int>::empty(&cond->param) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/player_activity_comp.cpp",
        "checkScheduleCondIsMeet",
        263);
      v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v21,
              (const char (*)[36])"cond param size error, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      v14 = (uint32_t *)std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      result = PlayerQuestComp::getQuestState(QuestComp, *v14) == QUEST_STATE_FINISHED;
    }
  }
LABEL_34:
  if ( v22 == (char *)v3 )
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

// Line 290: range 0000000016C180DC-0000000016C18315
bool __cdecl PlayerActivityComp::checkScheduleCondVecIsMeet(
        const PlayerActivityComp *const this,
        uint32_t schedule_id,
        data::LogicType logic_type,
        const std::vector<data::NewActivityScheduleCond> *cond_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // r14
  bool result; // al
  std::vector<data::NewActivityScheduleCond>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<data::NewActivityScheduleCond>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::vector<data::NewActivityScheduleCond> *__for_range; // [rsp+30h] [rbp-C0h]
  const data::NewActivityScheduleCond *cond; // [rsp+38h] [rbp-B8h]
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 40 18 cond_check_vec:297";
  *(_QWORD *)(v4 + 16) = PlayerActivityComp::checkScheduleCondVecIsMeet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  if ( logic_type == LOGIC_NONE )
    logic_type = LOGIC_AND;
  std::vector<bool>::vector((std::vector<bool> *const)(v4 + 48));
  __for_range = cond_vec;
  __for_begin._M_current = std::vector<data::NewActivityScheduleCond>::begin(cond_vec)._M_current;
  __for_end._M_current = std::vector<data::NewActivityScheduleCond>::end(cond_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>(
            &__for_begin,
            &__for_end) )
  {
    cond = __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>::operator*(&__for_begin);
    if ( PlayerActivityComp::checkScheduleCondIsMeet(this, schedule_id, cond) )
      std::vector<bool>::push_back((std::vector<bool> *const)(v4 + 48), 1);
    else
      std::vector<bool>::push_back((std::vector<bool> *const)(v4 + 48), 0);
    __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>::operator++(&__for_begin);
  }
  v7 = CommonMiscs::evaluateLogicComb(logic_type, (const std::vector<bool> *)(v4 + 48));
  std::vector<bool>::~vector((std::vector<bool> *const)(v4 + 48));
  result = v7;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 314: range 0000000016C18316-0000000016C189C1
void __cdecl PlayerActivityComp::findNowAndFutureScheduleConfig(
        const PlayerActivityComp *const this,
        std::vector<proto::ActivityScheduleInfo> *schedule_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  const std::vector<data::NewActivityScheduleCond> *p_cond; // rdi
  data::LogicType cond_comb; // edx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v8; // rax
  uint32_t schedule_id; // r14d
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v10; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v12; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  char v14; // al
  uint32_t ScheduleBeginTime; // eax
  uint32_t ScheduleEndTime; // eax
  std::vector<const data::NewActivityScheduleExcelConfig*>::iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::vector<const data::NewActivityScheduleExcelConfig*>::iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> __y; // [rsp+20h] [rbp-140h] BYREF
  const NewActivityExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-138h]
  std::vector<const data::NewActivityScheduleExcelConfig*> *__for_range; // [rsp+30h] [rbp-130h]
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-120h] BYREF
  char v25[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 15 activity_id:333 48 8 8 iter:335 80 24 23 schedule_config_vec:317 144 40 8 info:334";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::findNowAndFutureScheduleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.new_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  std::vector<data::NewActivityScheduleExcelConfig const*>::vector((std::vector<const data::NewActivityScheduleExcelConfig*> *const)(v2 + 80));
  NewActivityExcelConfigMgr::findNowAndFutureScheduleConfig(
    conf_mgr,
    (std::vector<const data::NewActivityScheduleExcelConfig*> *)(v2 + 80));
  __for_range = (std::vector<const data::NewActivityScheduleExcelConfig*> *)(v2 + 80);
  __for_begin._M_current = std::vector<data::NewActivityScheduleExcelConfig const*>::begin((std::vector<const data::NewActivityScheduleExcelConfig*> *const)(v2 + 80))._M_current;
  __for_end._M_current = std::vector<data::NewActivityScheduleExcelConfig const*>::end((std::vector<const data::NewActivityScheduleExcelConfig*> *const)(v2 + 80))._M_current;
  while ( __gnu_cxx::operator!=<data::NewActivityScheduleExcelConfig const**,std::vector<data::NewActivityScheduleExcelConfig const*>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = (unsigned __int64)__gnu_cxx::__normal_iterator<data::NewActivityScheduleExcelConfig const**,std::vector<data::NewActivityScheduleExcelConfig const*>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    schedule_config_ptr = *(const data::NewActivityScheduleExcelConfig **)v5;
    if ( schedule_config_ptr )
    {
      p_cond = &schedule_config_ptr->cond;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->cond_comb >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->cond_comb >> 3) + 0x7FFF8000) <= 3 )
      {
        p_cond = (const std::vector<data::NewActivityScheduleCond> *)&schedule_config_ptr->cond_comb;
        __asan_report_load4();
      }
      cond_comb = schedule_config_ptr->cond_comb;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_cond = (const std::vector<data::NewActivityScheduleCond> *)&schedule_config_ptr->schedule_id;
        __asan_report_load4();
      }
      if ( PlayerActivityComp::checkScheduleCondVecIsMeet(this, schedule_config_ptr->schedule_id, cond_comb, p_cond) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->activity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = schedule_config_ptr->activity_id;
        proto::ActivityScheduleInfo::ActivityScheduleInfo((proto::ActivityScheduleInfo *const)(v2 + 144));
        *(std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::find(&this->activity_map_, (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::key_type *)(v2 + 32));
        __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
        if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> *)(v2 + 48),
                &__y) )
          goto LABEL_23;
        v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v2 + 48));
        if ( !std::operator!=<BaseActivity>(&v8->second, 0LL) )
          goto LABEL_23;
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        schedule_id = schedule_config_ptr->schedule_id;
        v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v2 + 48));
        v11 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10->second);
        if ( schedule_id == BaseActivity::getScheduleId(v11)
          && (v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v2 + 48)),
              v13 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12->second),
              BaseActivity::isOpening(v13, 0)) )
        {
          v14 = 1;
        }
        else
        {
LABEL_23:
          v14 = 0;
        }
        if ( v14 )
          proto::ActivityScheduleInfo::set_is_open((proto::ActivityScheduleInfo *const)(v2 + 144), 1);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->activity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::ActivityScheduleInfo::set_activity_id(
          (proto::ActivityScheduleInfo *const)(v2 + 144),
          schedule_config_ptr->activity_id);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::ActivityScheduleInfo::set_schedule_id(
          (proto::ActivityScheduleInfo *const)(v2 + 144),
          schedule_config_ptr->schedule_id);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ScheduleBeginTime = NewActivityExcelConfigMgr::getScheduleBeginTime(conf_mgr, schedule_config_ptr->schedule_id);
        proto::ActivityScheduleInfo::set_begin_time((proto::ActivityScheduleInfo *const)(v2 + 144), ScheduleBeginTime);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->schedule_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ScheduleEndTime = NewActivityExcelConfigMgr::getScheduleEndTime(conf_mgr, schedule_config_ptr->schedule_id, 0);
        proto::ActivityScheduleInfo::set_end_time((proto::ActivityScheduleInfo *const)(v2 + 144), ScheduleEndTime);
        std::vector<proto::ActivityScheduleInfo>::push_back(
          schedule_vec,
          (const std::vector<proto::ActivityScheduleInfo>::value_type *)(v2 + 144));
        proto::ActivityScheduleInfo::~ActivityScheduleInfo((proto::ActivityScheduleInfo *const)(v2 + 144));
      }
    }
    __gnu_cxx::__normal_iterator<data::NewActivityScheduleExcelConfig const**,std::vector<data::NewActivityScheduleExcelConfig const*>>::operator++(&__for_begin);
  }
  std::vector<data::NewActivityScheduleExcelConfig const*>::~vector((std::vector<const data::NewActivityScheduleExcelConfig*> *const)(v2 + 80));
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 350: range 0000000016C189C2-0000000016C18B5B
bool __fastcall PlayerActivityComp::isActivityOpen(const PlayerActivityComp *const this, uint32_t activity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v7; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool result; // al
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 activity_id:349 64 8 8 iter:351";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::isActivityOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::find(
                                                                                                   &this->activity_map_,
                                                                                                   (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> *)(v2 + 64),
         &__y)
    && (v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v2 + 64)),
        std::operator!=<BaseActivity>(&v5->second, 0LL)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v2 + 64));
    v8 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7->second);
    result = BaseActivity::isOpening(v8, 0);
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v2 )
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

// Line 360: range 0000000016C18B5C-0000000016C18D2F
bool __fastcall PlayerActivityComp::isActivityOpen(
        const PlayerActivityComp *const this,
        uint32_t activity_id,
        uint32_t schedule_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v6; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v8; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v11; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v15[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 activity_id:359 64 8 8 iter:361";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::isActivityOpen;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = activity_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::find(
                                                                                                   &this->activity_map_,
                                                                                                   (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> *)(v3 + 64),
         &__y)
    && (v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v3 + 64)),
        std::operator!=<BaseActivity>(&v6->second, 0LL)) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v3 + 64));
    v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8->second);
    if ( schedule_id == BaseActivity::getScheduleId(v9) )
    {
      v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v3 + 64));
      v12 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11->second);
      result = BaseActivity::isOpening(v12, 0);
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v15 == (char *)v3 )
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

// Line 374: range 0000000016C18D30-0000000016C18ED4
bool __cdecl PlayerActivityComp::isActivityTypeOpen(
        const PlayerActivityComp *const this,
        data::NewActivityType activity_type,
        uint32_t end_time_offset)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  data::NewActivityType type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v12; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v15[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v12);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v12);
    if ( !std::operator==<BaseActivity>(activity_ptr, 0LL) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v15);
      p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15)->design_config.txt_config_mgr.new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *id);
      std::shared_ptr<Config>::~shared_ptr(v15);
      if ( type == activity_type )
      {
        v4 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
        if ( BaseActivity::isOpening(v4, end_time_offset) )
          return 1;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 392: range 0000000016C18ED6-0000000016C1907B
_BOOL8 __fastcall PlayerActivityComp::isActivityCondMeet(
        const PlayerActivityComp *const this,
        uint32_t activity_id,
        uint32_t cond_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v6; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v8; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  _BOOL8 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 activity_id:391 64 8 8 iter:393";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::isActivityCondMeet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = activity_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::find(
                                                                                                   &this->activity_map_,
                                                                                                   (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> *)(v3 + 64),
         &__y)
    && (v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v3 + 64)),
        std::operator!=<BaseActivity>(&v6->second, 0LL)) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v3 + 64));
    v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8->second);
    result = BaseActivity::isMeetCond(v9, cond_id);
  }
  else
  {
    result = 0LL;
  }
  if ( v13 == (char *)v3 )
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

// Line 402: range 0000000016C1907C-0000000016C19221
_BOOL8 __fastcall PlayerActivityComp::isActivityCondExpired(
        const PlayerActivityComp *const this,
        uint32_t activity_id,
        uint32_t cond_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v6; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false>::pointer v8; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  _BOOL8 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 activity_id:401 64 8 8 iter:403";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::isActivityCondExpired;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = activity_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::find(
                                                                                                   &this->activity_map_,
                                                                                                   (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> *)(v3 + 64),
         &__y)
    && (v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v3 + 64)),
        std::operator!=<BaseActivity>(&v6->second, 0LL)) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v3 + 64));
    v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8->second);
    result = BaseActivity::isExpiredCond(v9, cond_id);
  }
  else
  {
    result = 0LL;
  }
  if ( v13 == (char *)v3 )
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

// Line 412: range 0000000016C19222-0000000016C19303
void __cdecl PlayerActivityComp::refreshActivityAndUpdateTimer(PlayerActivityComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 21 next_refresh_time:413";
  *(_QWORD *)(v1 + 16) = PlayerActivityComp::refreshActivityAndUpdateTimer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  PlayerActivityComp::refreshActivity(this, (uint32_t *)(v1 + 32));
  PlayerActivityComp::updateTimer(this, *(_DWORD *)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 420: range 0000000016C19304-0000000016C19551
int32_t __cdecl PlayerActivityComp::findActivityDrops(
        PlayerActivityComp *const this,
        std::vector<std::pair<unsigned int,data::ItemLimitType>> *drop_id_type_vec,
        std::vector<std::pair<unsigned int,unsigned int>> *activity_drop_subject_vec,
        uint32_t level)
{
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v16; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v16);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v16);
    v4 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
    if ( BaseActivity::isOpening(v4, 0) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(_QWORD *)v5 + 200LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::vector<std::pair<unsigned int,data::ItemLimitType>> *, std::vector<std::pair<unsigned int,unsigned int>> *, _QWORD))v6)(
             v5,
             drop_id_type_vec,
             activity_drop_subject_vec,
             level) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/player_activity_comp.cpp",
          "findActivityDrops",
          427);
        v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])"activity: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, activity_id);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v8,
          (const char (*)[26])" findActivityDrops failed");
        common::milog::MiLogStream::~MiLogStream(&v19);
        return -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/player_activity_comp.cpp",
    "findActivityDrops",
    433);
  v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v19, (const char (*)[17])"activity drops: ");
  common::milog::MiLogStream::operator<<<std::pair<unsigned int,data::ItemLimitType>>(v10, drop_id_type_vec);
  common::milog::MiLogStream::~MiLogStream(&v19);
  return 0;
};

// Line 478: range 0000000016C19552-0000000016C1A038
void __cdecl PlayerActivityComp::initEventObservers(PlayerActivityComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  common::milog::MiLogStream *v3; // rbx
  _DWORD *v4; // [rsp+D0h] [rbp-1A0h]
  unsigned int val; // [rsp+E4h] [rbp-18Ch] BYREF
  PlayerEventComp *event_comp; // [rsp+E8h] [rbp-188h]
  PlayerEventComp v7; // [rsp+F0h] [rbp-180h] BYREF
  common::milog::MiLogStream v8; // [rsp+1C0h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+1E0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:481 64 16 12 this_wtr:487";
  *(_QWORD *)(v1 + 16) = PlayerActivityComp::initEventObservers;
  v4 = (_DWORD *)(v1 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/player_activity_comp.cpp",
    "initEventObservers",
    479);
  v3 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  common::milog::MiLogStream::~MiLogStream(&v8);
  toThisPtr<PlayerActivityComp>((PlayerActivityComp *)(v1 + 32));
  if ( std::operator==<PlayerActivityComp>(0LL, (const std::shared_ptr<PlayerActivityComp> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/player_activity_comp.cpp",
      "initEventObservers",
      484);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v8,
      (const char (*)[47])"dynamic_pointer_cast to PlayerQuestComp failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    std::weak_ptr<PlayerActivityComp>::weak_ptr<PlayerActivityComp,void>(
      (std::weak_ptr<PlayerActivityComp> *const)(v1 + 64),
      (const std::shared_ptr<PlayerActivityComp> *)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,ChangeCondStateEvent>(
      &v7,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const ChangeCondStateEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,WatcherProgressUpdateEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const WatcherProgressUpdateEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,CompleteTalkEvent>(
      (PlayerEventComp *const)&v7.event_center_,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const CompleteTalkEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,CreateNpcEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const CreateNpcEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,PlayerLevelupEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const PlayerLevelupEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,FinishQuestEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const FinishQuestEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,OpenMechanicusEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const OpenMechanicusEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,ChallengeFinishEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const ChallengeFinishEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,RegionSearchFinishSearchEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.event_center_,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const RegionSearchFinishSearchEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,QuestGlobalVarUpdateEvent>(
      (PlayerEventComp *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const QuestGlobalVarUpdateEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,OpenStateChangeEvent>(
      (PlayerEventComp *const)&v7.event_center_.observer_list_map_._M_h._M_element_count,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const OpenStateChangeEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.observer_list_map_._M_h._M_element_count);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,GroupBundleFinishEvent>(
      (PlayerEventComp *const)&v7.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const GroupBundleFinishEvent *))&v7.is_started_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::weak_ptr(
      (std::weak_ptr<PlayerActivityComp> *const)&v7.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
      (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerActivityComp,OfferingLevelupEvent>(
      (PlayerEventComp *const)&v7.is_started_,
      (std::weak_ptr<PlayerActivityComp> *)event_comp,
      (void (*)(PlayerActivityComp *, const OfferingLevelupEvent *))&v7.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.is_started_);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)&v7.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
    std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)(v1 + 64));
  }
  std::shared_ptr<PlayerActivityComp>::~shared_ptr((std::shared_ptr<PlayerActivityComp> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
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

// Line 507: range 0000000016C1A2C6-0000000016C1A691
void __cdecl PlayerActivityComp::initOfflineOp(PlayerActivityComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerOfflineOpComp *OfflineOpComp; // r14
  PlayerOfflineOpComp *v5; // r14
  proto::OfflineOpType op_type; // [rsp+1Ch] [rbp-C4h] BYREF
  std::enable_shared_from_this<PlayerCompBase> v7; // [rsp+20h] [rbp-C0h] BYREF
  std::function<void(const proto::SendOfflineOpRsp&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 9 s_ptr:509 64 16 9 w_ptr:509";
  *(_QWORD *)(v1 + 16) = PlayerActivityComp::initOfflineOp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<PlayerCompBase>::shared_from_this(&v7);
  std::dynamic_pointer_cast<PlayerActivityComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)(v1 + 32));
  std::shared_ptr<PlayerCompBase>::~shared_ptr((std::shared_ptr<PlayerCompBase> *const)&v7);
  std::weak_ptr<PlayerActivityComp>::weak_ptr<PlayerActivityComp,void>(
    (std::weak_ptr<PlayerActivityComp> *const)(v1 + 64),
    (const std::shared_ptr<PlayerActivityComp> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfflineOpComp = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<PlayerActivityComp>::weak_ptr(
    (std::weak_ptr<PlayerActivityComp> *const)&v7,
    (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
  std::function<void ()(proto::SendOfflineOpRsp const&)>::function<PlayerActivityComp::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1},void,void>(
    &p_func,
    (PlayerActivityComp::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *)&v7);
  op_type = OFFLINE_OP_ACTIVITY_GIVE_GIFT;
  PlayerOfflineOpComp::registerSendRspCallBack(OfflineOpComp, &op_type, &p_func);
  std::function<void ()(proto::SendOfflineOpRsp const&)>::~function(&p_func);
  PlayerActivityComp::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp((PlayerActivityComp::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const)&v7);
  std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)(v1 + 64));
  std::shared_ptr<PlayerActivityComp>::~shared_ptr((std::shared_ptr<PlayerActivityComp> *const)(v1 + 32));
  std::enable_shared_from_this<PlayerCompBase>::shared_from_this(&v7);
  std::dynamic_pointer_cast<PlayerActivityComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)(v1 + 32));
  std::shared_ptr<PlayerCompBase>::~shared_ptr((std::shared_ptr<PlayerCompBase> *const)&v7);
  std::weak_ptr<PlayerActivityComp>::weak_ptr<PlayerActivityComp,void>(
    (std::weak_ptr<PlayerActivityComp> *const)(v1 + 64),
    (const std::shared_ptr<PlayerActivityComp> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<PlayerActivityComp>::weak_ptr(
    (std::weak_ptr<PlayerActivityComp> *const)&v7,
    (const std::weak_ptr<PlayerActivityComp> *)(v1 + 64));
  std::function<void ()(proto::OfflineOpBin const&)>::function<PlayerActivityComp::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2},void,void>(
    (std::function<void(const proto::OfflineOpBin&)> *const)&p_func,
    (PlayerActivityComp::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *)&v7);
  op_type = OFFLINE_OP_ACTIVITY_GIVE_GIFT;
  PlayerOfflineOpComp::registerExecOfflineOp(v5, &op_type, (PlayerOfflineOpComp::ExecFunc *)&p_func);
  std::function<void ()(proto::OfflineOpBin const&)>::~function((std::function<void(const proto::OfflineOpBin&)> *const)&p_func);
  PlayerActivityComp::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin((PlayerActivityComp::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const)&v7);
  std::weak_ptr<PlayerActivityComp>::~weak_ptr((std::weak_ptr<PlayerActivityComp> *const)(v1 + 64));
  std::shared_ptr<PlayerActivityComp>::~shared_ptr((std::shared_ptr<PlayerActivityComp> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
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

// Line 508: range 0000000016D33BE0-0000000016D33C05
void __cdecl PlayerActivityComp::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        PlayerActivityComp::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        PlayerActivityComp::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<PlayerActivityComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 508: range 0000000016D33CD0-0000000016D33CF5
void __cdecl PlayerActivityComp::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        PlayerActivityComp::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        const PlayerActivityComp::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<PlayerActivityComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 508: range 0000000016C1A03A-0000000016C1A162
void __cdecl PlayerActivityComp::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator()(
        const PlayerActivityComp::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const __closure,
        const proto::SendOfflineOpRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerActivityComp *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 s_ptr:508";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<PlayerActivityComp>::lock((const std::weak_ptr<PlayerActivityComp> *const)(v2 + 32));
  if ( std::operator!=<PlayerActivityComp>((const std::shared_ptr<PlayerActivityComp> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<PlayerActivityComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerActivityComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerActivityComp::onSendOfflineOpRsp(v5, rsp_0);
  }
  std::shared_ptr<PlayerActivityComp>::~shared_ptr((std::shared_ptr<PlayerActivityComp> *const)(v2 + 32));
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

// Line 508: range 0000000016C1A164-0000000016C1A17E
void __cdecl PlayerActivityComp::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp(
        PlayerActivityComp::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this)
{
  std::weak_ptr<PlayerActivityComp>::~weak_ptr(&this->__w_ptr);
};

// Line 509: range 0000000016D33DE8-0000000016D33E0D
void __cdecl PlayerActivityComp::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        PlayerActivityComp::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this,
        PlayerActivityComp::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<PlayerActivityComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 509: range 0000000016D33ED8-0000000016D33EFD
void __cdecl PlayerActivityComp::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        PlayerActivityComp::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this,
        const PlayerActivityComp::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<PlayerActivityComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 509: range 0000000016C1A180-0000000016C1A2A8
void __cdecl PlayerActivityComp::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::operator()(
        const PlayerActivityComp::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const __closure,
        const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerActivityComp *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 s_ptr:509";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<PlayerActivityComp>::lock((const std::weak_ptr<PlayerActivityComp> *const)(v2 + 32));
  if ( std::operator!=<PlayerActivityComp>((const std::shared_ptr<PlayerActivityComp> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<PlayerActivityComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerActivityComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerActivityComp::onOfflineOpExec(v5, bin);
  }
  std::shared_ptr<PlayerActivityComp>::~shared_ptr((std::shared_ptr<PlayerActivityComp> *const)(v2 + 32));
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

// Line 509: range 0000000016C1A2AA-0000000016C1A2C4
void __cdecl PlayerActivityComp::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin(
        PlayerActivityComp::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this)
{
  std::weak_ptr<PlayerActivityComp>::~weak_ptr(&this->__w_ptr);
};

// Line 513: range 0000000016C1A692-0000000016C1D2E3
PlayerActivityComp *__fastcall PlayerActivityComp::createActivity(
        PlayerActivityComp *const this,
        __int64 activity_id,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  NewActivityExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-598h]
  std::shared_ptr<SalesmanActivity> __r; // [rsp+30h] [rbp-590h] BYREF
  std::shared_ptr<TrialAvatarActivity> v14; // [rsp+40h] [rbp-580h] BYREF
  std::shared_ptr<CrucibleActivity> v15; // [rsp+50h] [rbp-570h] BYREF
  std::shared_ptr<BaseActivity> v16; // [rsp+60h] [rbp-560h] BYREF
  std::shared_ptr<AsterActivity> v17; // [rsp+70h] [rbp-550h] BYREF
  std::shared_ptr<DeliveryActivity> v18; // [rsp+80h] [rbp-540h] BYREF
  std::shared_ptr<FlightActivity> v19; // [rsp+90h] [rbp-530h] BYREF
  std::shared_ptr<DragonSpineActivity> v20; // [rsp+A0h] [rbp-520h] BYREF
  std::shared_ptr<EffigyActivity> v21; // [rsp+B0h] [rbp-510h] BYREF
  std::shared_ptr<TreasureMapActivity> v22; // [rsp+C0h] [rbp-500h] BYREF
  std::shared_ptr<SalesmanMpActivity> v23; // [rsp+D0h] [rbp-4F0h] BYREF
  std::shared_ptr<SeaLampActivity> v24; // [rsp+E0h] [rbp-4E0h] BYREF
  std::shared_ptr<BlessingActivity> v25; // [rsp+F0h] [rbp-4D0h] BYREF
  std::shared_ptr<MonsterBannerDrakePrimoRockActivity> v26; // [rsp+100h] [rbp-4C0h] BYREF
  std::shared_ptr<ExpeditionActivity> v27; // [rsp+110h] [rbp-4B0h] BYREF
  std::shared_ptr<FleurFairActivity> v28; // [rsp+120h] [rbp-4A0h] BYREF
  std::shared_ptr<WaterSpiritActivity> v29; // [rsp+130h] [rbp-490h] BYREF
  std::shared_ptr<ArenaChallengeActivity> v30; // [rsp+140h] [rbp-480h] BYREF
  std::shared_ptr<SigninCompanionActivity> v31; // [rsp+150h] [rbp-470h] BYREF
  std::shared_ptr<CoopActivity> v32; // [rsp+160h] [rbp-460h] BYREF
  std::shared_ptr<ChannellerSlabActivity> v33; // [rsp+170h] [rbp-450h] BYREF
  std::shared_ptr<MistTrialActivity> v34; // [rsp+180h] [rbp-440h] BYREF
  std::shared_ptr<HideAndSeekActivity> v35; // [rsp+190h] [rbp-430h] BYREF
  std::shared_ptr<FindHilichurlActivity> v36; // [rsp+1A0h] [rbp-420h] BYREF
  std::shared_ptr<MonsterBannerEffigyIceActivity> v37; // [rsp+1B0h] [rbp-410h] BYREF
  std::shared_ptr<MonsterBannerEffigyFireActivity> v38; // [rsp+1C0h] [rbp-400h] BYREF
  std::shared_ptr<MonsterBannerPerpetualActivity> v39; // [rsp+1D0h] [rbp-3F0h] BYREF
  std::shared_ptr<SummerTimeActivity> v40; // [rsp+1E0h] [rbp-3E0h] BYREF
  std::shared_ptr<BounceConjuringActivity> v41; // [rsp+1F0h] [rbp-3D0h] BYREF
  std::shared_ptr<BuoyantCombatActivity> v42; // [rsp+200h] [rbp-3C0h] BYREF
  std::shared_ptr<EchoShellActivity> v43; // [rsp+210h] [rbp-3B0h] BYREF
  std::shared_ptr<DaoqiAdvertisementActivity> v44; // [rsp+220h] [rbp-3A0h] BYREF
  std::shared_ptr<BlitzRushActivity> v45; // [rsp+230h] [rbp-390h] BYREF
  std::shared_ptr<ChessActivity> v46; // [rsp+240h] [rbp-380h] BYREF
  std::shared_ptr<SumoActivity> v47; // [rsp+250h] [rbp-370h] BYREF
  std::shared_ptr<PersonalLiine2Activity> v48; // [rsp+260h] [rbp-360h] BYREF
  std::shared_ptr<MonsterBannerEffigyWaterActivity> v49; // [rsp+270h] [rbp-350h] BYREF
  std::shared_ptr<MonsterBannerRaijinActivity> v50; // [rsp+280h] [rbp-340h] BYREF
  std::shared_ptr<LunaRiteActivity> v51; // [rsp+290h] [rbp-330h] BYREF
  std::shared_ptr<MoonfinTrialActivity> v52; // [rsp+2A0h] [rbp-320h] BYREF
  std::shared_ptr<PlantFlowerActivity> v53; // [rsp+2B0h] [rbp-310h] BYREF
  std::shared_ptr<MusicGameActivity> v54; // [rsp+2C0h] [rbp-300h] BYREF
  std::shared_ptr<RoguelikeDungeonActivity> v55; // [rsp+2D0h] [rbp-2F0h] BYREF
  std::shared_ptr<DigActivity> v56; // [rsp+2E0h] [rbp-2E0h] BYREF
  std::shared_ptr<HachiActivity> v57; // [rsp+2F0h] [rbp-2D0h] BYREF
  std::shared_ptr<WinterCampActivity> v58; // [rsp+300h] [rbp-2C0h] BYREF
  std::shared_ptr<PotionActivity> v59; // [rsp+310h] [rbp-2B0h] BYREF
  std::shared_ptr<LanternRiteActivity> v60; // [rsp+320h] [rbp-2A0h] BYREF
  std::shared_ptr<TanukiTravelActivity> v61; // [rsp+330h] [rbp-290h] BYREF
  std::shared_ptr<GeneralBannerActivity> v62; // [rsp+340h] [rbp-280h] BYREF
  std::shared_ptr<MichiaeMatsuriActivity> v63; // [rsp+350h] [rbp-270h] BYREF
  std::shared_ptr<BartenderActivity> v64; // [rsp+360h] [rbp-260h] BYREF
  std::shared_ptr<UgcActivity> v65; // [rsp+370h] [rbp-250h] BYREF
  std::shared_ptr<IrodoriActivity> v66; // [rsp+380h] [rbp-240h] BYREF
  std::shared_ptr<CrystalLinkActivity> v67; // [rsp+390h] [rbp-230h] BYREF
  std::shared_ptr<PhotoActivity> v68; // [rsp+3A0h] [rbp-220h] BYREF
  std::shared_ptr<SpiceActivity> v69; // [rsp+3B0h] [rbp-210h] BYREF
  std::shared_ptr<GachaActivity> v70; // [rsp+3C0h] [rbp-200h] BYREF
  std::shared_ptr<LuminanceStoneChallengeActivity> v71; // [rsp+3D0h] [rbp-1F0h] BYREF
  std::shared_ptr<RogueDiaryActivity> v72; // [rsp+3E0h] [rbp-1E0h] BYREF
  std::shared_ptr<SummerTimeV2Activity> v73; // [rsp+3F0h] [rbp-1D0h] BYREF
  std::shared_ptr<IslandPartyActivity> v74; // [rsp+400h] [rbp-1C0h] BYREF
  std::shared_ptr<GearActivity> v75; // [rsp+410h] [rbp-1B0h] BYREF
  std::shared_ptr<GravenInnocenceActivity> v76; // [rsp+420h] [rbp-1A0h] BYREF
  std::shared_ptr<InstableSprayActivity> v77; // [rsp+430h] [rbp-190h] BYREF
  std::shared_ptr<MuqadasPotionActivity> v78; // [rsp+440h] [rbp-180h] BYREF
  std::shared_ptr<TreasureSeelieActivity> v79; // [rsp+450h] [rbp-170h] BYREF
  std::shared_ptr<RockBoardExploreActivity> v80; // [rsp+460h] [rbp-160h] BYREF
  std::shared_ptr<VintageActivity> v81; // [rsp+470h] [rbp-150h] BYREF
  std::shared_ptr<WindFieldActivity> v82; // [rsp+480h] [rbp-140h] BYREF
  std::shared_ptr<FungusFighterActivity> v83; // [rsp+490h] [rbp-130h] BYREF
  std::shared_ptr<CharAmusementActivity> v84; // [rsp+4A0h] [rbp-120h] BYREF
  std::shared_ptr<EffigyChallengeV2Activity> v85; // [rsp+4B0h] [rbp-110h] BYREF
  std::shared_ptr<BrickBreakerActivity> v86; // [rsp+4C0h] [rbp-100h] BYREF
  std::shared_ptr<CoinCollectActivity> v87; // [rsp+4D0h] [rbp-F0h] BYREF
  std::shared_ptr<TeamChainActivity> v88; // [rsp+4E0h] [rbp-E0h] BYREF
  std::shared_ptr<SeaLampV3Activity> v89; // [rsp+4F0h] [rbp-D0h] BYREF
  std::shared_ptr<ElectroherculesBattleActivity> v90; // [rsp+500h] [rbp-C0h] BYREF
  std::shared_ptr<Config> v91; // [rsp+510h] [rbp-B0h] BYREF
  common::milog::MiLogStream v92; // [rsp+520h] [rbp-A0h] BYREF
  char v93[128]; // [rsp+540h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v93;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 activity_type:515 64 4 15 activity_id:512";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::createActivity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = a3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v91);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91)->design_config.txt_config_mgr.new_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v91);
  *(_DWORD *)(v3 + 48) = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(conf_mgr, *(_DWORD *)(v3 + 64));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  this->_vptr_PlayerCompBase = 0LL;
  this->_M_weak_this._M_ptr = 0LL;
  v6 = *(_DWORD *)(v3 + 48);
  if ( v6 == 3403 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::tools::perf::make_shared<TeamChainActivity,Player &,unsigned int &>(
      (Player *)&v88,
      *(unsigned int **)(activity_id + 24),
      (Player *)(v3 + 64),
      *(unsigned int **)(activity_id + 24));
    std::shared_ptr<BaseActivity>::operator=<TeamChainActivity>((std::shared_ptr<BaseActivity> *const)this, &v88);
    std::shared_ptr<TeamChainActivity>::~shared_ptr(&v88);
  }
  else
  {
    if ( v6 > 3403 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 3402:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<ElectroherculesBattleActivity,Player &,unsigned int &>(
          (Player *)&v90,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<ElectroherculesBattleActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v90);
        std::shared_ptr<ElectroherculesBattleActivity>::~shared_ptr(&v90);
        goto LABEL_326;
      case 3401:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<SeaLampV3Activity,Player &,unsigned int &>(
          (Player *)&v89,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<SeaLampV3Activity>((std::shared_ptr<BaseActivity> *const)this, &v89);
        std::shared_ptr<SeaLampV3Activity>::~shared_ptr(&v89);
        goto LABEL_326;
      case 3400:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<DuelHeartActivity,Player &,unsigned int &>(
          (Player *)&v91,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<DuelHeartActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          (std::shared_ptr<DuelHeartActivity> *)&v91);
        std::shared_ptr<DuelHeartActivity>::~shared_ptr((std::shared_ptr<DuelHeartActivity> *const)&v91);
        goto LABEL_326;
      case 3301:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<CoinCollectActivity,Player &,unsigned int &>(
          (Player *)&v87,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<CoinCollectActivity>((std::shared_ptr<BaseActivity> *const)this, &v87);
        std::shared_ptr<CoinCollectActivity>::~shared_ptr(&v87);
        goto LABEL_326;
    }
    if ( v6 > 3301 )
      goto LABEL_325;
    if ( v6 == 3300 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<BrickBreakerActivity,Player &,unsigned int &>(
        (Player *)&v86,
        *(unsigned int **)(activity_id + 24),
        (Player *)(v3 + 64),
        *(unsigned int **)(activity_id + 24));
      std::shared_ptr<BaseActivity>::operator=<BrickBreakerActivity>((std::shared_ptr<BaseActivity> *const)this, &v86);
      std::shared_ptr<BrickBreakerActivity>::~shared_ptr(&v86);
      goto LABEL_326;
    }
    if ( v6 == 3203 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<EffigyChallengeV2Activity,Player &,unsigned int &>(
        (Player *)&v85,
        *(unsigned int **)(activity_id + 24),
        (Player *)(v3 + 64),
        *(unsigned int **)(activity_id + 24));
      std::shared_ptr<BaseActivity>::operator=<EffigyChallengeV2Activity>(
        (std::shared_ptr<BaseActivity> *const)this,
        &v85);
      std::shared_ptr<EffigyChallengeV2Activity>::~shared_ptr(&v85);
      goto LABEL_326;
    }
    if ( v6 > 3203 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 3202:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<CharAmusementActivity,Player &,unsigned int &>(
          (Player *)&v84,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<CharAmusementActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v84);
        std::shared_ptr<CharAmusementActivity>::~shared_ptr(&v84);
        goto LABEL_326;
      case 3201:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<FungusFighterActivity,Player &,unsigned int &>(
          (Player *)&v83,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<FungusFighterActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v83);
        std::shared_ptr<FungusFighterActivity>::~shared_ptr(&v83);
        goto LABEL_326;
      case 3103:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<VintageActivity,Player &,unsigned int &>(
          (Player *)&v81,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<VintageActivity>((std::shared_ptr<BaseActivity> *const)this, &v81);
        std::shared_ptr<VintageActivity>::~shared_ptr(&v81);
        goto LABEL_326;
    }
    if ( v6 > 3103 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 3102:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<RockBoardExploreActivity,Player &,unsigned int &>(
          (Player *)&v80,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<RockBoardExploreActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v80);
        std::shared_ptr<RockBoardExploreActivity>::~shared_ptr(&v80);
        goto LABEL_326;
      case 3101:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<WindFieldActivity,Player &,unsigned int &>(
          (Player *)&v82,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<WindFieldActivity>((std::shared_ptr<BaseActivity> *const)this, &v82);
        std::shared_ptr<WindFieldActivity>::~shared_ptr(&v82);
        goto LABEL_326;
      case 3003:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<TreasureSeelieActivity,Player &,unsigned int &>(
          (Player *)&v79,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<TreasureSeelieActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v79);
        std::shared_ptr<TreasureSeelieActivity>::~shared_ptr(&v79);
        goto LABEL_326;
    }
    if ( v6 > 3003 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 3002:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<MuqadasPotionActivity,Player &,unsigned int &>(
          (Player *)&v78,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<MuqadasPotionActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v78);
        std::shared_ptr<MuqadasPotionActivity>::~shared_ptr(&v78);
        goto LABEL_326;
      case 3001:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<InstableSprayActivity,Player &,unsigned int &>(
          (Player *)&v77,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<InstableSprayActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v77);
        std::shared_ptr<InstableSprayActivity>::~shared_ptr(&v77);
        goto LABEL_326;
      case 3000:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<GravenInnocenceActivity,Player &,unsigned int &>(
          (Player *)&v76,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<GravenInnocenceActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v76);
        std::shared_ptr<GravenInnocenceActivity>::~shared_ptr(&v76);
        goto LABEL_326;
      case 2803:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<IslandPartyActivity,Player &,unsigned int &>(
          (Player *)&v74,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<IslandPartyActivity>((std::shared_ptr<BaseActivity> *const)this, &v74);
        std::shared_ptr<IslandPartyActivity>::~shared_ptr(&v74);
        goto LABEL_326;
    }
    if ( v6 > 2803 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 2802:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<GearActivity,Player &,unsigned int &>(
          (Player *)&v75,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<GearActivity>((std::shared_ptr<BaseActivity> *const)this, &v75);
        std::shared_ptr<GearActivity>::~shared_ptr(&v75);
        goto LABEL_326;
      case 2801:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<SummerTimeV2Activity,Player &,unsigned int &>(
          (Player *)&v73,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<SummerTimeV2Activity>((std::shared_ptr<BaseActivity> *const)this, &v73);
        std::shared_ptr<SummerTimeV2Activity>::~shared_ptr(&v73);
        goto LABEL_326;
      case 2704:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<RogueDiaryActivity,Player &,unsigned int &>(
          (Player *)&v72,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<RogueDiaryActivity>((std::shared_ptr<BaseActivity> *const)this, &v72);
        std::shared_ptr<RogueDiaryActivity>::~shared_ptr(&v72);
        goto LABEL_326;
    }
    if ( v6 > 2704 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 2703:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<GachaActivity,Player &,unsigned int &>(
          (Player *)&v70,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<GachaActivity>((std::shared_ptr<BaseActivity> *const)this, &v70);
        std::shared_ptr<GachaActivity>::~shared_ptr(&v70);
        goto LABEL_326;
      case 2702:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<LuminanceStoneChallengeActivity,Player &,unsigned int &>(
          (Player *)&v71,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<LuminanceStoneChallengeActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v71);
        std::shared_ptr<LuminanceStoneChallengeActivity>::~shared_ptr(&v71);
        goto LABEL_326;
      case 2603:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<PhotoActivity,Player &,unsigned int &>(
          (Player *)&v68,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<PhotoActivity>((std::shared_ptr<BaseActivity> *const)this, &v68);
        std::shared_ptr<PhotoActivity>::~shared_ptr(&v68);
        goto LABEL_326;
    }
    if ( v6 > 2603 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 2602:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<SpiceActivity,Player &,unsigned int &>(
          (Player *)&v69,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<SpiceActivity>((std::shared_ptr<BaseActivity> *const)this, &v69);
        std::shared_ptr<SpiceActivity>::~shared_ptr(&v69);
        goto LABEL_326;
      case 2601:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<CrystalLinkActivity,Player &,unsigned int &>(
          (Player *)&v67,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<CrystalLinkActivity>((std::shared_ptr<BaseActivity> *const)this, &v67);
        std::shared_ptr<CrystalLinkActivity>::~shared_ptr(&v67);
        goto LABEL_326;
      case 2600:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<IrodoriActivity,Player &,unsigned int &>(
          (Player *)&v66,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<IrodoriActivity>((std::shared_ptr<BaseActivity> *const)this, &v66);
        std::shared_ptr<IrodoriActivity>::~shared_ptr(&v66);
        goto LABEL_326;
      case 2503:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<UgcActivity,Player &,unsigned int &>(
          (Player *)&v65,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<UgcActivity>((std::shared_ptr<BaseActivity> *const)this, &v65);
        std::shared_ptr<UgcActivity>::~shared_ptr(&v65);
        goto LABEL_326;
    }
    if ( v6 > 2503 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 2502:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BartenderActivity,Player &,unsigned int &>(
          (Player *)&v64,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<BartenderActivity>((std::shared_ptr<BaseActivity> *const)this, &v64);
        std::shared_ptr<BartenderActivity>::~shared_ptr(&v64);
        goto LABEL_326;
      case 2501:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<MichiaeMatsuriActivity,Player &,unsigned int &>(
          (Player *)&v63,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<MichiaeMatsuriActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v63);
        std::shared_ptr<MichiaeMatsuriActivity>::~shared_ptr(&v63);
        goto LABEL_326;
      case 2402:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<LanternRiteActivity,Player &,unsigned int &>(
          (Player *)&v60,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<LanternRiteActivity>((std::shared_ptr<BaseActivity> *const)this, &v60);
        std::shared_ptr<LanternRiteActivity>::~shared_ptr(&v60);
        goto LABEL_326;
    }
    if ( v6 > 2402 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 2401:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<TanukiTravelActivity,Player &,unsigned int &>(
          (Player *)&v61,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<TanukiTravelActivity>((std::shared_ptr<BaseActivity> *const)this, &v61);
        std::shared_ptr<TanukiTravelActivity>::~shared_ptr(&v61);
        goto LABEL_326;
      case 2400:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<PotionActivity,Player &,unsigned int &>(
          (Player *)&v59,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<PotionActivity>((std::shared_ptr<BaseActivity> *const)this, &v59);
        std::shared_ptr<PotionActivity>::~shared_ptr(&v59);
        goto LABEL_326;
      case 2302:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<HachiActivity,Player &,unsigned int &>(
          (Player *)&v57,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<HachiActivity>((std::shared_ptr<BaseActivity> *const)this, &v57);
        std::shared_ptr<HachiActivity>::~shared_ptr(&v57);
        goto LABEL_326;
    }
    if ( v6 > 2302 )
      goto LABEL_325;
    if ( v6 == 2301 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<WinterCampActivity,Player &,unsigned int &>(
        (Player *)&v58,
        *(unsigned int **)(activity_id + 24),
        (Player *)(v3 + 64),
        *(unsigned int **)(activity_id + 24));
      std::shared_ptr<BaseActivity>::operator=<WinterCampActivity>((std::shared_ptr<BaseActivity> *const)this, &v58);
      std::shared_ptr<WinterCampActivity>::~shared_ptr(&v58);
      goto LABEL_326;
    }
    if ( v6 == 2203 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<DigActivity,Player &,unsigned int &>(
        (Player *)&v56,
        *(unsigned int **)(activity_id + 24),
        (Player *)(v3 + 64),
        *(unsigned int **)(activity_id + 24));
      std::shared_ptr<BaseActivity>::operator=<DigActivity>((std::shared_ptr<BaseActivity> *const)this, &v56);
      std::shared_ptr<DigActivity>::~shared_ptr(&v56);
      goto LABEL_326;
    }
    if ( v6 > 2203 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 2202:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<MusicGameActivity,Player &,unsigned int &>(
          (Player *)&v54,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<MusicGameActivity>((std::shared_ptr<BaseActivity> *const)this, &v54);
        std::shared_ptr<MusicGameActivity>::~shared_ptr(&v54);
        goto LABEL_326;
      case 2201:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<RoguelikeDungeonActivity,Player &,unsigned int &>(
          (Player *)&v55,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<RoguelikeDungeonActivity>(
          (std::shared_ptr<BaseActivity> *const)this,
          &v55);
        std::shared_ptr<RoguelikeDungeonActivity>::~shared_ptr(&v55);
        goto LABEL_326;
      case 2200:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<PlantFlowerActivity,Player &,unsigned int &>(
          (Player *)&v53,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<PlantFlowerActivity>((std::shared_ptr<BaseActivity> *const)this, &v53);
        std::shared_ptr<PlantFlowerActivity>::~shared_ptr(&v53);
        goto LABEL_326;
    }
    if ( v6 > 2105 )
      goto LABEL_325;
    if ( v6 >= 2100 )
    {
      switch ( v6 )
      {
        case 2100:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<GeneralBannerActivity,Player &,unsigned int &>(
            (Player *)&v62,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<GeneralBannerActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v62);
          std::shared_ptr<GeneralBannerActivity>::~shared_ptr(&v62);
          break;
        case 2101:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<LunaRiteActivity,Player &,unsigned int &>(
            (Player *)&v51,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<LunaRiteActivity>((std::shared_ptr<BaseActivity> *const)this, &v51);
          std::shared_ptr<LunaRiteActivity>::~shared_ptr(&v51);
          break;
        case 2102:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<SumoActivity,Player &,unsigned int &>(
            (Player *)&v47,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<SumoActivity>((std::shared_ptr<BaseActivity> *const)this, &v47);
          std::shared_ptr<SumoActivity>::~shared_ptr(&v47);
          break;
        case 2103:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<MoonfinTrialActivity,Player &,unsigned int &>(
            (Player *)&v52,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<MoonfinTrialActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v52);
          std::shared_ptr<MoonfinTrialActivity>::~shared_ptr(&v52);
          break;
        case 2104:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<MonsterBannerEffigyWaterActivity,Player &,unsigned int &>(
            (Player *)&v49,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<MonsterBannerEffigyWaterActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v49);
          std::shared_ptr<MonsterBannerEffigyWaterActivity>::~shared_ptr(&v49);
          break;
        case 2105:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<MonsterBannerRaijinActivity,Player &,unsigned int &>(
            (Player *)&v50,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<MonsterBannerRaijinActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v50);
          std::shared_ptr<MonsterBannerRaijinActivity>::~shared_ptr(&v50);
          break;
        default:
          goto LABEL_325;
      }
      goto LABEL_326;
    }
    if ( v6 > 2005 )
      goto LABEL_325;
    if ( v6 >= 2001 )
    {
      switch ( v6 )
      {
        case 2001:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<BlitzRushActivity,Player &,unsigned int &>(
            (Player *)&v45,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<BlitzRushActivity>((std::shared_ptr<BaseActivity> *const)this, &v45);
          std::shared_ptr<BlitzRushActivity>::~shared_ptr(&v45);
          break;
        case 2002:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<ChessActivity,Player &,unsigned int &>(
            (Player *)&v46,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<ChessActivity>((std::shared_ptr<BaseActivity> *const)this, &v46);
          std::shared_ptr<ChessActivity>::~shared_ptr(&v46);
          break;
        case 2003:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<MonsterBannerEffigyFireActivity,Player &,unsigned int &>(
            (Player *)&v38,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<MonsterBannerEffigyFireActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v38);
          std::shared_ptr<MonsterBannerEffigyFireActivity>::~shared_ptr(&v38);
          break;
        case 2004:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<MonsterBannerPerpetualActivity,Player &,unsigned int &>(
            (Player *)&v39,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<MonsterBannerPerpetualActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v39);
          std::shared_ptr<MonsterBannerPerpetualActivity>::~shared_ptr(&v39);
          break;
        case 2005:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<PersonalLiine2Activity,Player &,unsigned int &>(
            (Player *)&v48,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<PersonalLiine2Activity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v48);
          std::shared_ptr<PersonalLiine2Activity>::~shared_ptr(&v48);
          break;
        default:
          goto LABEL_325;
      }
      goto LABEL_326;
    }
    if ( v6 > 1604 )
      goto LABEL_325;
    if ( v6 >= 1600 )
    {
      switch ( v6 )
      {
        case 1600:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<SummerTimeActivity,Player &,unsigned int &>(
            (Player *)&v40,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<SummerTimeActivity>((std::shared_ptr<BaseActivity> *const)this, &v40);
          std::shared_ptr<SummerTimeActivity>::~shared_ptr(&v40);
          break;
        case 1601:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<BuoyantCombatActivity,Player &,unsigned int &>(
            (Player *)&v42,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<BuoyantCombatActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v42);
          std::shared_ptr<BuoyantCombatActivity>::~shared_ptr(&v42);
          break;
        case 1602:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<EchoShellActivity,Player &,unsigned int &>(
            (Player *)&v43,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<EchoShellActivity>((std::shared_ptr<BaseActivity> *const)this, &v43);
          std::shared_ptr<EchoShellActivity>::~shared_ptr(&v43);
          break;
        case 1603:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<BounceConjuringActivity,Player &,unsigned int &>(
            (Player *)&v41,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<BounceConjuringActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v41);
          std::shared_ptr<BounceConjuringActivity>::~shared_ptr(&v41);
          break;
        case 1604:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<DaoqiAdvertisementActivity,Player &,unsigned int &>(
            (Player *)&v44,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<DaoqiAdvertisementActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v44);
          std::shared_ptr<DaoqiAdvertisementActivity>::~shared_ptr(&v44);
          break;
        default:
          goto LABEL_325;
      }
      goto LABEL_326;
    }
    if ( v6 > 1506 )
      goto LABEL_325;
    if ( v6 >= 1501 )
    {
      switch ( v6 )
      {
        case 1501:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<MonsterBannerDrakePrimoRockActivity,Player &,unsigned int &>(
            (Player *)&v26,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<MonsterBannerDrakePrimoRockActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v26);
          std::shared_ptr<MonsterBannerDrakePrimoRockActivity>::~shared_ptr(&v26);
          break;
        case 1502:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<ChannellerSlabActivity,Player &,unsigned int &>(
            (Player *)&v33,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<ChannellerSlabActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v33);
          std::shared_ptr<ChannellerSlabActivity>::~shared_ptr(&v33);
          break;
        case 1503:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<MistTrialActivity,Player &,unsigned int &>(
            (Player *)&v34,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<MistTrialActivity>((std::shared_ptr<BaseActivity> *const)this, &v34);
          std::shared_ptr<MistTrialActivity>::~shared_ptr(&v34);
          break;
        case 1504:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<HideAndSeekActivity,Player &,unsigned int &>(
            (Player *)&v35,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<HideAndSeekActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v35);
          std::shared_ptr<HideAndSeekActivity>::~shared_ptr(&v35);
          break;
        case 1505:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<FindHilichurlActivity,Player &,unsigned int &>(
            (Player *)&v36,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<FindHilichurlActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v36);
          std::shared_ptr<FindHilichurlActivity>::~shared_ptr(&v36);
          break;
        case 1506:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<MonsterBannerEffigyIceActivity,Player &,unsigned int &>(
            (Player *)&v37,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<MonsterBannerEffigyIceActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v37);
          std::shared_ptr<MonsterBannerEffigyIceActivity>::~shared_ptr(&v37);
          break;
        default:
          goto LABEL_325;
      }
      goto LABEL_326;
    }
    if ( v6 > 1405 )
      goto LABEL_325;
    if ( v6 >= 1400 )
    {
      switch ( v6 )
      {
        case 1400:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<FleurFairActivity,Player &,unsigned int &>(
            (Player *)&v28,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<FleurFairActivity>((std::shared_ptr<BaseActivity> *const)this, &v28);
          std::shared_ptr<FleurFairActivity>::~shared_ptr(&v28);
          break;
        case 1402:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<ArenaChallengeActivity,Player &,unsigned int &>(
            (Player *)&v30,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<ArenaChallengeActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v30);
          std::shared_ptr<ArenaChallengeActivity>::~shared_ptr(&v30);
          break;
        case 1403:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<WaterSpiritActivity,Player &,unsigned int &>(
            (Player *)&v29,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<WaterSpiritActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v29);
          std::shared_ptr<WaterSpiritActivity>::~shared_ptr(&v29);
          break;
        case 1404:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<SigninCompanionActivity,Player &,unsigned int &>(
            (Player *)&v31,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<SigninCompanionActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v31);
          std::shared_ptr<SigninCompanionActivity>::~shared_ptr(&v31);
          break;
        case 1405:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<CoopActivity,Player &,unsigned int &>(
            (Player *)&v32,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<CoopActivity>((std::shared_ptr<BaseActivity> *const)this, &v32);
          std::shared_ptr<CoopActivity>::~shared_ptr(&v32);
          break;
        default:
          goto LABEL_325;
      }
      goto LABEL_326;
    }
    if ( v6 == 1302 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<SeaLampActivity,Player &,unsigned int &>(
        (Player *)&v24,
        *(unsigned int **)(activity_id + 24),
        (Player *)(v3 + 64),
        *(unsigned int **)(activity_id + 24));
      std::shared_ptr<BaseActivity>::operator=<SeaLampActivity>((std::shared_ptr<BaseActivity> *const)this, &v24);
      std::shared_ptr<SeaLampActivity>::~shared_ptr(&v24);
      goto LABEL_326;
    }
    if ( v6 > 1302 )
      goto LABEL_325;
    switch ( v6 )
    {
      case 1301:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<ExpeditionActivity,Player &,unsigned int &>(
          (Player *)&v27,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<ExpeditionActivity>((std::shared_ptr<BaseActivity> *const)this, &v27);
        std::shared_ptr<ExpeditionActivity>::~shared_ptr(&v27);
        goto LABEL_326;
      case 1300:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BlessingActivity,Player &,unsigned int &>(
          (Player *)&v25,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<BlessingActivity>((std::shared_ptr<BaseActivity> *const)this, &v25);
        std::shared_ptr<BlessingActivity>::~shared_ptr(&v25);
        goto LABEL_326;
      case 1205:
        if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<SalesmanMpActivity,Player &,unsigned int &>(
          (Player *)&v23,
          *(unsigned int **)(activity_id + 24),
          (Player *)(v3 + 64),
          *(unsigned int **)(activity_id + 24));
        std::shared_ptr<BaseActivity>::operator=<SalesmanMpActivity>((std::shared_ptr<BaseActivity> *const)this, &v23);
        std::shared_ptr<SalesmanMpActivity>::~shared_ptr(&v23);
        goto LABEL_326;
    }
    if ( v6 > 1205 )
      goto LABEL_325;
    if ( v6 == 1204 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<TreasureMapActivity,Player &,unsigned int &>(
        (Player *)&v22,
        *(unsigned int **)(activity_id + 24),
        (Player *)(v3 + 64),
        *(unsigned int **)(activity_id + 24));
      std::shared_ptr<BaseActivity>::operator=<TreasureMapActivity>((std::shared_ptr<BaseActivity> *const)this, &v22);
      std::shared_ptr<TreasureMapActivity>::~shared_ptr(&v22);
      goto LABEL_326;
    }
    if ( v6 == 1202 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<EffigyActivity,Player &,unsigned int &>(
        (Player *)&v21,
        *(unsigned int **)(activity_id + 24),
        (Player *)(v3 + 64),
        *(unsigned int **)(activity_id + 24));
      std::shared_ptr<BaseActivity>::operator=<EffigyActivity>((std::shared_ptr<BaseActivity> *const)this, &v21);
      std::shared_ptr<EffigyActivity>::~shared_ptr(&v21);
      goto LABEL_326;
    }
    if ( v6 > 1202 )
      goto LABEL_325;
    if ( v6 == 1200 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<DragonSpineActivity,Player &,unsigned int &>(
        (Player *)&v20,
        *(unsigned int **)(activity_id + 24),
        (Player *)(v3 + 64),
        *(unsigned int **)(activity_id + 24));
      std::shared_ptr<BaseActivity>::operator=<DragonSpineActivity>((std::shared_ptr<BaseActivity> *const)this, &v20);
      std::shared_ptr<DragonSpineActivity>::~shared_ptr(&v20);
      goto LABEL_326;
    }
    if ( v6 > 1200 )
    {
LABEL_325:
      common::milog::MiLogStream::create(
        &v92,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/player_activity_comp.cpp",
        "createActivity",
        761);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v92, (const char (*)[25])byte_25F07440);
      v8 = common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
             v7,
             (const data::NewActivityType *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v92);
      goto LABEL_326;
    }
    if ( v6 > 10 )
    {
      if ( v6 != 1100 )
        goto LABEL_325;
      if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<AsterActivity,Player &,unsigned int &>(
        (Player *)&v17,
        *(unsigned int **)(activity_id + 24),
        (Player *)(v3 + 64),
        *(unsigned int **)(activity_id + 24));
      std::shared_ptr<BaseActivity>::operator=<AsterActivity>((std::shared_ptr<BaseActivity> *const)this, &v17);
      std::shared_ptr<AsterActivity>::~shared_ptr(&v17);
    }
    else
    {
      if ( v6 < 2 )
        goto LABEL_325;
      switch ( v6 )
      {
        case 2:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<CrucibleActivity,Player &,unsigned int &>(
            (Player *)&v15,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<CrucibleActivity>((std::shared_ptr<BaseActivity> *const)this, &v15);
          std::shared_ptr<CrucibleActivity>::~shared_ptr(&v15);
          break;
        case 3:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<SalesmanActivity,Player &,unsigned int &>(
            (Player *)&__r,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<SalesmanActivity>((std::shared_ptr<BaseActivity> *const)this, &__r);
          std::shared_ptr<SalesmanActivity>::~shared_ptr(&__r);
          break;
        case 4:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<TrialAvatarActivity,Player &,unsigned int &>(
            (Player *)&v14,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<TrialAvatarActivity>(
            (std::shared_ptr<BaseActivity> *const)this,
            &v14);
          std::shared_ptr<TrialAvatarActivity>::~shared_ptr(&v14);
          break;
        case 8:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<BaseActivity,Player &,unsigned int &>(
            (Player *)&v16,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=((std::shared_ptr<BaseActivity> *const)this, &v16);
          std::shared_ptr<BaseActivity>::~shared_ptr(&v16);
          break;
        case 9:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<DeliveryActivity,Player &,unsigned int &>(
            (Player *)&v18,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<DeliveryActivity>((std::shared_ptr<BaseActivity> *const)this, &v18);
          std::shared_ptr<DeliveryActivity>::~shared_ptr(&v18);
          break;
        case 10:
          if ( *(_BYTE *)(((unsigned __int64)(activity_id + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::tools::perf::make_shared<FlightActivity,Player &,unsigned int &>(
            (Player *)&v19,
            *(unsigned int **)(activity_id + 24),
            (Player *)(v3 + 64),
            *(unsigned int **)(activity_id + 24));
          std::shared_ptr<BaseActivity>::operator=<FlightActivity>((std::shared_ptr<BaseActivity> *const)this, &v19);
          std::shared_ptr<FlightActivity>::~shared_ptr(&v19);
          break;
        default:
          goto LABEL_325;
      }
    }
  }
LABEL_326:
  if ( v93 == (char *)v3 )
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
  return this;
};

// Line 769: range 0000000016C1D2E4-0000000016C1D54C
int32_t __cdecl PlayerActivityComp::insertActivityPtr(PlayerActivityComp *const this, BaseActivityPtr *p_activity_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::shared_ptr<BaseActivity> *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-80h] BYREF
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 activity_id:772";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::insertActivityPtr;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( std::operator==<BaseActivity>(p_activity_ptr, 0LL) )
  {
    result = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_activity_ptr);
    *(_DWORD *)(v2 + 32) = BaseActivity::getActivityId(v6);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>,unsigned int>(
           &this->activity_map_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/player_activity_comp.cpp",
        "insertActivityPtr",
        776);
      v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v12, (const char (*)[13])"activity_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])off_25F07600);
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = -1;
    }
    else
    {
      v9 = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::operator[](
             &this->activity_map_,
             (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::key_type *)(v2 + 32));
      std::shared_ptr<BaseActivity>::operator=(v9, p_activity_ptr);
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.cpp",
        "insertActivityPtr",
        782);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v12, (const char (*)[13])"activity_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])off_25F07640);
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 0;
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
  return result;
};

// Line 788: range 0000000016C1D54E-0000000016C1E2CF
void __cdecl PlayerActivityComp::notifyServerAnnounceOnLogin(PlayerActivityComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  DbConfigMgr *p_db_config_mgr; // r14
  uint32_t Now; // eax
  common::milog::MiLogStream *v6; // r14
  char v7; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v9; // rax
  std::__shared_ptr_access<proto::ServerAnnounceNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerBasicComp *BasicComp; // rax
  const DbLocalConfigMgr *p_db_local_config_mgr; // rdi
  std::string *p_center_system_text; // rcx
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // r14d
  DbConfigMgr *v20; // r9
  std::string *p_count_down_text; // rcx
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  const DbLocalConfigMgr *p_dungeon_confirm_text_id; // rdi
  std::string *p_dungeon_confirm_text; // rcx
  bool v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  Player *player; // r14
  unsigned int value; // [rsp+18h] [rbp-198h] BYREF
  uint32_t player_language_type; // [rsp+1Ch] [rbp-194h]
  std::vector<data::AnnounceConfig>::iterator __for_begin; // [rsp+20h] [rbp-190h] BYREF
  std::vector<data::AnnounceConfig>::iterator __for_end; // [rsp+28h] [rbp-188h] BYREF
  unsigned __int64 val; // [rsp+30h] [rbp-180h] BYREF
  std::vector<data::AnnounceConfig> *__for_range; // [rsp+38h] [rbp-178h]
  data::AnnounceConfig *config; // [rsp+40h] [rbp-170h]
  proto::AnnounceData *announce_data; // [rsp+48h] [rbp-168h]
  std::shared_ptr<const google::protobuf::Message> v44; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v45; // [rsp+60h] [rbp-150h] BYREF
  char v46[304]; // [rsp+80h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 14 channel_id:807 48 4 18 sub_channel_id:808 64 8 16 channel_iter:811 96 16 14 notify_ptr"
                        ":797 128 24 23 announce_config_vec:789 192 32 11 textmap:831";
  *(_QWORD *)(v1 + 16) = PlayerActivityComp::notifyServerAnnounceOnLogin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v44);
  p_db_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.db_config_mgr;
  Now = common::tools::TimeUtils::getNow();
  DbLocalConfigMgr::findActiveAnnounceConfig(
    (std::vector<data::AnnounceConfig> *)(v1 + 128),
    &p_db_config_mgr->db_local_config_mgr,
    Now);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
  common::milog::MiLogStream::create(
    &v45,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/player_activity_comp.cpp",
    "notifyServerAnnounceOnLogin",
    791);
  v6 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
         &v45,
         (const char (*)[72])"[ANNOUNCE] notifyServerAnnounceOnLogin get announce_config_vec length: ");
  val = std::vector<data::AnnounceConfig>::size((const std::vector<data::AnnounceConfig> *const)(v1 + 128));
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v45);
  if ( !std::vector<data::AnnounceConfig>::empty((const std::vector<data::AnnounceConfig> *const)(v1 + 128)) )
  {
    common::tools::perf::make_shared<proto::ServerAnnounceNotify>();
    __for_range = (std::vector<data::AnnounceConfig> *)(v1 + 128);
    __for_begin._M_current = std::vector<data::AnnounceConfig>::begin((std::vector<data::AnnounceConfig> *const)(v1 + 128))._M_current;
    __for_end._M_current = std::vector<data::AnnounceConfig>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::AnnounceConfig *,std::vector<data::AnnounceConfig>>(&__for_begin, &__for_end) )
    {
      config = __gnu_cxx::__normal_iterator<data::AnnounceConfig *,std::vector<data::AnnounceConfig>>::operator*(&__for_begin);
      if ( std::set<unsigned int>::empty(&config->platform_type_set) )
        goto LABEL_12;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      value = Player::getPlatformType(this->player_);
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              &config->platform_type_set,
              &value) )
        v7 = 1;
      else
LABEL_12:
        v7 = 0;
      if ( !v7 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v1 + 32) = Player::getChannelId(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v1 + 48) = Player::getSubChannelId(this->player_);
        if ( std::map<unsigned int,std::set<unsigned int>>::empty(&config->channel_config_map)
          || (*(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v1 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                        &config->channel_config_map,
                                                                                        (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v1 + 32)),
              val = (unsigned __int64)std::map<unsigned int,std::set<unsigned int>>::end(&config->channel_config_map)._M_node,
              !std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v1 + 64),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)&val))
          && ((v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v1 + 64)),
               std::set<unsigned int>::empty(&v8->second))
           || (v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v1 + 64)),
               common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                 &v9->second,
                 (const unsigned int *)(v1 + 48)))) )
        {
          v10 = std::__shared_ptr_access<proto::ServerAnnounceNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerAnnounceNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          announce_data = proto::ServerAnnounceNotify::add_announce_data_list(v10);
          if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto::AnnounceData::set_config_id(announce_data, config->id);
          if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::AnnounceData::set_begin_time(announce_data, config->begin_time);
          if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto::AnnounceData::set_end_time(announce_data, config->end_time);
          if ( *(char *)(((unsigned __int64)&config->is_center_system_last_5_every_minutes >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&config->is_center_system_last_5_every_minutes);
          proto::AnnounceData::set_is_center_system_last_5_every_minutes(
            announce_data,
            config->is_center_system_last_5_every_minutes);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          player_language_type = PlayerBasicComp::getLanguageType(BasicComp);
          std::string::basic_string(v1 + 192);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v44);
          p_db_local_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.db_config_mgr.db_local_config_mgr;
          p_center_system_text = &config->center_system_text;
          if ( *(_BYTE *)(((unsigned __int64)&config->center_system_text_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->center_system_text_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_db_local_config_mgr = (const DbLocalConfigMgr *)&config->center_system_text_id;
            __asan_report_load4();
          }
          v14 = DbLocalConfigMgr::replaceTextWithLanguageType(
                  p_db_local_config_mgr,
                  config->center_system_text_id,
                  player_language_type,
                  p_center_system_text,
                  (std::string *)(v1 + 192)) != 0;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
          if ( v14 )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/player_activity_comp.cpp",
              "notifyServerAnnounceOnLogin",
              834);
            v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v45,
                    (const char (*)[29])"replaceTextWithLanguageType ");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    &config->center_system_text_id);
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])":");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &config->center_system_text);
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" failed");
            common::milog::MiLogStream::~MiLogStream(&v45);
            v19 = 0;
          }
          else
          {
            proto::AnnounceData::set_center_system_text(announce_data, (const std::string *)(v1 + 192));
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v44);
            v20 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.db_config_mgr;
            p_count_down_text = &config->count_down_text;
            if ( *(_BYTE *)(((unsigned __int64)&config->count_down_text_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->count_down_text_id >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v22 = DbLocalConfigMgr::replaceTextWithLanguageType(
                    &v20->db_local_config_mgr,
                    config->count_down_text_id,
                    player_language_type,
                    p_count_down_text,
                    (std::string *)(v1 + 192)) != 0;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
            if ( v22 )
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/player_activity_comp.cpp",
                "notifyServerAnnounceOnLogin",
                840);
              v23 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v45,
                      (const char (*)[29])"replaceTextWithLanguageType ");
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      &config->count_down_text_id);
              v25 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v24, (const char (*)[2])":");
              v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &config->count_down_text);
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])" failed");
              common::milog::MiLogStream::~MiLogStream(&v45);
              v19 = 0;
            }
            else
            {
              proto::AnnounceData::set_count_down_text(announce_data, (const std::string *)(v1 + 192));
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v44);
              p_dungeon_confirm_text_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.db_config_mgr.db_local_config_mgr;
              p_dungeon_confirm_text = &config->dungeon_confirm_text;
              if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_confirm_text_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->dungeon_confirm_text_id >> 3) + 0x7FFF8000) <= 3 )
              {
                p_dungeon_confirm_text_id = (const DbLocalConfigMgr *)&config->dungeon_confirm_text_id;
                __asan_report_load4();
              }
              v29 = DbLocalConfigMgr::replaceTextWithLanguageType(
                      p_dungeon_confirm_text_id,
                      config->dungeon_confirm_text_id,
                      player_language_type,
                      p_dungeon_confirm_text,
                      (std::string *)(v1 + 192)) != 0;
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
              if ( v29 )
              {
                common::milog::MiLogStream::create(
                  &v45,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/player_activity_comp.cpp",
                  "notifyServerAnnounceOnLogin",
                  846);
                v30 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        &v45,
                        (const char (*)[29])"replaceTextWithLanguageType ");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        &config->dungeon_confirm_text_id);
                v32 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v31, (const char (*)[2])":");
                v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v32,
                        &config->dungeon_confirm_text);
                common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])" failed");
                common::milog::MiLogStream::~MiLogStream(&v45);
                v19 = 0;
              }
              else
              {
                proto::AnnounceData::set_dungeon_confirm_text(announce_data, (const std::string *)(v1 + 192));
                if ( *(_BYTE *)(((unsigned __int64)&config->count_down_frequency >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->count_down_frequency >> 3)
                                                                        + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::AnnounceData::set_count_down_frequency(announce_data, config->count_down_frequency);
                if ( *(_BYTE *)(((unsigned __int64)&config->center_system_frequency >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->center_system_frequency >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::AnnounceData::set_center_system_frequency(announce_data, config->center_system_frequency);
                v19 = 1;
              }
            }
          }
          std::string::~string((void *)(v1 + 192));
          if ( v19 != 1 )
            goto LABEL_54;
        }
      }
      __gnu_cxx::__normal_iterator<data::AnnounceConfig *,std::vector<data::AnnounceConfig>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::ServerAnnounceNotify>((const std::shared_ptr<proto::ServerAnnounceNotify> *)&v44);
    Player::sendMessage(player, &v44, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v44);
LABEL_54:
    std::shared_ptr<proto::ServerAnnounceNotify>::~shared_ptr((std::shared_ptr<proto::ServerAnnounceNotify> *const)(v1 + 96));
  }
  std::vector<data::AnnounceConfig>::~vector((std::vector<data::AnnounceConfig> *const)(v1 + 128));
  if ( v46 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 858: range 0000000016C1E2D0-0000000016C1E5F5
int32_t __cdecl PlayerActivityComp::notifyScheduleInfo(PlayerActivityComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  time_t Now; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  google::protobuf::uint32 v6; // eax
  std::__shared_ptr_access<proto::ActivityScheduleInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::ActivityScheduleInfo *v8; // rax
  Player *player; // r14
  int32_t result; // eax
  std::vector<proto::ActivityScheduleInfo>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<proto::ActivityScheduleInfo>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  time_t open_time; // [rsp+28h] [rbp-D8h]
  std::vector<proto::ActivityScheduleInfo> *__for_range; // [rsp+30h] [rbp-D0h]
  const proto::ActivityScheduleInfo *schedule_info; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<const google::protobuf::Message> v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 notify_ptr:859 64 24 16 schedule_vec:862";
  *(_QWORD *)(v1 + 16) = PlayerActivityComp::notifyScheduleInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  common::tools::perf::make_shared<proto::ActivityScheduleInfoNotify>();
  std::vector<proto::ActivityScheduleInfo>::vector((std::vector<proto::ActivityScheduleInfo> *const)(v1 + 64));
  PlayerActivityComp::findNowAndFutureScheduleConfig(this, (std::vector<proto::ActivityScheduleInfo> *)(v1 + 64));
  Now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  open_time = Now
            + 86400LL
            * ConstValueExcelConfigMgr::getActivityDisplayDays(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v16);
  __for_range = (std::vector<proto::ActivityScheduleInfo> *)(v1 + 64);
  __for_begin._M_current = std::vector<proto::ActivityScheduleInfo>::begin((std::vector<proto::ActivityScheduleInfo> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<proto::ActivityScheduleInfo>::end((std::vector<proto::ActivityScheduleInfo> *const)(v1 + 64))._M_current;
  while ( __gnu_cxx::operator!=<proto::ActivityScheduleInfo *,std::vector<proto::ActivityScheduleInfo>>(
            &__for_begin,
            &__for_end) )
  {
    schedule_info = __gnu_cxx::__normal_iterator<proto::ActivityScheduleInfo *,std::vector<proto::ActivityScheduleInfo>>::operator*(&__for_begin);
    v6 = proto::ActivityScheduleInfo::begin_time(schedule_info);
    if ( open_time >= v6 )
    {
      v7 = std::__shared_ptr_access<proto::ActivityScheduleInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ActivityScheduleInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v8 = proto::ActivityScheduleInfoNotify::add_activity_schedule_list(v7);
      proto::ActivityScheduleInfo::operator=(v8, schedule_info);
    }
    __gnu_cxx::__normal_iterator<proto::ActivityScheduleInfo *,std::vector<proto::ActivityScheduleInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::ActivityScheduleInfoNotify>((const std::shared_ptr<proto::ActivityScheduleInfoNotify> *)&v16);
  Player::sendMessage(player, &v16, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v16);
  std::vector<proto::ActivityScheduleInfo>::~vector((std::vector<proto::ActivityScheduleInfo> *const)(v1 + 64));
  std::shared_ptr<proto::ActivityScheduleInfoNotify>::~shared_ptr((std::shared_ptr<proto::ActivityScheduleInfoNotify> *const)(v1 + 32));
  result = 0;
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
  return result;
};

// Line 878: range 0000000016C1E5F6-0000000016C1EA9B
void __cdecl PlayerActivityComp::onWatcherProgressUpdate(
        PlayerActivityComp *const this,
        const WatcherProgressUpdateEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int8 (__fastcall *v10)(unsigned __int64, _QWORD); // r8
  const std::shared_ptr<BaseActivity> *v11; // rax
  BaseActivity *v12; // rcx
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  const data::NewActivityWatcherConfig *watcher_config_ptr; // [rsp+20h] [rbp-F0h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+28h] [rbp-E8h]
  std::set<std::shared_ptr<BaseActivity>> *__for_range_0; // [rsp+30h] [rbp-E0h]
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *__in; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-C8h]
  char v21[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 16 activity_ptr:898 80 48 20 activity_ptr_set:885";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::onWatcherProgressUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 48));
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48))->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                         p_new_activity_config_mgr,
                         event->watcher_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 48));
  if ( watcher_config_ptr )
  {
    std::set<std::shared_ptr<BaseActivity>>::set((std::set<std::shared_ptr<BaseActivity>> *const)(v2 + 80));
    __for_range = &this->activity_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
              &__for_begin,
              &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
      activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
      activity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
      if ( !std::operator==<BaseActivity>(0LL, activity_ptr) )
      {
        v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
        if ( BaseActivity::isOpening(v6, 0) )
        {
          v8 = (unsigned __int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v8 = __asan_report_load8();
          v9 = *(_QWORD *)v8 + 184LL;
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            v8 = __asan_report_load8();
          v10 = *(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))v9;
          if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( v10(v8, event->watcher_id) )
            std::set<std::shared_ptr<BaseActivity>>::insert(
              (std::set<std::shared_ptr<BaseActivity>> *const)(v2 + 80),
              activity_ptr);
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = (std::set<std::shared_ptr<BaseActivity>> *)(v2 + 80);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::set<std::shared_ptr<BaseActivity>>::begin((const std::set<std::shared_ptr<BaseActivity>> *const)(v2 + 80))._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::set<std::shared_ptr<BaseActivity>>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::shared_ptr<BaseActivity> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::shared_ptr<BaseActivity> >::_Self *)&__for_end) )
    {
      v11 = std::_Rb_tree_const_iterator<std::shared_ptr<BaseActivity>>::operator*((const std::_Rb_tree_const_iterator<std::shared_ptr<BaseActivity> > *const)&__for_begin);
      std::shared_ptr<BaseActivity>::shared_ptr((std::shared_ptr<BaseActivity> *const)(v2 + 48), v11);
      v12 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      BaseActivity::onWatcherProgressUpdate(v12, event, watcher_config_ptr);
      std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v2 + 48));
      std::_Rb_tree_const_iterator<std::shared_ptr<BaseActivity>>::operator++((std::_Rb_tree_const_iterator<std::shared_ptr<BaseActivity> > *const)&__for_begin);
    }
    std::set<std::shared_ptr<BaseActivity>>::~set((std::set<std::shared_ptr<BaseActivity>> *const)(v2 + 80));
  }
  if ( v21 == (char *)v2 )
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

// Line 906: range 0000000016C1EA9C-0000000016C1EB62
void __cdecl PlayerActivityComp::findOpenActivityList(
        const PlayerActivityComp *const this,
        std::vector<unsigned int> *activity_vec)
{
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v6);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v6);
    v2 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
    if ( BaseActivity::isOpening(v2, 0) )
      std::vector<unsigned int>::push_back(activity_vec, activity_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
};

// Line 917: range 0000000016C1EB64-0000000016C1F5C7
void __cdecl PlayerActivityComp::refreshActivity(PlayerActivityComp *const this, uint32_t *next_refresh_time)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  BaseActivity *v8; // rax
  BaseActivity *v9; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  const NewActivityExcelConfigMgr *v14; // rcx
  PlayerActivityComp::ActivityStatus v15; // eax
  std::vector<data::NewActivityScheduleCond> *p_cond; // rcx
  data::LogicType cond_comb; // edi
  unsigned int v18; // r14d
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t v21; // ecx
  PlayerQuestComp *v22; // rax
  bool has_activity_end; // [rsp+17h] [rbp-169h]
  uint32_t now; // [rsp+18h] [rbp-168h]
  unsigned int begin_time; // [rsp+1Ch] [rbp-164h]
  unsigned int end_time; // [rsp+20h] [rbp-160h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  const NewActivityExcelConfigMgr *conf_mgr; // [rsp+38h] [rbp-148h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+40h] [rbp-140h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-138h]
  unsigned int *schedule_id; // [rsp+50h] [rbp-130h]
  const data::NewActivityExcelConfig *activity_conf_ptr; // [rsp+58h] [rbp-128h]
  const data::NewActivityScheduleExcelConfig *schedule_conf_ptr; // [rsp+60h] [rbp-120h]
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *__in; // [rsp+68h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+70h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+78h] [rbp-108h]
  std::shared_ptr<BaseActivity> v39; // [rsp+80h] [rbp-100h] BYREF
  common::milog::MiLogStream v40; // [rsp+90h] [rbp-F0h] BYREF
  char v41[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 next_time:943 64 16 16 activity_ptr:962 96 24 16 schedule_vec:938";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::refreshActivity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v39);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.new_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v39);
  has_activity_end = 0;
  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    activity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    if ( std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( !BaseActivity::isSettled(v5) )
      {
        v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
        if ( BaseActivity::isFinished(v6) )
        {
          v8 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
          BaseActivity::settle(v8);
          v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
          BaseActivity::notifyClientData(v9, 0);
          has_activity_end = 1;
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( has_activity_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    QuestComp = Player::getQuestComp(this->player_);
    PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_ACTIVITY_END, 1, 0);
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
  NewActivityExcelConfigMgr::findNowAndFutureScheduleIdVec(conf_mgr, (std::vector<unsigned int> *)(v2 + 96));
  common::milog::MiLogStream::create(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/player_activity_comp.cpp",
    "refreshActivity",
    940);
  v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v40, (const char (*)[15])" SCHEDULE VEC:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int>(v11, (const std::vector<unsigned int> *)(v2 + 96));
  v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v13, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v40);
  now = common::tools::TimeUtils::getNow();
  *(_DWORD *)(v2 + 48) = -1;
  __for_range_0 = (std::vector<unsigned int> *)(v2 + 96);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 96))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    schedule_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_conf_ptr = NewActivityExcelConfigMgr::findActivityConfigPtrByScheduleId(conf_mgr, *schedule_id);
    if ( activity_conf_ptr )
    {
      v14 = conf_mgr;
      if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      schedule_conf_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(v14, *schedule_id);
      if ( schedule_conf_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        begin_time = NewActivityExcelConfigMgr::getScheduleBeginTime(conf_mgr, *schedule_id);
        if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        end_time = NewActivityExcelConfigMgr::getScheduleEndTime(conf_mgr, *schedule_id, 0);
        if ( *(_BYTE *)(((unsigned __int64)&activity_conf_ptr->activity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&activity_conf_ptr->activity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        PlayerActivityComp::findBaseActivity(
          (PlayerActivityComp *const)(v2 + 64),
          (__int64)this,
          activity_conf_ptr->activity_id);
        v15 = PlayerActivityComp::calcActivityStatus(this, now, begin_time, end_time);
        if ( v15 == IS_OVER )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/player_activity_comp.cpp",
            "refreshActivity",
            992);
          v19 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                  &v40,
                  (const char (*)[68])"found ended activity by findNowAndFutureScheduleIdVec, activity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &activity_conf_ptr->activity_id);
          common::milog::MiLogStream::~MiLogStream(&v40);
        }
        else
        {
          if ( v15 > IS_OVER )
            goto LABEL_49;
          if ( v15 == IS_ONGOING )
          {
            PlayerActivityComp::updateMinNextTime(this, (uint32_t *)(v2 + 48), end_time);
            p_cond = &schedule_conf_ptr->cond;
            if ( *(_BYTE *)(((unsigned __int64)&schedule_conf_ptr->cond_comb >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&schedule_conf_ptr->cond_comb >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            cond_comb = schedule_conf_ptr->cond_comb;
            if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              cond_comb = (int)schedule_id;
              __asan_report_load4();
            }
            if ( PlayerActivityComp::checkScheduleCondVecIsMeet(this, *schedule_id, cond_comb, p_cond) )
            {
              if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v18 = *schedule_id;
              std::shared_ptr<BaseActivity>::shared_ptr(&v39, (const std::shared_ptr<BaseActivity> *)(v2 + 64));
              PlayerActivityComp::processIsOngoingActivity(this, &v39, v18);
              std::shared_ptr<BaseActivity>::~shared_ptr(&v39);
            }
          }
          else if ( v15 == NOT_STARTED )
          {
            PlayerActivityComp::updateMinNextTime(this, (uint32_t *)(v2 + 48), begin_time);
          }
          else
          {
LABEL_49:
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/player_activity_comp.cpp",
              "refreshActivity",
              996);
            v20 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v40,
                    (const char (*)[28])"unknow status, activity_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &activity_conf_ptr->activity_id);
            common::milog::MiLogStream::~MiLogStream(&v40);
          }
        }
        std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v2 + 64));
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  v21 = *(_DWORD *)(v2 + 48);
  if ( *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)next_refresh_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(next_refresh_time);
  }
  *next_refresh_time = v21;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v22 = Player::getQuestComp(this->player_);
  PlayerQuestComp::tryAcceptQuestByCond(v22, QUEST_COND_PERSONAL_LINE_UNLOCK, 1, 0);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  if ( v41 == (char *)v2 )
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

// Line 1009: range 0000000016C1F5C8-0000000016C1F7BF
void __cdecl PlayerActivityComp::updateTimer(PlayerActivityComp *const this, uint32_t next_refresh_time)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+10h] [rbp-50h] BYREF
  uint32_t delta_time; // [rsp+14h] [rbp-4Ch]
  uint32_t now; // [rsp+18h] [rbp-48h]
  uint32_t activity_timer_interval_rand_time; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( next_refresh_time )
  {
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
    if ( *(_BYTE *)(((unsigned __int64)&v2->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v2->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    activity_timer_interval_rand_time = v2->activity_timer_interval_rand_time;
    std::shared_ptr<Config>::~shared_ptr(&v9);
    delta_time = common::tools::RandomUtils::rand<unsigned int>(0, activity_timer_interval_rand_time) + 120;
    if ( now < next_refresh_time && delta_time > next_refresh_time - now )
      delta_time = next_refresh_time - now + common::tools::RandomUtils::rand<unsigned int>(0, 2u);
    if ( common::tools::MiTimer::isActive(&this->activity_timer_) )
      common::tools::MiTimer::cancel(&this->activity_timer_);
    if ( PlayerUnixTimer::startS(
           &this->activity_timer_,
           delta_time,
           0,
           "./src/player/activity/player_activity_comp.cpp",
           "updateTimer",
           1029) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/player_activity_comp.cpp",
        "updateTimer",
        1031);
      v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v10, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        v4,
        (const char (*)[30])" activity_timer_ startS fails");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
  }
};

// Line 1036: range 0000000016C1F7C0-0000000016C1F7DE
void __cdecl PlayerActivityComp::onActivityTimer(PlayerActivityComp *const this, uint64_t now_ms)
{
  PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1041: range 0000000016C1F7E0-0000000016C1F81D
PlayerActivityComp::ActivityStatus __cdecl PlayerActivityComp::calcActivityStatus(
        PlayerActivityComp *const this,
        uint32_t now,
        uint32_t begin,
        uint32_t end)
{
  if ( begin <= now && now < end )
    return 1;
  if ( now >= begin )
    return 3;
  return 2;
};

// Line 1058: range 0000000016C1F81E-0000000016C1FE1D
void __fastcall PlayerActivityComp::processIsOngoingActivity(
        PlayerActivityComp *const this,
        std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *p_activity_ptr,
        uint32_t schedule_id)
{
  unsigned __int64 p_M_before_begin; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  BaseActivity *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  BaseActivity *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  BaseActivity *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  BaseActivity *v21; // rax
  int ret_1; // [rsp+2Ch] [rbp-D4h]
  NewActivityExcelConfigMgr *conf_mgr; // [rsp+38h] [rbp-C8h]
  PlayerActivityComp v25; // [rsp+40h] [rbp-C0h] BYREF

  p_M_before_begin = (unsigned __int64)&v25.activity_map_._M_h._M_before_begin;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      p_M_before_begin = v4;
  }
  *(_QWORD *)p_M_before_begin = 1102416563LL;
  *(_QWORD *)(p_M_before_begin + 8) = "2 48 4 16 activity_id:1088 64 4 16 schedule_id:1057";
  *(_QWORD *)(p_M_before_begin + 16) = PlayerActivityComp::processIsOngoingActivity;
  v5 = (_DWORD *)(p_M_before_begin >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(p_M_before_begin + 64) = schedule_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.new_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
  if ( std::operator!=<BaseActivity>((const std::shared_ptr<BaseActivity> *)p_activity_ptr, 0LL) )
  {
    v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_activity_ptr);
    if ( BaseActivity::getScheduleId(v6) != *(_DWORD *)(p_M_before_begin + 64) )
    {
      v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_activity_ptr);
      if ( !BaseActivity::isSettled(v7) )
      {
        v8 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_activity_ptr);
        if ( BaseActivity::settle(v8) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v25._M_weak_this._M_refcount,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/player_activity_comp.cpp",
            "processIsOngoingActivity",
            1073);
          v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 (common::milog::MiLogStream *const)&v25._M_weak_this._M_refcount,
                 (const char (*)[39])byte_25F07C40);
          v10 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_activity_ptr);
          *(_DWORD *)(p_M_before_begin + 48) = BaseActivity::getScheduleId(v10);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v9,
            (const unsigned int *)(p_M_before_begin + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v25._M_weak_this._M_refcount);
        }
      }
      goto LABEL_16;
    }
    v11 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_activity_ptr);
    BaseActivity::updateAllConds(v11);
    v12 = (unsigned __int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_activity_ptr);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    v13 = *(_QWORD *)v12 + 56LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v13)(v12);
  }
  else
  {
    *(_DWORD *)(p_M_before_begin + 48) = NewActivityExcelConfigMgr::getActivityIdByScheduleId(
                                           conf_mgr,
                                           *(_DWORD *)(p_M_before_begin + 64));
    PlayerActivityComp::createActivity(&v25, (__int64)this, *(_DWORD *)(p_M_before_begin + 48));
    std::shared_ptr<BaseActivity>::operator=(
      (std::shared_ptr<BaseActivity> *const)p_activity_ptr,
      (std::shared_ptr<BaseActivity> *)&v25);
    std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v25);
    std::shared_ptr<BaseActivity>::shared_ptr(
      (std::shared_ptr<BaseActivity> *const)&v25,
      (const std::shared_ptr<BaseActivity> *)p_activity_ptr);
    ret_1 = PlayerActivityComp::insertActivityPtr(this, (BaseActivityPtr *)&v25);
    std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v25);
    if ( !ret_1 )
    {
LABEL_16:
      if ( std::operator==<BaseActivity>((const std::shared_ptr<BaseActivity> *)p_activity_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v25._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/player_activity_comp.cpp",
          "processIsOngoingActivity",
          1101);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          (common::milog::MiLogStream *const)&v25._M_weak_this._M_refcount,
          (const char (*)[24])"activity_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v25._M_weak_this._M_refcount);
      }
      else
      {
        v16 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_activity_ptr);
        if ( (unsigned int)BaseActivity::start(v16, *(_DWORD *)(p_M_before_begin + 64)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v25._M_weak_this._M_refcount,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/player_activity_comp.cpp",
            "processIsOngoingActivity",
            1109);
          v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)&v25._M_weak_this._M_refcount,
                  (const char (*)[35])"activity start fails, activity_id:");
          v18 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_activity_ptr);
          *(_DWORD *)(p_M_before_begin + 48) = BaseActivity::getActivityId(v18);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(p_M_before_begin + 48));
          v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])"schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v20,
            (const unsigned int *)(p_M_before_begin + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v25._M_weak_this._M_refcount);
        }
        else
        {
          v21 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_activity_ptr);
          BaseActivity::notifyClientData(v21, 1);
        }
      }
      goto LABEL_21;
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v25._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/player_activity_comp.cpp",
      "processIsOngoingActivity",
      1095);
    v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            (common::milog::MiLogStream *const)&v25._M_weak_this._M_refcount,
            (const char (*)[19])"insertActivityPtr ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v14,
            (const unsigned int *)(p_M_before_begin + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v25._M_weak_this._M_refcount);
  }
LABEL_21:
  if ( &v25.activity_map_._M_h._M_before_begin == (std::_Hashtable<unsigned int,std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,std::allocator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::__node_base *)p_M_before_begin )
  {
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_before_begin >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_before_begin = 1172321806LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_before_begin >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1119: range 0000000016C1FE1E-0000000016C1FF65
void __fastcall PlayerActivityComp::updateMinNextTime(
        PlayerActivityComp *const this,
        uint32_t *next_time,
        uint32_t time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t *v6; // rdx
  uint32_t v7; // ecx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 time:1118";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::updateMinNextTime;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = time;
  v6 = (uint32_t *)std::min<unsigned int>(next_time, (const unsigned int *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v7 = *v6;
  if ( *(_BYTE *)(((unsigned __int64)next_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)next_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)next_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(next_time);
  }
  *next_time = v7;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1124: range 0000000016C1FF66-0000000016C20239
void __cdecl PlayerActivityComp::onQuestChangeCondState(
        PlayerActivityComp *const this,
        const ChangeCondStateEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  BaseActivity *p_is_active; // rdi
  bool is_active; // cl
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 activity_ptr:1126";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::onQuestChangeCondState;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v2 + 32), (__int64)this, event->activity_id);
  if ( !std::operator==<BaseActivity>((const std::shared_ptr<BaseActivity> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( !BaseActivity::isOpening(v5, 0) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.cpp",
        "onQuestChangeCondState",
        1133);
      v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v10, (const char (*)[13])"activity_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->activity_id);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])off_25F07DC0);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      p_is_active = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(char *)(((unsigned __int64)&event->is_active >> 3) + 0x7FFF8000) < 0 )
      {
        p_is_active = (BaseActivity *)&event->is_active;
        __asan_report_load1(&event->is_active);
      }
      is_active = event->is_active;
      if ( *(_BYTE *)(((unsigned __int64)&event->cond_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cond_id >> 3) + 0x7FFF8000) )
      {
        p_is_active = (BaseActivity *)&event->cond_id;
        __asan_report_load4();
      }
      BaseActivity::setCondDefaultState(p_is_active, event->cond_id, is_active);
    }
  }
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v2 + 32));
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1141: range 0000000016C2023A-0000000016C20E92
void __cdecl PlayerActivityComp::onCompleteTalkEvent(PlayerActivityComp *const this, const CompleteTalkEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v9; // rax
  std::shared_ptr<SalesmanActivity> *v10; // r8
  std::shared_ptr<SalesmanMpActivity> *v11; // r8
  const std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  SalesmanActivity *v21; // rcx
  const std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> > *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rcx
  SalesmanMpActivity *v31; // rcx
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+10h] [rbp-1B0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+18h] [rbp-1A8h] BYREF
  const std::unordered_set<unsigned int> *related_activity_id_set; // [rsp+20h] [rbp-1A0h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+28h] [rbp-198h]
  std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *__for_range_0; // [rsp+30h] [rbp-190h]
  std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> *__for_range_1; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> > >::type *activity_id_1; // [rsp+40h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> > >::type *salesman_mp_activity_wtr; // [rsp+48h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > >::type *activity_id_0; // [rsp+50h] [rbp-170h]
  std::tuple_element<1,std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > >::type *salesman_activity_wtr; // [rsp+58h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+60h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+68h] [rbp-158h]
  std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> > __in; // [rsp+70h] [rbp-150h] BYREF
  common::milog::MiLogStream v45; // [rsp+90h] [rbp-130h] BYREF
  char v46[272]; // [rsp+B0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 26 salesman_activity_ptr:1156 64 16 29 salesman_mp_activity_ptr:1182 96 24 38 related_sa"
                        "lesman_activity_wtr_vec:1148 160 24 41 related_salesman_mp_activity_wtr_vec:1149";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::onCompleteTalkEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  related_activity_id_set = NewActivityExcelConfigMgr::getTalkIdRelatedActivityIds(
                              p_new_activity_config_mgr,
                              event->talk_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( !std::unordered_set<unsigned int>::empty(related_activity_id_set) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.cpp",
      "onCompleteTalkEvent",
      1147);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v45, (const char (*)[18])"activity talk_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->talk_id);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v45);
    std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::vector((std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *const)(v2 + 96));
    std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>>::vector((std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> *const)(v2 + 160));
    __for_range = &this->activity_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
              &__for_begin,
              &__for_end) )
    {
      v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
      std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::pair(
        (std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *const)&__in,
        v9);
      activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>((std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *)&__in);
      activity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>((std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *)&__in);
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             related_activity_id_set,
             activity_id) )
      {
        std::dynamic_pointer_cast<SalesmanActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v2 + 32));
        std::dynamic_pointer_cast<SalesmanMpActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v2 + 64));
        if ( std::operator!=<SalesmanActivity>(0LL, (const std::shared_ptr<SalesmanActivity> *)(v2 + 32)) )
        {
          std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::emplace_back<unsigned int const&,std::shared_ptr<SalesmanActivity> &>(
            (std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *const)(v2 + 96),
            activity_id,
            (std::shared_ptr<SalesmanActivity> *)(v2 + 32),
            activity_id,
            v10);
        }
        else if ( std::operator!=<SalesmanMpActivity>(0LL, (const std::shared_ptr<SalesmanMpActivity> *)(v2 + 64)) )
        {
          std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>>::emplace_back<unsigned int const&,std::shared_ptr<SalesmanMpActivity> &>(
            (std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> *const)(v2 + 160),
            activity_id,
            (std::shared_ptr<SalesmanMpActivity> *)(v2 + 64),
            activity_id,
            v11);
        }
        std::shared_ptr<SalesmanMpActivity>::~shared_ptr((std::shared_ptr<SalesmanMpActivity> *const)(v2 + 64));
        std::shared_ptr<SalesmanActivity>::~shared_ptr((std::shared_ptr<SalesmanActivity> *const)(v2 + 32));
      }
      std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::~pair((std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *const)&__in);
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = (std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *)(v2 + 96);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::begin((std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *const)(v2 + 96))._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>> *,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>>(
              (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> > *)&__for_end) )
    {
      v12 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>> *,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> > *const)&__for_begin);
      std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>::pair(
        (std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > *const)&__in,
        v12);
      activity_id_0 = std::get<0ul,unsigned int,std::weak_ptr<SalesmanActivity>>((std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > *)&__in);
      salesman_activity_wtr = std::get<1ul,unsigned int,std::weak_ptr<SalesmanActivity>>((std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > *)&__in);
      std::weak_ptr<SalesmanActivity>::lock((const std::weak_ptr<SalesmanActivity> *const)(v2 + 64));
      if ( std::operator==<SalesmanActivity>(0LL, (const std::shared_ptr<SalesmanActivity> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/player_activity_comp.cpp",
          "onCompleteTalkEvent",
          1173);
        v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v45,
                (const char (*)[44])"salesman_activity_ptr is null, activity_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, activity_id_0);
        v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v15, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v45);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/player_activity_comp.cpp",
          "onCompleteTalkEvent",
          1176);
        v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v45, (const char (*)[13])"activity_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, activity_id_0);
        v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" talk_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &event->talk_id);
        v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v20, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v45);
        v21 = std::__shared_ptr_access<SalesmanActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalesmanActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        SalesmanActivity::recordSalesmanTalkOnTalkFinish(v21, event->talk_id);
      }
      std::shared_ptr<SalesmanActivity>::~shared_ptr((std::shared_ptr<SalesmanActivity> *const)(v2 + 64));
      std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>::~pair((std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > *const)&__in);
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>> *,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> > *const)&__for_begin);
    }
    __for_range_1 = (std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> *)(v2 + 160);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>>::begin((std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> *const)(v2 + 160))._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>> *,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>>>(
              (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> > *)&__for_end) )
    {
      v22 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>> *,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> > *const)&__for_begin);
      std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>::pair(&__in, v22);
      activity_id_1 = std::get<0ul,unsigned int,std::weak_ptr<SalesmanMpActivity>>(&__in);
      salesman_mp_activity_wtr = std::get<1ul,unsigned int,std::weak_ptr<SalesmanMpActivity>>(&__in);
      std::weak_ptr<SalesmanMpActivity>::lock((const std::weak_ptr<SalesmanMpActivity> *const)(v2 + 64));
      if ( std::operator==<SalesmanMpActivity>(0LL, (const std::shared_ptr<SalesmanMpActivity> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/player_activity_comp.cpp",
          "onCompleteTalkEvent",
          1185);
        v23 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v45,
                (const char (*)[47])"salesman_mp_activity_ptr is null, activity_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, activity_id_1);
        v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v25, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v45);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/player_activity_comp.cpp",
          "onCompleteTalkEvent",
          1188);
        v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v45, (const char (*)[13])"activity_id:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, activity_id_1);
        v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v27, (const char (*)[10])" talk_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &event->talk_id);
        v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v30, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v45);
        v31 = std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        SalesmanMpActivity::recordSalesmanTalkOnTalkFinish(v31, event->talk_id);
      }
      std::shared_ptr<SalesmanMpActivity>::~shared_ptr((std::shared_ptr<SalesmanMpActivity> *const)(v2 + 64));
      std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>::~pair(&__in);
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>> *,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> > *const)&__for_begin);
    }
    std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity>>>::~vector((std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanMpActivity> >> *const)(v2 + 160));
    std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::~vector((std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *const)(v2 + 96));
  }
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1195: range 0000000016C20E94-0000000016C2172B
void __cdecl PlayerActivityComp::onCreateNpcEvent(PlayerActivityComp *const this, const CreateNpcEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rdi
  uint32_t config_id; // edx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v12; // rax
  std::shared_ptr<SalesmanActivity> *v13; // r8
  const std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  SalesmanActivity *p_config_id; // rdi
  uint32_t v26; // edx
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  const std::unordered_set<unsigned int> *related_activity_id_set; // [rsp+28h] [rbp-128h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-120h]
  std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *__for_range_0; // [rsp+38h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > >::type *activity_id_0; // [rsp+40h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > >::type *salesman_activity_wtr; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+58h] [rbp-F8h]
  std::pair<unsigned int,std::weak_ptr<SalesmanActivity> > __in; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v38; // [rsp+80h] [rbp-D0h] BYREF
  char v39[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 26 salesman_activity_ptr:1217 64 24 38 related_salesman_activity_wtr_vec:1202";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::onCreateNpcEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) )
  {
    p_new_activity_config_mgr = (const NewActivityExcelConfigMgr *)&event->config_id;
    __asan_report_load4();
  }
  config_id = event->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_new_activity_config_mgr = (const NewActivityExcelConfigMgr *)&event->group_id;
    __asan_report_load4();
  }
  related_activity_id_set = NewActivityExcelConfigMgr::getGroupConfigRelatedActivityIds(
                              p_new_activity_config_mgr,
                              event->group_id,
                              config_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( !std::unordered_set<unsigned int>::empty(related_activity_id_set) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.cpp",
      "onCreateNpcEvent",
      1201);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v38, (const char (*)[19])"activity group_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->group_id);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" config_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->config_id);
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::vector((std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *const)(v2 + 64));
    __for_range = &this->activity_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
              &__for_begin,
              &__for_end) )
    {
      v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
      std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::pair(
        (std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *const)&__in,
        v12);
      activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>((std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *)&__in);
      activity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>((std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *)&__in);
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             related_activity_id_set,
             activity_id) )
      {
        std::dynamic_pointer_cast<SalesmanActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v2 + 32));
        if ( std::operator!=<SalesmanActivity>(0LL, (const std::shared_ptr<SalesmanActivity> *)(v2 + 32)) )
          std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::emplace_back<unsigned int const&,std::shared_ptr<SalesmanActivity> &>(
            (std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *const)(v2 + 64),
            activity_id,
            (std::shared_ptr<SalesmanActivity> *)(v2 + 32),
            activity_id,
            v13);
        std::shared_ptr<SalesmanActivity>::~shared_ptr((std::shared_ptr<SalesmanActivity> *const)(v2 + 32));
      }
      std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::~pair((std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *const)&__in);
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = (std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *)(v2 + 64);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::begin((std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *const)(v2 + 64))._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>> *,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>>(
              (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> > *)&__for_end) )
    {
      v14 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>> *,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> > *const)&__for_begin);
      std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>::pair(&__in, v14);
      activity_id_0 = std::get<0ul,unsigned int,std::weak_ptr<SalesmanActivity>>(&__in);
      salesman_activity_wtr = std::get<1ul,unsigned int,std::weak_ptr<SalesmanActivity>>(&__in);
      std::weak_ptr<SalesmanActivity>::lock((const std::weak_ptr<SalesmanActivity> *const)(v2 + 32));
      if ( std::operator==<SalesmanActivity>(0LL, (const std::shared_ptr<SalesmanActivity> *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/player_activity_comp.cpp",
          "onCreateNpcEvent",
          1220);
        v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v38,
                (const char (*)[44])"salesman_activity_ptr is null, activity_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, activity_id_0);
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v17, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v38);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/player_activity_comp.cpp",
          "onCreateNpcEvent",
          1223);
        v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v38, (const char (*)[13])"activity_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, activity_id_0);
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" group_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &event->group_id);
        v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" config_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &event->config_id);
        v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v24, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v38);
        p_config_id = std::__shared_ptr_access<SalesmanActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalesmanActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) )
        {
          p_config_id = (SalesmanActivity *)&event->config_id;
          __asan_report_load4();
        }
        v26 = event->config_id;
        if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_config_id = (SalesmanActivity *)&event->group_id;
          __asan_report_load4();
        }
        SalesmanActivity::recordSalesmanNpcCreation(p_config_id, event->group_id, v26);
      }
      std::shared_ptr<SalesmanActivity>::~shared_ptr((std::shared_ptr<SalesmanActivity> *const)(v2 + 32));
      std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>::~pair(&__in);
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>> *,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >*,std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> > *const)&__for_begin);
    }
    std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity>>>::~vector((std::vector<std::pair<unsigned int,std::weak_ptr<SalesmanActivity> >> *const)(v2 + 64));
  }
  if ( v39 == (char *)v2 )
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

// Line 1230: range 0000000016C2172C-0000000016C2174A
void __cdecl PlayerActivityComp::onPlayerLevelupEvent(PlayerActivityComp *const this, const PlayerLevelupEvent *event)
{
  PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1237: range 0000000016C2174C-0000000016C21818
void __cdecl PlayerActivityComp::onFinishQuestEvent(PlayerActivityComp *const this, const FinishQuestEvent *event)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  bool v3; // bl
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v3 = !NewActivityExcelConfigMgr::isScheduleCondQuestId(p_new_activity_config_mgr, event->quest_id);
  std::shared_ptr<Config>::~shared_ptr(v4);
  if ( !v3 )
    PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1250: range 0000000016C2181A-0000000016C21838
void __cdecl PlayerActivityComp::onOpenMechanicusEvent(
        PlayerActivityComp *const this,
        const OpenMechanicusEvent *event)
{
  PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1257: range 0000000016C2183A-0000000016C21996
void __cdecl PlayerActivityComp::onChallengeFinishEvent(
        PlayerActivityComp *const this,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ArenaChallengeActivity *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 activity_ptr:1258";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::onChallengeFinishEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<ArenaChallengeActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator!=<ArenaChallengeActivity>(0LL, (const std::shared_ptr<ArenaChallengeActivity> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ArenaChallengeActivity::onChallengeFinishEvent(v5, event);
  }
  std::shared_ptr<ArenaChallengeActivity>::~shared_ptr((std::shared_ptr<ArenaChallengeActivity> *const)(v2 + 32));
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

// Line 1266: range 0000000016C21998-0000000016C21A64
void __cdecl PlayerActivityComp::onObtainItemEvent(PlayerActivityComp *const this, const ObtainItemEvent *event)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  bool v3; // bl
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v3 = !NewActivityExcelConfigMgr::isActivityCondItemId(p_new_activity_config_mgr, event->item_id);
  std::shared_ptr<Config>::~shared_ptr(v4);
  if ( !v3 )
    PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1276: range 0000000016C21A66-0000000016C21A84
void __cdecl PlayerActivityComp::onOpenStateChange(PlayerActivityComp *const this, const OpenStateChangeEvent *event)
{
  PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1283: range 0000000016C21A86-0000000016C21AA4
void __cdecl PlayerActivityComp::onRegionSearchFinishEvent(
        PlayerActivityComp *const this,
        const RegionSearchFinishSearchEvent *event)
{
  PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1289: range 0000000016C21AA6-0000000016C21AC4
void __cdecl PlayerActivityComp::onGroupBundleFinish(
        PlayerActivityComp *const this,
        const GroupBundleFinishEvent *event)
{
  PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1295: range 0000000016C21AC6-0000000016C21B92
void __cdecl PlayerActivityComp::onOfferingLevelupEvent(
        PlayerActivityComp *const this,
        const OfferingLevelupEvent *event)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  bool v3; // bl
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v3 = !NewActivityExcelConfigMgr::isActivityCondOfferingId(p_new_activity_config_mgr, event->offering_id);
  std::shared_ptr<Config>::~shared_ptr(v4);
  if ( !v3 )
    PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1305: range 0000000016C21B94-0000000016C21E90
void __cdecl PlayerActivityComp::logGetActivityReward(
        PlayerActivityComp *const this,
        uint32_t activity_id,
        uint32_t schedule_id,
        uint32_t reward_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGetActivityReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGetActivityReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGetActivityReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *player; // r14
  std::string v12; // [rsp+0h] [rbp-F0h]
  google::protobuf::uint32 reward_ida; // [rsp+Ch] [rbp-E4h]
  google::protobuf::uint32 schedule_ida; // [rsp+10h] [rbp-E0h]
  google::protobuf::uint32 activity_ida; // [rsp+14h] [rbp-DCh]
  PlayerActivityComp *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = activity_id;
  *(_DWORD *)v12._anon_0._M_local_buf = schedule_id;
  HIDWORD(v12._M_string_length) = reward_id;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 holder:1306 64 16 12 log_ptr:1309";
  *(_QWORD *)(v4 + 16) = PlayerActivityComp::logGetActivityReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xB1Du, v12);
  std::string::~string(&v19);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGetActivityReward>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGetActivityReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGetActivityReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyGetActivityReward::set_schedule_id(v8, schedule_ida);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGetActivityReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGetActivityReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyGetActivityReward::set_activity_id(v9, activity_ida);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGetActivityReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGetActivityReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyGetActivityReward::set_reward_id(v10, reward_ida);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGetActivityReward,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyGetActivityReward> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyGetActivityReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGetActivityReward> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1319: range 0000000016C21E92-0000000016C227B8
float __fastcall PlayerActivityComp::getActivitySaleWeaponUpgradeRatio(
        PlayerActivityComp *const this,
        uint32_t weapon_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  BaseActivity *v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isActivitySaleClosed; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  float result; // xmm0_4
  float v19; // [rsp+0h] [rbp-1C0h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1A8h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+20h] [rbp-1A0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-190h]
  const std::map<unsigned int,std::any> *sale_config_map; // [rsp+38h] [rbp-188h]
  std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-180h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v26; // [rsp+50h] [rbp-170h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+58h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+60h] [rbp-160h]
  std::set<unsigned int> *sale_set_ptr; // [rsp+68h] [rbp-158h]
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-150h] BYREF
  common::milog::MiLogStream v31; // [rsp+90h] [rbp-130h] BYREF
  char v32[272]; // [rsp+B0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 17 result_ratio:1340 48 4 12 sale_id:1341 64 4 14 weapon_id:1318 80 8 9 iter:1348 112 16 "
                        "26 weapon_upgrade_config:1356 144 48 26 activated_sale_id_set:1320";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::getActivitySaleWeaponUpgradeRatio;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 64) = weapon_id;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 144));
  __for_range = &this->activity_map_;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_);
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false> *)(v2 + 80),
            &__for_end) )
  {
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v2 + 80));
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v26);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v26);
    v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
    if ( BaseActivity::isOpening(v5, 0) )
    {
      v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      sale_set_ptr = BaseActivity::getActivatedActivitySaleSetByType(v6, 1u);
      if ( sale_set_ptr )
      {
        M_node = std::set<unsigned int>::end(sale_set_ptr)._M_node;
        v8._M_node = std::set<unsigned int>::begin(sale_set_ptr)._M_node;
        std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
          (std::set<unsigned int> *const)(v2 + 144),
          v8,
          (std::_Rb_tree_const_iterator<unsigned int>)M_node);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false,false> *const)(v2 + 80));
  }
  common::milog::MiLogStream::create(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/player_activity_comp.cpp",
    "getActivitySaleWeaponUpgradeRatio",
    1333);
  v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v31,
         (const char (*)[43])"[DRAGON_SPINE] activated_sale_id_set size:");
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v2 + 144));
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)&__for_end);
  common::milog::MiLogStream::~MiLogStream(&v31);
  if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 144)) )
  {
    v19 = 0.0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 112));
    sale_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->design_config.txt_config_mgr.new_activity_config_mgr.activity_sale_config_map;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
    *(_DWORD *)(v2 + 32) = 0;
    __for_range_0 = (std::set<unsigned int> *)(v2 + 144);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 144))._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v10;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 112));
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      isActivitySaleClosed = FeatureSwitchMgr::isActivitySaleClosed(&v11->feature_switch_mgr, *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
      if ( isActivitySaleClosed )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/player_activity_comp.cpp",
          "getActivitySaleWeaponUpgradeRatio",
          1345);
        v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v30,
                (const char (*)[48])"[FEATURE_SWITCH] activity sale closed, sale_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      else
      {
        *(std::map<unsigned int,std::any>::const_iterator *)(v2 + 80) = std::map<unsigned int,std::any>::find(
                                                                          sale_config_map,
                                                                          (const std::map<unsigned int,std::any>::key_type *)(v2 + 48));
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseActivity> >,false>::__node_type *)std::map<unsigned int,std::any>::end(sale_config_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any> >::_Self *)(v2 + 80),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any> >::_Self *)&__for_end) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/player_activity_comp.cpp",
            "getActivitySaleWeaponUpgradeRatio",
            1351);
          v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v31,
                  (const char (*)[32])"sale config not find, sale_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
        else
        {
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any> > *const)(v2 + 80));
          tryAnyCast<ActivityWeaponUpgradeSaleConfig>((const std::any *)(v2 + 112));
          if ( *(_DWORD *)(v2 + 120) == *(_DWORD *)(v2 + 64) && *(float *)(v2 + 124) > *(float *)(v2 + 32) )
            *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 124);
          ActivityWeaponUpgradeSaleConfig::~ActivityWeaponUpgradeSaleConfig((ActivityWeaponUpgradeSaleConfig *const)(v2 + 112));
        }
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.cpp",
      "getActivitySaleWeaponUpgradeRatio",
      1374);
    v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v31,
            (const char (*)[26])"[DRAGON_SPINE] weapon_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
    v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v16, (const char (*)[19])" upgrade ratio is:");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v17, (const float *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v31);
    if ( *(float *)(v2 + 32) > 1.0 )
      v19 = *(float *)(v2 + 32);
    else
      v19 = 0.0;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 144));
  result = v19;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1386: range 0000000016C227BA-0000000016C22AA2
void __cdecl PlayerActivityComp::updateActivitySocialData(PlayerActivityComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+28h] [rbp-C8h]
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *__in; // [rsp+30h] [rbp-C0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+38h] [rbp-B8h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+40h] [rbp-B0h]
  proto::ActivitySocialData *social_data; // [rsp+48h] [rbp-A8h]
  char v16[160]; // [rsp+50h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 11 notify:1387";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::updateActivitySocialData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::ServerUpdateActivitySocialDataNotify::ServerUpdateActivitySocialDataNotify((proto::ServerUpdateActivitySocialDataNotify *const)(v2 + 48));
  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    activity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(__in);
    if ( std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v5, 0) )
      {
        social_data = proto::ServerUpdateActivitySocialDataNotify::add_social_data_list((proto::ServerUpdateActivitySocialDataNotify *const)(v2 + 48));
        v7 = (unsigned __int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        v8 = *(_QWORD *)v7 + 208LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, proto::ActivitySocialData *))v8)(v7, social_data);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  sendProtoToSocialService<proto::ServerUpdateActivitySocialDataNotify>(
    this->player_,
    (proto::ServerUpdateActivitySocialDataNotify *)(v2 + 48));
  proto::ServerUpdateActivitySocialDataNotify::~ServerUpdateActivitySocialDataNotify((proto::ServerUpdateActivitySocialDataNotify *const)(v2 + 48));
  if ( v16 == (char *)v2 )
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

// Line 1400: range 0000000016C22AA4-0000000016C23191
int32_t __fastcall PlayerActivityComp::checkEnterActivityDungeon(PlayerActivityComp *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  int32_t result; // eax
  PlayerActivityComp *ActivityComp; // rax
  PlayerActivityComp *v11; // rax
  PlayerActivityComp *v12; // rax
  PlayerActivityComp *v13; // rax
  PlayerActivityComp *v14; // rax
  PlayerActivityComp *v15; // rax
  PlayerActivityComp *v16; // rax
  PlayerActivityComp *v17; // rax
  PlayerActivityComp *v18; // rax
  PlayerActivityComp *v19; // rax
  PlayerActivityComp *v20; // rax
  PlayerActivityComp *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v25; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-80h] BYREF
  char v27[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 dungeon_id:1399";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::checkEnterActivityDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &v5->design_config.txt_config_mgr.dungeon_config_mgr,
                         *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    switch ( dungeon_config_ptr->type )
    {
      case DUNGEON_FLEUR_FAIR:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ActivityComp = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<FleurFairActivity>(
                   ActivityComp,
                   *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_CHANNELLER_SLAB_LOOP:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v11 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::checkEnterChannellerSlabLoopDungeon(v11, *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_CHANNELLER_SLAB_ONE_OFF:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::checkEnterChannellerSlabOneOffDungeon(v12, *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_BLITZ_RUSH:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<BlitzRushActivity>(v13, *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_CHESS:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v14 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<ChessActivity>(v14, *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_HACHI:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<HachiActivity>(v15, *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_MINI_ELDRITCH:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v16 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<LanternRiteActivity>(v16, *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_IRODORI_CHESS:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<IrodoriActivity>(v17, *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_SUMMER_V2:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v18 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<SummerTimeV2Activity>(v18, *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_WIND_FIELD:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v19 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<WindFieldActivity>(v19, *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_EFFIGY_CHALLENGE_V2:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v20 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<EffigyChallengeV2Activity>(
                   v20,
                   *(_DWORD *)(v2 + 32));
        break;
      case DUNGEON_TEAM_CHAIN:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v21 = Player::getActivityComp(this->player_);
        result = PlayerActivityComp::internalCheckEnterActivityDungeon<TeamChainActivity>(v21, *(_DWORD *)(v2 + 32));
        break;
      default:
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/player_activity_comp.cpp",
          "checkEnterActivityDungeon",
          1460);
        v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v26,
                (const char (*)[38])"invalid activity dungeon, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = -1;
        break;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/player_activity_comp.cpp",
      "checkEnterActivityDungeon",
      1404);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v26,
           (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = -1;
  }
  if ( v27 == (char *)v2 )
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

// Line 1468: range 0000000016C23192-0000000016C234E8
__int64 __fastcall PlayerActivityComp::checkEnterChannellerSlabOneOffDungeon(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  ChannellerSlabActivity *v7; // rax
  std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:1467 64 16 17 activity_ptr:1469";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::checkEnterChannellerSlabOneOffDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<ChannellerSlabActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<ChannellerSlabActivity>(0LL, (const std::shared_ptr<ChannellerSlabActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.cpp",
      "checkEnterChannellerSlabOneOffDungeon",
      1472);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v16,
           (const char (*)[47])"channeller slab activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = ChannellerSlabActivity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.cpp",
        "checkEnterChannellerSlabOneOffDungeon",
        1479);
      v8 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v9 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v16, v8);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v9,
              (const char (*)[33])" checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<ChannellerSlabActivity>::~shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)(v2 + 64));
  result = v6;
  if ( v17 == (char *)v2 )
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

// Line 1487: range 0000000016C234EA-0000000016C23824
__int64 __fastcall PlayerActivityComp::checkEnterChannellerSlabLoopDungeon(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  ChannellerSlabActivity *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:1486 64 16 17 activity_ptr:1488";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::checkEnterChannellerSlabLoopDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<ChannellerSlabActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<ChannellerSlabActivity>(0LL, (const std::shared_ptr<ChannellerSlabActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.cpp",
      "checkEnterChannellerSlabLoopDungeon",
      1491);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v14,
           (const char (*)[47])"channeller slab activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = ChannellerSlabActivity::checkEnterLoopDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.cpp",
        "checkEnterChannellerSlabLoopDungeon",
        1498);
      v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v14,
             (const char (*)[52])"channeller slab checkEnterLoopDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<ChannellerSlabActivity>::~shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 1506: range 0000000016C23826-0000000016C238F4
void __cdecl PlayerActivityComp::onGameHourChange(PlayerActivityComp *const this, uint32_t hour)
{
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  BaseActivity *v3; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v7);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v7);
    v2 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
    if ( BaseActivity::isOpening(v2, 0) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      BaseActivity::onGameHourChange(v3, hour);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
};

// Line 1517: range 0000000016C238F6-0000000016C23AEF
uint32_t __cdecl PlayerActivityComp::getHideAndSeekHiderCount(PlayerActivityComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  uint32_t HiderCount; // r14d
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 activity_ptr:1518";
  *(_QWORD *)(v1 + 16) = PlayerActivityComp::getHideAndSeekHiderCount;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v1 + 32));
  if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.cpp",
      "getHideAndSeekHiderCount",
      1521);
    v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v9,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    HiderCount = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    HiderCount = HideAndSeekActivity::getHiderCount(v6);
  }
  std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v1 + 32));
  result = HiderCount;
  if ( v10 == (char *)v1 )
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

// Line 1528: range 0000000016C23AF0-0000000016C23DF5
std::vector<unsigned int> *__cdecl PlayerActivityComp::getHideAndSeekChosenMap(
        std::vector<unsigned int> *retstr,
        PlayerActivityComp *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HideAndSeekActivity *v5; // rsi
  common::milog::MiLogStream *v6; // r14
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 activity_ptr:1529";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::getHideAndSeekChosenMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator!=<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      v5 = (HideAndSeekActivity *)24;
      __asan_report_store_n(retstr, 24LL);
    }
    HideAndSeekActivity::getChosenHideAndSeekMap(retstr, v5);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.cpp",
      "getHideAndSeekChosenMap",
      1534);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v9,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
  }
  std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1539: range 0000000016C23DF6-0000000016C242E6
std::pair<int,std::vector<unsigned int> > *__cdecl PlayerActivityComp::checkMpModeAvailability(
        std::pair<int,std::vector<unsigned int> > *retstr,
        const PlayerActivityComp *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::Retcode __x; // [rsp+1Ch] [rbp-144h] BYREF
  std::vector<unsigned int> __y; // [rsp+20h] [rbp-140h] BYREF
  std::pair<proto::Retcode,std::vector<unsigned int> > __p; // [rsp+40h] [rbp-120h] BYREF
  std::pair<proto::Retcode,std::vector<unsigned int> > v12; // [rsp+60h] [rbp-100h] BYREF
  std::pair<proto::Retcode,std::vector<unsigned int> > v13; // [rsp+80h] [rbp-E0h] BYREF
  std::pair<proto::Retcode,std::vector<unsigned int> > v14; // [rsp+A0h] [rbp-C0h] BYREF
  char v15[160]; // [rsp+C0h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 26 summer_time_acitivity:1540 64 16 25 blitz_rush_acitivity:1548 96 16 24 music_game_activity:1556";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::checkMpModeAvailability;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  PlayerActivityComp::findOpenningActivity<SummerTimeActivity>((const PlayerActivityComp *const)(v2 + 32));
  if ( std::operator!=<SummerTimeActivity>(0LL, (const std::shared_ptr<SummerTimeActivity> *)(v2 + 32))
    && (v5 = std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
        SummerTimeActivity::isSprintBoatOnGoing(v5)) )
  {
    memset(&__y, 0, sizeof(__y));
    std::vector<unsigned int>::vector(&__y);
    __x = RET_MP_SUMMER_TIME_SPRINT_BOAT_ONGOING;
    std::make_pair<proto::Retcode,std::vector<unsigned int>>(&__p, &__x, &__y);
    std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &__p);
    std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&__p);
    std::vector<unsigned int>::~vector(&__y);
  }
  else
  {
    PlayerActivityComp::findOpenningActivity<BlitzRushActivity>((const PlayerActivityComp *const)(v2 + 64));
    if ( std::operator!=<BlitzRushActivity>(0LL, (const std::shared_ptr<BlitzRushActivity> *)(v2 + 64))
      && (v6 = std::__shared_ptr_access<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          BlitzRushActivity::isParkourChallengeOnGoing(v6)) )
    {
      memset(&__y, 0, sizeof(__y));
      std::vector<unsigned int>::vector(&__y);
      __x = RET_MP_BLITZ_RUSH_PARKOUR_CHALLENGE_ONGOING;
      std::make_pair<proto::Retcode,std::vector<unsigned int>>(&v12, &__x, &__y);
      std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &v12);
      std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&v12);
      std::vector<unsigned int>::~vector(&__y);
    }
    else
    {
      PlayerActivityComp::findOpenningActivity<MusicGameActivity>((const PlayerActivityComp *const)(v2 + 96));
      if ( std::operator!=<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v2 + 96))
        && (v7 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
            MusicGameActivity::isInMusicGame(v7)) )
      {
        memset(&__y, 0, sizeof(__y));
        std::vector<unsigned int>::vector(&__y);
        __x = RET_MP_MUSIC_GAME_ONGOING;
        std::make_pair<proto::Retcode,std::vector<unsigned int>>(&v13, &__x, &__y);
        std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &v13);
        std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&v13);
        std::vector<unsigned int>::~vector(&__y);
      }
      else
      {
        memset(&__y, 0, sizeof(__y));
        std::vector<unsigned int>::vector(&__y);
        __x = RET_SUCC;
        std::make_pair<proto::Retcode,std::vector<unsigned int>>(&v14, &__x, &__y);
        std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &v14);
        std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&v14);
        std::vector<unsigned int>::~vector(&__y);
      }
      std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v2 + 96));
    }
    std::shared_ptr<BlitzRushActivity>::~shared_ptr((std::shared_ptr<BlitzRushActivity> *const)(v2 + 64));
  }
  std::shared_ptr<SummerTimeActivity>::~shared_ptr((std::shared_ptr<SummerTimeActivity> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
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
  return retstr;
};

// Line 1569: range 0000000016C242E8-0000000016C24306
void __cdecl PlayerActivityComp::onQuestGlobalVarUpdateEvent(
        PlayerActivityComp *const this,
        const QuestGlobalVarUpdateEvent *event)
{
  PlayerActivityComp::refreshActivityAndUpdateTimer(this);
};

// Line 1575: range 0000000016C24308-0000000016C24919
int32_t __cdecl PlayerActivityComp::checkAndClearActivity(PlayerActivityComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // r14
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t ScheduleId; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  BaseActivity *v16; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v17; // rdx
  int32_t result; // eax
  uint32_t now; // [rsp+10h] [rbp-130h]
  uint32_t schedule_end_time; // [rsp+14h] [rbp-12Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  const std::set<unsigned int> *clear_activity_id_set; // [rsp+28h] [rbp-118h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-110h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 16 activity_id:1599 64 16 22 base_activity_ptr:1581 96 24 32 need_remove_activity_id_vec:1577";
  *(_QWORD *)(v1 + 16) = PlayerActivityComp::checkAndClearActivity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  clear_activity_id_set = NewActivityExcelConfigMgr::getClearActivityBinIdSet(&v4->design_config.txt_config_mgr.new_activity_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
  now = common::tools::TimeUtils::getNow();
  __for_range = clear_activity_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(clear_activity_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(clear_activity_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = *v5;
    PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v1 + 64), (__int64)this, *(_DWORD *)(v1 + 48));
    if ( std::operator!=<BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 64), 0LL) )
    {
      v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( BaseActivity::isFinished(v6) )
      {
        v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( BaseActivity::isSettled(v7) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.new_activity_config_mgr;
          v10 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          ScheduleId = BaseActivity::getScheduleId(v10);
          schedule_end_time = NewActivityExcelConfigMgr::getScheduleEndTime(p_new_activity_config_mgr, ScheduleId, 0);
          std::shared_ptr<Config>::~shared_ptr(&v26);
          if ( now >= schedule_end_time )
          {
            if ( now - schedule_end_time > 0xED4E00 )
            {
              common::milog::MiLogStream::create(
                &v27,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/player_activity_comp.cpp",
                "checkAndClearActivity",
                1592);
              v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      &v27,
                      (const char (*)[13])"activity_id:");
              v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v13,
                      (const unsigned int *)(v1 + 48));
              v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v14,
                      (const char (*)[24])" need to clear, player_");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              operator<<(v15, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v27);
              v16 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              BaseActivity::clear(v16);
              std::vector<unsigned int>::push_back(
                (std::vector<unsigned int> *const)(v1 + 96),
                (const std::vector<unsigned int>::value_type *)(v1 + 48));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/player_activity_comp.cpp",
              "checkAndClearActivity",
              1587);
            v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v27,
                    (const char (*)[50])off_25F08B80);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
        }
      }
    }
    std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v1 + 64));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v1 + 96);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 96))._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v17 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = *v17;
    std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::erase(
      &this->activity_map_,
      (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::key_type *)(v1 + 48));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
  result = 0;
  if ( v28 == (char *)v1 )
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
  return result;
};

// Line 1607: range 0000000016C2491A-0000000016C249E4
void __cdecl PlayerActivityComp::onSendOfflineOpRsp(
        PlayerActivityComp *const this,
        const proto::SendOfflineOpRsp *server_rsp)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  if ( proto::SendOfflineOpRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/player_activity_comp.cpp",
      "onSendOfflineOpRsp",
      1610);
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &server_rsp->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v2, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
};

// Line 1615: range 0000000016C249E6-0000000016C24D4B
void __cdecl PlayerActivityComp::onOfflineOpExec(PlayerActivityComp *const this, const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerActivityComp *ActivityComp; // r14
  int ActivityIdByScheduleId; // eax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  BaseActivity *v12; // r14
  const google::protobuf::Map<unsigned int,unsigned int> *v13; // r15
  uint32_t v14; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  const proto::OfflineOpActivityGiveGift *give_gift_op; // [rsp+30h] [rbp-C0h]
  const NewActivityExcelConfigMgr *conf_mgr; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 schedule_id:1617 64 16 17 activity_ptr:1619";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::onOfflineOpExec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  give_gift_op = proto::OfflineOpBin::activity_give_gift_op(bin);
  *(_DWORD *)(v2 + 48) = proto::OfflineOpActivityGiveGift::schedule_id(give_gift_op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.new_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ActivityComp = Player::getActivityComp(this->player_);
  ActivityIdByScheduleId = NewActivityExcelConfigMgr::getActivityIdByScheduleId(conf_mgr, *(_DWORD *)(v2 + 48));
  PlayerActivityComp::findBaseActivity(
    (PlayerActivityComp *const)(v2 + 64),
    (__int64)ActivityComp,
    ActivityIdByScheduleId);
  if ( std::operator==<BaseActivity>((const std::shared_ptr<BaseActivity> *)(v2 + 64), 0LL)
    || (v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
        !BaseActivity::isOpening(v7, 0)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.cpp",
      "onOfflineOpExec",
      1623);
    v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v18,
           (const char (*)[49])"[ACTIVITY] activity is not opening, schedule_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    v12 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v13 = proto::OfflineOpActivityGiveGift::gift_num_map(give_gift_op);
    v14 = proto::OfflineOpActivityGiveGift::uid(give_gift_op);
    BaseActivity::updateRecvFriendGiftOp(v12, v14, v13);
  }
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v2 + 64));
  if ( v19 == (char *)v2 )
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
};

// Line 1630: range 0000000016C24D4C-0000000016C24FC1
__int64 __fastcall PlayerActivityComp::getStartWorldLevelLimitByActivityId(
        PlayerActivityComp *const this,
        uint32_t activity_id,
        unsigned __int64 world_level_limit)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t StartWorldLevelLimit; // ecx
  unsigned int v10; // r15d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 activity_id:1629 64 16 22 base_activity_ptr:1631";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::getStartWorldLevelLimitByActivityId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = activity_id;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator!=<BaseActivity>(0LL, (const std::shared_ptr<BaseActivity> *)(v3 + 64))
    && (v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
        BaseActivity::getIsStarted(v6)) )
  {
    v8 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    StartWorldLevelLimit = BaseActivity::getStartWorldLevelLimit(v8);
    if ( *(_BYTE *)((world_level_limit >> 3) + 0x7FFF8000) != 0
      && (char)((world_level_limit & 7) + 3) >= *(_BYTE *)((world_level_limit >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(world_level_limit);
    }
    *(_DWORD *)world_level_limit = StartWorldLevelLimit;
    v10 = 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.cpp",
      "getStartWorldLevelLimitByActivityId",
      1637);
    v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v15, (const char (*)[10])"activity:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" not started.");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v10 = 0;
  }
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 64));
  result = v10;
  if ( v16 == (char *)v3 )
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

// Line 1642: range 0000000016C24FC2-0000000016C253FF
__int64 __fastcall PlayerActivityComp::tryRecordActivityPushTips(
        PlayerActivityComp *const this,
        uint32_t activity_push_tips_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  BaseActivity *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  const data::NewActivityPushTipsConfig *activity_push_tips_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 26 activity_push_tips_id:1641 64 16 22 base_activity_ptr:1649";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::tryRecordActivityPushTips;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = activity_push_tips_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  activity_push_tips_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityPushTipsConfig(
                                    &v5->design_config.txt_config_mgr.new_activity_config_mgr,
                                    *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( activity_push_tips_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&activity_push_tips_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)activity_push_tips_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_push_tips_config_ptr->activity_id >> 3)
                                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerActivityComp::findBaseActivity(
      (PlayerActivityComp *const)(v2 + 64),
      (__int64)this,
      activity_push_tips_config_ptr->activity_id);
    if ( std::operator==<BaseActivity>(0LL, (const std::shared_ptr<BaseActivity> *)(v2 + 64))
      || (v8 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          !BaseActivity::isOpening(v8, 0)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.cpp",
        "tryRecordActivityPushTips",
        1652);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v17, (const char (*)[13])"activity_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v10,
              &activity_push_tips_config_ptr->activity_id);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])off_25F08EE0);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( (unsigned int)BaseActivity::tryRecordActivityPushTips(v12, *(_DWORD *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/player_activity_comp.cpp",
          "tryRecordActivityPushTips",
          1657);
        v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v17, (const char (*)[13])"activity_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                &activity_push_tips_config_ptr->activity_id);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          v14,
          (const char (*)[34])" tryRecordActivityPushTips failed");
        common::milog::MiLogStream::~MiLogStream(&v17);
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/player_activity_comp.cpp",
      "tryRecordActivityPushTips",
      1646);
    v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v17,
           (const char (*)[62])"findNewActivityPushTipsConfig failed, activity_push_tips_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
  }
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

// Line 1665: range 0000000016C25400-0000000016C255AE
void __cdecl PlayerActivityComp::onEnterScene(PlayerActivityComp *const this, ScenePtr *p_scene_ptr, bool is_reenter)
{
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rbx
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<Scene> *, bool); // r13
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v11; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-38h]
  std::shared_ptr<Scene> v14; // [rsp+50h] [rbp-30h] BYREF

  if ( !std::operator==<Scene>(0LL, p_scene_ptr) )
  {
    __for_range = &this->activity_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin(&this->activity_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end(&this->activity_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
              &__for_begin,
              &__for_end) )
    {
      v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
      activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v11);
      activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v11);
      if ( !std::operator==<BaseActivity>(0LL, activity_ptr) )
      {
        v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
        if ( BaseActivity::isOpening(v3, 0) )
        {
          v4 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v5 = (unsigned __int64)(v4->_vptr_DescribalBase + 34);
          if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
            v5 = __asan_report_load8();
          v6 = *(void (__fastcall **)(std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<Scene> *, bool))v5;
          std::shared_ptr<Scene>::shared_ptr(&v14, p_scene_ptr);
          v6(v4, &v14, is_reenter);
          std::shared_ptr<Scene>::~shared_ptr(&v14);
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
    }
  }
};

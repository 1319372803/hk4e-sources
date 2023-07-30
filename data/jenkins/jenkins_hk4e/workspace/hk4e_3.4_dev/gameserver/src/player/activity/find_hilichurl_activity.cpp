// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/find_hilichurl_activity.cpp

// Line 23: range 00000000150549E2-0000000015054AAC
int32_t __cdecl FindHilichurlActivity::fromScheduleBin(
        FindHilichurlActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  bool is_content_closed; // dl
  uint32_t v3; // ecx
  const proto::FindHilichurlScheduleBin *schedule_bin; // [rsp+18h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::find_hilichurl_bin(bin);
  is_content_closed = proto::FindHilichurlScheduleBin::is_content_closed(schedule_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  v3 = proto::FindHilichurlScheduleBin::finished_day_index(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finished_day_index_);
  }
  this->finished_day_index_ = v3;
  return 0;
};

// Line 31: range 0000000015054AAE-0000000015054B7A
int32_t __cdecl FindHilichurlActivity::toScheduleBin(
        const FindHilichurlActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::FindHilichurlScheduleBin *schedule_bin; // [rsp+18h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_find_hilichurl_bin(bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::FindHilichurlScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FindHilichurlScheduleBin::set_finished_day_index(schedule_bin, this->finished_day_index_);
  return 0;
};

// Line 39: range 0000000015054B7C-00000000150557C7
int32_t __cdecl FindHilichurlActivity::toClient(FindHilichurlActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t v6; // r14d
  google::protobuf::uint32 *v7; // rdx
  ActivityMimiTomoExcelConfigMgr *p_activity_find_hilichurl_config_mgr; // rcx
  uint32_t v9; // ecx
  ActivityMimiTomoExcelConfigMgr *v10; // rcx
  uint32_t content_duration; // ecx
  uint32_t QuestComp; // ecx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::vector<int>::const_reference v14; // rdx
  int32_t result; // eax
  bool is_end_quest_accept; // [rsp+1Bh] [rbp-135h]
  unsigned int val; // [rsp+1Ch] [rbp-134h] BYREF
  uint32_t content_finish_time; // [rsp+20h] [rbp-130h]
  uint32_t level_start_time; // [rsp+24h] [rbp-12Ch]
  std::map<unsigned int,FindHilichurlLevelInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::map<unsigned int,FindHilichurlLevelInfo>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  proto::FindHilichurlDetailInfo *detail_info; // [rsp+38h] [rbp-118h]
  const std::map<unsigned int,FindHilichurlLevelInfo> *level_info_map_ptr; // [rsp+40h] [rbp-110h]
  const std::map<unsigned int,FindHilichurlLevelInfo> *__for_range; // [rsp+48h] [rbp-108h]
  const FindHilichurlActivityInfo *activity_info_ptr; // [rsp+50h] [rbp-100h]
  const data::NewActivityScheduleExcelConfig *activity_schedule_config_ptr; // [rsp+58h] [rbp-F8h]
  const std::vector<data::NewActivityScheduleCond> *__for_range_0; // [rsp+60h] [rbp-F0h]
  const data::NewActivityScheduleCond *schedule_cond; // [rsp+68h] [rbp-E8h]
  const std::pair<unsigned int const,FindHilichurlLevelInfo> *v29; // [rsp+70h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,FindHilichurlLevelInfo> >::type *day_index; // [rsp+78h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,FindHilichurlLevelInfo> >::type *level_info; // [rsp+80h] [rbp-D0h]
  proto::FindHilichurlDayContentInfo *day_content_info; // [rsp+88h] [rbp-C8h]
  std::shared_ptr<Config> v33; // [rsp+90h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+A0h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+C0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 day_index:46 64 16 19 parent_quest_ptr:74";
  *(_QWORD *)(v2 + 16) = FindHilichurlActivity::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/find_hilichurl_activity.cpp",
      "toClient",
      42);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v34,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v6 = -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_find_hilichurl_info(activity_info);
    *(_DWORD *)(v2 + 48) = BaseActivity::getDayIndexAfterStart((BaseActivity *const)this);
    proto::FindHilichurlDetailInfo::set_day_index(detail_info, *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    val = this->finished_day_index_ + 1;
    v7 = (google::protobuf::uint32 *)std::min<unsigned int>(&val, (const unsigned int *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FindHilichurlDetailInfo::set_player_day_index(detail_info, *v7);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    p_activity_find_hilichurl_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_find_hilichurl_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_info_map_ptr = ActivityMimiTomoExcelConfigMgr::findLevelInfoMapByActivityId(
                           p_activity_find_hilichurl_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( level_info_map_ptr )
    {
      __for_range = level_info_map_ptr;
      __for_begin._M_node = std::map<unsigned int,FindHilichurlLevelInfo>::begin(level_info_map_ptr)._M_node;
      __for_end._M_node = std::map<unsigned int,FindHilichurlLevelInfo>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v29 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo>>::operator*(&__for_begin);
        day_index = std::get<0ul,unsigned int const,FindHilichurlLevelInfo>(v29);
        level_info = (std::tuple_element<1,const std::pair<unsigned int const,FindHilichurlLevelInfo> >::type *)std::get<1ul,unsigned int const,FindHilichurlLevelInfo>(v29);
        day_content_info = proto::FindHilichurlDetailInfo::add_day_content_info_list(detail_info);
        if ( *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v9 = *day_index;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        level_start_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v9);
        proto::FindHilichurlDayContentInfo::set_start_time(day_content_info, level_start_time);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo>>::operator++(&__for_begin);
      }
      if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_content_closed_);
      proto::FindHilichurlDetailInfo::set_is_content_closed(detail_info, this->is_content_closed_);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v33);
      v10 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_find_hilichurl_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      activity_info_ptr = ActivityMimiTomoExcelConfigMgr::findActivityInfoByActivityId(v10, this->activity_id_);
      std::shared_ptr<Config>::~shared_ptr(&v33);
      if ( activity_info_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)activity_info_ptr >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)activity_info_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_info_ptr >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        content_duration = activity_info_ptr->content_duration;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        content_finish_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, content_duration);
        proto::FindHilichurlDetailInfo::set_content_close_time(detail_info, content_finish_time);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        QuestComp = (unsigned int)Player::getQuestComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&activity_info_ptr->end_quest_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)activity_info_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_info_ptr->end_quest_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v2 + 64), QuestComp);
        is_end_quest_accept = std::operator!=<ParentQuest>((const std::shared_ptr<ParentQuest> *)(v2 + 64), 0LL);
        proto::FindHilichurlDetailInfo::set_is_end_quest_accept(detail_info, is_end_quest_accept);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v33);
        p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.new_activity_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        activity_schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                                         p_new_activity_config_mgr,
                                         this->schedule_id_);
        std::shared_ptr<Config>::~shared_ptr(&v33);
        if ( activity_schedule_config_ptr )
        {
          __for_range_0 = &activity_schedule_config_ptr->cond;
          __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> >::_Base_ptr)std::vector<data::NewActivityScheduleCond>::begin(&activity_schedule_config_ptr->cond)._M_current;
          __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> >::_Base_ptr)std::vector<data::NewActivityScheduleCond>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>(
                    (const __gnu_cxx::__normal_iterator<const data::NewActivityScheduleCond*,std::vector<data::NewActivityScheduleCond> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<const data::NewActivityScheduleCond*,std::vector<data::NewActivityScheduleCond> > *)&__for_end) )
          {
            schedule_cond = __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::NewActivityScheduleCond*,std::vector<data::NewActivityScheduleCond> > *const)&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)&schedule_cond->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&schedule_cond->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( schedule_cond->type == NEW_ACTIVITY_SCHEDULE_COND_PLAYER_LEVEL_GREATER
              && std::vector<int>::size(&schedule_cond->param) )
            {
              v14 = std::vector<int>::operator[](&schedule_cond->param, 0LL);
              if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::FindHilichurlDetailInfo::set_min_open_player_level(detail_info, *v14 + 1);
            }
            __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>::operator++((__gnu_cxx::__normal_iterator<const data::NewActivityScheduleCond*,std::vector<data::NewActivityScheduleCond> > *const)&__for_begin);
          }
          v6 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/find_hilichurl_activity.cpp",
            "toClient",
            82);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          common::milog::MiLogStream::operator()(
            &v34,
            "[FIND_HILICHURL] new activity config nullptr for schedule_id=%u",
            this->schedule_id_);
          common::milog::MiLogStream::~MiLogStream(&v34);
          v6 = -1;
        }
        std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/find_hilichurl_activity.cpp",
          "toClient",
          67);
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::milog::MiLogStream::operator()(
          &v34,
          "[FIND_HILICHURL] activity_info_ptr nullptr for activity_id=%u",
          this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v6 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/find_hilichurl_activity.cpp",
        "toClient",
        52);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v34,
        "[FIND_HILICHURL] level_info_map nullptr for activity_id=%u",
        this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v6 = -1;
    }
  }
  result = v6;
  if ( v35 == (char *)v2 )
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

// Line 99: range 00000000150557C8-0000000015055869
int32_t __cdecl FindHilichurlActivity::init(FindHilichurlActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    goto LABEL_6;
  }
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
    FindHilichurlActivity::registerObserver(this);
  return 0;
};

// Line 109: range 000000001505586A-0000000015055884
void __cdecl FindHilichurlActivity::onStart(FindHilichurlActivity *const this)
{
  FindHilichurlActivity::registerObserver(this);
};

// Line 114: range 0000000015055886-0000000015055B65
void __cdecl FindHilichurlActivity::registerObserver(FindHilichurlActivity *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<FindHilichurlActivity> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<FindHilichurlActivity> v5; // [rsp+20h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+30h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 12 this_ptr:115 64 16 12 this_wtr:121";
  *(_QWORD *)(p_pending_que + 16) = FindHilichurlActivity::registerObserver;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<FindHilichurlActivity>((FindHilichurlActivity *)(p_pending_que + 32));
  if ( std::operator==<FindHilichurlActivity>(0LL, (const std::shared_ptr<FindHilichurlActivity> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/find_hilichurl_activity.cpp",
      "registerObserver",
      118);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[53])"dynamic_pointer_cast to FindHilichurlActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  }
  else
  {
    std::weak_ptr<FindHilichurlActivity>::weak_ptr<FindHilichurlActivity,void>(
      (std::weak_ptr<FindHilichurlActivity> *const)(p_pending_que + 64),
      (const std::shared_ptr<FindHilichurlActivity> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<FindHilichurlActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<FindHilichurlActivity>::weak_ptr(
      &v5,
      (const std::weak_ptr<FindHilichurlActivity> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<FindHilichurlActivity,SetGameTimeEvent>(
      &varC0,
      p_this_wtr,
      (void (*)(FindHilichurlActivity *, const SetGameTimeEvent *))&v5);
    std::weak_ptr<Observer>::operator=(&this->set_game_time_wtr_, (std::weak_ptr<Observer> *)&varC0);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<FindHilichurlActivity>::~weak_ptr(&v5);
    std::weak_ptr<FindHilichurlActivity>::~weak_ptr((std::weak_ptr<FindHilichurlActivity> *const)(p_pending_que + 64));
  }
  std::shared_ptr<FindHilichurlActivity>::~shared_ptr((std::shared_ptr<FindHilichurlActivity> *const)(p_pending_que + 32));
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

// Line 127: range 0000000015055B66-0000000015055BEC
void __cdecl FindHilichurlActivity::unregisterObserver(FindHilichurlActivity *const this)
{
  PlayerEventComp *EventComp; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->set_game_time_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->set_game_time_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->set_game_time_wtr_);
  }
};

// Line 136: range 0000000015055BEE-0000000015055C87
void __cdecl FindHilichurlActivity::onClear(FindHilichurlActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finished_day_index_);
  }
  this->finished_day_index_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
};

// Line 142: range 0000000015055C88-0000000015055DC0
void __cdecl FindHilichurlActivity::onSettle(FindHilichurlActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/find_hilichurl_activity.cpp",
      "onSettle",
      146);
    v1 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v4, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v2,
      (const char (*)[30])" is_content_closed_ not false");
    common::milog::MiLogStream::~MiLogStream(&v4);
    FindHilichurlActivity::closeFindHilichurlContent(this);
  }
  FindHilichurlActivity::unregisterObserver(this);
};

// Line 153: range 0000000015055DC2-00000000150560DC
void __cdecl FindHilichurlActivity::clearAllQuests(FindHilichurlActivity *const this)
{
  ActivityMimiTomoExcelConfigMgr *p_activity_find_hilichurl_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v2; // rdx
  PlayerQuestComp *QuestComp; // rax
  uint32_t parent_quest_id; // [rsp+1Ch] [rbp-94h]
  std::map<unsigned int,FindHilichurlLevelInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,FindHilichurlLevelInfo>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-80h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-78h] BYREF
  const std::map<unsigned int,FindHilichurlLevelInfo> *level_info_map_ptr; // [rsp+40h] [rbp-70h]
  const std::map<unsigned int,FindHilichurlLevelInfo> *__for_range; // [rsp+48h] [rbp-68h]
  const std::pair<unsigned int const,FindHilichurlLevelInfo> *v11; // [rsp+50h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,FindHilichurlLevelInfo> >::type *day_index; // [rsp+58h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,FindHilichurlLevelInfo> >::type *level_info; // [rsp+60h] [rbp-50h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v15; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+80h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  p_activity_find_hilichurl_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_find_hilichurl_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_info_map_ptr = ActivityMimiTomoExcelConfigMgr::findLevelInfoMapByActivityId(
                         p_activity_find_hilichurl_config_mgr,
                         this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( level_info_map_ptr )
  {
    __for_range = level_info_map_ptr;
    __for_begin._M_node = std::map<unsigned int,FindHilichurlLevelInfo>::begin(level_info_map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,FindHilichurlLevelInfo>::end(level_info_map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo>>::operator*(&__for_begin);
      day_index = std::get<0ul,unsigned int const,FindHilichurlLevelInfo>(v11);
      level_info = (std::tuple_element<1,const std::pair<unsigned int const,FindHilichurlLevelInfo> >::type *)std::get<1ul,unsigned int const,FindHilichurlLevelInfo>(v11);
      __for_range_0 = &level_info->quest_id_vec;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&level_info->quest_id_vec)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v2 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        parent_quest_id = *v2;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        QuestComp = Player::getQuestComp(this->player_);
        PlayerQuestComp::cancelParentQuest(QuestComp, parent_quest_id, 1);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/find_hilichurl_activity.cpp",
      "clearAllQuests",
      157);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v16,
      "[FIND_HILICHURL] level_info_map nullptr for activity_id=%u",
      this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
};

// Line 170: range 00000000150560DE-0000000015056317
void __cdecl FindHilichurlActivity::closeFindHilichurlContent(FindHilichurlActivity *const this)
{
  common::milog::MiLogStream *v1; // rcx
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/find_hilichurl_activity.cpp",
    "closeFindHilichurlContent",
    171);
  v1 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v5,
         (const char (*)[35])"closeFindHilichurlContent, player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v1, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v5);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/find_hilichurl_activity.cpp",
      "closeFindHilichurlContent",
      174);
    v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v5, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v3,
      (const char (*)[36])" is_content_closed_ is already true");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    FindHilichurlActivity::unregisterObserver(this);
    BaseActivity::clearAllGameTimeGroups((BaseActivity *const)this);
    FindHilichurlActivity::clearAllQuests(this);
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
};

// Line 186: range 0000000015056318-0000000015056614
bool __cdecl FindHilichurlActivity::checkCondIsMeet(
        FindHilichurlActivity *const this,
        const data::NewActivityCond *cond)
{
  data::NewActivityCondType type; // eax
  common::milog::MiLogStream *v3; // rax
  uint32_t finished_day_index; // ebx
  std::vector<int>::const_reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // ebx
  std::vector<int>::const_reference v8; // rdx
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = cond->type;
  if ( type == NEW_ACTIVITY_COND_FINISH_FIND_HILICHURL_LEVEL_EQUAL )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      finished_day_index = this->finished_day_index_;
      v5 = std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      return finished_day_index == *v5;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/find_hilichurl_activity.cpp",
        "checkCondIsMeet",
        192);
      v3 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v10,
             (const char (*)[36])"cond param size error, activity id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 0;
    }
  }
  else if ( type == NEW_ACTIVITY_COND_FINISH_FIND_HILICHURL_LEVEL_LESS )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v7 = this->finished_day_index_;
      v8 = std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      return v7 < *v8;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/find_hilichurl_activity.cpp",
        "checkCondIsMeet",
        199);
      v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v10,
             (const char (*)[36])"cond param size error, activity id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 0;
    }
  }
  else
  {
    return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
  }
};

// Line 211: range 0000000015056616-0000000015056BEB
int32_t __cdecl FindHilichurlActivity::execAction(
        FindHilichurlActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::NewActivityActionType type; // eax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rdx
  int32_t result; // eax
  uint32_t group_id; // [rsp+1Ch] [rbp-114h]
  std::vector<std::string>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  const FindHilichurlLevelInfo *level_info_ptr; // [rsp+30h] [rbp-100h]
  const std::vector<std::string> *__for_range; // [rsp+38h] [rbp-F8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-F0h]
  const std::string *group_str; // [rsp+48h] [rbp-E8h]
  char v15[224]; // [rsp+50h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:242 64 24 16 group_id_vec:239 128 24 10 notify:254";
  *(_QWORD *)(v2 + 16) = FindHilichurlActivity::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_CLOSE_FIND_HILICHURL_STAGE )
  {
    FindHilichurlActivity::closeFindHilichurlContent(this);
  }
  else
  {
    if ( type > NEW_ACTIVITY_ACTION_CLOSE_FIND_HILICHURL_STAGE )
    {
LABEL_38:
      result = BaseActivity::execAction((BaseActivity *const)this, action_exec);
      goto LABEL_40;
    }
    if ( type == NEW_ACTIVITY_ACTION_ACCEPT_QUEST )
    {
      if ( !BaseActivity::execAction((BaseActivity *const)this, action_exec) )
      {
        proto::FindHilichurlAcceptQuestNotify::FindHilichurlAcceptQuestNotify((proto::FindHilichurlAcceptQuestNotify *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
        proto::FindHilichurlAcceptQuestNotify::~FindHilichurlAcceptQuestNotify((proto::FindHilichurlAcceptQuestNotify *const)(v2 + 128));
      }
    }
    else
    {
      if ( type != NEW_ACTIVITY_ACTION_LOAD_DYNAMIC_GROUP )
        goto LABEL_38;
      if ( !BaseActivity::execAction((BaseActivity *const)this, action_exec) )
      {
        level_info_ptr = FindHilichurlActivity::findNextUnfinishedLevelInfo(this);
        if ( level_info_ptr )
        {
          if ( std::vector<std::string>::size(&action_exec->param) )
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
            __for_range = &action_exec->param;
            __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
            __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
            while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
            {
              group_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
              *(_DWORD *)(v2 + 48) = 0;
              if ( !common::tools::StringUtils::strToNum<unsigned int>(group_str, (unsigned int *)(v2 + 48), 1) )
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v2 + 64),
                  (const std::vector<unsigned int>::value_type *)(v2 + 48));
              __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
            }
            __for_range_0 = (std::vector<unsigned int> *)(v2 + 64);
            __for_begin._M_current = (const std::string *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
            __for_end._M_current = (const std::string *)std::vector<unsigned int>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
            {
              v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              group_id = *v6;
              if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)level_info_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_ptr->group_id >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( group_id == level_info_ptr->group_id )
              {
                proto::FindHilichurlFinishSecondQuestNotify::FindHilichurlFinishSecondQuestNotify((proto::FindHilichurlFinishSecondQuestNotify *const)(v2 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::FindHilichurlFinishSecondQuestNotify::set_day_index(
                  (proto::FindHilichurlFinishSecondQuestNotify *const)(v2 + 128),
                  this->finished_day_index_ + 1);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
                proto::FindHilichurlFinishSecondQuestNotify::~FindHilichurlFinishSecondQuestNotify((proto::FindHilichurlFinishSecondQuestNotify *const)(v2 + 128));
                break;
              }
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
          }
        }
      }
    }
  }
  result = 0;
LABEL_40:
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 271: range 0000000015056BEC-000000001505700D
__int64 __fastcall FindHilichurlActivity::tryFinishLevel(FindHilichurlActivity *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int val; // [rsp+14h] [rbp-8Ch] BYREF
  const FindHilichurlLevelInfo *level_info_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:270";
  *(_QWORD *)(v2 + 16) = FindHilichurlActivity::tryFinishLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/find_hilichurl_activity.cpp",
      "tryFinishLevel",
      276);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v15,
           (const char (*)[26])"tryFinishLevel, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    level_info_ptr = FindHilichurlActivity::findNextUnfinishedLevelInfo(this);
    if ( level_info_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_info_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_ptr->group_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( level_info_ptr->group_id == *(_DWORD *)(v2 + 32) )
      {
        FindHilichurlActivity::finishLevel(this);
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/find_hilichurl_activity.cpp",
          "tryFinishLevel",
          285);
        v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v15,
               (const char (*)[34])"group_id not correct. day_index :");
        if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        val = this->finished_day_index_ + 1;
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", group_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v11,
                (const char (*)[17])", level_group_id");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &level_info_ptr->group_id);
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/find_hilichurl_activity.cpp",
        "tryFinishLevel",
        280);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v15,
             (const char (*)[39])"level_info_ptr is nullptr. day_index :");
      if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      val = this->finished_day_index_ + 1;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
  }
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

// Line 293: range 000000001505700E-00000000150574FF
void __cdecl FindHilichurlActivity::finishLevel(FindHilichurlActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v5; // rcx
  Scene *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-110h] BYREF
  char v11[240]; // [rsp+30h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 16 13 event_ptr:295 80 16 13 scene_ptr:301 112 48 10 notify:298";
  *(_QWORD *)(v1 + 16) = FindHilichurlActivity::finishLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ++this->finished_day_index_;
  common::tools::perf::make_shared<FindHilichurlFinishLevelEvent,unsigned int &>(
    (unsigned int *)(v1 + 48),
    &this->finished_day_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr<FindHilichurlFinishLevelEvent,void>(
    (std::shared_ptr<BaseEvent> *const)(v1 + 80),
    (const std::shared_ptr<FindHilichurlFinishLevelEvent> *)(v1 + 48));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v1 + 80));
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v1 + 80));
  BaseActivity::updateAllConds((BaseActivity *const)this);
  proto::CommonPlayerTipsNotify::CommonPlayerTipsNotify((proto::CommonPlayerTipsNotify *const)(v1 + 112));
  proto::CommonPlayerTipsNotify::set_notify_type((proto::CommonPlayerTipsNotify *const)(v1 + 112), 0);
  proto::CommonPlayerTipsNotify::add_text_map_id_list(
    (proto::CommonPlayerTipsNotify *const)(v1 + 112),
    "UI_ACTIVITY_MIMITOMO_CHALLENGFINISH");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 80));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/find_hilichurl_activity.cpp",
      "finishLevel",
      304);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v10,
           (const char (*)[26])"scene is nullptr. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    Scene::notifyAllPlayer<proto::CommonPlayerTipsNotify>(v6, (proto::CommonPlayerTipsNotify *)(v1 + 112), 0);
  }
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/find_hilichurl_activity.cpp",
    "finishLevel",
    311);
  v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v10,
         (const char (*)[34])"finishLevel. finished_day_index_:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->finished_day_index_);
  v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])", player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v10);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 80));
  proto::CommonPlayerTipsNotify::~CommonPlayerTipsNotify((proto::CommonPlayerTipsNotify *const)(v1 + 112));
  std::shared_ptr<FindHilichurlFinishLevelEvent>::~shared_ptr((std::shared_ptr<FindHilichurlFinishLevelEvent> *const)(v1 + 48));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 315: range 0000000015057500-0000000015057606
const FindHilichurlLevelInfo *__cdecl FindHilichurlActivity::findNextUnfinishedLevelInfo(
        const FindHilichurlActivity *const this)
{
  ActivityMimiTomoExcelConfigMgr *p_activity_find_hilichurl_config_mgr; // rcx
  uint32_t v2; // esi
  const FindHilichurlLevelInfo *LevelInfoByActivityIdAndDayIndex; // rbx
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_activity_find_hilichurl_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.activity_find_hilichurl_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v2 = this->finished_day_index_ + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  LevelInfoByActivityIdAndDayIndex = ActivityMimiTomoExcelConfigMgr::findLevelInfoByActivityIdAndDayIndex(
                                       p_activity_find_hilichurl_config_mgr,
                                       this->activity_id_,
                                       v2);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return LevelInfoByActivityIdAndDayIndex;
};

// Line 320: range 0000000015057608-0000000015057627
void __cdecl FindHilichurlActivity::onDailyRefresh(FindHilichurlActivity *const this)
{
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 325: range 0000000015057628-0000000015057D5B
void __cdecl FindHilichurlActivity::onSetGameTimeEvent(
        FindHilichurlActivity *const this,
        const SetGameTimeEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  Scene *v7; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  Group *v15; // rax
  const FindHilichurlLevelInfo *level_info_ptr; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 group_id:336 64 16 13 scene_ptr:337 96 16 13 group_ptr:348 128 16 13 event_ptr:354";
  *(_QWORD *)(v2 + 16) = FindHilichurlActivity::onSetGameTimeEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    level_info_ptr = FindHilichurlActivity::findNextUnfinishedLevelInfo(this);
    if ( level_info_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_info_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_ptr->group_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = level_info_ptr->group_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/find_hilichurl_activity.cpp",
          "onSetGameTimeEvent",
          340);
        v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v17,
               (const char (*)[26])"scene is nullptr. player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v6, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      else
      {
        v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v7);
        if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8();
        v9 = *(_QWORD *)BlockGroupComp + 112LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8();
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))v9)(
               BlockGroupComp,
               *(unsigned int *)(v2 + 48)) != 1 )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/find_hilichurl_activity.cpp",
            "onSetGameTimeEvent",
            345);
          v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v17,
                  (const char (*)[28])"group not registed group_id");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v17);
        }
        else
        {
          v11 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Scene::findGroup((Scene *const)(v2 + 96), v11);
          if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v17,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/find_hilichurl_activity.cpp",
              "onSetGameTimeEvent",
              351);
            v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v17,
                    (const char (*)[19])"findGroup failed: ");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v2 + 48));
            v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])", player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v14, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v17);
          }
          else
          {
            EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 128), 75);
            if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v2 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v17,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/find_hilichurl_activity.cpp",
                "onSetGameTimeEvent",
                357);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v17,
                (const char (*)[40])"createEvent(EVENT_SET_GAME_TIME) failed");
              common::milog::MiLogStream::~MiLogStream(&v17);
            }
            else
            {
              v15 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              Group::handleEvent(v15, (EventPtr *)(v2 + 128));
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 128));
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/find_hilichurl_activity.cpp",
        "onSetGameTimeEvent",
        333);
      v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v17,
             (const char (*)[39])"level_info_ptr is nullptr. day_index :");
      if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = this->finished_day_index_ + 1;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/treasure_map_activity.cpp

// Line 34: range 0000000014961320-0000000014961372
const ActivityTreasureMapExcelConfigMgr *__cdecl TreasureMapActivity::getConfigMgr(
        const TreasureMapActivity *const this)
{
  ActivityTreasureMapExcelConfigMgr *p_activity_treasure_map_config_mgr; // rbx
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  p_activity_treasure_map_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3)->design_config.txt_config_mgr.activity_treasure_map_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v3);
  return p_activity_treasure_map_config_mgr;
};

// Line 39: range 0000000014961374-00000000149613BE
int32_t __cdecl TreasureMapActivity::fromScheduleBin(
        TreasureMapActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  const proto::TreasureMapScheduleBin *v2; // rax

  v2 = proto::ActivityScheduleBin::treasure_map_bin(bin);
  proto::TreasureMapScheduleBin::CopyFrom(&this->bin_data_, v2);
  TreasureMapActivity::compatibleInit(this);
  return 0;
};

// Line 46: range 00000000149613C0-00000000149613FA
int32_t __cdecl TreasureMapActivity::toScheduleBin(
        const TreasureMapActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::TreasureMapScheduleBin *v2; // rax

  v2 = proto::ActivityScheduleBin::mutable_treasure_map_bin(bin);
  proto::TreasureMapScheduleBin::CopyFrom(v2, &this->bin_data_);
  return 0;
};

// Line 52: range 00000000149613FC-0000000014962466
int32_t __cdecl TreasureMapActivity::toClient(TreasureMapActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  ActivityTreasureMapExcelConfigMgr *p_activity_treasure_map_config_mgr; // rcx
  __int64 v8; // rcx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  NewActivityExcelConfigMgr *v10; // rcx
  std::vector<int>::const_reference v11; // rax
  _DWORD *v12; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t schedule_id; // esi
  google::protobuf::uint32 v15; // eax
  uint32_t unlock_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  proto::Vector *v18; // rax
  bool is_mp_challenge_open; // al
  bool is_mp_challenge_done; // al
  google::protobuf::uint32 active; // eax
  uint32_t v22; // ecx
  uint32_t v23; // eax
  google::protobuf::uint32 v24; // eax
  bool is_mp_challenge_touched; // al
  google::protobuf::uint32 v26; // eax
  google::protobuf::uint32 v27; // eax
  bool is_active; // al
  bool is_done; // al
  const google::protobuf::MapPair<unsigned int,unsigned int> *v30; // rax
  google::protobuf::MapPair<unsigned int,unsigned int> *p_index; // rsi
  bool *v32; // rax
  _BYTE *v33; // rdx
  char v34; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v35; // rdx
  unsigned int *p_second; // rax
  std::map<unsigned int,unsigned int>::key_type __x; // [rsp+1Ch] [rbp-194h] BYREF
  uint32_t begin_time; // [rsp+20h] [rbp-190h]
  uint32_t region_id; // [rsp+24h] [rbp-18Ch]
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::const_iterator __for_begin; // [rsp+28h] [rbp-188h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::const_iterator __for_end_0; // [rsp+30h] [rbp-180h] BYREF
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+38h] [rbp-178h]
  proto::TreasureMapActivityDetailInfo *treasure_map_info; // [rsp+40h] [rbp-170h]
  const data::NewActivityScheduleExcelConfig *activity_schedule_config_ptr; // [rsp+48h] [rbp-168h]
  const std::vector<data::NewActivityScheduleCond> *__for_range; // [rsp+50h] [rbp-160h]
  const google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin> *__for_range_0; // [rsp+58h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range_1; // [rsp+60h] [rbp-150h]
  const proto::TreasureMapBonusChallengeBin *challenge_data; // [rsp+68h] [rbp-148h]
  proto::TreasureMapBonusChallengeInfo *challenge_info; // [rsp+70h] [rbp-140h]
  google::protobuf::Map<unsigned int,bool> *fragment_map; // [rsp+78h] [rbp-138h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_2; // [rsp+80h] [rbp-130h]
  const proto::TreasureMapRegionBin *region_bin; // [rsp+88h] [rbp-128h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+90h] [rbp-120h]
  proto::TreasureMapRegionInfo *region_info; // [rsp+98h] [rbp-118h]
  const data::NewActivityScheduleCond *schedule_cond; // [rsp+A0h] [rbp-110h]
  google::protobuf::MapPair<unsigned int,unsigned int> index; // [rsp+A8h] [rbp-108h] BYREF
  std::shared_ptr<Config> v57; // [rsp+B0h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+C0h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+E0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v60; // [rsp+100h] [rbp-B0h] BYREF
  char v61[144]; // [rsp+120h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 17 solution_iter:124 64 12 16 region_center:98";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202177536;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "toClient",
      55);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v60,
           (const char (*)[43])"[TREASURE] BaseActivity::toClient failed. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v60);
    result = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v57);
    p_activity_treasure_map_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.txt_config_mgr.activity_treasure_map_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(
                   p_activity_treasure_map_config_mgr,
                   this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v57);
    if ( config_ptr )
    {
      treasure_map_info = proto::ActivityInfo::mutable_treasure_map_info(activity_info);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v57);
      p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.txt_config_mgr.new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      begin_time = NewActivityExcelConfigMgr::getScheduleBeginTime(p_new_activity_config_mgr, this->schedule_id_);
      std::shared_ptr<Config>::~shared_ptr(&v57);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v57);
      v10 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.txt_config_mgr.new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      activity_schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                                       v10,
                                       this->schedule_id_);
      std::shared_ptr<Config>::~shared_ptr(&v57);
      if ( activity_schedule_config_ptr )
      {
        __for_range = &activity_schedule_config_ptr->cond;
        *(std::vector<data::NewActivityScheduleCond>::const_iterator *)(v2 + 32) = std::vector<data::NewActivityScheduleCond>::begin(&activity_schedule_config_ptr->cond);
        index = (google::protobuf::MapPair<unsigned int,unsigned int>)std::vector<data::NewActivityScheduleCond>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>(
                  (const __gnu_cxx::__normal_iterator<const data::NewActivityScheduleCond*,std::vector<data::NewActivityScheduleCond> > *)(v2 + 32),
                  (const __gnu_cxx::__normal_iterator<const data::NewActivityScheduleCond*,std::vector<data::NewActivityScheduleCond> > *)&index) )
        {
          schedule_cond = __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::NewActivityScheduleCond*,std::vector<data::NewActivityScheduleCond> > *const)(v2 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&schedule_cond->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&schedule_cond->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&schedule_cond->type);
          }
          if ( schedule_cond->type == NEW_ACTIVITY_SCHEDULE_COND_PLAYER_LEVEL_GREATER
            && std::vector<int>::size(&schedule_cond->param) )
          {
            v11 = std::vector<int>::operator[](&schedule_cond->param, 0LL);
            v12 = v11;
            if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v11);
            }
            proto::TreasureMapActivityDetailInfo::set_min_open_player_level(treasure_map_info, *v12 + 1);
          }
          __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>::operator++((__gnu_cxx::__normal_iterator<const data::NewActivityScheduleCond*,std::vector<data::NewActivityScheduleCond> > *const)(v2 + 32));
        }
        __for_range_0 = proto::TreasureMapScheduleBin::region_list(&this->bin_data_);
        *(google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::const_iterator *)(v2 + 32) = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::begin(__for_range_0);
        index = (google::protobuf::MapPair<unsigned int,unsigned int>)google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::end(__for_range_0).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin const>::operator!=(
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapRegionBin> *const)(v2 + 32),
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapRegionBin>::iterator *)&index) )
        {
          region_bin = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapRegionBin> *const)(v2 + 32));
          region_id = proto::TreasureMapRegionBin::region_id(region_bin);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v57);
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
          region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                                &v13->design_config.txt_config_mgr.activity_treasure_map_config_mgr,
                                region_id);
          std::shared_ptr<Config>::~shared_ptr(&v57);
          if ( region_config_ptr )
          {
            region_info = proto::TreasureMapActivityDetailInfo::add_region_info_list(treasure_map_info);
            proto::TreasureMapRegionInfo::set_region_id(region_info, region_id);
            v15 = proto::TreasureMapRegionBin::current_progress(region_bin);
            proto::TreasureMapRegionInfo::set_current_progress(region_info, v15);
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->unlock_day >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)region_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config_ptr->unlock_day >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&region_config_ptr->unlock_day);
            }
            unlock_day = region_config_ptr->unlock_day;
            if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->schedule_id_);
            }
            BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, unlock_day);
            proto::TreasureMapRegionInfo::set_start_time(region_info, BeginTimeByOpenDay);
            Vector3::Vector3((Vector3 *const)(v2 + 64), &region_config_ptr->region_center);
            v18 = proto::TreasureMapRegionInfo::mutable_region_center_pos(region_info);
            Vector3::toClient((const Vector3 *const)(v2 + 64), v18);
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&region_config_ptr->region_radius);
            }
            proto::TreasureMapRegionInfo::set_region_radius(region_info, region_config_ptr->region_radius);
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&region_config_ptr->token_num);
            }
            proto::TreasureMapRegionInfo::set_goal_points(region_info, region_config_ptr->token_num);
            is_mp_challenge_open = proto::TreasureMapRegionBin::is_mp_challenge_open(region_bin);
            proto::TreasureMapRegionInfo::set_is_find_mp_spot(region_info, is_mp_challenge_open);
            is_mp_challenge_done = proto::TreasureMapRegionBin::is_mp_challenge_done(region_bin);
            proto::TreasureMapRegionInfo::set_is_done_mp_spot(region_info, is_mp_challenge_done);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v60,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/treasure_map_activity.cpp",
              "toClient",
              91);
            if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->schedule_id_);
            }
            schedule_id = this->schedule_id_;
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->activity_id_);
            }
            common::milog::MiLogStream::operator()(&v60, stru_255158C0.gap0, region_id, this->activity_id_, schedule_id);
            common::milog::MiLogStream::~MiLogStream(&v60);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapRegionBin> *const)(v2 + 32));
        }
        active = proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_);
        proto::TreasureMapActivityDetailInfo::set_active_region_index(treasure_map_info, active);
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&config_ptr->treasure_days);
        }
        v22 = config_ptr->treasure_days + 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        v23 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v22);
        proto::TreasureMapActivityDetailInfo::set_treasure_close_time(treasure_map_info, v23);
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->preview_reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->preview_reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->preview_reward_id);
        }
        proto::TreasureMapActivityDetailInfo::set_preview_reward_id(treasure_map_info, config_ptr->preview_reward_id);
        v24 = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
        proto::TreasureMapActivityDetailInfo::set_currency_num(treasure_map_info, v24);
        is_mp_challenge_touched = proto::TreasureMapScheduleBin::is_mp_challenge_touched(&this->bin_data_);
        proto::TreasureMapActivityDetailInfo::set_is_mp_challenge_touched(treasure_map_info, is_mp_challenge_touched);
        v26 = std::unordered_map<unsigned int,unsigned int>::size(&this->region_mp_groups_map_);
        proto::TreasureMapActivityDetailInfo::set_total_mp_spot_num(treasure_map_info, v26);
        __for_range_1 = proto::TreasureMapScheduleBin::challenge_list(&this->bin_data_);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range_1).it_;
        __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range_1).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator!=(
                  &__for_begin,
                  &__for_end_0) )
        {
          challenge_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator*(&__for_begin);
          challenge_info = proto::TreasureMapActivityDetailInfo::add_bonus_challenge_list(treasure_map_info);
          v27 = proto::TreasureMapBonusChallengeBin::config_id(challenge_data);
          proto::TreasureMapBonusChallengeInfo::set_config_id(challenge_info, v27);
          is_active = proto::TreasureMapBonusChallengeBin::is_active(challenge_data);
          proto::TreasureMapBonusChallengeInfo::set_is_active(challenge_info, is_active);
          is_done = proto::TreasureMapBonusChallengeBin::is_done(challenge_data);
          proto::TreasureMapBonusChallengeInfo::set_is_done(challenge_info, is_done);
          fragment_map = proto::TreasureMapBonusChallengeInfo::mutable_fragment_map(challenge_info);
          __for_range_2 = proto::TreasureMapBonusChallengeBin::fragment_map(challenge_data);
          google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_2);
          google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_2);
          while ( google::protobuf::operator!=(&__for_begin_0, &__for_end) )
          {
            v30 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
            google::protobuf::MapPair<unsigned int,unsigned int>::MapPair(&index, v30);
            p_index = &index;
            v32 = google::protobuf::Map<unsigned int,bool>::operator[](
                    fragment_map,
                    (const google::protobuf::Map<unsigned int,bool>::key_type *)&index);
            v33 = v32;
            v34 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
            if ( v34 != 0 && ((unsigned __int8)v32 & 7) >= v34 )
            {
              LOBYTE(p_index) = v34 != 0;
              __asan_report_store1(v32, p_index, v32);
            }
            *v33 = 1;
            google::protobuf::MapPair<unsigned int,unsigned int>::~MapPair(&index);
            google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
          }
          __x = proto::TreasureMapBonusChallengeInfo::config_id(challenge_info);
          *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 32) = std::map<unsigned int,unsigned int>::find(
                                                                          &this->bonus_solution_map_,
                                                                          &__x);
          index = (google::protobuf::MapPair<unsigned int,unsigned int>)std::map<unsigned int,unsigned int>::end(&this->bonus_solution_map_)._M_node;
          if ( std::operator!=(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 32),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&index) )
          {
            v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 32));
            p_second = &v35->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_second);
            }
            proto::TreasureMapBonusChallengeInfo::set_solution_id(challenge_info, v35->second);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator++(&__for_begin);
        }
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/treasure_map_activity.cpp",
          "toClient",
          71);
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        common::milog::MiLogStream::operator()(
          &v60,
          "[TREASURE] new activity config nullptr for schedule_id=%u",
          this->schedule_id_);
        common::milog::MiLogStream::~MiLogStream(&v60);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "toClient",
        62);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      v8 = this->schedule_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      common::milog::MiLogStream::operator()(
        &v60,
        "[TREASURE] treasure map config not found @activity_id<%u> schedule_id<%u>",
        this->activity_id_,
        v8);
      common::milog::MiLogStream::~MiLogStream(&v60);
      result = -1;
    }
  }
  if ( v61 == (char *)v2 )
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

// Line 135: range 0000000014962468-0000000014962482
void __cdecl TreasureMapActivity::onRefresh(TreasureMapActivity *const this)
{
  BaseActivity::onRefresh(this);
};

// Line 140: range 0000000014962484-00000000149624DA
int32_t __cdecl TreasureMapActivity::init(TreasureMapActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    TreasureMapActivity::initObserver(this);
  return 0;
};

// Line 149: range 00000000149624DC-0000000014962556
void __cdecl TreasureMapActivity::onLogin(TreasureMapActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) )
  {
    TreasureMapActivity::checkAndRemoveDetector(this);
    TreasureMapActivity::tryRegisterActiveRegionGroups(this, 1);
    TreasureMapActivity::tryRegisterMpGroups(this);
    TreasureMapActivity::tryRegisterBonusGroups(this);
    TreasureMapActivity::tryUnlockBonusRegions(this, 1);
    BaseActivity::onLogin(this);
  }
};

// Line 164: range 0000000014962558-00000000149625B8
void __cdecl TreasureMapActivity::onStart(TreasureMapActivity *const this)
{
  TreasureMapActivity::compatibleInit(this);
  TreasureMapActivity::tryRegisterActiveRegionGroups(this, 0);
  TreasureMapActivity::tryRegisterMpGroups(this);
  TreasureMapActivity::tryRegisterBonusGroups(this);
  TreasureMapActivity::tryUnlockBonusRegions(this, 1);
  TreasureMapActivity::initObserver(this);
};

// Line 174: range 00000000149625BA-00000000149625D4
void __cdecl TreasureMapActivity::onSettle(TreasureMapActivity *const this)
{
  TreasureMapActivity::checkAndRemoveDetector(this);
};

// Line 179: range 00000000149625D6-0000000014962632
void __cdecl TreasureMapActivity::onClear(TreasureMapActivity *const this)
{
  TreasureMapActivity::checkAndRemoveDetector(this);
  proto::TreasureMapScheduleBin::Clear(&this->bin_data_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::clear(&this->region_to_group_coins_map_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->region_mp_groups_map_);
  TreasureMapActivity::clearAllGroups(this);
};

// Line 189: range 0000000014962634-0000000014962D0B
void __cdecl TreasureMapActivity::initObserver(TreasureMapActivity *const this)
{
  unsigned __int64 p_M_last; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // r12
  PlayerEventComp *v8; // r12
  PlayerEventComp v9; // [rsp+60h] [rbp-E0h] BYREF

  p_M_last = (unsigned __int64)&v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "2 32 16 12 this_ptr:190 64 16 12 this_wtr:191";
  *(_QWORD *)(p_M_last + 16) = TreasureMapActivity::initObserver;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::dynamic_pointer_cast<TreasureMapActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_last + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::weak_ptr<TreasureMapActivity>::weak_ptr<TreasureMapActivity,void>(
    (std::weak_ptr<TreasureMapActivity> *const)(p_M_last + 64),
    (const std::shared_ptr<TreasureMapActivity> *)(p_M_last + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->general_reward_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    std::weak_ptr<TreasureMapActivity>::weak_ptr(
      (std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<TreasureMapActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<TreasureMapActivity,TakeGeneralRewardEvent>(
      &v9,
      (std::weak_ptr<TreasureMapActivity> *)EventComp,
      (void (*)(TreasureMapActivity *, const TakeGeneralRewardEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::operator=(&this->general_reward_obs_wtr_, (std::weak_ptr<Observer> *)&v9);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9);
    std::weak_ptr<TreasureMapActivity>::~weak_ptr((std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->finish_quest_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v5 = Player::getEventComp(this->player_);
    std::weak_ptr<TreasureMapActivity>::weak_ptr(
      (std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<TreasureMapActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<TreasureMapActivity,FinishQuestEvent>(
      (PlayerEventComp *const)&v9._M_weak_this._M_refcount,
      (std::weak_ptr<TreasureMapActivity> *)v5,
      (void (*)(TreasureMapActivity *, const FinishQuestEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::operator=(
      &this->finish_quest_obs_wtr_,
      (std::weak_ptr<Observer> *)&v9._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9._M_weak_this._M_refcount);
    std::weak_ptr<TreasureMapActivity>::~weak_ptr((std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->challenge_begin_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v6 = Player::getEventComp(this->player_);
    std::weak_ptr<TreasureMapActivity>::weak_ptr(
      (std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<TreasureMapActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<TreasureMapActivity,ChallengeBeginEvent>(
      (PlayerEventComp *const)&v9.event_center_,
      (std::weak_ptr<TreasureMapActivity> *)v6,
      (void (*)(TreasureMapActivity *, const ChallengeBeginEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::operator=(&this->challenge_begin_obs_wtr_, (std::weak_ptr<Observer> *)&v9.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_);
    std::weak_ptr<TreasureMapActivity>::~weak_ptr((std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->challenge_finish_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v7 = Player::getEventComp(this->player_);
    std::weak_ptr<TreasureMapActivity>::weak_ptr(
      (std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<TreasureMapActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<TreasureMapActivity,ChallengeFinishEvent>(
      (PlayerEventComp *const)&v9.event_center_.context_.pending_que_,
      (std::weak_ptr<TreasureMapActivity> *)v7,
      (void (*)(TreasureMapActivity *, const ChallengeFinishEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::operator=(
      &this->challenge_finish_obs_wtr_,
      (std::weak_ptr<Observer> *)&v9.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_.context_.pending_que_);
    std::weak_ptr<TreasureMapActivity>::~weak_ptr((std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->enter_scene_done_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v8 = Player::getEventComp(this->player_);
    std::weak_ptr<TreasureMapActivity>::weak_ptr(
      (std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_,
      (const std::weak_ptr<TreasureMapActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<TreasureMapActivity,PlayerEnterSceneEvent>(
      (PlayerEventComp *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<TreasureMapActivity> *)v8,
      (void (*)(TreasureMapActivity *, const PlayerEnterSceneEvent *))&v9.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::operator=(
      &this->enter_scene_done_obs_wtr_,
      (std::weak_ptr<Observer> *)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<TreasureMapActivity>::~weak_ptr((std::weak_ptr<TreasureMapActivity> *const)&v9.event_center_.context_.pending_que_);
  }
  std::weak_ptr<TreasureMapActivity>::~weak_ptr((std::weak_ptr<TreasureMapActivity> *const)(p_M_last + 64));
  std::shared_ptr<TreasureMapActivity>::~shared_ptr((std::shared_ptr<TreasureMapActivity> *const)(p_M_last + 32));
  if ( &v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
  {
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_last = 1172321806LL;
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 215: range 0000000014962D0C-0000000014963C16
void __cdecl TreasureMapActivity::compatibleInit(TreasureMapActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::size_type v4; // r14
  uint32_t Uid; // r15d
  std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::size_type v6; // r14
  unsigned int v7; // eax
  uint32_t v8; // eax
  const google::protobuf::MapPair<unsigned int,bool> *v9; // rax
  uint32_t v10; // eax
  google::protobuf::uint32 token_num; // r14d
  google::protobuf::uint32 v12; // r14d
  uint32_t v13; // ecx
  uint32_t v14; // eax
  uint32_t v15; // r14d
  unsigned int v16; // eax
  int v17; // eax
  uint32_t v18; // eax
  uint32_t v19; // eax
  uint32_t v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __gnu_cxx::__normal_iterator<char*,std::string > v25; // r14
  __gnu_cxx::__normal_iterator<char*,std::string > v26; // rax
  const char *v27; // rax
  char *v28; // [rsp+0h] [rbp-390h]
  uint32_t active_region_index; // [rsp+1Ch] [rbp-374h]
  size_t i; // [rsp+20h] [rbp-370h]
  size_t i_0; // [rsp+28h] [rbp-368h]
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-360h]
  const std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig> *region_config_map; // [rsp+38h] [rbp-358h]
  proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+50h] [rbp-340h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+58h] [rbp-338h]
  proto::TreasureMapRegionBin *region_data_0; // [rsp+60h] [rbp-330h]
  const proto::TreasureMapRegionBin *region_data; // [rsp+68h] [rbp-328h]
  const google::protobuf::Map<unsigned int,bool> *__for_range; // [rsp+70h] [rbp-320h]
  google::protobuf::MapPair<unsigned int,bool> group_id; // [rsp+78h] [rbp-318h] BYREF
  google::protobuf::Map<unsigned int,bool>::const_iterator __for_begin; // [rsp+80h] [rbp-310h] BYREF
  common::milog::MiLogStream v41; // [rsp+A0h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v42; // [rsp+C0h] [rbp-2D0h] BYREF
  char v43[688]; // [rsp+E0h] [rbp-2B0h] BYREF

  v1 = (unsigned __int64)v43;
  v28 = v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(640LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 24 13 rand_seed:289 112 32 12 seed_str:288 176 392 6 ss:286";
  *(_QWORD *)(v1 + 16) = TreasureMapActivity::compatibleInit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862737] = -218103808;
  v3[536862738] = -202116109;
  v3[536862739] = -202116109;
  config_mgr = TreasureMapActivity::getConfigMgr(this);
  region_config_map = &config_mgr->treasure_map_region_excel_config_map;
  v4 = proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_);
  if ( v4 > std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::size(&config_mgr->treasure_map_region_excel_config_map) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "compatibleInit",
      221);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    v6 = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::size(region_config_map);
    v7 = proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_);
    common::milog::MiLogStream::operator()(&v42, aTreasureRegion_17, v7, v6, Uid);
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  for ( i = 0LL; i < std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::size(region_config_map); ++i )
  {
    region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                          config_mgr,
                          (int)i + 1);
    if ( region_config_ptr )
    {
      if ( i >= proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "compatibleInit",
          252);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v14 = Player::getUid(this->player_);
        common::milog::MiLogStream::operator()(&v42, "[TREASURE] init region<%ld> bin for player: %u", i + 1, v14);
        common::milog::MiLogStream::~MiLogStream(&v42);
        region_data_0 = proto::TreasureMapScheduleBin::add_region_list(&this->bin_data_);
        proto::TreasureMapRegionBin::set_region_id(region_data_0, i + 1);
      }
      else
      {
        region_data = proto::TreasureMapScheduleBin::mutable_region_list(&this->bin_data_, i);
        __for_range = proto::TreasureMapRegionBin::done_group_map(region_data);
        google::protobuf::Map<unsigned int,bool>::begin(&__for_begin, __for_range);
        google::protobuf::Map<unsigned int,bool>::end(
          (google::protobuf::Map<unsigned int,bool>::const_iterator *)(v1 + 48),
          __for_range);
        while ( google::protobuf::operator!=(
                  &__for_begin,
                  (const google::protobuf::Map<unsigned int,bool>::const_iterator *)(v1 + 48)) )
        {
          v9 = google::protobuf::Map<unsigned int,bool>::const_iterator::operator*(&__for_begin);
          google::protobuf::MapPair<unsigned int,bool>::MapPair(&group_id, v9);
          if ( !ActivityTreasureMapExcelConfigMgr::isRegionHasSpotGroup(config_mgr, i + 1, group_id.first) )
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_map_activity.cpp",
              "compatibleInit",
              241);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v10 = Player::getUid(this->player_);
            common::milog::MiLogStream::operator()(
              &v42,
              "[TREASURE] region<%ld> spot group_id<%u> was deleted! player: %u",
              i + 1,
              group_id.first,
              v10);
            common::milog::MiLogStream::~MiLogStream(&v42);
          }
          google::protobuf::MapPair<unsigned int,bool>::~MapPair(&group_id);
          google::protobuf::Map<unsigned int,bool>::const_iterator::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr->token_num);
        }
        token_num = region_config_ptr->token_num;
        if ( token_num < proto::TreasureMapRegionBin::current_progress(region_data) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "compatibleInit",
            247);
          v12 = proto::TreasureMapRegionBin::current_progress(region_data);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v13 = Player::getUid(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->token_num);
          }
          common::milog::MiLogStream::operator()(
            &v42,
            aTreasureRegion_18,
            i + 1,
            region_config_ptr->token_num,
            v13,
            v12,
            v28);
          common::milog::MiLogStream::~MiLogStream(&v42);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/treasure_map_activity.cpp",
        "compatibleInit",
        230);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v8 = Player::getUid(this->player_);
      common::milog::MiLogStream::operator()(&v42, "[TREASURE] region<%ld> config not found! player: %u", i + 1, v8);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
  }
  active_region_index = proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_);
  if ( active_region_index > proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "compatibleInit",
      262);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v15 = Player::getUid(this->player_);
    v16 = proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_);
    common::milog::MiLogStream::operator()(
      &v42,
      "[TREASURE] active_region_index reverted [%u ==> %d]. player: %u",
      active_region_index,
      v16,
      v15);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v17 = proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_);
    proto::TreasureMapScheduleBin::set_active_region_index(&this->bin_data_, v17);
  }
  for ( i_0 = 0LL;
        i_0 < std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::size(&config_mgr->treasure_map_bonus_region_excel_config_map);
        ++i_0 )
  {
    if ( data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(config_mgr, (int)i_0 + 1) )
    {
      if ( i_0 >= proto::TreasureMapScheduleBin::challenge_list_size(&this->bin_data_) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "compatibleInit",
          279);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v19 = Player::getUid(this->player_);
        common::milog::MiLogStream::operator()(&v42, "[TREASURE] init bonus<%ld> bin for player: %u", i_0 + 1, v19);
        common::milog::MiLogStream::~MiLogStream(&v42);
        bonus_data = proto::TreasureMapScheduleBin::add_challenge_list(&this->bin_data_);
        proto::TreasureMapBonusChallengeBin::set_config_id(bonus_data, i_0 + 1);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/treasure_map_activity.cpp",
        "compatibleInit",
        273);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v18 = Player::getUid(this->player_);
      common::milog::MiLogStream::operator()(&v42, "[TREASURE] bonus<%ld> config not found! player: %u", i_0 + 1, v18);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v1 + 176);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v20 = Player::getUid(this->player_);
  v21 = std::ostream::operator<<(v1 + 192, v20);
  v22 = std::operator<<<std::char_traits<char>>(v21, "|");
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  v23 = std::ostream::operator<<(v22, this->activity_id_);
  v24 = std::operator<<<std::char_traits<char>>(v23, "|");
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  std::ostream::operator<<(v24, this->schedule_id_);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(v1 + 112, v1 + 176);
  v25._M_current = (char *)std::string::end(v1 + 112);
  v26._M_current = (char *)std::string::begin(v1 + 112);
  std::seed_seq::seed_seq<__gnu_cxx::__normal_iterator<char *,std::string>>((std::seed_seq *const)(v1 + 48), v26, v25);
  std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed<std::seed_seq>(
    &this->rand_genatator_,
    (std::seed_seq *)(v1 + 48));
  common::milog::MiLogStream::create(
    &v41,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "compatibleInit",
    291);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v42, v1 + 176);
  v27 = (const char *)std::string::c_str(&v42);
  common::milog::MiLogStream::operator()(&v41, "init random seed %s", v27);
  std::string::~string(&v42);
  common::milog::MiLogStream::~MiLogStream(&v41);
  TreasureMapActivity::initAllRegionGroups(this);
  std::seed_seq::~seed_seq((std::seed_seq *const)(v1 + 48));
  std::string::~string((void *)(v1 + 112));
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v1 + 176);
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 298: range 0000000014963C18-0000000014963C8F
void __cdecl TreasureMapActivity::onFinishRegion(TreasureMapActivity *const this)
{
  uint32_t old_index; // [rsp+14h] [rbp-Ch]
  const google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin> *region_list; // [rsp+18h] [rbp-8h]

  region_list = proto::TreasureMapScheduleBin::region_list(&this->bin_data_);
  old_index = proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_);
  if ( old_index < google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::size(region_list) )
  {
    proto::TreasureMapScheduleBin::set_active_region_index(&this->bin_data_, old_index + 1);
    TreasureMapActivity::notifyActiveRegionIndex(this);
  }
};

// Line 309: range 0000000014963C90-0000000014963E08
void __cdecl TreasureMapActivity::notifyActiveRegionIndex(TreasureMapActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::uint32 active; // eax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:310";
  *(_QWORD *)(v1 + 16) = TreasureMapActivity::notifyActiveRegionIndex;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::TreasureMapRegionActiveNotify::TreasureMapRegionActiveNotify((proto::TreasureMapRegionActiveNotify *const)(v1 + 32));
  active = proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_);
  proto::TreasureMapRegionActiveNotify::set_active_region_index(
    (proto::TreasureMapRegionActiveNotify *const)(v1 + 32),
    active);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::TreasureMapRegionActiveNotify::~TreasureMapRegionActiveNotify((proto::TreasureMapRegionActiveNotify *const)(v1 + 32));
  if ( v5 == (char *)v1 )
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

// Line 316: range 0000000014963E0A-0000000014964C4C
void __cdecl TreasureMapActivity::initAllRegionGroups(TreasureMapActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v5; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  uint32_t *v8; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  uint32_t *v10; // rdx
  std::vector<unsigned int>::reference v12; // rax
  _DWORD *v13; // rdx
  char *v14; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v15; // rax
  uint32_t *v16; // rdx
  char v17; // cl
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  const data::TreasureMapRegionExcelConfig **v23; // rax
  uint32_t mp_group_id; // r14d
  uint32_t *p_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v26; // rax
  uint32_t *v27; // rdx
  char v28; // cl
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v35; // rax
  int *v36; // rdx
  int v37; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *v38; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v39; // rax
  _DWORD *v40; // rdx
  char v41; // cl
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v42; // rax
  int *v43; // rdx
  int v44; // r14d
  uint32_t *p_group_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v46; // rax
  _DWORD *v47; // rdx
  char v48; // cl
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  int32_t group_index; // [rsp+1Ch] [rbp-204h]
  int32_t i; // [rsp+20h] [rbp-200h]
  uint32_t bonus_num; // [rsp+24h] [rbp-1FCh]
  int need_group_num; // [rsp+28h] [rbp-1F8h]
  uint32_t spot_num; // [rsp+2Ch] [rbp-1F4h]
  uint32_t token_num; // [rsp+30h] [rbp-1F0h]
  int32_t from_index; // [rsp+34h] [rbp-1ECh]
  std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator __for_begin_0; // [rsp+38h] [rbp-1E8h] BYREF
  std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator __for_end_0; // [rsp+40h] [rbp-1E0h] BYREF
  std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::const_iterator __for_end; // [rsp+48h] [rbp-1D8h] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+50h] [rbp-1D0h]
  const std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig> *__for_range; // [rsp+58h] [rbp-1C8h]
  std::set<const data::TreasureMapRegionExcelConfig*> *__for_range_0; // [rsp+60h] [rbp-1C0h]
  const std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig> *__for_range_1; // [rsp+68h] [rbp-1B8h]
  const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> *v67; // [rsp+70h] [rbp-1B0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *bonus_id; // [rsp+78h] [rbp-1A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *bonus_config; // [rsp+80h] [rbp-1A0h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+88h] [rbp-198h]
  const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> *v71; // [rsp+90h] [rbp-190h]
  std::tuple_element<0,const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> >::type *region_id; // [rsp+98h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> >::type *region_config; // [rsp+A0h] [rbp-180h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+A8h] [rbp-178h]
  common::milog::MiLogStream v75; // [rsp+B0h] [rbp-170h] BYREF
  char v76[336]; // [rsp+D0h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 12 group_id:337 48 8 8 iter:365 80 24 16 solution_vec:362 144 24 23 select_solution_vec:3"
                        "63 208 48 25 mp_region_configs_set:345";
  *(_QWORD *)(v1 + 16) = TreasureMapActivity::initAllRegionGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = -218959360;
  v3[536862724] = 62194;
  v3[536862725] = -218959360;
  v3[536862726] = 62194;
  v3[536862728] = -202116109;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::clear(&this->region_to_group_coins_map_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->region_mp_groups_map_);
  config_mgr = TreasureMapActivity::getConfigMgr(this);
  __for_range = &config_mgr->treasure_map_region_excel_config_map;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>::__node_type *)std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::begin(&config_mgr->treasure_map_region_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::end(&config_mgr->treasure_map_region_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false> *)&__for_end_0,
            &__for_end) )
  {
    v71 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false> *const)&__for_end_0);
    region_id = std::get<0ul,unsigned int const,data::TreasureMapRegionExcelConfig>(v71);
    region_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureMapRegionExcelConfig>(v71);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 144));
    M_current = std::vector<unsigned int>::end(&region_config->spot_num_list)._M_current;
    v5._M_current = std::vector<unsigned int>::begin(&region_config->spot_num_list)._M_current;
    need_group_num = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
                       v5,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                       0);
    common::tools::RandomUtils::randomSelect<unsigned int>(
      &region_config->group_list,
      (std::vector<unsigned int> *)(v1 + 144),
      need_group_num,
      &this->rand_genatator_);
    group_coins_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                        &this->region_to_group_coins_map_,
                        region_id);
    group_index = 0;
    for ( i = 0;
          i < std::vector<unsigned int>::size(&region_config->spot_num_list)
       && i < std::vector<unsigned int>::size(&region_config->token_num_list);
          ++i )
    {
      v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 &region_config->spot_num_list,
                                                                                                 i);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      spot_num = *v8;
      v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 &region_config->token_num_list,
                                                                                                 i);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      token_num = *v10;
      from_index = group_index;
      while ( spot_num + from_index > group_index
           && group_index < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 144)) )
      {
        v12 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 144), group_index);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v1 + 32) = *v13;
        v14 = (char *)(v1 + 32);
        v15 = std::unordered_map<unsigned int,unsigned int>::operator[](
                group_coins_map,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 32));
        v16 = v15;
        v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
        if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
        {
          LOBYTE(v14) = v17 != 0;
          __asan_report_store4(v15, v14, v15);
        }
        *v16 = token_num;
        ++group_index;
      }
    }
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "initAllRegionGroups",
      341);
    v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v75,
            (const char (*)[20])"[TREASURE] region: ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, region_id);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v19, (const char (*)[16])", group_coins: ");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v20, group_coins_map);
    v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v22, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v75);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 144));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false> *const)&__for_end_0);
  }
  ActivityTreasureMapExcelConfigMgr::randomSelectMpRegionConfigs(
    (std::set<const data::TreasureMapRegionExcelConfig*> *)(v1 + 208),
    config_mgr,
    &this->rand_genatator_);
  __for_range_0 = (std::set<const data::TreasureMapRegionExcelConfig*> *)(v1 + 208);
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>::__node_type *)std::set<data::TreasureMapRegionExcelConfig const*>::begin((const std::set<const data::TreasureMapRegionExcelConfig*> *const)(v1 + 208))._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false>::__node_type *)std::set<data::TreasureMapRegionExcelConfig const*>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<const data::TreasureMapRegionExcelConfig*>::_Self *)&__for_end_0,
            (const std::_Rb_tree_const_iterator<const data::TreasureMapRegionExcelConfig*>::_Self *)&__for_end) )
  {
    v23 = (const data::TreasureMapRegionExcelConfig **)std::_Rb_tree_const_iterator<data::TreasureMapRegionExcelConfig const*>::operator*((const std::_Rb_tree_const_iterator<const data::TreasureMapRegionExcelConfig*> *const)&__for_end_0);
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      v23 = (const data::TreasureMapRegionExcelConfig **)__asan_report_load8(v23);
    region_config_ptr = *v23;
    if ( region_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)region_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_group_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&region_config_ptr->mp_group_id);
      }
      mp_group_id = region_config_ptr->mp_group_id;
      p_id = &region_config_ptr->id;
      v26 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->region_mp_groups_map_,
              &region_config_ptr->id);
      v27 = v26;
      v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
      if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
      {
        LOBYTE(p_id) = v28 != 0;
        __asan_report_store4(v26, p_id, v26);
      }
      *v27 = mp_group_id;
    }
    std::_Rb_tree_const_iterator<data::TreasureMapRegionExcelConfig const*>::operator++((std::_Rb_tree_const_iterator<const data::TreasureMapRegionExcelConfig*> *const)&__for_end_0);
  }
  common::milog::MiLogStream::create(
    &v75,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "initAllRegionGroups",
    353);
  v29 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v75,
          (const char (*)[35])"[TREASURE] region_mp_groups_map_: ");
  v30 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v29, &this->region_mp_groups_map_);
  v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])" player: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v31, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v75);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::clear(&this->region_bonus_fragments_map_);
  ActivityTreasureMapExcelConfigMgr::randomSelectRegionBonusFragments(
    config_mgr,
    &this->rand_genatator_,
    &this->region_bonus_fragments_map_);
  common::milog::MiLogStream::create(
    &v75,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "initAllRegionGroups",
    358);
  v32 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v75, this);
  v33 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v32,
          (const char (*)[31])" region_bonus_fragments_map_: ");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v33, &this->region_mp_groups_map_);
  common::milog::MiLogStream::~MiLogStream(&v75);
  bonus_num = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::size(&config_mgr->treasure_map_bonus_region_excel_config_map);
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>>(
    (std::vector<unsigned int> *)(v1 + 80),
    &config_mgr->bonus_treasure_solution_excel_config_map);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 144));
  common::tools::RandomUtils::randomSelect<unsigned int>(
    (const std::vector<unsigned int> *)(v1 + 80),
    (std::vector<unsigned int> *)(v1 + 144),
    bonus_num,
    &this->rand_genatator_);
  *(std::vector<unsigned int>::iterator *)(v1 + 48) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 144));
  __for_range_1 = &config_mgr->treasure_map_bonus_region_excel_config_map;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::begin(&config_mgr->treasure_map_bonus_region_excel_config_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v67 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator*(&__for_begin_0);
    bonus_id = std::get<0ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v67);
    bonus_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v67);
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false>::__node_type *)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 144))._M_current;
    if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 48),
           (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/treasure_map_activity.cpp",
        "initAllRegionGroups",
        370);
      v34 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v75, this);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v34,
        (const char (*)[33])" more bonus spot than solutions.");
      common::milog::MiLogStream::~MiLogStream(&v75);
      break;
    }
    v35 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 48));
    v36 = (int *)v35;
    if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v35);
    }
    v37 = *v36;
    v38 = bonus_id;
    v39 = std::map<unsigned int,unsigned int>::operator[](&this->bonus_solution_map_, bonus_id);
    v40 = v39;
    v41 = *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000);
    if ( v41 != 0 && (char)(((unsigned __int8)v39 & 7) + 3) >= v41 )
    {
      LOBYTE(v38) = v41 != 0;
      __asan_report_store4(v39, v38, v39);
    }
    *v40 = v37;
    v42 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 48));
    v43 = (int *)v42;
    if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v42);
    }
    v44 = *v43;
    p_group_id = &bonus_config->group_id;
    v46 = std::map<unsigned int,unsigned int>::operator[](&this->group_solution_map_, &bonus_config->group_id);
    v47 = v46;
    v48 = *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000);
    if ( v48 != 0 && (char)(((unsigned __int8)v46 & 7) + 3) >= v48 )
    {
      LOBYTE(p_group_id) = v48 != 0;
      __asan_report_store4(v46, p_group_id, v46);
    }
    *v47 = v44;
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 48),
      0);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v75,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "initAllRegionGroups",
    377);
  v49 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v75, this);
  v50 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v49,
          (const char (*)[23])" bonus_solution_map_: ");
  v51 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v50, &this->bonus_solution_map_);
  v52 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v51,
          (const char (*)[23])". group_solution_map_:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v52, &this->group_solution_map_);
  common::milog::MiLogStream::~MiLogStream(&v75);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 144));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 80));
  std::set<data::TreasureMapRegionExcelConfig const*>::~set((std::set<const data::TreasureMapRegionExcelConfig*> *const)(v1 + 208));
  if ( v76 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 381: range 0000000014964C4E-0000000014965611
std::optional<std::pair<unsigned int,unsigned int> > __cdecl TreasureMapActivity::getActiveRegion(
        const TreasureMapActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  common::milog::MiLogStream *v5; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rcx
  const ActivityTreasureMapExcelConfigMgr *v11; // rax
  uint32_t v12; // esi
  uint32_t unlock_day; // ecx
  uint32_t v14; // ecx
  __int64 schedule_id; // rsi
  uint32_t begin_time; // [rsp+2Ch] [rbp-E4h]
  uint32_t end_time; // [rsp+30h] [rbp-E0h]
  uint32_t now_time; // [rsp+34h] [rbp-DCh]
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+38h] [rbp-D8h]
  const proto::TreasureMapRegionBin *active_region; // [rsp+40h] [rbp-D0h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+48h] [rbp-C8h]
  std::pair<unsigned int,unsigned int> __t; // [rsp+50h] [rbp-C0h] BYREF
  std::optional<std::pair<unsigned int,unsigned int> > v24; // [rsp+58h] [rbp-B8h] BYREF
  std::optional<std::pair<unsigned int,unsigned int> > v25; // [rsp+64h] [rbp-ACh]
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-A0h] BYREF
  char v27[128]; // [rsp+90h] [rbp-80h] BYREF
  std::optional<std::pair<unsigned int,unsigned int> > result; // 0:rax.9

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 23 active_region_index:400 64 4 13 region_id:408";
  *(_QWORD *)(v1 + 16) = TreasureMapActivity::getActiveRegion;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  if ( !BaseActivity::isOpening(this, 0) )
  {
    std::optional<std::pair<unsigned int,unsigned int>>::optional(&v24, 0);
    v25 = v24;
  }
  else
  {
    ConfigMgr = TreasureMapActivity::getConfigMgr(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
      __asan_report_load4(&this->activity_id_);
    }
    config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(ConfigMgr, this->activity_id_);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      QuestComp = Player::getQuestComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->guide_child_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->guide_child_quest_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->guide_child_quest_id);
      }
      if ( PlayerQuestComp::getQuestState(QuestComp, config_ptr->guide_child_quest_id) != QUEST_STATE_FINISHED )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "getActiveRegion",
          397);
        v7 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v26, this);
        v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" guide quest:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v8,
               &config_ptr->guide_child_quest_id);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" not finished.");
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      *(_DWORD *)(v1 + 48) = proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_);
      if ( (unsigned int)proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_) > *(_DWORD *)(v1 + 48) )
      {
        active_region = proto::TreasureMapScheduleBin::region_list(&this->bin_data_, *(_DWORD *)(v1 + 48));
        *(_DWORD *)(v1 + 64) = proto::TreasureMapRegionBin::region_id(active_region);
        v11 = TreasureMapActivity::getConfigMgr(this);
        region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                              v11,
                              *(_DWORD *)(v1 + 64));
        if ( region_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->unlock_day >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)region_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config_ptr->unlock_day >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&region_config_ptr->unlock_day);
          }
          unlock_day = region_config_ptr->unlock_day;
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->schedule_id_);
          }
          begin_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, unlock_day);
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->treasure_days);
          }
          v14 = config_ptr->treasure_days + 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->schedule_id_);
          }
          end_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v14);
          now_time = common::tools::TimeUtils::getNow();
          if ( now_time < end_time && now_time >= begin_time )
          {
            __t = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v1 + 64), (unsigned int *)(v1 + 48));
            std::optional<std::pair<unsigned int,unsigned int>>::optional<std::pair<unsigned int,unsigned int>,true>(
              &v24,
              &__t);
            v25 = v24;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_map_activity.cpp",
              "getActiveRegion",
              421);
            if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->schedule_id_);
            }
            schedule_id = this->schedule_id_;
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->activity_id_);
            }
            common::milog::MiLogStream::operator()(
              &v26,
              stru_25516260.gap0,
              *(unsigned int *)(v1 + 64),
              begin_time,
              end_time,
              this->activity_id_,
              schedule_id);
            common::milog::MiLogStream::~MiLogStream(&v26);
            std::optional<std::pair<unsigned int,unsigned int>>::optional(&v24, (std::nullopt_t)&stru_25516260);
            v25 = v24;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "getActiveRegion",
            412);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->schedule_id_);
          }
          v12 = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->activity_id_);
          }
          common::milog::MiLogStream::operator()(
            &v26,
            stru_255158C0.gap0,
            *(unsigned int *)(v1 + 64),
            this->activity_id_,
            v12);
          common::milog::MiLogStream::~MiLogStream(&v26);
          std::optional<std::pair<unsigned int,unsigned int>>::optional(&v24, (std::nullopt_t)&stru_255158C0);
          v25 = v24;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "getActiveRegion",
          403);
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        v10 = this->schedule_id_;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->activity_id_);
        }
        common::milog::MiLogStream::operator()(&v26, stru_25516200.gap0, this->activity_id_, v10);
        common::milog::MiLogStream::~MiLogStream(&v26);
        std::optional<std::pair<unsigned int,unsigned int>>::optional(&v24, (std::nullopt_t)&stru_25516200);
        v25 = v24;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "getActiveRegion",
        391);
      v5 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v26, this);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v5, (const char (*)[33])&stru_25516120);
      common::milog::MiLogStream::~MiLogStream(&v26);
      std::optional<std::pair<unsigned int,unsigned int>>::optional(&v24, (std::nullopt_t)&stru_25516120);
      v25 = v24;
    }
  }
  result._M_payload._M_payload = v25._M_payload._M_payload;
  result._M_payload._M_engaged = v25._M_payload._M_engaged;
  if ( v27 == (char *)v1 )
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

// Line 429: range 0000000014965612-00000000149662ED
void __cdecl TreasureMapActivity::tryRegisterBonusGroups(TreasureMapActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  __int64 schedule_id; // rcx
  common::milog::MiLogStream *v5; // rcx
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  const ActivityTreasureMapExcelConfigMgr *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t SceneComp; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  Scene *v21; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 p_M_parent; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  unsigned int (__fastcall *v34)(common::milog::MiLogStream *, std::vector<unsigned int> *, __int64, _QWORD); // [rsp+8h] [rbp-128h]
  common::milog::MiLogStream *v35; // [rsp+10h] [rbp-120h]
  bool v36; // [rsp+10h] [rbp-120h]
  common::milog::MiLogStream *v37; // [rsp+10h] [rbp-120h]
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-105h] BYREF
  _DWORD __l[5]; // [rsp+2Ch] [rbp-104h] BYREF
  const google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range; // [rsp+48h] [rbp-E8h]
  const proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+50h] [rbp-E0h]
  const data::TreasureMapBonusRegionExcelConfig *bonus_config_ptr; // [rsp+58h] [rbp-D8h]
  std::vector<unsigned int> v45; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v46; // [rsp+80h] [rbp-B0h] BYREF
  char v47[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 bonus_id:447 64 16 13 scene_ptr:466";
  *(_QWORD *)(v1 + 16) = TreasureMapActivity::tryRegisterBonusGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v46,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "tryRegisterBonusGroups",
    430);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  schedule_id = this->schedule_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  common::milog::MiLogStream::operator()(
    &v46,
    "[TREASURE] acitivity_id %u, schedule_id %u",
    this->activity_id_,
    schedule_id);
  common::milog::MiLogStream::~MiLogStream(&v46);
  if ( TreasureMapActivity::isTreasureActive(this) )
  {
    ConfigMgr = TreasureMapActivity::getConfigMgr(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
      __asan_report_load4(&this->activity_id_);
    }
    if ( !data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(ConfigMgr, this->activity_id_) )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "tryRegisterBonusGroups",
        441);
      common::milog::MiLogStream::operator()(&v46, "[TREASURE] treasure map config not found");
      common::milog::MiLogStream::~MiLogStream(&v46);
      goto LABEL_53;
    }
    __for_range = proto::TreasureMapScheduleBin::challenge_list(&this->bin_data_);
    *(google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::const_iterator *)&__l[1] = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range);
    *(google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::const_iterator *)&__l[3] = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range);
    while ( 1 )
    {
      if ( !google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapBonusChallengeBin> *const)&__l[1],
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapBonusChallengeBin>::iterator *)&__l[3]) )
        goto LABEL_53;
      bonus_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapBonusChallengeBin> *const)&__l[1]);
      *(_DWORD *)(v1 + 48) = proto::TreasureMapBonusChallengeBin::config_id(bonus_data);
      v7 = TreasureMapActivity::getConfigMgr(this);
      bonus_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(
                           v7,
                           *(_DWORD *)(v1 + 48));
      if ( !bonus_config_ptr )
        break;
      if ( !proto::TreasureMapBonusChallengeBin::is_active(bonus_data) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryRegisterBonusGroups",
          457);
        v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v46,
                (const char (*)[19])"[TREASURE] bonus: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v1 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])off_25516500);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_29;
      }
      if ( proto::TreasureMapBonusChallengeBin::is_done(bonus_data) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryRegisterBonusGroups",
          462);
        v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v46,
                (const char (*)[19])"[TREASURE] bonus: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v1 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])off_25516540);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_29;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&bonus_config_ptr->group_id);
      }
      PlayerSceneComp::getPersonalSceneByGroupId((PlayerSceneComp *const)(v1 + 64), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryRegisterBonusGroups",
          469);
        v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v46,
                (const char (*)[19])"[TREASURE] bonus: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v1 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" group:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &bonus_config_ptr->group_id);
        v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v19,
                (const char (*)[17])" scene nullptr. ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v20, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
      else
      {
        v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        BlockGroupComp = Scene::getBlockGroupComp(v21);
        v35 = (common::milog::MiLogStream *)BlockGroupComp;
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp);
        p_M_parent = (unsigned __int64)&v35->log_->log_level_info_map_._M_t._M_impl._M_header._M_parent;
        if ( *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000) )
          p_M_parent = __asan_report_load8(&v35->log_->log_level_info_map_._M_t._M_impl._M_header._M_parent);
        v34 = *(unsigned int (__fastcall **)(common::milog::MiLogStream *, std::vector<unsigned int> *, __int64, _QWORD))p_M_parent;
        if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&bonus_config_ptr->group_id);
        }
        __l[0] = bonus_config_ptr->group_id;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&v45, (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l), &__a);
        v36 = v34(v35, &v45, 1LL, 0LL) != 0;
        std::vector<unsigned int>::~vector(&v45);
        std::allocator<unsigned int>::~allocator(&__a);
        if ( v36 )
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "tryRegisterBonusGroups",
            475);
          v24 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v46,
                  (const char (*)[34])"[TREASURE] register bonus group: ");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &bonus_config_ptr->group_id);
          v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v25,
                  (const char (*)[17])" failed. @bonus ");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v1 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v27, (const char (*)[3])". ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "tryRegisterBonusGroups",
            478);
          v29 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v46,
                  (const char (*)[34])"[TREASURE] register bonus group: ");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &bonus_config_ptr->group_id);
          v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" @bonus ");
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v31,
                  (const unsigned int *)(v1 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v32, (const char (*)[3])". ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
        v37 = operator<<(v28, this->player_);
        v33 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v37, v33);
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
LABEL_52:
      google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapBonusChallengeBin> *const)&__l[1]);
    }
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "tryRegisterBonusGroups",
      452);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v46, (const char (*)[19])"[TREASURE] bonus: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" config not found. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_29:
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v46);
    goto LABEL_52;
  }
  common::milog::MiLogStream::create(
    &v46,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "tryRegisterBonusGroups",
    434);
  v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v46,
         (const char (*)[38])"[TREASURE] end or not begin, player: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v5, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v46);
LABEL_53:
  if ( v47 == (char *)v1 )
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

// Line 483: range 00000000149662EE-00000000149670FD
void __cdecl TreasureMapActivity::tryRegisterMpGroups(TreasureMapActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  __int64 schedule_id; // rcx
  common::milog::MiLogStream *v5; // rcx
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  uint32_t active; // eax
  unsigned int v8; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const ActivityTreasureMapExcelConfigMgr *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // ecx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  Scene *v28; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 p_M_parent; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t revise_level; // [rsp+14h] [rbp-11Ch]
  unsigned int (__fastcall *v42)(common::milog::MiLogStream *, std::vector<unsigned int> *, _QWORD, _QWORD); // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream *v43; // [rsp+20h] [rbp-110h]
  common::milog::MiLogStream *v44; // [rsp+20h] [rbp-110h]
  bool v45; // [rsp+20h] [rbp-110h]
  common::milog::MiLogStream *v46; // [rsp+20h] [rbp-110h]
  std::allocator<unsigned int> __a; // [rsp+3Fh] [rbp-F1h] BYREF
  unsigned int val; // [rsp+40h] [rbp-F0h] BYREF
  uint32_t i; // [rsp+44h] [rbp-ECh]
  const proto::TreasureMapRegionBin *region_data; // [rsp+50h] [rbp-E0h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+58h] [rbp-D8h]
  std::vector<unsigned int> v54; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v55; // [rsp+80h] [rbp-B0h] BYREF
  char v56[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 13 region_id:502 48 4 15 mp_group_id:503 64 16 13 scene_ptr:526";
  *(_QWORD *)(v1 + 16) = TreasureMapActivity::tryRegisterMpGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v55,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "tryRegisterMpGroups",
    484);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  schedule_id = this->schedule_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  common::milog::MiLogStream::operator()(
    &v55,
    "[TREASURE] acitivity_id %u, schedule_id %u",
    this->activity_id_,
    schedule_id);
  common::milog::MiLogStream::~MiLogStream(&v55);
  if ( TreasureMapActivity::isTreasureActive(this) )
  {
    ConfigMgr = TreasureMapActivity::getConfigMgr(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
      __asan_report_load4(&this->activity_id_);
    }
    if ( !data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(ConfigMgr, this->activity_id_) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "tryRegisterMpGroups",
        495);
      common::milog::MiLogStream::operator()(&v55, "[TREASURE] treasure map config not found");
      common::milog::MiLogStream::~MiLogStream(&v55);
      goto LABEL_61;
    }
    for ( i = 0; ; ++i )
    {
      active = proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_);
      if ( i > active )
        goto LABEL_61;
      v8 = proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_);
      if ( i >= v8 )
        goto LABEL_61;
      region_data = proto::TreasureMapScheduleBin::region_list(&this->bin_data_, i);
      *(_DWORD *)(v1 + 32) = proto::TreasureMapRegionBin::region_id(region_data);
      *(_DWORD *)(v1 + 48) = TreasureMapActivity::getRegionMpGroupID(this, *(_DWORD *)(v1 + 32));
      if ( !*(_DWORD *)(v1 + 48) )
        break;
      if ( proto::TreasureMapRegionBin::is_mp_challenge_done(region_data) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryRegisterMpGroups",
          511);
        v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v55,
                (const char (*)[19])"[TREASURE] region ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v1 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])off_25516800);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_39;
      }
      v15 = TreasureMapActivity::getConfigMgr(this);
      region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                            v15,
                            *(_DWORD *)(v1 + 32));
      if ( !region_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryRegisterMpGroups",
          517);
        v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v55,
                (const char (*)[19])"[TREASURE] region ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v1 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v17,
                (const char (*)[18])" config nullptr. ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_39;
      }
      v18 = proto::TreasureMapRegionBin::current_progress(region_data);
      if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&region_config_ptr->mp_token_threshold);
      }
      if ( v18 < region_config_ptr->mp_token_threshold )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryRegisterMpGroups",
          522);
        v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v55,
                (const char (*)[19])"[TREASURE] region ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v1 + 32));
        v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" progress ");
        val = proto::TreasureMapRegionBin::current_progress(region_data);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v21,
                (const char (*)[16])" not reach mp. ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_39;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      PlayerSceneComp::getPersonalSceneByGroupId((PlayerSceneComp *const)(v1 + 64), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryRegisterMpGroups",
          529);
        v23 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v55,
                (const char (*)[22])"[TREASURE] mp group: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v1 + 48));
        v25 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v24,
                (const char (*)[25])" scene nullptr. @region ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v1 + 32));
        v27 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v26, (const char (*)[3])". ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v27, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      else
      {
        v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        BlockGroupComp = Scene::getBlockGroupComp(v28);
        v44 = (common::milog::MiLogStream *)BlockGroupComp;
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp);
        p_M_parent = (unsigned __int64)&v44->log_->log_level_info_map_._M_t._M_impl._M_header._M_parent;
        if ( *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000) )
          p_M_parent = __asan_report_load8(&v44->log_->log_level_info_map_._M_t._M_impl._M_header._M_parent);
        v42 = *(unsigned int (__fastcall **)(common::milog::MiLogStream *, std::vector<unsigned int> *, _QWORD, _QWORD))p_M_parent;
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr->revise_level);
        }
        revise_level = region_config_ptr->revise_level;
        val = *(_DWORD *)(v1 + 48);
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&v54, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
        v45 = v42(v44, &v54, revise_level, 0LL) != 0;
        std::vector<unsigned int>::~vector(&v54);
        std::allocator<unsigned int>::~allocator(&__a);
        if ( v45 )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "tryRegisterMpGroups",
            535);
          v31 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v55,
                  (const char (*)[31])"[TREASURE] register mp group: ");
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v31,
                  (const unsigned int *)(v1 + 48));
          v33 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v32,
                  (const char (*)[18])" failed. @region ");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v1 + 32));
          v35 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v34, (const char (*)[3])". ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "tryRegisterMpGroups",
            538);
          v36 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v55,
                  (const char (*)[31])"[TREASURE] register mp group: ");
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v36,
                  (const unsigned int *)(v1 + 48));
          v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v37,
                  (const char (*)[16])" done. @region ");
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v1 + 32));
          v35 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v39, (const char (*)[3])". ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
        v46 = operator<<(v35, this->player_);
        v40 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v46, v40);
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
LABEL_60:
      ;
    }
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "tryRegisterMpGroups",
      506);
    v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v55,
            (const char (*)[19])"[TREASURE] region ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" has no MP. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_39:
    operator<<(v12, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v55);
    goto LABEL_60;
  }
  common::milog::MiLogStream::create(
    &v55,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "tryRegisterMpGroups",
    488);
  v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v55,
         (const char (*)[38])"[TREASURE] end or not begin, player: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v5, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v55);
LABEL_61:
  if ( v56 == (char *)v1 )
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

// Line 543: range 00000000149670FE-00000000149684DD
void __cdecl TreasureMapActivity::tryRegisterActiveRegionGroups(TreasureMapActivity *const this, bool is_login)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t schedule_id; // esi
  std::pair<unsigned int,unsigned int> *v6; // rax
  std::pair<unsigned int,unsigned int> *v7; // rdx
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *v8; // rax
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type v9; // r14d
  const ActivityTreasureMapExcelConfigMgr *v10; // rdx
  const ActivityTreasureMapExcelConfigMgr *v11; // rcx
  proto::TreasureMapScheduleBin *p_bin_data; // rcx
  uint32_t v13; // esi
  __int64 activity_id; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v21; // rax
  std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr *v22; // rdx
  const google::protobuf::Map<unsigned int,bool> *v23; // rax
  const google::protobuf::Map<unsigned int,bool> *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  PlayerSceneComp *SceneComp; // rax
  std::vector<unsigned int>::size_type GroupSceneMap; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rcx
  Scene *v43; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v45; // rdx
  unsigned int (__fastcall *v46)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD); // r8
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rcx
  common::milog::MiLogStream *v52; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  google::protobuf::uint32 current_token; // [rsp+14h] [rbp-2ACh]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-2A0h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin_0; // [rsp+28h] [rbp-298h] BYREF
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *region_id; // [rsp+30h] [rbp-290h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *active_region_index; // [rsp+38h] [rbp-288h]
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-280h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+50h] [rbp-270h]
  const proto::TreasureMapRegionBin *region_data; // [rsp+58h] [rbp-268h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+60h] [rbp-260h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+68h] [rbp-258h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_0; // [rsp+70h] [rbp-250h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *v67; // [rsp+78h] [rbp-248h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+80h] [rbp-240h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+88h] [rbp-238h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+90h] [rbp-230h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *coins; // [rsp+98h] [rbp-228h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+A0h] [rbp-220h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+A8h] [rbp-218h] BYREF
  google::protobuf::Map<unsigned int,bool>::const_iterator b; // [rsp+B0h] [rbp-210h] BYREF
  common::milog::MiLogStream v75; // [rsp+D0h] [rbp-1F0h] BYREF
  char v76[464]; // [rsp+F0h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 28 prev_active_region_index:582 48 12 14 region_opt:546 80 24 14 groups_vec:586 144 24 19"
                        " done_groups_vec:590 208 24 13 coins_vec:591 272 24 8 iter:595 336 48 19 scene_group_map:609";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::tryRegisterActiveRegionGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862732] = -202116109;
  common::milog::MiLogStream::create(
    &v75,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "tryRegisterActiveRegionGroups",
    544);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  schedule_id = this->schedule_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  common::milog::MiLogStream::operator()(
    &v75,
    "[TREASURE] is_login %u, acitivity_id %u, schedule_id %u",
    is_login,
    this->activity_id_,
    schedule_id);
  common::milog::MiLogStream::~MiLogStream(&v75);
  *(std::optional<std::pair<unsigned int,unsigned int> > *)(v2 + 48) = TreasureMapActivity::getActiveRegion(this);
  if ( !std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "tryRegisterActiveRegionGroups",
      549);
    common::milog::MiLogStream::operator()(&v75, "no region active");
    common::milog::MiLogStream::~MiLogStream(&v75);
  }
  else
  {
    v6 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 48));
    v7 = v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v6, 8LL);
    }
    __in = *v7;
    region_id = std::get<0ul,unsigned int,unsigned int>(&__in);
    v8 = std::get<1ul,unsigned int,unsigned int>(&__in);
    active_region_index = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v9 = *active_region_index;
    if ( v9 < proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_) )
    {
      config_mgr = TreasureMapActivity::getConfigMgr(this);
      v10 = config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      if ( data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(v10, this->activity_id_) )
      {
        v11 = config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(region_id);
        }
        region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                              v11,
                              *region_id);
        if ( region_config_ptr )
        {
          p_bin_data = &this->bin_data_;
          if ( *(_BYTE *)(((unsigned __int64)active_region_index >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)active_region_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_region_index >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(active_region_index);
          }
          region_data = proto::TreasureMapScheduleBin::region_list(p_bin_data, *active_region_index);
          current_token = proto::TreasureMapRegionBin::current_progress(region_data);
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->token_num);
          }
          if ( current_token >= region_config_ptr->token_num )
          {
            common::milog::MiLogStream::create(
              &v75,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/treasure_map_activity.cpp",
              "tryRegisterActiveRegionGroups",
              579);
            if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->schedule_id_);
            }
            v13 = this->schedule_id_;
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->activity_id_);
            }
            activity_id = this->activity_id_;
            if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(region_id);
            }
            common::milog::MiLogStream::operator()(
              &v75,
              "[TREASURE] Region<%u> already done @activity<%u> schedule<%u>",
              *region_id,
              activity_id,
              v13);
            common::milog::MiLogStream::~MiLogStream(&v75);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->last_active_region_index_);
          }
          *(_DWORD *)(v2 + 32) = this->last_active_region_index_;
          if ( *(_BYTE *)(((unsigned __int64)active_region_index >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)active_region_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_region_index >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(active_region_index);
          }
          this->last_active_region_index_ = *active_region_index;
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "tryRegisterActiveRegionGroups",
            584);
          v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v75,
                  (const char (*)[34])"[TREASURE] active region index: [");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" ==> ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  &this->last_active_region_index_);
          v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"]");
          v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" player: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v20, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v75);
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(region_id);
          }
          if ( !TreasureMapActivity::getRegionMpGroupID(this, *region_id) )
            goto LABEL_50;
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->mp_token_threshold);
          }
          if ( current_token < region_config_ptr->mp_token_threshold )
          {
LABEL_50:
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 208));
            group_coins_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                                &this->region_to_group_coins_map_,
                                region_id);
            __for_range = group_coins_map;
            __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(group_coins_map)._M_cur;
            __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(group_coins_map)._M_cur;
            while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                      &__for_begin,
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0) )
            {
              v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
              v22 = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr *)v21;
              if ( ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&v21->second + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)v21 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v21->second + 3) >> 3)
                                                                + 0x7FFF8000) )
              {
                __asan_report_load_n(v21, 8LL);
              }
              __for_end._M_node = *v22;
              group_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
              coins = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
              v23 = proto::TreasureMapRegionBin::done_group_map(region_data);
              google::protobuf::Map<unsigned int,bool>::find(
                (google::protobuf::Map<unsigned int,bool>::const_iterator *)(v2 + 272),
                v23,
                group_id);
              v24 = proto::TreasureMapRegionBin::done_group_map(region_data);
              google::protobuf::Map<unsigned int,bool>::end(&b, v24);
              if ( google::protobuf::operator==(
                     (const google::protobuf::Map<unsigned int,bool>::const_iterator *)(v2 + 272),
                     &b) )
              {
                std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 80), group_id);
                std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 208), coins);
              }
              else
              {
                std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 144), group_id);
              }
              std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
            }
            common::milog::MiLogStream::create(
              &v75,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_map_activity.cpp",
              "tryRegisterActiveRegionGroups",
              606);
            v25 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v75,
                    (const char (*)[25])"[TREASURE] load groups: ");
            v26 = common::milog::MiLogStream::operator<<<unsigned int>(
                    v25,
                    (const std::vector<unsigned int> *)(v2 + 80));
            v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" coins: ");
            v28 = common::milog::MiLogStream::operator<<<unsigned int>(
                    v27,
                    (const std::vector<unsigned int> *)(v2 + 208));
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v28,
                    (const char (*)[16])". done groups: ");
            v30 = common::milog::MiLogStream::operator<<<unsigned int>(
                    v29,
                    (const std::vector<unsigned int> *)(v2 + 144));
            v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])"@region ");
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, region_id);
            v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" activity ");
            v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->activity_id_);
            v35 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v34,
                    (const char (*)[12])" scehdule: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &this->schedule_id_);
            common::milog::MiLogStream::~MiLogStream(&v75);
            std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 336));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            SceneComp = Player::getSceneComp(this->player_);
            GroupSceneMap = PlayerSceneComp::getGroupSceneMap(
                              SceneComp,
                              (const std::vector<unsigned int> *)(v2 + 80),
                              (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 336));
            if ( GroupSceneMap < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 80)) )
            {
              common::milog::MiLogStream::create(
                &v75,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/treasure_map_activity.cpp",
                "tryRegisterActiveRegionGroups",
                613);
              v38 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      &v75,
                      (const char (*)[20])"[TREASURE] groups: ");
              v39 = common::milog::MiLogStream::operator<<<unsigned int>(
                      v38,
                      (const std::vector<unsigned int> *)(v2 + 80));
              v40 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      v39,
                      (const char (*)[25])" invalid scene. @region ");
              v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, region_id);
              v42 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v41, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v42, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v75);
            }
            __for_range_0 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 336);
            __for_begin_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 336))._M_node;
            __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_0)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end) )
            {
              v67 = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
              scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v67);
              group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v67);
              if ( !std::operator==<Scene>(0LL, scene_ptr) )
              {
                v43 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
                BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v43);
                if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
                  BlockGroupComp = __asan_report_load8(BlockGroupComp);
                v45 = *(_QWORD *)BlockGroupComp + 96LL;
                if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
                  BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 96LL);
                v46 = *(unsigned int (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v45;
                if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
                {
                  BlockGroupComp = __asan_report_load4(&region_config_ptr->revise_level);
                }
                if ( v46(BlockGroupComp, group_vec, region_config_ptr->revise_level, 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v75,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/treasure_map_activity.cpp",
                    "tryRegisterActiveRegionGroups",
                    623);
                  v47 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                          &v75,
                          (const char (*)[29])"[TREASURE] register groups: ");
                  v48 = common::milog::MiLogStream::operator<<<unsigned int>(v47, group_vec);
                  v49 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                          v48,
                          (const char (*)[18])" failed. @region ");
                  v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, region_id);
                  v51 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v50,
                          (const char (*)[9])" player:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v52 = operator<<(v51, this->player_);
                  v53 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
                  common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v52, v53);
                  common::milog::MiLogStream::~MiLogStream(&v75);
                }
              }
              std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
            }
            std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 336));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 208));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "tryRegisterActiveRegionGroups",
            571);
          if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(region_id);
          }
          common::milog::MiLogStream::operator()(&v75, "[TREASURE] Region<%u> Config Not found", *region_id);
          common::milog::MiLogStream::~MiLogStream(&v75);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryRegisterActiveRegionGroups",
          564);
        common::milog::MiLogStream::operator()(&v75, "[TREASURE] base Config Not found");
        common::milog::MiLogStream::~MiLogStream(&v75);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "tryRegisterActiveRegionGroups",
        556);
      common::milog::MiLogStream::operator()(&v75, "[TREASURE] no region active");
      common::milog::MiLogStream::~MiLogStream(&v75);
    }
  }
  if ( v76 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 630: range 00000000149684DE-00000000149693A7
__int64 __fastcall TreasureMapActivity::queryGeneralRewardAddTokens(
        TreasureMapActivity *const this,
        uint32_t group_id,
        uint32_t *token_num,
        uint32_t *misc_drop_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  __int64 result; // rax
  uint32_t schedule_id; // esi
  uint32_t v15; // esi
  __int64 v16; // rsi
  uint32_t v17; // ecx
  uint32_t v18; // ecx
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  uint32_t v29; // edi
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *p_y; // rsi
  uint32_t v31; // esi
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v32; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v35; // dl
  __int64 v36; // rdx
  unsigned int v38; // r14d
  std::vector<unsigned int>::const_reference v39; // rax
  _DWORD *v40; // rdx
  std::vector<unsigned int>::const_reference v41; // rax
  _DWORD *v42; // rdx
  __int64 v43; // rsi
  uint32_t v44; // ecx
  char v45; // dl
  __int64 v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rcx
  int i; // [rsp+28h] [rbp-138h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> __y; // [rsp+30h] [rbp-130h] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-128h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+40h] [rbp-120h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v68; // [rsp+50h] [rbp-110h] BYREF
  char v69[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 12 bonus_id:634 64 4 13 region_id:642 80 4 13 rand_prob:681 96 4 12 rand_num:690 112 4 12"
                        " group_id:629 128 8 8 iter:666 160 8 13 coin_iter:674";
  *(_QWORD *)(v4 + 16) = TreasureMapActivity::queryGeneralRewardAddTokens;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 112) = group_id;
  config_mgr = TreasureMapActivity::getConfigMgr(this);
  *(_DWORD *)(v4 + 48) = ActivityTreasureMapExcelConfigMgr::getBonusIDByGroupID(config_mgr, *(_DWORD *)(v4 + 112));
  if ( *(_DWORD *)(v4 + 48) )
  {
    v7 = (*(_BYTE *)(((unsigned __int64)token_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)token_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_num >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store4(token_num, ((unsigned __int8)token_num & 7u) + 3, v7);
    *token_num = 0;
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "queryGeneralRewardAddTokens",
      638);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v68, (const char (*)[19])"[TREASURE] bonus: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])", group ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 112));
    v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v11,
            (const char (*)[25])" has no tokens. player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v12, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v68);
    result = 0LL;
    goto LABEL_75;
  }
  *(_DWORD *)(v4 + 64) = ActivityTreasureMapExcelConfigMgr::getRegionByGroupID(config_mgr, *(_DWORD *)(v4 + 112));
  if ( !*(_DWORD *)(v4 + 64) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "queryGeneralRewardAddTokens",
      645);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    schedule_id = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    common::milog::MiLogStream::operator()(
      &v68,
      "[TREASURE] group<%u> not belongs to any region @ activity %u, schedule %u",
      *(unsigned int *)(v4 + 112),
      this->activity_id_,
      schedule_id);
    common::milog::MiLogStream::~MiLogStream(&v68);
    result = 0xFFFFFFFFLL;
    goto LABEL_75;
  }
  region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                        config_mgr,
                        *(_DWORD *)(v4 + 64));
  if ( !region_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "queryGeneralRewardAddTokens",
      652);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    v15 = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    common::milog::MiLogStream::operator()(
      &v68,
      stru_255158C0.gap0,
      *(unsigned int *)(v4 + 64),
      this->activity_id_,
      v15);
    common::milog::MiLogStream::~MiLogStream(&v68);
    result = 0xFFFFFFFFLL;
    goto LABEL_75;
  }
  v16 = *(unsigned int *)(v4 + 64);
  if ( TreasureMapActivity::getRegionMpGroupID(this, v16) == *(_DWORD *)(v4 + 112) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config_ptr->token_num);
    }
    v17 = region_config_ptr->token_num;
    if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config_ptr->mp_token_threshold);
    }
    v18 = v17 - region_config_ptr->mp_token_threshold;
    v19 = *(_BYTE *)(((unsigned __int64)token_num >> 3) + 0x7FFF8000);
    LOBYTE(v16) = v19 != 0;
    v20 = (v19 != 0) & (unsigned __int8)((char)(((unsigned __int8)token_num & 7) + 3) >= v19);
    if ( (_BYTE)v20 )
      __asan_report_store4(token_num, v16, v20);
    *token_num = v18;
    v21 = (*(_BYTE *)(((unsigned __int64)misc_drop_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)misc_drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)misc_drop_id >> 3) + 0x7FFF8000));
    if ( (_BYTE)v21 )
      __asan_report_store4(misc_drop_id, ((unsigned __int8)misc_drop_id & 7u) + 3, v21);
    *misc_drop_id = 0;
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "queryGeneralRewardAddTokens",
      662);
    v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v68,
            (const char (*)[20])"[TREASURE] region: ");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 64));
    v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])", mp group ");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 112));
    v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v25, (const char (*)[15])", add tokens: ");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, token_num);
    v28 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v27,
            (const char (*)[29])" with no misc drop. player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v28, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v68);
LABEL_74:
    result = 0LL;
    goto LABEL_75;
  }
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v4 + 128) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find(&this->region_to_group_coins_map_, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v4 + 64));
  __y._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(&this->region_to_group_coins_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v4 + 128),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "queryGeneralRewardAddTokens",
      669);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    v29 = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      v29 = (_DWORD)this + 32;
      __asan_report_load4(&this->activity_id_);
    }
    common::milog::MiLogStream::operator()(
      &v68,
      "[TREASURE] region id<%u> not found for group %u @ activity %u, schedule %u",
      *(unsigned int *)(v4 + 64),
      *(unsigned int *)(v4 + 112),
      this->activity_id_,
      v29);
    common::milog::MiLogStream::~MiLogStream(&v68);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    group_coins_map = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v4 + 128))->second;
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v4 + 160) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                               group_coins_map,
                                                                               (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 112));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(group_coins_map)._M_cur;
    p_y = &__y;
    if ( !std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__y) )
    {
      v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 160));
      p_second = &v32->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second = v32->second;
      v35 = *(_BYTE *)(((unsigned __int64)token_num >> 3) + 0x7FFF8000);
      LOBYTE(p_y) = v35 != 0;
      v36 = (v35 != 0) & (unsigned __int8)((char)(((unsigned __int8)token_num & 7) + 3) >= v35);
      if ( (_BYTE)v36 )
        __asan_report_store4(token_num, p_y, v36);
      *token_num = second;
      *(_DWORD *)(v4 + 80) = 0;
      for ( i = 0;
            i < std::vector<unsigned int>::size(&region_config_ptr->token_num_list)
         && i < std::vector<unsigned int>::size(&region_config_ptr->misc_drop_prob_list);
            ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)token_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)token_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(token_num);
        }
        v38 = *token_num;
        v39 = std::vector<unsigned int>::operator[](&region_config_ptr->token_num_list, i);
        v40 = v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        if ( v38 == *v40 )
        {
          v41 = std::vector<unsigned int>::operator[](&region_config_ptr->misc_drop_prob_list, i);
          v42 = v41;
          if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v41);
          }
          *(_DWORD *)(v4 + 80) = *v42;
          break;
        }
      }
      v43 = 10000LL;
      *(_DWORD *)(v4 + 96) = common::tools::RandomUtils::rand<unsigned int>(1u, 0x2710u);
      if ( *(_DWORD *)(v4 + 96) <= *(_DWORD *)(v4 + 80) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->misc_drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr->misc_drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr->misc_drop_id);
        }
        v44 = region_config_ptr->misc_drop_id;
        v45 = *(_BYTE *)(((unsigned __int64)misc_drop_id >> 3) + 0x7FFF8000);
        LOBYTE(v43) = v45 != 0;
        v46 = (v45 != 0) & (unsigned __int8)((char)(((unsigned __int8)misc_drop_id & 7) + 3) >= v45);
        if ( (_BYTE)v46 )
          __asan_report_store4(misc_drop_id, v43, v46);
        *misc_drop_id = v44;
      }
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "queryGeneralRewardAddTokens",
        695);
      v47 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v68,
              (const char (*)[20])"[TREASURE] region: ");
      v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, (const unsigned int *)(v4 + 64));
      v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v48, (const char (*)[14])", spot group ");
      v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v49,
              (const unsigned int *)(v4 + 112));
      v51 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v50, (const char (*)[15])", add tokens: ");
      v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, token_num);
      v53 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v52, (const char (*)[7])"prob [");
      v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, (const unsigned int *)(v4 + 80));
      v55 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v54, (const char (*)[12])"] vs rand [");
      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v4 + 96));
      v57 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v56, (const char (*)[17])"] misc_drop_id: ");
      v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, misc_drop_id);
      v59 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v58, (const char (*)[10])" player: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v59, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v68);
      goto LABEL_74;
    }
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "queryGeneralRewardAddTokens",
      677);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    v31 = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    common::milog::MiLogStream::operator()(
      &v68,
      "[TREASURE] group id<%u> coins not found @ activity %u, schedule %u",
      *(unsigned int *)(v4 + 112),
      this->activity_id_,
      v31);
    common::milog::MiLogStream::~MiLogStream(&v68);
    result = 0xFFFFFFFFLL;
  }
LABEL_75:
  if ( v69 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 704: range 00000000149693A8-000000001496B226
void __cdecl TreasureMapActivity::onTakeGeneralRewardEvent(
        TreasureMapActivity *const this,
        const TakeGeneralRewardEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint32_t Uid; // eax
  void *const **v9; // rax
  void *const **v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  uint32_t schedule_id; // esi
  proto::TreasureMapScheduleBin *p_bin_data; // rcx
  Scene *v18; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 p_M_left; // rax
  uint32_t v21; // edi
  char *v22; // rsi
  bool *v23; // rax
  _BYTE *v24; // rdx
  char v25; // cl
  PlayerSceneComp *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  Scene *v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t v39; // ecx
  uint32_t v40; // edx
  Scene *v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  uint32_t v48; // eax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rcx
  int v52; // r14d
  Scene *v53; // rax
  SceneBlockGroupComp *v54; // rax
  unsigned __int64 p_M_parent; // rax
  bool v56; // r14
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rcx
  common::milog::MiLogStream *v60; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  uint32_t v62; // eax
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-2F0h]
  unsigned int (__fastcall *__l)(common::milog::MiLogStream *, unsigned __int64, _QWORD, _QWORD); // [rsp+10h] [rbp-2F0h]
  unsigned int (__fastcall *v65)(common::milog::MiLogStream *, unsigned __int64, _QWORD); // [rsp+20h] [rbp-2E0h]
  uint32_t revise_level; // [rsp+20h] [rbp-2E0h]
  common::milog::MiLogStream *v67; // [rsp+28h] [rbp-2D8h]
  bool v68; // [rsp+28h] [rbp-2D8h]
  std::vector<unsigned int>::size_type v69; // [rsp+28h] [rbp-2D8h]
  common::milog::MiLogStream *v70; // [rsp+28h] [rbp-2D8h]
  common::milog::MiLogStream *v71; // [rsp+28h] [rbp-2D8h]
  std::allocator<unsigned int> __a; // [rsp+4Bh] [rbp-2B5h] BYREF
  std::initializer_list<unsigned int> v74; // [rsp+4Ch] [rbp-2B4h] BYREF
  unsigned int valid_count; // [rsp+5Ch] [rbp-2A4h]
  uint32_t current_token; // [rsp+60h] [rbp-2A0h]
  uint32_t left_token; // [rsp+64h] [rbp-29Ch]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+68h] [rbp-298h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end_0; // [rsp+70h] [rbp-290h] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+78h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *active_region_id; // [rsp+80h] [rbp-280h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *region_index; // [rsp+88h] [rbp-278h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+90h] [rbp-270h]
  proto::TreasureMapRegionBin *region_data; // [rsp+98h] [rbp-268h]
  google::protobuf::Map<unsigned int,bool> *done_group_map; // [rsp+A0h] [rbp-260h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+A8h] [rbp-258h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_1; // [rsp+B0h] [rbp-250h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *v88; // [rsp+B8h] [rbp-248h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr_0; // [rsp+C0h] [rbp-240h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec_0; // [rsp+C8h] [rbp-238h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_0; // [rsp+D0h] [rbp-230h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+D8h] [rbp-228h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+E0h] [rbp-220h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+E8h] [rbp-218h]
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range; // [rsp+F0h] [rbp-210h]
  proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+F8h] [rbp-208h]
  proto::TreasureMapDetectorData *data; // [rsp+100h] [rbp-200h]
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::iterator __for_end; // [rsp+108h] [rbp-1F8h] BYREF
  char v99[496]; // [rsp+110h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 4 12 group_id:705 48 4 13 region_id:744 64 4 15 mp_group_id:771 80 12 14 region_opt:750 11"
                        "2 16 13 scene_ptr:713 144 16 16 mp_scene_ptr:846 176 24 14 groups_vec:800 240 24 13 mp_notify:78"
                        "2 304 32 10 notify:734 368 48 19 scene_group_map:801";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::onTakeGeneralRewardEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862728] = -218959360;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862733] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->group_id);
  }
  *(_DWORD *)(v2 + 32) = event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->gadget_id);
  }
  HIDWORD(v74._M_array) = event->gadget_id;
  if ( TreasureMapActivity::isTreasureGroup(this, *(_DWORD *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::getPersonalSceneByGroupId((PlayerSceneComp *const)(v2 + 112), SceneComp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "onTakeGeneralRewardEvent",
        716);
      v6 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(
             (common::milog::MiLogStream *const)(v2 + 304),
             this);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             v6,
             (const char (*)[25])" scene nullptr of group:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      goto LABEL_135;
    }
    config_mgr = TreasureMapActivity::getConfigMgr(this);
    LODWORD(v74._M_len) = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::size(&config_mgr->treasure_map_region_excel_config_map);
    HIDWORD(v74._M_len) = ActivityTreasureMapExcelConfigMgr::getBonusIDByGroupID(config_mgr, *(_DWORD *)(v2 + 32));
    if ( HIDWORD(v74._M_len) )
    {
      __for_range = proto::TreasureMapScheduleBin::mutable_challenge_list(&this->bin_data_);
      __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator!=(
                (const google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin> *const)&__for_end_0,
                &__for_end) )
      {
        bonus_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator*((const google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin> *const)&__for_end_0);
        if ( HIDWORD(v74._M_len) == proto::TreasureMapBonusChallengeBin::config_id(bonus_data) )
        {
          proto::TreasureMapBonusChallengeBin::set_is_challenge_open(bonus_data, 1);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "onTakeGeneralRewardEvent",
            731);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Uid = Player::getUid(this->player_);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)(v2 + 304),
            "[TREASURE] Bonus<%u> group<%u> opened. player: %u",
            HIDWORD(v74._M_len),
            *(unsigned int *)(v2 + 32),
            Uid);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
          proto::TreasureMapDetectorDataNotify::TreasureMapDetectorDataNotify((proto::TreasureMapDetectorDataNotify *const)(v2 + 304));
          data = proto::TreasureMapDetectorDataNotify::mutable_data((proto::TreasureMapDetectorDataNotify *const)(v2 + 304));
          proto::TreasureMapDetectorData::set_region_id(data, HIDWORD(v74._M_len) + LODWORD(v74._M_len));
          TreasureMapActivity::worldBroadcastProto(this, (const google::protobuf::Message *)(v2 + 304));
          proto::TreasureMapDetectorDataNotify::~TreasureMapDetectorDataNotify((proto::TreasureMapDetectorDataNotify *const)(v2 + 304));
          goto LABEL_135;
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator++((google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin> *const)&__for_end_0);
      }
      goto LABEL_135;
    }
    *(_DWORD *)(v2 + 48) = ActivityTreasureMapExcelConfigMgr::getRegionByGroupID(config_mgr, *(_DWORD *)(v2 + 32));
    if ( !*(_DWORD *)(v2 + 48) )
    {
LABEL_135:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
      goto LABEL_136;
    }
    *(std::optional<std::pair<unsigned int,unsigned int> > *)(v2 + 80) = TreasureMapActivity::getActiveRegion(this);
    if ( !std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "onTakeGeneralRewardEvent",
        753);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 304),
        "[TREASURE] no region active");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      goto LABEL_135;
    }
    v9 = (void *const **)std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80));
    v10 = v9;
    if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)v9 + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v9 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v9 + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v9, 8LL);
    }
    __for_end.it_ = *v10;
    active_region_id = std::get<0ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
    region_index = std::get<1ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
    if ( *(_BYTE *)(((unsigned __int64)active_region_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)active_region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_region_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(active_region_id);
    }
    if ( *active_region_id != *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "onTakeGeneralRewardEvent",
        759);
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[19])"[TREASURE] group: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" @region: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" not Active. ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v15, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      goto LABEL_135;
    }
    region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                          config_mgr,
                          *(_DWORD *)(v2 + 48));
    if ( !region_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "onTakeGeneralRewardEvent",
        766);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      schedule_id = this->schedule_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 304),
        stru_255158C0.gap0,
        *(unsigned int *)(v2 + 48),
        this->activity_id_,
        schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      goto LABEL_135;
    }
    p_bin_data = &this->bin_data_;
    if ( *(_BYTE *)(((unsigned __int64)region_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)region_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(region_index);
    }
    region_data = proto::TreasureMapScheduleBin::mutable_region_list(p_bin_data, *region_index);
    *(_DWORD *)(v2 + 64) = TreasureMapActivity::getRegionMpGroupID(this, *(_DWORD *)(v2 + 48));
    if ( *(_DWORD *)(v2 + 32) == *(_DWORD *)(v2 + 64) )
    {
      proto::TreasureMapRegionBin::set_is_mp_challenge_open(region_data, 1);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "onTakeGeneralRewardEvent",
        775);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 304),
        "[TREASURE] Region<%u> mp group %u is opened.",
        *(unsigned int *)(v2 + 48),
        *(unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      TreasureMapActivity::notifyHostInfo(this);
      if ( !proto::TreasureMapScheduleBin::is_mp_challenge_touched(&this->bin_data_) )
      {
        proto::TreasureMapScheduleBin::set_is_mp_challenge_touched(&this->bin_data_, 1);
        proto::TreasureMapMpChallengeNotify::TreasureMapMpChallengeNotify((proto::TreasureMapMpChallengeNotify *const)(v2 + 240));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 240));
        proto::TreasureMapMpChallengeNotify::~TreasureMapMpChallengeNotify((proto::TreasureMapMpChallengeNotify *const)(v2 + 240));
      }
      BaseActivity::notifyClientData(this, 0);
    }
    else
    {
      v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      BlockGroupComp = Scene::getBlockGroupComp(v18);
      v67 = (common::milog::MiLogStream *)BlockGroupComp;
      if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
        __asan_report_load8(BlockGroupComp);
      p_M_left = (unsigned __int64)&v67->log_->log_level_info_map_._M_t._M_impl._M_header._M_left;
      if ( *(_BYTE *)((p_M_left >> 3) + 0x7FFF8000) )
        p_M_left = __asan_report_load8(&v67->log_->log_level_info_map_._M_t._M_impl._M_header._M_left);
      v65 = *(unsigned int (__fastcall **)(common::milog::MiLogStream *, unsigned __int64, _QWORD))p_M_left;
      LODWORD(v74._M_array) = *(_DWORD *)(v2 + 32);
      __la._M_array = (std::initializer_list<unsigned int>::iterator)&v74;
      __la._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 240), __la, &__a);
      v68 = v65(v67, v2 + 240, 0LL) != 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 240));
      std::allocator<unsigned int>::~allocator(&__a);
      if ( v68 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "onTakeGeneralRewardEvent",
          792);
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        v21 = this->schedule_id_;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          v21 = (_DWORD)this + 32;
          __asan_report_load4(&this->activity_id_);
        }
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v2 + 304),
          "[TREASURE] region id<%u> unreg group %u failed. @ activity %u, schedule %u",
          *(unsigned int *)(v2 + 48),
          *(unsigned int *)(v2 + 32),
          this->activity_id_,
          v21);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      }
      done_group_map = proto::TreasureMapRegionBin::mutable_done_group_map(region_data);
      v22 = (char *)(v2 + 32);
      v23 = google::protobuf::Map<unsigned int,bool>::operator[](
              done_group_map,
              (const google::protobuf::Map<unsigned int,bool>::key_type *)(v2 + 32));
      v24 = v23;
      v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
      if ( v25 != 0 && ((unsigned __int8)v23 & 7) >= v25 )
      {
        LOBYTE(v22) = v25 != 0;
        __asan_report_store1(v23, v22, v23);
      }
      *v24 = 1;
    }
    group_coins_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                        &this->region_to_group_coins_map_,
                        (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
    common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,unsigned int>>(
      (std::vector<unsigned int> *)(v2 + 176),
      group_coins_map);
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 368));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v26 = Player::getSceneComp(this->player_);
    valid_count = PlayerSceneComp::getGroupSceneMap(
                    v26,
                    (const std::vector<unsigned int> *)(v2 + 176),
                    (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 368));
    v69 = valid_count;
    if ( v69 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 176)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "onTakeGeneralRewardEvent",
        805);
      v27 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[20])"[TREASURE] groups: ");
      v28 = common::milog::MiLogStream::operator<<<unsigned int>(v27, (const std::vector<unsigned int> *)(v2 + 176));
      v29 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v28,
              (const char (*)[25])" invalid scene. player_ ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v29, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    }
    current_token = proto::TreasureMapRegionBin::current_progress(region_data);
    if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config_ptr->token_num);
    }
    TreasureMapActivity::writeRegionProgressLog(
      this,
      *(_DWORD *)(v2 + 48),
      *(_DWORD *)(v2 + 32),
      current_token,
      region_config_ptr->token_num);
    if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config_ptr->token_num);
    }
    if ( current_token < region_config_ptr->token_num )
    {
      if ( !*(_DWORD *)(v2 + 64) )
        goto LABEL_127;
      if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&region_config_ptr->mp_token_threshold);
      }
      if ( current_token >= region_config_ptr->mp_token_threshold )
      {
        __for_range_1 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 368);
        __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 368))._M_node;
        __for_end_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end_0) )
        {
          v88 = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
          scene_ptr_0 = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v88);
          group_vec_0 = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v88);
          if ( !std::operator==<Scene>(0LL, scene_ptr_0) )
          {
            v41 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr_0);
            v42 = (unsigned __int64)Scene::getBlockGroupComp(v41);
            if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
              v42 = __asan_report_load8(v42);
            v43 = *(_QWORD *)v42 + 104LL;
            if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
              v42 = __asan_report_load8(*(_QWORD *)v42 + 104LL);
            if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v43)(
                   v42,
                   group_vec_0,
                   1LL) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 304),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/treasure_map_activity.cpp",
                "onTakeGeneralRewardEvent",
                842);
              v44 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      (common::milog::MiLogStream *const)(v2 + 304),
                      (const char (*)[31])"[TREASURE] unregister groups: ");
              v45 = common::milog::MiLogStream::operator<<<unsigned int>(v44, group_vec_0);
              v46 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v45,
                      (const char (*)[18])" failed. player_ ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v70 = operator<<(v46, this->player_);
              v47 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr_0);
              common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v70, v47);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
            }
          }
          std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v48 = (unsigned int)Player::getSceneComp(this->player_);
        PlayerSceneComp::getPersonalSceneByGroupId((PlayerSceneComp *const)(v2 + 144), v48);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "onTakeGeneralRewardEvent",
            849);
          v49 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v2 + 304),
                  (const char (*)[22])"[TREASURE] mp group: ");
          v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v49,
                  (const unsigned int *)(v2 + 64));
          v51 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v50,
                  (const char (*)[25])" scene nullptr. player_ ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v51, this->player_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
          v52 = 0;
        }
        else
        {
          v53 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          v54 = Scene::getBlockGroupComp(v53);
          v71 = (common::milog::MiLogStream *)v54;
          if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v54);
          p_M_parent = (unsigned __int64)&v71->log_->log_level_info_map_._M_t._M_impl._M_header._M_parent;
          if ( *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000) )
            p_M_parent = __asan_report_load8(&v71->log_->log_level_info_map_._M_t._M_impl._M_header._M_parent);
          __l = *(unsigned int (__fastcall **)(common::milog::MiLogStream *, unsigned __int64, _QWORD, _QWORD))p_M_parent;
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->revise_level);
          }
          revise_level = region_config_ptr->revise_level;
          LODWORD(v74._M_array) = *(_DWORD *)(v2 + 64);
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            (std::vector<unsigned int> *const)(v2 + 240),
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v74),
            &__a);
          v56 = __l(v71, v2 + 240, revise_level, 0LL) != 0;
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 240));
          std::allocator<unsigned int>::~allocator(&__a);
          if ( v56 )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 304),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/treasure_map_activity.cpp",
              "onTakeGeneralRewardEvent",
              854);
            v57 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    (common::milog::MiLogStream *const)(v2 + 304),
                    (const char (*)[32])"[TREASURE] register mp groups: ");
            v58 = common::milog::MiLogStream::operator<<<unsigned int>(
                    v57,
                    (const std::vector<unsigned int> *)(v2 + 176));
            v59 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v58,
                    (const char (*)[18])" failed. player_ ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v60 = operator<<(v59, this->player_);
            v61 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v60, v61);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
            v52 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 304),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_map_activity.cpp",
              "onTakeGeneralRewardEvent",
              858);
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_group_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)region_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_group_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&region_config_ptr->mp_group_id);
            }
            common::milog::MiLogStream::operator()(
              (common::milog::MiLogStream *const)(v2 + 304),
              "[TREASURE] Region<%u> start MP group %u",
              *(unsigned int *)(v2 + 48),
              region_config_ptr->mp_group_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
            v52 = 1;
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 144));
        if ( v52 != 1 )
          goto LABEL_134;
      }
      else
      {
LABEL_127:
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "onTakeGeneralRewardEvent",
          862);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v2 + 304),
          "[TREASURE] Region<%u> fin @group %u",
          *(unsigned int *)(v2 + 48),
          *(unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      }
    }
    else
    {
      __for_range_0 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 368);
      __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 368))._M_node;
      __for_end_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end_0) )
      {
        __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
        scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        if ( !std::operator==<Scene>(0LL, scene_ptr) )
        {
          v30 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
          v31 = (unsigned __int64)Scene::getBlockGroupComp(v30);
          if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
            v31 = __asan_report_load8(v31);
          v32 = *(_QWORD *)v31 + 104LL;
          if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
            v31 = __asan_report_load8(*(_QWORD *)v31 + 104LL);
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD))v32)(
                 v31,
                 group_vec,
                 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 304),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/treasure_map_activity.cpp",
              "onTakeGeneralRewardEvent",
              819);
            v33 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    (common::milog::MiLogStream *const)(v2 + 304),
                    (const char (*)[31])"[TREASURE] unregister groups: ");
            v34 = common::milog::MiLogStream::operator<<<unsigned int>(v33, group_vec);
            v35 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v34,
                    (const char (*)[18])" failed. player_ ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v36 = operator<<(v35, this->player_);
            v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
            common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v36, v37);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
          }
        }
        std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
      }
      TreasureMapActivity::notifyDetectorData(this, 1);
      TreasureMapActivity::onFinishRegion(this);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "onTakeGeneralRewardEvent",
        825);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 304),
        "[TREASURE] Region<%u> done @group %u",
        *(unsigned int *)(v2 + 48),
        *(unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      v39 = *(_DWORD *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        WatcherComp = (PlayerWatcherComp *)&this->schedule_id_;
        __asan_report_load4(&this->schedule_id_);
      }
      v40 = this->schedule_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        WatcherComp = (PlayerWatcherComp *)&this->activity_id_;
        __asan_report_load4(&this->activity_id_);
      }
      PlayerWatcherComp::triggerDoneTreasureMapRegion(WatcherComp, this->activity_id_, v40, v39);
      TreasureMapActivity::tryUnlockBonusRegions(this, 1);
      TreasureMapActivity::tryRegisterActiveRegionGroups(this, 0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config_ptr->token_num);
    }
    if ( current_token >= region_config_ptr->token_num )
      v62 = 0;
    else
      v62 = region_config_ptr->token_num - current_token;
    left_token = v62;
    TreasureMapActivity::tryGrantRandomFragments(this, region_config_ptr, v62);
    TreasureMapActivity::notifyDetectorData(this, 0);
LABEL_134:
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 368));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
    goto LABEL_135;
  }
LABEL_136:
  if ( v99 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
};

// Line 873: range 000000001496B228-000000001496C3D6
void __cdecl TreasureMapActivity::notifyDetectorData(TreasureMapActivity *const this, bool is_finish_region)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::pair<unsigned int,unsigned int> *v6; // rax
  std::pair<unsigned int,unsigned int> *v7; // rdx
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *v8; // rax
  proto::TreasureMapScheduleBin *p_bin_data; // rcx
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  __int64 schedule_id; // rcx
  const data::ActivityTreasureMapExcelConfigMgrBase *v12; // rdi
  uint32_t v13; // esi
  __int64 activity_id; // rcx
  bool is_region_detected; // al
  proto::Vector *v16; // rax
  uint32_t v17; // ecx
  char v18; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  const std::pair<unsigned int const,GadgetScriptConfig> *v23; // rax
  uint32_t *p_gadget_id; // rax
  uint32_t gadget_id; // ecx
  Vector3 *p_pos; // r14
  proto::Vector *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rcx
  int v35; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v36; // rax
  std::pair<unsigned int const,unsigned int> *v37; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rcx
  const std::pair<unsigned int const,GadgetScriptConfig> *v42; // rax
  uint32_t *v43; // rax
  uint32_t v44; // ecx
  Vector3 *v45; // r14
  proto::Vector *v46; // rax
  int v47; // r14d
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+18h] [rbp-3B8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+20h] [rbp-3B0h] BYREF
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_begin_1; // [rsp+28h] [rbp-3A8h] BYREF
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_end_1; // [rsp+30h] [rbp-3A0h] BYREF
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *region_id; // [rsp+38h] [rbp-398h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *region_index; // [rsp+40h] [rbp-390h]
  proto::TreasureMapRegionBin *region_data; // [rsp+48h] [rbp-388h]
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+50h] [rbp-380h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+58h] [rbp-378h]
  proto::TreasureMapDetectorData *data; // [rsp+60h] [rbp-370h]
  const google::protobuf::Map<unsigned int,bool> *done_group_map; // [rsp+68h] [rbp-368h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+70h] [rbp-360h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+78h] [rbp-358h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+80h] [rbp-350h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *coins; // [rsp+88h] [rbp-348h]
  const GroupScriptConfig *group_script_config_ptr_0; // [rsp+90h] [rbp-340h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *gadget_config_map_0; // [rsp+98h] [rbp-338h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_1; // [rsp+A0h] [rbp-330h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id_0; // [rsp+A8h] [rbp-328h]
  std::tuple_element<1,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_0; // [rsp+B0h] [rbp-320h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+B8h] [rbp-318h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *gadget_config_map; // [rsp+C0h] [rbp-310h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range; // [rsp+C8h] [rbp-308h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+D0h] [rbp-300h]
  std::tuple_element<1,std::pair<unsigned int const,GadgetScriptConfig> >::type *config; // [rsp+D8h] [rbp-2F8h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+E0h] [rbp-2F0h] BYREF
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+E8h] [rbp-2E8h] BYREF
  std::shared_ptr<Config> v76; // [rsp+F0h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v77; // [rsp+100h] [rbp-2D0h] BYREF
  std::pair<unsigned int const,GadgetScriptConfig> v78; // [rsp+120h] [rbp-2B0h] BYREF
  char v79[240]; // [rsp+2E0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 mp_group_id:911 64 12 14 region_opt:874 96 12 14 center_pos:902 128 32 10 notify:897";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::notifyDetectorData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862725] = -202116109;
  *(std::optional<std::pair<unsigned int,unsigned int> > *)(v2 + 64) = TreasureMapActivity::getActiveRegion(this);
  if ( !std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "notifyDetectorData",
      877);
    v5 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v77, this);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v5, (const char (*)[17])"no region active");
    common::milog::MiLogStream::~MiLogStream(&v77);
    goto LABEL_85;
  }
  v6 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 64));
  v7 = v6;
  if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v6, 8LL);
  }
  __in = *v7;
  region_id = std::get<0ul,unsigned int,unsigned int>(&__in);
  v8 = std::get<1ul,unsigned int,unsigned int>(&__in);
  region_index = v8;
  p_bin_data = &this->bin_data_;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  region_data = proto::TreasureMapScheduleBin::mutable_region_list(p_bin_data, *region_index);
  ConfigMgr = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
    __asan_report_load4(&this->activity_id_);
  }
  config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(ConfigMgr, this->activity_id_);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "notifyDetectorData",
      886);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    schedule_id = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    common::milog::MiLogStream::operator()(
      &v77,
      "[TREASURE] treasure map config not found @activity_id<%u> schedule_id<%u>",
      this->activity_id_,
      schedule_id);
    common::milog::MiLogStream::~MiLogStream(&v77);
    goto LABEL_85;
  }
  v12 = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
  {
    v12 = (const data::ActivityTreasureMapExcelConfigMgrBase *)region_id;
    __asan_report_load4(region_id);
  }
  region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(v12, *region_id);
  if ( region_config_ptr )
  {
    proto::TreasureMapDetectorDataNotify::TreasureMapDetectorDataNotify((proto::TreasureMapDetectorDataNotify *const)(v2 + 128));
    data = proto::TreasureMapDetectorDataNotify::mutable_data((proto::TreasureMapDetectorDataNotify *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(region_id);
    }
    proto::TreasureMapDetectorData::set_region_id(data, *region_id);
    if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config_ptr->region_radius);
    }
    proto::TreasureMapDetectorData::set_radius(data, region_config_ptr->region_radius);
    is_region_detected = proto::TreasureMapRegionBin::is_region_detected(region_data);
    proto::TreasureMapDetectorData::set_is_region_detected(data, is_region_detected);
    Vector3::Vector3((Vector3 *const)(v2 + 96), &region_config_ptr->region_center);
    v16 = proto::TreasureMapDetectorData::mutable_center_pos(data);
    Vector3::toClient((const Vector3 *const)(v2 + 96), v16);
    if ( is_finish_region )
    {
      proto::TreasureMapDetectorData::set_is_region_detected(data, 0);
      TreasureMapActivity::worldBroadcastProto(this, (const google::protobuf::Message *)(v2 + 128));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(region_id);
      }
      *(_DWORD *)(v2 + 48) = TreasureMapActivity::getRegionMpGroupID(this, *region_id);
      if ( !*(_DWORD *)(v2 + 48) )
        goto LABEL_41;
      v17 = proto::TreasureMapRegionBin::current_progress(region_data);
      if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&region_config_ptr->mp_token_threshold);
      }
      if ( v17 >= region_config_ptr->mp_token_threshold )
        v18 = 1;
      else
LABEL_41:
        v18 = 0;
      if ( v18 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v76);
        v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
        group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                    &v19->design_config.lua_config_mgr,
                                    *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v76);
        if ( !group_script_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v77,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "notifyDetectorData",
            918);
          v20 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v77,
                  (const char (*)[47])"[TREASURE] group script config nullptr @group ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v2 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" player: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v22, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v77);
          goto LABEL_84;
        }
        gadget_config_map = &group_script_config_ptr->gadget_config_map;
        __for_range = &group_script_config_ptr->gadget_config_map;
        __for_end_1._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr->gadget_config_map)._M_cur;
        __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,GadgetScriptConfig>::end(&group_script_config_ptr->gadget_config_map)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                  &__for_end_1,
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)&__for_end) )
        {
          v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(&__for_end_1);
          std::pair<unsigned int const,GadgetScriptConfig>::pair(&v78, v23);
          config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(&v78);
          config = std::get<1ul,unsigned int const,GadgetScriptConfig>(&v78);
          p_gadget_id = &config->gadget_id;
          if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(p_gadget_id);
          }
          gadget_id = config->gadget_id;
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->reward_worktop_gadget_id);
          }
          if ( gadget_id == config_ptr->reward_worktop_gadget_id )
          {
            p_pos = &config->pos;
            v27 = proto::TreasureMapDetectorData::add_spot_list(data);
            Vector3::toClient(p_pos, v27);
            common::milog::MiLogStream::create(
              &v77,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_map_activity.cpp",
              "notifyDetectorData",
              927);
            v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v77,
                    (const char (*)[19])"[TREASURE] Region ");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, region_id);
            v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])off_25517BE0);
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v2 + 48));
            v32 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])" spot: ");
            v33 = operator<<(v32, &config->pos);
            v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])" player: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v34, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v77);
            v35 = 0;
          }
          else
          {
            v35 = 1;
          }
          std::pair<unsigned int const,GadgetScriptConfig>::~pair(&v78);
          if ( v35 != 1 )
            break;
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(&__for_end_1);
        }
      }
      else
      {
        done_group_map = proto::TreasureMapRegionBin::done_group_map(region_data);
        group_coins_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                            &this->region_to_group_coins_map_,
                            region_id);
        __for_range_0 = group_coins_map;
        __for_begin_0._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(group_coins_map)._M_cur;
        __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(group_coins_map)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_0);
          v37 = v36;
          if ( ((unsigned __int8)v36 & 7) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v36->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v36 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v36->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v36, 8LL);
          }
          __for_end = *v37;
          group_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
          coins = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
          if ( !google::protobuf::Map<unsigned int,bool>::count(done_group_map, group_id) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v76);
            p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76)->design_config.lua_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(group_id);
            }
            group_script_config_ptr_0 = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *group_id);
            std::shared_ptr<Config>::~shared_ptr(&v76);
            if ( group_script_config_ptr_0 )
            {
              gadget_config_map_0 = &group_script_config_ptr_0->gadget_config_map;
              __for_range_1 = &group_script_config_ptr_0->gadget_config_map;
              __for_begin_1._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr_0->gadget_config_map)._M_cur;
              __for_end_1._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_1)._M_cur;
              while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                        &__for_begin_1,
                        &__for_end_1) )
              {
                v42 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(&__for_begin_1);
                std::pair<unsigned int const,GadgetScriptConfig>::pair(&v78, v42);
                config_id_0 = std::get<0ul,unsigned int const,GadgetScriptConfig>(&v78);
                config_0 = std::get<1ul,unsigned int const,GadgetScriptConfig>(&v78);
                v43 = &config_0->gadget_id;
                if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v43);
                }
                v44 = config_0->gadget_id;
                if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config_ptr->reward_worktop_gadget_id);
                }
                if ( v44 == config_ptr->reward_worktop_gadget_id )
                {
                  v45 = &config_0->pos;
                  v46 = proto::TreasureMapDetectorData::add_spot_list(data);
                  Vector3::toClient(v45, v46);
                  v47 = 0;
                }
                else
                {
                  v47 = 1;
                }
                std::pair<unsigned int const,GadgetScriptConfig>::~pair(&v78);
                if ( v47 != 1 )
                  break;
                std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(&__for_begin_1);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v77,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/treasure_map_activity.cpp",
                "notifyDetectorData",
                946);
              v39 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v77,
                      (const char (*)[47])"[TREASURE] group script config nullptr @group ");
              v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, group_id);
              v41 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v40,
                      (const char (*)[10])" player: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v41, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v77);
            }
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_0);
        }
      }
      TreasureMapActivity::worldBroadcastProto(this, (const google::protobuf::Message *)(v2 + 128));
    }
LABEL_84:
    proto::TreasureMapDetectorDataNotify::~TreasureMapDetectorDataNotify((proto::TreasureMapDetectorDataNotify *const)(v2 + 128));
    goto LABEL_85;
  }
  common::milog::MiLogStream::create(
    &v77,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/treasure_map_activity.cpp",
    "notifyDetectorData",
    893);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  v13 = this->schedule_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  activity_id = this->activity_id_;
  if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(region_id);
  }
  common::milog::MiLogStream::operator()(&v77, stru_255158C0.gap0, *region_id, activity_id, v13);
  common::milog::MiLogStream::~MiLogStream(&v77);
LABEL_85:
  if ( v79 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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
};

// Line 965: range 000000001496C3D8-000000001496C545
void __cdecl TreasureMapActivity::notifyCurrencyNum(TreasureMapActivity *const this, uint32_t currency_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:966";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::notifyCurrencyNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::TreasureMapCurrencyNotify::TreasureMapCurrencyNotify((proto::TreasureMapCurrencyNotify *const)(v2 + 32));
  proto::TreasureMapCurrencyNotify::set_currency_num((proto::TreasureMapCurrencyNotify *const)(v2 + 32), currency_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::TreasureMapCurrencyNotify::~TreasureMapCurrencyNotify((proto::TreasureMapCurrencyNotify *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 972: range 000000001496C546-000000001496C6EB
void __cdecl TreasureMapActivity::notifyRegionInfo(
        TreasureMapActivity *const this,
        const proto::TreasureMapRegionBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::uint32 v5; // edx
  google::protobuf::uint32 v6; // edx
  proto::TreasureMapRegionInfo *region_info; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:973";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::notifyRegionInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::TreasureMapRegionInfoNotify::TreasureMapRegionInfoNotify((proto::TreasureMapRegionInfoNotify *const)(v2 + 32));
  region_info = proto::TreasureMapRegionInfoNotify::mutable_region_info((proto::TreasureMapRegionInfoNotify *const)(v2 + 32));
  v5 = proto::TreasureMapRegionBin::region_id(bin);
  proto::TreasureMapRegionInfo::set_region_id(region_info, v5);
  v6 = proto::TreasureMapRegionBin::current_progress(bin);
  proto::TreasureMapRegionInfo::set_current_progress(region_info, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::TreasureMapRegionInfoNotify::~TreasureMapRegionInfoNotify((proto::TreasureMapRegionInfoNotify *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 981: range 000000001496C6EC-000000001496C8B5
void __cdecl TreasureMapActivity::notifyUnlockBonus(
        TreasureMapActivity *const this,
        const proto::TreasureMapBonusChallengeBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::uint32 v5; // edx
  bool is_done; // dl
  bool is_active; // dl
  proto::TreasureMapBonusChallengeInfo *bonus_info; // [rsp+18h] [rbp-88h]
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:982";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::notifyUnlockBonus;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::TreasureMapBonusChallengeNotify::TreasureMapBonusChallengeNotify((proto::TreasureMapBonusChallengeNotify *const)(v2 + 32));
  bonus_info = proto::TreasureMapBonusChallengeNotify::mutable_info((proto::TreasureMapBonusChallengeNotify *const)(v2 + 32));
  v5 = proto::TreasureMapBonusChallengeBin::config_id(bin);
  proto::TreasureMapBonusChallengeInfo::set_config_id(bonus_info, v5);
  is_done = proto::TreasureMapBonusChallengeBin::is_done(bin);
  proto::TreasureMapBonusChallengeInfo::set_is_done(bonus_info, is_done);
  is_active = proto::TreasureMapBonusChallengeBin::is_active(bin);
  proto::TreasureMapBonusChallengeInfo::set_is_active(bonus_info, is_active);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::TreasureMapBonusChallengeNotify::~TreasureMapBonusChallengeNotify((proto::TreasureMapBonusChallengeNotify *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 991: range 000000001496C8B6-000000001496D3AE
__int64 __fastcall TreasureMapActivity::refreshRegionByGM(TreasureMapActivity *const this, uint32_t region_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v8; // rax
  std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr *v9; // rdx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v10; // rsi
  bool *v11; // rax
  _BYTE *v12; // rdx
  char v13; // cl
  PlayerSceneComp *SceneComp; // rax
  Scene *v15; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v17; // rdx
  google::protobuf::Map<unsigned int,bool> *v18; // rax
  PlayerSceneComp *v19; // rax
  Scene *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  void (__fastcall *v23)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD); // r8
  int i; // [rsp+14h] [rbp-1DCh]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1D8h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin_0; // [rsp+20h] [rbp-1D0h] BYREF
  proto::TreasureMapRegionBin *prev_region_ptr; // [rsp+28h] [rbp-1C8h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+30h] [rbp-1C0h]
  proto::TreasureMapRegionBin *region_data; // [rsp+38h] [rbp-1B8h]
  const data::TreasureMapRegionExcelConfig *prev_region_config_ptr; // [rsp+40h] [rbp-1B0h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map_0; // [rsp+48h] [rbp-1A8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-1A0h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_0; // [rsp+58h] [rbp-198h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+60h] [rbp-190h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+68h] [rbp-188h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+70h] [rbp-180h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+78h] [rbp-178h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *coins; // [rsp+80h] [rbp-170h]
  google::protobuf::Map<unsigned int,bool> *done_group_map; // [rsp+88h] [rbp-168h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+90h] [rbp-160h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_1; // [rsp+98h] [rbp-158h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *v42; // [rsp+A0h] [rbp-150h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr_0; // [rsp+A8h] [rbp-148h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec_0; // [rsp+B0h] [rbp-140h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+B8h] [rbp-138h] BYREF
  std::shared_ptr<Config> v46; // [rsp+C0h] [rbp-130h] BYREF
  common::milog::MiLogStream v47; // [rsp+D0h] [rbp-120h] BYREF
  char v48[256]; // [rsp+F0h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 19 prev_region_id:1007 64 4 13 region_id:990 80 24 15 groups_vec:1036 144 48 20 scene_group_map:1037";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::refreshRegionByGM;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 64) = region_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v46);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
  region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                        &v5->design_config.txt_config_mgr.activity_treasure_map_config_mgr,
                        *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v46);
  if ( region_config_ptr )
  {
    prev_region_ptr = 0LL;
    for ( i = 0; i < proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_); ++i )
    {
      region_data = proto::TreasureMapScheduleBin::mutable_region_list(&this->bin_data_, i);
      if ( proto::TreasureMapRegionBin::region_id(region_data) == *(_DWORD *)(v2 + 64) )
      {
        if ( prev_region_ptr )
        {
          *(_DWORD *)(v2 + 48) = proto::TreasureMapRegionBin::region_id(prev_region_ptr);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v46);
          v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
          prev_region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                                     &v7->design_config.txt_config_mgr.activity_treasure_map_config_mgr,
                                     *(_DWORD *)(v2 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v46);
          if ( prev_region_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&prev_region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&prev_region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&prev_region_config_ptr->token_num);
            }
            proto::TreasureMapRegionBin::set_current_progress(prev_region_ptr, prev_region_config_ptr->token_num);
            group_coins_map_0 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                                  &this->region_to_group_coins_map_,
                                  (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
            __for_range = group_coins_map_0;
            __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(group_coins_map_0)._M_cur;
            __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(group_coins_map_0)._M_cur;
            while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                      &__for_begin,
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0) )
            {
              v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
              v9 = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr *)v8;
              if ( ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)v8 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load_n(v8, 8LL);
              }
              __for_end._M_node = *v9;
              group_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
              coins = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
              done_group_map = proto::TreasureMapRegionBin::mutable_done_group_map(prev_region_ptr);
              v10 = group_id;
              v11 = google::protobuf::Map<unsigned int,bool>::operator[](done_group_map, group_id);
              v12 = v11;
              v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
              if ( v13 != 0 && ((unsigned __int8)v11 & 7) >= v13 )
              {
                LOBYTE(v10) = v13 != 0;
                __asan_report_store1(v11, v10, v11);
              }
              *v12 = 1;
              std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
            }
            common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,unsigned int>>(
              (std::vector<unsigned int> *)(v2 + 80),
              group_coins_map_0);
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v2 + 80),
              &prev_region_config_ptr->mp_group_id);
            std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            SceneComp = Player::getSceneComp(this->player_);
            PlayerSceneComp::getGroupSceneMap(
              SceneComp,
              (const std::vector<unsigned int> *)(v2 + 80),
              (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 144));
            __for_range_0 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 144);
            __for_begin_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144))._M_node;
            __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_0)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end) )
            {
              __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
              scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
              group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
              if ( !std::operator==<Scene>(0LL, scene_ptr) )
              {
                v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
                BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v15);
                if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
                  BlockGroupComp = __asan_report_load8(BlockGroupComp);
                v17 = *(_QWORD *)BlockGroupComp + 104LL;
                if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
                  BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
                (*(void (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v17)(
                  BlockGroupComp,
                  group_vec,
                  1LL);
              }
              std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
            }
            TreasureMapActivity::notifyRegionInfo(this, prev_region_ptr);
            std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
          }
        }
        proto::TreasureMapRegionBin::set_current_progress(region_data, 0);
        group_coins_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                            &this->region_to_group_coins_map_,
                            (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 64));
        v18 = proto::TreasureMapRegionBin::mutable_done_group_map(region_data);
        google::protobuf::Map<unsigned int,bool>::clear(v18);
        common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,unsigned int>>(
          (std::vector<unsigned int> *)(v2 + 80),
          group_coins_map);
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v19 = Player::getSceneComp(this->player_);
        PlayerSceneComp::getGroupSceneMap(
          v19,
          (const std::vector<unsigned int> *)(v2 + 80),
          (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 144));
        __for_range_1 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 144);
        __for_begin_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144))._M_node;
        __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end) )
        {
          v42 = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
          scene_ptr_0 = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v42);
          group_vec_0 = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v42);
          if ( !std::operator==<Scene>(0LL, scene_ptr_0) )
          {
            v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr_0);
            v21 = (unsigned __int64)Scene::getBlockGroupComp(v20);
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
              v21 = __asan_report_load8(v21);
            v22 = *(_QWORD *)v21 + 96LL;
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              v21 = __asan_report_load8(*(_QWORD *)v21 + 96LL);
            v23 = *(void (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v22;
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
            {
              v21 = __asan_report_load4(&region_config_ptr->revise_level);
            }
            v23(v21, group_vec_0, region_config_ptr->revise_level, 0LL);
          }
          std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
        }
        proto::TreasureMapScheduleBin::set_active_region_index(&this->bin_data_, i);
        TreasureMapActivity::notifyActiveRegionIndex(this);
        TreasureMapActivity::notifyRegionInfo(this, region_data);
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
        break;
      }
      prev_region_ptr = region_data;
    }
    TreasureMapActivity::notifyDetectorData(this, 0);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "refreshRegionByGM",
      995);
    common::milog::MiLogStream::operator()(&v47, "region id %u config not found", *(unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v47);
    result = 0xFFFFFFFFLL;
  }
  if ( v48 == (char *)v2 )
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

// Line 1059: range 000000001496D3B0-000000001496D6B1
int32_t __cdecl TreasureMapActivity::formatTokenString(const TreasureMapActivity *const this, std::string *str)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // r14
  google::protobuf::uint32 v6; // eax
  __int64 v7; // rax
  google::protobuf::uint32 v8; // eax
  __int64 v9; // rax
  __int64 v10; // r14
  google::protobuf::uint32 v11; // eax
  __int64 v12; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::const_iterator __for_begin; // [rsp+10h] [rbp-270h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::const_iterator __for_end; // [rsp+18h] [rbp-268h] BYREF
  const google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin> *__for_range; // [rsp+20h] [rbp-260h]
  const proto::TreasureMapRegionBin *region_data; // [rsp+28h] [rbp-258h]
  char v18[32]; // [rsp+30h] [rbp-250h] BYREF
  char v19[560]; // [rsp+50h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 7 ss:1060";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::formatTokenString;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 64, "total<");
  v6 = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
  v7 = std::ostream::operator<<(v5, v6);
  std::operator<<<std::char_traits<char>>(v7, "> tokens: |");
  __for_range = proto::TreasureMapScheduleBin::region_list(&this->bin_data_);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    region_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin const>::operator*(&__for_begin);
    v8 = proto::TreasureMapRegionBin::current_progress(region_data);
    v9 = std::ostream::operator<<(v2 + 64, v8);
    v10 = std::operator<<<std::char_traits<char>>(v9, " tokens @region<");
    v11 = proto::TreasureMapRegionBin::region_id(region_data);
    v12 = std::ostream::operator<<(v10, v11);
    std::operator<<<std::char_traits<char>>(v12, ">|");
    google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin const>::operator++(&__for_begin);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(v18, v2 + 48);
  std::string::operator=(str, v18);
  std::string::~string(v18);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  result = 0;
  if ( v19 == (char *)v2 )
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
  return result;
};

// Line 1071: range 000000001496D6B2-000000001496DE93
int32_t __cdecl TreasureMapActivity::formatActiveRegionGroups(const TreasureMapActivity *const this, std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::pair<unsigned int,unsigned int> *v6; // rax
  _DWORD *v7; // rdx
  std::pair<unsigned int,unsigned int> *v8; // rdx
  unsigned int *p_second; // rax
  uint32_t schedule_id; // esi
  __int64 v11; // rax
  __int64 v12; // rax
  std::pair<unsigned int const,unsigned int> *v13; // rax
  std::pair<unsigned int const,unsigned int> *v14; // rdx
  const google::protobuf::Map<unsigned int,bool> *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  google::protobuf::uint32 v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-2D0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-2C8h] BYREF
  const proto::TreasureMapRegionBin *region_data; // [rsp+30h] [rbp-2C0h]
  const std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+38h] [rbp-2B8h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-2B0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+48h] [rbp-2A8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *coins; // [rsp+50h] [rbp-2A0h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+58h] [rbp-298h] BYREF
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-290h] BYREF
  char v33[624]; // [rsp+80h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 region_id:1078 48 8 9 iter:1082 80 12 15 region_opt:1072 112 392 7 ss:1089";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::formatActiveRegionGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  *(std::optional<std::pair<unsigned int,unsigned int> > *)(v2 + 80) = TreasureMapActivity::getActiveRegion(this);
  if ( !std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "formatActiveRegionGroups",
      1075);
    common::milog::MiLogStream::operator()(&v32, "no region active");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v5 = -1;
  }
  else
  {
    v6 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    v8 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    region_data = proto::TreasureMapScheduleBin::region_list(&this->bin_data_, v8->second);
    *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find(&this->region_to_group_coins_map_, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 32));
    __in = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(&this->region_to_group_coins_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v2 + 48),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)&__in) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "formatActiveRegionGroups",
        1085);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      schedule_id = this->schedule_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      common::milog::MiLogStream::operator()(
        &v32,
        "region id<%u> not found @ activity %u, schedule %u",
        *(unsigned int *)(v2 + 32),
        this->activity_id_,
        schedule_id);
      common::milog::MiLogStream::~MiLogStream(&v32);
      v5 = -1;
    }
    else
    {
      group_coins_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v2 + 48))->second;
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 112);
      v11 = std::operator<<<std::char_traits<char>>(v2 + 128, " region[");
      v12 = std::ostream::operator<<(v11, *(unsigned int *)(v2 + 32));
      std::operator<<<std::char_traits<char>>(v12, "]: ");
      __for_range = group_coins_map;
      __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(group_coins_map)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(group_coins_map)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
      {
        v13 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
        v14 = v13;
        if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v13, 8LL);
        }
        __in = *v14;
        group_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
        coins = std::get<1ul,unsigned int const,unsigned int>(&__in);
        v15 = proto::TreasureMapRegionBin::done_group_map(region_data);
        if ( !google::protobuf::Map<unsigned int,bool>::count(v15, group_id) )
        {
          v16 = std::operator<<<std::char_traits<char>>(v2 + 128, "<");
          if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(group_id);
          }
          v17 = std::ostream::operator<<(v16, *group_id);
          v18 = std::operator<<<std::char_traits<char>>(v17, ": ");
          v19 = proto::TreasureMapRegionBin::current_progress(region_data);
          v20 = std::ostream::operator<<(v18, v19);
          v21 = std::operator<<<std::char_traits<char>>(v20, "/");
          if ( *(_BYTE *)(((unsigned __int64)coins >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)coins & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coins >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(coins);
          }
          v22 = std::ostream::operator<<(v21, *coins);
          std::operator<<<std::char_traits<char>>(v22, "> ");
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
      }
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v32, v2 + 112);
      std::string::operator=(str, &v32);
      std::string::~string(&v32);
      v5 = 0;
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 112);
    }
  }
  result = v5;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1105: range 000000001496DE94-000000001496F070
__int64 __fastcall TreasureMapActivity::finishRegionGroupByGM(TreasureMapActivity *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  const ActivityTreasureMapExcelConfigMgr *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t *p_gadget_id; // rax
  uint32_t gadget_id; // ecx
  uint32_t v20; // eax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int (__fastcall *v26)(unsigned __int64, Player *, unsigned __int64); // r8
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::pair<unsigned int,unsigned int> *v30; // rax
  _DWORD *v31; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t schedule_id; // esi
  std::pair<unsigned int,unsigned int> *v34; // rdx
  unsigned int *p_second; // rax
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::mapped_type *v36; // rax
  PlayerSceneComp *SceneComp; // rax
  Scene *v38; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v40; // rdx
  __int64 result; // rax
  uint32_t current_progress; // [rsp+1Ch] [rbp-254h]
  uint32_t old_currency_num; // [rsp+20h] [rbp-250h]
  uint32_t new_currency_num; // [rsp+24h] [rbp-24Ch]
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-248h] BYREF
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_end; // [rsp+30h] [rbp-240h] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-238h]
  const data::TreasureMapExcelConfig *base_config_ptr; // [rsp+40h] [rbp-230h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+48h] [rbp-228h]
  proto::TreasureMapRegionBin *region_data; // [rsp+50h] [rbp-220h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_0; // [rsp+58h] [rbp-218h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+60h] [rbp-210h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+68h] [rbp-208h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+70h] [rbp-200h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+78h] [rbp-1F8h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range; // [rsp+80h] [rbp-1F0h]
  const std::pair<unsigned int const,GadgetScriptConfig> *v57; // [rsp+88h] [rbp-1E8h]
  std::tuple_element<0,const std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+90h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+98h] [rbp-1D8h]
  common::milog::MiLogStream v60; // [rsp+A0h] [rbp-1D0h] BYREF
  char v61[432]; // [rsp+C0h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 14 region_id:1170 64 4 13 group_id:1104 80 12 15 region_opt:1106 112 16 14 scene_ptr:1121"
                        " 144 16 14 group_ptr:1130 176 16 15 gadget_ptr:1154 208 16 10 param:1161 240 24 15 groups_vec:11"
                        "92 304 48 20 scene_group_map:1194";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::finishRegionGroupByGM;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862728] = -218959360;
  v4[536862729] = 62194;
  v4[536862731] = -202116109;
  *(_DWORD *)(v2 + 64) = group_id;
  *(std::optional<std::pair<unsigned int,unsigned int> > *)(v2 + 80) = TreasureMapActivity::getActiveRegion(this);
  if ( !std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "finishRegionGroupByGM",
      1109);
    v5 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v60, this);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v5, (const char (*)[17])"no region active");
    common::milog::MiLogStream::~MiLogStream(&v60);
    v6 = -1;
  }
  else
  {
    config_mgr = TreasureMapActivity::getConfigMgr(this);
    v7 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    base_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(v7, this->activity_id_);
    if ( base_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 112));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "finishRegionGroupByGM",
          1124);
        v9 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v60, this);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v60);
        v6 = -1;
      }
      else if ( *(_DWORD *)(v2 + 64) )
      {
        v10 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        Scene::findGroup((Scene *const)(v2 + 144), v10);
        if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "finishRegionGroupByGM",
            1133);
          v11 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v60, this);
          v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" group:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" not found.");
          common::milog::MiLogStream::~MiLogStream(&v60);
          v6 = -1;
        }
        else
        {
          v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          group_script_config_ptr = Group::getScriptConfig(v14);
          if ( group_script_config_ptr )
          {
            __for_range = &group_script_config_ptr->gadget_config_map;
            __for_begin._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr->gadget_config_map)._M_cur;
            __for_end._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::end(&group_script_config_ptr->gadget_config_map)._M_cur;
            while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                      &__for_begin,
                      &__for_end) )
            {
              v57 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(&__for_begin);
              config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v57);
              gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v57);
              p_gadget_id = &gadget_config->gadget_id;
              if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(p_gadget_id);
              }
              gadget_id = gadget_config->gadget_id;
              if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&base_config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&base_config_ptr->reward_worktop_gadget_id);
              }
              if ( gadget_id == base_config_ptr->reward_worktop_gadget_id )
              {
                if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(config_id);
                }
                break;
              }
              std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(&__for_begin);
            }
            v20 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            Group::findEntityByConfigId<Gadget>((Group *const)(v2 + 176), v20);
            if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 176), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v60,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/treasure_map_activity.cpp",
                "finishRegionGroupByGM",
                1157);
              v21 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v60, this);
              v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v21,
                      (const char (*)[29])" reward gadget not found in:");
              v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              operator<<(v22, v23);
              common::milog::MiLogStream::~MiLogStream(&v60);
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(v2 + 208) = 0;
              *(_DWORD *)(v2 + 212) = 0;
              *(_DWORD *)(v2 + 216) = 0;
              *(_DWORD *)(v2 + 220) = 0;
              v24 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
              if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
                v24 = __asan_report_load8(v24);
              v25 = *(_QWORD *)v24 + 208LL;
              if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                v24 = __asan_report_load8(*(_QWORD *)v24 + 208LL);
              v26 = *(unsigned int (__fastcall **)(unsigned __int64, Player *, unsigned __int64))v25;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                v24 = __asan_report_load8(&this->player_);
              if ( v26(v24, this->player_, v2 + 208) )
              {
                common::milog::MiLogStream::create(
                  &v60,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/treasure_map_activity.cpp",
                  "finishRegionGroupByGM",
                  1164);
                v27 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v60, this);
                v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        v27,
                        (const char (*)[32])" reward gadget failed interact.");
                v29 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                operator<<(v28, v29);
                common::milog::MiLogStream::~MiLogStream(&v60);
                v6 = -1;
              }
              else
              {
                v6 = 0;
              }
            }
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 176));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v60,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/treasure_map_activity.cpp",
              "finishRegionGroupByGM",
              1140);
            v15 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v60, this);
            v16 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            v17 = operator<<(v15, v16);
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v17,
              (const char (*)[24])" script config nullptr.");
            common::milog::MiLogStream::~MiLogStream(&v60);
            v6 = -1;
          }
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 144));
      }
      else
      {
        v30 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80));
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        *(_DWORD *)(v2 + 48) = *v31;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 208));
        v32 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
        region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                              &v32->design_config.txt_config_mgr.activity_treasure_map_config_mgr,
                              *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 208));
        if ( region_config_ptr )
        {
          v34 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80));
          p_second = &v34->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          region_data = proto::TreasureMapScheduleBin::mutable_region_list(&this->bin_data_, v34->second);
          current_progress = proto::TreasureMapRegionBin::current_progress(region_data);
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->token_num);
          }
          proto::TreasureMapRegionBin::set_current_progress(region_data, region_config_ptr->token_num);
          TreasureMapActivity::notifyRegionInfo(this, region_data);
          old_currency_num = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->token_num);
          }
          new_currency_num = region_config_ptr->token_num + old_currency_num - current_progress;
          proto::TreasureMapScheduleBin::set_currency_num(&this->bin_data_, new_currency_num);
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->token_num);
          }
          TreasureMapActivity::grantTokenByGM(this, region_config_ptr->token_num - current_progress);
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "finishRegionGroupByGM",
            1189);
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->token_num);
          }
          common::milog::MiLogStream::operator()(
            &v60,
            "region<%u> fin current_progress[%u->%u] currency[%u->%u]",
            *(unsigned int *)(v2 + 48),
            current_progress,
            region_config_ptr->token_num,
            old_currency_num,
            new_currency_num);
          common::milog::MiLogStream::~MiLogStream(&v60);
          TreasureMapActivity::onFinishRegion(this);
          v36 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                  &this->region_to_group_coins_map_,
                  (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
          common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,unsigned int>>(
            (std::vector<unsigned int> *)(v2 + 240),
            v36);
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v2 + 240),
            &region_config_ptr->mp_group_id);
          std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 304));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          SceneComp = Player::getSceneComp(this->player_);
          PlayerSceneComp::getGroupSceneMap(
            SceneComp,
            (const std::vector<unsigned int> *)(v2 + 240),
            (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 304));
          __for_range_0 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 304);
          __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 304))._M_node;
          __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 304))._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Self *)&__for_begin,
                    (const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Self *)&__for_end) )
          {
            __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > > *const)&__for_begin);
            scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
            group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
            if ( !std::operator==<Scene>(scene_ptr, 0LL) )
            {
              v38 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
              BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v38);
              if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
                BlockGroupComp = __asan_report_load8(BlockGroupComp);
              v40 = *(_QWORD *)BlockGroupComp + 104LL;
              if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
                BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
              (*(void (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v40)(
                BlockGroupComp,
                group_vec,
                1LL);
            }
            std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > > *const)&__for_begin);
          }
          TreasureMapActivity::tryRegisterActiveRegionGroups(this, 0);
          TreasureMapActivity::tryUnlockBonusRegions(this, 1);
          TreasureMapActivity::notifyDetectorData(this, 0);
          v6 = 0;
          std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 304));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 240));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "finishRegionGroupByGM",
            1174);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->schedule_id_);
          }
          schedule_id = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->activity_id_);
          }
          common::milog::MiLogStream::operator()(
            &v60,
            "Region<%u> Config Not found @activity<%u> schedule<%u>",
            *(unsigned int *)(v2 + 48),
            this->activity_id_,
            schedule_id);
          common::milog::MiLogStream::~MiLogStream(&v60);
          v6 = -1;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "finishRegionGroupByGM",
        1117);
      v8 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v60, this);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v8, (const char (*)[22])" base config nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v60);
      v6 = -1;
    }
  }
  result = v6;
  if ( v61 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 1209: range 000000001496F072-0000000014970E53
int32_t __cdecl TreasureMapActivity::detectTreasureSpot(
        TreasureMapActivity *const this,
        proto::TreasureMapDetectorDataNotify *notify,
        uint32_t radius,
        uint32_t range)
{
  int32_t v4; // r14d
  __m128i v5; // xmm0
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  __int64 schedule_id; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const ActivityTreasureMapExcelConfigMgr *v12; // rax
  const ActivityTreasureMapExcelConfigMgr *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const std::pair<unsigned int const,GadgetScriptConfig> *v24; // rax
  uint32_t *p_gadget_id; // rax
  uint32_t gadget_id; // ecx
  Vector3 *p_pos; // r14
  proto::Vector *v28; // rax
  Vector3 *v29; // r14
  proto::Vector *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  int v36; // r15d
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type **v37; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type **v38; // rdx
  const data::ActivityTreasureMapExcelConfigMgrBase *v39; // rdi
  uint32_t v40; // esi
  __int64 activity_id; // rcx
  uint32_t v42; // r14d
  __int64 v43; // rax
  uint32_t region_radius; // r14d
  __int64 v45; // rax
  proto::Vector *v46; // rax
  proto::TreasureMapScheduleBin *p_bin_data; // rcx
  uint32_t v48; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rcx
  const std::pair<unsigned int const,GadgetScriptConfig> *v54; // rax
  uint32_t *v55; // rax
  uint32_t v56; // ecx
  Vector3 *v57; // r14
  proto::Vector *v58; // rax
  int v59; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v60; // rax
  std::pair<unsigned int const,unsigned int> *v61; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rcx
  const std::pair<unsigned int const,GadgetScriptConfig> *v66; // rax
  uint32_t *v67; // rax
  uint32_t v68; // ecx
  Vector3 *v69; // r14
  proto::Vector *v70; // rax
  int v71; // r14d
  int32_t result; // eax
  bool is_find; // [rsp+33h] [rbp-40Dh]
  uint32_t region_num; // [rsp+34h] [rbp-40Ch]
  float distance; // [rsp+38h] [rbp-408h]
  float plane_distance; // [rsp+3Ch] [rbp-404h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin_2; // [rsp+40h] [rbp-400h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+48h] [rbp-3F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::const_iterator __for_begin; // [rsp+50h] [rbp-3F0h] BYREF
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_end_1; // [rsp+58h] [rbp-3E8h] BYREF
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+60h] [rbp-3E0h]
  const Vector3 *player_pos; // [rsp+68h] [rbp-3D8h]
  proto::TreasureMapDetectorData *detector_data; // [rsp+70h] [rbp-3D0h]
  const google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range; // [rsp+78h] [rbp-3C8h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *region_id; // [rsp+80h] [rbp-3C0h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *region_index; // [rsp+88h] [rbp-3B8h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+90h] [rbp-3B0h]
  proto::TreasureMapRegionBin *region_data; // [rsp+98h] [rbp-3A8h]
  const google::protobuf::Map<unsigned int,bool> *done_group_map; // [rsp+A0h] [rbp-3A0h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+A8h] [rbp-398h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+B0h] [rbp-390h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+B8h] [rbp-388h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *coins; // [rsp+C0h] [rbp-380h]
  const GroupScriptConfig *group_script_config_ptr_1; // [rsp+C8h] [rbp-378h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *gadget_config_map_1; // [rsp+D0h] [rbp-370h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_3; // [rsp+D8h] [rbp-368h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id_1; // [rsp+E0h] [rbp-360h]
  std::tuple_element<1,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_1; // [rsp+E8h] [rbp-358h]
  const GroupScriptConfig *group_script_config_ptr_0; // [rsp+F0h] [rbp-350h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *gadget_config_map_0; // [rsp+F8h] [rbp-348h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_1; // [rsp+100h] [rbp-340h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id_0; // [rsp+108h] [rbp-338h]
  std::tuple_element<1,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_0; // [rsp+110h] [rbp-330h]
  const proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+118h] [rbp-328h]
  const data::TreasureMapBonusRegionExcelConfig *bonus_config_ptr; // [rsp+120h] [rbp-320h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+128h] [rbp-318h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *gadget_config_map; // [rsp+130h] [rbp-310h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_0; // [rsp+138h] [rbp-308h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+140h] [rbp-300h]
  std::tuple_element<1,std::pair<unsigned int const,GadgetScriptConfig> >::type *config; // [rsp+148h] [rbp-2F8h]
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_begin_0; // [rsp+150h] [rbp-2F0h] BYREF
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+158h] [rbp-2E8h] BYREF
  std::shared_ptr<Config> v116; // [rsp+160h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v117; // [rsp+170h] [rbp-2D0h] BYREF
  common::milog::MiLogStream v118; // [rsp+190h] [rbp-2B0h] BYREF
  std::pair<unsigned int const,GadgetScriptConfig> __in; // [rsp+1B0h] [rbp-290h] BYREF
  char v120[208]; // [rsp+370h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v120;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 4 13 bonus_id:1232 48 4 16 mp_group_id:1319 64 12 15 region_opt:1279 96 12 15 center_pos:12"
                        "95 128 16 15 avatar_ptr:1219";
  *(_QWORD *)(v6 + 16) = TreasureMapActivity::detectTreasureSpot;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -219020288;
  v8[536862723] = -219020288;
  v8[536862724] = -202178560;
  TreasureMapActivity::doRefresh(this, 0);
  ConfigMgr = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
    __asan_report_load4(&this->activity_id_);
  }
  config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(ConfigMgr, this->activity_id_);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v118,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "detectTreasureSpot",
      1215);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    schedule_id = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    common::milog::MiLogStream::operator()(
      &v118,
      "treasure map config not found @activity_id<%u> schedule_id<%u>",
      this->activity_id_,
      schedule_id);
    common::milog::MiLogStream::~MiLogStream(&v118);
    v4 = 5;
    goto LABEL_137;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v6 + 128));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v6 + 128)) )
  {
    v4 = 103;
    goto LABEL_136;
  }
  v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
  player_pos = Entity::getPosition((const Entity *const)v11);
  v12 = TreasureMapActivity::getConfigMgr(this);
  region_num = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::size(&v12->treasure_map_region_excel_config_map);
  detector_data = proto::TreasureMapDetectorDataNotify::mutable_data(notify);
  __for_range = proto::TreasureMapScheduleBin::challenge_list(&this->bin_data_);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range).it_;
  __for_end_1._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator!=(
            &__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapBonusChallengeBin>::iterator *)&__for_end_1) )
  {
    bonus_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator*(&__for_begin);
    *(_DWORD *)(v6 + 32) = proto::TreasureMapBonusChallengeBin::config_id(bonus_data);
    v13 = TreasureMapActivity::getConfigMgr(this);
    bonus_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(
                         v13,
                         *(_DWORD *)(v6 + 32));
    if ( !bonus_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v118,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "detectTreasureSpot",
        1236);
      common::milog::MiLogStream::operator()(
        &v118,
        "[TREASURE] bonus<%u> config not found ",
        *(unsigned int *)(v6 + 32));
      common::milog::MiLogStream::~MiLogStream(&v118);
      goto LABEL_52;
    }
    if ( !proto::TreasureMapBonusChallengeBin::is_active(bonus_data) )
    {
      common::milog::MiLogStream::create(
        &v118,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "detectTreasureSpot",
        1241);
      v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v118,
              (const char (*)[19])"[TREASURE] bonus: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v6 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])off_25516500);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_37:
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v118);
      goto LABEL_52;
    }
    if ( proto::TreasureMapBonusChallengeBin::is_done(bonus_data) )
    {
      common::milog::MiLogStream::create(
        &v118,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "detectTreasureSpot",
        1246);
      v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v118,
              (const char (*)[19])"[TREASURE] bonus: ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v6 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])off_25516540);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_37;
    }
    if ( proto::TreasureMapBonusChallengeBin::is_challenge_open(bonus_data) )
    {
      common::milog::MiLogStream::create(
        &v118,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "detectTreasureSpot",
        1251);
      v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v118,
              (const char (*)[19])"[TREASURE] bonus: ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v6 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v20,
              (const char (*)[19])" challenge opend. ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_37;
    }
    if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&bonus_config_ptr->group_id);
    }
    *(_DWORD *)(v6 + 48) = bonus_config_ptr->group_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v116);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v116);
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                &v21->design_config.lua_config_mgr,
                                *(_DWORD *)(v6 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v116);
    if ( !group_script_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v118,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "detectTreasureSpot",
        1259);
      v22 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v118,
              (const char (*)[47])"[TREASURE] group script config nullptr @group ");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v6 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" player: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_37;
    }
    gadget_config_map = &group_script_config_ptr->gadget_config_map;
    __for_range_0 = &group_script_config_ptr->gadget_config_map;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr->gadget_config_map)._M_cur;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
              &__for_begin_0,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)&__for_end) )
    {
      v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(&__for_begin_0);
      std::pair<unsigned int const,GadgetScriptConfig>::pair(&__in, v24);
      config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(&__in);
      config = std::get<1ul,unsigned int const,GadgetScriptConfig>(&__in);
      p_gadget_id = &config->gadget_id;
      if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_gadget_id);
      }
      gadget_id = config->gadget_id;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->reward_worktop_gadget_id);
      }
      if ( gadget_id == config_ptr->reward_worktop_gadget_id
        && (float)(int)range >= getDistance(&config->pos, player_pos) )
      {
        p_pos = &config->pos;
        v28 = proto::TreasureMapDetectorData::add_spot_list(detector_data);
        Vector3::toClient(p_pos, v28);
        v29 = &config->pos;
        v30 = proto::TreasureMapDetectorData::mutable_center_pos(detector_data);
        Vector3::toClient(v29, v30);
        proto::TreasureMapDetectorData::set_region_id(detector_data, region_num + *(_DWORD *)(v6 + 32));
        common::milog::MiLogStream::create(
          &v118,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "detectTreasureSpot",
          1272);
        v31 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v118,
                (const char (*)[18])"[TREASURE] bonus ");
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v6 + 32));
        v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v32, (const char (*)[12])" detected @");
        v34 = operator<<(v33, &config->pos);
        v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])", player: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v35, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v118);
        v4 = 0;
        v36 = 0;
      }
      else
      {
        v36 = 1;
      }
      std::pair<unsigned int const,GadgetScriptConfig>::~pair(&__in);
      if ( v36 != 1 )
        goto LABEL_136;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(&__for_begin_0);
    }
LABEL_52:
    google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator++(&__for_begin);
  }
  *(std::optional<std::pair<unsigned int,unsigned int> > *)(v6 + 64) = TreasureMapActivity::getActiveRegion(this);
  if ( !std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v6 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v118,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "detectTreasureSpot",
      1282);
    common::milog::MiLogStream::operator()(&v118, "no region active");
    common::milog::MiLogStream::~MiLogStream(&v118);
    v4 = 1584;
  }
  else
  {
    v37 = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type **)std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v6 + 64));
    v38 = v37;
    if ( ((unsigned __int8)v37 & 7) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)v37 + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v37 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v37 + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v37, 8LL);
    }
    __for_begin_0._M_cur = *v38;
    region_id = std::get<0ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_begin_0);
    region_index = std::get<1ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_begin_0);
    v39 = TreasureMapActivity::getConfigMgr(this);
    if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
    {
      v39 = (const data::ActivityTreasureMapExcelConfigMgrBase *)region_id;
      __asan_report_load4(region_id);
    }
    region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(v39, *region_id);
    if ( region_config_ptr )
    {
      Vector3::Vector3((Vector3 *const)(v6 + 96), &region_config_ptr->region_center);
      *(float *)v5.m128i_i32 = getDistance(player_pos, (const Vector3 *)(v6 + 96));
      distance = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
      *(float *)v5.m128i_i32 = getPlaneDistance(player_pos, (const Vector3 *)(v6 + 96));
      plane_distance = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
      if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&region_config_ptr->region_radius);
      }
      if ( plane_distance <= (float)(int)(region_config_ptr->region_radius + radius) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr->region_radius);
        }
        if ( distance <= (float)(int)(region_config_ptr->region_radius + radius) )
        {
          v46 = proto::TreasureMapDetectorData::mutable_center_pos(detector_data);
          Vector3::toClient((const Vector3 *const)(v6 + 96), v46);
          if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(region_id);
          }
          proto::TreasureMapDetectorData::set_region_id(detector_data, *region_id);
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->region_radius);
          }
          proto::TreasureMapDetectorData::set_radius(detector_data, region_config_ptr->region_radius);
          p_bin_data = &this->bin_data_;
          if ( *(_BYTE *)(((unsigned __int64)region_index >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_index >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(region_index);
          }
          region_data = proto::TreasureMapScheduleBin::mutable_region_list(p_bin_data, *region_index);
          is_find = 0;
          if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(region_id);
          }
          *(_DWORD *)(v6 + 48) = TreasureMapActivity::getRegionMpGroupID(this, *region_id);
          v48 = proto::TreasureMapRegionBin::current_progress(region_data);
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->mp_token_threshold);
          }
          if ( v48 >= region_config_ptr->mp_token_threshold
            && !proto::TreasureMapRegionBin::is_mp_challenge_open(region_data)
            && *(_DWORD *)(v6 + 48) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v116);
            v50 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v116);
            group_script_config_ptr_0 = LuaConfigMgr::findGroupScriptConfig(
                                          &v50->design_config.lua_config_mgr,
                                          *(_DWORD *)(v6 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v116);
            if ( group_script_config_ptr_0 )
            {
              gadget_config_map_0 = &group_script_config_ptr_0->gadget_config_map;
              __for_range_1 = &group_script_config_ptr_0->gadget_config_map;
              __for_end_1._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr_0->gadget_config_map)._M_cur;
              __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_1)._M_cur;
              while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                        &__for_end_1,
                        (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)&__for_end) )
              {
                v54 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(&__for_end_1);
                std::pair<unsigned int const,GadgetScriptConfig>::pair(&__in, v54);
                config_id_0 = std::get<0ul,unsigned int const,GadgetScriptConfig>(&__in);
                config_0 = std::get<1ul,unsigned int const,GadgetScriptConfig>(&__in);
                v55 = &config_0->gadget_id;
                if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v55);
                }
                v56 = config_0->gadget_id;
                if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config_ptr->reward_worktop_gadget_id);
                }
                if ( v56 == config_ptr->reward_worktop_gadget_id )
                {
                  v57 = &config_0->pos;
                  v58 = proto::TreasureMapDetectorData::add_spot_list(detector_data);
                  Vector3::toClient(v57, v58);
                  if ( (float)(int)range >= getDistance(&config_0->pos, player_pos) )
                    is_find = 1;
                  v59 = 0;
                }
                else
                {
                  v59 = 1;
                }
                std::pair<unsigned int const,GadgetScriptConfig>::~pair(&__in);
                if ( v59 != 1 )
                  break;
                std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(&__for_end_1);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v118,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/treasure_map_activity.cpp",
                "detectTreasureSpot",
                1328);
              v51 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v118,
                      (const char (*)[36])"group script config nullptr @group ");
              v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v51,
                      (const unsigned int *)(v6 + 48));
              v53 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v52,
                      (const char (*)[10])" player: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v53, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v118);
            }
          }
          else
          {
            done_group_map = proto::TreasureMapRegionBin::done_group_map(region_data);
            group_coins_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                                &this->region_to_group_coins_map_,
                                region_id);
            __for_range_2 = group_coins_map;
            __for_begin_2._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(group_coins_map)._M_cur;
            __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_2)._M_cur;
            while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                      &__for_begin_2,
                      &__for_end_0) )
            {
              v60 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_2);
              v61 = v60;
              if ( ((unsigned __int8)v60 & 7) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&v60->second + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)v60 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v60->second + 3) >> 3)
                                                                + 0x7FFF8000) )
              {
                __asan_report_load_n(v60, 8LL);
              }
              __for_end = *v61;
              group_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
              coins = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
              if ( !google::protobuf::Map<unsigned int,bool>::count(done_group_map, group_id) )
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v116);
                p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v116)->design_config.lua_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(group_id);
                }
                group_script_config_ptr_1 = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *group_id);
                std::shared_ptr<Config>::~shared_ptr(&v116);
                if ( group_script_config_ptr_1 )
                {
                  gadget_config_map_1 = &group_script_config_ptr_1->gadget_config_map;
                  __for_range_3 = &group_script_config_ptr_1->gadget_config_map;
                  __for_begin.it_ = (void *const *)std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr_1->gadget_config_map)._M_cur;
                  __for_end_1._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_3)._M_cur;
                  while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)&__for_begin,
                            &__for_end_1) )
                  {
                    v66 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)&__for_begin);
                    std::pair<unsigned int const,GadgetScriptConfig>::pair(&__in, v66);
                    config_id_1 = std::get<0ul,unsigned int const,GadgetScriptConfig>(&__in);
                    config_1 = std::get<1ul,unsigned int const,GadgetScriptConfig>(&__in);
                    v67 = &config_1->gadget_id;
                    if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v67);
                    }
                    v68 = config_1->gadget_id;
                    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&config_ptr->reward_worktop_gadget_id);
                    }
                    if ( v68 == config_ptr->reward_worktop_gadget_id )
                    {
                      v69 = &config_1->pos;
                      v70 = proto::TreasureMapDetectorData::add_spot_list(detector_data);
                      Vector3::toClient(v69, v70);
                      if ( (float)(int)range >= getDistance(&config_1->pos, player_pos) )
                        is_find = 1;
                      v71 = 0;
                    }
                    else
                    {
                      v71 = 1;
                    }
                    std::pair<unsigned int const,GadgetScriptConfig>::~pair(&__in);
                    if ( v71 != 1 )
                      break;
                    std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)&__for_begin);
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v118,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/treasure_map_activity.cpp",
                    "detectTreasureSpot",
                    1361);
                  v63 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          &v118,
                          (const char (*)[36])"group script config nullptr @group ");
                  v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, group_id);
                  v65 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v64,
                          (const char (*)[10])" player: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  operator<<(v65, this->player_);
                  common::milog::MiLogStream::~MiLogStream(&v118);
                }
              }
              std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_2);
            }
          }
          if ( is_find )
          {
            proto::TreasureMapDetectorData::set_is_region_detected(detector_data, 1);
            proto::TreasureMapRegionBin::set_is_region_detected(region_data, 1);
            v4 = 0;
          }
          else
          {
            v4 = 1581;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v117,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "detectTreasureSpot",
            1307);
          region_radius = region_config_ptr->region_radius;
          Vector3::toString[abi:cxx11]((std::string *)&v118, player_pos);
          v45 = std::string::c_str(&v118);
          common::milog::MiLogStream::operator()(
            &v117,
            "player pos<%s> distance<%f> out of 3d region radius<%u> + detect radius<%u>",
            v45,
            region_radius,
            radius,
            distance);
          std::string::~string(&v118);
          common::milog::MiLogStream::~MiLogStream(&v117);
          v4 = 1581;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v117,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "detectTreasureSpot",
          1300);
        v42 = region_config_ptr->region_radius;
        Vector3::toString[abi:cxx11]((std::string *)&v118, player_pos);
        v43 = std::string::c_str(&v118);
        common::milog::MiLogStream::operator()(
          &v117,
          "player pos<%s> distance<%f> out of 2d region radius<%u> + detect radius<%u>",
          v43,
          v42,
          radius,
          distance);
        std::string::~string(&v118);
        common::milog::MiLogStream::~MiLogStream(&v117);
        v4 = 1583;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v118,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "detectTreasureSpot",
        1290);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      v40 = this->schedule_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      activity_id = this->activity_id_;
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(region_id);
      }
      common::milog::MiLogStream::operator()(
        &v118,
        "Region<%u> Config Not found @activity<%u> schedule<%u>",
        *region_id,
        activity_id,
        v40);
      common::milog::MiLogStream::~MiLogStream(&v118);
      v4 = 5;
    }
  }
LABEL_136:
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v6 + 128));
LABEL_137:
  result = v4;
  if ( v120 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1392: range 0000000014970E54-0000000014971096
__int64 __fastcall TreasureMapActivity::checkAddToken(const TreasureMapActivity *const this, uint32_t add_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 add_num:1391";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::checkAddToken;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32)
    && proto::TreasureMapScheduleBin::currency_num(&this->bin_data_)
    && proto::TreasureMapScheduleBin::currency_num(&this->bin_data_) + *(_DWORD *)(v2 + 32) < *(_DWORD *)(v2 + 32)
    || !*(_DWORD *)(v2 + 32)
    && !proto::TreasureMapScheduleBin::currency_num(&this->bin_data_)
    && proto::TreasureMapScheduleBin::currency_num(&this->bin_data_) + *(_DWORD *)(v2 + 32) > *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "checkAddToken",
      1395);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v11,
           (const char (*)[42])"[TREASURE_MAP] token over flow, cur num: ");
    val = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 893LL;
  }
  else
  {
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

// Line 1402: range 0000000014971098-0000000014971260
__int64 __fastcall TreasureMapActivity::checkSubToken(const TreasureMapActivity *const this, uint32_t sub_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 sub_num:1401";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::checkSubToken;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( proto::TreasureMapScheduleBin::currency_num(&this->bin_data_) >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "checkSubToken",
      1405);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v10,
           (const char (*)[43])"[TREASURE_MAP] token not enough, cur num: ");
    val = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_255189E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 894LL;
  }
  if ( v11 == (char *)v2 )
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

// Line 1412: range 0000000014971262-0000000014971D86
int32_t __cdecl TreasureMapActivity::addToken(TreasureMapActivity *const this, uint32_t *num, bool is_gm)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  unsigned int v7; // r13d
  unsigned int v8; // eax
  google::protobuf::uint32 v9; // eax
  uint32_t v10; // eax
  std::pair<unsigned int,unsigned int> *v11; // rax
  std::pair<unsigned int,unsigned int> *v12; // rdx
  ActivityTreasureMapExcelConfigMgr *p_activity_treasure_map_config_mgr; // rcx
  uint32_t v14; // esi
  __int64 v15; // rcx
  proto::TreasureMapScheduleBin *p_bin_data; // rcx
  uint32_t v17; // esi
  __int64 v18; // rcx
  uint32_t *v19; // rax
  uint32_t *v20; // rdx
  uint32_t v21; // ecx
  char v22; // dl
  __int64 v23; // rdx
  __int64 schedule_id; // rsi
  uint32_t activity_id; // edi
  uint32_t v26; // r10d
  unsigned int v27; // r13d
  unsigned int v28; // eax
  google::protobuf::uint32 v29; // eax
  uint32_t v30; // eax
  uint32_t *numa; // [rsp+10h] [rbp-100h]
  int32_t ret; // [rsp+20h] [rbp-F0h]
  uint32_t current_progress; // [rsp+24h] [rbp-ECh]
  uint32_t *region_id; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *region_index; // [rsp+30h] [rbp-E0h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+38h] [rbp-D8h]
  proto::TreasureMapRegionBin *region_data; // [rsp+40h] [rbp-D0h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+48h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v41; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v42; // [rsp+60h] [rbp-B0h] BYREF
  char v43[144]; // [rsp+80h] [rbp-90h] BYREF

  numa = num;
  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 gap:1449 64 12 15 region_opt:1426";
  *(_QWORD *)(v3 + 16) = TreasureMapActivity::addToken;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(num);
  }
  ret = TreasureMapActivity::checkAddToken(this, *num);
  if ( ret )
  {
    result = ret;
  }
  else if ( is_gm )
  {
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(num);
    }
    v7 = *num;
    v8 = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
    v9 = SAFE_ADD<unsigned int,unsigned int>(v8, v7);
    proto::TreasureMapScheduleBin::set_currency_num(&this->bin_data_, v9);
    v10 = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
    TreasureMapActivity::notifyCurrencyNum(this, v10);
    result = 0;
  }
  else
  {
    *(std::optional<std::pair<unsigned int,unsigned int> > *)(v3 + 64) = TreasureMapActivity::getActiveRegion(this);
    if ( !std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "addToken",
        1429);
      common::milog::MiLogStream::operator()(&v42, "no region active");
      common::milog::MiLogStream::~MiLogStream(&v42);
      result = 860;
    }
    else
    {
      v11 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 64));
      v12 = v11;
      if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v11, 8LL);
      }
      __in = *v12;
      region_id = std::get<0ul,unsigned int,unsigned int>(&__in);
      region_index = std::get<1ul,unsigned int,unsigned int>(&__in);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v41);
      p_activity_treasure_map_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.activity_treasure_map_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(region_id);
      }
      region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                            p_activity_treasure_map_config_mgr,
                            *region_id);
      std::shared_ptr<Config>::~shared_ptr(&v41);
      if ( region_config_ptr )
      {
        p_bin_data = &this->bin_data_;
        if ( *(_BYTE *)(((unsigned __int64)region_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)region_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_index >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(region_index);
        }
        region_data = proto::TreasureMapScheduleBin::mutable_region_list(p_bin_data, *region_index);
        current_progress = proto::TreasureMapRegionBin::current_progress(region_data);
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr->token_num);
        }
        if ( current_progress < region_config_ptr->token_num )
        {
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->token_num);
          }
          *(_DWORD *)(v3 + 48) = region_config_ptr->token_num - current_progress;
          v19 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v3 + 48), num);
          v20 = v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v19);
          }
          v21 = *v20;
          v22 = *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000);
          LOBYTE(num) = v22 != 0;
          v23 = (v22 != 0) & (unsigned __int8)((char)(((unsigned __int8)numa & 7) + 3) >= v22);
          if ( (_BYTE)v23 )
            __asan_report_store4(numa, num, v23);
          *numa = v21;
          proto::TreasureMapRegionBin::set_current_progress(region_data, current_progress + *numa);
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "addToken",
            1452);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->schedule_id_);
          }
          schedule_id = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->activity_id_);
          }
          activity_id = this->activity_id_;
          if ( *(_BYTE *)(((unsigned __int64)numa >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)numa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)numa >> 3) + 0x7FFF8000) )
          {
            activity_id = (unsigned int)numa;
            __asan_report_load4(numa);
          }
          v26 = *numa + current_progress;
          if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
          {
            activity_id = (unsigned int)region_id;
            __asan_report_load4(region_id);
          }
          common::milog::MiLogStream::operator()(
            &v42,
            "[TREASURE] region id<%u> add coins %u ==> %u. @ activity %u, schedule %u",
            *region_id,
            current_progress,
            v26,
            activity_id,
            schedule_id);
          common::milog::MiLogStream::~MiLogStream(&v42);
          TreasureMapActivity::notifyRegionInfo(this, region_data);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "addToken",
            1445);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->schedule_id_);
          }
          v17 = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->activity_id_);
          }
          v18 = this->activity_id_;
          if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(region_id);
          }
          common::milog::MiLogStream::operator()(
            &v42,
            "[TREASURE] region id<%u> all coin collected. @ activity %u, schedule %u",
            *region_id,
            v18,
            v17);
          common::milog::MiLogStream::~MiLogStream(&v42);
        }
        if ( *(_BYTE *)(((unsigned __int64)numa >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)numa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)numa >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(numa);
        }
        v27 = *numa;
        v28 = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
        v29 = SAFE_ADD<unsigned int,unsigned int>(v28, v27);
        proto::TreasureMapScheduleBin::set_currency_num(&this->bin_data_, v29);
        v30 = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
        TreasureMapActivity::notifyCurrencyNum(this, v30);
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "addToken",
          1437);
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        v14 = this->schedule_id_;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->activity_id_);
        }
        v15 = this->activity_id_;
        if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(region_id);
        }
        common::milog::MiLogStream::operator()(
          &v42,
          "Region<%u> Config Not found @activity<%u> schedule<%u>",
          *region_id,
          v15,
          v14);
        common::milog::MiLogStream::~MiLogStream(&v42);
        result = 5;
      }
    }
  }
  if ( v43 == (char *)v3 )
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

// Line 1465: range 0000000014971D88-0000000014971E0E
int32_t __cdecl TreasureMapActivity::subToken(TreasureMapActivity *const this, uint32_t num)
{
  google::protobuf::uint32 v3; // eax
  uint32_t v4; // edx
  int32_t ret; // [rsp+1Ch] [rbp-14h]

  ret = TreasureMapActivity::checkSubToken(this, num);
  if ( ret )
    return ret;
  v3 = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
  proto::TreasureMapScheduleBin::set_currency_num(&this->bin_data_, v3 - num);
  v4 = proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
  TreasureMapActivity::notifyCurrencyNum(this, v4);
  return 0;
};

// Line 1477: range 0000000014971E10-00000000149724EB
void __cdecl TreasureMapActivity::grantTokenByGM(TreasureMapActivity *const this, uint32_t num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  __int64 v6; // rcx
  __int64 schedule_id; // rcx
  bool v8; // r15
  std::shared_ptr<Player> *i; // r14
  __int64 v10; // rcx
  Entity *v11; // [rsp+8h] [rbp-128h]
  std::allocator<std::shared_ptr<Player> > __a; // [rsp+27h] [rbp-109h] BYREF
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+28h] [rbp-108h]
  std::enable_shared_from_this<Player> v15; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::shared_ptr<Player>> player_vec; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 avatar_ptr:1484 64 24 18 action_reason:1490";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::grantTokenByGM;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  ConfigMgr = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
    __asan_report_load4(&this->activity_id_);
  }
  config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(ConfigMgr, this->activity_id_);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 32));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "grantTokenByGM",
        1487);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      schedule_id = this->schedule_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      common::milog::MiLogStream::operator()(
        &v17,
        "drop token failed activity_id %u schedule_id %u. avatar null ptr",
        this->activity_id_,
        schedule_id);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      ActionReason::ActionReason(
        (ActionReason *const)(v2 + 64),
        ACTION_REASON_TREASURE_MAP_SPOT_TOKEN,
        ITEM_LIMIT_ACTIVITY_TREASURE_MAP_REWARD);
      v11 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      std::enable_shared_from_this<Player>::shared_from_this(&v15);
      std::allocator<std::shared_ptr<Player>>::allocator(&__a);
      std::vector<std::shared_ptr<Player>>::vector(
        &player_vec,
        (std::initializer_list<std::shared_ptr<Player> >)__PAIR128__(1LL, &v15),
        &__a);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->token_material_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->token_material_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->token_material_id);
      }
      v8 = Entity::dropItemsForPlayers(
             v11,
             config_ptr->token_material_id,
             num,
             (const ActionReason *)(v2 + 64),
             &player_vec) != 0;
      std::vector<std::shared_ptr<Player>>::~vector(&player_vec);
      std::allocator<std::shared_ptr<Player>>::~allocator(&__a);
      for ( i = (std::shared_ptr<Player> *)&player_vec;
            i != (std::shared_ptr<Player> *)&v15;
            std::shared_ptr<Player>::~shared_ptr(i) )
      {
        --i;
      }
      if ( v8 )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "grantTokenByGM",
          1493);
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        v10 = this->schedule_id_;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->activity_id_);
        }
        common::milog::MiLogStream::operator()(
          &v17,
          "drop token failed activity_id %u schedule_id %u",
          this->activity_id_,
          v10);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "grantTokenByGM",
      1481);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    v6 = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    common::milog::MiLogStream::operator()(
      &v17,
      "[TREASURE] config not found @activity_id<%u> schedule_id<%u>",
      this->activity_id_,
      v6);
    common::milog::MiLogStream::~MiLogStream(&v17);
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
};

// Line 1498: range 00000000149724EC-000000001497250B
uint32_t __cdecl TreasureMapActivity::getToken(const TreasureMapActivity *const this)
{
  return proto::TreasureMapScheduleBin::currency_num(&this->bin_data_);
};

// Line 1504: range 000000001497250C-0000000014972B37
void __cdecl TreasureMapActivity::onFinishQuestEvent(TreasureMapActivity *const this, const FinishQuestEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActivityTreasureMapExcelConfigMgr *p_activity_treasure_map_config_mgr; // rcx
  __int64 schedule_id; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint32_t quest_id; // ecx
  uint32_t v11; // ecx
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 12 15 region_opt:1522 64 24 11 notify:1527";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::onFinishQuestEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  p_activity_treasure_map_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_treasure_map_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(
                 p_activity_treasure_map_config_mgr,
                 this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( config_ptr )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "onFinishQuestEvent",
      1512);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v15, (const char (*)[7])"quest:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->quest_id);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])off_25518E20);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->quest_id);
    }
    quest_id = event->quest_id;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->front_child_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->front_child_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->front_child_quest_id);
    }
    if ( quest_id == config_ptr->front_child_quest_id )
    {
      proto::TreasureMapPreTaskDoneNotify::TreasureMapPreTaskDoneNotify((proto::TreasureMapPreTaskDoneNotify *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
      proto::TreasureMapPreTaskDoneNotify::~TreasureMapPreTaskDoneNotify((proto::TreasureMapPreTaskDoneNotify *const)(v2 + 64));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->quest_id);
      }
      v11 = event->quest_id;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->guide_child_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->guide_child_quest_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->guide_child_quest_id);
      }
      if ( v11 == config_ptr->guide_child_quest_id )
      {
        TreasureMapActivity::doRefresh(this, 0);
        *(std::optional<std::pair<unsigned int,unsigned int> > *)(v2 + 32) = TreasureMapActivity::getActiveRegion(this);
        if ( std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 32)) )
        {
          proto::TreasureMapGuideTaskDoneNotify::TreasureMapGuideTaskDoneNotify((proto::TreasureMapGuideTaskDoneNotify *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
          TreasureMapActivity::tryUnlockBonusRegions(this, 1);
          proto::TreasureMapGuideTaskDoneNotify::~TreasureMapGuideTaskDoneNotify((proto::TreasureMapGuideTaskDoneNotify *const)(v2 + 64));
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "onFinishQuestEvent",
      1508);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    schedule_id = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    common::milog::MiLogStream::operator()(
      &v15,
      "[TREASURE] config not found @activity_id<%u> schedule_id<%u>",
      this->activity_id_,
      schedule_id);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v2 )
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

// Line 1534: range 0000000014972B38-00000000149734B5
void __cdecl TreasureMapActivity::onMPChallengeDone(
        TreasureMapActivity *const this,
        uint32_t region_id,
        const data::TreasureMapExcelConfig *config,
        const data::TreasureMapRegionExcelConfig *region_config,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  __int64 schedule_id; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  GameserverService *v11; // rax
  unsigned int GameThreadLocal; // eax
  Player *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t MpChallengeHostRewardNum; // eax
  uint32_t host_reward_limit; // eax
  Player *v21; // rax
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  bool is_host; // [rsp+37h] [rbp-149h]
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::iterator __for_begin; // [rsp+40h] [rbp-140h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::iterator __for_end; // [rsp+48h] [rbp-138h] BYREF
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+50h] [rbp-130h]
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin> *__for_range; // [rsp+58h] [rbp-128h]
  proto::TreasureMapRegionBin *region_data; // [rsp+60h] [rbp-120h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-118h]
  common::milog::MiLogStream v46; // [rsp+70h] [rbp-110h] BYREF
  char v47[240]; // [rsp+90h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 15 reward_num:1572 48 4 17 reward_limit:1573 64 16 15 player_ptr:1558 96 16 17 activity_p"
                        "tr:1564 128 24 11 reason:1554";
  *(_QWORD *)(v5 + 16) = TreasureMapActivity::onMPChallengeDone;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  ConfigMgr = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
    __asan_report_load4(&this->activity_id_);
  }
  config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(ConfigMgr, this->activity_id_);
  if ( config_ptr )
  {
    __for_range = proto::TreasureMapScheduleBin::mutable_region_list(&this->bin_data_);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      region_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin>::operator*(&__for_begin);
      if ( region_id == proto::TreasureMapRegionBin::region_id(region_data) )
      {
        proto::TreasureMapRegionBin::set_is_mp_challenge_done(region_data, 1);
        BaseActivity::notifyClientData(this, 0);
        TreasureMapActivity::notifyHostInfo(this);
        break;
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin>::operator++(&__for_begin);
    }
    ActionReason::ActionReason(
      (ActionReason *const)(v5 + 128),
      ACTION_REASON_TREASURE_MAP_MP_REWARD,
      ITEM_LIMIT_ACTIVITY_TREASURE_MAP_REWARD);
    __for_range_0 = &event->uid_list;
    __for_begin.it_ = (void *const *)std::vector<unsigned int>::begin(&event->uid_list)._M_current;
    __for_end.it_ = (void *const *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v11 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v11);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v5 + 64), GameThreadLocal + 16);
      if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v5 + 64), 0LL) )
      {
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        Player::getActivityComp(v13);
        PlayerActivityComp::findOpenningActivity<TreasureMapActivity>((PlayerActivityComp *const)(v5 + 96));
        if ( std::operator==<TreasureMapActivity>(0LL, (const std::shared_ptr<TreasureMapActivity> *)(v5 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "onMPChallengeDone",
            1567);
          v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v46,
                  (const char (*)[42])"[TREASURE] activity is not opening, uid: ");
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          operator<<(v14, v15);
          common::milog::MiLogStream::~MiLogStream(&v46);
        }
        else
        {
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          SceneComp = Player::getSceneComp(v16);
          is_host = PlayerSceneComp::isInMyPlayerWorld(SceneComp);
          v18 = std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          if ( is_host )
            MpChallengeHostRewardNum = TreasureMapActivity::getMpChallengeHostRewardNum(v18);
          else
            MpChallengeHostRewardNum = TreasureMapActivity::getMpChallengeGuestRewardNum(v18);
          *(_DWORD *)(v5 + 32) = MpChallengeHostRewardNum;
          if ( is_host )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->host_reward_limit >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config_ptr->host_reward_limit >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config_ptr->host_reward_limit);
            }
            host_reward_limit = config_ptr->host_reward_limit;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->guest_reward_limit >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->guest_reward_limit >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->guest_reward_limit);
            }
            host_reward_limit = config_ptr->guest_reward_limit;
          }
          *(_DWORD *)(v5 + 48) = host_reward_limit;
          if ( *(_DWORD *)(v5 + 32) >= *(_DWORD *)(v5 + 48) )
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_map_activity.cpp",
              "onMPChallengeDone",
              1592);
            v28 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v46,
                    (const char (*)[21])"[TREASURE] is host: ");
            v29 = common::milog::MiLogStream::operator<<(v28, is_host);
            v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v29,
                    (const char (*)[14])", reward num:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v5 + 32));
            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v31,
                    (const char (*)[16])", reward_limit:");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v5 + 48));
            v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])", player: ");
            v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
            operator<<(v34, v35);
            common::milog::MiLogStream::~MiLogStream(&v46);
          }
          else
          {
            v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
            ItemComp = Player::getItemComp(v21);
            if ( *(_BYTE *)(((unsigned __int64)&config->mp_reward_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->mp_reward_id >> 3)
                                                                    + 0x7FFF8000) )
            {
              ItemComp = (PlayerItemComp *)&config->mp_reward_id;
              __asan_report_load4(&config->mp_reward_id);
            }
            if ( PlayerItemComp::grantDropItems(
                   ItemComp,
                   config->mp_reward_id,
                   1u,
                   (const ActionReason *)(v5 + 128),
                   0LL) )
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/treasure_map_activity.cpp",
                "onMPChallengeDone",
                1579);
              v23 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v46,
                      (const char (*)[43])"[TREASURE] grantDropItems failed, drop_id:");
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->mp_reward_id);
              v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v24,
                      (const char (*)[10])" player: ");
              v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
              operator<<(v25, v26);
              common::milog::MiLogStream::~MiLogStream(&v46);
            }
            v27 = std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            if ( is_host )
              TreasureMapActivity::increaseMpChallengeHostRewardNum(v27);
            else
              TreasureMapActivity::increaseMpChallengeGuestRewardNum(v27);
          }
        }
        std::shared_ptr<TreasureMapActivity>::~shared_ptr((std::shared_ptr<TreasureMapActivity> *const)(v5 + 96));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 64));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
    TreasureMapActivity::writeMpChallengeFinishLog(this, event);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "onMPChallengeDone",
      1538);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    schedule_id = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    common::milog::MiLogStream::operator()(
      &v46,
      "[TREASURE] config not found @activity_id<%u> schedule_id<%u>",
      this->activity_id_,
      schedule_id);
    common::milog::MiLogStream::~MiLogStream(&v46);
  }
  if ( v47 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1600: range 00000000149734B6-00000000149743CE
// local variable allocation has failed, the output may be wrong!
void __cdecl TreasureMapActivity::onChallengeFinishEvent(
        TreasureMapActivity *const this,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaConfigMgr *p_lua_config_mgr; // rcx
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const data::ActivityTreasureMapExcelConfigMgrBase *v12; // rdx
  uint32_t challenge_index; // ecx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  Scene *v27; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  SceneBlockGroupComp *v29; // r14
  unsigned __int64 v30; // rax
  void (__fastcall *v31)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD); // r15
  uint32_t v32; // ecx
  uint32_t mp_reward_id; // edi
  uint32_t v34; // esi
  Scene *v35; // rax
  SceneBlockGroupComp *v36; // rax
  unsigned __int64 v37; // rax
  void (__fastcall *v38)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD); // [rsp+8h] [rbp-178h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-170h]
  SceneBlockGroupComp *__l; // [rsp+10h] [rbp-170h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-145h] BYREF
  _DWORD v44[5]; // [rsp+3Ch] [rbp-144h] BYREF
  __int128 bonus_config_ptr; // [rsp+50h] [rbp-130h] OVERLAPPED
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+60h] [rbp-120h]
  proto::TreasureMapBonusChallengeBin *bonus_data_ptr; // [rsp+68h] [rbp-118h]
  std::vector<unsigned int> v48; // [rsp+70h] [rbp-110h] BYREF
  common::milog::MiLogStream v49; // [rsp+90h] [rbp-F0h] BYREF
  char v50[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 bonus_id:1607 48 4 13 scene_id:1616 64 16 14 scene_ptr:1617 96 24 11 reason:1647";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::onChallengeFinishEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_success);
  }
  if ( event->is_success )
  {
    *(_QWORD *)&v44[3] = TreasureMapActivity::getConfigMgr(this);
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->group_id);
    }
    *(_DWORD *)(v2 + 32) = ActivityTreasureMapExcelConfigMgr::getBonusIDByGroupID(
                             *(const ActivityTreasureMapExcelConfigMgr *const *)&v44[3],
                             event->group_id);
    *(_QWORD *)&bonus_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(
                                     *(const data::ActivityTreasureMapExcelConfigMgrBase *const *)&v44[3],
                                     *(_DWORD *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->group_id);
    }
    v44[1] = ActivityTreasureMapExcelConfigMgr::getRegionByGroupID(
               *(const ActivityTreasureMapExcelConfigMgr *const *)&v44[3],
               event->group_id);
    *((_QWORD *)&bonus_config_ptr + 1) = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                                           *(const data::ActivityTreasureMapExcelConfigMgrBase *const *)&v44[3],
                                           v44[1]);
    if ( bonus_config_ptr != 0 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 64));
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->group_id);
      }
      *(_DWORD *)(v2 + 48) = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, event->group_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 64), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "onChallengeFinishEvent",
          1620);
        v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v49,
               (const char (*)[18])"[TREASURE] scene:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
        v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               v8,
               (const char (*)[22])" nullptr for player: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v10 = operator<<(v9, this->player_);
        v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" @group:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->group_id);
        common::milog::MiLogStream::~MiLogStream(&v49);
      }
      else
      {
        v12 = *(const data::ActivityTreasureMapExcelConfigMgrBase **)&v44[3];
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->activity_id_);
        }
        config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(v12, this->activity_id_);
        if ( config_ptr )
        {
          if ( !(_QWORD)bonus_config_ptr )
            goto LABEL_49;
          if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event->challenge_index);
          }
          challenge_index = event->challenge_index;
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->bonus_challenge_index >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->bonus_challenge_index >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->bonus_challenge_index);
          }
          if ( challenge_index == config_ptr->bonus_challenge_index )
          {
            bonus_data_ptr = TreasureMapActivity::mutableBonusChallengeBin(this, *(_DWORD *)(v2 + 32));
            if ( bonus_data_ptr )
            {
              if ( proto::TreasureMapBonusChallengeBin::is_done(bonus_data_ptr) )
              {
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/treasure_map_activity.cpp",
                  "onChallengeFinishEvent",
                  1643);
                v17 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v49, this);
                v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v17,
                        (const char (*)[11])" bonus_id:");
                v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v18,
                        (const unsigned int *)(v2 + 32));
                common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v19,
                  (const char (*)[15])" already done.");
                common::milog::MiLogStream::~MiLogStream(&v49);
              }
              else
              {
                ActionReason::ActionReason(
                  (ActionReason *const)(v2 + 96),
                  ACTION_REASON_TREASURE_MAP_BONUS_LEVEL_REWARD,
                  ITEM_LIMIT_ACTIVITY_TREASURE_MAP_REWARD);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                ItemComp = Player::getItemComp(this->player_);
                if ( *(_BYTE *)(((unsigned __int64)(bonus_config_ptr + 20) >> 3) + 0x7FFF8000) != 0
                  && (char)(((bonus_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(bonus_config_ptr + 20) >> 3)
                                                                           + 0x7FFF8000) )
                {
                  ItemComp = (PlayerItemComp *)(bonus_config_ptr + 20);
                  __asan_report_load4(bonus_config_ptr + 20);
                }
                v44[2] = PlayerItemComp::grantDropItems(
                           ItemComp,
                           *(_DWORD *)(bonus_config_ptr + 20),
                           1u,
                           (const ActionReason *)(v2 + 96),
                           0LL);
                if ( v44[2] )
                {
                  common::milog::MiLogStream::create(
                    &v49,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/treasure_map_activity.cpp",
                    "onChallengeFinishEvent",
                    1652);
                  v21 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          &v49,
                          (const char (*)[43])"[TREASURE] grantDropItems failed, drop_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(bonus_config_ptr + 20));
                  common::milog::MiLogStream::~MiLogStream(&v49);
                }
                proto::TreasureMapBonusChallengeBin::set_is_done(bonus_data_ptr, 1);
                TreasureMapActivity::notifyUnlockBonus(this, bonus_data_ptr);
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/treasure_map_activity.cpp",
                  "onChallengeFinishEvent",
                  1657);
                v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v49,
                        (const char (*)[19])"[TREASURE] bonus: ");
                v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v22,
                        (const unsigned int *)(v2 + 32));
                v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v23,
                        (const char (*)[20])" done with reward: ");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        (const unsigned int *)(bonus_config_ptr + 20));
                v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v25,
                        (const char (*)[11])". player: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                operator<<(v26, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v49);
                v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                BlockGroupComp = Scene::getBlockGroupComp(v27);
                v29 = BlockGroupComp;
                if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                  __asan_report_load8(BlockGroupComp);
                v30 = (unsigned __int64)(v29->_vptr_SceneCompBase + 13);
                if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                  v30 = __asan_report_load8(v29->_vptr_SceneCompBase + 13);
                v31 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD))v30;
                if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&event->group_id);
                }
                v44[0] = event->group_id;
                __la._M_array = v44;
                __la._M_len = 1LL;
                std::allocator<unsigned int>::allocator(&__a);
                std::vector<unsigned int>::vector(&v48, __la, &__a);
                v31(v29, &v48, 0LL);
                std::vector<unsigned int>::~vector(&v48);
                std::allocator<unsigned int>::~allocator(&__a);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/treasure_map_activity.cpp",
                "onChallengeFinishEvent",
                1637);
              v14 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v49, this);
              v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v14,
                      (const char (*)[11])" bonus_id:");
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v15,
                      (const unsigned int *)(v2 + 32));
              common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v16,
                (const char (*)[20])" bin data not found");
              common::milog::MiLogStream::~MiLogStream(&v49);
            }
          }
          else
          {
LABEL_49:
            if ( *((_QWORD *)&bonus_config_ptr + 1) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&event->challenge_index);
              }
              v32 = event->challenge_index;
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->mp_challenge_index >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config_ptr->mp_challenge_index >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config_ptr->mp_challenge_index);
              }
              if ( v32 == config_ptr->mp_challenge_index )
              {
                TreasureMapActivity::onMPChallengeDone(
                  this,
                  v44[1],
                  config_ptr,
                  *((const data::TreasureMapRegionExcelConfig **)&bonus_config_ptr + 1),
                  event);
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/treasure_map_activity.cpp",
                  "onChallengeFinishEvent",
                  1666);
                if ( *(_BYTE *)(((unsigned __int64)&config_ptr->mp_reward_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->mp_reward_id >> 3)
                                                                            + 0x7FFF8000) )
                {
                  __asan_report_load4(&config_ptr->mp_reward_id);
                }
                mp_reward_id = config_ptr->mp_reward_id;
                if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
                {
                  mp_reward_id = (_DWORD)event + 24;
                  __asan_report_load4(&event->challenge_index);
                }
                v34 = event->challenge_index;
                if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  mp_reward_id = (_DWORD)event + 32;
                  __asan_report_load4(&event->group_id);
                }
                common::milog::MiLogStream::operator()(
                  &v49,
                  "[TREASURE] region<%u> mp group<%u> challenge<%u> done grant reward<%u>.",
                  v44[1],
                  event->group_id,
                  v34,
                  mp_reward_id);
                common::milog::MiLogStream::~MiLogStream(&v49);
                v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                v36 = Scene::getBlockGroupComp(v35);
                __l = v36;
                if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v36);
                v37 = (unsigned __int64)(__l->_vptr_SceneCompBase + 13);
                if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                  v37 = __asan_report_load8(__l->_vptr_SceneCompBase + 13);
                v38 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD))v37;
                if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&event->group_id);
                }
                v44[0] = event->group_id;
                std::allocator<unsigned int>::allocator(&__a);
                std::vector<unsigned int>::vector(
                  &v48,
                  (std::initializer_list<unsigned int>)__PAIR128__(1LL, v44),
                  &__a);
                v38(__l, &v48, 0LL);
                std::vector<unsigned int>::~vector(&v48);
                std::allocator<unsigned int>::~allocator(&__a);
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "onChallengeFinishEvent",
            1627);
          common::milog::MiLogStream::operator()(&v49, stru_25516120.gap0);
          common::milog::MiLogStream::~MiLogStream(&v49);
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  if ( v50 == (char *)v2 )
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

// Line 1672: range 00000000149743D0-000000001497445C
bool __cdecl TreasureMapActivity::isRegionDone(const TreasureMapActivity *const this, uint32_t region_id)
{
  google::protobuf::uint32 i; // [rsp+14h] [rbp-Ch]
  const proto::TreasureMapRegionBin *region_data; // [rsp+18h] [rbp-8h]

  for ( i = 0; (int)i < proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_); ++i )
  {
    region_data = proto::TreasureMapScheduleBin::region_list(&this->bin_data_, i);
    if ( region_id == proto::TreasureMapRegionBin::region_id(region_data) )
      return proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_) >= i;
  }
  return 0;
};

// Line 1686: range 000000001497445E-00000000149745F0
__int64 __fastcall TreasureMapActivity::getRegionMpGroupID(const TreasureMapActivity *const this, uint32_t region_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 region_id:1685 64 8 9 iter:1687";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::getRegionMpGroupID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = region_id;
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  &this->region_mp_groups_map_,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->region_mp_groups_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second;
  }
  if ( v9 == (char *)v2 )
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

// Line 1696: range 00000000149745F2-000000001497496B
void __cdecl TreasureMapActivity::writeRegionProgressLog(
        TreasureMapActivity *const this,
        uint32_t region_id,
        uint32_t group_id,
        uint32_t progress,
        uint32_t goal)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *player; // r14
  std::string v16; // [rsp+0h] [rbp-F0h]
  google::protobuf::uint32 goala; // [rsp+8h] [rbp-E8h]
  google::protobuf::uint32 progressa; // [rsp+Ch] [rbp-E4h]
  google::protobuf::uint32 group_ida; // [rsp+10h] [rbp-E0h]
  google::protobuf::uint32 region_ida; // [rsp+14h] [rbp-DCh]
  TreasureMapActivity *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v16._anon_0._M_allocated_capacity) = region_id;
  *(_DWORD *)v16._anon_0._M_local_buf = group_id;
  HIDWORD(v16._M_string_length) = progress;
  LODWORD(v16._M_string_length) = goal;
  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 11 holder:1697 64 16 12 log_ptr:1698";
  *(_QWORD *)(v5 + 16) = TreasureMapActivity::writeRegionProgressLog;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xC08u, v16);
  std::string::~string(&v24);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTreasureMapRegionProgress>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyTreasureMapRegionProgress::set_last_detect_trans_no(v9, &thisa->detect_trans_no_);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyTreasureMapRegionProgress::set_region_id(v10, region_ida);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyTreasureMapRegionProgress::set_group_id(v11, group_ida);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyTreasureMapRegionProgress::set_token_progress(v12, progressa);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyTreasureMapRegionProgress::set_goal(v13, goala);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapRegionProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyTreasureMapRegionProgress::set_is_done(v14, progressa >= goala);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTreasureMapRegionProgress,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyTreasureMapRegionProgress> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyTreasureMapRegionProgress>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTreasureMapRegionProgress> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1709: range 000000001497496C-0000000014974F80
// local variable allocation has failed, the output may be wrong!
void __cdecl TreasureMapActivity::onChallengeBeginEvent(
        TreasureMapActivity *const this,
        const ChallengeBeginEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const ActivityTreasureMapExcelConfigMgr *v5; // rdx
  int v6; // ecx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  const unsigned int *M_current; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  google::protobuf::RepeatedField<unsigned int> *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *v15; // r14
  std::string eventa; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-E0h]
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  google::protobuf::RepeatedField<unsigned int> other; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1725 64 16 12 log_ptr:1726";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::onChallengeBeginEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  config_mgr = TreasureMapActivity::getConfigMgr((const TreasureMapActivity *const)eventa._M_string_length);
  v5 = config_mgr;
  if ( *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(eventa._M_string_length + 32);
  }
  config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(
                 v5,
                 *(_DWORD *)(eventa._M_string_length + 32));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(eventa._M_dataplus._M_p + 24);
    }
    v6 = *((_DWORD *)eventa._M_dataplus._M_p + 6);
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->mp_challenge_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->mp_challenge_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->mp_challenge_index);
    }
    if ( v6 == config_ptr->mp_challenge_index )
    {
      std::string::operator=(eventa._M_string_length + 6088, eventa._M_dataplus._M_p + 64);
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(eventa._M_string_length + 24);
      BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC09u, eventa);
      std::string::~string(&v21);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin>();
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(eventa._M_dataplus._M_p + 36);
      }
      proto_log::PlayerLogBodyTreasureMapMpChallengeBegin::set_group_id(v8, *((_DWORD *)eventa._M_dataplus._M_p + 9));
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(eventa._M_dataplus._M_p + 28);
      }
      proto_log::PlayerLogBodyTreasureMapMpChallengeBegin::set_challenge_id(
        v9,
        *((_DWORD *)eventa._M_dataplus._M_p + 7));
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(eventa._M_dataplus._M_p + 24);
      }
      proto_log::PlayerLogBodyTreasureMapMpChallengeBegin::set_challenge_index(
        v10,
        *((_DWORD *)eventa._M_dataplus._M_p + 6));
      M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(eventa._M_dataplus._M_p + 40))._M_current;
      *((std::vector<unsigned int>::const_iterator *)&eventa._anon_0._M_allocated_capacity + 1) = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(eventa._M_dataplus._M_p + 40));
      google::protobuf::RepeatedField<unsigned int>::RepeatedField<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        &other,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&eventa._anon_0._M_allocated_capacity
      + 1);
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v13 = proto_log::PlayerLogBodyTreasureMapMpChallengeBegin::mutable_uid_list(v12);
      google::protobuf::RepeatedField<unsigned int>::operator=(v13, &other);
      google::protobuf::RepeatedField<unsigned int>::~RepeatedField(&other);
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto_log::PlayerLogBodyTreasureMapMpChallengeBegin::set_trans_no(
        v14,
        (const std::string *)(eventa._M_string_length + 6088));
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(eventa._M_string_length + 24);
      v15 = *(Player **)(eventa._M_string_length + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(
        (std::shared_ptr<google::protobuf::Message> *const)&other,
        0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin> *)(v2 + 64));
      Player::printStatLog(v15, &p_body_ptr, (MessagePtr *)&other, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&other);
      std::shared_ptr<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTreasureMapMpChallengeBegin> *const)(v2 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "onChallengeBeginEvent",
      1714);
    common::milog::MiLogStream::operator()(&v21, stru_25516120.gap0);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
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
};

// Line 1736: range 0000000014974F82-00000000149754AD
// local variable allocation has failed, the output may be wrong!
void __cdecl TreasureMapActivity::writeMpChallengeFinishLog(
        TreasureMapActivity *const this,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  const unsigned int *M_current; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  Player *v15; // r14
  std::string eventa; // [rsp+0h] [rbp-F0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  google::protobuf::RepeatedField<unsigned int> other; // [rsp+30h] [rbp-C0h] BYREF
  std::string v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1737 64 16 12 log_ptr:1738";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::writeMpChallengeFinishLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(eventa._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC0Au, eventa);
  std::string::~string(&v19);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(eventa._M_dataplus._M_p + 32);
  }
  proto_log::PlayerLogBodyTreasureMapMpChallengeEnd::set_group_id(v6, *((_DWORD *)eventa._M_dataplus._M_p + 8));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p
                                                                                                + 28) >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(eventa._M_dataplus._M_p + 28);
  }
  proto_log::PlayerLogBodyTreasureMapMpChallengeEnd::set_challenge_id(v7, *((_DWORD *)eventa._M_dataplus._M_p + 7));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(eventa._M_dataplus._M_p + 24);
  }
  proto_log::PlayerLogBodyTreasureMapMpChallengeEnd::set_challenge_index(v8, *((_DWORD *)eventa._M_dataplus._M_p + 6));
  M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(eventa._M_dataplus._M_p + 40))._M_current;
  *((std::vector<unsigned int>::const_iterator *)&eventa._anon_0._M_allocated_capacity + 1) = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(eventa._M_dataplus._M_p + 40));
  google::protobuf::RepeatedField<unsigned int>::RepeatedField<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    &other,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&eventa._anon_0._M_allocated_capacity
  + 1);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v11 = proto_log::PlayerLogBodyTreasureMapMpChallengeEnd::mutable_uid_list(v10);
  google::protobuf::RepeatedField<unsigned int>::operator=(v11, &other);
  google::protobuf::RepeatedField<unsigned int>::~RepeatedField(&other);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyTreasureMapMpChallengeEnd::set_trans_no(
    v12,
    (const std::string *)(eventa._M_string_length + 6088));
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3) + 0x7FFF8000) != 0
    && ((LOBYTE(eventa._M_dataplus._M_p) + 36) & 7) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load1(eventa._M_dataplus._M_p + 36);
  }
  proto_log::PlayerLogBodyTreasureMapMpChallengeEnd::set_is_success(v13, eventa._M_dataplus._M_p[36]);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 64) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 64) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(eventa._M_dataplus._M_p + 64);
  }
  proto_log::PlayerLogBodyTreasureMapMpChallengeEnd::set_duration(v14, *((_DWORD *)eventa._M_dataplus._M_p + 16));
  if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(eventa._M_string_length + 24);
  v15 = *(Player **)(eventa._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&other, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd> *)(v2 + 64));
  Player::printStatLog(v15, &p_body_ptr, (MessagePtr *)&other, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&other);
  std::shared_ptr<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTreasureMapMpChallengeEnd> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v20 == (char *)v2 )
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

// Line 1750: range 00000000149754AE-0000000014975B80
void __cdecl TreasureMapActivity::checkAndRemoveDetector(TreasureMapActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  common::milog::MiLogStream *v5; // rcx
  uint32_t v6; // ecx
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v8; // rax
  common::milog::MiLogStream *v9; // r14
  signed int WidgetComp; // eax
  WidgetBase *v11; // rax
  PlayerWidgetComp *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 22 treasure_end_time:1759 64 8 11 reason:1765 96 16 15 item_param:1762 128 16 15 widget_ptr:1774";
  *(_QWORD *)(v1 + 16) = TreasureMapActivity::checkAndRemoveDetector;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  ConfigMgr = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
    __asan_report_load4(&this->activity_id_);
  }
  config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(ConfigMgr, this->activity_id_);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->treasure_days);
    }
    v6 = config_ptr->treasure_days + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    *(_DWORD *)(v1 + 48) = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v6);
    if ( common::tools::TimeUtils::getNow() >= *(unsigned int *)(v1 + 48) )
    {
      *(_DWORD *)(v1 + 96) = 0;
      *(_DWORD *)(v1 + 100) = 0;
      *(_DWORD *)(v1 + 104) = 0;
      *(_DWORD *)(v1 + 108) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->detector_material_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->detector_material_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->detector_material_id);
      }
      *(_DWORD *)(v1 + 96) = config_ptr->detector_material_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      *(_DWORD *)(v1 + 100) = PlayerItemComp::getPackMaterialCount(ItemComp, *(_DWORD *)(v1 + 96));
      SubItemReason::SubItemReason((SubItemReason *const)(v1 + 64), ACTION_REASON_TREASURE_MAP_REMOVE_DETECTOR);
      if ( *(_DWORD *)(v1 + 100) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v8 = Player::getItemComp(this->player_);
        if ( PlayerItemComp::subItem(v8, (const ItemParam *)(v1 + 96), (const SubItemReason *)(v1 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "checkAndRemoveDetector",
            1770);
          v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                 &v20,
                 (const char (*)[36])"[TREASURE] subItemBatch fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v20);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          WidgetComp = (unsigned int)Player::getWidgetComp(this->player_);
          PlayerWidgetComp::findSlotWidget((PlayerWidgetComp *const)(v1 + 128), (data::WidgetOccupyTag)WidgetComp);
          if ( std::operator!=<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v1 + 128)) )
          {
            v11 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
            if ( WidgetBase::getMaterialId(v11) == *(_DWORD *)(v1 + 96) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v13 = Player::getWidgetComp(this->player_);
              PlayerWidgetComp::doClearSlot(v13, ActionPanel);
            }
          }
          std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v1 + 128));
        }
      }
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "checkAndRemoveDetector",
        1781);
      v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v20,
              (const char (*)[33])"[TREASURE] treasure ended @time ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" player: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "checkAndRemoveDetector",
      1755);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v20,
           (const char (*)[35])"[TREASURE] config nullptr. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
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

// Line 1786: range 0000000014975B82-0000000014977F49
void __cdecl TreasureMapActivity::doRefresh(TreasureMapActivity *const this, bool is_daily)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivityTreasureMapExcelConfigMgr *v5; // rdx
  uint32_t v6; // ecx
  proto::TreasureMapScheduleBin *p_bin_data; // rcx
  uint32_t v8; // ecx
  char v9; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v10; // rax
  std::pair<unsigned int,unsigned int> *v11; // rdx
  const google::protobuf::Map<unsigned int,bool> *v12; // rax
  const google::protobuf::Map<unsigned int,bool> *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  Scene *v27; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t active; // eax
  unsigned int v35; // eax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rcx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  const ActivityTreasureMapExcelConfigMgr *ConfigMgr; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  uint32_t v45; // ecx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  uint32_t v49; // eax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rcx
  Scene *v55; // rax
  SceneBlockGroupComp *v56; // rax
  unsigned __int64 p_M_left; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rcx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  const ActivityTreasureMapExcelConfigMgr *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rcx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  uint32_t v76; // ecx
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rcx
  Scene *v82; // rax
  SceneBlockGroupComp *v83; // rax
  unsigned __int64 v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rcx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v94; // rax
  std::pair<unsigned int,unsigned int> *v95; // rax
  std::pair<unsigned int,unsigned int> *v96; // rdx
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *v97; // rax
  uint32_t v98; // ecx
  common::milog::MiLogStream *v99; // rcx
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-350h]
  unsigned int (__fastcall *__l)(common::milog::MiLogStream *, google::protobuf::Map<unsigned int,bool>::const_iterator *, __int64); // [rsp+10h] [rbp-350h]
  unsigned int (__fastcall *v102)(common::milog::MiLogStream *, google::protobuf::Map<unsigned int,bool>::const_iterator *, __int64); // [rsp+20h] [rbp-340h]
  uint32_t last_active_region_index; // [rsp+28h] [rbp-338h]
  common::milog::MiLogStream *v104; // [rsp+28h] [rbp-338h]
  common::milog::MiLogStream *v105; // [rsp+28h] [rbp-338h]
  common::milog::MiLogStream *v106; // [rsp+28h] [rbp-338h]
  bool v107; // [rsp+28h] [rbp-338h]
  common::milog::MiLogStream *v108; // [rsp+28h] [rbp-338h]
  common::milog::MiLogStream *v109; // [rsp+28h] [rbp-338h]
  bool v110; // [rsp+28h] [rbp-338h]
  common::milog::MiLogStream *v111; // [rsp+28h] [rbp-338h]
  std::allocator<unsigned int> __a; // [rsp+47h] [rbp-319h] BYREF
  unsigned int val; // [rsp+48h] [rbp-318h] BYREF
  uint32_t i; // [rsp+4Ch] [rbp-314h]
  uint32_t end_time; // [rsp+50h] [rbp-310h]
  uint32_t now_time; // [rsp+54h] [rbp-30Ch]
  unsigned int valid_count; // [rsp+5Ch] [rbp-304h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+60h] [rbp-300h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin_0; // [rsp+68h] [rbp-2F8h] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+70h] [rbp-2F0h]
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+78h] [rbp-2E8h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *region_id; // [rsp+80h] [rbp-2E0h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *active_region_index; // [rsp+88h] [rbp-2D8h]
  const proto::TreasureMapRegionBin *region_data; // [rsp+90h] [rbp-2D0h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+98h] [rbp-2C8h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+A0h] [rbp-2C0h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+A8h] [rbp-2B8h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_0; // [rsp+B0h] [rbp-2B0h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+B8h] [rbp-2A8h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+C0h] [rbp-2A0h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+C8h] [rbp-298h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+D0h] [rbp-290h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *coins; // [rsp+D8h] [rbp-288h]
  const google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range_1; // [rsp+E0h] [rbp-280h]
  const proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+E8h] [rbp-278h]
  const data::TreasureMapBonusRegionExcelConfig *bonus_config_ptr; // [rsp+F0h] [rbp-270h]
  const proto::TreasureMapRegionBin *region_data_0; // [rsp+F8h] [rbp-268h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr_0; // [rsp+100h] [rbp-260h]
  std::pair<unsigned int,unsigned int> __for_end; // [rsp+108h] [rbp-258h] BYREF
  google::protobuf::Map<unsigned int,bool>::const_iterator b; // [rsp+110h] [rbp-250h] BYREF
  common::milog::MiLogStream v142; // [rsp+130h] [rbp-230h] BYREF
  char v143[528]; // [rsp+150h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v143;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 4 14 region_id:1809 48 4 14 region_id:1860 64 4 13 bonus_id:1900 80 12 15 region_opt:1936 "
                        "112 16 14 scene_ptr:1918 144 24 15 groups_vec:1816 208 24 20 done_groups_vec:1820 272 24 14 coin"
                        "s_vec:1821 336 24 9 iter:1825 400 48 20 scene_group_map:1838";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::doRefresh;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862731] = -218959360;
  v4[536862732] = 62194;
  v4[536862734] = -202116109;
  TreasureMapActivity::checkAndRemoveDetector(this);
  config_mgr = TreasureMapActivity::getConfigMgr(this);
  v5 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(v5, this->activity_id_);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v142,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "doRefresh",
      1793);
    common::milog::MiLogStream::operator()(&v142, "[TREASURE] base Config Not found");
    common::milog::MiLogStream::~MiLogStream(&v142);
    goto LABEL_147;
  }
  if ( is_daily )
    TreasureMapActivity::notifyActiveRegionIndex(this);
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->treasure_days);
  }
  v6 = config_ptr->treasure_days + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  end_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v6);
  now_time = common::tools::TimeUtils::getNow();
  if ( now_time < end_time )
  {
    *(std::optional<std::pair<unsigned int,unsigned int> > *)(v2 + 80) = TreasureMapActivity::getActiveRegion(this);
    if ( std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80)) )
    {
      v95 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 80));
      v96 = v95;
      if ( ((unsigned __int8)v95 & 7) >= *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v95->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v95 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v95->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v95, 8LL);
      }
      __for_end = *v96;
      region_id = std::get<0ul,unsigned int,unsigned int>(&__for_end);
      v97 = std::get<1ul,unsigned int,unsigned int>(&__for_end);
      active_region_index = v97;
      if ( *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v97 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v97);
      }
      v98 = *active_region_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_active_region_index_);
      }
      if ( v98 > this->last_active_region_index_ )
      {
        TreasureMapActivity::tryRegisterActiveRegionGroups(this, 0);
        TreasureMapActivity::tryRegisterMpGroups(this);
        common::milog::MiLogStream::create(
          &v142,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "doRefresh",
          1944);
        v99 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v142,
                (const char (*)[33])"[TREASURE] daily refresh player ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v99, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v142);
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_active_region_index_);
    }
    last_active_region_index = this->last_active_region_index_;
    if ( last_active_region_index < proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_) )
    {
      p_bin_data = &this->bin_data_;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_active_region_index_);
      }
      region_data = proto::TreasureMapScheduleBin::region_list(p_bin_data, this->last_active_region_index_);
      *(_DWORD *)(v2 + 32) = proto::TreasureMapRegionBin::region_id(region_data);
      region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                            config_mgr,
                            *(_DWORD *)(v2 + 32));
      if ( !region_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v142,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "doRefresh",
          1813);
        common::milog::MiLogStream::operator()(
          &v142,
          "[TREASURE] Region<%u> Config Not found",
          *(unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v142);
        goto LABEL_147;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
      if ( !(unsigned int)TreasureMapActivity::getRegionMpGroupID(this, *(_DWORD *)(v2 + 32)) )
        goto LABEL_26;
      v8 = proto::TreasureMapRegionBin::current_progress(region_data);
      if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&region_config_ptr->mp_token_threshold);
      }
      if ( v8 >= region_config_ptr->mp_token_threshold )
        v9 = 0;
      else
LABEL_26:
        v9 = 1;
      if ( v9 )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 208));
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 272));
        group_coins_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                            &this->region_to_group_coins_map_,
                            (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 32));
        __for_range = group_coins_map;
        __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(group_coins_map)._M_cur;
        __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(group_coins_map)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                  &__for_begin,
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0) )
        {
          v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
          v11 = (std::pair<unsigned int,unsigned int> *)v10;
          if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v10, 8LL);
          }
          __for_end = *v11;
          group_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
          coins = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
          v12 = proto::TreasureMapRegionBin::done_group_map(region_data);
          google::protobuf::Map<unsigned int,bool>::find(
            (google::protobuf::Map<unsigned int,bool>::const_iterator *)(v2 + 336),
            v12,
            group_id);
          v13 = proto::TreasureMapRegionBin::done_group_map(region_data);
          google::protobuf::Map<unsigned int,bool>::end(&b, v13);
          if ( google::protobuf::operator==(
                 (const google::protobuf::Map<unsigned int,bool>::const_iterator *)(v2 + 336),
                 &b) )
          {
            std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 144), group_id);
            std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 272), coins);
          }
          else
          {
            std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 208), group_id);
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v142,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "doRefresh",
          1836);
        v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v142,
                (const char (*)[27])"[TREASURE] unload groups: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int>(v14, (const std::vector<unsigned int> *)(v2 + 144));
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" coins: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int>(v16, (const std::vector<unsigned int> *)(v2 + 272));
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v17,
                (const char (*)[16])". done groups: ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int>(v18, (const std::vector<unsigned int> *)(v2 + 208));
        v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])"@region ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 32));
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" player: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v22, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v142);
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 400));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        SceneComp = Player::getSceneComp(this->player_);
        valid_count = PlayerSceneComp::getGroupSceneMap(
                        SceneComp,
                        (const std::vector<unsigned int> *)(v2 + 144),
                        (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 400));
        if ( valid_count < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v142,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "doRefresh",
            1842);
          v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v142,
                  (const char (*)[20])"[TREASURE] groups: ");
          v25 = common::milog::MiLogStream::operator<<<unsigned int>(v24, (const std::vector<unsigned int> *)(v2 + 144));
          v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v25,
                  (const char (*)[25])" invalid scene. @region ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v142);
        }
        __for_range_0 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 400);
        __for_begin_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 400))._M_node;
        __for_end = (std::pair<unsigned int,unsigned int>)std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_0)._M_node;
        while ( std::operator!=(
                  &__for_begin_0,
                  (const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Self *)&__for_end) )
        {
          __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
          scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
          group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
          if ( !std::operator==<Scene>(0LL, scene_ptr) )
          {
            v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
            BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v27);
            if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
              BlockGroupComp = __asan_report_load8(BlockGroupComp);
            v29 = *(_QWORD *)BlockGroupComp + 104LL;
            if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
              BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
            if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v29)(
                   BlockGroupComp,
                   group_vec,
                   1LL) )
            {
              common::milog::MiLogStream::create(
                &v142,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/treasure_map_activity.cpp",
                "doRefresh",
                1852);
              v30 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v142,
                      (const char (*)[31])"[TREASURE] unregister groups: ");
              v31 = common::milog::MiLogStream::operator<<<unsigned int>(v30, group_vec);
              v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v31,
                      (const char (*)[18])" failed. @region ");
              v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v32,
                       (const unsigned int *)(v2 + 32));
              v33 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
              common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v104, v33);
              common::milog::MiLogStream::~MiLogStream(&v142);
            }
          }
          std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
        }
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 400));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 272));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 208));
      }
      for ( i = 0; ; ++i )
      {
        active = proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_);
        if ( i > active )
          break;
        v35 = proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_);
        if ( i >= v35 )
          break;
        region_data_0 = proto::TreasureMapScheduleBin::region_list(&this->bin_data_, i);
        *(_DWORD *)(v2 + 48) = proto::TreasureMapRegionBin::region_id(region_data_0);
        *(_DWORD *)(v2 + 64) = TreasureMapActivity::getRegionMpGroupID(this, *(_DWORD *)(v2 + 48));
        if ( !*(_DWORD *)(v2 + 64) )
        {
          common::milog::MiLogStream::create(
            &v142,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "doRefresh",
            1864);
          v37 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v142,
                  (const char (*)[19])"[TREASURE] region ");
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v37,
                  (const unsigned int *)(v2 + 48));
          v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v38, (const char (*)[13])" has no MP. ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
LABEL_77:
          operator<<(v39, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v142);
          continue;
        }
        if ( proto::TreasureMapRegionBin::is_mp_challenge_done(region_data_0) )
        {
          common::milog::MiLogStream::create(
            &v142,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "doRefresh",
            1869);
          v40 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v142,
                  (const char (*)[19])"[TREASURE] region ");
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v40,
                  (const unsigned int *)(v2 + 48));
          v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v41, (const char (*)[14])off_25516800);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          goto LABEL_77;
        }
        ConfigMgr = TreasureMapActivity::getConfigMgr(this);
        region_config_ptr_0 = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                                ConfigMgr,
                                *(_DWORD *)(v2 + 48));
        if ( !region_config_ptr_0 )
        {
          common::milog::MiLogStream::create(
            &v142,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "doRefresh",
            1875);
          v43 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v142,
                  (const char (*)[19])"[TREASURE] region ");
          v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v43,
                  (const unsigned int *)(v2 + 48));
          v39 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v44,
                  (const char (*)[18])" config nullptr. ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          goto LABEL_77;
        }
        v45 = proto::TreasureMapRegionBin::current_progress(region_data_0);
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr_0->mp_token_threshold >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr_0->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr_0->mp_token_threshold);
        }
        if ( v45 < region_config_ptr_0->mp_token_threshold )
        {
          common::milog::MiLogStream::create(
            &v142,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "doRefresh",
            1880);
          v46 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v142,
                  (const char (*)[19])"[TREASURE] region ");
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v46,
                  (const unsigned int *)(v2 + 48));
          v105 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v47, (const char (*)[11])" progress ");
          val = proto::TreasureMapRegionBin::current_progress(region_data_0);
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, &val);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v48,
                  (const char (*)[16])" not reach mp. ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          goto LABEL_77;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v49 = (unsigned int)Player::getSceneComp(this->player_);
        PlayerSceneComp::getPersonalSceneByGroupId((PlayerSceneComp *const)(v2 + 112), v49);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v142,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "doRefresh",
            1887);
          v50 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v142,
                  (const char (*)[22])"[TREASURE] mp group: ");
          v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v50,
                  (const unsigned int *)(v2 + 64));
          v52 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v51,
                  (const char (*)[25])" scene nullptr. @region ");
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v52,
                  (const unsigned int *)(v2 + 48));
          v54 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v53, (const char (*)[3])". ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v54, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v142);
        }
        else
        {
          v55 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v56 = Scene::getBlockGroupComp(v55);
          v106 = (common::milog::MiLogStream *)v56;
          if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v56);
          p_M_left = (unsigned __int64)&v106->log_->log_level_info_map_._M_t._M_impl._M_header._M_left;
          if ( *(_BYTE *)((p_M_left >> 3) + 0x7FFF8000) )
            p_M_left = __asan_report_load8(&v106->log_->log_level_info_map_._M_t._M_impl._M_header._M_left);
          v102 = *(unsigned int (__fastcall **)(common::milog::MiLogStream *, google::protobuf::Map<unsigned int,bool>::const_iterator *, __int64))p_M_left;
          val = *(_DWORD *)(v2 + 64);
          __la._M_array = &val;
          __la._M_len = 1LL;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)&b, __la, &__a);
          v107 = v102(v106, &b, 1LL) != 0;
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&b);
          std::allocator<unsigned int>::~allocator(&__a);
          if ( v107 )
          {
            common::milog::MiLogStream::create(
              &v142,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/treasure_map_activity.cpp",
              "doRefresh",
              1892);
            v58 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v142,
                    (const char (*)[33])"[TREASURE] unregister mp group: ");
            v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v58,
                    (const unsigned int *)(v2 + 64));
            v60 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v59,
                    (const char (*)[18])" failed. @region ");
            v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v60,
                    (const unsigned int *)(v2 + 48));
            v62 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v61, (const char (*)[3])". ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v142,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_map_activity.cpp",
              "doRefresh",
              1895);
            v63 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v142,
                    (const char (*)[33])"[TREASURE] unregister mp group: ");
            v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v63,
                    (const unsigned int *)(v2 + 64));
            v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v64,
                    (const char (*)[16])" done. @region ");
            v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v65,
                    (const unsigned int *)(v2 + 48));
            v62 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v66, (const char (*)[3])". ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
          }
          v108 = operator<<(v62, this->player_);
          v67 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v108, v67);
          common::milog::MiLogStream::~MiLogStream(&v142);
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
      }
      __for_range_1 = proto::TreasureMapScheduleBin::challenge_list(&this->bin_data_);
      __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range_1).it_;
      __for_end = (std::pair<unsigned int,unsigned int>)google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range_1).it_;
      while ( 1 )
      {
        if ( !google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator!=(
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapBonusChallengeBin> *const)&__for_begin_0,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapBonusChallengeBin>::iterator *)&__for_end) )
        {
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
          goto LABEL_135;
        }
        bonus_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapBonusChallengeBin> *const)&__for_begin_0);
        *(_DWORD *)(v2 + 64) = proto::TreasureMapBonusChallengeBin::config_id(bonus_data);
        v68 = TreasureMapActivity::getConfigMgr(this);
        bonus_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(
                             v68,
                             *(_DWORD *)(v2 + 64));
        if ( !bonus_config_ptr )
          break;
        if ( !proto::TreasureMapBonusChallengeBin::is_active(bonus_data) )
        {
          common::milog::MiLogStream::create(
            &v142,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "doRefresh",
            1909);
          v72 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v142,
                  (const char (*)[19])"[TREASURE] bonus: ");
          v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v72,
                  (const unsigned int *)(v2 + 64));
          v71 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v73, (const char (*)[17])off_25516500);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          goto LABEL_110;
        }
        if ( proto::TreasureMapBonusChallengeBin::is_done(bonus_data) )
        {
          common::milog::MiLogStream::create(
            &v142,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/treasure_map_activity.cpp",
            "doRefresh",
            1914);
          v74 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v142,
                  (const char (*)[19])"[TREASURE] bonus: ");
          v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v74,
                  (const unsigned int *)(v2 + 64));
          v71 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v75, (const char (*)[11])off_25516540);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          goto LABEL_110;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v76 = (unsigned int)Player::getSceneComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&bonus_config_ptr->group_id);
        }
        PlayerSceneComp::getPersonalSceneByGroupId((PlayerSceneComp *const)(v2 + 112), v76);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v142,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "doRefresh",
            1921);
          v77 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v142,
                  (const char (*)[25])"[TREASURE] bonus group: ");
          v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &bonus_config_ptr->group_id);
          v79 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v78,
                  (const char (*)[25])" scene nullptr. @region ");
          v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v79,
                  (const unsigned int *)(v2 + 32));
          v81 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v80, (const char (*)[3])". ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v81, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v142);
        }
        else
        {
          v82 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v83 = Scene::getBlockGroupComp(v82);
          v109 = (common::milog::MiLogStream *)v83;
          if ( *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v83);
          v84 = (unsigned __int64)&v109->log_->log_level_info_map_._M_t._M_impl._M_header._M_left;
          if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
            v84 = __asan_report_load8(&v109->log_->log_level_info_map_._M_t._M_impl._M_header._M_left);
          __l = *(unsigned int (__fastcall **)(common::milog::MiLogStream *, google::protobuf::Map<unsigned int,bool>::const_iterator *, __int64))v84;
          if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&bonus_config_ptr->group_id);
          }
          val = bonus_config_ptr->group_id;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            (std::vector<unsigned int> *const)&b,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
            &__a);
          v110 = __l(v109, &b, 1LL) != 0;
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&b);
          std::allocator<unsigned int>::~allocator(&__a);
          if ( v110 )
          {
            common::milog::MiLogStream::create(
              &v142,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/treasure_map_activity.cpp",
              "doRefresh",
              1926);
            v85 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v142,
                    (const char (*)[36])"[TREASURE] unregister bonus group: ");
            v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v85,
                    &bonus_config_ptr->group_id);
            v87 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v86,
                    (const char (*)[17])" failed. @bonus ");
            v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v87,
                    (const unsigned int *)(v2 + 64));
            v89 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v88, (const char (*)[3])". ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v142,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_map_activity.cpp",
              "doRefresh",
              1929);
            v90 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v142,
                    (const char (*)[36])"[TREASURE] unregister bonus group: ");
            v91 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v90,
                    &bonus_config_ptr->group_id);
            v92 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v91, (const char (*)[9])" @bonus ");
            v93 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v92,
                    (const unsigned int *)(v2 + 64));
            v89 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v93, (const char (*)[3])". ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
          }
          v111 = operator<<(v89, this->player_);
          v94 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v111, v94);
          common::milog::MiLogStream::~MiLogStream(&v142);
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
LABEL_133:
        google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::TreasureMapBonusChallengeBin> *const)&__for_begin_0);
      }
      common::milog::MiLogStream::create(
        &v142,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "doRefresh",
        1904);
      v69 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v142,
              (const char (*)[19])"[TREASURE] bonus: ");
      v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v2 + 64));
      v71 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v70,
              (const char (*)[20])" config not found. ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_110:
      operator<<(v71, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v142);
      goto LABEL_133;
    }
LABEL_135:
    common::milog::MiLogStream::create(
      &v142,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "doRefresh",
      1932);
    common::milog::MiLogStream::operator()(&v142, "no region active");
    common::milog::MiLogStream::~MiLogStream(&v142);
  }
LABEL_147:
  if ( v143 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 1950: range 0000000014977F4A-0000000014977FA3
void __cdecl TreasureMapActivity::onDailyRefresh(TreasureMapActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    TreasureMapActivity::doRefresh(this, 1);
};

// Line 1959: range 0000000014977FF2-000000001497825B
void __cdecl TreasureMapActivity::worldBroadcastProto(
        TreasureMapActivity *const this,
        const google::protobuf::Message *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  World *v6; // r14
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 world_ptr:1960";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::worldBroadcastProto;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "worldBroadcastProto",
      1963);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v7,
           (const char (*)[39])"[TREASURE] getCurWorld fails. player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v6 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::function<ForeachPolicy ()(Player &)>::function<TreasureMapActivity::worldBroadcastProto(google::protobuf::Message const&)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v7,
      (TreasureMapActivity::worldBroadcastProto::<lambda(Player&)>)proto);
    World::foreachPlayer(v6, (std::function<ForeachPolicy(Player&)> *)&v7);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v7);
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 32));
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

// Line 1967: range 0000000014977FA4-0000000014977FF1
ForeachPolicy __cdecl TreasureMapActivity::worldBroadcastProto(google::protobuf::Message const&)::{lambda(Player &)#1}::operator()(
        const TreasureMapActivity::worldBroadcastProto::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Player::sendProto(player, __closure->__proto);
  return 0;
};

// Line 1975: range 000000001497825C-000000001497844E
bool __cdecl TreasureMapActivity::isTreasureActive(const TreasureMapActivity *const this)
{
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  common::milog::MiLogStream *v3; // rcx
  uint32_t v4; // ecx
  unsigned int end_time; // [rsp+10h] [rbp-40h]
  const data::TreasureMapExcelConfig *treasure_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( !BaseActivity::isOpening(this, 0) )
    return 0;
  ConfigMgr = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
    __asan_report_load4(&this->activity_id_);
  }
  treasure_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(
                          ConfigMgr,
                          this->activity_id_);
  if ( treasure_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&treasure_config_ptr->treasure_days >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)treasure_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&treasure_config_ptr->treasure_days >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&treasure_config_ptr->treasure_days);
    }
    v4 = treasure_config_ptr->treasure_days + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    end_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v4);
    return (unsigned int)common::tools::TimeUtils::getNow() < end_time;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "isTreasureActive",
      1984);
    v3 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v8,
           (const char (*)[35])"[TREASURE] config nullptr. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v3, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return 0;
  }
};

// Line 1999: range 0000000014978450-000000001497854D
void __cdecl TreasureMapActivity::onPlayerEnterSceneEvent(
        TreasureMapActivity *const this,
        const PlayerEnterSceneEvent *event)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "onPlayerEnterSceneEvent",
    2000);
  v2 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
         &v5,
         (const char (*)[60])"[TREASURE] re-notify detector data on enter scene. player: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v3 = operator<<(v2, this->player_);
  v4 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v3, (const char (*)[13])" other uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->uid);
  common::milog::MiLogStream::~MiLogStream(&v5);
  TreasureMapActivity::notifyDetectorData(this, 0);
  TreasureMapActivity::notifyHostInfo(this);
};

// Line 2006: range 000000001497854E-0000000014978CC4
void __cdecl TreasureMapActivity::clearAllGroups(TreasureMapActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const unsigned int *M_current; // r15
  const unsigned int *v5; // r14
  PlayerSceneComp *SceneComp; // rax
  Scene *v7; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-1A0h] BYREF
  std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-198h] BYREF
  std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator __for_begin_0; // [rsp+20h] [rbp-190h] BYREF
  std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator __for_end_0; // [rsp+28h] [rbp-188h] BYREF
  const std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig> *region_config_map; // [rsp+30h] [rbp-180h]
  const std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig> *__for_range; // [rsp+38h] [rbp-178h]
  const std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig> *bonus_config_map; // [rsp+40h] [rbp-170h]
  const std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig> *__for_range_0; // [rsp+48h] [rbp-168h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_1; // [rsp+50h] [rbp-160h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+58h] [rbp-158h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+60h] [rbp-150h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+68h] [rbp-148h]
  const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> *v28; // [rsp+70h] [rbp-140h]
  std::tuple_element<0,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *bonus_id; // [rsp+78h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *bonus_config; // [rsp+80h] [rbp-130h]
  const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> *v31; // [rsp+88h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> >::type *region_id; // [rsp+90h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> >::type *region_config; // [rsp+98h] [rbp-118h]
  common::milog::MiLogStream v34; // [rsp+A0h] [rbp-110h] BYREF
  char v35[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 24 15 groups_vec:2007 112 48 20 scene_group_map:2023";
  *(_QWORD *)(v1 + 16) = TreasureMapActivity::clearAllGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 48));
  region_config_map = &TreasureMapActivity::getConfigMgr(this)->treasure_map_region_excel_config_map;
  __for_range = region_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::begin(region_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::end(region_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::operator*(&__for_begin);
    region_id = std::get<0ul,unsigned int const,data::TreasureMapRegionExcelConfig>(v31);
    region_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureMapRegionExcelConfig>(v31);
    M_current = std::vector<unsigned int>::end(&region_config->group_list)._M_current;
    v5 = std::vector<unsigned int>::begin(&region_config->group_list)._M_current;
    __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>::__node_type *)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 48))._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0,
      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0);
    std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
      (std::vector<unsigned int> *const)(v1 + 48),
      (std::vector<unsigned int>::const_iterator)__for_end_0._M_cur,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v5,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)region_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&region_config->mp_group_id);
    }
    if ( region_config->mp_group_id )
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 48), &region_config->mp_group_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::operator++(&__for_begin);
  }
  bonus_config_map = &TreasureMapActivity::getConfigMgr(this)->treasure_map_bonus_region_excel_config_map;
  __for_range_0 = bonus_config_map;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::begin(bonus_config_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v28 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator*(&__for_begin_0);
    bonus_id = std::get<0ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v28);
    bonus_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v28);
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 48), &bonus_config->group_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator++(&__for_begin_0);
  }
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v1 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  PlayerSceneComp::getGroupSceneMap(
    SceneComp,
    (const std::vector<unsigned int> *)(v1 + 48),
    (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v1 + 112));
  __for_range_1 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v1 + 112);
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>::__node_type *)std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v1 + 112))._M_node;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>::__node_type *)std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Self *)&__for_end_0) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > > *const)&__for_begin_0);
    scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
    group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
    if ( !std::operator==<Scene>(0LL, scene_ptr) )
    {
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v7);
      if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8(BlockGroupComp);
      v9 = *(_QWORD *)BlockGroupComp + 104LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v9)(
             BlockGroupComp,
             group_vec,
             1LL) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "clearAllGroups",
          2033);
        v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v34,
                (const char (*)[29])"[TREASURE] clear all groups:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, group_vec);
        v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v11,
                (const char (*)[17])" failed player: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
    }
    std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > > *const)&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/treasure_map_activity.cpp",
    "clearAllGroups",
    2036);
  v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v34,
          (const char (*)[31])"[TREASURE] cleared all groups:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, (const std::vector<unsigned int> *)(v1 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])". player: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v15, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v34);
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v1 + 112));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 48));
  if ( v35 == (char *)v1 )
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

// Line 2040: range 0000000014978CC6-0000000014978D2D
bool __cdecl TreasureMapActivity::isTreasureGroup(const TreasureMapActivity *const this, uint32_t group_id)
{
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-8h]

  config_mgr = TreasureMapActivity::getConfigMgr(this);
  return ActivityTreasureMapExcelConfigMgr::getBonusIDByGroupID(config_mgr, group_id)
      || ActivityTreasureMapExcelConfigMgr::getRegionByGroupID(config_mgr, group_id) != 0;
};

// Line 2059: range 0000000014978D2E-00000000149796FD
void __cdecl TreasureMapActivity::tryGrantRandomFragments(
        TreasureMapActivity *const this,
        const data::TreasureMapRegionExcelConfig *config,
        uint32_t left_token)
{
  float v3; // xmm1_4
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v7; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v15; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v16; // rax
  google::protobuf::Map<unsigned int,unsigned int>::const_pointer v17; // rdx
  unsigned int *v18; // rax
  unsigned int second; // ecx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rax
  _DWORD *v21; // rdx
  uint32_t id; // r14d
  char *v23; // rsi
  unsigned int *v24; // rax
  uint32_t *v25; // rdx
  char v26; // cl
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  uint32_t fragment_num; // [rsp+28h] [rbp-1C8h]
  uint32_t count; // [rsp+2Ch] [rbp-1C4h]
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::iterator __for_begin; // [rsp+30h] [rbp-1C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::iterator __for_end; // [rsp+38h] [rbp-1B8h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+40h] [rbp-1B0h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+48h] [rbp-1A8h] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+50h] [rbp-1A0h]
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range; // [rsp+58h] [rbp-198h]
  proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+60h] [rbp-190h]
  const data::TreasureMapBonusRegionExcelConfig *bonus_config_ptr; // [rsp+68h] [rbp-188h]
  google::protobuf::Map<unsigned int,unsigned int> *fragment_map; // [rsp+70h] [rbp-180h]
  std::vector<unsigned int> *__for_range_0; // [rsp+78h] [rbp-178h]
  common::milog::MiLogStream v47; // [rsp+80h] [rbp-170h] BYREF
  char v48[336]; // [rsp+A0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 13 bonus_id:2061 48 4 19 fragment_index:2116 64 8 9 iter:2062 96 24 17 fragment_vec:2086 "
                        "160 24 9 iter:2090 224 24 15 result_vec:2113";
  *(_QWORD *)(v4 + 16) = TreasureMapActivity::tryGrantRandomFragments;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  config_mgr = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&config->fragment_bonus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->fragment_bonus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->fragment_bonus_id);
  }
  *(_DWORD *)(v4 + 32) = config->fragment_bonus_id;
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(
                                                                                                    &this->region_bonus_fragments_map_,
                                                                                                    &config->id);
  fragment_num = 0;
  __for_end_0._M_current = (unsigned int *)std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(&this->region_bonus_fragments_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)&__for_end_0) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v4 + 64));
    p_second = &v7->second.second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    fragment_num = v7->second.second;
  }
  if ( fragment_num )
  {
    __for_range = proto::TreasureMapScheduleBin::mutable_challenge_list(&this->bin_data_);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      bonus_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator*(&__for_begin);
      if ( proto::TreasureMapBonusChallengeBin::config_id(bonus_data) == *(_DWORD *)(v4 + 32) )
      {
        bonus_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(
                             config_mgr,
                             *(_DWORD *)(v4 + 32));
        if ( bonus_config_ptr )
        {
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 96));
          count = 0;
          for ( *(_DWORD *)(v4 + 48) = 0; ; ++*(_DWORD *)(v4 + 48) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->fragment_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)bonus_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->fragment_num >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&bonus_config_ptr->fragment_num);
            }
            if ( bonus_config_ptr->fragment_num <= *(_DWORD *)(v4 + 48) )
              break;
            v15 = proto::TreasureMapBonusChallengeBin::fragment_map(bonus_data);
            google::protobuf::Map<unsigned int,unsigned int>::find(
              (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v4 + 160),
              v15,
              (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v4 + 48));
            v16 = proto::TreasureMapBonusChallengeBin::fragment_map(bonus_data);
            google::protobuf::Map<unsigned int,unsigned int>::end(
              (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v4 + 224),
              v16);
            if ( google::protobuf::operator==(
                   (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v4 + 160),
                   (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v4 + 224)) )
            {
              std::vector<unsigned int>::push_back(
                (std::vector<unsigned int> *const)(v4 + 96),
                (const std::vector<unsigned int>::value_type *)(v4 + 48));
            }
            else
            {
              v17 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator->((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)(v4 + 160));
              v18 = &v17->second;
              if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v18);
              }
              second = v17->second;
              if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->id);
              }
              if ( second == config->id )
                ++count;
            }
          }
          if ( count < fragment_num )
          {
            if ( left_token )
              fragment_num = !common::tools::RandomUtils::randomTestProbability(v3);
            else
              fragment_num -= count;
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 224));
            common::tools::RandomUtils::randomSelect<unsigned int>(
              (const std::vector<unsigned int> *)(v4 + 96),
              (std::vector<unsigned int> *)(v4 + 224),
              fragment_num);
            fragment_map = proto::TreasureMapBonusChallengeBin::mutable_fragment_map(bonus_data);
            __for_range_0 = (std::vector<unsigned int> *)(v4 + 224);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 224))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              v21 = v20;
              if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v20);
              }
              *(_DWORD *)(v4 + 48) = *v21;
              if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->id);
              }
              id = config->id;
              v23 = (char *)(v4 + 48);
              v24 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                      fragment_map,
                      (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v4 + 48));
              v25 = v24;
              v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
              if ( v26 != 0 && (char)(((unsigned __int8)v24 & 7) + 3) >= v26 )
              {
                LOBYTE(v23) = v26 != 0;
                __asan_report_store4(v24, v23, v24);
              }
              *v25 = id;
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_map_activity.cpp",
              "tryGrantRandomFragments",
              2120);
            v27 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v47, this);
            v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" region:");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &config->id);
            v30 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v29,
                    (const char (*)[18])" grant fragments:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int>(
                    v30,
                    (const std::vector<unsigned int> *)(v4 + 224));
            v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v31,
                    (const char (*)[12])" for bonus:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v4 + 32));
            common::milog::MiLogStream::~MiLogStream(&v47);
            if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 224)) )
              BaseActivity::notifyClientData(this, 0);
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 224));
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 96));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_map_activity.cpp",
            "tryGrantRandomFragments",
            2083);
          v12 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v47, this);
          v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" bonus:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])" config not found");
          common::milog::MiLogStream::~MiLogStream(&v47);
        }
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "tryGrantRandomFragments",
      2070);
    v9 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v47, this);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" region:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->id);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" has no fragment.");
    common::milog::MiLogStream::~MiLogStream(&v47);
  }
  if ( v48 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 2130: range 00000000149796FE-0000000014979A11
std::vector<unsigned int> *__fastcall TreasureMapActivity::getBonusTreasureMapSolution(
        std::vector<unsigned int> *retstr,
        TreasureMapActivity *const this,
        uint32_t group_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  const ActivityTreasureMapExcelConfigMgr *ConfigMgr; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v7; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  const data::BonusTreasureSolutionExcelConfig *solution_config_ptr; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 group_id:2129 64 8 9 iter:2131 96 24 14 empty_vec:2140";
  *(_QWORD *)(v3 + 16) = TreasureMapActivity::getBonusTreasureMapSolution;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = group_id;
  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->group_solution_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->group_solution_map_)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
          &__y) )
    goto LABEL_9;
  ConfigMgr = TreasureMapActivity::getConfigMgr(this);
  v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
  p_second = &v7->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_second);
  }
  solution_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findBonusTreasureSolutionExcelConfig(
                          ConfigMgr,
                          v7->second);
  if ( solution_config_ptr )
  {
    std::vector<unsigned int>::vector(retstr, &solution_config_ptr->solution);
  }
  else
  {
LABEL_9:
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "getBonusTreasureMapSolution",
      2141);
    v9 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v16, this);
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" group:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v11,
      (const char (*)[27])" not found in solution map");
    common::milog::MiLogStream::~MiLogStream(&v16);
    std::vector<unsigned int>::vector(retstr, (std::vector<unsigned int> *)(v3 + 96));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 2146: range 0000000014979AB6-000000001497A194
void __cdecl TreasureMapActivity::notifyHostInfo(const TreasureMapActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  google::protobuf::uint32 v14; // eax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // [rsp+10h] [rbp-140h]
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::const_iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::const_iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  const google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin> *__for_range; // [rsp+30h] [rbp-120h]
  const proto::TreasureMapRegionBin *region_data; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-110h] BYREF
  char v21[240]; // [rsp+60h] [rbp-F0h] BYREF
  TreasureMapActivity::notifyHostInfo::<lambda(Player&)> v22; // 0:rsi.8,8:edx.4

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 21 owern_player_uid:2160 48 16 14 world_ptr:2147 80 16 21 owner_player_ptr:2153 112 40 11 notify:2167";
  *(_QWORD *)(v1 + 16) = TreasureMapActivity::notifyHostInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v1 + 48));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_map_activity.cpp",
      "notifyHostInfo",
      2150);
    v4 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v20, this);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           v4,
           (const char (*)[39])"[TREASURE] getCurWorld fails. player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v1 + 80));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "notifyHostInfo",
        2156);
      v6 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v20, this);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             v6,
             (const char (*)[39])"[TREASURE] getCurWorld fails. player: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v7, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      *(_DWORD *)(v1 + 32) = Player::getUid(v8);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      if ( Player::getUid(this->player_) == *(_DWORD *)(v1 + 32) )
      {
        proto::TreasureMapHostInfoNotify::TreasureMapHostInfoNotify((proto::TreasureMapHostInfoNotify *const)(v1 + 112));
        __for_range = proto::TreasureMapScheduleBin::region_list(&this->bin_data_);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          region_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin const>::operator*(&__for_begin);
          if ( proto::TreasureMapRegionBin::is_mp_challenge_open(region_data)
            && !proto::TreasureMapRegionBin::is_mp_challenge_done(region_data) )
          {
            v14 = proto::TreasureMapRegionBin::region_id(region_data);
            proto::TreasureMapHostInfoNotify::add_mp_challenge_region_list(
              (proto::TreasureMapHostInfoNotify *const)(v1 + 112),
              v14);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin const>::operator++(&__for_begin);
        }
        v15 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        v22.__owern_player_uid = *(_DWORD *)(v1 + 32);
        v22.__notify = (proto::TreasureMapHostInfoNotify *)(v1 + 112);
        std::function<ForeachPolicy ()(Player &)>::function<TreasureMapActivity::notifyHostInfo(void)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v20,
          v22);
        World::foreachPlayer(v15, (std::function<ForeachPolicy(Player&)> *)&v20);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v20);
        proto::TreasureMapHostInfoNotify::~TreasureMapHostInfoNotify((proto::TreasureMapHostInfoNotify *const)(v1 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "notifyHostInfo",
          2163);
        v9 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v20, this);
        v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])"[TREASURE] ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v11 = operator<<(v10, this->player_);
        v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v11, (const char (*)[32])off_2551A040);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 80));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 48));
  if ( v21 == (char *)v1 )
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

// Line 2175: range 0000000014979A12-0000000014979AB4
ForeachPolicy __cdecl TreasureMapActivity::notifyHostInfo(void)const::{lambda(Player &)#1}::operator()(
        const TreasureMapActivity::notifyHostInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owern_player_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__owern_player_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__owern_player_uid);
  }
  if ( Uid != __closure->__owern_player_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    Player::sendProto(player, __closure->__notify);
  }
  return 0;
};

// Line 2186: range 000000001497A196-000000001497A585
bool __cdecl TreasureMapActivity::checkCondIsMeet(TreasureMapActivity *const this, const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  bool result; // al
  std::vector<int>::const_reference v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::const_iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::const_iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-A0h]
  const google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range; // [rsp+30h] [rbp-90h]
  const proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+38h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 bonus_id:2197";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::checkCondIsMeet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  config_mgr = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  if ( cond->type == NEW_ACTIVITY_COND_TREASURE_MAP_BONUS_SPOT_GOT_ANY_FRAGMENT )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      v8 = std::vector<int>::operator[](&cond->param, 0LL);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v2 + 32) = *v9;
      if ( data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(
             config_mgr,
             *(_DWORD *)(v2 + 32)) )
      {
        __for_range = proto::TreasureMapScheduleBin::challenge_list(&this->bin_data_);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          bonus_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator*(&__for_begin);
          if ( proto::TreasureMapBonusChallengeBin::config_id(bonus_data) == *(_DWORD *)(v2 + 32)
            && proto::TreasureMapBonusChallengeBin::fragment_map_size(bonus_data) > 0 )
          {
            result = 1;
            goto LABEL_21;
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin const>::operator++(&__for_begin);
        }
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_map_activity.cpp",
          "checkCondIsMeet",
          2201);
        v10 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v19, this);
        v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" bonus:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" config not found.");
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "checkCondIsMeet",
        2194);
      v5 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v19, this);
      v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             v5,
             (const char (*)[25])" cond param size error, ");
      common::milog::MiLogStream::operator<<<int>(v6, &cond->param);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0;
    }
  }
  else
  {
    result = BaseActivity::checkCondIsMeet(this, cond);
  }
LABEL_21:
  if ( v20 == (char *)v2 )
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

// Line 2225: range 000000001497A586-000000001497A622
proto::TreasureMapRegionBin *__cdecl TreasureMapActivity::mutableRegionData(
        TreasureMapActivity *const this,
        uint32_t region_id)
{
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin> *__for_range; // [rsp+20h] [rbp-10h]
  proto::TreasureMapRegionBin *region_data; // [rsp+28h] [rbp-8h]

  __for_range = proto::TreasureMapScheduleBin::mutable_region_list(&this->bin_data_);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    region_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin>::operator*(&__for_begin);
    if ( region_id == proto::TreasureMapRegionBin::region_id(region_data) )
      return region_data;
    google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin>::operator++(&__for_begin);
  }
  return 0LL;
};

// Line 2237: range 000000001497A624-000000001497A6C0
proto::TreasureMapBonusChallengeBin *__cdecl TreasureMapActivity::mutableBonusChallengeBin(
        TreasureMapActivity *const this,
        uint32_t bonus_id)
{
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range; // [rsp+20h] [rbp-10h]
  proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+28h] [rbp-8h]

  __for_range = proto::TreasureMapScheduleBin::mutable_challenge_list(&this->bin_data_);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    bonus_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator*(&__for_begin);
    if ( bonus_id == proto::TreasureMapBonusChallengeBin::config_id(bonus_data) )
      return bonus_data;
    google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator++(&__for_begin);
  }
  return 0LL;
};

// Line 2250: range 000000001497A6C2-000000001497B054
void __fastcall TreasureMapActivity::resetOneRegion(TreasureMapActivity *const this, uint32_t region_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  Scene *v12; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v14; // rdx
  Scene *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  void (__fastcall *v18)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD); // r8
  Scene *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  void (__fastcall *v22)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD); // r8
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-1B8h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-1A8h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+30h] [rbp-1A0h]
  proto::TreasureMapRegionBin *region_data_ptr; // [rsp+38h] [rbp-198h]
  proto::TreasureMapRegionBin *region_data; // [rsp+40h] [rbp-190h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+48h] [rbp-188h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+50h] [rbp-180h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_0; // [rsp+58h] [rbp-178h]
  const data::TreasureMapBonusRegionExcelConfig *bonus_config_ptr; // [rsp+60h] [rbp-170h]
  proto::TreasureMapBonusChallengeBin *bonus_data_ptr; // [rsp+68h] [rbp-168h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *v34; // [rsp+70h] [rbp-160h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr_0; // [rsp+78h] [rbp-158h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec_0; // [rsp+80h] [rbp-150h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+88h] [rbp-148h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+90h] [rbp-140h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+98h] [rbp-138h]
  common::milog::MiLogStream v40; // [rsp+A0h] [rbp-130h] BYREF
  char v41[272]; // [rsp+C0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 16 mg_group_id:2271 64 4 14 region_id:2249 80 24 15 groups_vec:2270 144 48 20 scene_group_map:2276";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::resetOneRegion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 64) = region_id;
  config_mgr = TreasureMapActivity::getConfigMgr(this);
  region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                        config_mgr,
                        *(_DWORD *)(v2 + 64));
  if ( region_config_ptr )
  {
    region_data_ptr = TreasureMapActivity::mutableRegionData(this, *(_DWORD *)(v2 + 64));
    if ( region_data_ptr )
    {
      region_data = region_data_ptr;
      proto::TreasureMapRegionBin::Clear(region_data_ptr);
      proto::TreasureMapRegionBin::set_region_id(region_data_ptr, *(_DWORD *)(v2 + 64));
      group_coins_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                          &this->region_to_group_coins_map_,
                          (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 64));
      common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,unsigned int>>(
        (std::vector<unsigned int> *)(v2 + 80),
        group_coins_map);
      *(_DWORD *)(v2 + 48) = TreasureMapActivity::getRegionMpGroupID(this, *(_DWORD *)(v2 + 64));
      if ( *(_DWORD *)(v2 + 48) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v2 + 80),
          (const std::vector<unsigned int>::value_type *)(v2 + 48));
      std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = Player::getSceneComp(this->player_);
      PlayerSceneComp::getGroupSceneMap(
        SceneComp,
        (const std::vector<unsigned int> *)(v2 + 80),
        (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 144));
      __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 144);
      __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144))._M_node;
      __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
        scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        if ( !std::operator==<Scene>(0LL, scene_ptr) )
        {
          v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
          BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v12);
          if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8(BlockGroupComp);
          v14 = *(_QWORD *)BlockGroupComp + 104LL;
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
          (*(void (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v14)(
            BlockGroupComp,
            group_vec,
            1LL);
          v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
          v16 = (unsigned __int64)Scene::getBlockGroupComp(v15);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8(v16);
          v17 = *(_QWORD *)v16 + 96LL;
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8(*(_QWORD *)v16 + 96LL);
          v18 = *(void (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v17;
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
          {
            v16 = __asan_report_load4(&region_config_ptr->revise_level);
          }
          v18(v16, group_vec, region_config_ptr->revise_level, 0LL);
        }
        std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
      }
      std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::clear((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144));
      if ( *(_DWORD *)(v2 + 48) )
        std::vector<unsigned int>::pop_back((std::vector<unsigned int> *const)(v2 + 80));
      __for_range_0 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 144);
      __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144))._M_node;
      __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v34 = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
        scene_ptr_0 = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v34);
        group_vec_0 = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v34);
        if ( !std::operator==<Scene>(0LL, scene_ptr_0) )
        {
          v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr_0);
          v20 = (unsigned __int64)Scene::getBlockGroupComp(v19);
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v20 = __asan_report_load8(v20);
          v21 = *(_QWORD *)v20 + 96LL;
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v20 = __asan_report_load8(*(_QWORD *)v20 + 96LL);
          v22 = *(void (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v21;
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
          {
            v20 = __asan_report_load4(&region_config_ptr->revise_level);
          }
          v22(v20, group_vec_0, region_config_ptr->revise_level, 0LL);
        }
        std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
      }
      TreasureMapActivity::clearFragmentsByRegion(this, *(_DWORD *)(v2 + 64));
      bonus_config_ptr = ActivityTreasureMapExcelConfigMgr::getUnlockBonusByRegionId(config_mgr, *(_DWORD *)(v2 + 64));
      if ( bonus_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&bonus_config_ptr->id);
        }
        bonus_data_ptr = TreasureMapActivity::mutableBonusChallengeBin(this, bonus_config_ptr->id);
        if ( bonus_data_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&bonus_config_ptr->id);
          }
          proto::TreasureMapBonusChallengeBin::set_config_id(bonus_data_ptr, bonus_config_ptr->id);
          proto::TreasureMapBonusChallengeBin::set_is_active(bonus_data_ptr, 0);
          proto::TreasureMapBonusChallengeBin::set_is_done(bonus_data_ptr, 0);
          proto::TreasureMapBonusChallengeBin::set_is_challenge_open(bonus_data_ptr, 0);
        }
      }
      std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 144));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "resetOneRegion",
        2262);
      v8 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v40, this);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" region:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" data nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_map_activity.cpp",
      "resetOneRegion",
      2255);
    v5 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v40, this);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" region:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" config not found.");
    common::milog::MiLogStream::~MiLogStream(&v40);
  }
  if ( v41 == (char *)v2 )
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
};

// Line 2322: range 000000001497B056-000000001497B21E
void __cdecl TreasureMapActivity::resetAllRegions(TreasureMapActivity *const this)
{
  uint32_t v1; // edx
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin> *__for_range; // [rsp+20h] [rbp-20h]
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range_0; // [rsp+28h] [rbp-18h]
  proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+30h] [rbp-10h]
  proto::TreasureMapRegionBin *region_data; // [rsp+38h] [rbp-8h]

  __for_range = proto::TreasureMapScheduleBin::mutable_region_list(&this->bin_data_);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapRegionBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    region_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin>::operator*(&__for_begin);
    v1 = proto::TreasureMapRegionBin::region_id(region_data);
    TreasureMapActivity::resetOneRegion(this, v1);
    google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapRegionBin>::operator++(&__for_begin);
  }
  __for_range_0 = proto::TreasureMapScheduleBin::mutable_challenge_list(&this->bin_data_);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::iterator *)&__for_end) )
  {
    bonus_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator*((const google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin> *const)&__for_begin);
    proto::TreasureMapBonusChallengeBin::set_is_active(bonus_data, 0);
    proto::TreasureMapBonusChallengeBin::set_is_done(bonus_data, 0);
    proto::TreasureMapBonusChallengeBin::set_is_challenge_open(bonus_data, 0);
    google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator++((google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin> *const)&__for_begin);
  }
  proto::TreasureMapScheduleBin::set_active_region_index(&this->bin_data_, 0);
  proto::TreasureMapScheduleBin::set_currency_num(&this->bin_data_, 0);
  proto::TreasureMapScheduleBin::set_guest_mp_reward_taken_num(&this->bin_data_, 0);
  proto::TreasureMapScheduleBin::set_host_mp_reward_taken_num(&this->bin_data_, 0);
  proto::TreasureMapScheduleBin::set_is_mp_challenge_touched(&this->bin_data_, 0);
  BaseActivity::notifyClientData(this, 0);
  TreasureMapActivity::notifyDetectorData(this, 0);
};

// Line 2343: range 000000001497B220-000000001497B5A4
void __cdecl TreasureMapActivity::clearFragmentsByRegion(TreasureMapActivity *const this, uint32_t region_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const google::protobuf::MapPair<unsigned int,unsigned int> *v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::vector<unsigned int>::iterator __for_begin_1; // [rsp+28h] [rbp-118h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin> *__for_range; // [rsp+30h] [rbp-110h]
  proto::TreasureMapBonusChallengeBin *bonus_data; // [rsp+38h] [rbp-108h]
  google::protobuf::Map<unsigned int,unsigned int> *fragment_map; // [rsp+40h] [rbp-100h]
  google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-F8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-F0h]
  std::vector<unsigned int>::iterator __for_end_1; // [rsp+58h] [rbp-E8h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+60h] [rbp-E0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+80h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+A0h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 fragment_index:2355 64 24 21 target_index_vec:2347";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::clearFragmentsByRegion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  __for_range = proto::TreasureMapScheduleBin::mutable_challenge_list(&this->bin_data_);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureMapBonusChallengeBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    bonus_data = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator*(&__for_begin);
    fragment_map = proto::TreasureMapBonusChallengeBin::mutable_fragment_map(bonus_data);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    __for_range_0 = fragment_map;
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, fragment_map);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
    while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v5 = google::protobuf::Map<unsigned int,unsigned int>::iterator::operator*(&__for_begin_0);
      google::protobuf::MapPair<unsigned int,unsigned int>::MapPair(
        (google::protobuf::MapPair<unsigned int,unsigned int> *const)&__for_end_1,
        v5);
      if ( region_id == HIDWORD(__for_end_1._M_current) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v2 + 64),
          (const std::vector<unsigned int>::value_type *)&__for_end_1);
      google::protobuf::MapPair<unsigned int,unsigned int>::~MapPair((google::protobuf::MapPair<unsigned int,unsigned int> *const)&__for_end_1);
      google::protobuf::Map<unsigned int,unsigned int>::iterator::operator++(&__for_begin_0);
    }
    __for_range_1 = (std::vector<unsigned int> *)(v2 + 64);
    __for_begin_1._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    __for_end_1._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_1, &__for_end_1) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_1);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v2 + 48) = *v7;
      google::protobuf::Map<unsigned int,unsigned int>::erase(
        fragment_map,
        (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_1);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
    google::protobuf::internal::RepeatedPtrIterator<proto::TreasureMapBonusChallengeBin>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v2 )
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

// Line 2363: range 000000001497B5A6-000000001497C640
int32_t __cdecl TreasureMapActivity::finishNextRegionGroupByGM(TreasureMapActivity *const this, std::string *ret_msg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivityTreasureMapExcelConfigMgr *v5; // rdx
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  google::protobuf::uint32 active; // r14d
  std::pair<unsigned int,unsigned int> *v9; // rax
  std::pair<unsigned int,unsigned int> *v10; // rdx
  const ActivityTreasureMapExcelConfigMgr *v11; // rcx
  proto::TreasureMapScheduleBin *p_bin_data; // rcx
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v13; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type **v14; // rdx
  const google::protobuf::Map<unsigned int,bool> *v15; // rax
  std::vector<unsigned int>::reference v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  uint32_t *p_gadget_id; // rax
  uint32_t gadget_id; // ecx
  uint32_t v29; // eax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  unsigned int (__fastcall *v35)(unsigned __int64, Player *, unsigned __int64); // r8
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  int32_t result; // eax
  uint32_t mp_group_id; // [rsp+20h] [rbp-250h]
  google::protobuf::uint32 current_token; // [rsp+24h] [rbp-24Ch]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-248h] BYREF
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_begin_0; // [rsp+30h] [rbp-240h] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-238h]
  const data::TreasureMapExcelConfig *base_config_ptr; // [rsp+40h] [rbp-230h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *active_region_id; // [rsp+48h] [rbp-228h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *region_index; // [rsp+50h] [rbp-220h]
  const data::TreasureMapRegionExcelConfig *region_config_ptr; // [rsp+58h] [rbp-218h]
  proto::TreasureMapRegionBin *region_data; // [rsp+60h] [rbp-210h]
  std::unordered_map<unsigned int,unsigned int> *group_coins_map; // [rsp+68h] [rbp-208h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+70h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+78h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *coins; // [rsp+80h] [rbp-1F0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+88h] [rbp-1E8h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_0; // [rsp+90h] [rbp-1E0h]
  const std::pair<unsigned int const,GadgetScriptConfig> *v56; // [rsp+98h] [rbp-1D8h]
  std::tuple_element<0,const std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+A0h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+A8h] [rbp-1C8h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+B0h] [rbp-1C0h] BYREF
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_end; // [rsp+B8h] [rbp-1B8h] BYREF
  common::milog::MiLogStream v61; // [rsp+C0h] [rbp-1B0h] BYREF
  char v62[400]; // [rsp+E0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 13 group_id:2402 64 12 15 region_opt:2386 96 16 14 scene_ptr:2372 128 16 14 group_ptr:243"
                        "9 160 16 15 gadget_ptr:2465 192 16 10 param:2473 224 24 14 group_vec:2415 288 24 20 rand_groups_vec:2424";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::finishNextRegionGroupByGM;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  config_mgr = TreasureMapActivity::getConfigMgr(this);
  v5 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  base_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(v5, this->activity_id_);
  if ( base_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_map_activity.cpp",
        "finishNextRegionGroupByGM",
        2375);
      v7 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v61, this);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v61);
      std::string::operator=(ret_msg, " player not on scene.");
      v6 = -1;
    }
    else
    {
      active = proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_);
      if ( active < proto::TreasureMapScheduleBin::region_list_size(&this->bin_data_) )
      {
        *(std::optional<std::pair<unsigned int,unsigned int> > *)(v2 + 64) = TreasureMapActivity::getActiveRegion(this);
        if ( !std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 64)) )
        {
          std::string::operator=(ret_msg, &off_2551A480);
          v6 = -1;
        }
        else
        {
          v9 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v2 + 64));
          v10 = v9;
          if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v9 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v9, 8LL);
          }
          __in = *v10;
          active_region_id = std::get<0ul,unsigned int,unsigned int>(&__in);
          region_index = std::get<1ul,unsigned int,unsigned int>(&__in);
          v11 = config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)active_region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)active_region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_region_id >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(active_region_id);
          }
          region_config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
                                v11,
                                *active_region_id);
          if ( region_config_ptr )
          {
            p_bin_data = &this->bin_data_;
            if ( *(_BYTE *)(((unsigned __int64)region_index >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)region_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_index >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(region_index);
            }
            region_data = proto::TreasureMapScheduleBin::mutable_region_list(p_bin_data, *region_index);
            if ( *(_BYTE *)(((unsigned __int64)active_region_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)active_region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_region_id >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4(active_region_id);
            }
            mp_group_id = TreasureMapActivity::getRegionMpGroupID(this, *active_region_id);
            current_token = proto::TreasureMapRegionBin::current_progress(region_data);
            *(_DWORD *)(v2 + 48) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config_ptr->token_num >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&region_config_ptr->token_num);
            }
            if ( current_token < region_config_ptr->token_num )
            {
              if ( !mp_group_id )
                goto LABEL_35;
              if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&region_config_ptr->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&region_config_ptr->mp_token_threshold);
              }
              if ( current_token >= region_config_ptr->mp_token_threshold )
              {
                *(_DWORD *)(v2 + 48) = mp_group_id;
              }
              else
              {
LABEL_35:
                group_coins_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                                    &this->region_to_group_coins_map_,
                                    active_region_id);
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 224));
                __for_range = group_coins_map;
                __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(group_coins_map)._M_cur;
                __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(group_coins_map)._M_cur;
                while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                          &__for_begin,
                          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0) )
                {
                  v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
                  v14 = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type **)v13;
                  if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3)
                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_load_n(v13, 8LL);
                  }
                  __for_end._M_cur = *v14;
                  group_id = std::get<0ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)&__for_end);
                  coins = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)&__for_end);
                  v15 = proto::TreasureMapRegionBin::done_group_map(region_data);
                  if ( !google::protobuf::Map<unsigned int,bool>::count(v15, group_id) )
                    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 224), group_id);
                  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
                }
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 288));
                common::tools::RandomUtils::randomSelect<unsigned int>(
                  (const std::vector<unsigned int> *)(v2 + 224),
                  (std::vector<unsigned int> *)(v2 + 288),
                  1u);
                if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 288)) )
                {
                  v16 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 288), 0LL);
                  v17 = v16;
                  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v16);
                  }
                  *(_DWORD *)(v2 + 48) = *v17;
                }
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 288));
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 224));
              }
              if ( *(_DWORD *)(v2 + 48) )
              {
                v19 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                Scene::findGroup((Scene *const)(v2 + 128), v19);
                if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 128)) )
                {
                  common::milog::MiLogStream::create(
                    &v61,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/treasure_map_activity.cpp",
                    "finishNextRegionGroupByGM",
                    2442);
                  v20 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v61, this);
                  v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" group:");
                  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v21,
                          (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v22,
                    (const char (*)[12])" not found.");
                  common::milog::MiLogStream::~MiLogStream(&v61);
                  std::string::operator=(ret_msg, " group not alive.");
                  v6 = -1;
                }
                else
                {
                  v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  group_script_config_ptr = Group::getScriptConfig(v23);
                  if ( group_script_config_ptr )
                  {
                    __for_range_0 = &group_script_config_ptr->gadget_config_map;
                    __for_begin_0._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr->gadget_config_map)._M_cur;
                    __for_end._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_0)._M_cur;
                    while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                              &__for_begin_0,
                              &__for_end) )
                    {
                      v56 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(&__for_begin_0);
                      config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v56);
                      gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v56);
                      p_gadget_id = &gadget_config->gadget_id;
                      if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3)
                                                                                      + 0x7FFF8000) )
                      {
                        __asan_report_load4(p_gadget_id);
                      }
                      gadget_id = gadget_config->gadget_id;
                      if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&base_config_ptr->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&base_config_ptr->reward_worktop_gadget_id);
                      }
                      if ( gadget_id == base_config_ptr->reward_worktop_gadget_id )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                                      + 0x7FFF8000) )
                        {
                          __asan_report_load4(config_id);
                        }
                        break;
                      }
                      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(&__for_begin_0);
                    }
                    v29 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                    Group::findEntityByConfigId<Gadget>((Group *const)(v2 + 160), v29);
                    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 160), 0LL) )
                    {
                      common::milog::MiLogStream::create(
                        &v61,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/treasure_map_activity.cpp",
                        "finishNextRegionGroupByGM",
                        2468);
                      v30 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(
                              &v61,
                              this);
                      v31 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                              v30,
                              (const char (*)[29])" reward gadget not found in:");
                      v32 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                      operator<<(v31, v32);
                      common::milog::MiLogStream::~MiLogStream(&v61);
                      std::string::operator=(ret_msg, " reward gadget not found.");
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(v2 + 192) = 0;
                      *(_DWORD *)(v2 + 196) = 0;
                      *(_DWORD *)(v2 + 200) = 0;
                      *(_DWORD *)(v2 + 204) = 0;
                      v33 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                        v33 = __asan_report_load8(v33);
                      v34 = *(_QWORD *)v33 + 208LL;
                      if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                        v33 = __asan_report_load8(*(_QWORD *)v33 + 208LL);
                      v35 = *(unsigned int (__fastcall **)(unsigned __int64, Player *, unsigned __int64))v34;
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        v33 = __asan_report_load8(&this->player_);
                      if ( v35(v33, this->player_, v2 + 192) )
                      {
                        common::milog::MiLogStream::create(
                          &v61,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/treasure_map_activity.cpp",
                          "finishNextRegionGroupByGM",
                          2476);
                        v36 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(
                                &v61,
                                this);
                        v37 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                v36,
                                (const char (*)[32])" reward gadget failed interact.");
                        v38 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                        operator<<(v37, v38);
                        common::milog::MiLogStream::~MiLogStream(&v61);
                        std::string::operator=(ret_msg, " reward gadget failed interact.");
                        v6 = -1;
                      }
                      else
                      {
                        v6 = 0;
                      }
                    }
                    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 160));
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v61,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/treasure_map_activity.cpp",
                      "finishNextRegionGroupByGM",
                      2450);
                    v24 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(
                            &v61,
                            this);
                    v25 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                    v26 = operator<<(v24, v25);
                    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v26,
                      (const char (*)[24])" script config nullptr.");
                    common::milog::MiLogStream::~MiLogStream(&v61);
                    std::string::operator=(ret_msg, " group script config not found.");
                    v6 = -1;
                  }
                }
                std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 128));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v61,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/treasure_map_activity.cpp",
                  "finishNextRegionGroupByGM",
                  2434);
                v18 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v61, this);
                common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v18, (const char (*)[24])off_2551A540);
                common::milog::MiLogStream::~MiLogStream(&v61);
                std::string::operator=(ret_msg, off_2551A540);
                v6 = -1;
              }
            }
            else
            {
              std::string::operator=(ret_msg, " region is done.");
              v6 = -1;
            }
          }
          else
          {
            std::string::operator=(ret_msg, " region config not found.");
            v6 = -1;
          }
        }
      }
      else
      {
        std::string::operator=(ret_msg, " all regions done.");
        v6 = 0;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  else
  {
    std::string::operator=(ret_msg, " base config not found.");
    v6 = -1;
  }
  result = v6;
  if ( v62 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 2485: range 000000001497C642-000000001497C9D9
int32_t __cdecl TreasureMapActivity::finishRegionByGM(
        TreasureMapActivity *const this,
        uint32_t region_id,
        std::string *ret_msg)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int32_t result; // eax
  std::pair<unsigned int,unsigned int> *v7; // rax
  std::pair<unsigned int,unsigned int> *v8; // rdx
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type v9; // r12d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r12
  unsigned int val; // [rsp+20h] [rbp-A0h] BYREF
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *active_region_id; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *region_index; // [rsp+30h] [rbp-90h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+38h] [rbp-88h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-80h] BYREF
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 15 region_opt:2486";
  *(_QWORD *)(v3 + 16) = TreasureMapActivity::finishRegionByGM;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  *(std::optional<std::pair<unsigned int,unsigned int> > *)(v3 + 32) = TreasureMapActivity::getActiveRegion(this);
  if ( !std::optional<std::pair<unsigned int,unsigned int>>::has_value((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 32)) )
  {
    std::string::operator=(ret_msg, &off_2551A480);
    result = -1;
  }
  else
  {
    v7 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 32));
    v8 = v7;
    if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v7, 8LL);
    }
    __in = *v8;
    active_region_id = std::get<0ul,unsigned int,unsigned int>(&__in);
    region_index = std::get<1ul,unsigned int,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)active_region_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)active_region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_region_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(active_region_id);
    }
    if ( region_id == *active_region_id )
    {
      do
      {
        if ( TreasureMapActivity::finishNextRegionGroupByGM(this, ret_msg) )
        {
          result = -1;
          goto LABEL_18;
        }
        if ( *(_BYTE *)(((unsigned __int64)region_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)region_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_index >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(region_index);
        }
        v9 = *region_index;
      }
      while ( v9 == proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_) );
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_map_activity.cpp",
        "finishRegionByGM",
        2508);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v19, (const char (*)[9])" region:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, region_index);
      v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v11, (const char (*)[5])off_2551A700);
      val = proto::TreasureMapScheduleBin::active_region_index(&this->bin_data_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0;
    }
    else
    {
      std::string::operator=(ret_msg, &unk_2551A660);
      result = -1;
    }
  }
LABEL_18:
  if ( v20 == (char *)v3 )
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

// Line 2513: range 000000001497C9DA-000000001497D90F
void __cdecl TreasureMapActivity::tryUnlockBonusRegions(TreasureMapActivity *const this, bool is_notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const data::ActivityTreasureMapExcelConfigMgrBase *ConfigMgr; // rdi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  PlayerQuestComp *QuestComp; // rcx
  uint32_t *p_unlock_region_id; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  uint32_t SceneComp; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  Scene *v25; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v27; // rdx
  unsigned __int8 (__fastcall *v28)(unsigned __int64, _QWORD); // r8
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  Scene *v38; // rax
  SceneBlockGroupComp *v39; // rax
  unsigned __int64 v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rcx
  unsigned int (__fastcall *v49)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // [rsp+10h] [rbp-140h]
  SceneBlockGroupComp *v50; // [rsp+18h] [rbp-138h]
  bool v51; // [rsp+18h] [rbp-138h]
  std::allocator<unsigned int> __a; // [rsp+32h] [rbp-11Eh] BYREF
  bool is_guide_done; // [rsp+33h] [rbp-11Dh]
  _DWORD __l[5]; // [rsp+34h] [rbp-11Ch] BYREF
  const ActivityTreasureMapExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-108h]
  const data::TreasureMapExcelConfig *config_ptr; // [rsp+50h] [rbp-100h]
  const std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig> *__for_range; // [rsp+58h] [rbp-F8h]
  const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> *v59; // [rsp+60h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *id; // [rsp+68h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *config; // [rsp+70h] [rbp-E0h]
  proto::TreasureMapBonusChallengeBin *bonus_data_ptr; // [rsp+78h] [rbp-D8h]
  std::vector<unsigned int> v63; // [rsp+80h] [rbp-D0h] BYREF
  common::milog::MiLogStream v64; // [rsp+A0h] [rbp-B0h] BYREF
  common::milog::MiLogStream v65; // [rsp+C0h] [rbp-90h] BYREF
  char v66[112]; // [rsp+E0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 bonus_scene_ptr:2540";
  *(_QWORD *)(v2 + 16) = TreasureMapActivity::tryUnlockBonusRegions;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  config_mgr = TreasureMapActivity::getConfigMgr(this);
  is_guide_done = 0;
  ConfigMgr = TreasureMapActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    ConfigMgr = (const data::ActivityTreasureMapExcelConfigMgrBase *)&this->activity_id_;
    __asan_report_load4(&this->activity_id_);
  }
  config_ptr = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(ConfigMgr, this->activity_id_);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    QuestComp = Player::getQuestComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->guide_child_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->guide_child_quest_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->guide_child_quest_id);
    }
    if ( PlayerQuestComp::getQuestState(QuestComp, config_ptr->guide_child_quest_id) == QUEST_STATE_FINISHED )
      is_guide_done = 1;
    __for_range = &config_mgr->treasure_map_bonus_region_excel_config_map;
    *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator *)&__l[1] = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::begin(&config_mgr->treasure_map_bonus_region_excel_config_map);
    *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator *)&__l[3] = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::end(&config_mgr->treasure_map_bonus_region_excel_config_map);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)&__l[1],
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)&__l[3]) )
        goto LABEL_74;
      v59 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false> *const)&__l[1]);
      id = std::get<0ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v59);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v59);
      p_unlock_region_id = &config->unlock_region_id;
      if ( *(_BYTE *)(((unsigned __int64)p_unlock_region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_unlock_region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_region_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(p_unlock_region_id);
      }
      if ( config->unlock_region_id || is_guide_done )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->unlock_region_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_region_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->unlock_region_id);
        }
        if ( !config->unlock_region_id || TreasureMapActivity::isRegionDone(this, config->unlock_region_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          SceneComp = (unsigned int)Player::getSceneComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->group_id);
          }
          PlayerSceneComp::getPersonalSceneByGroupId((PlayerSceneComp *const)(v2 + 32), SceneComp);
          if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v65,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/treasure_map_activity.cpp",
              "tryUnlockBonusRegions",
              2543);
            v21 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v65, this);
            v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v21,
                    (const char (*)[15])" bonus group: ");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->group_id);
            v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v23,
                    (const char (*)[17])" scene nullptr. ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            goto LABEL_42;
          }
          v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v25);
          if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8(BlockGroupComp);
          v27 = *(_QWORD *)BlockGroupComp + 112LL;
          if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 112LL);
          v28 = *(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))v27;
          if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            BlockGroupComp = __asan_report_load4(&config->group_id);
          }
          if ( !v28(BlockGroupComp, config->group_id) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->id);
            }
            bonus_data_ptr = TreasureMapActivity::mutableBonusChallengeBin(this, config->id);
            if ( bonus_data_ptr )
            {
              if ( proto::TreasureMapBonusChallengeBin::is_active(bonus_data_ptr) )
              {
                common::milog::MiLogStream::create(
                  &v65,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/treasure_map_activity.cpp",
                  "tryUnlockBonusRegions",
                  2558);
                v32 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v65, this);
                v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v32,
                        (const char (*)[12])" bonus_id: ");
                v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &config->id);
                common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v34,
                  (const char (*)[17])" already active.");
                common::milog::MiLogStream::~MiLogStream(&v65);
              }
              else if ( proto::TreasureMapBonusChallengeBin::is_done(bonus_data_ptr) )
              {
                common::milog::MiLogStream::create(
                  &v65,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/treasure_map_activity.cpp",
                  "tryUnlockBonusRegions",
                  2563);
                v35 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v65, this);
                v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v35,
                        (const char (*)[12])" bonus_id: ");
                v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &config->id);
                common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v37,
                  (const char (*)[15])" already done.");
                common::milog::MiLogStream::~MiLogStream(&v65);
              }
              else
              {
                v38 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                v39 = Scene::getBlockGroupComp(v38);
                v50 = v39;
                if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v39);
                v40 = (unsigned __int64)(v50->_vptr_SceneCompBase + 12);
                if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
                  v40 = __asan_report_load8(v50->_vptr_SceneCompBase + 12);
                v49 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v40;
                if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config->group_id);
                }
                __l[0] = config->group_id;
                std::allocator<unsigned int>::allocator(&__a);
                std::vector<unsigned int>::vector(
                  &v63,
                  (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
                  &__a);
                v51 = v49(v50, &v63, 0LL, 0LL) != 0;
                std::vector<unsigned int>::~vector(&v63);
                std::allocator<unsigned int>::~allocator(&__a);
                if ( v51 )
                {
                  common::milog::MiLogStream::create(
                    &v65,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/treasure_map_activity.cpp",
                    "tryUnlockBonusRegions",
                    2568);
                  v41 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v65, this);
                  v42 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                          v41,
                          (const char (*)[25])" register bonus groups: ");
                  v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &config->group_id);
                  v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v43,
                          (const char (*)[10])" failed. ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
LABEL_42:
                  operator<<(v24, this->player_);
                  common::milog::MiLogStream::~MiLogStream(&v65);
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v65,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/treasure_map_activity.cpp",
                    "tryUnlockBonusRegions",
                    2571);
                  v44 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v65, this);
                  v45 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                          v44,
                          (const char (*)[15])" Unlock bonus:");
                  v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, id);
                  v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v46,
                          (const char (*)[10])" @Region:");
                  v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v47,
                          &config->unlock_region_id);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  operator<<(v48, this->player_);
                  common::milog::MiLogStream::~MiLogStream(&v65);
                  proto::TreasureMapBonusChallengeBin::set_is_active(bonus_data_ptr, 1);
                  if ( is_notify )
                    TreasureMapActivity::notifyUnlockBonus(this, bonus_data_ptr);
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v65,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/treasure_map_activity.cpp",
                "tryUnlockBonusRegions",
                2553);
              v29 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v65, this);
              v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v29,
                      (const char (*)[11])" bonus_id:");
              v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config->id);
              common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v31,
                (const char (*)[20])" bin data not found");
              common::milog::MiLogStream::~MiLogStream(&v65);
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
          goto LABEL_73;
        }
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryUnlockBonusRegions",
          2537);
        v16 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v65, this);
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" region:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->unlock_region_id);
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" not done yet.");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v19, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v65);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_map_activity.cpp",
          "tryUnlockBonusRegions",
          2532);
        v10 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v64, this);
        v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" guide quest:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                &config_ptr->guide_child_quest_id);
        v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v12,
                (const char (*)[22])" not done yet @bonus:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v14, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v64);
      }
LABEL_73:
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false> *const)&__l[1]);
    }
  }
  common::milog::MiLogStream::create(
    &v65,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/treasure_map_activity.cpp",
    "tryUnlockBonusRegions",
    2519);
  v6 = common::milog::MiLogStream::operator<<<TreasureMapActivity,(TreasureMapActivity*)0>(&v65, this);
  v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         v6,
         (const char (*)[34])"[TREASURE] base config not found.");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v7, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v65);
LABEL_74:
  if ( v66 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/trial_avatar_activity.cpp

// Line 29: range 0000000018015EDC-0000000018016061
int32_t __cdecl TrialAvatarActivity::fromScheduleBin(
        TrialAvatarActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  const proto::TrialAvatarScheduleBin *v2; // rax
  unsigned int *v3; // rcx
  std::pair<bool,bool> *v4; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >,bool> v5; // rax
  common::milog::MiLogStream *v6; // rbx
  bool __x; // [rsp+18h] [rbp-58h] BYREF
  bool __y; // [rsp+19h] [rbp-57h] BYREF
  std::pair<bool,bool> v10; // [rsp+1Ah] [rbp-56h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-54h] BYREF
  google::protobuf::RepeatedPtrField<proto::TrialAvatarActivityRewardInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  google::protobuf::RepeatedPtrField<proto::TrialAvatarActivityRewardInfo>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const google::protobuf::RepeatedPtrField<proto::TrialAvatarActivityRewardInfo> *__for_range; // [rsp+30h] [rbp-40h]
  const proto::TrialAvatarActivityRewardInfo *reward_info_bin; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-30h] BYREF

  v2 = proto::ActivityScheduleBin::trial_avatar_bin(bin);
  __for_range = proto::TrialAvatarScheduleBin::reward_info_list(v2);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TrialAvatarActivityRewardInfo>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TrialAvatarActivityRewardInfo>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TrialAvatarActivityRewardInfo const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    reward_info_bin = google::protobuf::internal::RepeatedPtrIterator<proto::TrialAvatarActivityRewardInfo const>::operator*(&__for_begin);
    __y = proto::TrialAvatarActivityRewardInfo::received_reward(reward_info_bin);
    __x = proto::TrialAvatarActivityRewardInfo::passed_dungeon(reward_info_bin);
    v10 = std::make_pair<bool,bool>(&__x, &__y);
    val = proto::TrialAvatarActivityRewardInfo::trial_avatar_index_id(reward_info_bin);
    v5 = std::map<unsigned int,std::pair<bool,bool>>::emplace<unsigned int,std::pair<bool,bool>>(
           &this->receive_reward_map_,
           &val,
           &v10,
           v3,
           v4);
    if ( !v5.second )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/trial_avatar_activity.cpp",
        "fromScheduleBin",
        35);
      v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v16,
             (const char (*)[59])"receive_reward_map_ emplace failed, trial_avatar_index_id:");
      val = proto::TrialAvatarActivityRewardInfo::trial_avatar_index_id(reward_info_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::TrialAvatarActivityRewardInfo const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 43: range 0000000018016062-0000000018016202
int32_t __cdecl TrialAvatarActivity::toScheduleBin(
        const TrialAvatarActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::TrialAvatarScheduleBin *v2; // rax
  std::map<unsigned int,std::pair<bool,bool>>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,std::pair<bool,bool>>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,std::pair<bool,bool>> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,std::pair<bool,bool> > *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<bool,bool> > >::type *trial_avatar_index_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,bool> > >::type *reward_info; // [rsp+40h] [rbp-10h]
  proto::TrialAvatarActivityRewardInfo *reward_info_bin; // [rsp+48h] [rbp-8h]

  __for_range = &this->receive_reward_map_;
  __for_begin._M_node = std::map<unsigned int,std::pair<bool,bool>>::begin(&this->receive_reward_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::pair<bool,bool>>::end(&this->receive_reward_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,bool>>>::operator*(&__for_begin);
    trial_avatar_index_id = std::get<0ul,unsigned int const,std::pair<bool,bool>>(v7);
    reward_info = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,bool> > >::type *)std::get<1ul,unsigned int const,std::pair<bool,bool>>(v7);
    v2 = proto::ActivityScheduleBin::mutable_trial_avatar_bin(bin);
    reward_info_bin = proto::TrialAvatarScheduleBin::add_reward_info_list(v2);
    if ( *(_BYTE *)(((unsigned __int64)trial_avatar_index_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)trial_avatar_index_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trial_avatar_index_id >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(trial_avatar_index_id);
    }
    proto::TrialAvatarActivityRewardInfo::set_trial_avatar_index_id(reward_info_bin, *trial_avatar_index_id);
    if ( *(_BYTE *)(((unsigned __int64)reward_info >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)reward_info & 7) >= *(_BYTE *)(((unsigned __int64)reward_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(reward_info);
    }
    proto::TrialAvatarActivityRewardInfo::set_passed_dungeon(reward_info_bin, reward_info->first);
    if ( *(_BYTE *)(((unsigned __int64)&reward_info->second >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)reward_info + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&reward_info->second >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&reward_info->second);
    }
    proto::TrialAvatarActivityRewardInfo::set_received_reward(reward_info_bin, reward_info->second);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,bool>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 58: range 0000000018016204-0000000018016887
int32_t __cdecl TrialAvatarActivity::toClient(TrialAvatarActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t result; // eax
  TrialAvatarActivityExcelConfigMgr *p_trial_avatar_activity_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  std::vector<unsigned int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  proto::TrialAvatarActivityDetailInfo *v11; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  google::protobuf::uint32 *v13; // rdx
  const std::map<unsigned int,std::pair<bool,bool>>::key_type *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::pointer v15; // rdx
  std::pair<bool,bool> *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::pointer v17; // rdx
  bool *v18; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v19; // rax
  google::protobuf::uint32 *v20; // rdx
  unsigned int val; // [rsp+10h] [rbp-C0h] BYREF
  uint32_t idx; // [rsp+14h] [rbp-BCh]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  const data::TrialAvatarActivityExcelConfig *trial_avatar_acvtivity_conf_ptr; // [rsp+20h] [rbp-B0h]
  proto::TrialAvatarActivityRewardDetailInfo *reward_info_pb; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-90h] BYREF
  char v28[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:82";
  *(_QWORD *)(v2 + 16) = TrialAvatarActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/trial_avatar_activity.cpp",
      "toClient",
      61);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v27,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    p_trial_avatar_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.trial_avatar_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    trial_avatar_acvtivity_conf_ptr = data::TrialAvatarActivityExcelConfigMgrBase::findTrialAvatarActivityExcelConfig(
                                        p_trial_avatar_activity_config_mgr,
                                        this->schedule_id_);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( trial_avatar_acvtivity_conf_ptr )
    {
      for ( idx = 0; idx < std::vector<unsigned int>::size(&trial_avatar_acvtivity_conf_ptr->avatar_index_id_list); ++idx )
      {
        v9 = std::vector<unsigned int>::operator[](&trial_avatar_acvtivity_conf_ptr->avatar_index_id_list, idx);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        if ( *v10 )
        {
          v11 = proto::ActivityInfo::mutable_trial_avatar_info(activity_info);
          reward_info_pb = proto::TrialAvatarActivityDetailInfo::add_reward_info_list(v11);
          v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&trial_avatar_acvtivity_conf_ptr->avatar_index_id_list, idx);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          proto::TrialAvatarActivityRewardDetailInfo::set_trial_avatar_index_id(reward_info_pb, *v13);
          v14 = std::vector<unsigned int>::operator[](&trial_avatar_acvtivity_conf_ptr->avatar_index_id_list, idx);
          *(std::map<unsigned int,std::pair<bool,bool>>::iterator *)(v2 + 32) = std::map<unsigned int,std::pair<bool,bool>>::find(
                                                                                  &this->receive_reward_map_,
                                                                                  v14);
          __y._M_node = std::map<unsigned int,std::pair<bool,bool>>::end(&this->receive_reward_map_)._M_node;
          if ( std::operator!=(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::_Self *)(v2 + 32),
                 &__y) )
          {
            v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > > *const)(v2 + 32));
            p_second = &v15->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_second);
            }
            proto::TrialAvatarActivityRewardDetailInfo::set_passed_dungeon(reward_info_pb, v15->second.first);
            v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > > *const)(v2 + 32));
            v18 = &v17->second.second;
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)v18 & 7) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(v18);
            }
            proto::TrialAvatarActivityRewardDetailInfo::set_received_reward(reward_info_pb, v17->second.second);
          }
          if ( idx < std::vector<unsigned int>::size(&trial_avatar_acvtivity_conf_ptr->reward_id_list) )
          {
            v19 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&trial_avatar_acvtivity_conf_ptr->reward_id_list, idx);
            v20 = v19;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v19);
            }
            proto::TrialAvatarActivityRewardDetailInfo::set_reward_id(reward_info_pb, *v20);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/trial_avatar_activity.cpp",
              "toClient",
              90);
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v27, (const char (*)[17])off_264995E0);
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
        }
      }
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/trial_avatar_activity.cpp",
        "toClient",
        68);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v27,
             (const char (*)[26])"schedule_id_ is invalid, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->schedule_id_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = -1;
    }
  }
  if ( v28 == (char *)v2 )
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

// Line 100: range 0000000018016888-0000000018016AD6
void __cdecl TrialAvatarActivity::onStart(TrialAvatarActivity *const this)
{
  const TrialAvatarActivityExcelConfigMgr *v1; // rcx
  common::milog::MiLogStream *v2; // rax
  const unsigned int *v3; // rax
  std::pair<unsigned int,std::pair<bool,bool> > *v4; // rdx
  bool __x; // [rsp+14h] [rbp-7Ch] BYREF
  bool __y; // [rsp+15h] [rbp-7Bh] BYREF
  std::pair<bool,bool> v7; // [rsp+16h] [rbp-7Ah] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const TrialAvatarActivityExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-68h]
  const data::TrialAvatarActivityExcelConfig *trial_avatar_acvtivity_conf_ptr; // [rsp+30h] [rbp-60h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-58h]
  const unsigned int *trial_avatar_index_id; // [rsp+40h] [rbp-50h]
  std::pair<unsigned int,std::pair<bool,bool> > v14; // [rsp+48h] [rbp-48h] BYREF
  std::shared_ptr<Config> v15; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.trial_avatar_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  v1 = conf_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  trial_avatar_acvtivity_conf_ptr = data::TrialAvatarActivityExcelConfigMgrBase::findTrialAvatarActivityExcelConfig(
                                      v1,
                                      this->schedule_id_);
  if ( trial_avatar_acvtivity_conf_ptr )
  {
    __for_range = &trial_avatar_acvtivity_conf_ptr->avatar_index_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&trial_avatar_acvtivity_conf_ptr->avatar_index_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&trial_avatar_acvtivity_conf_ptr->avatar_index_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v3 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      trial_avatar_index_id = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3);
      }
      if ( *trial_avatar_index_id )
      {
        __y = 0;
        __x = 0;
        v7 = std::make_pair<bool,bool>(&__x, &__y);
        v14 = std::make_pair<unsigned int const&,std::pair<bool,bool>>(trial_avatar_index_id, &v7);
        std::map<unsigned int,std::pair<bool,bool>>::emplace<std::pair<unsigned int,std::pair<bool,bool>>>(
          &this->receive_reward_map_,
          &v14,
          v4);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/trial_avatar_activity.cpp",
      "onStart",
      106);
    v2 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v16,
           (const char (*)[26])"schedule_id_ is invalid, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
};

// Line 122: range 0000000018016AD8-0000000018016AF8
void __cdecl TrialAvatarActivity::onClear(TrialAvatarActivity *const this)
{
  std::map<unsigned int,std::pair<bool,bool>>::clear(&this->receive_reward_map_);
};

// Line 129: range 0000000018016AFA-0000000018017444
__int64 __fastcall TrialAvatarActivity::receiveFirstPassReward(
        TrialAvatarActivity *const this,
        uint32_t avatar_index_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::pointer v7; // rdx
  std::pair<bool,bool> *p_second; // rax
  common::milog::MiLogStream *v9; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::pointer v10; // rdx
  bool *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const std::unordered_map<unsigned int,unsigned int> *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const std::unordered_map<unsigned int,unsigned int> *v15; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v16; // rax
  _DWORD *v17; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  PlayerItemComp *v24; // rax
  __int64 v25; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::pointer v26; // rdx
  char v27; // cl
  PlayerActivityComp *ActivityComp; // r14
  uint32_t v29; // ebx
  uint32_t ScheduleId; // r15d
  uint32_t ActivityId; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::_Self __y; // [rsp+20h] [rbp-130h] BYREF
  const TrialAvatarActivityExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v34; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-110h] BYREF
  char v36[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 13 reward_id:162 64 4 7 ret:165 80 4 19 avatar_index_id:128 96 8 8 iter:130 128 24 10 reason:164";
  *(_QWORD *)(v2 + 16) = TrialAvatarActivity::receiveFirstPassReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 80) = avatar_index_id;
  *(std::map<unsigned int,std::pair<bool,bool>>::iterator *)(v2 + 96) = std::map<unsigned int,std::pair<bool,bool>>::find(
                                                                          &this->receive_reward_map_,
                                                                          (const std::map<unsigned int,std::pair<bool,bool>>::key_type *)(v2 + 80));
  __y._M_node = std::map<unsigned int,std::pair<bool,bool>>::end(&this->receive_reward_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::_Self *)(v2 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/trial_avatar_activity.cpp",
      "receiveFirstPassReward",
      133);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v35,
           (const char (*)[29])"avatar_index_id is invalid, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 0xFFFFFFFFLL;
    goto LABEL_37;
  }
  v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > > *const)(v2 + 96));
  p_second = &v7->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_second);
  }
  if ( !v7->second.first )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/trial_avatar_activity.cpp",
      "receiveFirstPassReward",
      140);
    v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v35,
           (const char (*)[37])"player haven't passed dungeon, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_11:
    *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 0xFFFFFFFFLL;
    goto LABEL_37;
  }
  v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > > *const)(v2 + 96));
  v11 = &v10->second.second;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v11);
  }
  if ( v10->second.second )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/trial_avatar_activity.cpp",
      "receiveFirstPassReward",
      147);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v35,
           (const char (*)[35])"player have received reward, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_11;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.trial_avatar_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> const,unsigned int>(
          &conf_mgr->schedule_trial_reward_map,
          &this->schedule_id_) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/trial_avatar_activity.cpp",
      "receiveFirstPassReward",
      154);
    v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v35,
            (const char (*)[35])"schdule_id not found, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v13 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::at(
            &conf_mgr->schedule_trial_reward_map,
            &this->schedule_id_);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
            v13,
            (const unsigned int *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/trial_avatar_activity.cpp",
        "receiveFirstPassReward",
        159);
      v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v35,
              (const char (*)[42])"trial avatar config not found, config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v35);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v15 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::at(
              &conf_mgr->schedule_trial_reward_map,
              &this->schedule_id_);
      v16 = std::unordered_map<unsigned int,unsigned int>::at(
              v15,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 80));
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      *(_DWORD *)(v2 + 48) = *v17;
      ActionReason::ActionReason(
        (ActionReason *const)(v2 + 128),
        ACTION_REASON_TRIAL_AVATAR_ACTIVITY_FIRST_PASS_REWARD,
        ITEM_LIMIT_ACTIVITY_TRIAL_AVATAR);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      *(_DWORD *)(v2 + 64) = PlayerItemComp::checkGrantReward(
                               ItemComp,
                               *(_DWORD *)(v2 + 48),
                               (const ActionReason *)(v2 + 128));
      if ( *(_DWORD *)(v2 + 64) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/trial_avatar_activity.cpp",
          "receiveFirstPassReward",
          168);
        v19 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v35,
                (const char (*)[28])"checkGrantReward fail, ret:");
        v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v2 + 64));
        v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])"reward_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v23, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v35);
        result = *(unsigned int *)(v2 + 64);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v24 = Player::getItemComp(this->player_);
        v25 = *(unsigned int *)(v2 + 48);
        PlayerItemComp::grantReward(v24, v25, (const ActionReason *)(v2 + 128), 0LL);
        v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > > *const)(v2 + 96));
        v27 = *(_BYTE *)(((unsigned __int64)&v26->second.second >> 3) + 0x7FFF8000);
        if ( v27 != 0 && (((unsigned __int8)v26 + 5) & 7) >= v27 )
        {
          LOBYTE(v25) = v27 != 0;
          __asan_report_store1(&v26->second.second, v25, v26);
        }
        v26->second.second = 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ActivityComp = Player::getActivityComp(this->player_);
        v29 = *(_DWORD *)(v2 + 48);
        ScheduleId = BaseActivity::getScheduleId(this);
        ActivityId = BaseActivity::getActivityId(this);
        PlayerActivityComp::logGetActivityReward(ActivityComp, ActivityId, ScheduleId, v29);
        result = 0LL;
      }
    }
  }
LABEL_37:
  if ( v36 == (char *)v2 )
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

// Line 185: range 0000000018017446-000000001801762A
bool __cdecl TrialAvatarActivity::isTrialAvatarActivityDungeon(ScenePtr *p_dest_scene_ptr)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // r14
  DungeonScene *v5; // rax
  bool result; // al
  const data::DungeonExcelConfig *dungeon_excel_conf_ptr; // [rsp+18h] [rbp-78h]
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 26 dest_dungeon_scene_ptr:186";
  *(_QWORD *)(v1 + 16) = TrialAvatarActivity::isTrialAvatarActivityDungeon;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
  {
    v4 = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    dungeon_excel_conf_ptr = DungeonScene::getDungeonConfig(v5);
    if ( dungeon_excel_conf_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_excel_conf_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_excel_conf_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_excel_conf_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_excel_conf_ptr->type);
      }
      if ( dungeon_excel_conf_ptr->type != DUNGEON_ACTIVITY )
        goto LABEL_15;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_excel_conf_ptr->play_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_excel_conf_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_excel_conf_ptr->play_type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_excel_conf_ptr->play_type);
      }
      if ( dungeon_excel_conf_ptr->play_type == DUNGEON_PLAY_TYPE_TRIAL_AVATAR )
        v4 = 1;
      else
LABEL_15:
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
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

// Line 197: range 000000001801762C-0000000018018001
void __fastcall TrialAvatarActivity::onTrialDungeonSucceed(
        TrialAvatarActivity *const this,
        __int32 dungeon_id,
        proto::TrialAvatarFirstPassDungeonNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // r14
  bool v7; // r15
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  const std::unordered_map<unsigned int,unsigned int> *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::_Self *p_y; // rsi
  common::milog::MiLogStream *v17; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::pointer v18; // rdx
  std::pair<bool,bool> *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::pointer v20; // rdx
  char v21; // cl
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  DungeonScene *v26; // rax
  const std::string *v27; // rax
  Player *v28; // r14
  std::string v29; // [rsp+0h] [rbp-160h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::_Self __y; // [rsp+20h] [rbp-140h] BYREF
  const TrialAvatarActivityExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<Scene> p_dest_scene_ptr; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-110h] BYREF
  char v35[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v29._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v29._anon_0._M_allocated_capacity) = dungeon_id;
  v29._M_string_length = (std::string::size_type)notify;
  v3 = (unsigned __int64)v35;
  v29._M_dataplus._M_p = v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:238 64 4 19 trial_config_id:211 80 4 14 dungeon_id:196 96 8 8 iter:222 128 16 1"
                        "7 cur_scene_ptr:198 160 16 11 log_ptr:241";
  *(_QWORD *)(v3 + 16) = TrialAvatarActivity::onTrialDungeonSucceed;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 80) = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)&p_dest_scene_ptr);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 128));
  std::shared_ptr<Scene>::~shared_ptr(&p_dest_scene_ptr);
  v6 = 0;
  v7 = 1;
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 128), 0LL) )
  {
    std::shared_ptr<Scene>::shared_ptr<DungeonScene,void>(
      &p_dest_scene_ptr,
      (const std::shared_ptr<DungeonScene> *)(v3 + 128));
    v6 = 1;
    if ( TrialAvatarActivity::isTrialAvatarActivityDungeon(&p_dest_scene_ptr) )
      v7 = 0;
  }
  if ( v6 )
    std::shared_ptr<Scene>::~shared_ptr(&p_dest_scene_ptr);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/trial_avatar_activity.cpp",
      "onTrialDungeonSucceed",
      202);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v34, (const char (*)[37])off_26499A20);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&p_dest_scene_ptr);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_dest_scene_ptr)->design_config.txt_config_mgr.trial_avatar_activity_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_dest_scene_ptr);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
            &conf_mgr->dungeon_to_trial_map,
            (const unsigned int *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/trial_avatar_activity.cpp",
        "onTrialDungeonSucceed",
        208);
      v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v34,
             (const char (*)[59])"dungeonId not found in trial avatar activity, schedule_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->schedule_id_);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      v11 = std::unordered_map<unsigned int,unsigned int>::at(
              &conf_mgr->dungeon_to_trial_map,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 80));
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v3 + 64) = *v12;
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> const,unsigned int>(
              &conf_mgr->schedule_trial_reward_map,
              &this->schedule_id_) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/trial_avatar_activity.cpp",
          "onTrialDungeonSucceed",
          214);
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v34,
                (const char (*)[35])"schdule_id not found, schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->schedule_id_);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      else
      {
        v14 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::at(
                &conf_mgr->schedule_trial_reward_map,
                &this->schedule_id_);
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
                v14,
                (const unsigned int *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/trial_avatar_activity.cpp",
            "onTrialDungeonSucceed",
            219);
          v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v34,
                  (const char (*)[42])"trial avatar config not found, config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v34);
        }
        else
        {
          *(std::map<unsigned int,std::pair<bool,bool>>::iterator *)(v3 + 96) = std::map<unsigned int,std::pair<bool,bool>>::find(
                                                                                  &this->receive_reward_map_,
                                                                                  (const std::map<unsigned int,std::pair<bool,bool>>::key_type *)(v3 + 64));
          __y._M_node = std::map<unsigned int,std::pair<bool,bool>>::end(&this->receive_reward_map_)._M_node;
          p_y = &__y;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > >::_Self *)(v3 + 96),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/trial_avatar_activity.cpp",
              "onTrialDungeonSucceed",
              225);
            v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v34,
                    (const char (*)[29])"trial_config_id is invalid, ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v34);
          }
          else
          {
            v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > > *const)(v3 + 96));
            p_second = &v18->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_second);
            }
            if ( !v18->second.first )
            {
              v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,bool> > > *const)(v3 + 96));
              v21 = *(_BYTE *)(((unsigned __int64)&v20->second >> 3) + 0x7FFF8000);
              if ( v21 != 0 && (((unsigned __int8)v20 + 4) & 7) >= v21 )
              {
                LOBYTE(p_y) = v21 != 0;
                __asan_report_store1(&v20->second, p_y, v20);
              }
              v20->second.first = 1;
              proto::TrialAvatarFirstPassDungeonNotify::set_trial_avatar_index_id(
                (proto::TrialAvatarFirstPassDungeonNotify *const)v29._M_string_length,
                *(_DWORD *)(v3 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              BasicComp = Player::getBasicComp(this->player_);
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v34, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xB19u, v29);
              std::string::~string(&v34);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess>();
              v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((*(&v29._anon_0._M_allocated_capacity + 1) + 36) >> 3) + 0x7FFF8000) != 0
                && (char)(((v29._anon_0._M_local_buf[8] + 36) & 7) + 3) >= *(_BYTE *)(((*(&v29._anon_0._M_allocated_capacity
                                                                                        + 1)
                                                                                      + 36) >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(*(&v29._anon_0._M_allocated_capacity + 1) + 36);
              }
              proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess::set_schedule_id(
                v23,
                *(_DWORD *)(*(&v29._anon_0._M_allocated_capacity + 1) + 36));
              v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess::set_trial_avatar_index(
                v24,
                *(_DWORD *)(v3 + 64));
              v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              v26 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v27 = DungeonScene::getTransaction[abi:cxx11](v26);
              proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess::set_transaction(v25, v27);
              if ( *(_BYTE *)(((*(&v29._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8(*(&v29._anon_0._M_allocated_capacity + 1) + 24);
              v28 = *(Player **)(*(&v29._anon_0._M_allocated_capacity + 1) + 24);
              std::shared_ptr<google::protobuf::Message>::shared_ptr(
                (std::shared_ptr<google::protobuf::Message> *const)&p_dest_scene_ptr,
                0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess> *)(v3 + 160));
              Player::printStatLog(v28, &p_body_ptr, (MessagePtr *)&p_dest_scene_ptr, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&p_dest_scene_ptr);
              std::shared_ptr<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTrialAvatarActivityChallengeSuccess> *const)(v3 + 160));
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
            }
          }
        }
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 128));
  if ( v29._M_dataplus._M_p == (std::string::pointer)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

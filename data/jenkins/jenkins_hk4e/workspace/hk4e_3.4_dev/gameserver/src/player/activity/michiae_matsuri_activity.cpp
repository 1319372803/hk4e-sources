// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/michiae_matsuri_activity.cpp

// Line 31: range 000000001455B7D6-000000001455BD94
int32_t __cdecl MichiaeMatsuriActivity::fromScheduleBin(
        MichiaeMatsuriActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t refreshed; // ecx
  uint32_t v6; // edx
  unsigned int *v7; // rcx
  bool *v8; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >,bool> v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  bool is_open; // [rsp+17h] [rbp-E9h] BYREF
  google::protobuf::RepeatedPtrField<proto::MichiaeMatsuriStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::MichiaeMatsuriStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-D8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+30h] [rbp-D0h]
  const proto::MichiaeMatsuriScheduleBin *schedule_bin; // [rsp+38h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::MichiaeMatsuriStageBin> *__for_range; // [rsp+40h] [rbp-C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+48h] [rbp-B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+50h] [rbp-B0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+58h] [rbp-A8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+60h] [rbp-A0h]
  const proto::MichiaeMatsuriStageBin *stage_bin; // [rsp+68h] [rbp-98h]
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-90h] BYREF
  char v29[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 group_id:53";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  schedule_bin = proto::ActivityScheduleBin::michiae_matsuri_bin(bin);
  refreshed = proto::MichiaeMatsuriScheduleBin::statue_refresh_group_time(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->statue_refresh_group_time_);
  }
  this->statue_refresh_group_time_ = refreshed;
  v6 = proto::MichiaeMatsuriScheduleBin::gain_crystal_exp(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gain_crystal_exp_);
  }
  this->gain_crystal_exp_ = v6;
  __for_range = proto::MichiaeMatsuriScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MichiaeMatsuriStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MichiaeMatsuriStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MichiaeMatsuriStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MichiaeMatsuriStageBin const>::operator*(&__for_begin);
    is_open = proto::MichiaeMatsuriStageBin::is_open(stage_bin);
    *(_DWORD *)(v2 + 32) = proto::MichiaeMatsuriStageBin::stage_id(stage_bin);
    v9 = std::map<unsigned int,bool>::emplace<unsigned int,bool>(
           &this->stage_open_map_,
           (unsigned int *)(v2 + 32),
           &is_open,
           v7,
           v8);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "fromScheduleBin",
        39);
      v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v28,
              (const char (*)[38])"[Michiae_Matsuri] duplicate stage_id:");
      *(_DWORD *)(v2 + 32) = proto::MichiaeMatsuriStageBin::stage_id(stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::MichiaeMatsuriStageBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::MichiaeMatsuriScheduleBin::unlocked_crystal_skill_bin_list(schedule_bin);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    v11 = std::unordered_set<unsigned int>::insert(
            &this->unlocked_skill_id_set_,
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "fromScheduleBin",
        48);
      v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v28,
              (const char (*)[47])"[Michiae_Matsuri] duplicate unlocked skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    ++__for_begin_0;
  }
  __for_range_1 = proto::MichiaeMatsuriScheduleBin::finished_challenge_group_id_bin_list(schedule_bin);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_1;
    v13 = std::unordered_set<unsigned int>::insert(
            &this->finished_challenge_group_id_set_,
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    if ( !v13.second )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "fromScheduleBin",
        57);
      v14 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v28,
              (const char (*)[57])"[Michiae_Matsuri] duplicate finished challenge group id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    ++__for_begin_1;
  }
  result = 0;
  if ( v29 == (char *)v2 )
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

// Line 65: range 000000001455BD96-000000001455C0F3
int32_t __cdecl MichiaeMatsuriActivity::toScheduleBin(
        const MichiaeMatsuriActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::uint32 *v2; // rdx
  google::protobuf::uint32 *v3; // rdx
  std::map<unsigned int,bool>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,bool>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  proto::MichiaeMatsuriScheduleBin *schedule_bin; // [rsp+30h] [rbp-40h]
  const std::map<unsigned int,bool> *__for_range; // [rsp+38h] [rbp-38h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-30h]
  const std::unordered_set<unsigned int> *__for_range_1; // [rsp+48h] [rbp-28h]
  const std::pair<unsigned int const,bool> *v11; // [rsp+50h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *stage_id; // [rsp+58h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_open; // [rsp+60h] [rbp-10h]
  proto::MichiaeMatsuriStageBin *stage_bin; // [rsp+68h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_michiae_matsuri_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MichiaeMatsuriScheduleBin::set_statue_refresh_group_time(schedule_bin, this->statue_refresh_group_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MichiaeMatsuriScheduleBin::set_gain_crystal_exp(schedule_bin, this->gain_crystal_exp_);
  __for_range = &this->stage_open_map_;
  __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->stage_open_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,bool>(v11);
    is_open = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v11);
    stage_bin = proto::MichiaeMatsuriScheduleBin::add_stage_bin_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::MichiaeMatsuriStageBin::set_stage_id(stage_bin, *stage_id);
    if ( *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_open & 7) >= *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_open);
    }
    proto::MichiaeMatsuriStageBin::set_is_open(stage_bin, *is_open);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->unlocked_skill_id_set_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_set<unsigned int>::begin(&this->unlocked_skill_id_set_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::MichiaeMatsuriScheduleBin::add_unlocked_crystal_skill_bin_list(schedule_bin, *v2);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  __for_range_1 = &this->finished_challenge_group_id_set_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_set<unsigned int>::begin(&this->finished_challenge_group_id_set_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v3 = (google::protobuf::uint32 *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::MichiaeMatsuriScheduleBin::add_finished_challenge_group_id_bin_list(schedule_bin, *v3);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  return 0;
};

// Line 87: range 000000001455C0F4-000000001455CEBB
int32_t __cdecl MichiaeMatsuriActivity::toClient(
        MichiaeMatsuriActivity *const this,
        proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  const ActivityMichiaeMatsuriExcelConfigMgr *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  uint32_t *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  PlayerOfferingComp *OfferingComp; // rcx
  common::milog::MiLogStream *v11; // rax
  PlayerSceneComp *SceneComp; // rdi
  proto::Vector *v13; // rax
  common::milog::MiLogStream *v14; // rax
  proto::Vector *v15; // rax
  unsigned int val; // [rsp+1Ch] [rbp-124h] BYREF
  uint32_t cur_offering_level; // [rsp+20h] [rbp-120h]
  uint32_t group_id; // [rsp+24h] [rbp-11Ch]
  uint32_t config_id; // [rsp+28h] [rbp-118h]
  uint32_t skill_id; // [rsp+2Ch] [rbp-114h]
  std::map<unsigned int,std::pair<Vector3,unsigned int>>::const_iterator __for_begin_0; // [rsp+30h] [rbp-110h] BYREF
  std::map<unsigned int,std::pair<Vector3,unsigned int>>::const_iterator __for_end_0; // [rsp+38h] [rbp-108h] BYREF
  std::map<unsigned int,bool>::iterator __for_begin; // [rsp+40h] [rbp-100h] BYREF
  std::map<unsigned int,bool>::iterator __for_end; // [rsp+48h] [rbp-F8h] BYREF
  proto::MichiaeMatsuriActivityDetailInfo *detail_info; // [rsp+50h] [rbp-F0h]
  const ActivityMichiaeMatsuriExcelConfigMgr *conf_mgr; // [rsp+58h] [rbp-E8h]
  std::map<unsigned int,bool> *__for_range; // [rsp+60h] [rbp-E0h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-D8h]
  const data::MichiaeOverallExcelConfig *preview_config_ptr; // [rsp+70h] [rbp-D0h]
  const MichiaeChestGroupConfigToPosMap *chest_map_ptr; // [rsp+78h] [rbp-C8h]
  const std::map<std::pair<unsigned int,unsigned int>,Vector3> *__for_range_1; // [rsp+80h] [rbp-C0h]
  const MichiaeChallengeGroupToPosMap *challenge_map_ptr; // [rsp+88h] [rbp-B8h]
  const std::map<unsigned int,std::pair<Vector3,unsigned int>> *__for_range_2; // [rsp+90h] [rbp-B0h]
  const std::pair<unsigned int const,std::pair<Vector3,unsigned int> > *v35; // [rsp+98h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::type *group_id_0; // [rsp+A0h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::type *pos_gadget_pair; // [rsp+A8h] [rbp-98h]
  proto::MichiaeMatsuriChallengePositionInfo *challenge_pos; // [rsp+B0h] [rbp-90h]
  const std::pair<const std::pair<unsigned int,unsigned int>,Vector3> *v39; // [rsp+B8h] [rbp-88h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,Vector3> >::type *group_config_pair; // [rsp+C0h] [rbp-80h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,Vector3> >::type *pos; // [rsp+C8h] [rbp-78h]
  proto::MichiaeMatsuriChestPositionInfo *chest_pos; // [rsp+D0h] [rbp-70h]
  const std::pair<unsigned int const,bool> *v43; // [rsp+D8h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *stage_id; // [rsp+E0h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_stage_open; // [rsp+E8h] [rbp-58h]
  proto::MichiaeMatsuriStage *stage; // [rsp+F0h] [rbp-50h]
  const data::MichiaeStageExcelConfig *stage_config_ptr; // [rsp+F8h] [rbp-48h]
  std::shared_ptr<Config> v48; // [rsp+100h] [rbp-40h] BYREF
  common::milog::MiLogStream v49; // [rsp+110h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "toClient",
      90);
    v2 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v49,
           (const char (*)[54])"[Michiae_Matsuri] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v49);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_michiae_matsuri_info(activity_info);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v48);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v48);
    __for_range = &this->stage_open_map_;
    __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->stage_open_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v43 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,bool>(v43);
      is_stage_open = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v43);
      stage = proto::MichiaeMatsuriActivityDetailInfo::add_stage_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MichiaeMatsuriStage::set_stage_id(stage, *stage_id);
      if ( *(_BYTE *)(((unsigned __int64)is_stage_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_stage_open & 7) >= *(_BYTE *)(((unsigned __int64)is_stage_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(is_stage_open);
      }
      proto::MichiaeMatsuriStage::set_is_open(stage, *is_stage_open);
      v4 = conf_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stage_config_ptr = data::ActivityMichiaeMatsuriExcelConfigMgrBase::findMichiaeStageExcelConfig(v4, *stage_id);
      if ( stage_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)stage_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        open_day = stage_config_ptr->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
        proto::MichiaeMatsuriStage::set_open_time(stage, BeginTimeByOpenDay);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "toClient",
          103);
        v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               &v49,
               (const char (*)[54])"[Michiae_Matsuri] stage_config_ptr is null, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v49);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->unlocked_skill_id_set_;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_set<unsigned int>::begin(&this->unlocked_skill_id_set_)._M_cur;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
    {
      v8 = (uint32_t *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      skill_id = *v8;
      proto::MichiaeMatsuriActivityDetailInfo::add_unlocked_crystal_skill_list(detail_info, skill_id);
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    preview_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
                           conf_mgr,
                           this->activity_id_);
    if ( !preview_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "toClient",
        116);
      v9 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
             &v49,
             (const char (*)[75])"[Michiae_Matsuri] findPreviewExcelConfigByActivityId failed, activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v49);
      return -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::MichiaeMatsuriActivityDetailInfo::set_gain_crystal_exp(detail_info, this->gain_crystal_exp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OfferingComp = Player::getOfferingComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->offering_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->offering_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    cur_offering_level = PlayerOfferingComp::findOfferingLevel(OfferingComp, preview_config_ptr->offering_id);
    if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->all_radar_open_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)preview_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->all_radar_open_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( cur_offering_level >= preview_config_ptr->all_radar_open_level )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      chest_map_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findChestPosMapByActivityId(conf_mgr, this->activity_id_);
      if ( !chest_map_ptr )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "toClient",
          128);
        v11 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                &v49,
                (const char (*)[54])"[Michiae_Matsuri] chest_map_ptr is null, activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v49);
        return -1;
      }
      __for_range_1 = chest_map_ptr;
      __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::map<std::pair<unsigned int,unsigned int>,Vector3>::begin(chest_map_ptr)._M_node;
      __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::map<std::pair<unsigned int,unsigned int>,Vector3>::end(__for_range_1)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,Vector3> >::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,Vector3> >::_Self *)&__for_end) )
      {
        v39 = std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,Vector3>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,Vector3> > *const)&__for_begin);
        group_config_pair = std::get<0ul,std::pair<unsigned int,unsigned int> const,Vector3>(v39);
        pos = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,Vector3> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,Vector3>(v39);
        if ( *(_BYTE *)(((unsigned __int64)group_config_pair >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)group_config_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_config_pair >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        group_id = group_config_pair->first;
        if ( *(_BYTE *)(((unsigned __int64)&group_config_pair->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)group_config_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_config_pair->second >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        config_id = group_config_pair->second;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)preview_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          SceneComp = (PlayerSceneComp *)&preview_config_ptr->activity_scene_id;
          __asan_report_load4();
        }
        if ( !PlayerSceneComp::isInOneOffRecord(
                SceneComp,
                PROT_ENTITY_GADGET,
                preview_config_ptr->activity_scene_id,
                0,
                group_id,
                config_id) )
        {
          chest_pos = proto::MichiaeMatsuriActivityDetailInfo::add_chest_pos_list(detail_info);
          proto::MichiaeMatsuriChestPositionInfo::set_group_id(chest_pos, group_id);
          proto::MichiaeMatsuriChestPositionInfo::set_config_id(chest_pos, config_id);
          Vector3::operator proto::Vector((proto::Vector *)&v49, pos);
          v13 = proto::MichiaeMatsuriChestPositionInfo::mutable_pos(chest_pos);
          proto::Vector::operator=(v13, (proto::Vector *)&v49);
          proto::Vector::~Vector((proto::Vector *const)&v49);
        }
        std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,Vector3>>::operator++((std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,Vector3> > *const)&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      challenge_map_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findChallengePosMapByActivityId(
                            conf_mgr,
                            this->activity_id_);
      if ( !challenge_map_ptr )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "toClient",
          149);
        v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v49,
                (const char (*)[58])"[Michiae_Matsuri] challenge_map_ptr is null, activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v49);
        return -1;
      }
      __for_range_2 = challenge_map_ptr;
      __for_begin_0._M_node = std::map<unsigned int,std::pair<Vector3,unsigned int>>::begin(challenge_map_ptr)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::pair<Vector3,unsigned int>>::end(__for_range_2)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v35 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int>>>::operator*(&__for_begin_0);
        group_id_0 = std::get<0ul,unsigned int const,std::pair<Vector3,unsigned int>>(v35);
        pos_gadget_pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<Vector3,unsigned int>>(v35);
        __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_set<unsigned int>::end(&this->finished_challenge_group_id_set_)._M_cur;
        __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_set<unsigned int>::find(&this->finished_challenge_group_id_set_, group_id_0)._M_cur;
        if ( std::__detail::operator==<unsigned int,false>(
               (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
               (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
        {
          challenge_pos = proto::MichiaeMatsuriActivityDetailInfo::add_challenge_pos_list(detail_info);
          if ( *(_BYTE *)(((unsigned __int64)group_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id_0 >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::MichiaeMatsuriChallengePositionInfo::set_group_id(challenge_pos, *group_id_0);
          Vector3::operator proto::Vector((proto::Vector *)&v49, &pos_gadget_pair->first);
          v15 = proto::MichiaeMatsuriChallengePositionInfo::mutable_pos(challenge_pos);
          proto::Vector::operator=(v15, (proto::Vector *)&v49);
          proto::Vector::~Vector((proto::Vector *const)&v49);
          if ( *(_BYTE *)(((unsigned __int64)&pos_gadget_pair->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos_gadget_pair + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos_gadget_pair->second >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::MichiaeMatsuriChallengePositionInfo::set_gadget_id(challenge_pos, pos_gadget_pair->second);
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int>>>::operator++(&__for_begin_0);
      }
    }
    return 0;
  }
};

// Line 168: range 000000001455CEBC-000000001455CF19
int32_t __cdecl MichiaeMatsuriActivity::init(MichiaeMatsuriActivity *const this)
{
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    MichiaeMatsuriActivity::registerObserver(this);
  }
  return 0;
};

// Line 178: range 000000001455CF1A-000000001455CF34
void __cdecl MichiaeMatsuriActivity::onStart(MichiaeMatsuriActivity *const this)
{
  MichiaeMatsuriActivity::registerObserver(this);
};

// Line 183: range 000000001455CF36-000000001455D2DB
void __cdecl MichiaeMatsuriActivity::onPreStart(MichiaeMatsuriActivity *const this)
{
  std::map<unsigned int,bool>::mapped_type *v1; // rax
  _BYTE *v2; // rdx
  std::unordered_map<unsigned int,data::MichiaeStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,data::MichiaeStageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const ActivityMichiaeMatsuriExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-68h]
  const std::unordered_map<unsigned int,data::MichiaeStageExcelConfig> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,data::MichiaeStageExcelConfig> *v7; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,data::MichiaeStageExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeStageExcelConfig> >::type *stage_config; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+60h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->statue_refresh_group_time_);
  }
  this->statue_refresh_group_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gain_crystal_exp_);
  }
  this->gain_crystal_exp_ = 0;
  if ( !std::map<unsigned int,bool>::empty(&this->stage_open_map_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "onPreStart",
      188);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v11,
      (const char (*)[47])"[Michiae_Matsuri] stage_open_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::map<unsigned int,bool>::clear(&this->stage_open_map_);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  __for_range = &config_mgr->michiae_stage_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::MichiaeStageExcelConfig>::begin(&config_mgr->michiae_stage_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::MichiaeStageExcelConfig>::end(&config_mgr->michiae_stage_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::MichiaeStageExcelConfig>(v7);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeStageExcelConfig>(v7);
    v1 = std::map<unsigned int,bool>::operator[](&this->stage_open_map_, stage_id);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v1 & 7) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v1);
    }
    *v2 = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( !std::unordered_set<unsigned int>::empty(&this->unlocked_skill_id_set_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "onPreStart",
      199);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      &v11,
      (const char (*)[54])"[Michiae_Matsuri] unlocked_skill_id_set_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::unordered_set<unsigned int>::clear(&this->unlocked_skill_id_set_);
  }
  if ( !std::unordered_set<unsigned int>::empty(&this->finished_challenge_group_id_set_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "onPreStart",
      205);
    common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
      &v11,
      (const char (*)[64])"[Michiae_Matsuri] finished_challenge_group_id_set_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::unordered_set<unsigned int>::clear(&this->finished_challenge_group_id_set_);
  }
};

// Line 211: range 000000001455D2DC-000000001455DA1A
void __cdecl MichiaeMatsuriActivity::registerObserver(MichiaeMatsuriActivity *const this)
{
  unsigned __int64 p_M_last; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // r12
  PlayerEventComp *v8; // r12
  PlayerEventComp v9; // [rsp+60h] [rbp-100h] BYREF

  p_M_last = (unsigned __int64)&v9.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "2 32 16 12 this_ptr:212 64 16 12 this_wtr:218";
  *(_QWORD *)(p_M_last + 16) = MichiaeMatsuriActivity::registerObserver;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<MichiaeMatsuriActivity>((MichiaeMatsuriActivity *)(p_M_last + 32));
  if ( std::operator==<MichiaeMatsuriActivity>(0LL, (const std::shared_ptr<MichiaeMatsuriActivity> *)(p_M_last + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "registerObserver",
      215);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const char (*)[54])"dynamic_pointer_cast to MichiaeMatsuriActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  }
  else
  {
    std::weak_ptr<MichiaeMatsuriActivity>::weak_ptr<MichiaeMatsuriActivity,void>(
      (std::weak_ptr<MichiaeMatsuriActivity> *const)(p_M_last + 64),
      (const std::shared_ptr<MichiaeMatsuriActivity> *)(p_M_last + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::weak_ptr<MichiaeMatsuriActivity>::weak_ptr(
        (std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (const std::weak_ptr<MichiaeMatsuriActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<MichiaeMatsuriActivity,PostEnterSceneEvent>(
        &v9,
        (std::weak_ptr<MichiaeMatsuriActivity> *)EventComp,
        (void (*)(MichiaeMatsuriActivity *, const PostEnterSceneEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::operator=(&this->post_enter_scene_wtr_, (std::weak_ptr<Observer> *)&v9);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9);
      std::weak_ptr<MichiaeMatsuriActivity>::~weak_ptr((std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->challenge_finish_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = Player::getEventComp(this->player_);
      std::weak_ptr<MichiaeMatsuriActivity>::weak_ptr(
        (std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (const std::weak_ptr<MichiaeMatsuriActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<MichiaeMatsuriActivity,ChallengeFinishEvent>(
        (PlayerEventComp *const)&v9._M_weak_this._M_refcount,
        (std::weak_ptr<MichiaeMatsuriActivity> *)v5,
        (void (*)(MichiaeMatsuriActivity *, const ChallengeFinishEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::operator=(
        &this->challenge_finish_wtr_,
        (std::weak_ptr<Observer> *)&v9._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9._M_weak_this._M_refcount);
      std::weak_ptr<MichiaeMatsuriActivity>::~weak_ptr((std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->obtain_item_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v6 = Player::getEventComp(this->player_);
      std::weak_ptr<MichiaeMatsuriActivity>::weak_ptr(
        (std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (const std::weak_ptr<MichiaeMatsuriActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<MichiaeMatsuriActivity,ObtainItemEvent>(
        (PlayerEventComp *const)&v9.event_center_,
        (std::weak_ptr<MichiaeMatsuriActivity> *)v6,
        (void (*)(MichiaeMatsuriActivity *, const ObtainItemEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::operator=(&this->obtain_item_wtr_, (std::weak_ptr<Observer> *)&v9.event_center_);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_);
      std::weak_ptr<MichiaeMatsuriActivity>::~weak_ptr((std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->chest_open_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = Player::getEventComp(this->player_);
      std::weak_ptr<MichiaeMatsuriActivity>::weak_ptr(
        (std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (const std::weak_ptr<MichiaeMatsuriActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<MichiaeMatsuriActivity,ChestOpenEvent>(
        (PlayerEventComp *const)&v9.event_center_.context_.pending_que_,
        (std::weak_ptr<MichiaeMatsuriActivity> *)v7,
        (void (*)(MichiaeMatsuriActivity *, const ChestOpenEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::operator=(
        &this->chest_open_wtr_,
        (std::weak_ptr<Observer> *)&v9.event_center_.context_.pending_que_);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_.context_.pending_que_);
      std::weak_ptr<MichiaeMatsuriActivity>::~weak_ptr((std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->offering_levelup_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = Player::getEventComp(this->player_);
      std::weak_ptr<MichiaeMatsuriActivity>::weak_ptr(
        (std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_,
        (const std::weak_ptr<MichiaeMatsuriActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<MichiaeMatsuriActivity,OfferingLevelupEvent>(
        (PlayerEventComp *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (std::weak_ptr<MichiaeMatsuriActivity> *)v8,
        (void (*)(MichiaeMatsuriActivity *, const OfferingLevelupEvent *))&v9.event_center_.context_.pending_que_);
      std::weak_ptr<Observer>::operator=(
        &this->offering_levelup_wtr_,
        (std::weak_ptr<Observer> *)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<MichiaeMatsuriActivity>::~weak_ptr((std::weak_ptr<MichiaeMatsuriActivity> *const)&v9.event_center_.context_.pending_que_);
    }
    std::weak_ptr<MichiaeMatsuriActivity>::~weak_ptr((std::weak_ptr<MichiaeMatsuriActivity> *const)(p_M_last + 64));
  }
  std::shared_ptr<MichiaeMatsuriActivity>::~shared_ptr((std::shared_ptr<MichiaeMatsuriActivity> *const)(p_M_last + 32));
  if ( &v9.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
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

// Line 243: range 000000001455DA1C-000000001455DC82
void __cdecl MichiaeMatsuriActivity::unregisterObserver(MichiaeMatsuriActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax
  PlayerEventComp *v3; // rax
  PlayerEventComp *v4; // rax
  PlayerEventComp *v5; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->post_enter_scene_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->post_enter_scene_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->challenge_finish_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->challenge_finish_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->challenge_finish_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->obtain_item_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v3, &this->obtain_item_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->obtain_item_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->chest_open_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v4, &this->chest_open_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->chest_open_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->offering_levelup_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v5, &this->offering_levelup_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->offering_levelup_wtr_);
  }
};

// Line 272: range 000000001455DC84-000000001455DC9E
void __cdecl MichiaeMatsuriActivity::onSettle(MichiaeMatsuriActivity *const this)
{
  MichiaeMatsuriActivity::unregisterObserver(this);
};

// Line 277: range 000000001455DCA0-000000001455DCBF
void __cdecl MichiaeMatsuriActivity::onDailyRefresh(MichiaeMatsuriActivity *const this)
{
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 282: range 000000001455DCC0-000000001455DD92
void __cdecl MichiaeMatsuriActivity::onClear(MichiaeMatsuriActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->statue_refresh_group_time_);
  }
  this->statue_refresh_group_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gain_crystal_exp_);
  }
  this->gain_crystal_exp_ = 0;
  std::map<unsigned int,bool>::clear(&this->stage_open_map_);
  std::unordered_set<unsigned int>::clear(&this->unlocked_skill_id_set_);
  std::unordered_set<unsigned int>::clear(&this->finished_challenge_group_id_set_);
};

// Line 291: range 000000001455DD94-000000001455E046
int32_t __cdecl MichiaeMatsuriActivity::execAction(
        MichiaeMatsuriActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // r13
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:301";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_MICHIAE_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      v6 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v6, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "execAction",
          304);
        v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v10,
               (const char (*)[28])"[Michiae_Matsuri] strToNum ");
        v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v8);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v10);
        result = -1;
      }
      else
      {
        MichiaeMatsuriActivity::openActivityStage(this, *(_DWORD *)(v2 + 32));
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "execAction",
        298);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        &v10,
        (const char (*)[40])"[Michiae_Matsuri] action param size < 1");
      common::milog::MiLogStream::~MiLogStream(&v10);
      result = -1;
    }
  }
  else
  {
    result = BaseActivity::execAction((BaseActivity *const)this, action_exec);
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

// Line 317: range 000000001455E048-000000001455E352
__int64 __fastcall MichiaeMatsuriActivity::openActivityStage(MichiaeMatsuriActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v7; // rdx
  bool *p_second; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v10; // rdx
  bool *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:316 64 8 8 iter:318";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::openActivityStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,bool>::iterator *)(v2 + 64) = std::map<unsigned int,bool>::find(
                                                          &this->stage_open_map_,
                                                          (const std::map<unsigned int,bool>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 64), &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "openActivityStage",
      321);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v13,
           (const char (*)[36])"[Michiae_Matsuri] invalid stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_second);
    }
    if ( v7->second )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "openActivityStage",
        326);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v13,
             (const char (*)[41])"[Michiae_Matsuri] already open stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    v11 = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v11);
    }
    v10->second = 1;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    result = 0LL;
  }
  if ( v14 == (char *)v2 )
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

// Line 334: range 000000001455E354-000000001455E4E4
_BOOL8 __fastcall MichiaeMatsuriActivity::isActivityStageOpen(
        const MichiaeMatsuriActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::pointer v6; // rdx
  bool *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:333 64 8 8 iter:335";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::isActivityStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,bool>::const_iterator *)(v2 + 64) = std::map<unsigned int,bool>::find(
                                                                &this->stage_open_map_,
                                                                (const std::map<unsigned int,bool>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_second);
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

// Line 344: range 000000001455E4E6-000000001455E606
uint32_t __cdecl MichiaeMatsuriActivity::getCurStageId(const MichiaeMatsuriActivity *const this)
{
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *v1; // rax
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type cur_stage_id; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,bool>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,bool>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,bool> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,bool> *v7; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *stage_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_open; // [rsp+48h] [rbp-8h]

  cur_stage_id = 0;
  __for_range = &this->stage_open_map_;
  __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->stage_open_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,bool>(v7);
    v1 = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v7);
    is_open = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v1 & 7) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v1);
    }
    if ( *is_open )
    {
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      cur_stage_id = *stage_id;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
  }
  return cur_stage_id;
};

// Line 358: range 000000001455E608-000000001455ECA4
__int64 __fastcall MichiaeMatsuriActivity::commonCheckGadgetInteract(
        const MichiaeMatsuriActivity *const this,
        uint32_t entity_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const Vector3 *Position; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const Vector3 *v14; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v16; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-108h] BYREF
  uint32_t check_distance; // [rsp+1Ch] [rbp-104h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 entity_id:357 64 16 13 scene_ptr:359 96 16 14 gadget_ptr:365 128 16 14 avatar_ptr:371";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::commonCheckGadgetInteract;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "commonCheckGadgetInteract",
      362);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v21,
           (const char (*)[44])"[Michiae_Matsuri] getCurScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = -1;
  }
  else
  {
    v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Scene::findEntity<Gadget>((const Scene *const)(v2 + 96), v7);
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "commonCheckGadgetInteract",
        368);
      v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v21,
             (const char (*)[47])"[Michiae_Matsuri] findEntity fails, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v6 = 504;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getAvatarComp(this->player_);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 128));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "commonCheckGadgetInteract",
          374);
        v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v21,
               (const char (*)[44])"[Michiae_Matsuri] getCurAvatar fails, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v6 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v20);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
        check_distance = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v10->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v20);
        v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Position = Entity::getPosition((const Entity *const)v11);
        v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v14 = Entity::getPosition((const Entity *const)v13);
        if ( getDistance(v14, Position) <= (float)(int)check_distance )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(this->player_);
          if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/michiae_matsuri_activity.cpp",
              "commonCheckGadgetInteract",
              386);
            v16 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                    &v21,
                    (const char (*)[65])"[Michiae_Matsuri] interactStatue not in self player world, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
            common::milog::MiLogStream::~MiLogStream(&v21);
            v6 = 1201;
          }
          else
          {
            v6 = 0;
          }
        }
        else
        {
          v6 = 520;
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = v6;
  if ( v22 == (char *)v2 )
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

// Line 393: range 000000001455EE82-000000001455FE1A
__int64 __fastcall MichiaeMatsuriActivity::interactStatue(
        MichiaeMatsuriActivity *const this,
        uint32_t statue_entity_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  ActivityMichiaeMatsuriExcelConfigMgr *p_activity_michiae_matsuri_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t GroupId; // ecx
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ConfigId; // ecx
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 Position; // rax
  Scene *v22; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  int32_t *p_param1; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  uint32_t *p_uid; // rax
  Group *v28; // rax
  uint32_t v29; // ecx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  int32_t *v31; // rax
  uint32_t v32; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  uint32_t *v34; // rax
  Group *v35; // rax
  common::milog::MiLogStream *v36; // r14
  __int64 result; // rax
  MichiaeMatsuriActivity::interactStatue::<lambda(Player&)> v38; // [rsp-20h] [rbp-200h]
  unsigned int val; // [rsp+18h] [rbp-1C8h] BYREF
  int32_t common_check_ret; // [rsp+1Ch] [rbp-1C4h]
  float pray_effect_range; // [rsp+20h] [rbp-1C0h]
  uint32_t now; // [rsp+24h] [rbp-1BCh]
  const data::MichiaeOverallExcelConfig *preview_config_ptr; // [rsp+28h] [rbp-1B8h]
  MichiaeMatsuriActivity::interactStatue::<lambda(Player&)> __f; // [rsp+30h] [rbp-1B0h]
  common::milog::MiLogStream v45; // [rsp+50h] [rbp-190h] BYREF
  char v46[368]; // [rsp+70h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 20 statue_entity_id:392 64 12 14 gadget_pos:442 96 16 13 scene_ptr:399 128 16 14 gadget_p"
                        "tr:405 160 16 14 avatar_ptr:411 192 16 13 group_ptr:417 224 16 22 interact_event_ptr:460 256 16 "
                        "9 timer:475 288 16 13 event_ptr:477";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::interactStatue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -202178560;
  *(_DWORD *)(v2 + 48) = statue_entity_id;
  common_check_ret = MichiaeMatsuriActivity::commonCheckGadgetInteract(this, *(_DWORD *)(v2 + 48));
  if ( common_check_ret )
  {
    v5 = common_check_ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "interactStatue",
        402);
      v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v45,
             (const char (*)[44])"[Michiae_Matsuri] getCurScene failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v5 = -1;
    }
    else
    {
      v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Scene::findEntity<Gadget>((const Scene *const)(v2 + 128), v7);
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "interactStatue",
          408);
        v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v45,
               (const char (*)[47])"[Michiae_Matsuri] findEntity fails, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v45);
        v5 = 504;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 160));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/michiae_matsuri_activity.cpp",
            "interactStatue",
            414);
          v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                 &v45,
                 (const char (*)[44])"[Michiae_Matsuri] getCurAvatar fails, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v45);
          v5 = -1;
        }
        else
        {
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          Entity::getGroup((const Entity *const)(v2 + 192));
          if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 192)) )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/michiae_matsuri_activity.cpp",
              "interactStatue",
              420);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v45,
              (const char (*)[39])"[Michiae_Matsuri] group_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v45);
            v5 = -1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v2 + 288));
            p_activity_michiae_matsuri_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288))->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            preview_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
                                   p_activity_michiae_matsuri_config_mgr,
                                   this->activity_id_);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 288));
            if ( preview_config_ptr )
            {
              v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              GroupId = Group::getGroupId(v12);
              if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->statue_group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)preview_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->statue_group_id >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( GroupId == preview_config_ptr->statue_group_id )
              {
                v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                ConfigId = Entity::getConfigId((const Entity *const)v16);
                if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->statue_config_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->statue_config_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( ConfigId == preview_config_ptr->statue_config_id )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->pray_effect_range >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)preview_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->pray_effect_range >> 3)
                                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  pray_effect_range = preview_config_ptr->pray_effect_range;
                  v20 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  Position = (unsigned __int64)Entity::getPosition((const Entity *const)v20);
                  if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
                    && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
                    && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
                  {
                    Position = __asan_report_load_n(Position, 12LL);
                  }
                  *(_QWORD *)(v2 + 64) = *(_QWORD *)Position;
                  *(_DWORD *)(v2 + 72) = *(_DWORD *)(Position + 8);
                  v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                  __f.__this = this;
                  __f.__pray_effect_range = pray_effect_range;
                  __f.__gadget_pos = *(Vector3 *)(v2 + 64);
                  *(_QWORD *)&v38.__gadget_pos.y = *(_QWORD *)&__f.__gadget_pos.y;
                  *(_OWORD *)&v38.__this = __PAIR128__(
                                             *(unsigned __int64 *)&__f.__pray_effect_range,
                                             (unsigned __int64)this);
                  std::function<ForeachPolicy ()(Player &)>::function<MichiaeMatsuriActivity::interactStatue(unsigned int)::{lambda(Player &)#1},void,void>(
                    (std::function<ForeachPolicy(Player&)> *const)&v45,
                    v38);
                  Scene::foreachPlayer(v22, (std::function<ForeachPolicy(Player&)> *)&v45);
                  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v45);
                  EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 224), 104);
                  if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 224), 0LL) )
                  {
                    v23 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                    p_param1 = &v23->param1;
                    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                                 + 0x7FFF8000) )
                    {
                      __asan_report_store4(p_param1);
                    }
                    v23->param1 = 4;
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    Uid = Player::getUid(this->player_);
                    v26 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                    p_uid = &v26->uid;
                    if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3)
                                                                              + 0x7FFF8000) )
                    {
                      __asan_report_store4(p_uid);
                    }
                    v26->uid = Uid;
                    v28 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                    Group::handleEvent(v28, (EventPtr *)(v2 + 224));
                  }
                  now = common::tools::TimeUtils::getNow();
                  if ( *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( !this->statue_refresh_group_time_ )
                    goto LABEL_53;
                  v29 = now - this->statue_refresh_group_time_;
                  if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->statue_cd >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->statue_cd >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  if ( v29 < preview_config_ptr->statue_cd )
                  {
                    v5 = 0;
                  }
                  else
                  {
LABEL_53:
                    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 256));
                    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v2 + 256));
                    EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 288), 104);
                    if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 288), 0LL) )
                    {
                      v30 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
                      v31 = &v30->param1;
                      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store4(v31);
                      }
                      v30->param1 = 1;
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      v32 = Player::getUid(this->player_);
                      v33 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
                      v34 = &v33->uid;
                      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store4(v34);
                      }
                      v33->uid = v32;
                      v35 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                      Group::handleEvent(v35, (EventPtr *)(v2 + 288));
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store4(&this->statue_refresh_group_time_);
                    }
                    this->statue_refresh_group_time_ = now;
                    common::milog::MiLogStream::create(
                      &v45,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/michiae_matsuri_activity.cpp",
                      "interactStatue",
                      485);
                    v36 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            &v45,
                            (const char (*)[38])"[Michiae_Matsuri] refresh group cost:");
                    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 256));
                    common::milog::MiLogStream::operator<<<int,(int *)0>(v36, (const int *)&val);
                    common::milog::MiLogStream::~MiLogStream(&v45);
                    v5 = 0;
                    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 288));
                    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 256));
                  }
                  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 224));
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v45,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/michiae_matsuri_activity.cpp",
                    "interactStatue",
                    436);
                  v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                          &v45,
                          (const char (*)[38])"[Michiae_Matsuri] invalid config_id: ");
                  v19 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  val = Entity::getConfigId((const Entity *const)v19);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
                  common::milog::MiLogStream::~MiLogStream(&v45);
                  v5 = -1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v45,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/michiae_matsuri_activity.cpp",
                  "interactStatue",
                  431);
                v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v45,
                        (const char (*)[37])"[Michiae_Matsuri] invalid group_id: ");
                v15 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                val = Entity::getGroupId((const Entity *const)v15);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
                common::milog::MiLogStream::~MiLogStream(&v45);
                v5 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/michiae_matsuri_activity.cpp",
                "interactStatue",
                426);
              v11 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                      &v45,
                      (const char (*)[75])"[Michiae_Matsuri] findPreviewExcelConfigByActivityId failed, activity_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->activity_id_);
              common::milog::MiLogStream::~MiLogStream(&v45);
              v5 = -1;
            }
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 192));
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 160));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 128));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  result = v5;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 443: range 000000001455ECA6-000000001455EE81
ForeachPolicy __cdecl MichiaeMatsuriActivity::interactStatue(unsigned int)::{lambda(Player &)#1}::operator()(
        const MichiaeMatsuriActivity::interactStatue::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const Vector3 *Position; // rax
  double v7; // xmm0_8
  ForeachPolicy result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:445";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::interactStatue(unsigned int)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getAvatarComp(player);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 32));
  if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Position = Entity::getPosition((const Entity *const)v5);
    *(float *)&v7 = getPlaneDistance(&__closure->__gadget_pos, Position);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__pray_effect_range >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__pray_effect_range >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = __asan_report_load4();
    }
    if ( *(float *)&v7 <= __closure->__pray_effect_range )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MichiaeMatsuriActivity::refreshRegionalPlayVar(__closure->__this, player);
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v9 == (char *)v2 )
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

// Line 490: range 000000001455FE1C-00000000145604F0
__int64 __fastcall MichiaeMatsuriActivity::interactDarkChallengeGadget(
        MichiaeMatsuriActivity *const this,
        uint32_t gadget_entity_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  int32_t *p_param1; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  uint32_t *p_uid; // rax
  Group *v17; // rax
  __int64 result; // rax
  int32_t common_check_ret; // [rsp+14h] [rbp-11Ch]
  const data::MichiaeDarkChallengeExcelConfig *dark_challenge_config_ptr; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-110h] BYREF
  char v22[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 12 group_id:514 48 4 20 gadget_entity_id:489 64 16 13 scene_ptr:496 96 16 14 gadget_ptr:5"
                        "02 128 16 13 group_ptr:508 160 16 13 event_ptr:521";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::interactDarkChallengeGadget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 48) = gadget_entity_id;
  common_check_ret = MichiaeMatsuriActivity::commonCheckGadgetInteract(this, *(_DWORD *)(v2 + 48));
  if ( common_check_ret )
  {
    v5 = common_check_ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "interactDarkChallengeGadget",
        499);
      v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v21,
             (const char (*)[44])"[Michiae_Matsuri] getCurScene failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
    else
    {
      v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Scene::findEntity<Gadget>((const Scene *const)(v2 + 96), v7);
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "interactDarkChallengeGadget",
          505);
        v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v21,
               (const char (*)[47])"[Michiae_Matsuri] findEntity fails, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v21);
        v5 = 504;
      }
      else
      {
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Entity::getGroup((const Entity *const)(v2 + 128));
        if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/michiae_matsuri_activity.cpp",
            "interactDarkChallengeGadget",
            511);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v21,
            (const char (*)[39])"[Michiae_Matsuri] group_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v21);
          v5 = -1;
        }
        else
        {
          v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          *(_DWORD *)(v2 + 32) = Group::getGroupId(v9);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 160));
          v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          dark_challenge_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findDarkChallengeExcelConfigByGroupId(
                                        &v10->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                                        *(_DWORD *)(v2 + 32));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
          if ( dark_challenge_config_ptr )
          {
            EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 160), 104);
            if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 160), 0LL) )
            {
              v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              p_param1 = &v12->param1;
              if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(p_param1);
              }
              v12->param1 = 2;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              p_uid = &v15->uid;
              if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(p_uid);
              }
              v15->uid = Uid;
              v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              Group::handleEvent(v17, (EventPtr *)(v2 + 160));
            }
            v5 = 0;
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 160));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/michiae_matsuri_activity.cpp",
              "interactDarkChallengeGadget",
              518);
            v11 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                    &v21,
                    (const char (*)[64])"[Michiae_Matsuri] interactDarkChallengeGadget invalid group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v21);
            v5 = -1;
          }
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 128));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  result = v5;
  if ( v22 == (char *)v2 )
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

// Line 532: range 00000000145604F2-0000000014561631
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MichiaeMatsuriActivity::tryUnlockCrystalSkill(MichiaeMatsuriActivity *const this, uint32_t skill_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rcx
  ActivityMichiaeMatsuriExcelConfigMgr *p_activity_michiae_matsuri_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v12; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v22; // rax
  common::milog::MiLogStream *v23; // rax
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriUnlockCrystalSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  Player *v27; // r14
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  __int64 result; // rax
  std::string v34; // [rsp+0h] [rbp-1B0h] OVERLAPPED BYREF
  const data::MichiaeOverallExcelConfig *preview_config_ptr; // [rsp+20h] [rbp-190h]
  const data::MichiaeBattleSkillExcelConfig *battle_skill_config_ptr; // [rsp+28h] [rbp-188h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-180h] BYREF
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-170h] BYREF
  char v39[336]; // [rsp+60h] [rbp-150h] BYREF

  v34._M_string_length = (std::string::size_type)this;
  HIDWORD(v34._M_dataplus._M_p) = skill_id;
  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 10 holder:596 48 4 12 skill_id:531 64 8 17 skill_id_iter:562 96 8 10 reason:584 128 16 13"
                        " scene_ptr:538 160 16 14 item_param:576 192 16 13 event_ptr:593 224 16 11 log_ptr:597 256 16 12 team_ptr:602";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::tryUnlockCrystalSkill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -202178560;
  *(_DWORD *)(v2 + 48) = HIDWORD(v34._M_dataplus._M_p);
  if ( !BaseActivity::isOpening((const BaseActivity *const)v34._M_string_length, 0)
    || BaseActivity::isSettled((const BaseActivity *const)v34._M_string_length) )
  {
    v6 = -1;
    goto LABEL_71;
  }
  if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(v34._M_string_length + 24));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 128));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "tryUnlockCrystalSkill",
      541);
    v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v38,
           (const char (*)[41])"[Michiae_Matsuri] getScene fail, player:");
    if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, *(const Player **)(v34._M_string_length + 24));
    common::milog::MiLogStream::~MiLogStream(&v38);
    v6 = -1;
    goto LABEL_70;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 256));
  p_activity_michiae_matsuri_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256))->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
  if ( *(_BYTE *)(((v34._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v34._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  preview_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
                         p_activity_michiae_matsuri_config_mgr,
                         *(_DWORD *)(v34._M_string_length + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 256));
  if ( preview_config_ptr )
  {
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    SceneId = Scene::getSceneId(v10);
    if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)preview_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( SceneId != preview_config_ptr->activity_scene_id )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "tryUnlockCrystalSkill",
        552);
      v12 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              &v38,
              (const char (*)[73])"[Michiae_Matsuri] trying to unlock crystal skill but not in scene7, uid:");
      if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_39:
      *((_DWORD *)&v34._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(v34._M_string_length
                                                                                                  + 24));
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v12,
              (const unsigned int *)&v34._anon_0._M_allocated_capacity + 2);
      v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])", skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v38);
      v6 = -1;
      goto LABEL_70;
    }
    if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(*(Player *const *)(v34._M_string_length + 24));
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "tryUnlockCrystalSkill",
        558);
      v14 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v38,
              (const char (*)[59])"[Michiae_Matsuri] guest trying to unlock skill, host uid: ");
      v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      *((_DWORD *)&v34._anon_0._M_allocated_capacity + 2) = Scene::getOwnerUid(v15);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v14,
              (const unsigned int *)&v34._anon_0._M_allocated_capacity + 2);
      v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" guest player:");
      if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v17, *(const Player **)(v34._M_string_length + 24));
      common::milog::MiLogStream::~MiLogStream(&v38);
      v6 = -1;
      goto LABEL_70;
    }
    *(std::unordered_set<unsigned int>::iterator *)(v2 + 64) = std::unordered_set<unsigned int>::find(
                                                                 (std::unordered_set<unsigned int> *const)(v34._M_string_length + 992),
                                                                 (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
    *(std::unordered_set<unsigned int>::iterator *)(v2 + 96) = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v34._M_string_length + 992));
    if ( std::__detail::operator!=<unsigned int,false>(
           (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "tryUnlockCrystalSkill",
        565);
      v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v38,
              (const char (*)[57])"[Michiae_Matsuri] trying to unlock duplicate skill, uid:");
      if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_39;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 256));
    v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
    battle_skill_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findBattleSkillExcelConfigBySkillId(
                                &v18->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                                *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 256));
    if ( !battle_skill_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "tryUnlockCrystalSkill",
        572);
      v12 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
              &v38,
              (const char (*)[67])"[Michiae_Matsuri] skill id cannot find corresponding config!, uid:");
      if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_39;
    }
    *(_QWORD *)(v2 + 160) = 0LL;
    *(_QWORD *)(v2 + 168) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&battle_skill_config_ptr->material_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)battle_skill_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&battle_skill_config_ptr->material_id >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 160) = battle_skill_config_ptr->material_id;
    if ( *(_BYTE *)(((unsigned __int64)&battle_skill_config_ptr->material_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&battle_skill_config_ptr->material_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 164) = battle_skill_config_ptr->material_num;
    if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(*(Player *const *)(v34._M_string_length + 24));
    *((_DWORD *)&v34._anon_0._M_allocated_capacity + 3) = PlayerItemComp::checkSubItem(
                                                            ItemComp,
                                                            (const ItemParam *)(v2 + 160));
    if ( *((_DWORD *)&v34._anon_0._M_allocated_capacity + 3) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "tryUnlockCrystalSkill",
        580);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v38, (const char (*)[20])"checkSubItem fails!");
      common::milog::MiLogStream::~MiLogStream(&v38);
      v6 = *((_DWORD *)&v34._anon_0._M_allocated_capacity + 3);
      goto LABEL_70;
    }
    SubItemReason::SubItemReason((SubItemReason *const)(v2 + 96), ACTION_REASON_MICHIAE_MATSURI_UNLOCK_CRYSTAL_SKILL);
    if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = Player::getItemComp(*(Player *const *)(v34._M_string_length + 24));
    if ( PlayerItemComp::subItem(v22, (const ItemParam *)(v2 + 160), (const SubItemReason *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "tryUnlockCrystalSkill",
        587);
      v23 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v38,
              (const char (*)[22])"subItem fails! count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 164));
      common::milog::MiLogStream::~MiLogStream(&v38);
      v6 = -1;
      goto LABEL_70;
    }
    std::unordered_set<unsigned int>::insert(
      (std::unordered_set<unsigned int> *const)(v34._M_string_length + 992),
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    common::tools::perf::make_shared<MichiaeMatsuriUnlockCrystalSkillEvent>();
    if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(*(Player *const *)(v34._M_string_length + 24));
    std::shared_ptr<BaseEvent>::shared_ptr<MichiaeMatsuriUnlockCrystalSkillEvent,void>(
      (std::shared_ptr<BaseEvent> *const)(v2 + 256),
      (const std::shared_ptr<MichiaeMatsuriUnlockCrystalSkillEvent> *)(v2 + 192));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 256));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 256));
    if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(v34._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v38, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xDEDu, v34);
    std::string::~string(&v38);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMichiaeMatsuriUnlockCrystalSkill>();
    v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriUnlockCrystalSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriUnlockCrystalSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
    proto_log::PlayerLogBodyMichiaeMatsuriUnlockCrystalSkill::set_skill_id(v26, *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v27 = *(Player **)(v34._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)(v2 + 256),
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMichiaeMatsuriUnlockCrystalSkill,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyMichiaeMatsuriUnlockCrystalSkill> *)(v2 + 224));
    Player::printStatLog(v27, &p_body_ptr, (MessagePtr *)(v2 + 256), 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 256));
    if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(*(Player *const *)(v34._M_string_length + 24));
    PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v2 + 256));
    if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v2 + 256)) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "tryUnlockCrystalSkill",
        605);
      v28 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v38,
              (const char (*)[54])"[MichiaeMatsuri] getTeamEntity team_ptr is null. uid:");
      if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v29 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
      if ( !(unsigned int)Creature::setServerGlobalValue(
                            v29,
                            &battle_skill_config_ptr->server_global_value_name,
                            1.0,
                            1) )
      {
        v6 = 0;
        goto LABEL_69;
      }
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "tryUnlockCrystalSkill",
        610);
      v30 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v38,
              (const char (*)[49])"[MichiaeMatsuri] setServerGlobalValue fail, key:");
      v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v30,
              &battle_skill_config_ptr->server_global_value_name);
      v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])", value:1");
      v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((v34._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    *((_DWORD *)&v34._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(v34._M_string_length
                                                                                                + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v28,
      (const unsigned int *)&v34._anon_0._M_allocated_capacity + 2);
    common::milog::MiLogStream::~MiLogStream(&v38);
    v6 = 0;
LABEL_69:
    std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v2 + 256));
    std::shared_ptr<proto_log::PlayerLogBodyMichiaeMatsuriUnlockCrystalSkill>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMichiaeMatsuriUnlockCrystalSkill> *const)(v2 + 224));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
    std::shared_ptr<MichiaeMatsuriUnlockCrystalSkillEvent>::~shared_ptr((std::shared_ptr<MichiaeMatsuriUnlockCrystalSkillEvent> *const)(v2 + 192));
    goto LABEL_70;
  }
  common::milog::MiLogStream::create(
    &v38,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/activity/michiae_matsuri_activity.cpp",
    "tryUnlockCrystalSkill",
    547);
  v9 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
         &v38,
         (const char (*)[75])"[Michiae_Matsuri] findPreviewExcelConfigByActivityId failed, activity_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v9,
    (const unsigned int *)(v34._M_string_length + 32));
  common::milog::MiLogStream::~MiLogStream(&v38);
  v6 = -1;
LABEL_70:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
LABEL_71:
  result = v6;
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 617: range 0000000014561632-0000000014561ED6
__int64 __fastcall MichiaeMatsuriActivity::interactBossChallengeGadget(
        MichiaeMatsuriActivity *const this,
        uint32_t gadget_entity_id,
        uint32_t level_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // r14
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  int32_t *p_param1; // rax
  int32_t v19; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  uint32_t *p_uid; // rax
  Group *v24; // rax
  __int64 result; // rax
  int32_t common_check_ret; // [rsp+14h] [rbp-13Ch]
  const data::MichiaeBossChallengeExcelConfig *boss_challenge_config_ptr; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v29; // [rsp+20h] [rbp-130h] BYREF
  char v30[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 12 group_id:645 64 4 20 gadget_entity_id:616 80 4 12 level_id:616 96 16 13 scene_ptr:627 "
                        "128 16 14 gadget_ptr:633 160 16 13 group_ptr:639 192 16 13 event_ptr:658";
  *(_QWORD *)(v3 + 16) = MichiaeMatsuriActivity::interactBossChallengeGadget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 64) = gadget_entity_id;
  *(_DWORD *)(v3 + 80) = level_id;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    v7 = -1;
  }
  else
  {
    common_check_ret = MichiaeMatsuriActivity::commonCheckGadgetInteract(this, *(_DWORD *)(v3 + 64));
    if ( common_check_ret )
    {
      v7 = common_check_ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "interactBossChallengeGadget",
          630);
        v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v29,
               (const char (*)[44])"[Michiae_Matsuri] getCurScene failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v29);
        v7 = -1;
      }
      else
      {
        v9 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Scene::findEntity<Gadget>((const Scene *const)(v3 + 128), v9);
        if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/michiae_matsuri_activity.cpp",
            "interactBossChallengeGadget",
            636);
          v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v29,
                  (const char (*)[47])"[Michiae_Matsuri] findEntity fails, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v29);
          v7 = 504;
        }
        else
        {
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          Entity::getGroup((const Entity *const)(v3 + 160));
          if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/michiae_matsuri_activity.cpp",
              "interactBossChallengeGadget",
              642);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v29,
              (const char (*)[39])"[Michiae_Matsuri] group_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v29);
            v7 = -1;
          }
          else
          {
            v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            *(_DWORD *)(v3 + 48) = Group::getGroupId(v11);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v3 + 192));
            v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            boss_challenge_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findBossChallengeExcelConfigByLevelId(
                                          &v12->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                                          *(_DWORD *)(v3 + 80));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
            if ( boss_challenge_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&boss_challenge_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)boss_challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&boss_challenge_config_ptr->group_id >> 3)
                                                                                         + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( boss_challenge_config_ptr->group_id == *(_DWORD *)(v3 + 48) )
              {
                EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 192), 104);
                if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 192), 0LL) )
                {
                  v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  p_param1 = &v17->param1;
                  if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_param1);
                  }
                  v17->param1 = 3;
                  v19 = *(_DWORD *)(v3 + 80);
                  v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  if ( *(_BYTE *)(((unsigned __int64)&v20->param2 >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v20->param2 >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v20 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v20->param2);
                  }
                  v20->param2 = v19;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  Uid = Player::getUid(this->player_);
                  v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  p_uid = &v22->uid;
                  if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_uid);
                  }
                  v22->uid = Uid;
                  v24 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  Group::handleEvent(v24, (EventPtr *)(v3 + 192));
                }
                v7 = 0;
                std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 192));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v29,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/michiae_matsuri_activity.cpp",
                  "interactBossChallengeGadget",
                  654);
                v14 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                        &v29,
                        (const char (*)[70])"[Michiae_Matsuri] interactBossChallengeGadget get different group id:");
                v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v14,
                        (const unsigned int *)(v3 + 48));
                v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v15,
                        (const char (*)[17])"config.group_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  &boss_challenge_config_ptr->group_id);
                common::milog::MiLogStream::~MiLogStream(&v29);
                v7 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v29,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/michiae_matsuri_activity.cpp",
                "interactBossChallengeGadget",
                649);
              v13 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      &v29,
                      (const char (*)[64])"[Michiae_Matsuri] interactBossChallengeGadget invalid level_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 80));
              common::milog::MiLogStream::~MiLogStream(&v29);
              v7 = -1;
            }
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 160));
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 128));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
    }
  }
  result = v7;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 670: range 0000000014561ED8-0000000014562442
// local variable allocation has failed, the output may be wrong!
void __cdecl MichiaeMatsuriActivity::refreshRegionalPlayVar(MichiaeMatsuriActivity *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  float v11; // xmm0_4
  std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  float VarValue; // xmm0_4
  std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::__shared_ptr_access<MichiaeMatsuriRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  float TotalDarkPressureVarValue; // xmm0_4
  MichiaeMatsuriRegionalPlay *v18; // rax
  std::string playera; // [rsp+0h] [rbp-130h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  playera._M_string_length = (std::string::size_type)this;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 10 holder:685 64 16 26 base_regional_play_ptr:671 96 16 37 michiae_matsuri_regional_play_"
                        "ptr:677 128 16 11 log_ptr:686";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::refreshRegionalPlayVar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  Player::getRegionalPlayComp((Player *const)playera._M_dataplus._M_p);
  PlayerRegionalPlayComp::getLastRegionalPlayPtr((const PlayerRegionalPlayComp *const)(v2 + 64));
  if ( std::operator==<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "refreshRegionalPlayVar",
      674);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v22,
           (const char (*)[55])"[Michiae_Matsuri] base_regional_play_ptr is null, uid:");
    *((_DWORD *)&playera._anon_0._M_allocated_capacity + 2) = Player::getUid((const Player *const)playera._M_dataplus._M_p);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v5,
      (const unsigned int *)&playera._anon_0._M_allocated_capacity + 2);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    std::dynamic_pointer_cast<MichiaeMatsuriRegionalPlay,BaseRegionalPlay>((const std::shared_ptr<BaseRegionalPlay> *)(v2 + 96));
    if ( std::operator==<MichiaeMatsuriRegionalPlay>(
           0LL,
           (const std::shared_ptr<MichiaeMatsuriRegionalPlay> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "refreshRegionalPlayVar",
        680);
      v6 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
             &v22,
             (const char (*)[79])"[Michiae_Matsuri] cur regional_play is not michiae_matsuri_regional_play, uid:");
      *((_DWORD *)&playera._anon_0._M_allocated_capacity + 2) = Player::getUid((const Player *const)playera._M_dataplus._M_p);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v6,
        (const unsigned int *)&playera._anon_0._M_allocated_capacity + 2);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      BasicComp = Player::getBasicComp((Player *const)playera._M_dataplus._M_p);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDEEu, playera);
      std::string::~string(&v22);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy>();
      *((_DWORD *)&playera._anon_0._M_allocated_capacity + 3) = 2501;
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v9 = (unsigned __int64)std::__shared_ptr_access<MichiaeMatsuriRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MichiaeMatsuriRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v10 = *(_QWORD *)v9 + 32LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v11 = (*(float (__fastcall **)(unsigned __int64, _QWORD))v10)(
              v9,
              *((unsigned int *)&playera._anon_0._M_allocated_capacity + 3));
      proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy::set_energy_upper_limit(v8, v11);
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      RegionalPlayComp = Player::getRegionalPlayComp((Player *const)playera._M_dataplus._M_p);
      VarValue = PlayerRegionalPlayComp::getVarValue(
                   RegionalPlayComp,
                   *((uint32_t *)&playera._anon_0._M_allocated_capacity + 3));
      proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy::set_rest_energy(v12, VarValue);
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v16 = std::__shared_ptr_access<MichiaeMatsuriRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MichiaeMatsuriRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      TotalDarkPressureVarValue = MichiaeMatsuriRegionalPlay::getTotalDarkPressureVarValue(v16);
      proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy::set_cur_dark_pressure(v15, TotalDarkPressureVarValue);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy> *)(v2 + 128));
      Player::printStatLog((Player *const)playera._M_dataplus._M_p, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      v18 = std::__shared_ptr_access<MichiaeMatsuriRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MichiaeMatsuriRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      MichiaeMatsuriRegionalPlay::refreshVarToDefault(v18);
      std::shared_ptr<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMichiaeMatsuriRestoreCrystalEnergy> *const)(v2 + 128));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    std::shared_ptr<MichiaeMatsuriRegionalPlay>::~shared_ptr((std::shared_ptr<MichiaeMatsuriRegionalPlay> *const)(v2 + 96));
  }
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v2 + 64));
  if ( v23 == (char *)v2 )
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

// Line 700: range 0000000014562444-0000000014562E48
void __cdecl MichiaeMatsuriActivity::onPostEnterSceneEvent(
        MichiaeMatsuriActivity *const this,
        const PostEnterSceneEvent *post_enter_scene_event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v6; // rcx
  ActivityMichiaeMatsuriExcelConfigMgr *p_activity_michiae_matsuri_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  unsigned int val; // [rsp+1Ch] [rbp-194h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-190h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-188h] BYREF
  std::__detail::_Node_iterator_base<unsigned int,false> __y; // [rsp+30h] [rbp-180h] BYREF
  const data::MichiaeOverallExcelConfig *preview_config_ptr; // [rsp+38h] [rbp-178h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-170h]
  const data::MichiaeBattleSkillExcelConfig *battle_skill_config_ptr; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-130h] BYREF
  char v32[272]; // [rsp+A0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 12 skill_id:730 48 4 13 sgv_value:740 64 8 8 iter:739 96 16 13 scene_ptr:705 128 16 12 te"
                        "am_ptr:722 160 24 16 skill_id_vec:729";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "onPostEnterSceneEvent",
        708);
      v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v31,
             (const char (*)[41])"[Michiae_Matsuri] getScene fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      p_activity_michiae_matsuri_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      preview_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
                             p_activity_michiae_matsuri_config_mgr,
                             this->activity_id_);
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( preview_config_ptr )
      {
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        SceneId = Scene::getSceneId(v9);
        if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)preview_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( SceneId == preview_config_ptr->activity_scene_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getAvatarComp(this->player_);
          PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v2 + 128));
          if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v2 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/michiae_matsuri_activity.cpp",
              "onPostEnterSceneEvent",
              725);
            v11 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    &v31,
                    (const char (*)[54])"[MichiaeMatsuri] getTeamEntity team_ptr is null. uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
            common::milog::MiLogStream::~MiLogStream(&v31);
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v29);
            v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
            ActivityMichiaeMatsuriExcelConfigMgr::getAllSkillIdFromConfig(
              (std::vector<unsigned int> *)(v2 + 160),
              &v12->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr);
            std::shared_ptr<Config>::~shared_ptr(&v29);
            __for_range = (const std::vector<unsigned int> *)(v2 + 160);
            __for_begin._M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(v2 + 160))._M_current;
            __for_end._M_current = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(v2 + 160))._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
            {
              v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 32) = *v13;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v29);
              v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
              battle_skill_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findBattleSkillExcelConfigBySkillId(
                                          &v14->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                                          *(_DWORD *)(v2 + 32));
              std::shared_ptr<Config>::~shared_ptr(&v29);
              if ( battle_skill_config_ptr )
              {
                *(std::unordered_set<unsigned int>::iterator *)(v2 + 64) = std::unordered_set<unsigned int>::find(
                                                                             &this->unlocked_skill_id_set_,
                                                                             (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
                __y._M_cur = std::unordered_set<unsigned int>::end(&this->unlocked_skill_id_set_)._M_cur;
                *(_DWORD *)(v2 + 48) = !std::__detail::operator==<unsigned int,false>(
                                          (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64),
                                          &__y);
                v16 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( (unsigned int)Creature::setServerGlobalValue(
                                     v16,
                                     &battle_skill_config_ptr->server_global_value_name,
                                     (float)*(int *)(v2 + 48),
                                     1) )
                {
                  common::milog::MiLogStream::create(
                    &v31,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/michiae_matsuri_activity.cpp",
                    "onPostEnterSceneEvent",
                    743);
                  v17 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v31,
                          (const char (*)[49])"[MichiaeMatsuri] setServerGlobalValue fail, key:");
                  v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v17,
                          &battle_skill_config_ptr->server_global_value_name);
                  v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v18,
                          (const char (*)[9])", value:");
                  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v19,
                          (const unsigned int *)(v2 + 48));
                  v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])", uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  val = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
                  common::milog::MiLogStream::~MiLogStream(&v31);
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/michiae_matsuri_activity.cpp",
                  "onPostEnterSceneEvent",
                  736);
                v15 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                        &v30,
                        (const char (*)[73])"[Michiae_Matsuri] skill id cannot find corresponding config!, skill id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 32));
                common::milog::MiLogStream::~MiLogStream(&v30);
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
          }
          std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v2 + 128));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "onPostEnterSceneEvent",
          714);
        v8 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
               &v31,
               (const char (*)[75])"[Michiae_Matsuri] findPreviewExcelConfigByActivityId failed, activity_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  if ( v32 == (char *)v2 )
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

// Line 751: range 0000000014562E4A-0000000014562F75
void __cdecl MichiaeMatsuriActivity::onChallengeFinishEvent(
        MichiaeMatsuriActivity *const this,
        const ChallengeFinishEvent *event)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "onChallengeFinishEvent",
      754);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v3,
      (const char (*)[38])"[MichiaeMatsuri] activity is not open");
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_success);
    }
    if ( event->is_success )
    {
      MichiaeMatsuriActivity::onChallengeFinishRemoveMark(this, event);
      MichiaeMatsuriActivity::trySettleDarkChallenge(this, event);
    }
  }
};

// Line 770: range 00000000145634A2-0000000014563D4F
void __cdecl MichiaeMatsuriActivity::trySettleDarkChallenge(
        MichiaeMatsuriActivity *const this,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t challenge_id; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  ActivityMichiaeMatsuriExcelConfigMgr *p_activity_michiae_matsuri_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  PlayerBasicComp *BasicComp; // rax
  Scene *v20; // r14
  float dark_challenge_reward_range; // [rsp+10h] [rbp-110h]
  uint32_t owner_world_level; // [rsp+14h] [rbp-10Ch]
  const data::MichiaeDarkChallengeExcelConfig *dark_challenge_config_ptr; // [rsp+18h] [rbp-108h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-100h]
  const GroupInfoScriptConfig *group_info_script_ptr; // [rsp+28h] [rbp-F8h]
  const data::MichiaeOverallExcelConfig *preview_config_ptr; // [rsp+30h] [rbp-F0h]
  const Vector3 *group_pos; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-E0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 group_id:771 48 4 12 scene_id:783 64 16 13 scene_ptr:784";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::trySettleDarkChallenge;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 32) = event->group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  dark_challenge_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findDarkChallengeExcelConfigByGroupId(
                                &v5->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                                *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( dark_challenge_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    challenge_id = event->challenge_id;
    if ( *(_BYTE *)(((unsigned __int64)&dark_challenge_config_ptr->challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dark_challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dark_challenge_config_ptr->challenge_id >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( challenge_id == dark_challenge_config_ptr->challenge_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.lua_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v28);
      *(_DWORD *)(v2 + 48) = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, *(_DWORD *)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 64), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "trySettleDarkChallenge",
          787);
        v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v30,
                (const char (*)[25])"[Michiae_Matsuri] scene:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v12,
                (const char (*)[22])" nullptr for player: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v14 = operator<<(v13, this->player_);
        v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" @group:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      else
      {
        group_info_script_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, *(_DWORD *)(v2 + 32));
        if ( group_info_script_ptr )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v28);
          p_activity_michiae_matsuri_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          preview_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
                                 p_activity_michiae_matsuri_config_mgr,
                                 this->activity_id_);
          std::shared_ptr<Config>::~shared_ptr(&v28);
          if ( preview_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->dark_challenge_reward_range >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->dark_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            dark_challenge_reward_range = preview_config_ptr->dark_challenge_reward_range;
            group_pos = &group_info_script_ptr->pos;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            BasicComp = Player::getBasicComp(this->player_);
            owner_world_level = PlayerBasicComp::getWorldLevel(BasicComp);
            v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            v30.log_ = (common::milog::MiLog *)this;
            *(float *)&v30.ostr_ptr_._M_ptr = dark_challenge_reward_range;
            if ( ((unsigned __int8)group_pos & 7) >= *(_BYTE *)(((unsigned __int64)group_pos >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)group_pos >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&group_pos->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)group_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&group_pos->z + 3) >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load_n(group_pos, 12LL);
            }
            *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&v30.ostr_ptr_._M_ptr + 4) = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)&group_pos->x;
            HIDWORD(v30.ostr_ptr_._M_refcount._M_pi) = LODWORD(group_info_script_ptr->pos.z);
            LODWORD(v30.ostr_) = *(_DWORD *)(v2 + 32);
            HIDWORD(v30.ostr_) = owner_world_level;
            std::function<ForeachPolicy ()(Player &)>::function<MichiaeMatsuriActivity::trySettleDarkChallenge(ChallengeFinishEvent const&)::{lambda(Player &)#1},void,void>(
              &p_func,
              (MichiaeMatsuriActivity::trySettleDarkChallenge::<lambda(Player&)>)v30);
            Scene::foreachPlayer(v20, &p_func);
            std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/michiae_matsuri_activity.cpp",
              "trySettleDarkChallenge",
              800);
            v18 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                    &v30,
                    (const char (*)[75])"[Michiae_Matsuri] findPreviewExcelConfigByActivityId failed, activity_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->activity_id_);
            common::milog::MiLogStream::~MiLogStream(&v30);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/michiae_matsuri_activity.cpp",
            "trySettleDarkChallenge",
            793);
          v16 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v30,
                  (const char (*)[59])"[Michiae_Matsuri] group_info_script_ptr is null. group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "trySettleDarkChallenge",
        779);
      v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v30,
             (const char (*)[59])"[Michiae_Matsuri] dark challenge_id invalid. challenge_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->challenge_id);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
  }
  if ( v31 == (char *)v2 )
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

// Line 806: range 0000000014562F76-00000000145634A1
ForeachPolicy __cdecl MichiaeMatsuriActivity::trySettleDarkChallenge(ChallengeFinishEvent const&)::{lambda(Player &)#1}::operator()(
        const MichiaeMatsuriActivity::trySettleDarkChallenge::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const Vector3 *Position; // rax
  double v10; // xmm0_8
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const Vector3 *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // r14
  MichiaeMatsuriActivity *p_owner_world_level; // rdi
  uint32_t owner_world_level; // edx
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 avatar_ptr:808 64 16 16 activity_ptr:819";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::trySettleDarkChallenge(ChallengeFinishEvent const&)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  Player::getAvatarComp(player);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 32));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "operator()",
      811);
    v5 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v24,
           (const char (*)[71])"[Michiae_Matsuri] dark challenge finish. cur avatar is null. group_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &__closure->__group_id);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Position = Entity::getPosition((const Entity *const)v8);
    *(float *)&v10 = getPlaneDistance(&__closure->__group_pos, Position);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__dark_challenge_reward_range >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__dark_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = __asan_report_load4();
    }
    if ( *(float *)&v10 <= __closure->__dark_challenge_reward_range )
    {
      Player::getActivityComp(player);
      PlayerActivityComp::findOpenningActivity<MichiaeMatsuriActivity>((PlayerActivityComp *const)(v2 + 64));
      if ( std::operator==<MichiaeMatsuriActivity>(0LL, (const std::shared_ptr<MichiaeMatsuriActivity> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "operator()",
          822);
        v18 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                &v24,
                (const char (*)[65])"[Michiae_Matsuri] dark challenge finish. activity not open, uid:");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        p_owner_world_level = std::__shared_ptr_access<MichiaeMatsuriActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MichiaeMatsuriActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_world_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)__closure + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__owner_world_level >> 3)
                                                                   + 0x7FFF8000) )
        {
          p_owner_world_level = (MichiaeMatsuriActivity *)&__closure->__owner_world_level;
          __asan_report_load4();
        }
        owner_world_level = __closure->__owner_world_level;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&__closure->__group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_owner_world_level = (MichiaeMatsuriActivity *)&__closure->__group_id;
          __asan_report_load4();
        }
        MichiaeMatsuriActivity::finishDarkChallenge(p_owner_world_level, __closure->__group_id, owner_world_level);
      }
      std::shared_ptr<MichiaeMatsuriActivity>::~shared_ptr((std::shared_ptr<MichiaeMatsuriActivity> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "operator()",
        816);
      v11 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v24,
              (const char (*)[62])"[Michiae_Matsuri] dark challenge finish. too far. avatar_pos:");
      v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v13 = Entity::getPosition((const Entity *const)v12);
      v14 = operator<<(v11, v13);
      v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", group_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &__closure->__group_id);
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v25 == (char *)v2 )
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

// Line 832: range 0000000014563D50-0000000014564527
void __cdecl MichiaeMatsuriActivity::onChallengeFinishRemoveMark(
        MichiaeMatsuriActivity *const this,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  LuaConfigMgr *p_lua_config_mgr; // rcx
  ActivityMichiaeMatsuriExcelConfigMgr *p_activity_michiae_matsuri_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  ActivityMichiaeMatsuriExcelConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerOfferingComp *OfferingComp; // rcx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::pointer v14; // rdx
  uint32_t scene_id; // [rsp+10h] [rbp-D0h]
  uint32_t cur_offering_level; // [rsp+14h] [rbp-CCh]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  const data::MichiaeOverallExcelConfig *preview_config_ptr; // [rsp+20h] [rbp-C0h]
  const MichiaeChallengeGroupToPosMap *challenge_map_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 18 challenge_iter:853 64 32 10 notify:866";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::onChallengeFinishRemoveMark;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -202116109;
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    scene_id = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, event->group_id);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    p_activity_michiae_matsuri_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    preview_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
                           p_activity_michiae_matsuri_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( preview_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)preview_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( scene_id == preview_config_ptr->activity_scene_id )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v20);
        v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        challenge_map_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findChallengePosMapByActivityId(
                              v9,
                              this->activity_id_);
        std::shared_ptr<Config>::~shared_ptr(&v20);
        if ( challenge_map_ptr )
        {
          *(std::map<unsigned int,std::pair<Vector3,unsigned int>>::const_iterator *)(v2 + 32) = std::map<unsigned int,std::pair<Vector3,unsigned int>>::find(
                                                                                                   challenge_map_ptr,
                                                                                                   &event->group_id);
          __y._M_node = std::map<unsigned int,std::pair<Vector3,unsigned int>>::end(challenge_map_ptr)._M_node;
          if ( std::operator!=(
                 (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::_Self *)(v2 + 32),
                 &__y) )
          {
            v11 = std::unordered_set<unsigned int>::insert(&this->finished_challenge_group_id_set_, &event->group_id);
            if ( !v11.second )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 64),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/michiae_matsuri_activity.cpp",
                "onChallengeFinishRemoveMark",
                859);
              v12 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                      (common::milog::MiLogStream *const)(v2 + 64),
                      (const char (*)[81])"[Michiae_Matsuri] finished_challenge_group_id_set_ duplicate group id, group_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->group_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              OfferingComp = Player::getOfferingComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->offering_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->offering_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              cur_offering_level = PlayerOfferingComp::findOfferingLevel(OfferingComp, preview_config_ptr->offering_id);
              if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->all_radar_open_level >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)preview_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->all_radar_open_level >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( cur_offering_level >= preview_config_ptr->all_radar_open_level )
              {
                proto::MichiaeMatsuriRemoveChallengeMarkNotify::MichiaeMatsuriRemoveChallengeMarkNotify((proto::MichiaeMatsuriRemoveChallengeMarkNotify *const)(v2 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::MichiaeMatsuriRemoveChallengeMarkNotify::set_group_id(
                  (proto::MichiaeMatsuriRemoveChallengeMarkNotify *const)(v2 + 64),
                  event->group_id);
                v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > > *const)(v2 + 32));
                if ( *(_BYTE *)(((unsigned __int64)&v14->second.second >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)v14 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->second.second >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::MichiaeMatsuriRemoveChallengeMarkNotify::set_gadget_id(
                  (proto::MichiaeMatsuriRemoveChallengeMarkNotify *const)(v2 + 64),
                  v14->second.second);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
                proto::MichiaeMatsuriRemoveChallengeMarkNotify::~MichiaeMatsuriRemoveChallengeMarkNotify((proto::MichiaeMatsuriRemoveChallengeMarkNotify *const)(v2 + 64));
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 64),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/michiae_matsuri_activity.cpp",
            "onChallengeFinishRemoveMark",
            850);
          v10 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                  (common::milog::MiLogStream *const)(v2 + 64),
                  (const char (*)[71])"[Michiae_Matsuri] findChallengePosMapByActivityId failed, activity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->activity_id_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "onChallengeFinishRemoveMark",
        842);
      v8 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
             (common::milog::MiLogStream *const)(v2 + 64),
             (const char (*)[75])"[Michiae_Matsuri] findPreviewExcelConfigByActivityId failed, activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    }
  }
  if ( v21 == (char *)v2 )
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

// Line 874: range 0000000014564528-0000000014564C37
void __fastcall MichiaeMatsuriActivity::finishDarkChallenge(
        MichiaeMatsuriActivity *const this,
        uint32_t group_id,
        uint32_t owner_world_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::size_type v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::const_reference v16; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v18; // rax
  PlayerItemComp *v19; // rax
  const data::MichiaeDarkChallengeExcelConfig *dark_challenge_config_ptr; // [rsp+20h] [rbp-130h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-110h] BYREF
  char v24[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 25 max_crystal_exp_limit:888 48 4 13 reward_id:900 64 4 12 group_id:873 80 4 21 owner_wor"
                        "ld_level:873 96 16 13 event_ptr:882 128 24 10 reason:901";
  *(_QWORD *)(v3 + 16) = MichiaeMatsuriActivity::finishDarkChallenge;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 64) = group_id;
  *(_DWORD *)(v3 + 80) = owner_world_level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  dark_challenge_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findDarkChallengeExcelConfigByGroupId(
                                &v6->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                                *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( dark_challenge_config_ptr )
  {
    common::tools::perf::make_shared<FinishActivityMichiaeDarkChallengeEvent,unsigned int &>(
      (unsigned int *)&v22,
      (unsigned int *)(v3 + 64));
    std::shared_ptr<BaseEvent>::shared_ptr<FinishActivityMichiaeDarkChallengeEvent,void>(
      (std::shared_ptr<BaseEvent> *const)(v3 + 96),
      (std::shared_ptr<FinishActivityMichiaeDarkChallengeEvent> *)&v22);
    std::shared_ptr<FinishActivityMichiaeDarkChallengeEvent>::~shared_ptr((std::shared_ptr<FinishActivityMichiaeDarkChallengeEvent> *const)&v22);
    if ( std::operator!=<BaseEvent>(0LL, (const std::shared_ptr<BaseEvent> *)(v3 + 96)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)&v22,
        (const std::shared_ptr<BaseEvent> *)(v3 + 96));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v22);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v22);
    }
    *(_DWORD *)(v3 + 32) = MichiaeMatsuriActivity::getCurMaxCrystalExpLimit(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->gain_crystal_exp_ < *(_DWORD *)(v3 + 32) )
    {
      v12 = *(unsigned int *)(v3 + 80);
      if ( v12 < std::vector<unsigned int>::size(&dark_challenge_config_ptr->reward_id) )
      {
        v16 = std::vector<unsigned int>::operator[](&dark_challenge_config_ptr->reward_id, *(unsigned int *)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v16;
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 128),
          ACTION_REASON_MICHIAE_MATSURI_DARK_CHALLENGE_REWARD,
          ITEM_LIMIT_ACTIVITY_MICHIAE_MATSURI);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        if ( PlayerItemComp::checkGrantReward(ItemComp, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/michiae_matsuri_activity.cpp",
            "finishDarkChallenge",
            905);
          v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v23,
                  (const char (*)[24])"checkGrantReward fails:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v19 = Player::getItemComp(this->player_);
          PlayerItemComp::grantReward(v19, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 128), 0LL);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "finishDarkChallenge",
          897);
        v13 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                &v23,
                (const char (*)[70])"[Michiae_Matsuri] owner_world_level >= reward_id_vec size, group_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 64));
        v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v14,
                (const char (*)[21])", owner_world_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "finishDarkChallenge",
        891);
      v9 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v23,
             (const char (*)[68])"[Michiae_Matsuri] dark challenge cur stage exp max. offering_level:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gain_crystal_exp_);
      v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v10,
              (const char (*)[25])", max_crystal_exp_limit:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "finishDarkChallenge",
      878);
    v7 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
           &v23,
           (const char (*)[75])"[Michiae_Matsuri] findDarkChallengeExcelConfigByGroupId failed, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  if ( v24 == (char *)v3 )
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

// Line 912: range 0000000014564C38-00000000145651E7
void __cdecl MichiaeMatsuriActivity::onObtainItemEvent(
        MichiaeMatsuriActivity *const this,
        const ObtainItemEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ActivityMichiaeMatsuriExcelConfigMgr *p_activity_michiae_matsuri_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  uint32_t item_id; // ecx
  uint32_t gain_crystal_exp; // ecx
  common::milog::MiLogStream *v10; // rax
  const data::MichiaeOverallExcelConfig *preview_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:929";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::onObtainItemEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "onObtainItemEvent",
      915);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v13,
      (const char (*)[38])"[MichiaeMatsuri] activity is not open");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_activity_michiae_matsuri_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    preview_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
                           p_activity_michiae_matsuri_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( preview_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      item_id = event->item_id;
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->crystal_exp_material_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)preview_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->crystal_exp_material_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( item_id == preview_config_ptr->crystal_exp_material_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        gain_crystal_exp = this->gain_crystal_exp_;
        if ( *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        this->gain_crystal_exp_ = gain_crystal_exp + event->item_num;
        proto::MichiaeMatsuriGainCrystalExpUpdateNotify::MichiaeMatsuriGainCrystalExpUpdateNotify((proto::MichiaeMatsuriGainCrystalExpUpdateNotify *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::MichiaeMatsuriGainCrystalExpUpdateNotify::set_activity_id(
          (proto::MichiaeMatsuriGainCrystalExpUpdateNotify *const)(v2 + 32),
          this->activity_id_);
        if ( *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::MichiaeMatsuriGainCrystalExpUpdateNotify::set_gain_crystal_exp(
          (proto::MichiaeMatsuriGainCrystalExpUpdateNotify *const)(v2 + 32),
          this->gain_crystal_exp_);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/michiae_matsuri_activity.cpp",
          "onObtainItemEvent",
          933);
        v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v13,
                (const char (*)[43])"[Michiae_Matsuri] gain_crystal_exp, count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->item_num);
        common::milog::MiLogStream::~MiLogStream(&v13);
        proto::MichiaeMatsuriGainCrystalExpUpdateNotify::~MichiaeMatsuriGainCrystalExpUpdateNotify((proto::MichiaeMatsuriGainCrystalExpUpdateNotify *const)(v2 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "onObtainItemEvent",
        921);
      v7 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
             &v13,
             (const char (*)[75])"[Michiae_Matsuri] findPreviewExcelConfigByActivityId failed, activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  if ( v14 == (char *)v2 )
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

// Line 937: range 00000000145651E8-00000000145658AA
void __cdecl MichiaeMatsuriActivity::onChestOpenEvent(MichiaeMatsuriActivity *const this, const ChestOpenEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  ActivityMichiaeMatsuriExcelConfigMgr *p_activity_michiae_matsuri_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  PlayerOfferingComp *OfferingComp; // rcx
  uint32_t scene_id; // ecx
  ActivityMichiaeMatsuriExcelConfigMgr *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  uint32_t cur_offering_level; // [rsp+14h] [rbp-BCh]
  std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,Vector3> >::_Self v13; // [rsp+18h] [rbp-B8h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,Vector3> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  const data::MichiaeOverallExcelConfig *preview_config_ptr; // [rsp+28h] [rbp-A8h]
  const MichiaeChestGroupConfigToPosMap *chest_map_ptr; // [rsp+30h] [rbp-A0h]
  std::pair<unsigned int,unsigned int> __x; // [rsp+38h] [rbp-98h] BYREF
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:964";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::onChestOpenEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_activity_michiae_matsuri_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    preview_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
                           p_activity_michiae_matsuri_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( preview_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      OfferingComp = Player::getOfferingComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->offering_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->offering_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      cur_offering_level = PlayerOfferingComp::findOfferingLevel(OfferingComp, preview_config_ptr->offering_id);
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->all_radar_open_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)preview_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->all_radar_open_level >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( cur_offering_level >= preview_config_ptr->all_radar_open_level )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        scene_id = event->scene_id;
        if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)preview_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_scene_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( scene_id == preview_config_ptr->activity_scene_id )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v18);
          v10 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          chest_map_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findChestPosMapByActivityId(v10, this->activity_id_);
          std::shared_ptr<Config>::~shared_ptr(&v18);
          if ( chest_map_ptr )
          {
            __y._M_node = std::map<std::pair<unsigned int,unsigned int>,Vector3>::end(chest_map_ptr)._M_node;
            std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(
              &__x,
              &event->group_id,
              &event->config_id);
            v13._M_node = std::map<std::pair<unsigned int,unsigned int>,Vector3>::find(chest_map_ptr, &__x)._M_node;
            if ( std::operator!=(&v13, &__y) )
            {
              proto::MichiaeMatsuriRemoveChestMarkNotify::MichiaeMatsuriRemoveChestMarkNotify((proto::MichiaeMatsuriRemoveChestMarkNotify *const)(v2 + 32));
              if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::MichiaeMatsuriRemoveChestMarkNotify::set_group_id(
                (proto::MichiaeMatsuriRemoveChestMarkNotify *const)(v2 + 32),
                event->group_id);
              if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              proto::MichiaeMatsuriRemoveChestMarkNotify::set_config_id(
                (proto::MichiaeMatsuriRemoveChestMarkNotify *const)(v2 + 32),
                event->config_id);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
              proto::MichiaeMatsuriRemoveChestMarkNotify::~MichiaeMatsuriRemoveChestMarkNotify((proto::MichiaeMatsuriRemoveChestMarkNotify *const)(v2 + 32));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 32),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/michiae_matsuri_activity.cpp",
              "onChestOpenEvent",
              958);
            v11 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                    (common::milog::MiLogStream *const)(v2 + 32),
                    (const char (*)[67])"[Michiae_Matsuri] findChestPosMapByActivityId failed, activity_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->activity_id_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "onChestOpenEvent",
        945);
      v7 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
             (common::milog::MiLogStream *const)(v2 + 32),
             (const char (*)[75])"[Michiae_Matsuri] findPreviewExcelConfigByActivityId failed, activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    }
  }
  if ( v19 == (char *)v2 )
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

// Line 973: range 00000000145658AC-0000000014565B43
void __cdecl MichiaeMatsuriActivity::onOfferingLevelupEvent(
        MichiaeMatsuriActivity *const this,
        const OfferingLevelupEvent *event)
{
  ActivityMichiaeMatsuriExcelConfigMgr *p_activity_michiae_matsuri_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  uint32_t offering_id; // ecx
  uint32_t level; // ecx
  const data::MichiaeOverallExcelConfig *preview_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v8);
    p_activity_michiae_matsuri_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    preview_config_ptr = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
                           p_activity_michiae_matsuri_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v8);
    if ( preview_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->offering_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->offering_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      offering_id = event->offering_id;
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->offering_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->offering_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( offering_id == preview_config_ptr->offering_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        level = event->level;
        if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->all_radar_open_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)preview_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->all_radar_open_level >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( level >= preview_config_ptr->all_radar_open_level )
          BaseActivity::notifyClientData((BaseActivity *const)this, 0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "onOfferingLevelupEvent",
        981);
      v4 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
             &v9,
             (const char (*)[75])"[Michiae_Matsuri] findPreviewExcelConfigByActivityId failed, activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
  }
};

// Line 994: range 0000000014565B44-0000000014565D58
uint32_t __cdecl MichiaeMatsuriActivity::getCurOfferingMaxLevelLimit(const MichiaeMatsuriActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  uint32_t result; // eax
  const data::MichiaeStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-80h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 16 cur_stage_id:995";
  *(_QWORD *)(v1 + 16) = MichiaeMatsuriActivity::getCurOfferingMaxLevelLimit;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = MichiaeMatsuriActivity::getCurStageId(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  stage_config_ptr = data::ActivityMichiaeMatsuriExcelConfigMgrBase::findMichiaeStageExcelConfig(
                       &v4->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                       *(_DWORD *)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_offering_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_offering_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    result = stage_config_ptr->max_offering_level;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "getCurOfferingMaxLevelLimit",
      999);
    v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v9,
           (const char (*)[54])"[Michiae_Matsuri] stage_config_ptr is null, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0;
  }
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

// Line 1006: range 0000000014565D5A-0000000014565F76
uint32_t __cdecl MichiaeMatsuriActivity::getCurMaxCrystalExpLimit(const MichiaeMatsuriActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  uint32_t result; // eax
  const data::MichiaeStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-80h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 cur_stage_id:1007";
  *(_QWORD *)(v1 + 16) = MichiaeMatsuriActivity::getCurMaxCrystalExpLimit;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = MichiaeMatsuriActivity::getCurStageId(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  stage_config_ptr = data::ActivityMichiaeMatsuriExcelConfigMgrBase::findMichiaeStageExcelConfig(
                       &v4->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                       *(_DWORD *)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_crystal_exp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_crystal_exp >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = stage_config_ptr->max_crystal_exp;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "getCurMaxCrystalExpLimit",
      1011);
    v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v9,
           (const char (*)[54])"[Michiae_Matsuri] stage_config_ptr is null, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0;
  }
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

// Line 1019: range 0000000014565F78-0000000014565F99
int32_t __cdecl MichiaeMatsuriActivity::openActivityStageByGm(MichiaeMatsuriActivity *const this, uint32_t stage_id)
{
  return MichiaeMatsuriActivity::openActivityStage(this, stage_id);
};

// Line 1024: range 0000000014565F9A-00000000145662A4
__int64 __fastcall MichiaeMatsuriActivity::closeActivityStageByGm(
        MichiaeMatsuriActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v7; // rdx
  bool *p_second; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v10; // rdx
  bool *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1023 64 8 9 iter:1025";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriActivity::closeActivityStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,bool>::iterator *)(v2 + 64) = std::map<unsigned int,bool>::find(
                                                          &this->stage_open_map_,
                                                          (const std::map<unsigned int,bool>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 64), &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/michiae_matsuri_activity.cpp",
      "closeActivityStageByGm",
      1028);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v13,
           (const char (*)[36])"[Michiae_Matsuri] invalid stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_second);
    }
    if ( v7->second )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/michiae_matsuri_activity.cpp",
        "closeActivityStageByGm",
        1033);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v13,
             (const char (*)[41])"[Michiae_Matsuri] already open stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    v11 = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v11);
    }
    v10->second = 0;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    result = 0LL;
  }
  if ( v14 == (char *)v2 )
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

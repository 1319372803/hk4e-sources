// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/echo_shell_activity.cpp

// Line 31: range 00000000165CBDB0-00000000165CC455
int32_t __cdecl EchoShellActivity::fromScheduleBin(
        EchoShellActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  SummerTimeDungeonData *v13; // rax
  unsigned int *v14; // rcx
  SummerTimeDungeonData *v15; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const google::protobuf::RepeatedField<unsigned int> *v20; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::SummerTimeDungeonBin>::const_iterator __for_begin_1; // [rsp+18h] [rbp-108h] BYREF
  google::protobuf::RepeatedPtrField<proto::SummerTimeDungeonBin>::const_iterator __for_end_1; // [rsp+20h] [rbp-100h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-F0h]
  const proto::EchoShellScheduleBin *echo_shell_bin; // [rsp+38h] [rbp-E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-D8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+50h] [rbp-D0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::SummerTimeDungeonBin> *__for_range_1; // [rsp+60h] [rbp-C0h]
  const proto::SummerTimeDungeonBin *summer_time_dungeon_bin; // [rsp+68h] [rbp-B8h]
  common::milog::MiLogStream v34; // [rsp+70h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 dungeon_id:52 64 8 15 dungeon_data:49";
  *(_QWORD *)(v2 + 16) = EchoShellActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  echo_shell_bin = proto::ActivityScheduleBin::echo_shell_bin(bin);
  __for_range = proto::EchoShellScheduleBin::taken_reward_list(echo_shell_bin);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *__for_begin;
    v5 = std::unordered_set<unsigned int>::insert(
           &this->taken_reward_set_,
           (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    if ( !v5.second )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/echo_shell_activity.cpp",
        "fromScheduleBin",
        37);
      v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v34,
             (const char (*)[28])"duplicate reward_config_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    ++__for_begin;
  }
  __for_range_0 = proto::EchoShellScheduleBin::taken_voice_list(echo_shell_bin);
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
    *(_DWORD *)(v2 + 48) = *__for_begin_0;
    v9 = std::unordered_set<unsigned int>::insert(
           &this->taken_voice_set_,
           (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/echo_shell_activity.cpp",
        "fromScheduleBin",
        44);
      v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v34,
              (const char (*)[20])"duplicate voice_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    ++__for_begin_0;
  }
  __for_range_1 = proto::EchoShellScheduleBin::summer_time_dungeon_list(echo_shell_bin);
  __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::SummerTimeDungeonBin>::begin(__for_range_1).it_;
  __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::SummerTimeDungeonBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SummerTimeDungeonBin const>::operator!=(
            &__for_begin_1,
            &__for_end_1) )
  {
    summer_time_dungeon_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SummerTimeDungeonBin const>::operator*(&__for_begin_1);
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 64) = proto::SummerTimeDungeonBin::taken_chest_count(summer_time_dungeon_bin);
    *(_DWORD *)(v2 + 68) = proto::SummerTimeDungeonBin::taken_shell_count(summer_time_dungeon_bin);
    *(_DWORD *)(v2 + 48) = proto::SummerTimeDungeonBin::dungeon_id(summer_time_dungeon_bin);
    v13 = std::move<SummerTimeDungeonData &>((SummerTimeDungeonData *)(v2 + 64));
    v16 = std::unordered_map<unsigned int,SummerTimeDungeonData>::emplace<unsigned int &,SummerTimeDungeonData>(
            &this->summer_time_dungeon_map_,
            (unsigned int *)(v2 + 48),
            v13,
            v14,
            v15);
    if ( !v16.second )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/echo_shell_activity.cpp",
        "fromScheduleBin",
        55);
      v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v34,
              (const char (*)[22])"duplicate dungeon_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::SummerTimeDungeonBin const>::operator++(&__for_begin_1);
  }
  v20 = proto::EchoShellScheduleBin::pass_dungeon_list(echo_shell_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->pass_dungeon_set_,
    v20);
  result = 0;
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

// Line 63: range 00000000165CC456-00000000165CC784
int32_t __cdecl EchoShellActivity::toScheduleBin(const EchoShellActivity *const this, proto::ActivityScheduleBin *bin)
{
  google::protobuf::uint32 *v2; // rdx
  google::protobuf::uint32 *v3; // rdx
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  proto::EchoShellScheduleBin *echo_shell_bin; // [rsp+30h] [rbp-40h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-30h]
  const std::unordered_map<unsigned int,SummerTimeDungeonData> *__for_range_1; // [rsp+48h] [rbp-28h]
  const std::pair<unsigned int const,SummerTimeDungeonData> *v12; // [rsp+50h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,SummerTimeDungeonData> >::type *dungeon_id; // [rsp+58h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,SummerTimeDungeonData> >::type *dungeon_data; // [rsp+60h] [rbp-10h]
  proto::SummerTimeDungeonBin *summer_time_dungeon_bin; // [rsp+68h] [rbp-8h]

  echo_shell_bin = proto::ActivityScheduleBin::mutable_echo_shell_bin(bin);
  __for_range = &this->taken_reward_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->taken_reward_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->taken_reward_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::EchoShellScheduleBin::add_taken_reward_list(echo_shell_bin, *v2);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->taken_voice_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->taken_voice_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v3 = (google::protobuf::uint32 *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::EchoShellScheduleBin::add_taken_voice_list(echo_shell_bin, *v3);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  __for_range_1 = &this->summer_time_dungeon_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,SummerTimeDungeonData>::begin(&this->summer_time_dungeon_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,SummerTimeDungeonData>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,SummerTimeDungeonData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SummerTimeDungeonData>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SummerTimeDungeonData>,false> *)&__for_end) )
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false> *const)&__for_begin);
    dungeon_id = std::get<0ul,unsigned int const,SummerTimeDungeonData>(v12);
    dungeon_data = (std::tuple_element<1,const std::pair<unsigned int const,SummerTimeDungeonData> >::type *)std::get<1ul,unsigned int const,SummerTimeDungeonData>(v12);
    summer_time_dungeon_bin = proto::EchoShellScheduleBin::add_summer_time_dungeon_list(echo_shell_bin);
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SummerTimeDungeonBin::set_dungeon_id(summer_time_dungeon_bin, *dungeon_id);
    if ( *(_BYTE *)(((unsigned __int64)dungeon_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SummerTimeDungeonBin::set_taken_chest_count(summer_time_dungeon_bin, dungeon_data->taken_chest_count);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_data->taken_shell_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_data->taken_shell_count >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SummerTimeDungeonBin::set_taken_shell_count(summer_time_dungeon_bin, dungeon_data->taken_shell_count);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false> *const)&__for_begin);
  }
  v4 = proto::EchoShellScheduleBin::mutable_pass_dungeon_list(echo_shell_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->pass_dungeon_set_, v4);
  return 0;
};

// Line 85: range 00000000165CC786-00000000165CCE69
int32_t __cdecl EchoShellActivity::toClient(EchoShellActivity *const this, proto::ActivityInfo *activity_info)
{
  std::__detail::_Node_iterator<unsigned int,true,false> *v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rbx
  int32_t result; // eax
  uint32_t *v7; // rdx
  uint32_t *v8; // rdx
  const std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig> *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false>::pointer v10; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false>::pointer v11; // rdx
  google::protobuf::RepeatedField<unsigned int> *v12; // rax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  uint32_t voice_id; // [rsp+20h] [rbp-F0h]
  uint32_t reward_config_id; // [rsp+24h] [rbp-ECh]
  std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig>::const_iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  proto::EchoShellDetailInfo *echo_shell_info; // [rsp+40h] [rbp-D0h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+48h] [rbp-C8h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-C0h]
  const std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig> *dungeon_config_map; // [rsp+58h] [rbp-B8h]
  const std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig> *__for_range_1; // [rsp+60h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig> >::type *dungeon_id; // [rsp+68h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig> >::type *dungeon_config; // [rsp+70h] [rbp-A0h]
  proto::SummerTimeDungeonInfo *summer_time_dungeon_info; // [rsp+78h] [rbp-98h]
  std::shared_ptr<Config> v27; // [rsp+80h] [rbp-90h] BYREF
  std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig> v28; // [rsp+90h] [rbp-80h] BYREF
  char v29[96]; // [rsp+B0h] [rbp-60h] BYREF

  v2 = (std::__detail::_Node_iterator<unsigned int,true,false> *)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<unsigned int,true,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)"1 32 8 8 iter:108";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)EchoShellActivity::toClient;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/echo_shell_activity.cpp",
      "toClient",
      88);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           (common::milog::MiLogStream *const)&v28,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v28);
    result = -1;
  }
  else
  {
    echo_shell_info = proto::ActivityInfo::mutable_echo_shell_info(activity_info);
    __for_range = &this->taken_reward_set_;
    v2[4]._M_cur = std::unordered_set<unsigned int>::begin(&this->taken_reward_set_)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(v2 + 4, &__for_end) )
    {
      v7 = (uint32_t *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(v2 + 4);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      reward_config_id = *v7;
      proto::EchoShellDetailInfo::add_taken_reward_list(echo_shell_info, reward_config_id);
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++(v2 + 4);
    }
    __for_range_0 = &this->taken_voice_set_;
    v2[4]._M_cur = std::unordered_set<unsigned int>::begin(&this->taken_voice_set_)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(v2 + 4, &__for_end) )
    {
      v8 = (uint32_t *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(v2 + 4);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      voice_id = *v8;
      proto::EchoShellDetailInfo::add_shell_list(echo_shell_info, voice_id);
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++(v2 + 4);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    dungeon_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_echo_shell_config_mgr.echo_shell_summer_time_dungeon_excel_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v27);
    __for_range_1 = dungeon_config_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig>::begin(dungeon_config_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig>::end(__for_range_1)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false>(
              &__for_begin,
              &__for_end_0) )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false,false>::operator*(&__for_begin);
      std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>::pair(&v28, v9);
      dungeon_id = std::get<0ul,unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>(&v28);
      dungeon_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>(&v28);
      summer_time_dungeon_info = proto::EchoShellDetailInfo::add_summer_time_dungeon_list(echo_shell_info);
      if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SummerTimeDungeonInfo::set_dungeon_id(summer_time_dungeon_info, *dungeon_id);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->total_chest_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->total_chest_count >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SummerTimeDungeonInfo::set_total_chest_count(summer_time_dungeon_info, dungeon_config->total_chest_count);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->total_shell_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config->total_shell_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::SummerTimeDungeonInfo::set_total_shell_count(summer_time_dungeon_info, dungeon_config->total_shell_count);
      v2[4]._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,SummerTimeDungeonData>::find(
                                                                                              &this->summer_time_dungeon_map_,
                                                                                              dungeon_id)._M_cur;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,SummerTimeDungeonData>::end(&this->summer_time_dungeon_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,SummerTimeDungeonData>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SummerTimeDungeonData>,false> *)&v2[4],
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SummerTimeDungeonData>,false> *)&__for_end) )
      {
        v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false> *const)&v2[4]);
        if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::SummerTimeDungeonInfo::set_taken_chest_count(summer_time_dungeon_info, v10->second.taken_chest_count);
        v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,SummerTimeDungeonData>,false,false> *const)&v2[4]);
        if ( *(_BYTE *)(((unsigned __int64)&v11->second.taken_shell_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v11 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->second.taken_shell_count >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::SummerTimeDungeonInfo::set_taken_shell_count(summer_time_dungeon_info, v11->second.taken_shell_count);
      }
      std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>::~pair(&v28);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false,false>::operator++(&__for_begin);
    }
    v12 = proto::EchoShellDetailInfo::mutable_pass_dungeon_list(echo_shell_info);
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
      &this->pass_dungeon_set_,
      v12);
    result = 0;
  }
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 121: range 00000000165CCE6A-00000000165CCEC0
int32_t __cdecl EchoShellActivity::init(EchoShellActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    EchoShellActivity::initEventObserver(this);
  return 0;
};

// Line 130: range 00000000165CCEC2-00000000165CCEDC
void __cdecl EchoShellActivity::onStart(EchoShellActivity *const this)
{
  EchoShellActivity::initEventObserver(this);
};

// Line 135: range 00000000165CCEDE-00000000165CD2D5
void __cdecl EchoShellActivity::initEventObserver(EchoShellActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *cb_ptr; // [rsp+10h] [rbp-D0h]
  PlayerEventComp *v5; // [rsp+20h] [rbp-C0h]
  PlayerEventComp *EventComp; // [rsp+30h] [rbp-B0h]
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+40h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:136 64 16 12 this_wtr:137";
  *(_QWORD *)(v1 + 16) = EchoShellActivity::initEventObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<EchoShellActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<EchoShellActivity>::weak_ptr<EchoShellActivity,void>(
    (std::weak_ptr<EchoShellActivity> *const)(v1 + 64),
    (const std::shared_ptr<EchoShellActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<EchoShellActivity>::weak_ptr(
    (std::weak_ptr<EchoShellActivity> *const)&v7,
    (const std::weak_ptr<EchoShellActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<EchoShellActivity,ClimateMeterFullEvent>(
    EventComp,
    (std::weak_ptr<EchoShellActivity> *)&v7,
    (void (*)(EchoShellActivity *, const ClimateMeterFullEvent *))EchoShellActivity::onClimateMeterFullEvent,
    0LL);
  std::weak_ptr<EchoShellActivity>::~weak_ptr((std::weak_ptr<EchoShellActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<EchoShellActivity>::weak_ptr(
    (std::weak_ptr<EchoShellActivity> *const)&v7,
    (const std::weak_ptr<EchoShellActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<EchoShellActivity,ChestOpenEvent>(
    cb_ptr,
    (std::weak_ptr<EchoShellActivity> *)&v7,
    (void (*)(EchoShellActivity *, const ChestOpenEvent *))EchoShellActivity::onChestOpenEvent,
    0LL);
  std::weak_ptr<EchoShellActivity>::~weak_ptr((std::weak_ptr<EchoShellActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<EchoShellActivity>::weak_ptr(
    (std::weak_ptr<EchoShellActivity> *const)&v7,
    (const std::weak_ptr<EchoShellActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<EchoShellActivity,FinishDungeonEvent>(
    v5,
    (std::weak_ptr<EchoShellActivity> *)&v7,
    (void (*)(EchoShellActivity *, const FinishDungeonEvent *))EchoShellActivity::onFinishDungeonEvent,
    0LL);
  std::weak_ptr<EchoShellActivity>::~weak_ptr((std::weak_ptr<EchoShellActivity> *const)&v7);
  std::weak_ptr<EchoShellActivity>::~weak_ptr((std::weak_ptr<EchoShellActivity> *const)(v1 + 64));
  std::shared_ptr<EchoShellActivity>::~shared_ptr((std::shared_ptr<EchoShellActivity> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

// Line 144: range 00000000165CD2D6-00000000165CD32C
void __cdecl EchoShellActivity::onClear(EchoShellActivity *const this)
{
  std::unordered_set<unsigned int>::clear(&this->taken_reward_set_);
  std::unordered_set<unsigned int>::clear(&this->taken_voice_set_);
  std::unordered_map<unsigned int,SummerTimeDungeonData>::clear(&this->summer_time_dungeon_map_);
  std::unordered_set<unsigned int>::clear(&this->pass_dungeon_set_);
};

// Line 152: range 00000000165CD32E-00000000165CDAED
__int64 __fastcall EchoShellActivity::takeReward(EchoShellActivity *const this, uint32_t reward_config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::unordered_set<unsigned int>::size_type first; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r12
  common::milog::MiLogStream *v14; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v16; // rax
  PlayerItemComp *p_second; // rdi
  PlayerActivityComp *ActivityComp; // rdi
  unsigned int second; // ecx
  uint32_t schedule_id; // edx
  unsigned int ret; // [rsp+1Ch] [rbp-F4h]
  unsigned __int64 val; // [rsp+20h] [rbp-F0h] BYREF
  const std::pair<unsigned int,unsigned int> *reward_count_pair; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v25; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 20 reward_config_id:151 64 24 10 reason:169";
  *(_QWORD *)(v2 + 16) = EchoShellActivity::takeReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = reward_config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  v6 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> const,unsigned int>(
          &v5->design_config.txt_config_mgr.activity_echo_shell_config_mgr.shell_reward_map,
          (const unsigned int *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/echo_shell_activity.cpp",
      "takeReward",
      155);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v26,
           (const char (*)[26])"invalid reward_config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    reward_count_pair = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::at(
                          &v9->design_config.txt_config_mgr.activity_echo_shell_config_mgr.shell_reward_map,
                          (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( *(_BYTE *)(((unsigned __int64)reward_count_pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reward_count_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_count_pair >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    first = reward_count_pair->first;
    if ( first <= std::unordered_set<unsigned int>::size(&this->taken_voice_set_) )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->taken_reward_set_,
             (const unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/echo_shell_activity.cpp",
          "takeReward",
          166);
        v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v26,
                (const char (*)[41])"reward has been taken, reward_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        ActionReason::ActionReason(
          (ActionReason *const)(v2 + 64),
          ACTION_REASON_ECHO_SHELL_REWARD,
          ITEM_LIMIT_ACTIVITY_ECHO_SHELL);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&reward_count_pair->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reward_count_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_count_pair->second >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ret = PlayerItemComp::checkGrantReward(ItemComp, reward_count_pair->second, (const ActionReason *)(v2 + 64));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/echo_shell_activity.cpp",
            "takeReward",
            173);
          v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v26,
                  (const char (*)[36])"checkGrantReward failed, reward_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &reward_count_pair->second);
          common::milog::MiLogStream::~MiLogStream(&v26);
          result = ret;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          p_second = Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&reward_count_pair->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)reward_count_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_count_pair->second >> 3)
                                                                            + 0x7FFF8000) )
          {
            p_second = (PlayerItemComp *)&reward_count_pair->second;
            __asan_report_load4();
          }
          PlayerItemComp::grantReward(p_second, reward_count_pair->second, (const ActionReason *)(v2 + 64), 0LL);
          std::unordered_set<unsigned int>::insert(
            &this->taken_reward_set_,
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ActivityComp = Player::getActivityComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&reward_count_pair->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)reward_count_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_count_pair->second >> 3)
                                                                            + 0x7FFF8000) )
          {
            ActivityComp = (PlayerActivityComp *)&reward_count_pair->second;
            __asan_report_load4();
          }
          second = reward_count_pair->second;
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            ActivityComp = (PlayerActivityComp *)&this->schedule_id_;
            __asan_report_load4();
          }
          schedule_id = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            ActivityComp = (PlayerActivityComp *)&this->activity_id_;
            __asan_report_load4();
          }
          PlayerActivityComp::logGetActivityReward(ActivityComp, this->activity_id_, schedule_id, second);
          BaseActivity::notifyClientData(this, 0);
          result = 0LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/echo_shell_activity.cpp",
        "takeReward",
        161);
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v26,
              (const char (*)[41])"need voice count not enough, neec_count:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v11,
              (const unsigned int *)reward_count_pair);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])", actual_count:");
      val = std::unordered_set<unsigned int>::size(&this->taken_voice_set_);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v27 == (char *)v2 )
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

// Line 190: range 00000000165CDAEE-00000000165CE30B
__int64 __fastcall EchoShellActivity::addVoice(EchoShellActivity *const this, uint32_t voice_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  PlayerDungeonComp *DungeonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::unordered_map<unsigned int,SummerTimeDungeonData>::mapped_type *v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  const data::EchoShellSummerTimeDungeonExcelConfig *summer_time_dungeon_ptr; // [rsp+20h] [rbp-F0h]
  unsigned int *taken_shell_count; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v32; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 dungeon_id:207 48 4 12 voice_id:189 64 24 10 notify:203";
  *(_QWORD *)(v2 + 16) = EchoShellActivity::addVoice;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = voice_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  v6 = !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &v5->design_config.txt_config_mgr.activity_echo_shell_config_mgr.shell_set,
          (const unsigned int *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/echo_shell_activity.cpp",
      "addVoice",
      193);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v33, (const char (*)[18])"invalid voice_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v8 = -1;
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
              &this->taken_voice_set_,
              (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/echo_shell_activity.cpp",
      "addVoice",
      199);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v33,
           (const char (*)[32])"voice has been taken, voice_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v8 = 0;
  }
  else
  {
    std::unordered_set<unsigned int>::insert(
      &this->taken_voice_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    proto::EchoShellUpdateNotify::EchoShellUpdateNotify((proto::EchoShellUpdateNotify *const)(v2 + 64));
    proto::EchoShellUpdateNotify::set_shell_id((proto::EchoShellUpdateNotify *const)(v2 + 64), *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    DungeonComp = Player::getDungeonComp(this->player_);
    *(_DWORD *)(v2 + 32) = PlayerDungeonComp::getCurDungeonId(DungeonComp);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    summer_time_dungeon_ptr = data::ActivityEchoShellExcelConfigMgrBase::findEchoShellSummerTimeDungeonExcelConfig(
                                &v11->design_config.txt_config_mgr.activity_echo_shell_config_mgr,
                                *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v32);
    if ( summer_time_dungeon_ptr )
    {
      v12 = std::unordered_map<unsigned int,SummerTimeDungeonData>::operator[](
              &this->summer_time_dungeon_map_,
              (const std::unordered_map<unsigned int,SummerTimeDungeonData>::key_type *)(v2 + 32));
      taken_shell_count = &v12->taken_shell_count;
      if ( *(_BYTE *)(((unsigned __int64)&v12->taken_shell_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->taken_shell_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v13 = SAFE_ADD<unsigned int,int>(*taken_shell_count, 1);
      if ( *(_BYTE *)(((unsigned __int64)taken_shell_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)taken_shell_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)taken_shell_count >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(taken_shell_count);
      }
      *taken_shell_count = v13;
      v14 = *taken_shell_count;
      if ( *(_BYTE *)(((unsigned __int64)&summer_time_dungeon_ptr->total_shell_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&summer_time_dungeon_ptr->total_shell_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v14 > summer_time_dungeon_ptr->total_shell_count )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/echo_shell_activity.cpp",
          "addVoice",
          215);
        v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v33,
                (const char (*)[39])"[EchoShellActivity] taken_shell_count:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, taken_shell_count);
        v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                v16,
                (const char (*)[32])" bigger than total_shell_count:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                &summer_time_dungeon_ptr->total_shell_count);
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" dungeon_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v2 + 32));
        v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/echo_shell_activity.cpp",
        "addVoice",
        218);
      v22 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v33,
              (const char (*)[52])"[EchoShellActivity] dungeon take voice, dungeon_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 32));
      v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" voice_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 48));
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/echo_shell_activity.cpp",
      "addVoice",
      221);
    v27 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v33,
            (const char (*)[30])"[EchoShellActivity] addVoice:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    BaseActivity::notifyClientData(this, 0);
    EchoShellActivity::logEchoShellInteract(this, *(_DWORD *)(v2 + 48));
    v8 = 0;
    proto::EchoShellUpdateNotify::~EchoShellUpdateNotify((proto::EchoShellUpdateNotify *const)(v2 + 64));
  }
  result = v8;
  if ( v34 == (char *)v2 )
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

// Line 230: range 00000000165CE30C-00000000165CE568
int32_t __cdecl EchoShellActivity::addAllVoiceByGm(EchoShellActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v4; // rdx
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v10; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-80h] BYREF
  char v12[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 voice_id:231";
  *(_QWORD *)(v1 + 16) = EchoShellActivity::addAllVoiceByGm;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_echo_shell_config_mgr.shell_set;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v4 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    if ( (unsigned int)EchoShellActivity::addVoice(this, *(_DWORD *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/echo_shell_activity.cpp",
        "addAllVoiceByGm",
        235);
      v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v11,
             (const char (*)[27])"addVoice failed, voice_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = -1;
      goto LABEL_12;
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  result = 0;
LABEL_12:
  if ( v12 == (char *)v1 )
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

// Line 243: range 00000000165CE56A-00000000165CE58B
int32_t __cdecl EchoShellActivity::addVoiceByGm(EchoShellActivity *const this, uint32_t voice_id)
{
  return EchoShellActivity::addVoice(this, voice_id);
};

// Line 248: range 00000000165CE58C-00000000165CE5F7
int32_t __cdecl EchoShellActivity::clearByGm(EchoShellActivity *const this)
{
  std::unordered_set<unsigned int>::clear(&this->taken_reward_set_);
  std::unordered_set<unsigned int>::clear(&this->taken_voice_set_);
  std::unordered_map<unsigned int,SummerTimeDungeonData>::clear(&this->summer_time_dungeon_map_);
  std::unordered_set<unsigned int>::clear(&this->pass_dungeon_set_);
  BaseActivity::notifyClientData(this, 0);
  return 0;
};

// Line 258: range 00000000165CE5F8-00000000165CE8A9
// local variable allocation has failed, the output may be wrong!
void __cdecl EchoShellActivity::logEchoShellInteract(EchoShellActivity *const this, uint32_t voice_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEchoShellInteract,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // r14
  std::string v8; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v10; // [rsp+30h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+50h] [rbp-90h] BYREF

  v8._M_string_length = (std::string::size_type)this;
  HIDWORD(v8._M_dataplus._M_p) = voice_id;
  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:259 64 16 11 log_ptr:260";
  *(_QWORD *)(v2 + 16) = EchoShellActivity::logEchoShellInteract;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((v8._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(v8._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v10, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xD94u, v8);
  std::string::~string(&v10);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyEchoShellInteract>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyEchoShellInteract,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEchoShellInteract,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyEchoShellInteract::set_shell_id(v6, HIDWORD(v8._M_dataplus._M_p));
  if ( *(_BYTE *)(((v8._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = *(Player **)(v8._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEchoShellInteract,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v8._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyEchoShellInteract> *)(v2 + 64));
  Player::printStatLog(v7, (MessagePtr *)&v8._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v8._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyEchoShellInteract>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEchoShellInteract> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
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
};

// Line 266: range 00000000165CE8AA-00000000165CEE14
void __cdecl EchoShellActivity::onClimateMeterFullEvent(
        EchoShellActivity *const this,
        const ClimateMeterFullEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  char v7; // al
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 17 cur_scene_ptr:272 64 16 19 world_scene_ptr:278";
  *(_QWORD *)(v2 + 16) = EchoShellActivity::onClimateMeterFullEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/echo_shell_activity.cpp",
        "onClimateMeterFullEvent",
        275);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        &v9,
        (const char (*)[45])"[EchoShellActivity] cur_scene_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v9);
LABEL_36:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
      goto LABEL_37;
    }
    std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64));
    if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/echo_shell_activity.cpp",
        "onClimateMeterFullEvent",
        281);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        &v9,
        (const char (*)[49])"[EchoShellActivity] cur scene is not world scene");
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      v6 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( Scene::getSceneId((const Scene *const)v6) != 4 )
        goto LABEL_19;
      if ( *(_BYTE *)(((unsigned __int64)&event->climate_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->climate_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( event->climate_type == HeroCourse )
        v7 = 0;
      else
LABEL_19:
        v7 = 1;
      if ( v7 )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/echo_shell_activity.cpp",
          "onClimateMeterFullEvent",
          287);
        common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
          &v9,
          (const char (*)[52])"[EchoShellActivity] scene or climate type not match");
        common::milog::MiLogStream::~MiLogStream(&v9);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->climate_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->climate_type >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( event->climate_type == HeroCourse )
        {
          EchoShellActivity::triggerHeroCourseTransfer(this);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&event->climate_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->climate_type >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( event->climate_type != SeaMistSurrounding )
            goto LABEL_35;
          EchoShellActivity::triggerSeaMistSurroundTransfer(this);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::resetCurClimateMeter(BasicComp, 1);
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/echo_shell_activity.cpp",
          "onClimateMeterFullEvent",
          305);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v9,
          (const char (*)[39])"[EchoShellActivity] drag player to pos");
        common::milog::MiLogStream::~MiLogStream(&v9);
      }
    }
LABEL_35:
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 64));
    goto LABEL_36;
  }
LABEL_37:
  if ( v10 == (char *)v2 )
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

// Line 309: range 00000000165CEE16-00000000165CF290
void __cdecl EchoShellActivity::onChestOpenEvent(EchoShellActivity *const this, const ChestOpenEvent *event)
{
  ActivityEchoShellExcelConfigMgr *p_activity_echo_shell_config_mgr; // rcx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-54h] BYREF
  const data::EchoShellSummerTimeDungeonExcelConfig *summer_time_dungeon_ptr; // [rsp+20h] [rbp-50h]
  unsigned int *taken_chest_count; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-30h] BYREF

  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( event->dungeon_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      p_activity_echo_shell_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_echo_shell_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      summer_time_dungeon_ptr = data::ActivityEchoShellExcelConfigMgrBase::findEchoShellSummerTimeDungeonExcelConfig(
                                  p_activity_echo_shell_config_mgr,
                                  event->dungeon_id);
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( summer_time_dungeon_ptr )
      {
        taken_chest_count = (unsigned int *)std::unordered_map<unsigned int,SummerTimeDungeonData>::operator[](
                                              &this->summer_time_dungeon_map_,
                                              &event->dungeon_id);
        if ( *(_BYTE *)(((unsigned __int64)taken_chest_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)taken_chest_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)taken_chest_count >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v4 = SAFE_ADD<unsigned int,int>(*taken_chest_count, 1);
        if ( *(_BYTE *)(((unsigned __int64)taken_chest_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)taken_chest_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)taken_chest_count >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(taken_chest_count);
        }
        *taken_chest_count = v4;
        v5 = *taken_chest_count;
        if ( *(_BYTE *)(((unsigned __int64)&summer_time_dungeon_ptr->total_chest_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)summer_time_dungeon_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&summer_time_dungeon_ptr->total_chest_count >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v5 > summer_time_dungeon_ptr->total_chest_count )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/echo_shell_activity.cpp",
            "onChestOpenEvent",
            325);
          v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 &v22,
                 (const char (*)[39])"[EchoShellActivity] taken_chest_count:");
          v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, taken_chest_count);
          v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                 v7,
                 (const char (*)[32])" bigger than total_chest_count:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 &summer_time_dungeon_ptr->total_chest_count);
          v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" dungeon_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->dungeon_id);
          v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        BaseActivity::notifyClientData(this, 0);
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/echo_shell_activity.cpp",
          "onChestOpenEvent",
          329);
        v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v22,
                (const char (*)[50])"[EchoShellActivity] onChestOpenEvent, dungeon_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &event->dungeon_id);
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" config_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &event->config_id);
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
  }
};

// Line 334: range 00000000165CF292-00000000165CF470
void __cdecl EchoShellActivity::onFinishDungeonEvent(EchoShellActivity *const this, const FinishDungeonEvent *event)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool v4; // bl
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
    v4 = !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
            &v3->design_config.txt_config_mgr.activity_echo_shell_config_mgr.related_dungeon_set,
            &event->dungeon_id);
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( !v4 )
    {
      v5 = std::unordered_set<unsigned int>::insert(&this->pass_dungeon_set_, &event->dungeon_id);
      if ( v5.second )
      {
        BaseActivity::notifyClientData(this, 0);
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/echo_shell_activity.cpp",
          "onFinishDungeonEvent",
          348);
        v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               &v11,
               (const char (*)[54])"[EchoShellActivity] onFinishDungeonEvent, dungeon_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->dungeon_id);
        v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v11);
      }
    }
  }
};

// Line 353: range 00000000165CF472-00000000165CFB21
void __cdecl EchoShellActivity::triggerHeroCourseTransfer(EchoShellActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Scene *v9; // rax
  bool v10; // r14
  uint32_t v11; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t HeroCourseVehicleGadgetId; // eax
  PlayerSceneComp *SceneComp; // [rsp+10h] [rbp-140h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-130h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-120h] BYREF
  std::shared_ptr<Player> v18; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-F0h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-D0h] BYREF
  char v22[144]; // [rsp+C0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 21 transfer_group_id:360 48 4 22 transfer_config_id:361 64 16 17 cur_scene_ptr:354";
  *(_QWORD *)(v1 + 16) = EchoShellActivity::triggerHeroCourseTransfer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/echo_shell_activity.cpp",
      "triggerHeroCourseTransfer",
      357);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v20,
      (const char (*)[45])"[EchoShellActivity] cur_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    *(_DWORD *)(v1 + 32) = ConstValueExcelConfigMgr::getHeroCourseTransferGroupId(&v4->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    *(_DWORD *)(v1 + 48) = ConstValueExcelConfigMgr::getHeroCourseTransferConfigId(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v18);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                &v6->design_config.lua_config_mgr,
                                *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( group_script_config_ptr )
    {
      point_script_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, *(_DWORD *)(v1 + 48));
      if ( point_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        TransferReason::TransferReason(&p_reason, ENTER_REASON_HERO_COURSE);
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v10 = PlayerSceneComp::jumpToScene(
                SceneComp,
                v9,
                &point_script_config_ptr->pos,
                &point_script_config_ptr->rot,
                0,
                &p_reason) != 0;
        TransferReason::~TransferReason(&p_reason);
        if ( v10 )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/echo_shell_activity.cpp",
            "triggerHeroCourseTransfer",
            376);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v20,
            (const char (*)[39])"[EchoShellActivity] jumpToScene failed");
          common::milog::MiLogStream::~MiLogStream(&v20);
        }
        else
        {
          v11 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          toThisPtr<Player>((Player *)&v18);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v17);
          v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
          HeroCourseVehicleGadgetId = ConstValueExcelConfigMgr::getHeroCourseVehicleGadgetId(&v12->design_config.txt_config_mgr.const_value_config_mgr);
          Scene::createPlayerVehicle(
            (Scene *const)&v19,
            v11,
            (const Vector3 *)HeroCourseVehicleGadgetId,
            &point_script_config_ptr->pos,
            (PlayerPtr *)&point_script_config_ptr->rot,
            (proto::CreateGadgetReason)&v18,
            0);
          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v19);
          std::shared_ptr<Config>::~shared_ptr(&v17);
          std::shared_ptr<Player>::~shared_ptr(&v18);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/echo_shell_activity.cpp",
          "triggerHeroCourseTransfer",
          371);
        v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
               &v20,
               (const char (*)[56])"[EchoShellActivity] findPointConfig failed, config_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/echo_shell_activity.cpp",
        "triggerHeroCourseTransfer",
        365);
      v7 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             &v20,
             (const char (*)[61])"[EchoShellActivity] findGroupScriptConfig failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  if ( v22 == (char *)v1 )
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

// Line 383: range 00000000165CFB22-00000000165D04C6
void __cdecl EchoShellActivity::triggerSeaMistSurroundTransfer(EchoShellActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 Position; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerSceneComp *SceneComp; // r14
  Scene *v10; // rax
  uint32_t nearest_dis; // [rsp+18h] [rbp-1A8h]
  uint32_t dis; // [rsp+1Ch] [rbp-1A4h]
  std::unordered_map<unsigned int,data::EchoShellFloatSignalExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::unordered_map<unsigned int,data::EchoShellFloatSignalExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  const std::unordered_map<unsigned int,data::EchoShellFloatSignalExcelConfig> *__for_range; // [rsp+30h] [rbp-190h]
  const std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig> *v16; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,const std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig> >::type *id; // [rsp+40h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig> >::type *float_signal_config; // [rsp+48h] [rbp-178h]
  const GroupScriptConfig *group_config_ptr; // [rsp+50h] [rbp-170h]
  const PointScriptConfig *point_config_ptr; // [rsp+58h] [rbp-168h]
  std::shared_ptr<Config> v21; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+90h] [rbp-130h] BYREF
  char v24[240]; // [rsp+D0h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 12 11 cur_pos:396 64 12 15 nearest_pos:397 96 12 15 nearset_rot:398 128 16 17 cur_scene_ptr"
                        ":384 160 16 14 avatar_ptr:390";
  *(_QWORD *)(v1 + 16) = EchoShellActivity::triggerSeaMistSurroundTransfer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -219020288;
  v3[536862723] = -219020288;
  v3[536862724] = -219021312;
  v3[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 128));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/echo_shell_activity.cpp",
      "triggerSeaMistSurroundTransfer",
      387);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v22,
      (const char (*)[45])"[EchoShellActivity] cur_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v1 + 160));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v1 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/echo_shell_activity.cpp",
        "triggerSeaMistSurroundTransfer",
        393);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v22,
        (const char (*)[39])"[EchoShellActivity] avatar_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      v4 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
      Position = (unsigned __int64)Entity::getPosition((const Entity *const)v4);
      if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
      {
        Position = __asan_report_load_n(Position, 12LL);
      }
      *(_QWORD *)(v1 + 32) = *(_QWORD *)Position;
      *(_DWORD *)(v1 + 40) = *(_DWORD *)(Position + 8);
      Vector3::Vector3((Vector3 *const)(v1 + 64), 0.0, 0.0, 0.0);
      Vector3::Vector3((Vector3 *const)(v1 + 96), 0.0, 0.0, 0.0);
      nearest_dis = 0x7FFFFFFF;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_echo_shell_config_mgr.echo_shell_float_signal_excel_config_map;
      std::shared_ptr<Config>::~shared_ptr(&v21);
      __for_begin._M_cur = std::unordered_map<unsigned int,data::EchoShellFloatSignalExcelConfig>::begin(__for_range)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,data::EchoShellFloatSignalExcelConfig>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false>(
                &__for_begin,
                &__for_end) )
      {
        v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false,false>::operator*(&__for_begin);
        id = std::get<0ul,unsigned int const,data::EchoShellFloatSignalExcelConfig>(v16);
        float_signal_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EchoShellFloatSignalExcelConfig>(v16);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.lua_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&float_signal_config->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)float_signal_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&float_signal_config->group_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        group_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, float_signal_config->group_id);
        std::shared_ptr<Config>::~shared_ptr(&v21);
        if ( group_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&float_signal_config->config_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&float_signal_config->config_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          point_config_ptr = GroupScriptConfig::findPointConfig(group_config_ptr, float_signal_config->config_id);
          if ( point_config_ptr )
          {
            dis = (int)getDistance((const Vector3 *)(v1 + 32), &point_config_ptr->pos);
            if ( dis < nearest_dis )
            {
              nearest_dis = dis;
              if ( (((unsigned __int8)point_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->pos >> 3)
                                                                             + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)&point_config_ptr->pos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)point_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load_n(&point_config_ptr->pos, 12LL);
              }
              *(Vector3 *)(v1 + 64) = point_config_ptr->pos;
              if ( *(char *)(((unsigned __int64)&point_config_ptr->rot >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)point_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load_n(&point_config_ptr->rot, 12LL);
              }
              *(Vector3 *)(v1 + 96) = point_config_ptr->rot;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/echo_shell_activity.cpp",
              "triggerSeaMistSurroundTransfer",
              411);
            v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                   &v22,
                   (const char (*)[18])byte_25D27D60);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &float_signal_config->config_id);
            common::milog::MiLogStream::~MiLogStream(&v22);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/echo_shell_activity.cpp",
            "triggerSeaMistSurroundTransfer",
            405);
          v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])byte_25D27D20);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &float_signal_config->group_id);
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false,false>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      TransferReason::TransferReason(&p_reason, ENTER_REASON_SUMMER_TIME_MIST_ZONE);
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      LOBYTE(SceneComp) = PlayerSceneComp::jumpToScene(
                            SceneComp,
                            v10,
                            (const Vector3 *)(v1 + 64),
                            (const Vector3 *)(v1 + 96),
                            0,
                            &p_reason) != 0;
      TransferReason::~TransferReason(&p_reason);
      if ( (_BYTE)SceneComp )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/echo_shell_activity.cpp",
          "triggerSeaMistSurroundTransfer",
          424);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v22,
          (const char (*)[39])"[EchoShellActivity] jumpToScene failed");
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 160));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 128));
  if ( v24 == (char *)v1 )
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

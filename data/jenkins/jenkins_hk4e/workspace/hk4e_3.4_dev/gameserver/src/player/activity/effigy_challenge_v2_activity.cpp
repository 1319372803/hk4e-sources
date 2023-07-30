// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/effigy_challenge_v2_activity.cpp

// Line 20: range 00000000165D9B26-00000000165D9D1A
int32_t __cdecl EffigyChallengeV2LevelData::fromBin(
        EffigyChallengeV2LevelData *const this,
        const proto::EffigyChallengeV2LevelBin *proto)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx
  bool is_level_open; // cl
  uint32_t v5; // ecx
  uint32_t choose_skill_no; // ecx
  uint32_t v7; // ecx

  v2 = proto::EffigyChallengeV2LevelBin::level_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->level_id = v2;
  v3 = proto::EffigyChallengeV2LevelBin::best_cost_time(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_cost_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_cost_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_cost_time);
  }
  this->best_cost_time = v3;
  is_level_open = proto::EffigyChallengeV2LevelBin::is_level_open(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_level_open);
  }
  this->is_level_open = is_level_open;
  v5 = proto::EffigyChallengeV2LevelBin::challenge_mode_difficulty_open(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_open >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_open >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_mode_difficulty_open);
  }
  this->challenge_mode_difficulty_open = v5;
  choose_skill_no = proto::EffigyChallengeV2LevelBin::challenge_mode_last_choose_skill_no(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_last_choose_skill_no >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_mode_last_choose_skill_no);
  }
  this->challenge_mode_last_choose_skill_no = choose_skill_no;
  v7 = proto::EffigyChallengeV2LevelBin::challenge_mode_difficulty_pass(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_pass >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_pass >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_mode_difficulty_pass);
  }
  this->challenge_mode_difficulty_pass = v7;
  return 0;
};

// Line 31: range 00000000165D9D1C-00000000165D9F0E
int32_t __cdecl EffigyChallengeV2LevelData::toBin(
        const EffigyChallengeV2LevelData *const this,
        proto::EffigyChallengeV2LevelBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelBin::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_cost_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_cost_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelBin::set_best_cost_time(proto, this->best_cost_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_level_open);
  }
  proto::EffigyChallengeV2LevelBin::set_is_level_open(proto, this->is_level_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_open >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_open >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelBin::set_challenge_mode_difficulty_open(proto, this->challenge_mode_difficulty_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_last_choose_skill_no >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelBin::set_challenge_mode_last_choose_skill_no(
    proto,
    this->challenge_mode_last_choose_skill_no);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_pass >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_pass >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelBin::set_challenge_mode_difficulty_pass(proto, this->challenge_mode_difficulty_pass);
  return 0;
};

// Line 42: range 00000000165D9F10-00000000165DA0FE
void __cdecl EffigyChallengeV2LevelData::toClient(
        const EffigyChallengeV2LevelData *const this,
        proto::EffigyChallengeV2LevelData *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelData::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_cost_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_cost_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelData::set_best_cost_time(proto, this->best_cost_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_level_open);
  }
  proto::EffigyChallengeV2LevelData::set_is_level_open(proto, this->is_level_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_open >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_open >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelData::set_challenge_mode_difficulty_open(proto, this->challenge_mode_difficulty_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_last_choose_skill_no >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelData::set_challenge_mode_last_choose_skill_no(
    proto,
    this->challenge_mode_last_choose_skill_no);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_pass >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_pass >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyChallengeV2LevelData::set_challenge_mode_difficulty_pass(proto, this->challenge_mode_difficulty_pass);
};

// Line 52: range 00000000165DA100-00000000165DA382
int32_t __cdecl EffigyChallengeV2Activity::fromScheduleBin(
        EffigyChallengeV2Activity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  EffigyChallengeV2LevelData *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::EffigyChallengeV2LevelBin>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::EffigyChallengeV2LevelBin>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const proto::EffigyChallengeV2ScheduleBin *effigy_challenge_bin; // [rsp+28h] [rbp-B8h]
  const google::protobuf::RepeatedPtrField<proto::EffigyChallengeV2LevelBin> *__for_range; // [rsp+30h] [rbp-B0h]
  const proto::EffigyChallengeV2LevelBin *level_bin; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 17 new_level_data:56";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Activity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  effigy_challenge_bin = proto::ActivityScheduleBin::effigy_challenge_bin(bin);
  __for_range = proto::EffigyChallengeV2ScheduleBin::level_bin_list(effigy_challenge_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::EffigyChallengeV2LevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::EffigyChallengeV2LevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::EffigyChallengeV2LevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::EffigyChallengeV2LevelBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 52) = 0;
    EffigyChallengeV2LevelData::fromBin((EffigyChallengeV2LevelData *const)(v2 + 32), level_bin);
    v6 = std::map<unsigned int,EffigyChallengeV2LevelData>::emplace<unsigned int &,EffigyChallengeV2LevelData&>(
           &this->level_data_map_,
           (unsigned int *)(v2 + 32),
           (EffigyChallengeV2LevelData *)(v2 + 32),
           (unsigned int *)&this->level_data_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "fromScheduleBin",
        60);
      v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v14,
             (const char (*)[52])"[EffigyChallengeV2] level_id duplicated, level_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
      goto LABEL_10;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::EffigyChallengeV2LevelBin const>::operator++(&__for_begin);
  }
  result = 0;
LABEL_10:
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

// Line 68: range 00000000165DA384-00000000165DA450
int32_t __cdecl EffigyChallengeV2Activity::toScheduleBin(
        const EffigyChallengeV2Activity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,EffigyChallengeV2LevelData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,EffigyChallengeV2LevelData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::EffigyChallengeV2ScheduleBin *effigy_challenge_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,EffigyChallengeV2LevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,EffigyChallengeV2LevelData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,EffigyChallengeV2LevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,EffigyChallengeV2LevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::EffigyChallengeV2LevelBin *new_level_data_bin; // [rsp+48h] [rbp-8h]

  effigy_challenge_bin = proto::ActivityScheduleBin::mutable_effigy_challenge_bin(bin);
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,EffigyChallengeV2LevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,EffigyChallengeV2LevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,EffigyChallengeV2LevelData>(v7);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,EffigyChallengeV2LevelData> >::type *)std::get<1ul,unsigned int const,EffigyChallengeV2LevelData>(v7);
    new_level_data_bin = proto::EffigyChallengeV2ScheduleBin::add_level_bin_list(effigy_challenge_bin);
    EffigyChallengeV2LevelData::toBin(level_data, new_level_data_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 79: range 00000000165DA452-00000000165DA61F
int32_t __cdecl EffigyChallengeV2Activity::toClient(
        EffigyChallengeV2Activity *const this,
        proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,EffigyChallengeV2LevelData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,EffigyChallengeV2LevelData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::EffigyChallengeV2DetailInfo *effigy_challenge_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,EffigyChallengeV2LevelData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,EffigyChallengeV2LevelData> *v9; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,EffigyChallengeV2LevelData> >::type *level_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,EffigyChallengeV2LevelData> >::type *level_data; // [rsp+50h] [rbp-40h]
  proto::EffigyChallengeV2LevelData *new_effigy_challenge_level_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_challenge_v2_activity.cpp",
      "toClient",
      83);
    v2 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v13,
           (const char (*)[57])"[EffigyChallengeV2] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    effigy_challenge_info = proto::ActivityInfo::mutable_effigy_challenge_info(activity_info);
    __for_range = &this->level_data_map_;
    __for_begin._M_node = std::map<unsigned int,EffigyChallengeV2LevelData>::begin(&this->level_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,EffigyChallengeV2LevelData>::end(&this->level_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData>>::operator*(&__for_begin);
      level_id = std::get<0ul,unsigned int const,EffigyChallengeV2LevelData>(v9);
      level_data = (std::tuple_element<1,const std::pair<unsigned int const,EffigyChallengeV2LevelData> >::type *)std::get<1ul,unsigned int const,EffigyChallengeV2LevelData>(v9);
      new_effigy_challenge_level_info = proto::EffigyChallengeV2DetailInfo::add_level_data_list(effigy_challenge_info);
      EffigyChallengeV2LevelData::toClient(level_data, new_effigy_challenge_level_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 97: range 00000000165DA620-00000000165DA6CC
int32_t __cdecl EffigyChallengeV2Activity::init(EffigyChallengeV2Activity *const this)
{
  EffigyChallengeV2Activity *v1; // rdx
  unsigned __int64 v2; // rax
  char v3; // al

  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_7;
  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(EffigyChallengeV2Activity *))v2)(v1) )
LABEL_7:
    v3 = 1;
  else
    v3 = 0;
  if ( !v3 )
    EffigyChallengeV2Activity::registerObserver(this);
  return 0;
};

// Line 110: range 00000000165DA6CE-00000000165DA96F
void __cdecl EffigyChallengeV2Activity::onPreStart(EffigyChallengeV2Activity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  EffigyChallengeV2LevelData *v4; // rax
  const unsigned int *v5; // rcx
  EffigyChallengeV2LevelData *v6; // r8
  std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const ActivityEffigyChallengeV2ExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-C8h]
  const std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig> *v11; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig> >::type *level_id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig> >::type *level_config; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v14; // [rsp+50h] [rbp-A0h] BYREF
  char v15[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 18 new_level_data:115";
  *(_QWORD *)(v1 + 16) = EffigyChallengeV2Activity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::map<unsigned int,EffigyChallengeV2LevelData>::clear(&this->level_data_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  __for_range = &config_mgr->effigy_challenge_v2_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::begin(&config_mgr->effigy_challenge_v2_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::end(&config_mgr->effigy_challenge_v2_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::EffigyChallengeV2ExcelConfig>(v11);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EffigyChallengeV2ExcelConfig>(v11);
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 36) = 0;
    *(_BYTE *)(v1 + 40) = 0;
    *(_DWORD *)(v1 + 44) = 0;
    *(_DWORD *)(v1 + 48) = 0;
    *(_DWORD *)(v1 + 52) = 0;
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *level_id;
    v4 = std::move<EffigyChallengeV2LevelData &>((EffigyChallengeV2LevelData *)(v1 + 32));
    std::map<unsigned int,EffigyChallengeV2LevelData>::emplace<unsigned int const&,EffigyChallengeV2LevelData>(
      &this->level_data_map_,
      level_id,
      v4,
      v5,
      v6);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( v15 == (char *)v1 )
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

// Line 122: range 00000000165DA970-00000000165DA98A
void __cdecl EffigyChallengeV2Activity::onStart(EffigyChallengeV2Activity *const this)
{
  EffigyChallengeV2Activity::registerObserver(this);
};

// Line 127: range 00000000165DA98C-00000000165DA9A6
void __cdecl EffigyChallengeV2Activity::onSettle(EffigyChallengeV2Activity *const this)
{
  EffigyChallengeV2Activity::unregisterObserver(this);
};

// Line 132: range 00000000165DA9A8-00000000165DA9C8
void __cdecl EffigyChallengeV2Activity::onClear(EffigyChallengeV2Activity *const this)
{
  std::map<unsigned int,EffigyChallengeV2LevelData>::clear(&this->level_data_map_);
};

// Line 138: range 00000000165DA9CA-00000000165DB099
int32_t __cdecl EffigyChallengeV2Activity::execAction(
        EffigyChallengeV2Activity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-D8h] BYREF
  const std::string *level_id_str; // [rsp+20h] [rbp-D0h]
  const std::string *challenge_mode_difficulty_str; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:150 64 4 29 challenge_mode_difficulty:163";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Activity::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_EFFIGY_CHALLENGE_V2_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) > 1 )
    {
      *(_DWORD *)(v2 + 48) = 0;
      level_id_str = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(level_id_str, (unsigned int *)(v2 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "execAction",
          154);
        v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v23,
               (const char (*)[47])"[EffigyChallengeV2] convert to level_id error ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, level_id_str);
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v22);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
        v10 = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
                &v9->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
                *(_DWORD *)(v2 + 48)) == 0LL;
        std::shared_ptr<Config>::~shared_ptr(&v22);
        if ( v10 )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_challenge_v2_activity.cpp",
            "execAction",
            159);
          v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v23,
                  (const char (*)[30])"[EffigyChallengeV2] level id ");
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, level_id_str);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" does not exist");
          common::milog::MiLogStream::~MiLogStream(&v23);
          result = -1;
        }
        else
        {
          *(_DWORD *)(v2 + 64) = 0;
          challenge_mode_difficulty_str = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(
                 challenge_mode_difficulty_str,
                 (unsigned int *)(v2 + 64),
                 1) )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/effigy_challenge_v2_activity.cpp",
              "execAction",
              167);
            v13 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                    &v23,
                    (const char (*)[64])"[EffigyChallengeV2] convert to challenge_mode_difficulty error ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, challenge_mode_difficulty_str);
            common::milog::MiLogStream::~MiLogStream(&v23);
            result = -1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v22);
            v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
            v15 = ActivityEffigyChallengeV2ExcelConfigMgr::getChallengeHighestDifficulty(&v14->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr) < *(_DWORD *)(v2 + 64);
            std::shared_ptr<Config>::~shared_ptr(&v22);
            if ( v15 )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/effigy_challenge_v2_activity.cpp",
                "execAction",
                172);
              v16 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v23,
                      (const char (*)[47])"[EffigyChallengeV2] challenge_mode_difficulty ");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v2 + 64));
              common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])off_25D23E60);
              common::milog::MiLogStream::~MiLogStream(&v23);
              result = -1;
            }
            else if ( EffigyChallengeV2Activity::openEffigyChallengeLevel(
                        this,
                        *(_DWORD *)(v2 + 48),
                        *(_DWORD *)(v2 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/effigy_challenge_v2_activity.cpp",
                "execAction",
                178);
              v18 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      &v23,
                      (const char (*)[64])"[EffigyChallengeV2] openEffigyChallengeLevel failed, level_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v23);
              result = -1;
            }
            else
            {
              BaseActivity::notifyClientData(this, 0);
              result = 0;
            }
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "execAction",
        146);
      v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v23,
             (const char (*)[39])"[EffigyChallengeV2] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_25D23E60);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = -1;
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
  if ( v24 == (char *)v2 )
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

// Line 191: range 00000000165DB1DA-00000000165DCC08
int32_t __cdecl EffigyChallengeV2Activity::enterEffigyChallengeDungeon(
        EffigyChallengeV2Activity *const this,
        const proto::EffigyChallengeV2EnterDungeonReq *req,
        proto::EffigyChallengeV2EnterDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  EffigyChallengeV2Activity *v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // al
  int32_t v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v29; // rbx
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  PlayerWorld *v33; // rax
  DungeonCandidateTeam *DungeonCandidateTeam; // rax
  uint32_t challenge_dungeon_id; // eax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  DungeonScene *v55; // r14
  DungeonScene *v56; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  DungeonScene *v58; // rax
  PlayerBasicComp *BasicComp; // rax
  const std::shared_ptr<Player> *v60; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  uint32_t Uid; // r14d
  Player *v63; // rax
  bool v64; // r14
  Player *v65; // rax
  std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // r14
  int32_t result; // eax
  std::string v68; // [rsp+0h] [rbp-370h]
  EffigyChallengeV2Activity *thisa; // [rsp+18h] [rbp-358h]
  unsigned int val; // [rsp+28h] [rbp-348h] BYREF
  uint32_t dungeon_level; // [rsp+2Ch] [rbp-344h]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-340h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-338h] BYREF
  const data::EffigyChallengeV2ExcelConfig *level_config_ptr; // [rsp+40h] [rbp-330h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_ret; // [rsp+48h] [rbp-328h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_ptr; // [rsp+50h] [rbp-320h]
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+58h] [rbp-318h]
  std::shared_ptr<Scene> v78; // [rsp+60h] [rbp-310h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+70h] [rbp-300h] BYREF
  EnterDungeonOption v80; // [rsp+90h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v81; // [rsp+B0h] [rbp-2C0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+D0h] [rbp-2A0h] BYREF
  char v83[624]; // [rsp+100h] [rbp-270h] BYREF

  *(&v68._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v68._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v68._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 10 holder:304 64 4 12 level_id:197 80 4 29 challenge_mode_difficulty:198 96 4 27 challen"
                        "ge_mode_skill_no:199 112 4 14 dungeon_id:259 128 16 17 cur_world_ptr:239 160 16 13 scene_ptr:245"
                        " 192 16 21 dungeon_scene_ptr:277 224 16 14 player_ptr:310 256 16 36 effigy_challenge_v2_activity"
                        "_ptr:324 288 24 18 player_ptr_vec:308 352 40 11 context:293 432 104 26 dungeon_candidate_team:258";
  *(_QWORD *)(v3 + 16) = EffigyChallengeV2Activity::enterEffigyChallengeDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959360;
  v5[536862733] = 62194;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_10;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(EffigyChallengeV2Activity *))v7)(v6) )
LABEL_10:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v9 = 860;
  }
  else
  {
    *(_DWORD *)(v3 + 64) = proto::EffigyChallengeV2EnterDungeonReq::level_id(req);
    *(_DWORD *)(v3 + 80) = proto::EffigyChallengeV2EnterDungeonReq::challenge_mode_difficulty(req);
    *(_DWORD *)(v3 + 96) = proto::EffigyChallengeV2EnterDungeonReq::challenge_mode_skill_no(req);
    proto::EffigyChallengeV2EnterDungeonRsp::set_level_id(
      (proto::EffigyChallengeV2EnterDungeonRsp *const)v68._M_string_length,
      *(_DWORD *)(v3 + 64));
    proto::EffigyChallengeV2EnterDungeonRsp::set_challenge_mode_difficulty(
      (proto::EffigyChallengeV2EnterDungeonRsp *const)v68._M_string_length,
      *(_DWORD *)(v3 + 80));
    proto::EffigyChallengeV2EnterDungeonRsp::set_challenge_mode_skill_no(
      (proto::EffigyChallengeV2EnterDungeonRsp *const)v68._M_string_length,
      *(_DWORD *)(v3 + 96));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v78);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
    v11 = ActivityEffigyChallengeV2ExcelConfigMgr::getChallengeHighestDifficulty(&v10->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr) < *(_DWORD *)(v3 + 80);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v81,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "enterEffigyChallengeDungeon",
        207);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v81, (const char (*)[11])"level_id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])", difficulty: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])off_25D23E60);
      common::milog::MiLogStream::~MiLogStream(&v81);
      v9 = -1;
    }
    else if ( *(_DWORD *)(v3 + 80) || !*(_DWORD *)(v3 + 96) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v78);
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
      level_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
                           &v16->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
                           *(_DWORD *)(v3 + 64));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
      if ( level_config_ptr )
      {
        if ( *(_DWORD *)(v3 + 80)
          && !common::tools::MiscUtils::isContains<unsigned int>(
                &level_config_ptr->challenge_skill_id_list,
                (const unsigned int *)(v3 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v81,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_challenge_v2_activity.cpp",
            "enterEffigyChallengeDungeon",
            223);
          v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v81, (const char (*)[11])"level_id: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v3 + 64));
          v22 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v21,
                  (const char (*)[28])", challenge mode skill no: ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])off_25D23E60);
          common::milog::MiLogStream::~MiLogStream(&v81);
          v9 = -1;
        }
        else if ( !EffigyChallengeV2Activity::isLevelOpen(this, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v81,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_challenge_v2_activity.cpp",
            "enterEffigyChallengeDungeon",
            229);
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v81, (const char (*)[11])"level_id: ");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 64));
          v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v25,
                  (const char (*)[15])", difficulty: ");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])off_25D2A220);
          common::milog::MiLogStream::~MiLogStream(&v81);
          v9 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(this->player_);
          if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
          {
            common::milog::MiLogStream::create(
              &v81,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/effigy_challenge_v2_activity.cpp",
              "enterEffigyChallengeDungeon",
              236);
            v29 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v81,
                    (const char (*)[45])"[EffigyChallengeV2] not in self world, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
            common::milog::MiLogStream::~MiLogStream(&v81);
            v9 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 128));
            if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v81,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/effigy_challenge_v2_activity.cpp",
                "enterEffigyChallengeDungeon",
                242);
              v30 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v81,
                      (const char (*)[46])"[EffigyChallengeV2] getCurWorld failed, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
              common::milog::MiLogStream::~MiLogStream(&v81);
              v9 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Player::getSceneComp(this->player_);
              PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 160));
              if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160)) )
              {
                common::milog::MiLogStream::create(
                  &v81,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/effigy_challenge_v2_activity.cpp",
                  "enterEffigyChallengeDungeon",
                  248);
                v31 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v81,
                        (const char (*)[44])"[EffigyChallengeV2] scene_ptr is null, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
                common::milog::MiLogStream::~MiLogStream(&v81);
                v9 = 512;
              }
              else
              {
                v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                if ( Scene::getSceneType(v32) == SCENE_WORLD )
                {
                  v33 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  DungeonCandidateTeam = PlayerWorld::getDungeonCandidateTeam(v33);
                  DungeonCandidateTeam::DungeonCandidateTeam(
                    (DungeonCandidateTeam *const)(v3 + 432),
                    DungeonCandidateTeam);
                  if ( *(_DWORD *)(v3 + 80) )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->challenge_dungeon_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&level_config_ptr->challenge_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    challenge_dungeon_id = level_config_ptr->challenge_dungeon_id;
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->normal_dungeon_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&level_config_ptr->normal_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    challenge_dungeon_id = level_config_ptr->normal_dungeon_id;
                  }
                  *(_DWORD *)(v3 + 112) = challenge_dungeon_id;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  DungeonComp = Player::getDungeonComp(this->player_);
                  memset(&v80, 0, sizeof(v80));
                  EnterDungeonOption::EnterDungeonOption(&v80);
                  memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                  std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                  v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  SceneId = Scene::getSceneId(v37);
                  PlayerDungeonComp::enterDungeon(
                    &__in,
                    DungeonComp,
                    *(_DWORD *)(v3 + 112),
                    SceneId,
                    0,
                    &level_config_id_map,
                    v80);
                  std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
                  enter_dungeon_ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                  dungeon_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                  if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)enter_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3)
                                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( *enter_dungeon_ret >= 0 )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)enter_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3)
                                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    if ( *enter_dungeon_ret <= 0 )
                    {
                      if ( std::operator==<DungeonScene>(dungeon_ptr, 0LL) )
                      {
                        common::milog::MiLogStream::create(
                          &v81,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/effigy_challenge_v2_activity.cpp",
                          "enterEffigyChallengeDungeon",
                          273);
                        v47 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                                &v81,
                                (const char (*)[63])"[EffigyChallengeV2] enterDungeon dungeon_ptr is nullptr, uid: ");
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        val = Player::getUid(this->player_);
                        v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &val);
                        v49 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v48,
                                (const char (*)[15])", dungeon_id: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v49,
                          (const unsigned int *)(v3 + 112));
                        common::milog::MiLogStream::~MiLogStream(&v81);
                        v9 = -1;
                      }
                      else
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        Player::getSceneComp(this->player_);
                        PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&v78);
                        std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 192));
                        std::shared_ptr<Scene>::~shared_ptr(&v78);
                        if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 192))
                          || (v50 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192)),
                              DungeonScene::getDungeonId(v50) != *(_DWORD *)(v3 + 112)) )
                        {
                          common::milog::MiLogStream::create(
                            &v81,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/effigy_challenge_v2_activity.cpp",
                            "enterEffigyChallengeDungeon",
                            280);
                          v52 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                  &v81,
                                  (const char (*)[42])"[EffigyChallengeV2] player enter dungeon ");
                          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v52,
                                  (const unsigned int *)(v3 + 112));
                          v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                  v53,
                                  (const char (*)[14])" failed, uid:");
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8();
                          val = Player::getUid(this->player_);
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &val);
                          common::milog::MiLogStream::~MiLogStream(&v81);
                          v9 = -1;
                        }
                        else
                        {
                          v55 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                          std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<EffigyChallengeV2Activity::enterEffigyChallengeDungeon(proto::EffigyChallengeV2EnterDungeonReq const&,proto::EffigyChallengeV2EnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
                            (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v81,
                            (EffigyChallengeV2Activity::enterEffigyChallengeDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)>)(v3 - 64));
                          DungeonScene::registerDungeonSettleCallback(v55, (DungeonSettleCallback *)&v81);
                          std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v81);
                          EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext::EffigyChallengeV2DungeonContext((EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *const)(v3 + 352));
                          *(_DWORD *)(v3 + 352) = *(_DWORD *)(v3 + 80);
                          *(_DWORD *)(v3 + 356) = *(_DWORD *)(v3 + 96);
                          v56 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                          DungeonScene::setDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
                            v56,
                            (const EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *)(v3 + 352));
                          ServiceBox::findService<GameserverService>();
                          GameserverService::getConfig((GameserverService *const)&v78);
                          v57 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
                          dungeon_level = ActivityEffigyChallengeV2ExcelConfigMgr::getChllangeModeDungeonLevelByDifficulty(
                                            &v57->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
                                            *(_DWORD *)(v3 + 80));
                          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
                          if ( dungeon_level )
                          {
                            v58 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                            DungeonScene::setReviseLevel(v58, dungeon_level);
                          }
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8();
                          BasicComp = Player::getBasicComp(this->player_);
                          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v81, BasicComp);
                          StatLogUtils::ContextHolder::ContextHolder(
                            (StatLogUtils::ContextHolder *const)(v3 + 48),
                            0xE88u,
                            v68);
                          std::string::~string(&v81);
                          std::shared_ptr<DungeonScene>::shared_ptr(
                            (std::shared_ptr<DungeonScene> *const)&v78,
                            (const std::shared_ptr<DungeonScene> *)(v3 + 192));
                          EffigyChallengeV2Activity::logEnterDungeon(thisa, (DungeonScenePtr *)&v78);
                          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v78);
                          if ( DungeonCandidateTeam::isVaild((DungeonCandidateTeam *const)(v3 + 432)) )
                          {
                            std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 288));
                            DungeonCandidateTeam::getAllPlayerPtrVec(
                              (DungeonCandidateTeam *const)(v3 + 432),
                              (std::vector<std::shared_ptr<Player>> *)(v3 + 288));
                            __for_range = (std::vector<std::shared_ptr<Player>> *)(v3 + 288);
                            __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 288))._M_current;
                            __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v3 + 288))._M_current;
                            while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                                      &__for_begin,
                                      &__for_end) )
                            {
                              v60 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
                              std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v3 + 224), v60);
                              if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 224)) )
                              {
                                v61 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                                Uid = Player::getUid(v61);
                                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                                  __asan_report_load8();
                                if ( Uid != Player::getUid(thisa->player_) )
                                {
                                  v63 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                                  Player::getSceneComp(v63);
                                  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v3 + 256));
                                  std::dynamic_pointer_cast<DungeonScene,Scene>(&v78);
                                  v64 = std::operator!=<DungeonScene,DungeonScene>(
                                          (const std::shared_ptr<DungeonScene> *)&v78,
                                          (const std::shared_ptr<DungeonScene> *)(v3 + 192));
                                  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v78);
                                  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 256));
                                  if ( !v64 )
                                  {
                                    v65 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                                    Player::getActivityComp(v65);
                                    PlayerActivityComp::findOpenningActivity<EffigyChallengeV2Activity>((PlayerActivityComp *const)(v3 + 256));
                                    if ( std::operator!=<EffigyChallengeV2Activity>(
                                           0LL,
                                           (const std::shared_ptr<EffigyChallengeV2Activity> *)(v3 + 256)) )
                                    {
                                      v66 = std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                                      std::shared_ptr<DungeonScene>::shared_ptr(
                                        (std::shared_ptr<DungeonScene> *const)&v78,
                                        (const std::shared_ptr<DungeonScene> *)(v3 + 192));
                                      EffigyChallengeV2Activity::logEnterDungeon(v66, (DungeonScenePtr *)&v78);
                                      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v78);
                                    }
                                    std::shared_ptr<EffigyChallengeV2Activity>::~shared_ptr((std::shared_ptr<EffigyChallengeV2Activity> *const)(v3 + 256));
                                  }
                                }
                              }
                              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 224));
                              __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
                            }
                            std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 288));
                          }
                          v9 = 0;
                          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
                          EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext::~EffigyChallengeV2DungeonContext((EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *const)(v3 + 352));
                        }
                        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 192));
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v81,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/effigy_challenge_v2_activity.cpp",
                        "enterEffigyChallengeDungeon",
                        268);
                      v42 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                              &v81,
                              (const char (*)[47])"[EffigyChallengeV2] enterDungeon failed, uid: ");
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      val = Player::getUid(this->player_);
                      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &val);
                      v44 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                              v43,
                              (const char (*)[15])", dungeon_id: ");
                      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v44,
                              (const unsigned int *)(v3 + 112));
                      v46 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                              v45,
                              (const char (*)[7])" ret: ");
                      common::milog::MiLogStream::operator<<<int,(int *)0>(v46, enter_dungeon_ret);
                      common::milog::MiLogStream::~MiLogStream(&v81);
                      if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)enter_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3)
                                                                                            + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      v9 = *enter_dungeon_ret;
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v81,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/effigy_challenge_v2_activity.cpp",
                      "enterEffigyChallengeDungeon",
                      263);
                    v39 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                            &v81,
                            (const char (*)[47])"[EffigyChallengeV2] enterDungeon failed, uid: ");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    val = Player::getUid(this->player_);
                    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
                    v41 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                            v40,
                            (const char (*)[15])", dungeon_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v41,
                      (const unsigned int *)(v3 + 112));
                    common::milog::MiLogStream::~MiLogStream(&v81);
                    if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)enter_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3)
                                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    v9 = *enter_dungeon_ret;
                  }
                  std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
                  DungeonCandidateTeam::~DungeonCandidateTeam((DungeonCandidateTeam *const)(v3 + 432));
                }
                else
                {
                  v9 = -1;
                }
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
            }
            std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 128));
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v81,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "enterEffigyChallengeDungeon",
          218);
        v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v81, (const char (*)[10])"level id ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v18, (const char (*)[46])off_25D2A180);
        common::milog::MiLogStream::~MiLogStream(&v81);
        v9 = 5;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v81,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "enterEffigyChallengeDungeon",
        212);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v81,
        (const char (*)[37])"normal mode should not chooose skill");
      common::milog::MiLogStream::~MiLogStream(&v81);
      v9 = -1;
    }
  }
  result = v9;
  if ( v83 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 283: range 00000000165DB09A-00000000165DB1D9
void __cdecl EffigyChallengeV2Activity::enterEffigyChallengeDungeon(proto::EffigyChallengeV2EnterDungeonReq const&,proto::EffigyChallengeV2EnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const EffigyChallengeV2Activity::enterEffigyChallengeDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:285";
  *(_QWORD *)(v4 + 16) = EffigyChallengeV2Activity::enterEffigyChallengeDungeon(proto::EffigyChallengeV2EnterDungeonReq const&,proto::EffigyChallengeV2EnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<EffigyChallengeV2Activity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<EffigyChallengeV2Activity>(0LL, (const std::shared_ptr<EffigyChallengeV2Activity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    EffigyChallengeV2Activity::onDungeonSettle(v7, dungeon_scene, notify);
  }
  std::shared_ptr<EffigyChallengeV2Activity>::~shared_ptr((std::shared_ptr<EffigyChallengeV2Activity> *const)(v4 + 32));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 336: range 00000000165DCC96-00000000165DD2E4
void __cdecl EffigyChallengeV2Activity::logEnterDungeon(
        const EffigyChallengeV2Activity *const this,
        DungeonScenePtr *p_dungeon_scene_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  DungeonScene *v11; // rax
  const std::string *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v15; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  char v20; // al
  Player *player; // r14
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *is_exist; // [rsp+18h] [rbp-128h]
  std::pair<bool,unsigned int> __in; // [rsp+28h] [rbp-118h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v25; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 dungeon_id:341 48 16 11 log_ptr:355 80 48 15 context_opt:348";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Activity::logEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  if ( !std::operator==<DungeonScene>(0LL, p_dungeon_scene_ptr) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    *(_DWORD *)(v2 + 32) = DungeonScene::getDungeonId(v5);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    __in = ActivityEffigyChallengeV2ExcelConfigMgr::getLevelIdAccordingToDungeonId(
             &v6->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
             *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
    is_exist = std::get<0ul,bool,unsigned int>(&__in);
    std::get<1ul,bool,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_exist);
    }
    if ( !*is_exist )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "logEnterDungeon",
        345);
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v26, (const char (*)[12])"dungeon id ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])off_25D2A580);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      DungeonScene::getDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
        (std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *)(v2 + 80),
        v9);
      if ( !std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::has_value((const std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "logEnterDungeon",
          351);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v26,
          (const char (*)[30])"[EFFIGYCHALLENGEV2] no data. ");
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        common::tools::perf::make_shared<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon>();
        v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
        v12 = DungeonScene::getTransaction[abi:cxx11](v11);
        proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon::set_transaction_no(v10, v12);
        v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon::set_dungeon_id(v13, *(_DWORD *)(v2 + 32));
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v15 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon::set_difficulty_id(v14, v15->challenge_mode_difficulty);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(this->player_);
        std::function<ForeachPolicy ()(Avatar &)>::function<EffigyChallengeV2Activity::logEnterDungeon(std::shared_ptr<DungeonScene>)::{lambda(Avatar &)#1},void,void>(
          (std::function<ForeachPolicy(Avatar&)> *const)&v26,
          (EffigyChallengeV2Activity::logEnterDungeon::<lambda(Avatar&)>)(v2 + 48));
        PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v26);
        std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v26);
        v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v18 = (unsigned __int64)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8();
        v19 = *(_QWORD *)v18 + 392LL;
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8();
        v20 = (*(__int64 (__fastcall **)(unsigned __int64))v19)(v18);
        proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon::set_is_mp(v17, v20);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v25, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon> *)(v2 + 48));
        Player::printStatLog(player, &p_body_ptr, &v25, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v25);
        std::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon> *const)(v2 + 48));
      }
      std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::~optional((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 80));
    }
  }
  if ( v27 == (char *)v2 )
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

// Line 359: range 00000000165DCC0A-00000000165DCC94
ForeachPolicy __cdecl EffigyChallengeV2Activity::logEnterDungeon(std::shared_ptr<DungeonScene>)const::{lambda(Avatar &)#1}::operator()(
        const EffigyChallengeV2Activity::logEnterDungeon::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t AvatarId; // edx
  uint32_t Level; // edx
  proto_log::CombatAvatarLog *combat_avatar_log; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__log_ptr);
  combat_avatar_log = proto_log::PlayerLogBodyEffigyChallengeV2EnterDungeon::add_avatar_list(v2);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::CombatAvatarLog::set_avatar_id(combat_avatar_log, AvatarId);
  Level = Creature::getLevel(avatar);
  proto_log::CombatAvatarLog::set_avatar_level(combat_avatar_log, Level);
  return 0;
};

// Line 371: range 00000000165DD2E6-00000000165DDA23
void __cdecl EffigyChallengeV2Activity::notifyActivityDungeonInfo(
        const EffigyChallengeV2Activity *const this,
        DungeonScenePtr *p_dungeon_scene_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ActivityEffigyChallengeV2ExcelConfigMgr *p_activity_effigy_challenge_v2_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v11; // rax
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v12; // rax
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v13; // rdx
  google::protobuf::uint32 *v14; // rdx
  uint32_t dungeon_id; // [rsp+10h] [rbp-130h]
  uint32_t next_normal_skill_index; // [rsp+14h] [rbp-12Ch]
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *is_exist; // [rsp+18h] [rbp-128h]
  uint32_t *level_id; // [rsp+20h] [rbp-120h]
  const data::EffigyChallengeV2ExcelConfig *level_config_ptr; // [rsp+28h] [rbp-118h]
  std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog> *gallery_settle_info_vec; // [rsp+30h] [rbp-110h]
  std::pair<bool,unsigned int> __in; // [rsp+38h] [rbp-108h] BYREF
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-100h] BYREF
  char v23[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 10 notify:395 112 48 15 context_opt:388";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Activity::notifyActivityDungeonInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( !std::operator==<DungeonScene>(p_dungeon_scene_ptr, 0LL) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    dungeon_id = DungeonScene::getDungeonId(v5);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    __in = ActivityEffigyChallengeV2ExcelConfigMgr::getLevelIdAccordingToDungeonId(
             &v6->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
             dungeon_id);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    is_exist = std::get<0ul,bool,unsigned int>(&__in);
    level_id = std::get<1ul,bool,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_exist);
    }
    if ( *is_exist )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      p_activity_effigy_challenge_v2_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
                           p_activity_effigy_challenge_v2_config_mgr,
                           *level_id);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( !level_config_ptr )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "notifyActivityDungeonInfo",
          385);
        v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               (common::milog::MiLogStream *const)(v2 + 48),
               (const char (*)[28])"[EFFIGYCHALLENGEV2] level: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, level_id);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" does not have data");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
        goto LABEL_33;
      }
      v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      DungeonScene::getDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
        (std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *)(v2 + 112),
        v10);
      if ( !std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::has_value((const std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 112)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "notifyActivityDungeonInfo",
          391);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 48),
          (const char (*)[30])"[EFFIGYCHALLENGEV2] no data. ");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
LABEL_32:
        std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::~optional((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 112));
        goto LABEL_33;
      }
      proto::EffigyChallengeV2DungeonInfoNotify::EffigyChallengeV2DungeonInfoNotify((proto::EffigyChallengeV2DungeonInfoNotify *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::EffigyChallengeV2DungeonInfoNotify::set_level_id(
        (proto::EffigyChallengeV2DungeonInfoNotify *const)(v2 + 48),
        *level_id);
      v11 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::EffigyChallengeV2DungeonInfoNotify::set_challenge_mode_difficulty(
        (proto::EffigyChallengeV2DungeonInfoNotify *const)(v2 + 48),
        v11->challenge_mode_difficulty);
      v12 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v12->challenge_mode_difficulty )
      {
        v13 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&v13->challenge_mode_skill_no >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->challenge_mode_skill_no >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::EffigyChallengeV2DungeonInfoNotify::set_skill_no(
          (proto::EffigyChallengeV2DungeonInfoNotify *const)(v2 + 48),
          v13->challenge_mode_skill_no);
      }
      else
      {
        gallery_settle_info_vec = &std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 112))->gallery_settle_info_vec;
        next_normal_skill_index = std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::size(gallery_settle_info_vec);
        if ( next_normal_skill_index >= std::vector<unsigned int>::size(&level_config_ptr->normal_skill_id_list) )
        {
LABEL_31:
          proto::EffigyChallengeV2DungeonInfoNotify::~EffigyChallengeV2DungeonInfoNotify((proto::EffigyChallengeV2DungeonInfoNotify *const)(v2 + 48));
          goto LABEL_32;
        }
        v14 = (google::protobuf::uint32 *)std::vector<unsigned int>::operator[](
                                            &level_config_ptr->normal_skill_id_list,
                                            next_normal_skill_index);
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::EffigyChallengeV2DungeonInfoNotify::set_skill_no(
          (proto::EffigyChallengeV2DungeonInfoNotify *const)(v2 + 48),
          *v14);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
      goto LABEL_31;
    }
  }
LABEL_33:
  if ( v23 == (char *)v2 )
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

// Line 419: range 00000000165DDCC8-00000000165DEB80
int32_t __cdecl EffigyChallengeV2Activity::restartEffigyChallengeDungeon(
        EffigyChallengeV2Activity *const this,
        const proto::EffigyChallengeV2RestartDungeonReq *req,
        proto::EffigyChallengeV2RestartDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  EffigyChallengeV2Activity *v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // al
  int32_t v9; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v25; // rax
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v26; // rax
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v27; // rax
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v28; // rax
  DungeonScene *v29; // rax
  PlayerBasicComp *BasicComp; // rax
  int32_t result; // eax
  std::string v32; // [rsp+0h] [rbp-1F0h]
  bool isDungeonClosed; // [rsp+10h] [rbp-1E0h]
  uint32_t PlayerUid; // [rsp+10h] [rbp-1E0h]
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // [rsp+10h] [rbp-1E0h]
  DungeonScene *v36; // [rsp+10h] [rbp-1E0h]
  unsigned int val; // [rsp+3Ch] [rbp-1B4h] BYREF
  uint32_t dungeon_level; // [rsp+40h] [rbp-1B0h]
  unsigned int cur_player_uid; // [rsp+44h] [rbp-1ACh]
  PlayerDungeonComp *dungeon_comp; // [rsp+48h] [rbp-1A8h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *restart_dungeon_ret; // [rsp+50h] [rbp-1A0h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *next_dungeon_scene_ptr; // [rsp+58h] [rbp-198h]
  std::shared_ptr<Config> v43; // [rsp+60h] [rbp-190h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+70h] [rbp-180h] BYREF
  EnterDungeonOption v45; // [rsp+90h] [rbp-160h] BYREF
  common::milog::MiLogStream v46; // [rsp+B0h] [rbp-140h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+D0h] [rbp-120h] BYREF
  char v48[240]; // [rsp+100h] [rbp-F0h] BYREF
  EffigyChallengeV2Activity::restartEffigyChallengeDungeon::<lambda(Player&)> v49; // 0:rsi.8,8:edx.4

  *(&v32._anon_0._M_allocated_capacity + 1) = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v48;
  v32._M_string_length = (std::string::size_type)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 10 holder:490 64 4 14 dungeon_id:432 80 16 21 dungeon_scene_ptr:426 112 48 15 context_opt:457";
  *(_QWORD *)(v3 + 16) = EffigyChallengeV2Activity::restartEffigyChallengeDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_10;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(EffigyChallengeV2Activity *))v7)(v6) )
LABEL_10:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v9 = 860;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    dungeon_comp = Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 80));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "restartEffigyChallengeDungeon",
        429);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v46,
        (const char (*)[26])"dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v46);
      v9 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      *(_DWORD *)(v3 + 64) = DungeonScene::getDungeonId(v10);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v43);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
      isDungeonClosed = FeatureSwitchMgr::isDungeonClosed(&v11->feature_switch_mgr, *(_DWORD *)(v3 + 64));
      std::shared_ptr<Config>::~shared_ptr(&v43);
      if ( isDungeonClosed )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "restartEffigyChallengeDungeon",
          435);
        v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v46,
                (const char (*)[46])"[FEATURE_SWITCH] dungeon closed, dungeon_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v46);
        v9 = 142;
      }
      else
      {
        v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        PlayerUid = DungeonScene::getCreatePlayerUid(v13);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( PlayerUid == Player::getUid(this->player_) )
        {
          v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          if ( DungeonScene::getIsForceQuit(v14) )
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/effigy_challenge_v2_activity.cpp",
              "restartEffigyChallengeDungeon",
              446);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v46,
              (const char (*)[39])"dungeon timeout force all players quit");
            common::milog::MiLogStream::~MiLogStream(&v46);
            v9 = 1123;
          }
          else
          {
            v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
            if ( DungeonScene::getDungeonResult(v15) != DUNGEON_RESULT_FAIL
              && (v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80)),
                  DungeonScene::getDungeonResult(v16) != DUNGEON_RESULT_CANCEL) )
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/effigy_challenge_v2_activity.cpp",
                "restartEffigyChallengeDungeon",
                453);
              common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(&v46, (const char (*)[48])off_25D2A800);
              common::milog::MiLogStream::~MiLogStream(&v46);
              v9 = -1;
            }
            else
            {
              v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
              DungeonScene::getDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
                (std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *)(v3 + 112),
                v18);
              if ( !std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::has_value((const std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 112)) )
              {
                common::milog::MiLogStream::create(
                  &v46,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/effigy_challenge_v2_activity.cpp",
                  "restartEffigyChallengeDungeon",
                  460);
                common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v46,
                  (const char (*)[29])"[EFFIGYCHALLENGEV2] no data ");
                common::milog::MiLogStream::~MiLogStream(&v46);
                v9 = -1;
              }
              else
              {
                memset(&v45, 0, sizeof(v45));
                EnterDungeonOption::EnterDungeonOption(&v45);
                memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                PlayerDungeonComp::restartDungeon(&__in, dungeon_comp, &level_config_id_map, v45);
                std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
                restart_dungeon_ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                next_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                if ( *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)restart_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3)
                                                                                        + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( *restart_dungeon_ret >= 0 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)restart_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3)
                                                                                          + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( *restart_dungeon_ret <= 0 )
                  {
                    if ( std::operator==<DungeonScene>(0LL, next_dungeon_scene_ptr) )
                    {
                      common::milog::MiLogStream::create(
                        &v46,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/effigy_challenge_v2_activity.cpp",
                        "restartEffigyChallengeDungeon",
                        476);
                      common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                        &v46,
                        (const char (*)[71])"[EFFIGYCHALLENGEV2] restartDungeon failed. next dungeon ptr is nullptr");
                      common::milog::MiLogStream::~MiLogStream(&v46);
                      v9 = -1;
                    }
                    else
                    {
                      v25 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 112));
                      if ( *(_BYTE *)(((unsigned __int64)&v25->challenge_mode_cost_time >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&v25->challenge_mode_cost_time >> 3) + 0x7FFF8000) <= 3 )
                      {
                        v25 = (EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *)__asan_report_store4(&v25->challenge_mode_cost_time);
                      }
                      v25->challenge_mode_cost_time = 0;
                      v26 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 112));
                      std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::clear(&v26->gallery_settle_info_vec);
                      v35 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)next_dungeon_scene_ptr);
                      v27 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator*((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 112));
                      DungeonScene::setDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
                        v35,
                        v27);
                      ServiceBox::findService<GameserverService>();
                      GameserverService::getConfig((GameserverService *const)&v43);
                      v32._anon_0._M_allocated_capacity = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
                      v28 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 112));
                      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      dungeon_level = ActivityEffigyChallengeV2ExcelConfigMgr::getChllangeModeDungeonLevelByDifficulty(
                                        (const ActivityEffigyChallengeV2ExcelConfigMgr *const)v32._anon_0._M_allocated_capacity,
                                        v28->challenge_mode_difficulty);
                      std::shared_ptr<Config>::~shared_ptr(&v43);
                      if ( dungeon_level )
                      {
                        v29 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)next_dungeon_scene_ptr);
                        DungeonScene::setReviseLevel(v29, dungeon_level);
                      }
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      BasicComp = Player::getBasicComp(this->player_);
                      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v46, BasicComp);
                      StatLogUtils::ContextHolder::ContextHolder(
                        (StatLogUtils::ContextHolder *const)(v3 + 48),
                        0xE88u,
                        v32);
                      std::string::~string(&v46);
                      std::shared_ptr<DungeonScene>::shared_ptr(
                        (std::shared_ptr<DungeonScene> *const)&v43,
                        next_dungeon_scene_ptr);
                      EffigyChallengeV2Activity::logEnterDungeon(this, (DungeonScenePtr *)&v43);
                      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v43);
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      cur_player_uid = Player::getUid(this->player_);
                      v36 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                      v49.__cur_player_uid = cur_player_uid;
                      v49.__next_dungeon_scene_ptr = next_dungeon_scene_ptr;
                      std::function<ForeachPolicy ()(Player &)>::function<EffigyChallengeV2Activity::restartEffigyChallengeDungeon(proto::EffigyChallengeV2RestartDungeonReq const&,proto::EffigyChallengeV2RestartDungeonRsp &)::{lambda(Player &)#1},void,void>(
                        (std::function<ForeachPolicy(Player&)> *const)&v46,
                        v49);
                      Scene::foreachPlayer((Scene *const)v36, (std::function<ForeachPolicy(Player&)> *)&v46);
                      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v46);
                      v9 = 0;
                      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v46,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/effigy_challenge_v2_activity.cpp",
                      "restartEffigyChallengeDungeon",
                      471);
                    v20 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            &v46,
                            (const char (*)[38])"[EFFIGY] restartDungeon failed, uid: ");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    val = Player::getUid(this->player_);
                    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
                    v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                            v21,
                            (const char (*)[15])", dungeon_id: ");
                    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v22,
                            (const unsigned int *)(v3 + 64));
                    v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v23,
                            (const char (*)[7])" ret: ");
                    common::milog::MiLogStream::operator<<<int,(int *)0>(v24, restart_dungeon_ret);
                    common::milog::MiLogStream::~MiLogStream(&v46);
                    if ( *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)restart_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3)
                                                                                            + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    v9 = *restart_dungeon_ret;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v46,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/effigy_challenge_v2_activity.cpp",
                    "restartEffigyChallengeDungeon",
                    466);
                  v19 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v46,
                          (const char (*)[49])"[EFFIGYCHALLENGEV2] restartDungeon failed. ret: ");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v19, restart_dungeon_ret);
                  common::milog::MiLogStream::~MiLogStream(&v46);
                  if ( *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)restart_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3)
                                                                                          + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v9 = *restart_dungeon_ret;
                }
                std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
              }
              std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::~optional((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 112));
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/effigy_challenge_v2_activity.cpp",
            "restartEffigyChallengeDungeon",
            441);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v46,
            (const char (*)[44])"guest can not send DungeonRestartReq, error");
          common::milog::MiLogStream::~MiLogStream(&v46);
          v9 = -1;
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 80));
  }
  result = v9;
  if ( v32._M_string_length == v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 493: range 00000000165DDA24-00000000165DDCC7
ForeachPolicy __cdecl EffigyChallengeV2Activity::restartEffigyChallengeDungeon(proto::EffigyChallengeV2RestartDungeonReq const&,proto::EffigyChallengeV2RestartDungeonRsp &)::{lambda(Player &)#1}::operator()(
        const EffigyChallengeV2Activity::restartEffigyChallengeDungeon::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t Uid; // ecx
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *next_dungeon_scene_ptr; // r14
  std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  ForeachPolicy result; // eax
  std::shared_ptr<Scene> __r; // [rsp+10h] [rbp-80h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 36 effigy_challenge_v2_activity_ptr:503";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Activity::restartEffigyChallengeDungeon(proto::EffigyChallengeV2RestartDungeonReq const&,proto::EffigyChallengeV2RestartDungeonRsp &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_player_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__cur_player_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != __closure->__cur_player_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    next_dungeon_scene_ptr = __closure->__next_dungeon_scene_ptr;
    Player::getSceneComp(player);
    PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 32));
    std::dynamic_pointer_cast<DungeonScene,Scene>(&__r);
    LOBYTE(next_dungeon_scene_ptr) = std::operator!=<DungeonScene,DungeonScene>(
                                       (const std::shared_ptr<DungeonScene> *)&__r,
                                       next_dungeon_scene_ptr);
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
    if ( !(_BYTE)next_dungeon_scene_ptr )
    {
      Player::getActivityComp(player);
      PlayerActivityComp::findOpenningActivity<EffigyChallengeV2Activity>((PlayerActivityComp *const)(v2 + 32));
      if ( std::operator!=<EffigyChallengeV2Activity>(
             0LL,
             (const std::shared_ptr<EffigyChallengeV2Activity> *)(v2 + 32)) )
      {
        v7 = std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        std::shared_ptr<DungeonScene>::shared_ptr(
          (std::shared_ptr<DungeonScene> *const)&__r,
          __closure->__next_dungeon_scene_ptr);
        EffigyChallengeV2Activity::logEnterDungeon(v7, (DungeonScenePtr *)&__r);
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
      }
      std::shared_ptr<EffigyChallengeV2Activity>::~shared_ptr((std::shared_ptr<EffigyChallengeV2Activity> *const)(v2 + 32));
    }
  }
  result = FOREACH_CONTINUE;
  if ( v10 == (char *)v2 )
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

// Line 515: range 00000000165DEB82-00000000165DF190
int32_t __cdecl EffigyChallengeV2Activity::chooseEffigyChallengeSkill(
        EffigyChallengeV2Activity *const this,
        const proto::EffigyChallengeV2ChooseSkillReq *req,
        proto::EffigyChallengeV2ChooseSkillRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  EffigyChallengeV2Activity *v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // al
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::pointer v21; // rax
  uint32_t v22; // ecx
  uint32_t *p_challenge_mode_last_choose_skill_no; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  const data::EffigyChallengeV2ExcelConfig *level_config_ptr; // [rsp+30h] [rbp-C0h]
  EffigyChallengeV2LevelData *cur_level_data; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-A0h] BYREF
  char v30[128]; // [rsp+70h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 level_id:521 48 4 27 challenge_mode_skill_no:522 64 8 19 level_data_iter:543";
  *(_QWORD *)(v3 + 16) = EffigyChallengeV2Activity::chooseEffigyChallengeSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_10;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(EffigyChallengeV2Activity *))v7)(v6) )
LABEL_10:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    result = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 32) = proto::EffigyChallengeV2ChooseSkillReq::level_id(req);
    *(_DWORD *)(v3 + 48) = proto::EffigyChallengeV2ChooseSkillReq::challenge_mode_skill_no(req);
    proto::EffigyChallengeV2ChooseSkillRsp::set_level_id(rsp_0, *(_DWORD *)(v3 + 32));
    proto::EffigyChallengeV2ChooseSkillRsp::set_challenge_mode_skill_no(rsp_0, *(_DWORD *)(v3 + 48));
    if ( !EffigyChallengeV2Activity::isLevelOpen(this, *(_DWORD *)(v3 + 32), 0) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "chooseEffigyChallengeSkill",
        528);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v29, (const char (*)[7])"level ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])off_25D2A220);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      level_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
                           &v12->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
                           *(_DWORD *)(v3 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( level_config_ptr )
      {
        if ( !common::tools::MiscUtils::isContains<unsigned int>(
                &level_config_ptr->challenge_skill_id_list,
                (const unsigned int *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_challenge_v2_activity.cpp",
            "chooseEffigyChallengeSkill",
            539);
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v29, (const char (*)[11])"level_id: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v3 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v16,
                  (const char (*)[28])", challenge mode skill no: ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])off_25D23E60);
          common::milog::MiLogStream::~MiLogStream(&v29);
          result = -1;
        }
        else
        {
          *(std::map<unsigned int,EffigyChallengeV2LevelData>::iterator *)(v3 + 64) = std::map<unsigned int,EffigyChallengeV2LevelData>::find(
                                                                                        &this->level_data_map_,
                                                                                        (const std::map<unsigned int,EffigyChallengeV2LevelData>::key_type *)(v3 + 32));
          __y._M_node = std::map<unsigned int,EffigyChallengeV2LevelData>::end(&this->level_data_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self *)(v3 + 64),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/effigy_challenge_v2_activity.cpp",
              "chooseEffigyChallengeSkill",
              546);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    &v29,
                    (const char (*)[11])"level_id: ");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v20,
              (const char (*)[24])" not in level_data_map_");
            common::milog::MiLogStream::~MiLogStream(&v29);
            result = -1;
          }
          else
          {
            v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> > *const)(v3 + 64));
            cur_level_data = &v21->second;
            v22 = *(_DWORD *)(v3 + 48);
            p_challenge_mode_last_choose_skill_no = &v21->second.challenge_mode_last_choose_skill_no;
            if ( *(_BYTE *)(((unsigned __int64)p_challenge_mode_last_choose_skill_no >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_challenge_mode_last_choose_skill_no & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_challenge_mode_last_choose_skill_no >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_challenge_mode_last_choose_skill_no);
            }
            cur_level_data->challenge_mode_last_choose_skill_no = v22;
            BaseActivity::notifyClientData(this, 0);
            result = 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "chooseEffigyChallengeSkill",
          534);
        v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v29, (const char (*)[10])"level id ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v14, (const char (*)[46])off_25D2A180);
        common::milog::MiLogStream::~MiLogStream(&v29);
        result = 5;
      }
    }
  }
  if ( v30 == (char *)v3 )
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

// Line 557: range 00000000165DF192-00000000165DF573
__int64 __fastcall EffigyChallengeV2Activity::checkEnterDungeon(
        EffigyChallengeV2Activity *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  EffigyChallengeV2Activity *v5; // rdx
  unsigned __int64 v6; // rax
  char v7; // al
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *is_exist; // [rsp+18h] [rbp-A8h]
  const unsigned int *level_id; // [rsp+20h] [rbp-A0h]
  std::pair<bool,unsigned int> __in; // [rsp+28h] [rbp-98h] BYREF
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-80h] BYREF
  char v19[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 dungeon_id:556";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Activity::checkEnterDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_10;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(EffigyChallengeV2Activity *))v6)(v5) )
LABEL_10:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    __in = ActivityEffigyChallengeV2ExcelConfigMgr::getLevelIdAccordingToDungeonId(
             &v9->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
             *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v17);
    is_exist = std::get<0ul,bool,unsigned int>(&__in);
    level_id = std::get<1ul,bool,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_exist);
    }
    if ( !*is_exist )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "checkEnterDungeon",
        566);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v18, (const char (*)[12])"dungeon id ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v11, (const char (*)[40])off_25D2A580);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !EffigyChallengeV2Activity::isLevelOpen(this, *level_id, 0) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "checkEnterDungeon",
          572);
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v18, (const char (*)[10])"level id ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, level_id);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])off_25D2A220);
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        result = 0LL;
      }
    }
  }
  if ( v19 == (char *)v2 )
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

// Line 579: range 00000000165DF574-00000000165DF894
void __cdecl EffigyChallengeV2Activity::registerObserver(EffigyChallengeV2Activity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *cb_ptr; // [rsp+10h] [rbp-C0h]
  PlayerEventComp *EventComp; // [rsp+20h] [rbp-B0h]
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:580 64 16 12 this_wtr:581";
  *(_QWORD *)(v1 + 16) = EffigyChallengeV2Activity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<EffigyChallengeV2Activity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<EffigyChallengeV2Activity>::weak_ptr<EffigyChallengeV2Activity,void>(
    (std::weak_ptr<EffigyChallengeV2Activity> *const)(v1 + 64),
    (const std::shared_ptr<EffigyChallengeV2Activity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<EffigyChallengeV2Activity>::weak_ptr(
    (std::weak_ptr<EffigyChallengeV2Activity> *const)&v6,
    (const std::weak_ptr<EffigyChallengeV2Activity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<EffigyChallengeV2Activity,GalleryEffigyChallengeV2SettleEvent>(
    EventComp,
    (std::weak_ptr<EffigyChallengeV2Activity> *)&v6,
    (void (*)(EffigyChallengeV2Activity *, const GalleryEffigyChallengeV2SettleEvent *))EffigyChallengeV2Activity::onGallerySettleEvent,
    0LL);
  std::weak_ptr<EffigyChallengeV2Activity>::~weak_ptr((std::weak_ptr<EffigyChallengeV2Activity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<EffigyChallengeV2Activity>::weak_ptr(
    (std::weak_ptr<EffigyChallengeV2Activity> *const)&v6,
    (const std::weak_ptr<EffigyChallengeV2Activity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<EffigyChallengeV2Activity,PostEnterSceneEvent>(
    cb_ptr,
    (std::weak_ptr<EffigyChallengeV2Activity> *)&v6,
    (void (*)(EffigyChallengeV2Activity *, const PostEnterSceneEvent *))EffigyChallengeV2Activity::onPostEnterSceneEvent,
    0LL);
  std::weak_ptr<EffigyChallengeV2Activity>::~weak_ptr((std::weak_ptr<EffigyChallengeV2Activity> *const)&v6);
  std::weak_ptr<EffigyChallengeV2Activity>::~weak_ptr((std::weak_ptr<EffigyChallengeV2Activity> *const)(v1 + 64));
  std::shared_ptr<EffigyChallengeV2Activity>::~shared_ptr((std::shared_ptr<EffigyChallengeV2Activity> *const)(v1 + 32));
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

// Line 587: range 00000000165DF896-00000000165DF99A
void __cdecl EffigyChallengeV2Activity::unregisterObserver(EffigyChallengeV2Activity *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    _ = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(obs_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 600: range 00000000165DF99C-00000000165E0085
void __cdecl EffigyChallengeV2Activity::onGallerySettleEvent(
        EffigyChallengeV2Activity *const this,
        const GalleryEffigyChallengeV2SettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  ActivityEffigyChallengeV2ExcelConfigMgr *p_activity_effigy_challenge_v2_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerEventComp *EventComp; // r14
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v16; // rax
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *is_exist; // [rsp+10h] [rbp-130h]
  uint32_t *level_id; // [rsp+18h] [rbp-128h]
  const data::EffigyChallengeV2ExcelConfig *level_config_ptr; // [rsp+20h] [rbp-120h]
  std::pair<bool,unsigned int> __in; // [rsp+28h] [rbp-118h] BYREF
  std::shared_ptr<EffigyChallengeV2FinishRoomEvent> __r; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 18 cur_dungeon_id:608 48 16 19 cur_dungeon_ptr:602 80 48 15 context_opt:624";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Activity::onGallerySettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 48));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_challenge_v2_activity.cpp",
      "onGallerySettleEvent",
      605);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v23, (const char (*)[27])off_25D2ABE0);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    *(_DWORD *)(v2 + 32) = DungeonScene::getDungeonId(v5);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    __in = ActivityEffigyChallengeV2ExcelConfigMgr::getLevelIdAccordingToDungeonId(
             &v6->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
             *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v22);
    is_exist = std::get<0ul,bool,unsigned int>(&__in);
    level_id = std::get<1ul,bool,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_exist);
    }
    if ( !*is_exist )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "onGallerySettleEvent",
        614);
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v23, (const char (*)[12])"dungeon id ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])off_25D2A580);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      p_activity_effigy_challenge_v2_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
                           p_activity_effigy_challenge_v2_config_mgr,
                           *level_id);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( level_config_ptr )
      {
        v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        DungeonScene::getDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
          (std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *)(v2 + 80),
          v12);
        if ( !std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::has_value((const std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_challenge_v2_activity.cpp",
            "onGallerySettleEvent",
            627);
          v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v23, (const char (*)[13])off_25D2AC20);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v14,
            (const char (*)[27])" does not have context opt");
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EventComp = Player::getEventComp(this->player_);
          v16 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 80));
          common::tools::perf::make_shared<EffigyChallengeV2FinishRoomEvent,unsigned int const&,unsigned int &>(
            (const unsigned int *)&__r,
            &event->gallery_id,
            &v16->challenge_mode_difficulty,
            &event->gallery_id);
          std::shared_ptr<BaseEvent>::shared_ptr<EffigyChallengeV2FinishRoomEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&v22,
            &__r);
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v22);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v22);
          std::shared_ptr<EffigyChallengeV2FinishRoomEvent>::~shared_ptr(&__r);
        }
        std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::~optional((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 80));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "onGallerySettleEvent",
          620);
        v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v23,
                (const char (*)[30])"[EffigyChallengeV2] level id ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, level_id);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])" does not exist");
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 48));
  if ( v24 == (char *)v2 )
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

// Line 635: range 00000000165E0086-00000000165E02BF
void __cdecl EffigyChallengeV2Activity::onPostEnterSceneEvent(
        EffigyChallengeV2Activity *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::shared_ptr<DungeonScene> p_dungeon_scene_ptr; // [rsp+10h] [rbp-A0h] BYREF
  char v6[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 17 cur_scene_ptr:636 64 16 19 cur_dungeon_ptr:641";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Activity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64));
    if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
    {
      std::shared_ptr<DungeonScene>::shared_ptr(&p_dungeon_scene_ptr, (const std::shared_ptr<DungeonScene> *)(v2 + 64));
      EffigyChallengeV2Activity::notifyActivityDungeonInfo(this, &p_dungeon_scene_ptr);
      std::shared_ptr<DungeonScene>::~shared_ptr(&p_dungeon_scene_ptr);
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 650: range 00000000165E02C0-00000000165E06E8
__int64 __fastcall EffigyChallengeV2Activity::openEffigyChallengeLevel(
        EffigyChallengeV2Activity *const this,
        uint32_t level_id,
        uint32_t challenge_mode_difficulty)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  EffigyChallengeV2LevelData *level_data; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 level_id:649 64 8 19 level_data_iter:656";
  *(_QWORD *)(v3 + 16) = EffigyChallengeV2Activity::openEffigyChallengeLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  v7 = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
         &v6->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
         *(_DWORD *)(v3 + 48)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_challenge_v2_activity.cpp",
      "openEffigyChallengeLevel",
      653);
    v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v18,
           (const char (*)[30])"[EffigyChallengeV2] level id ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" does not exist");
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<unsigned int,EffigyChallengeV2LevelData>::iterator *)(v3 + 64) = std::map<unsigned int,EffigyChallengeV2LevelData>::find(
                                                                                  &this->level_data_map_,
                                                                                  (const std::map<unsigned int,EffigyChallengeV2LevelData>::key_type *)(v3 + 48));
    __y._M_node = std::map<unsigned int,EffigyChallengeV2LevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "openEffigyChallengeLevel",
        659);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v18, (const char (*)[11])"level_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v12,
        (const char (*)[24])" not in level_data_map_");
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> > *const)(v3 + 64))->second;
      v13 = *(_DWORD *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(level_data);
      }
      level_data->level_id = v13;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->is_level_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)level_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_level_open >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store1(&level_data->is_level_open);
      }
      level_data->is_level_open = 1;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_difficulty_open >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_difficulty_open >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( challenge_mode_difficulty > level_data->challenge_mode_difficulty_open )
        level_data->challenge_mode_difficulty_open = challenge_mode_difficulty;
      result = 0LL;
    }
  }
  if ( v19 == (char *)v3 )
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

// Line 673: range 00000000165E06EA-00000000165E090B
__int64 __fastcall EffigyChallengeV2Activity::isLevelOpen(
        const EffigyChallengeV2Activity *const this,
        uint32_t level_id,
        uint32_t challenge_mode_difficulty)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::pointer v7; // rax
  bool *p_is_level_open; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  const EffigyChallengeV2LevelData *level_data; // [rsp+18h] [rbp-88h]
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 level_id:672 64 8 8 iter:674";
  *(_QWORD *)(v3 + 16) = EffigyChallengeV2Activity::isLevelOpen;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = level_id;
  *(std::map<unsigned int,EffigyChallengeV2LevelData>::const_iterator *)(v3 + 64) = std::map<unsigned int,EffigyChallengeV2LevelData>::find(
                                                                                      &this->level_data_map_,
                                                                                      (const std::map<unsigned int,EffigyChallengeV2LevelData>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,EffigyChallengeV2LevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> > *const)(v3 + 64));
    level_data = &v7->second;
    p_is_level_open = &v7->second.is_level_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_level_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_level_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_level_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_level_open);
    }
    if ( !level_data->is_level_open )
    {
      result = 0LL;
    }
    else
    {
      if ( !challenge_mode_difficulty )
        goto LABEL_15;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_difficulty_open >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_difficulty_open >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( challenge_mode_difficulty > level_data->challenge_mode_difficulty_open )
        result = 0LL;
      else
LABEL_15:
        result = 1LL;
    }
  }
  if ( v12 == (char *)v3 )
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

// Line 692: range 00000000165E090C-00000000165E1399
void __cdecl EffigyChallengeV2Activity::onDungeonSettle(
        EffigyChallengeV2Activity *const this,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t PlayerUid; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v12; // rax
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v13; // rsi
  ActivityEffigyChallengeV2ExcelConfigMgr *p_activity_effigy_challenge_v2_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::pointer v19; // rax
  char v20; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  bool v22; // r15
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  uint32_t challenge_mode_difficulty; // [rsp+20h] [rbp-140h]
  uint32_t new_cost_time; // [rsp+24h] [rbp-13Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self __y; // [rsp+28h] [rbp-138h] BYREF
  proto::EffigyChallengeV2SettleInfo *settle_info; // [rsp+30h] [rbp-130h]
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *is_exist; // [rsp+38h] [rbp-128h]
  std::tuple_element<1,std::pair<bool,unsigned int> >::type *level_id; // [rsp+40h] [rbp-120h]
  const data::EffigyChallengeV2ExcelConfig *level_config_ptr; // [rsp+48h] [rbp-118h]
  EffigyChallengeV2LevelData *cur_level_data; // [rsp+50h] [rbp-110h]
  std::pair<bool,unsigned int> __in; // [rsp+58h] [rbp-108h] BYREF
  std::shared_ptr<Config> v37; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v38; // [rsp+70h] [rbp-F0h] BYREF
  char v39[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 18 cur_dungeon_id:701 48 8 19 level_data_iter:730 80 48 15 context_opt:709";
  *(_QWORD *)(v3 + 16) = EffigyChallengeV2Activity::onDungeonSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  settle_info = proto::DungeonSettleNotify::mutable_effigy_challenge_v2_settle_info(notify);
  proto::EffigyChallengeV2SettleInfo::set_is_challenge_highest_difficulty(settle_info, 0);
  proto::EffigyChallengeV2SettleInfo::set_is_new_record_time(settle_info, 0);
  proto::EffigyChallengeV2SettleInfo::set_record_time(settle_info, 0);
  proto::EffigyChallengeV2SettleInfo::set_first_time_finish_difficulty(settle_info, 0);
  PlayerUid = DungeonScene::getCreatePlayerUid(dungeon_scene);
  proto::EffigyChallengeV2SettleInfo::set_create_dungeon_player_uid(settle_info, PlayerUid);
  *(_DWORD *)(v3 + 32) = DungeonScene::getDungeonId(dungeon_scene);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  __in = ActivityEffigyChallengeV2ExcelConfigMgr::getLevelIdAccordingToDungeonId(
           &v7->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
           *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v37);
  is_exist = std::get<0ul,bool,unsigned int>(&__in);
  level_id = std::get<1ul,bool,unsigned int>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(is_exist);
  }
  if ( !*is_exist )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_challenge_v2_activity.cpp",
      "onDungeonSettle",
      705);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v38, (const char (*)[12])"dungeon id ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v9, (const char (*)[40])off_25D2A580);
    common::milog::MiLogStream::~MiLogStream(&v38);
  }
  else
  {
    DungeonScene::getDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
      (std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *)(v3 + 80),
      dungeon_scene);
    if ( !std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::has_value((const std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "onDungeonSettle",
        712);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v38, (const char (*)[13])off_25D2AC20);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v11,
        (const char (*)[27])" does not have context opt");
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    else
    {
      v12 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      challenge_mode_difficulty = v12->challenge_mode_difficulty;
      proto::EffigyChallengeV2SettleInfo::set_challenge_mode_difficulty(settle_info, v12->challenge_mode_difficulty);
      v13 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator*((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 80));
      EffigyChallengeV2Activity::logDungeonSettle(this, v13, dungeon_scene, notify);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v37);
      p_activity_effigy_challenge_v2_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
                           p_activity_effigy_challenge_v2_config_mgr,
                           *level_id);
      std::shared_ptr<Config>::~shared_ptr(&v37);
      if ( level_config_ptr )
      {
        if ( proto::DungeonSettleNotify::is_success(notify) )
        {
          *(std::map<unsigned int,EffigyChallengeV2LevelData>::iterator *)(v3 + 48) = std::map<unsigned int,EffigyChallengeV2LevelData>::find(
                                                                                        &this->level_data_map_,
                                                                                        level_id);
          __y._M_node = std::map<unsigned int,EffigyChallengeV2LevelData>::end(&this->level_data_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self *)(v3 + 48),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/effigy_challenge_v2_activity.cpp",
              "onDungeonSettle",
              733);
            v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    &v38,
                    (const char (*)[11])"level_id: ");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, level_id);
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v18,
              (const char (*)[24])" not in level_data_map_");
            common::milog::MiLogStream::~MiLogStream(&v38);
          }
          else
          {
            v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> > *const)(v3 + 48));
            cur_level_data = &v19->second;
            if ( *(_BYTE *)(((unsigned __int64)&v19->second.challenge_mode_difficulty_pass >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v19 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->second.challenge_mode_difficulty_pass >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( challenge_mode_difficulty > cur_level_data->challenge_mode_difficulty_pass )
            {
              cur_level_data->challenge_mode_difficulty_pass = challenge_mode_difficulty;
              proto::EffigyChallengeV2SettleInfo::set_first_time_finish_difficulty(
                settle_info,
                challenge_mode_difficulty);
            }
            v20 = 0;
            if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->challenge_dungeon_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&level_config_ptr->challenge_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            v22 = 1;
            if ( level_config_ptr->challenge_dungeon_id == *(_DWORD *)(v3 + 32) )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v37);
              v20 = 1;
              v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
              if ( challenge_mode_difficulty == ActivityEffigyChallengeV2ExcelConfigMgr::getChallengeHighestDifficulty(&v21->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr) )
                v22 = 0;
            }
            if ( v20 )
              std::shared_ptr<Config>::~shared_ptr(&v37);
            if ( !v22 )
            {
              proto::EffigyChallengeV2SettleInfo::set_is_challenge_highest_difficulty(settle_info, 1);
              v23 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 80));
              if ( *(_BYTE *)(((unsigned __int64)&v23->challenge_mode_cost_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v23->challenge_mode_cost_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              new_cost_time = v23->challenge_mode_cost_time;
              proto::EffigyChallengeV2SettleInfo::set_record_time(settle_info, new_cost_time);
              if ( new_cost_time )
              {
                if ( *(_BYTE *)(((unsigned __int64)&cur_level_data->best_cost_time >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)cur_level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cur_level_data->best_cost_time >> 3)
                                                                               + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( !cur_level_data->best_cost_time || new_cost_time < cur_level_data->best_cost_time )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&cur_level_data->best_cost_time >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)cur_level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cur_level_data->best_cost_time >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_store4(&cur_level_data->best_cost_time);
                  }
                  cur_level_data->best_cost_time = new_cost_time;
                  proto::EffigyChallengeV2SettleInfo::set_is_new_record_time(settle_info, 1);
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/effigy_challenge_v2_activity.cpp",
                  "onDungeonSettle",
                  754);
                v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        &v38,
                        (const char (*)[24])"challenge mode dungeon ");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v25,
                  (const char (*)[25])" settle with cost time 0");
                common::milog::MiLogStream::~MiLogStream(&v38);
              }
            }
            BaseActivity::notifyClientData(this, 0);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_challenge_v2_activity.cpp",
          "onDungeonSettle",
          722);
        v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v38,
                (const char (*)[30])"[EffigyChallengeV2] level id ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, level_id);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])" does not exist");
        common::milog::MiLogStream::~MiLogStream(&v38);
      }
    }
    std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::~optional((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v3 + 80));
  }
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 768: range 00000000165E139A-00000000165E1827
void __cdecl EffigyChallengeV2Activity::logDungeonSettle(
        const EffigyChallengeV2Activity *const this,
        const EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *dungeon_context,
        DungeonScene *dungeon_scene,
        const proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  const std::string *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  google::protobuf::uint32 v14; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *player; // r14
  std::string notifya; // [rsp+0h] [rbp-120h]
  const proto::DungeonSettleNotify *notifyb; // [rsp+0h] [rbp-120h]
  DungeonScene *const dungeon_scenea; // [rsp+8h] [rbp-118h]
  const EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *dungeon_contexta; // [rsp+10h] [rbp-110h]
  const EffigyChallengeV2Activity *thisa; // [rsp+18h] [rbp-108h]
  std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog> *__for_range; // [rsp+38h] [rbp-E8h]
  const proto_log::EffigyChallengeV2GallerySettleInfoLog *gallery_settle_info; // [rsp+40h] [rbp-E0h]
  proto_log::EffigyChallengeV2GallerySettleInfoLog *new_gallery_settle_info; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-C0h] BYREF
  std::string v30; // [rsp+70h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+90h] [rbp-90h] BYREF

  *(&notifya._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  notifya._anon_0._M_allocated_capacity = (std::string::size_type)dungeon_context;
  notifya._M_string_length = (std::string::size_type)dungeon_scene;
  notifya._M_dataplus._M_p = (std::string::pointer)notify;
  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 10 holder:769 64 16 11 log_ptr:770";
  *(_QWORD *)(v4 + 16) = EffigyChallengeV2Activity::logDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v30, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xE89u, notifya);
  std::string::~string(&v30);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  v9 = DungeonScene::getTransaction[abi:cxx11](dungeon_scenea);
  proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle::set_transaction_no(v8, v9);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  DungeonId = DungeonScene::getDungeonId(dungeon_scenea);
  proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle::set_dungeon_id(v10, DungeonId);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)dungeon_contexta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)dungeon_contexta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle::set_difficulty_id(
    v12,
    dungeon_contexta->challenge_mode_difficulty);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  v14 = proto::DungeonSettleNotify::result(notifyb);
  proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle::set_result(v13, v14);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_contexta->challenge_mode_skill_no >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dungeon_contexta + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_contexta->challenge_mode_skill_no >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle::set_selected_skill(
    v15,
    dungeon_contexta->challenge_mode_skill_no);
  __for_range = &dungeon_contexta->gallery_settle_info_vec;
  __for_begin._M_current = std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::begin(&dungeon_contexta->gallery_settle_info_vec)._M_current;
  __for_end._M_current = std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::end(&dungeon_contexta->gallery_settle_info_vec)._M_current;
  while ( __gnu_cxx::operator!=<proto_log::EffigyChallengeV2GallerySettleInfoLog const*,std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>>(
            &__for_begin,
            &__for_end) )
  {
    gallery_settle_info = __gnu_cxx::__normal_iterator<proto_log::EffigyChallengeV2GallerySettleInfoLog const*,std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>>::operator*(&__for_begin);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    new_gallery_settle_info = proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle::add_gallery_settle_info_list(v16);
    proto_log::EffigyChallengeV2GallerySettleInfoLog::operator=(new_gallery_settle_info, gallery_settle_info);
    __gnu_cxx::__normal_iterator<proto_log::EffigyChallengeV2GallerySettleInfoLog const*,std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2DungeonSettle> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v31 == (char *)v4 )
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

// Line 785: range 00000000165E1828-00000000165E1866
int32_t __cdecl EffigyChallengeV2Activity::openEffigyChallengeLevelByGm(
        EffigyChallengeV2Activity *const this,
        uint32_t level_id,
        uint32_t challenge_mode_difficulty)
{
  int ret; // [rsp+1Ch] [rbp-4h]

  ret = EffigyChallengeV2Activity::openEffigyChallengeLevel(this, level_id, challenge_mode_difficulty);
  BaseActivity::notifyClientData(this, 0);
  return ret;
};

// Line 792: range 00000000165E1868-00000000165E1D44
__int64 __fastcall EffigyChallengeV2Activity::setEffigyChallengeLevelByGm(
        EffigyChallengeV2Activity *const this,
        uint32_t level_id,
        uint32_t challenge_mode_difficulty)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool v14; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  EffigyChallengeV2LevelData *level_data; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 level_id:791 64 8 19 level_data_iter:798";
  *(_QWORD *)(v3 + 16) = EffigyChallengeV2Activity::setEffigyChallengeLevelByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  v7 = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
         &v6->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
         *(_DWORD *)(v3 + 48)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_challenge_v2_activity.cpp",
      "setEffigyChallengeLevelByGm",
      795);
    v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v19,
           (const char (*)[30])"[EffigyChallengeV2] level id ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" does not exist");
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<unsigned int,EffigyChallengeV2LevelData>::iterator *)(v3 + 64) = std::map<unsigned int,EffigyChallengeV2LevelData>::find(
                                                                                  &this->level_data_map_,
                                                                                  (const std::map<unsigned int,EffigyChallengeV2LevelData>::key_type *)(v3 + 48));
    __y._M_node = std::map<unsigned int,EffigyChallengeV2LevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> >::_Self *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_challenge_v2_activity.cpp",
        "setEffigyChallengeLevelByGm",
        801);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])"level_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v12,
        (const char (*)[24])" not in level_data_map_");
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyChallengeV2LevelData> > *const)(v3 + 64))->second;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      v14 = challenge_mode_difficulty <= ActivityEffigyChallengeV2ExcelConfigMgr::getChallengeHighestDifficulty(&v13->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v18);
      if ( v14 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_data->best_cost_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->best_cost_time >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&level_data->best_cost_time);
        }
        level_data->best_cost_time = 0;
        if ( *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_difficulty_open >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_difficulty_open >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_store4(&level_data->challenge_mode_difficulty_open);
        }
        level_data->challenge_mode_difficulty_open = challenge_mode_difficulty;
        if ( *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_last_choose_skill_no >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_last_choose_skill_no >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_store4(&level_data->challenge_mode_last_choose_skill_no);
        }
        level_data->challenge_mode_last_choose_skill_no = 0;
        if ( *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_difficulty_pass >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->challenge_mode_difficulty_pass >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_store4(&level_data->challenge_mode_difficulty_pass);
        }
        level_data->challenge_mode_difficulty_pass = 0;
        BaseActivity::notifyClientData(this, 0);
        result = 0LL;
      }
      else
      {
        result = 0xFFFFFFFFLL;
      }
    }
  }
  if ( v20 == (char *)v3 )
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

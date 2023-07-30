// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/aster_activity.cpp

// Line 33: range 000000001791D61C-000000001791D71C
int32_t __cdecl AsterLittleInfo::fromBin(AsterLittleInfo *const this, const proto::AsterLittleBin *proto)
{
  bool is_open; // cl
  uint32_t v3; // ecx
  google::protobuf::uint32 v4; // edi

  is_open = proto::AsterLittleBin::is_open(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_open = is_open;
  v3 = proto::AsterLittleBin::stage_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_id);
  }
  this->stage_id = v3;
  v4 = proto::AsterLittleBin::stage_state(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_state >> 3) + 0x7FFF8000) )
  {
    v4 = (_DWORD)this + 8;
    __asan_report_store4(&this->stage_state);
  }
  this->stage_state = v4;
  return 0;
};

// Line 42: range 000000001791D71E-000000001791D822
int32_t __cdecl AsterLittleInfo::toBin(const AsterLittleInfo *const this, proto::AsterLittleBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  proto::AsterLittleBin::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AsterLittleBin::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AsterLittleBin::set_stage_state(proto, this->stage_state);
  return 0;
};

// Line 51: range 000000001791D824-000000001791D9A7
void __cdecl AsterLittleInfo::toClient(
        const AsterLittleInfo *const this,
        const AsterActivity *aster_activity,
        proto::AsterLittleDetailInfo *proto)
{
  uint32_t AsterPhaseBeginTime; // edx
  google::protobuf::uint32 AsterLittleStageBeginTime; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  proto::AsterLittleDetailInfo::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AsterLittleDetailInfo::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AsterLittleDetailInfo::set_stage_state(proto, this->stage_state);
  AsterPhaseBeginTime = AsterActivity::getAsterPhaseBeginTime(aster_activity, 1u);
  proto::AsterLittleDetailInfo::set_begin_time(proto, AsterPhaseBeginTime);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  AsterLittleStageBeginTime = AsterActivity::getAsterLittleStageBeginTime(aster_activity, this->stage_id);
  proto::AsterLittleDetailInfo::set_stage_begin_time(proto, AsterLittleStageBeginTime);
};

// Line 60: range 000000001791D9A8-000000001791DA55
void __cdecl AsterMidCampBattleInfo::clear(AsterMidCampBattleInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->camp_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_id);
  }
  this->difficulty_id = 0;
  std::__weak_ptr<SealEnergyChargeBattle,(__gnu_cxx::_Lock_policy)2>::reset(&this->battle_wtr);
  std::string::clear(&this->transaction_no);
};

// Line 68: range 000000001791DA56-000000001791DD02
int32_t __cdecl AsterMidInfo::fromBin(AsterMidInfo *const this, const proto::AsterMidBin *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool is_open; // dl
  uint32_t refreshed; // ecx
  uint32_t v7; // edx
  uint32_t v8; // edx
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 camp_id:72";
  *(_QWORD *)(v2 + 16) = AsterMidInfo::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  is_open = proto::AsterMidBin::is_open(proto);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_open = is_open;
  refreshed = proto::AsterMidBin::refresh_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id);
  }
  this->refresh_id = refreshed;
  v7 = proto::AsterMidBin::refresh_time(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_time);
  }
  this->refresh_time = v7;
  __for_range = proto::AsterMidBin::finished_camp_list(proto);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(&this->finished_camp_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  v8 = proto::AsterMidBin::collect_count(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collect_count);
  }
  this->collect_count = v8;
  result = 0;
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

// Line 82: range 000000001791DD04-000000001791DEF1
int32_t __cdecl AsterMidInfo::toBin(const AsterMidInfo *const this, proto::AsterMidBin *proto)
{
  google::protobuf::uint32 *v2; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  proto::AsterMidBin::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AsterMidBin::set_refresh_id(proto, this->refresh_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::AsterMidBin::set_refresh_time(proto, this->refresh_time);
  __for_range = &this->finished_camp_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->finished_camp_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->finished_camp_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AsterMidBin::add_finished_camp_list(proto, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::AsterMidBin::set_collect_count(proto, this->collect_count);
  return 0;
};

// Line 96: range 000000001791DEF2-000000001791DFB8
void __cdecl AsterMidInfo::toClient(
        const AsterMidInfo *const this,
        const AsterActivity *aster_activity,
        proto::AsterMidDetailInfo *proto)
{
  uint32_t AsterPhaseBeginTime; // edx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  proto::AsterMidDetailInfo::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::AsterMidDetailInfo::set_collect_count(proto, this->collect_count);
  AsterPhaseBeginTime = AsterActivity::getAsterPhaseBeginTime(aster_activity, 2u);
  proto::AsterMidDetailInfo::set_begin_time(proto, AsterPhaseBeginTime);
};

// Line 103: range 000000001791DFBA-000000001791E019
int32_t __cdecl AsterLargeInfo::fromBin(AsterLargeInfo *const this, const proto::AsterLargeBin *proto)
{
  bool is_open; // cl

  is_open = proto::AsterLargeBin::is_open(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_open = is_open;
  return 0;
};

// Line 110: range 000000001791E01A-000000001791E07C
int32_t __cdecl AsterLargeInfo::toBin(const AsterLargeInfo *const this, proto::AsterLargeBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  proto::AsterLargeBin::set_is_open(proto, this->is_open);
  return 0;
};

// Line 117: range 000000001791E07E-000000001791E101
void __cdecl AsterLargeInfo::toClient(
        const AsterLargeInfo *const this,
        const AsterActivity *aster_activity,
        proto::AsterLargeDetailInfo *proto)
{
  uint32_t AsterPhaseBeginTime; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  proto::AsterLargeDetailInfo::set_is_open(proto, this->is_open);
  AsterPhaseBeginTime = AsterActivity::getAsterPhaseBeginTime(aster_activity, 3u);
  proto::AsterLargeDetailInfo::set_begin_time(proto, AsterPhaseBeginTime);
};

// Line 123: range 000000001791E102-000000001791E2DE
int32_t __cdecl AsterActivity::fromScheduleBin(AsterActivity *const this, const proto::ActivityScheduleBin *bin)
{
  const proto::AsterLittleBin *v2; // rax
  const proto::AsterMidBin *v3; // rax
  const proto::AsterLargeBin *v4; // rax
  uint32_t v5; // ecx
  uint32_t v6; // edx
  bool is_special_reward_taken; // cl
  bool is_content_closed; // cl
  const proto::AsterScheduleBin *aster_bin; // [rsp+18h] [rbp-18h]

  aster_bin = proto::ActivityScheduleBin::aster_bin(bin);
  v2 = proto::AsterScheduleBin::aster_little(aster_bin);
  AsterLittleInfo::fromBin(&this->aster_little_, v2);
  v3 = proto::AsterScheduleBin::aster_mid(aster_bin);
  AsterMidInfo::fromBin(&this->aster_mid_, v3);
  v4 = proto::AsterScheduleBin::aster_large(aster_bin);
  AsterLargeInfo::fromBin(&this->aster_large_, v4);
  v5 = proto::AsterScheduleBin::aster_credit(aster_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->aster_credit_);
  }
  this->aster_credit_ = v5;
  v6 = proto::AsterScheduleBin::aster_token(aster_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aster_token_);
  }
  this->aster_token_ = v6;
  is_special_reward_taken = proto::AsterScheduleBin::is_special_reward_taken(aster_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_special_reward_taken_);
  }
  this->is_special_reward_taken_ = is_special_reward_taken;
  is_content_closed = proto::AsterScheduleBin::is_content_closed(aster_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = is_content_closed;
  return 0;
};

// Line 137: range 000000001791E2E0-000000001791E4C0
int32_t __cdecl AsterActivity::toScheduleBin(const AsterActivity *const this, proto::ActivityScheduleBin *bin)
{
  proto::AsterLittleBin *v2; // rax
  proto::AsterMidBin *v3; // rax
  proto::AsterLargeBin *v4; // rax
  proto::AsterScheduleBin *aster_bin; // [rsp+18h] [rbp-18h]

  aster_bin = proto::ActivityScheduleBin::mutable_aster_bin(bin);
  v2 = proto::AsterScheduleBin::mutable_aster_little(aster_bin);
  AsterLittleInfo::toBin(&this->aster_little_, v2);
  v3 = proto::AsterScheduleBin::mutable_aster_mid(aster_bin);
  AsterMidInfo::toBin(&this->aster_mid_, v3);
  v4 = proto::AsterScheduleBin::mutable_aster_large(aster_bin);
  AsterLargeInfo::toBin(&this->aster_large_, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AsterScheduleBin::set_aster_credit(aster_bin, this->aster_credit_);
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::AsterScheduleBin::set_aster_token(aster_bin, this->aster_token_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_special_reward_taken_);
  }
  proto::AsterScheduleBin::set_is_special_reward_taken(aster_bin, this->is_special_reward_taken_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  proto::AsterScheduleBin::set_is_content_closed(aster_bin, this->is_content_closed_);
  return 0;
};

// Line 151: range 000000001791E4C2-000000001791E7B0
int32_t __cdecl AsterActivity::toClient(AsterActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::AsterLittleDetailInfo *v4; // rdx
  proto::AsterMidDetailInfo *v5; // rdx
  proto::AsterLargeDetailInfo *v6; // rdx
  uint32_t AsterContentCloseTime; // eax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::AsterActivityDetailInfo *aster_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "toClient",
      154);
    v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v10,
           (const char (*)[45])"[ASTER] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    aster_info = proto::ActivityInfo::mutable_aster_info(activity_info);
    v4 = proto::AsterActivityDetailInfo::mutable_aster_little(aster_info);
    AsterLittleInfo::toClient(&this->aster_little_, this, v4);
    v5 = proto::AsterActivityDetailInfo::mutable_aster_mid(aster_info);
    AsterMidInfo::toClient(&this->aster_mid_, this, v5);
    v6 = proto::AsterActivityDetailInfo::mutable_aster_large(aster_info);
    AsterLargeInfo::toClient(&this->aster_large_, this, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AsterActivityDetailInfo::set_aster_credit(aster_info, this->aster_credit_);
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::AsterActivityDetailInfo::set_aster_token(aster_info, this->aster_token_);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_special_reward_taken_);
    }
    proto::AsterActivityDetailInfo::set_is_special_reward_taken(aster_info, this->is_special_reward_taken_);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_content_closed_);
    }
    proto::AsterActivityDetailInfo::set_is_content_closed(aster_info, this->is_content_closed_);
    AsterContentCloseTime = AsterActivity::getAsterContentCloseTime(this);
    proto::AsterActivityDetailInfo::set_content_close_time(aster_info, AsterContentCloseTime);
    return 0;
  }
};

// Line 172: range 000000001791E7B2-000000001791E86D
int32_t __cdecl AsterActivity::init(AsterActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ || BaseActivity::isSettled((const BaseActivity *const)this) )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( v1 )
    return 0;
  if ( AsterActivity::isPhaseOpen(this, 2u) )
    AsterActivity::regAsterMidObserver(this);
  return 0;
};

// Line 188: range 000000001791E86E-000000001791EA93
void __cdecl AsterActivity::onLogin(AsterActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ || BaseActivity::isSettled((const BaseActivity *const)this) )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
  {
    AsterActivity::initAbilityGroup(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Player::isRelogin(this->player_) )
    {
      if ( AsterActivity::isPhaseOpen(this, 1u) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->aster_little_.stage_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( this->aster_little_.stage_state == ASTER_LITTLE_STAGE_UNSTARTED )
            AsterActivity::tryStartAsterLittleStage(this);
        }
      }
      if ( AsterActivity::isPhaseOpen(this, 2u) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->aster_mid_.refresh_id )
          AsterActivity::startAsterMidGroups(this, this->aster_mid_.refresh_id);
      }
      AsterActivity::addAsterWatchers(this);
    }
    BaseActivity::onLogin((BaseActivity *const)this);
  }
};

// Line 224: range 000000001791EA94-000000001791EAAE
void __cdecl AsterActivity::onStart(AsterActivity *const this)
{
  AsterActivity::initAbilityGroup(this);
};

// Line 229: range 000000001791EAB0-000000001791EAEE
void __cdecl AsterActivity::onSettle(AsterActivity *const this)
{
  AsterActivity::clearAbilityGroup(this);
  AsterActivity::closeAsterContent(this);
  BaseActivity::delWatchers((BaseActivity *const)this);
  AsterActivity::delAsterWatchers(this);
};

// Line 239: range 000000001791EAF0-000000001791ED47
void __cdecl AsterActivity::onClear(AsterActivity *const this)
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
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:248";
  *(_QWORD *)(v1 + 16) = AsterActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  AsterActivity::clearAsterLittle(this);
  AsterActivity::clearAsterMid(this);
  AsterActivity::clearAsterLarge(this);
  BaseActivity::delWatchers((BaseActivity *const)this);
  AsterActivity::delAsterWatchers(this);
  SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->aster_credit_ )
    AsterActivity::subAsterCredit(this, this->aster_credit_, (const SubItemReason *)(v1 + 32), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->aster_token_ )
    AsterActivity::subAsterToken(this, this->aster_token_, (const SubItemReason *)(v1 + 32), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_special_reward_taken_);
  }
  this->is_special_reward_taken_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = 0;
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

// Line 263: range 000000001791ED48-000000001791EDB9
bool __cdecl AsterActivity::checkCondIsMeet(AsterActivity *const this, const data::NewActivityCond *cond)
{
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type == NEW_ACTIVITY_COND_ASTER_MID_CAMP_REFRESHABLE )
    return AsterActivity::isAsterMidCampRefreshable(this);
  else
    return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
};

// Line 276: range 000000001791EDBA-000000001791F0CB
int32_t __cdecl AsterActivity::execAction(AsterActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r13
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 phase:287";
  *(_QWORD *)(v2 + 16) = AsterActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_OPEN_ASTER_PHASE )
  {
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "execAction",
        283);
      v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v14,
             (const char (*)[27])"[ASTER] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_262413A0);
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
      goto LABEL_16;
    }
    *(_DWORD *)(v2 + 32) = 0;
    v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v2 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "execAction",
        290);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v14,
             (const char (*)[18])"[ASTER] strToNum ");
      v10 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
      goto LABEL_16;
    }
    AsterActivity::onOpenPhase(this, *(_DWORD *)(v2 + 32));
  }
  else
  {
    if ( type != NEW_ACTIVITY_ACTION_CLOSE_ASTER_CONTENT )
    {
      result = BaseActivity::execAction((BaseActivity *const)this, action_exec);
      goto LABEL_16;
    }
    AsterActivity::closeAsterContent(this);
  }
  result = 0;
LABEL_16:
  if ( v15 == (char *)v2 )
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

// Line 309: range 000000001791F0CC-000000001791F67D
void __fastcall AsterActivity::onOpenPhase(AsterActivity *const this, uint32_t phase)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5; // al
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // eax
  common::milog::MiLogStream *v10; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 phase:308";
  *(_QWORD *)(v2 + 16) = AsterActivity::onOpenPhase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = phase;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
LABEL_8:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    if ( AsterActivity::isPhaseOpen(this, *(_DWORD *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "onOpenPhase",
        317);
      v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v12,
             (const char (*)[37])"[ASTER] phase is already open, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" ,phase: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v12);
      goto LABEL_31;
    }
    v9 = *(_DWORD *)(v2 + 32);
    if ( v9 == 3 )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/aster_activity.cpp",
        "onOpenPhase",
        341);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v12,
        (const char (*)[25])"[ASTER] open aster large");
      common::milog::MiLogStream::~MiLogStream(&v12);
      if ( *(char *)(((unsigned __int64)&this->aster_large_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->aster_large_);
      this->aster_large_.is_open = 1;
      AsterActivity::notifyAsterLargeInfo(this);
    }
    else
    {
      if ( v9 > 3 )
      {
LABEL_29:
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "onOpenPhase",
          348);
        v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v12,
                (const char (*)[23])"[ASTER] invalid phase ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v12);
        goto LABEL_31;
      }
      if ( v9 == 1 )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/aster_activity.cpp",
          "onOpenPhase",
          325);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v12,
          (const char (*)[26])"[ASTER] open aster little");
        common::milog::MiLogStream::~MiLogStream(&v12);
        if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&this->aster_little_);
        }
        this->aster_little_.is_open = 1;
        AsterActivity::acceptAsterLittleNextStage(this);
        AsterActivity::notifyAsterLittleInfo(this);
      }
      else
      {
        if ( v9 != 2 )
          goto LABEL_29;
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/aster_activity.cpp",
          "onOpenPhase",
          333);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v12,
          (const char (*)[23])"[ASTER] open aster mid");
        common::milog::MiLogStream::~MiLogStream(&v12);
        if ( *(char *)(((unsigned __int64)&this->aster_mid_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->aster_mid_);
        this->aster_mid_.is_open = 1;
        AsterActivity::regAsterMidObserver(this);
        AsterActivity::notifyAsterMidInfo(this);
      }
    }
    AsterActivity::addPhaseWatcher(this, *(_DWORD *)(v2 + 32));
  }
LABEL_31:
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 356: range 000000001791F67E-000000001791F801
bool __cdecl AsterActivity::isPhaseOpen(const AsterActivity *const this, uint32_t phase)
{
  char v2; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
LABEL_5:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
    return 0;
  if ( phase == 3 )
  {
    if ( *(char *)(((unsigned __int64)&this->aster_large_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->aster_large_);
    return this->aster_large_.is_open;
  }
  else
  {
    if ( phase > 3 )
      return 0;
    if ( phase == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->aster_little_);
      }
      return this->aster_little_.is_open;
    }
    else
    {
      if ( phase != 2 )
        return 0;
      if ( *(char *)(((unsigned __int64)&this->aster_mid_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->aster_mid_);
      return this->aster_mid_.is_open;
    }
  }
};

// Line 377: range 000000001791F802-000000001791F9F1
int32_t __cdecl AsterActivity::afterTakenWatcherReward(AsterActivity *const this, uint32_t watcher_id)
{
  char v2; // al
  ActivityAsterExcelConfigMgr *conf_mgr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_aster_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( ActivityAsterExcelConfigMgr::getPhaseByWatcher(conf_mgr, watcher_id) != 1
    || !AsterActivity::isPhaseOpen(this, 1u) )
  {
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->aster_little_.stage_state == ASTER_LITTLE_STAGE_STARTED )
    v2 = 1;
  else
LABEL_7:
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( AsterActivity::isAsterLittleStageAllWatcherFinished(this, this->aster_little_.stage_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->aster_little_.stage_state);
      }
      this->aster_little_.stage_state = ASTER_LITTLE_STAGE_FINISHED;
      if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( !ActivityAsterExcelConfigMgr::isAsterLittleLastStage(conf_mgr, this->aster_little_.stage_id) )
        AsterActivity::acceptAsterLittleNextStage(this);
      AsterActivity::notifyAsterLittleInfo(this);
    }
  }
  return 0;
};

// Line 400: range 000000001791F9F2-000000001791FA8D
bool __cdecl AsterActivity::isContainsWatcher(AsterActivity *const this, uint32_t watcher_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isContainsWatcher; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  isContainsWatcher = ActivityAsterExcelConfigMgr::isContainsWatcher(
                        &v2->design_config.txt_config_mgr.activity_aster_config_mgr,
                        watcher_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isContainsWatcher || BaseActivity::isContainsWatcher((BaseActivity *const)this, watcher_id);
};

// Line 410: range 000000001791FA8E-000000001791FBC7
int32_t __cdecl AsterActivity::fillWatcherProtoList(
        AsterActivity *const this,
        google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *proto_info_list)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->aster_little_);
  }
  if ( this->aster_little_.is_open )
    AsterActivity::fillPhaseWatcherProtoList(this, 1u, proto_info_list);
  if ( *(char *)(((unsigned __int64)&this->aster_mid_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->aster_mid_);
  if ( this->aster_mid_.is_open )
    AsterActivity::fillPhaseWatcherProtoList(this, 2u, proto_info_list);
  if ( *(char *)(((unsigned __int64)&this->aster_large_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->aster_large_);
  if ( this->aster_large_.is_open )
    AsterActivity::fillPhaseWatcherProtoList(this, 3u, proto_info_list);
  BaseActivity::fillWatcherProtoList((BaseActivity *const)this, proto_info_list);
  return 0;
};

// Line 433: range 000000001791FBC8-000000001792040B
void __cdecl AsterActivity::addPhaseWatcher(AsterActivity *const this, uint32_t phase)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t WatcherComp; // eax
  bool v16; // r14
  PlayerWatcherComp *v17; // rax
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned int val; // [rsp+1Ch] [rbp-114h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<BaseWatcher> __a; // [rsp+40h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 14 watcher_id:437 48 48 15 watcher_set:435";
  *(_QWORD *)(v2 + 16) = AsterActivity::addPhaseWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  ActivityAsterExcelConfigMgr::getPhaseWatcherSet(
    &v5->design_config.txt_config_mgr.activity_aster_config_mgr,
    phase,
    (std::set<unsigned int> *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v29);
  __for_range = (std::set<unsigned int> *)(v2 + 48);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 48))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 48))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v7->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( !watcher_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "addPhaseWatcher",
        442);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v30,
             (const char (*)[30])"[ASTER] findWatcherConfig id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_29:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v30);
      goto LABEL_30;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_watcher_id_set_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/aster_activity.cpp",
        "addPhaseWatcher",
        448);
      v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v30,
              (const char (*)[20])"[ASTER] watcher_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])" already finished");
      common::milog::MiLogStream::~MiLogStream(&v30);
      goto LABEL_30;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->taken_watcher_id_set_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/aster_activity.cpp",
        "addPhaseWatcher",
        454);
      v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v30,
              (const char (*)[20])"[ASTER] watcher_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v14,
              (const char (*)[20])" taken reward, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_29;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&__a, WatcherComp);
    v16 = std::operator!=<BaseWatcher>(0LL, &__a);
    std::shared_ptr<BaseWatcher>::~shared_ptr(&__a);
    if ( !v16 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = Player::getWatcherComp(this->player_);
      PlayerWatcherComp::addWatcher(
        (PlayerWatcherComp *const)&v29,
        (const WatcherConfig *)v17,
        (uint32_t)watcher_config_ptr);
      v18 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v29);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v29);
      if ( v18 )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "addPhaseWatcher",
          465);
        v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v30,
                (const char (*)[23])"[ASTER] addWatcher id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v2 + 32));
        v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/aster_activity.cpp",
          "addPhaseWatcher",
          469);
        v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v30,
                (const char (*)[22])"[ASTER] add watcher: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 32));
        v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      goto LABEL_29;
    }
LABEL_30:
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  if ( v31 == (char *)v2 )
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

// Line 474: range 000000001792040C-0000000017920800
int32_t __cdecl AsterActivity::fillPhaseWatcherProtoList(
        AsterActivity *const this,
        uint32_t phase,
        google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *proto_info_list)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  proto::ActivityWatcherInfo *v12; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-104h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-F0h]
  const data::NewActivityWatcherConfig *watcher_config_ptr; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 14 watcher_id:477 48 48 15 watcher_set:475";
  *(_QWORD *)(v3 + 16) = AsterActivity::fillPhaseWatcherProtoList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  ActivityAsterExcelConfigMgr::getPhaseWatcherSet(
    &v6->design_config.txt_config_mgr.activity_aster_config_mgr,
    phase,
    (std::set<unsigned int> *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_range = (std::set<unsigned int> *)(v3 + 48);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 48))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 48))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v7;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                           &v8->design_config.txt_config_mgr.new_activity_config_mgr,
                           *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( watcher_config_ptr )
    {
      v12 = google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo>::Add(proto_info_list);
      BaseActivity::fillWatcherProto((BaseActivity *const)this, v12, watcher_config_ptr);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "fillPhaseWatcherProtoList",
        482);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v21,
             (const char (*)[30])"[ASTER] findWatcherConfig id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 48));
  result = 0;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 491: range 0000000017920802-0000000017920882
void __cdecl AsterActivity::addAsterWatchers(AsterActivity *const this)
{
  if ( AsterActivity::isPhaseOpen(this, 1u) )
    AsterActivity::addPhaseWatcher(this, 1u);
  if ( AsterActivity::isPhaseOpen(this, 2u) )
    AsterActivity::addPhaseWatcher(this, 2u);
  if ( AsterActivity::isPhaseOpen(this, 3u) )
    AsterActivity::addPhaseWatcher(this, 3u);
};

// Line 509: range 0000000017920884-0000000017920DD9
void __cdecl AsterActivity::delAsterWatchers(AsterActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint32_t WatcherComp; // eax
  bool v11; // r14
  PlayerWatcherComp *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 4 14 watcher_id:512 48 48 15 watcher_set:510";
  *(_QWORD *)(v1 + 16) = AsterActivity::delAsterWatchers;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  ActivityAsterExcelConfigMgr::getAsterWatcherSet(
    &v4->design_config.txt_config_mgr.activity_aster_config_mgr,
    (std::set<unsigned int> *)(v1 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_range = (std::set<unsigned int> *)(v1 + 48);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 48))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 48))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v5;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v6->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( watcher_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
      PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v20, WatcherComp);
      v11 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v20);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v20);
      if ( v11 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::delWatcher(v12, *(_DWORD *)(v1 + 32));
      }
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/aster_activity.cpp",
        "delAsterWatchers",
        526);
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"[ASTER] del watcher: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "delAsterWatchers",
        517);
      v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v21,
             (const char (*)[30])"[ASTER] findWatcherConfig id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 48));
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 531: range 0000000017920F20-00000000179214B1
void __cdecl AsterActivity::startAsterLittleTimer(AsterActivity *const this, uint32_t wait_time)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  PlayerUnixTimer *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::weak_ptr<AsterActivity> v11; // [rsp+20h] [rbp-F0h] BYREF
  std::enable_shared_from_this<BaseActivity> v12; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 12 this_ptr:538 64 16 12 this_wtr:539 96 16 14 player_ptr:540";
  *(_QWORD *)(v2 + 16) = AsterActivity::startAsterLittleTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( std::operator!=<PlayerUnixTimer>(0LL, &this->aster_little_timer_ptr_) )
  {
    v5 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->aster_little_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v5) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "startAsterLittleTimer",
        534);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v13,
        (const char (*)[42])"[ASTER] aster_little_timer_ptr_ is active");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v7 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->aster_little_timer_ptr_);
      common::tools::MiTimer::cancel(v7);
    }
  }
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v12);
  std::dynamic_pointer_cast<AsterActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v2 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v12);
  std::weak_ptr<AsterActivity>::weak_ptr<AsterActivity,void>(
    (std::weak_ptr<AsterActivity> *const)(v2 + 64),
    (const std::shared_ptr<AsterActivity> *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Player>((Player *)(v2 + 96));
  std::weak_ptr<AsterActivity>::weak_ptr(&v11, (const std::weak_ptr<AsterActivity> *)(v2 + 64));
  common::tools::perf::make_shared<PlayerUnixTimer,std::shared_ptr<Player> &,AsterActivity::startAsterLittleTimer(unsigned int)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<Player> *)&v12,
    (AsterActivity::startAsterLittleTimer::<lambda(uint64_t)> *)(v2 + 96),
    (std::shared_ptr<Player> *)&v11,
    (AsterActivity::startAsterLittleTimer::<lambda(uint64_t)> *)(v2 + 96));
  std::shared_ptr<PlayerUnixTimer>::operator=(&this->aster_little_timer_ptr_, (std::shared_ptr<PlayerUnixTimer> *)&v12);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr((std::shared_ptr<PlayerUnixTimer> *const)&v12);
  AsterActivity::startAsterLittleTimer(unsigned int)::{lambda(unsigned long)#1}::~startAsterLittleTimer((AsterActivity::startAsterLittleTimer::<lambda(uint64_t)> *const)&v11);
  if ( std::operator==<PlayerUnixTimer>(0LL, &this->aster_little_timer_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "startAsterLittleTimer",
      552);
    v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v13,
           (const char (*)[52])"[ASTER] create aster_little_timer_ptr_ failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_15:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    goto LABEL_20;
  }
  v9 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->aster_little_timer_ptr_);
  if ( PlayerUnixTimer::startS(
         v9,
         wait_time,
         0,
         "./src/player/activity/aster_activity.cpp",
         "startAsterLittleTimer",
         556) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "startAsterLittleTimer",
      558);
    v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v13,
           (const char (*)[51])"[ASTER] aster_little_timer_ptr_ start failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_15;
  }
LABEL_20:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  std::weak_ptr<AsterActivity>::~weak_ptr((std::weak_ptr<AsterActivity> *const)(v2 + 64));
  std::shared_ptr<AsterActivity>::~shared_ptr((std::shared_ptr<AsterActivity> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
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

// Line 541: range 0000000017920DDA-0000000017920F02
void __cdecl AsterActivity::startAsterLittleTimer(unsigned int)::{lambda(unsigned long)#1}::operator()(
        const AsterActivity::startAsterLittleTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  AsterActivity *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 this_ptr:543";
  *(_QWORD *)(v2 + 16) = AsterActivity::startAsterLittleTimer(unsigned int)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<AsterActivity>::lock((const std::weak_ptr<AsterActivity> *const)(v2 + 32));
  if ( std::operator!=<AsterActivity>(0LL, (const std::shared_ptr<AsterActivity> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<AsterActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AsterActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    AsterActivity::onAsterLittleTimer(v5, now_ms);
  }
  std::shared_ptr<AsterActivity>::~shared_ptr((std::shared_ptr<AsterActivity> *const)(v2 + 32));
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

// Line 541: range 00000000179EB682-00000000179EB6A7
void __cdecl AsterActivity::startAsterLittleTimer(unsigned int)::{lambda(unsigned long)#1}::startAsterLittleTimer(
        AsterActivity::startAsterLittleTimer::<lambda(uint64_t)> *const this,
        AsterActivity::startAsterLittleTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<AsterActivity>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 541: range 00000000179EC29E-00000000179EC2C3
void __cdecl AsterActivity::startAsterLittleTimer(unsigned int)::{lambda(unsigned long)#1}::startAsterLittleTimer(
        AsterActivity::startAsterLittleTimer::<lambda(uint64_t)> *const this,
        const AsterActivity::startAsterLittleTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<AsterActivity>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 541: range 0000000017920F04-0000000017920F1E
void __cdecl AsterActivity::startAsterLittleTimer(unsigned int)::{lambda(unsigned long)#1}::~startAsterLittleTimer(
        AsterActivity::startAsterLittleTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<AsterActivity>::~weak_ptr(&this->__this_wtr);
};

// Line 564: range 00000000179214B2-00000000179215EF
void __cdecl AsterActivity::onAsterLittleTimer(AsterActivity *const this, uint64_t now_ms)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->aster_little_.stage_state == ASTER_LITTLE_STAGE_UNSTARTED )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->aster_little_.stage_state);
    }
    this->aster_little_.stage_state = ASTER_LITTLE_STAGE_STARTED;
    AsterActivity::notifyAsterLittleInfo(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "onAsterLittleTimer",
      567);
    v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v3,
           (const char (*)[43])"[ASTER] stage_state invalid, stage_state: ");
    common::milog::MiLogStream::operator<<<proto::AsterLittleStageState,(proto::AsterLittleStageState*)0>(
      v2,
      &this->aster_little_.stage_state);
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
};

// Line 576: range 00000000179215F0-0000000017921883
bool __cdecl AsterActivity::isAsterLittleStageAllWatcherFinished(const AsterActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  bool result; // al
  bool has_taken_all; // [rsp+17h] [rbp-D9h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-C0h] BYREF
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 14 watcher_id:581 48 48 21 stage_watcher_set:577";
  *(_QWORD *)(v2 + 16) = AsterActivity::isAsterLittleStageAllWatcherFinished;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  ActivityAsterExcelConfigMgr::getAsterLittleStageWatcherSet(
    &v5->design_config.txt_config_mgr.activity_aster_config_mgr,
    stage_id,
    (std::set<unsigned int> *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  has_taken_all = 1;
  __for_range = (std::set<unsigned int> *)(v2 + 48);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 48))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 48))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            &this->taken_watcher_id_set_,
            (const unsigned int *)(v2 + 32)) )
    {
      has_taken_all = 0;
      break;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  result = has_taken_all;
  if ( v13 == (char *)v2 )
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
  return result;
};

// Line 594: range 0000000017921884-0000000017921B75
uint32_t __fastcall AsterActivity::getAsterLittleStageBeginTime(const AsterActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t open_day; // ecx
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::AsterLittleExcelConfig *excel_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:593";
  *(_QWORD *)(v2 + 16) = AsterActivity::getAsterLittleStageBeginTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  if ( *(_DWORD *)(v2 + 32) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    excel_config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterLittleExcelConfig(
                         &v6->design_config.txt_config_mgr.activity_aster_config_mgr,
                         *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( excel_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&excel_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      open_day = excel_config_ptr->open_day;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      result = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "getAsterLittleStageBeginTime",
        603);
      v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v14,
             (const char (*)[49])"[ASTER] findAsterLittleExcelConfig failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" ,stage id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v15 == (char *)v2 )
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

// Line 611: range 0000000017921B76-0000000017921F6A
bool __cdecl AsterActivity::acceptAsterLittleNextStage(AsterActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool v5; // r14
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  bool result; // al
  uint32_t v10; // ecx
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const ActivityAsterExcelConfigMgr *conf_mgr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 next_stage_id:613";
  *(_QWORD *)(v1 + 16) = AsterActivity::acceptAsterLittleNextStage;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_aster_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  *(_DWORD *)(v1 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->aster_little_.stage_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = ActivityAsterExcelConfigMgr::findAsterLittleNextStageId(
                             conf_mgr,
                             this->aster_little_.stage_id);
  }
  else
  {
    *(_DWORD *)(v1 + 32) = ActivityAsterExcelConfigMgr::getAsterLittleFirstStageId(conf_mgr);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  v5 = data::ActivityAsterExcelConfigMgrBase::findAsterLittleExcelConfig(
         &v4->design_config.txt_config_mgr.activity_aster_config_mgr,
         *(_DWORD *)(v1 + 32)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "acceptAsterLittleNextStage",
      625);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v14,
           (const char (*)[49])"[ASTER] findAsterLittleExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])" ,next_stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0;
  }
  else
  {
    v10 = *(_DWORD *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->aster_little_.stage_id);
    }
    this->aster_little_.stage_id = v10;
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->aster_little_.stage_state);
    }
    this->aster_little_.stage_state = ASTER_LITTLE_STAGE_UNSTARTED;
    AsterActivity::tryStartAsterLittleStage(this);
    result = 1;
  }
  if ( v15 == (char *)v1 )
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

// Line 637: range 0000000017921F6C-00000000179223BA
void __cdecl AsterActivity::tryStartAsterLittleStage(AsterActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // ebx
  uint32_t v13; // edx
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 20 stage_begin_time:643 64 4 7 now:650";
  *(_QWORD *)(v1 + 16) = AsterActivity::tryStartAsterLittleStage;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->aster_little_.stage_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->aster_little_.stage_state == ASTER_LITTLE_STAGE_UNSTARTED )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = AsterActivity::getAsterLittleStageBeginTime(this, this->aster_little_.stage_id);
      if ( *(_DWORD *)(v1 + 48) )
      {
        *(_DWORD *)(v1 + 64) = common::tools::TimeUtils::getNow();
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/aster_activity.cpp",
          "tryStartAsterLittleStage",
          651);
        v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v14,
               (const char (*)[19])"[ASTER] stage_id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->aster_little_.stage_id);
        v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               v8,
               (const char (*)[21])" ,stage_begin_time: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v1 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" ,now: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 64));
        common::milog::MiLogStream::~MiLogStream(&v14);
        if ( *(_DWORD *)(v1 + 64) < *(_DWORD *)(v1 + 48) )
        {
          v12 = *(_DWORD *)(v1 + 48) - *(_DWORD *)(v1 + 64);
          v13 = v12 + common::tools::RandomUtils::rand<int>(0, 5);
          AsterActivity::startAsterLittleTimer(this, v13);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&this->aster_little_.stage_state);
          }
          this->aster_little_.stage_state = ASTER_LITTLE_STAGE_STARTED;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "tryStartAsterLittleStage",
          646);
        v4 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v14,
               (const char (*)[51])"[ASTER] getAsterLittleStageBeginTime failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v1 + 64) = Player::getUid(this->player_);
        v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 64));
        v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v5, (const char (*)[13])" ,stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->aster_little_.stage_id);
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
    }
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

// Line 664: range 00000000179223BC-000000001792255B
void __cdecl AsterActivity::notifyAsterLittleInfo(AsterActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::AsterLittleInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  proto::AsterLittleDetailInfo *v5; // rdx
  Player *player; // r14
  std::shared_ptr<proto::AsterLittleInfoNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:665";
  *(_QWORD *)(v1 + 16) = AsterActivity::notifyAsterLittleInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::AsterLittleInfoNotify>();
  v4 = std::__shared_ptr_access<proto::AsterLittleInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AsterLittleInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v5 = proto::AsterLittleInfoNotify::mutable_info(v4);
  AsterLittleInfo::toClient(&this->aster_little_, this, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::AsterLittleInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::AsterLittleInfoNotify>::~shared_ptr((std::shared_ptr<proto::AsterLittleInfoNotify> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 671: range 000000001792255C-00000000179226A0
void __cdecl AsterActivity::clearAsterLittle(AsterActivity *const this)
{
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->aster_little_);
  }
  this->aster_little_.is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aster_little_.stage_id);
  }
  this->aster_little_.stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_.stage_state >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->aster_little_.stage_state);
  }
  this->aster_little_.stage_state = ASTER_LITTLE_STAGE_NONE;
  if ( std::operator!=<PlayerUnixTimer>(0LL, &this->aster_little_timer_ptr_) )
  {
    v1 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->aster_little_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v1) )
    {
      v3 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->aster_little_timer_ptr_);
      common::tools::MiTimer::cancel(v3);
    }
  }
};

// Line 682: range 00000000179226A2-0000000017922D79
void __cdecl AsterActivity::regAsterMidObserver(AsterActivity *const this)
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
  *(_QWORD *)(p_M_last + 8) = "2 32 16 12 this_ptr:683 64 16 12 this_wtr:684";
  *(_QWORD *)(p_M_last + 16) = AsterActivity::regAsterMidObserver;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::dynamic_pointer_cast<AsterActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_last + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::weak_ptr<AsterActivity>::weak_ptr<AsterActivity,void>(
    (std::weak_ptr<AsterActivity> *const)(p_M_last + 64),
    (const std::shared_ptr<AsterActivity> *)(p_M_last + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->npc_talk_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::weak_ptr<AsterActivity>::weak_ptr(
      (std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<AsterActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<AsterActivity,CompleteTalkEvent>(
      &v9,
      (std::weak_ptr<AsterActivity> *)EventComp,
      (void (*)(AsterActivity *, const CompleteTalkEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::operator=(&this->npc_talk_obs_wtr_, (std::weak_ptr<Observer> *)&v9);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9);
    std::weak_ptr<AsterActivity>::~weak_ptr((std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->seal_battle_begin_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getEventComp(this->player_);
    std::weak_ptr<AsterActivity>::weak_ptr(
      (std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<AsterActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<AsterActivity,SealEnergyChargeBattleBeginEvent>(
      (PlayerEventComp *const)&v9._M_weak_this._M_refcount,
      (std::weak_ptr<AsterActivity> *)v5,
      (void (*)(AsterActivity *, const SealEnergyChargeBattleBeginEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::operator=(
      &this->seal_battle_begin_obs_wtr_,
      (std::weak_ptr<Observer> *)&v9._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9._M_weak_this._M_refcount);
    std::weak_ptr<AsterActivity>::~weak_ptr((std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->seal_battle_end_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = Player::getEventComp(this->player_);
    std::weak_ptr<AsterActivity>::weak_ptr(
      (std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<AsterActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<AsterActivity,SealEnergyChargeBattleEndEvent>(
      (PlayerEventComp *const)&v9.event_center_,
      (std::weak_ptr<AsterActivity> *)v6,
      (void (*)(AsterActivity *, const SealEnergyChargeBattleEndEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::operator=(&this->seal_battle_end_obs_wtr_, (std::weak_ptr<Observer> *)&v9.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_);
    std::weak_ptr<AsterActivity>::~weak_ptr((std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->general_reward_taken_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getEventComp(this->player_);
    std::weak_ptr<AsterActivity>::weak_ptr(
      (std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<AsterActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<AsterActivity,TakeGeneralRewardEvent>(
      (PlayerEventComp *const)&v9.event_center_.context_.pending_que_,
      (std::weak_ptr<AsterActivity> *)v7,
      (void (*)(AsterActivity *, const TakeGeneralRewardEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::operator=(
      &this->general_reward_taken_obs_wtr_,
      (std::weak_ptr<Observer> *)&v9.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_.context_.pending_que_);
    std::weak_ptr<AsterActivity>::~weak_ptr((std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->general_reward_destroy_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = Player::getEventComp(this->player_);
    std::weak_ptr<AsterActivity>::weak_ptr(
      (std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_,
      (const std::weak_ptr<AsterActivity> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<AsterActivity,GeneralRewardDestroyEvent>(
      (PlayerEventComp *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<AsterActivity> *)v8,
      (void (*)(AsterActivity *, const GeneralRewardDestroyEvent *))&v9.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::operator=(
      &this->general_reward_destroy_obs_wtr_,
      (std::weak_ptr<Observer> *)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<AsterActivity>::~weak_ptr((std::weak_ptr<AsterActivity> *const)&v9.event_center_.context_.pending_que_);
  }
  std::weak_ptr<AsterActivity>::~weak_ptr((std::weak_ptr<AsterActivity> *const)(p_M_last + 64));
  std::shared_ptr<AsterActivity>::~shared_ptr((std::shared_ptr<AsterActivity> *const)(p_M_last + 32));
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

// Line 708: range 0000000017922D7A-0000000017922FE0
void __cdecl AsterActivity::unregAsterMidObserver(AsterActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax
  PlayerEventComp *v3; // rax
  PlayerEventComp *v4; // rax
  PlayerEventComp *v5; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->npc_talk_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->npc_talk_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->npc_talk_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->seal_battle_begin_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->seal_battle_begin_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->seal_battle_begin_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->seal_battle_end_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v3, &this->seal_battle_end_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->seal_battle_end_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->general_reward_taken_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v4, &this->general_reward_taken_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->general_reward_taken_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->general_reward_destroy_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v5, &this->general_reward_destroy_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->general_reward_destroy_obs_wtr_);
  }
};

// Line 737: range 0000000017922FE2-00000000179230B0
void __cdecl AsterActivity::onCompleteTalk(AsterActivity *const this, const CompleteTalkEvent *event)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t AsterMiddleNpcTalkId; // ecx
  bool v4; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( AsterActivity::isPhaseOpen(this, 2u) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v5);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
    AsterMiddleNpcTalkId = ConstValueExcelConfigMgr::getAsterMiddleNpcTalkId(&v2->design_config.txt_config_mgr.const_value_config_mgr);
    if ( *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v4 = AsterMiddleNpcTalkId != event->talk_id;
    std::shared_ptr<Config>::~shared_ptr(v5);
    if ( !v4 )
      AsterActivity::refreshAsterMidCamp(this);
  }
};

// Line 753: range 00000000179230B2-0000000017923899
// local variable allocation has failed, the output may be wrong!
void __cdecl AsterActivity::onSealEnergyChargeBattleBegin(
        AsterActivity *const this,
        const SealEnergyChargeBattleBeginEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityAsterExcelConfigMgr *p_activity_aster_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<SealEnergyChargeBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *v19; // r14
  std::string eventa; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> v21; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-130h] BYREF
  char v23[272]; // [rsp+50h] [rbp-110h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 10 holder:790 64 4 11 camp_id:759 80 4 17 difficulty_id:783 96 16 14 battle_ptr:772 128 1"
                        "6 11 log_ptr:791 160 32 18 transaction_no:784";
  *(_QWORD *)(v2 + 16) = AsterActivity::onSealEnergyChargeBattleBegin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  if ( AsterActivity::isPhaseOpen((const AsterActivity *const)eventa._M_string_length, 2u) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_activity_aster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_aster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = ActivityAsterExcelConfigMgr::getAsterMidCampIdByGroupId(
                             p_activity_aster_config_mgr,
                             *((_DWORD *)eventa._M_dataplus._M_p + 6));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
    if ( *(_DWORD *)(v2 + 64) )
    {
      if ( *(_BYTE *)(((eventa._M_string_length + 1016) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((eventa._M_string_length + 1016) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( *(_DWORD *)(eventa._M_string_length + 1016) == *(_DWORD *)(v2 + 64) )
      {
        std::weak_ptr<SealEnergyChargeBattle>::lock((const std::weak_ptr<SealEnergyChargeBattle> *const)(v2 + 96));
        if ( std::operator==<SealEnergyChargeBattle>(0LL, (const std::shared_ptr<SealEnergyChargeBattle> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/aster_activity.cpp",
            "onSealEnergyChargeBattleBegin",
            775);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v22,
            (const char (*)[27])"[ASTER] battle_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          std::weak_ptr<SealEnergyChargeBattle>::operator=<SealEnergyChargeBattle>(
            (std::weak_ptr<SealEnergyChargeBattle> *const)(eventa._M_string_length + 1056),
            (const std::shared_ptr<SealEnergyChargeBattle> *)(v2 + 96));
          v9 = std::__shared_ptr_access<SealEnergyChargeBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SealEnergyChargeBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          SealEnergyChargeBattle::getTransactionNo[abi:cxx11]((std::string *)&v22, v9);
          std::string::operator=(eventa._M_string_length + 1024, &v22);
          std::string::~string(&v22);
          if ( *(_BYTE *)(((eventa._M_string_length + 1020) >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(eventa._M_string_length) - 4) & 7) + 3) >= *(_BYTE *)(((eventa._M_string_length + 1020) >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 80) = *(_DWORD *)(eventa._M_string_length + 1020);
          std::string::basic_string(v2 + 160, eventa._M_string_length + 1024);
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/aster_activity.cpp",
            "onSealEnergyChargeBattleBegin",
            786);
          v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v22,
                  (const char (*)[48])"[ASTER] onSealEnergyChargeBattleBegin camp_id: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v2 + 64));
          v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v11,
                  (const char (*)[18])" ,difficulty_id: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 80));
          v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v13,
                  (const char (*)[19])" ,transaction_no: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v2 + 160));
          common::milog::MiLogStream::~MiLogStream(&v22);
          if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xBC2u, eventa);
          std::string::~string(&v22);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyAsterMidBattleBegin>();
          v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          proto_log::PlayerLogBodyAsterMidBattleBegin::set_camp_id(v16, *(_DWORD *)(v2 + 64));
          v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          proto_log::PlayerLogBodyAsterMidBattleBegin::set_difficulty_id(v17, *(_DWORD *)(v2 + 80));
          v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          proto_log::PlayerLogBodyAsterMidBattleBegin::set_transaction_no(v18, (const std::string *)(v2 + 160));
          if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v19 = *(Player **)(eventa._M_string_length + 24);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v21, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleBegin,void>(
            (std::shared_ptr<google::protobuf::Message> *const)&eventa._anon_0,
            (const std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleBegin> *)(v2 + 128));
          Player::printStatLog(v19, (MessagePtr *)&eventa._anon_0, &v21, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&eventa._anon_0);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v21);
          std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleBegin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleBegin> *const)(v2 + 128));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
          std::string::~string((void *)(v2 + 160));
        }
        std::shared_ptr<SealEnergyChargeBattle>::~shared_ptr((std::shared_ptr<SealEnergyChargeBattle> *const)(v2 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "onSealEnergyChargeBattleBegin",
          768);
        v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v22,
               (const char (*)[44])"[ASTER] camp_id not valid, battle camp id: ");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v6,
               (const unsigned int *)(eventa._M_string_length + 1016));
        v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,camp id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 799: range 00000000179238FC-00000000179242D7
// local variable allocation has failed, the output may be wrong!
void __cdecl AsterActivity::onSealEnergyChargeBattleEnd(
        AsterActivity *const this,
        const SealEnergyChargeBattleEndEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityAsterExcelConfigMgr *p_activity_aster_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t PlayerCount; // eax
  PlayerAvatarComp *AvatarComp; // r14
  Player *v28; // r14
  std::string eventa; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> v30; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-130h] BYREF
  char v32[272]; // [rsp+50h] [rbp-110h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 10 holder:828 64 4 11 camp_id:801 80 4 17 difficulty_id:813 96 16 13 world_ptr:817 128 16"
                        " 11 log_ptr:829 160 32 18 transaction_no:814";
  *(_QWORD *)(v2 + 16) = AsterActivity::onSealEnergyChargeBattleEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  p_activity_aster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.activity_aster_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 64) = ActivityAsterExcelConfigMgr::getAsterMidCampIdByGroupId(
                           p_activity_aster_config_mgr,
                           *((_DWORD *)eventa._M_dataplus._M_p + 6));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v30);
  if ( *(_DWORD *)(v2 + 64) )
  {
    if ( *(_BYTE *)(((eventa._M_string_length + 1016) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((eventa._M_string_length + 1016) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( *(_DWORD *)(eventa._M_string_length + 1016) == *(_DWORD *)(v2 + 64) )
    {
      if ( *(_BYTE *)(((eventa._M_string_length + 1020) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_string_length) - 4) & 7) + 3) >= *(_BYTE *)(((eventa._M_string_length + 1020) >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 80) = *(_DWORD *)(eventa._M_string_length + 1020);
      std::string::basic_string(v2 + 160, eventa._M_string_length + 1024);
      AsterMidCampBattleInfo::clear((AsterMidCampBattleInfo *const)(eventa._M_string_length + 1016));
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(*(Player *const *)(eventa._M_string_length + 24));
      PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 96));
      if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "onSealEnergyChargeBattleEnd",
          820);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v31,
          (const char (*)[22])"[ASTER] world is null");
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/aster_activity.cpp",
          "onSealEnergyChargeBattleEnd",
          824);
        v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v31,
               (const char (*)[46])"[ASTER] onSealEnergyChargeBattleEnd camp_id: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v10,
                (const char (*)[18])" ,difficulty_id: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 80));
        v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v12,
                (const char (*)[19])" ,transaction_no: ");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v2 + 160));
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" ,is_win: ");
        if ( *(char *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(eventa._M_dataplus._M_p + 32);
        v16 = common::milog::MiLogStream::operator<<(v15, eventa._M_dataplus._M_p[32]);
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])", cost_time: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v17,
          (const unsigned int *)eventa._M_dataplus._M_p + 7);
        common::milog::MiLogStream::~MiLogStream(&v31);
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v31, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xBC3u, eventa);
        std::string::~string(&v31);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyAsterMidBattleEnd>();
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        proto_log::PlayerLogBodyAsterMidBattleEnd::set_camp_id(v19, *(_DWORD *)(v2 + 64));
        v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        proto_log::PlayerLogBodyAsterMidBattleEnd::set_difficulty_id(v20, *(_DWORD *)(v2 + 80));
        v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        proto_log::PlayerLogBodyAsterMidBattleEnd::set_transaction_no(v21, (const std::string *)(v2 + 160));
        v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyAsterMidBattleEnd::set_cost_time(v22, *((_DWORD *)eventa._M_dataplus._M_p + 7));
        v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(char *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(eventa._M_dataplus._M_p + 32);
        proto_log::PlayerLogBodyAsterMidBattleEnd::set_is_win(v23, eventa._M_dataplus._M_p[32]);
        v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v25 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        PlayerCount = World::getPlayerCount(v25);
        proto_log::PlayerLogBodyAsterMidBattleEnd::set_world_player_count(v24, PlayerCount);
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(*(Player *const *)(eventa._M_string_length + 24));
        std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd>::shared_ptr(
          (std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd> *const)&v30,
          (const std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd> *)(v2 + 128));
        std::function<ForeachPolicy ()(Avatar &)>::function<AsterActivity::onSealEnergyChargeBattleEnd(SealEnergyChargeBattleEndEvent const&)::{lambda(Avatar &)#1},void,void>(
          (std::function<ForeachPolicy(Avatar&)> *const)&v31,
          (AsterActivity::onSealEnergyChargeBattleEnd::<lambda(Avatar&)> *)&v30);
        PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v31);
        std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v31);
        AsterActivity::onSealEnergyChargeBattleEnd(SealEnergyChargeBattleEndEvent const&)::{lambda(Avatar &)#1}::~Avatar((AsterActivity::onSealEnergyChargeBattleEnd::<lambda(Avatar&)> *const)&v30);
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v28 = *(Player **)(eventa._M_string_length + 24);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v30, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd,void>(
          (std::shared_ptr<google::protobuf::Message> *const)&eventa._anon_0,
          (const std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd> *)(v2 + 128));
        Player::printStatLog(v28, (MessagePtr *)&eventa._anon_0, &v30, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&eventa._anon_0);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v30);
        std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd> *const)(v2 + 128));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 96));
      std::string::~string((void *)(v2 + 160));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "onSealEnergyChargeBattleEnd",
        809);
      v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v31,
             (const char (*)[44])"[ASTER] camp_id not valid, battle camp id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v6,
             (const unsigned int *)(eventa._M_string_length + 1016));
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,camp id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
  }
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
};

// Line 836: range 000000001792389A-00000000179238DE
ForeachPolicy __cdecl AsterActivity::onSealEnergyChargeBattleEnd(SealEnergyChargeBattleEndEvent const&)::{lambda(Avatar &)#1}::operator()(
        const AsterActivity::onSealEnergyChargeBattleEnd::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  uint32_t AvatarId; // eax

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAsterMidBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::PlayerLogBodyAsterMidBattleEnd::add_avatar_id_list(v2, AvatarId);
  return 0;
};

// Line 836: range 00000000179E6330-00000000179E6355
void __cdecl AsterActivity::onSealEnergyChargeBattleEnd(SealEnergyChargeBattleEndEvent const&)::{lambda(Avatar &)#1}::Avatar(
        AsterActivity::onSealEnergyChargeBattleEnd::<lambda(Avatar&)> *const this,
        AsterActivity::onSealEnergyChargeBattleEnd::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 836: range 00000000179E6420-00000000179E6445
void __cdecl AsterActivity::onSealEnergyChargeBattleEnd(SealEnergyChargeBattleEndEvent const&)::{lambda(Avatar &)#1}::Avatar(
        AsterActivity::onSealEnergyChargeBattleEnd::<lambda(Avatar&)> *const this,
        const AsterActivity::onSealEnergyChargeBattleEnd::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 836: range 00000000179238E0-00000000179238FA
void __cdecl AsterActivity::onSealEnergyChargeBattleEnd(SealEnergyChargeBattleEndEvent const&)::{lambda(Avatar &)#1}::~Avatar(
        AsterActivity::onSealEnergyChargeBattleEnd::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyAsterMidBattleEnd>::~shared_ptr(&this->__log_ptr);
};

// Line 845: range 00000000179242D8-0000000017924417
void __cdecl AsterActivity::onTakeGeneralReward(AsterActivity *const this, const TakeGeneralRewardEvent *event)
{
  ActivityAsterExcelConfigMgr *p_activity_aster_config_mgr; // rcx
  uint32_t camp_id; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v4[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( AsterActivity::isPhaseOpen(this, 2u) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v4);
    p_activity_aster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.activity_aster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    camp_id = ActivityAsterExcelConfigMgr::getAsterMidCampIdByGroupId(p_activity_aster_config_mgr, event->group_id);
    std::shared_ptr<Config>::~shared_ptr(v4);
    if ( camp_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.collect_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->aster_mid_.collect_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++this->aster_mid_.collect_count;
      AsterActivity::notifyAsterMidInfo(this);
    }
  }
};

// Line 863: range 0000000017924418-00000000179246EC
void __cdecl AsterActivity::onGeneralRewardDestroy(AsterActivity *const this, const GeneralRewardDestroyEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  ActivityAsterExcelConfigMgr *p_activity_aster_config_mgr; // rcx
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 camp_id:870";
  *(_QWORD *)(v2 + 16) = AsterActivity::onGeneralRewardDestroy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/aster_activity.cpp",
    "onGeneralRewardDestroy",
    864);
  v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v8,
         (const char (*)[42])"[ASTER] onGeneralRewardDestroy group id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &event->group_id);
  common::milog::MiLogStream::~MiLogStream(&v8);
  if ( AsterActivity::isPhaseOpen(this, 2u) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    p_activity_aster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.activity_aster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = ActivityAsterExcelConfigMgr::getAsterMidCampIdByGroupId(
                             p_activity_aster_config_mgr,
                             event->group_id);
    std::shared_ptr<Config>::~shared_ptr(&v7);
    if ( *(_DWORD *)(v2 + 32) )
    {
      if ( !AsterActivity::isAsterMidCampValid(this, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "onGeneralRewardDestroy",
          878);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v8,
          (const char (*)[34])"[ASTER] aster mid camp is invalid");
        common::milog::MiLogStream::~MiLogStream(&v8);
      }
      else
      {
        std::set<unsigned int>::insert(
          &this->aster_mid_.finished_camp_set,
          (const std::set<unsigned int>::value_type *)(v2 + 32));
        AsterActivity::broadcastAsterMidCampInfo(this);
      }
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 889: range 00000000179246EE-0000000017924A8A
__int64 __fastcall AsterActivity::isAsterMidCampValid(const AsterActivity *const this, uint32_t camp_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  ActivityAsterExcelConfigMgr *p_activity_aster_config_mgr; // rcx
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+18h] [rbp-B8h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+20h] [rbp-B0h] BYREF
  const data::AsterMidExcelConfig *config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-90h] BYREF
  char v14[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 camp_id:888";
  *(_QWORD *)(v2 + 16) = AsterActivity::isAsterMidCampValid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = camp_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->aster_mid_.refresh_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_activity_aster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_aster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidExcelConfig(
                   p_activity_aster_config_mgr,
                   this->aster_mid_.refresh_id);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( config_ptr )
    {
      __rhs._M_current = std::vector<unsigned int>::end(&config_ptr->camp_vec)._M_current;
      M_current = std::vector<unsigned int>::end(&config_ptr->camp_vec)._M_current;
      v8._M_current = std::vector<unsigned int>::begin(&config_ptr->camp_vec)._M_current;
      __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                           v8,
                           (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                           (const unsigned int *)(v2 + 32))._M_current;
      if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
      {
        result = 0LL;
      }
      else if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                  &this->aster_mid_.finished_camp_set,
                  (const unsigned int *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "isAsterMidCampValid",
          910);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v13,
          (const char (*)[28])"[ASTER] camp_id is finished");
        common::milog::MiLogStream::~MiLogStream(&v13);
        result = 0LL;
      }
      else
      {
        result = 1LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "isAsterMidCampValid",
        898);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v13,
        (const char (*)[39])"[ASTER] findAsterMidExcelConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 0LL;
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v14 == (char *)v2 )
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

// Line 918: range 0000000017924A8C-0000000017924D44
bool __cdecl AsterActivity::isAsterMidAllCampFinished(const AsterActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  ActivityAsterExcelConfigMgr *p_activity_aster_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const data::AsterMidExcelConfig *config_ptr; // [rsp+20h] [rbp-80h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-78h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-70h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 11 camp_id:928";
  *(_QWORD *)(v1 + 16) = AsterActivity::isAsterMidAllCampFinished;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->aster_mid_.refresh_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    p_activity_aster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_aster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidExcelConfig(
                   p_activity_aster_config_mgr,
                   this->aster_mid_.refresh_id);
    std::shared_ptr<Config>::~shared_ptr(&v11);
    if ( config_ptr )
    {
      __for_range = &config_ptr->camp_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->camp_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&config_ptr->camp_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = *v6;
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                &this->aster_mid_.finished_camp_set,
                (const unsigned int *)(v1 + 32)) )
        {
          result = 0;
          goto LABEL_19;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    result = 1;
  }
  else
  {
    result = 1;
  }
LABEL_19:
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

// Line 941: range 0000000017924D46-0000000017924D91
bool __cdecl AsterActivity::isAsterMidCampRefreshable(const AsterActivity *const this)
{
  return AsterActivity::isPhaseOpen(this, 2u) && AsterActivity::isAsterMidAllCampFinished(this);
};

// Line 956: range 0000000017924D92-0000000017924EAA
int32_t __cdecl AsterActivity::refreshAsterMidCamp(AsterActivity *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned int refresh_id; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v4; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+30h] [rbp-30h] BYREF

  if ( !AsterActivity::isAsterMidCampRefreshable(this) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/aster_activity.cpp",
      "refreshAsterMidCamp",
      959);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v5,
      (const char (*)[39])"[ASTER] aster mid camp not refreshable");
    common::milog::MiLogStream::~MiLogStream(&v5);
    AsterActivity::broadcastAsterMidCampInfo(this);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v4);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4);
    refresh_id = ActivityAsterExcelConfigMgr::randomAsterMidRefreshId(&v2->design_config.txt_config_mgr.activity_aster_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v4);
    return AsterActivity::doRefreshAsterMidCamp(this, refresh_id);
  }
};

// Line 970: range 0000000017924EAC-0000000017925155
int32_t __cdecl AsterActivity::doRefreshAsterMidCamp(AsterActivity *const this, uint32_t refresh_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t Now; // esi
  uint32_t old_refresh_id; // [rsp+14h] [rbp-4Ch]
  const data::AsterMidExcelConfig *config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidExcelConfig(
                 &v2->design_config.txt_config_mgr.activity_aster_config_mgr,
                 refresh_id);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_refresh_id = this->aster_mid_.refresh_id;
    if ( old_refresh_id )
    {
      this->aster_mid_.refresh_id = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->aster_mid_.refresh_time);
      }
      this->aster_mid_.refresh_time = 0;
      std::set<unsigned int>::clear(&this->aster_mid_.finished_camp_set);
      AsterMidCampBattleInfo::clear(&this->aster_mid_.battle_info);
      AsterActivity::clearAsterMidGroups(this, old_refresh_id);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->aster_mid_.refresh_id);
    }
    this->aster_mid_.refresh_id = refresh_id;
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->aster_mid_.refresh_time);
    }
    this->aster_mid_.refresh_time = Now;
    std::set<unsigned int>::clear(&this->aster_mid_.finished_camp_set);
    AsterMidCampBattleInfo::clear(&this->aster_mid_.battle_info);
    AsterActivity::startAsterMidGroups(this, refresh_id);
    AsterActivity::broadcastAsterMidCampInfo(this);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "doRefreshAsterMidCamp",
      974);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v9,
      (const char (*)[39])"[ASTER] findAsterMidExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 1003: range 0000000017925156-0000000017925F37
__int64 __fastcall AsterActivity::selectAsterMidDifficulty(
        AsterActivity *const this,
        uint32_t gadget_entity_id,
        uint32_t difficulty_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // r14
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  PlayerBasicComp *BasicComp; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t v25; // ecx
  uint32_t v26; // ecx
  uint32_t v27; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rdx
  int32_t *p_param1; // rax
  int32_t v34; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  uint32_t monster_level; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rdx
  int32_t *p_param3; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rdx
  uint32_t *p_uid; // rax
  Group *v42; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-18Ch] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+18h] [rbp-188h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+20h] [rbp-180h] BYREF
  const ActivityAsterExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-178h]
  const data::AsterMidDifficultyExcelConfig *difficulty_config_ptr; // [rsp+30h] [rbp-170h]
  const std::vector<unsigned int> *world_level_vec; // [rsp+38h] [rbp-168h]
  std::shared_ptr<Config> v51; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v52; // [rsp+50h] [rbp-150h] BYREF
  char v53[304]; // [rsp+70h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 13 group_id:1032 64 4 12 camp_id:1033 80 4 16 world_level:1058 96 4 21 gadget_entity_id:1"
                        "002 112 4 18 difficulty_id:1002 128 16 14 scene_ptr:1010 160 16 15 gadget_ptr:1017 192 16 14 gro"
                        "up_ptr:1025 224 16 12 evt_ptr:1071";
  *(_QWORD *)(v3 + 16) = AsterActivity::selectAsterMidDifficulty;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  *(_DWORD *)(v3 + 96) = gadget_entity_id;
  *(_DWORD *)(v3 + 112) = difficulty_id;
  if ( !AsterActivity::isPhaseOpen(this, 2u) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "selectAsterMidDifficulty",
      1006);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v52,
      (const char (*)[30])"[ASTER] aster mid is not open");
    common::milog::MiLogStream::~MiLogStream(&v52);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v3 + 224));
    std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(
      (std::shared_ptr<Scene> *const)(v3 + 128),
      (std::shared_ptr<PlayerWorldScene> *)(v3 + 224));
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 224));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "selectAsterMidDifficulty",
        1013);
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v52,
             (const char (*)[40])"[ASTER] getMainWorldScene failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v6 = -1;
    }
    else
    {
      v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Scene::findEntity<Gadget>((const Scene *const)(v3 + 160), v8);
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "selectAsterMidDifficulty",
          1020);
        v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v52,
               (const char (*)[38])"[ASTER] findEntity failed, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v52);
        v6 = 504;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v51);
        conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.activity_aster_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v51);
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        Entity::getGroup((const Entity *const)(v3 + 192));
        if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/aster_activity.cpp",
            "selectAsterMidDifficulty",
            1028);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v52,
            (const char (*)[22])"[ASTER] group is null");
          common::milog::MiLogStream::~MiLogStream(&v52);
          v6 = -1;
        }
        else
        {
          v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          *(_DWORD *)(v3 + 48) = Group::getGroupId(v10);
          *(_DWORD *)(v3 + 64) = ActivityAsterExcelConfigMgr::getAsterMidCampIdByGroupId(conf_mgr, *(_DWORD *)(v3 + 48));
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/aster_activity.cpp",
            "selectAsterMidDifficulty",
            1034);
          v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v52,
                  (const char (*)[19])"[ASTER] group_id: ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v3 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" ,camp_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v52);
          if ( (unsigned __int8)AsterActivity::isAsterMidCampValid(this, *(_DWORD *)(v3 + 64)) != 1 )
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/aster_activity.cpp",
              "selectAsterMidDifficulty",
              1038);
            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v52,
              (const char (*)[34])"[ASTER] aster mid camp is invalid");
            common::milog::MiLogStream::~MiLogStream(&v52);
            v6 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.battle_info >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->aster_mid_.battle_info >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( this->aster_mid_.battle_info.camp_id )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/aster_activity.cpp",
                "selectAsterMidDifficulty",
                1045);
              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v52,
                (const char (*)[37])"[ASTER] previous battle not finished");
              common::milog::MiLogStream::~MiLogStream(&v52);
              v6 = 880;
            }
            else
            {
              difficulty_config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidDifficultyExcelConfig(
                                        conf_mgr,
                                        *(_DWORD *)(v3 + 112));
              if ( difficulty_config_ptr )
              {
                world_level_vec = &difficulty_config_ptr->world_level_vec;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                BasicComp = Player::getBasicComp(this->player_);
                *(_DWORD *)(v3 + 80) = PlayerBasicComp::getWorldLevel(BasicComp);
                __rhs._M_current = std::vector<unsigned int>::end(world_level_vec)._M_current;
                M_current = std::vector<unsigned int>::end(world_level_vec)._M_current;
                v19._M_current = std::vector<unsigned int>::begin(world_level_vec)._M_current;
                __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                     v19,
                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                     (const unsigned int *)(v3 + 80))._M_current;
                if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
                {
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/aster_activity.cpp",
                    "selectAsterMidDifficulty",
                    1061);
                  v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                          &v52,
                          (const char (*)[40])"[ASTER] difficulty_id is invalid, uid: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  val = Player::getUid(this->player_);
                  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
                  v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                          v21,
                          (const char (*)[18])" ,difficulty_id: ");
                  v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v22,
                          (const unsigned int *)(v3 + 112));
                  v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          v23,
                          (const char (*)[16])" ,world_level: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v3 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v52);
                  v6 = -1;
                }
                else
                {
                  v25 = *(_DWORD *)(v3 + 64);
                  if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.battle_info >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->aster_mid_.battle_info >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&this->aster_mid_.battle_info);
                  }
                  this->aster_mid_.battle_info.camp_id = v25;
                  v26 = *(_DWORD *)(v3 + 112);
                  if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.battle_info.difficulty_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.battle_info.difficulty_id >> 3)
                                                                       + 0x7FFF8000) )
                  {
                    __asan_report_store4(&this->aster_mid_.battle_info.difficulty_id);
                  }
                  this->aster_mid_.battle_info.difficulty_id = v26;
                  std::__weak_ptr<SealEnergyChargeBattle,(__gnu_cxx::_Lock_policy)2>::reset(&this->aster_mid_.battle_info.battle_wtr);
                  EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 224), 48);
                  if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 224)) )
                  {
                    v27 = *(_DWORD *)(v3 + 96);
                    v28 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    p_source_entity_id = &v28->source_entity_id;
                    if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_store4(p_source_entity_id);
                    }
                    v28->source_entity_id = v27;
                    v30 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    ConfigId = Entity::getConfigId((const Entity *const)v30);
                    v32 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    p_param1 = &v32->param1;
                    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                                 + 0x7FFF8000) )
                    {
                      __asan_report_store4(p_param1);
                    }
                    v32->param1 = ConfigId;
                    v34 = *(_DWORD *)(v3 + 112);
                    v35 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    if ( *(_BYTE *)(((unsigned __int64)&v35->param2 >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&v35->param2 >> 3) + 0x7FFF8000) <= 3 )
                    {
                      v35 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v35->param2);
                    }
                    v35->param2 = v34;
                    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->monster_level >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->monster_level >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    monster_level = difficulty_config_ptr->monster_level;
                    v37 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    p_param3 = &v37->param3;
                    if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3)
                                                                                 + 0x7FFF8000) )
                    {
                      __asan_report_store4(p_param3);
                    }
                    v37->param3 = monster_level;
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    Uid = Player::getUid(this->player_);
                    v40 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    p_uid = &v40->uid;
                    if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3)
                                                                              + 0x7FFF8000) )
                    {
                      __asan_report_store4(p_uid);
                    }
                    v40->uid = Uid;
                    v42 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    Group::handleEvent(v42, (EventPtr *)(v3 + 224));
                  }
                  v6 = 0;
                  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 224));
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v52,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/aster_activity.cpp",
                  "selectAsterMidDifficulty",
                  1053);
                v14 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                        &v52,
                        (const char (*)[56])"[ASTER] findAsterMidDifficultyExcelConfig failed, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
                v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v15,
                        (const char (*)[18])" ,difficulty_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 112));
                common::milog::MiLogStream::~MiLogStream(&v52);
                v6 = -1;
              }
            }
          }
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 192));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 160));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
  }
  result = v6;
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1086: range 0000000017925F38-00000000179264E5
int32_t __cdecl AsterActivity::startAsterMidGroups(AsterActivity *const this, uint32_t refresh_id)
{
  std::shared_ptr<Scene> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  unsigned int *v7; // rdx
  Scene *v8; // rax
  unsigned __int64 v9; // rax
  Scene *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int32_t result; // eax
  void (__fastcall *v14)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // [rsp+10h] [rbp-120h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+18h] [rbp-118h]
  std::allocator<unsigned int> __a; // [rsp+37h] [rbp-F9h] BYREF
  unsigned int val; // [rsp+38h] [rbp-F8h] BYREF
  unsigned int camp_id; // [rsp+3Ch] [rbp-F4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-E8h] BYREF
  const ActivityAsterExcelConfigMgr *conf_mgr; // [rsp+50h] [rbp-E0h]
  const data::AsterMidExcelConfig *config_ptr; // [rsp+58h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-D0h]
  const data::AsterMidGroupsExcelConfig *groups_config_ptr; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+70h] [rbp-C0h] BYREF
  std::vector<unsigned int> v26; // [rsp+80h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+A0h] [rbp-90h] BYREF
  char v28[112]; // [rsp+C0h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<Scene> *)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<Scene> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 14 scene_ptr:1087";
  v2[1]._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)AsterActivity::startAsterMidGroups;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(v2 + 2, &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( std::operator==<Scene>(0LL, v2 + 2) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "startAsterMidGroups",
      1090);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v27,
           (const char (*)[40])"[ASTER] getMainWorldScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v6 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__r);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.activity_aster_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
    config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidExcelConfig(conf_mgr, refresh_id);
    if ( config_ptr )
    {
      __for_range = &config_ptr->camp_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->camp_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&config_ptr->camp_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        camp_id = *v7;
        groups_config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidGroupsExcelConfig(conf_mgr, camp_id);
        if ( groups_config_ptr )
        {
          v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
          BlockGroupComp = Scene::getBlockGroupComp(v8);
          if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v9 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            v9 = __asan_report_load8();
          v14 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v9;
          if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)groups_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&groups_config_ptr->group_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          val = groups_config_ptr->group_id;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(&v26, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
          v14(BlockGroupComp, &v26, 0LL, 0LL);
          std::vector<unsigned int>::~vector(&v26);
          std::allocator<unsigned int>::~allocator(&__a);
          v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
          v11 = (unsigned __int64)Scene::getBlockGroupComp(v10);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8();
          v12 = *(_QWORD *)v11 + 96LL;
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, std::vector<unsigned int> *, _QWORD, _QWORD))v12)(
            v11,
            &groups_config_ptr->battle_group_vec,
            0LL,
            0LL);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    v6 = 0;
  }
  std::shared_ptr<Scene>::~shared_ptr(v2 + 2);
  result = v6;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1114: range 00000000179264E6-0000000017926A9C
int32_t __cdecl AsterActivity::clearAsterMidGroups(AsterActivity *const this, uint32_t refresh_id)
{
  std::shared_ptr<Scene> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  unsigned int *v7; // rdx
  Scene *v8; // rax
  unsigned __int64 v9; // rax
  Scene *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int32_t result; // eax
  void (__fastcall *v14)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // [rsp+10h] [rbp-120h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+18h] [rbp-118h]
  std::allocator<unsigned int> __a; // [rsp+37h] [rbp-F9h] BYREF
  unsigned int val; // [rsp+38h] [rbp-F8h] BYREF
  unsigned int camp_id; // [rsp+3Ch] [rbp-F4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-E8h] BYREF
  const ActivityAsterExcelConfigMgr *conf_mgr; // [rsp+50h] [rbp-E0h]
  const data::AsterMidExcelConfig *config_ptr; // [rsp+58h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-D0h]
  const data::AsterMidGroupsExcelConfig *groups_config_ptr; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+70h] [rbp-C0h] BYREF
  std::vector<unsigned int> v26; // [rsp+80h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+A0h] [rbp-90h] BYREF
  char v28[112]; // [rsp+C0h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<Scene> *)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<Scene> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 14 scene_ptr:1120";
  v2[1]._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)AsterActivity::clearAsterMidGroups;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( refresh_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
    std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(v2 + 2, &__r);
    std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
    if ( std::operator==<Scene>(0LL, v2 + 2) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "clearAsterMidGroups",
        1123);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v27,
             (const char (*)[40])"[ASTER] getMainWorldScene failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__r);
      conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.activity_aster_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
      config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidExcelConfig(conf_mgr, refresh_id);
      if ( config_ptr )
      {
        __for_range = &config_ptr->camp_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->camp_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&config_ptr->camp_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          camp_id = *v7;
          groups_config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidGroupsExcelConfig(conf_mgr, camp_id);
          if ( groups_config_ptr )
          {
            v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
            BlockGroupComp = Scene::getBlockGroupComp(v8);
            if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v9 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
            if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
              v9 = __asan_report_load8();
            v14 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v9;
            if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)groups_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&groups_config_ptr->group_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            val = groups_config_ptr->group_id;
            std::allocator<unsigned int>::allocator(&__a);
            std::vector<unsigned int>::vector(&v26, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
            v14(BlockGroupComp, &v26, 1LL);
            std::vector<unsigned int>::~vector(&v26);
            std::allocator<unsigned int>::~allocator(&__a);
            v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
            v11 = (unsigned __int64)Scene::getBlockGroupComp(v10);
            if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
              v11 = __asan_report_load8();
            v12 = *(_QWORD *)v11 + 104LL;
            if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
              v11 = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, std::vector<unsigned int> *, __int64))v12)(
              v11,
              &groups_config_ptr->battle_group_vec,
              1LL);
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      v5 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr(v2 + 2);
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1147: range 0000000017926A9E-0000000017926C3D
void __cdecl AsterActivity::notifyAsterMidInfo(AsterActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::AsterMidInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  proto::AsterMidDetailInfo *v5; // rdx
  Player *player; // r14
  std::shared_ptr<proto::AsterMidInfoNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:1148";
  *(_QWORD *)(v1 + 16) = AsterActivity::notifyAsterMidInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::AsterMidInfoNotify>();
  v4 = std::__shared_ptr_access<proto::AsterMidInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AsterMidInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v5 = proto::AsterMidInfoNotify::mutable_info(v4);
  AsterMidInfo::toClient(&this->aster_mid_, this, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::AsterMidInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::AsterMidInfoNotify>::~shared_ptr((std::shared_ptr<proto::AsterMidInfoNotify> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1154: range 0000000017926C3E-0000000017926DA7
void __cdecl AsterActivity::notifyAsterMidCampInfo(AsterActivity *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<proto::AsterMidCampInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  std::shared_ptr<proto::AsterMidCampInfoNotify> __r; // [rsp+10h] [rbp-70h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 notify_ptr:1156";
  *(_QWORD *)(v2 + 16) = AsterActivity::notifyAsterMidCampInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::AsterMidCampInfoNotify>();
  if ( AsterActivity::isPhaseOpen(this, 2u) )
  {
    v5 = std::__shared_ptr_access<proto::AsterMidCampInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AsterMidCampInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    AsterActivity::fillAsterMidCampInfoNotify(this, v5);
  }
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::AsterMidCampInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::AsterMidCampInfoNotify>::~shared_ptr((std::shared_ptr<proto::AsterMidCampInfoNotify> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1166: range 0000000017926E36-000000001792717D
void __cdecl AsterActivity::broadcastAsterMidCampInfo(AsterActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  std::__shared_ptr_access<proto::AsterMidCampInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<proto::AsterMidCampInfoNotify> v8; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 world_ptr:1167 64 16 15 notify_ptr:1175";
  *(_QWORD *)(v1 + 16) = AsterActivity::broadcastAsterMidCampInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "broadcastAsterMidCampInfo",
      1170);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v9,
           (const char (*)[29])"[ASTER] world is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    common::tools::perf::make_shared<proto::AsterMidCampInfoNotify>();
    if ( AsterActivity::isPhaseOpen(this, 2u) )
    {
      v5 = std::__shared_ptr_access<proto::AsterMidCampInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AsterMidCampInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      AsterActivity::fillAsterMidCampInfoNotify(this, v5);
    }
    v6 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    std::shared_ptr<proto::AsterMidCampInfoNotify>::shared_ptr(
      &v8,
      (const std::shared_ptr<proto::AsterMidCampInfoNotify> *)(v1 + 64));
    std::function<ForeachPolicy ()(Player &)>::function<AsterActivity::broadcastAsterMidCampInfo(void)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v9,
      (AsterActivity::broadcastAsterMidCampInfo::<lambda(Player&)> *)&v8);
    World::foreachPlayer(v6, (std::function<ForeachPolicy(Player&)> *)&v9);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v9);
    AsterActivity::broadcastAsterMidCampInfo(void)::{lambda(Player &)#1}::~Player((AsterActivity::broadcastAsterMidCampInfo::<lambda(Player&)> *const)&v8);
    std::shared_ptr<proto::AsterMidCampInfoNotify>::~shared_ptr((std::shared_ptr<proto::AsterMidCampInfoNotify> *const)(v1 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
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

// Line 1182: range 0000000017926DA8-0000000017926E19
ForeachPolicy __cdecl AsterActivity::broadcastAsterMidCampInfo(void)::{lambda(Player &)#1}::operator()(
        const AsterActivity::broadcastAsterMidCampInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::shared_ptr<proto::AsterMidCampInfoNotify> __r; // [rsp+10h] [rbp-20h] BYREF

  std::dynamic_pointer_cast<google::protobuf::Message const,proto::AsterMidCampInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  return 0;
};

// Line 1182: range 00000000179E6538-00000000179E655D
void __cdecl AsterActivity::broadcastAsterMidCampInfo(void)::{lambda(Player &)#1}::Player(
        AsterActivity::broadcastAsterMidCampInfo::<lambda(Player&)> *const this,
        AsterActivity::broadcastAsterMidCampInfo::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto::AsterMidCampInfoNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
};

// Line 1182: range 00000000179E6628-00000000179E664D
void __cdecl AsterActivity::broadcastAsterMidCampInfo(void)::{lambda(Player &)#1}::Player(
        AsterActivity::broadcastAsterMidCampInfo::<lambda(Player&)> *const this,
        const AsterActivity::broadcastAsterMidCampInfo::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto::AsterMidCampInfoNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
};

// Line 1182: range 0000000017926E1A-0000000017926E34
void __cdecl AsterActivity::broadcastAsterMidCampInfo(void)::{lambda(Player &)#1}::~Player(
        AsterActivity::broadcastAsterMidCampInfo::<lambda(Player&)> *const this)
{
  std::shared_ptr<proto::AsterMidCampInfoNotify>::~shared_ptr(&this->__notify_ptr);
};

// Line 1190: range 000000001792717E-0000000017927805
void __cdecl AsterActivity::fillAsterMidCampInfoNotify(
        AsterActivity *const this,
        proto::AsterMidCampInfoNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActivityAsterExcelConfigMgr *p_activity_aster_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  proto::Vector *v12; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-140h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-138h] BYREF
  const data::AsterMidExcelConfig *config_ptr; // [rsp+20h] [rbp-130h]
  google::protobuf::RepeatedPtrField<proto::AsterMidCampInfo> *proto_camp_list; // [rsp+28h] [rbp-128h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-120h]
  const data::AsterMidGroupsExcelConfig *groups_config_ptr; // [rsp+38h] [rbp-118h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+40h] [rbp-110h]
  proto::AsterMidCampInfo *camp_info; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-100h] BYREF
  std::shared_ptr<Config> v22; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v24; // [rsp+90h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+B0h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+D0h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 camp_id:1204 48 4 13 group_id:1218 64 4 13 scene_id:1219";
  *(_QWORD *)(v2 + 16) = AsterActivity::fillAsterMidCampInfoNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->aster_mid_.refresh_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    p_activity_aster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_aster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidExcelConfig(
                   p_activity_aster_config_mgr,
                   this->aster_mid_.refresh_id);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( config_ptr )
    {
      proto_camp_list = proto::AsterMidCampInfoNotify::mutable_camp_list(notify);
      __for_range = &config_ptr->camp_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->camp_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&config_ptr->camp_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = *v6;
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                &this->aster_mid_.finished_camp_set,
                (const unsigned int *)(v2 + 32)) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v21);
          v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
          groups_config_ptr = data::ActivityAsterExcelConfigMgrBase::findAsterMidGroupsExcelConfig(
                                &v7->design_config.txt_config_mgr.activity_aster_config_mgr,
                                *(_DWORD *)(v2 + 32));
          std::shared_ptr<Config>::~shared_ptr(&v21);
          if ( !groups_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/aster_activity.cpp",
              "fillAsterMidCampInfoNotify",
              1214);
            common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v23,
              (const char (*)[45])"[ASTER] findAsterMidGroupsExcelConfig failed");
            common::milog::MiLogStream::~MiLogStream(&v23);
            break;
          }
          if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)groups_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&groups_config_ptr->group_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = groups_config_ptr->group_id;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v22);
          v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
          *(_DWORD *)(v2 + 64) = LuaConfigMgr::getSceneIdByGroupId(
                                   &v8->design_config.lua_config_mgr,
                                   *(_DWORD *)(v2 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v22);
          group_info_config_ptr = Group::getGroupInfoScriptConfig(*(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48), 0);
          if ( !group_info_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/aster_activity.cpp",
              "fillAsterMidCampInfoNotify",
              1223);
            v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                   &v24,
                   (const char (*)[52])"[ASTER] getGroupInfoScriptConfig failed, group_id: ");
            v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v9,
                    (const unsigned int *)(v2 + 48));
            v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v10,
                    (const char (*)[13])" ,scene_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
            common::milog::MiLogStream::~MiLogStream(&v24);
            break;
          }
          camp_info = google::protobuf::RepeatedPtrField<proto::AsterMidCampInfo>::Add(proto_camp_list);
          proto::AsterMidCampInfo::set_camp_id(camp_info, *(_DWORD *)(v2 + 32));
          Vector3::operator proto::Vector((proto::Vector *)&v25, &group_info_config_ptr->pos);
          v12 = proto::AsterMidCampInfo::mutable_pos(camp_info);
          proto::Vector::operator=(v12, (proto::Vector *)&v25);
          proto::Vector::~Vector((proto::Vector *const)&v25);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "fillAsterMidCampInfoNotify",
        1199);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v25,
        (const char (*)[39])"[ASTER] findAsterMidExcelConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
  }
  if ( v26 == (char *)v2 )
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

// Line 1234: range 0000000017927806-0000000017927973
void __cdecl AsterActivity::clearAsterMid(AsterActivity *const this)
{
  uint32_t refresh_id; // [rsp+1Ch] [rbp-4h]

  if ( *(char *)(((unsigned __int64)&this->aster_mid_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->aster_mid_);
  this->aster_mid_.is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  refresh_id = this->aster_mid_.refresh_id;
  this->aster_mid_.refresh_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aster_mid_.refresh_time);
  }
  this->aster_mid_.refresh_time = 0;
  std::set<unsigned int>::clear(&this->aster_mid_.finished_camp_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.collect_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_mid_.collect_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aster_mid_.collect_count);
  }
  this->aster_mid_.collect_count = 0;
  AsterMidCampBattleInfo::clear(&this->aster_mid_.battle_info);
  AsterActivity::clearAsterMidGroups(this, refresh_id);
  AsterActivity::unregAsterMidObserver(this);
};

// Line 1247: range 0000000017927974-0000000017927B13
void __cdecl AsterActivity::notifyAsterLargeInfo(AsterActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::AsterLargeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  proto::AsterLargeDetailInfo *v5; // rdx
  Player *player; // r14
  std::shared_ptr<proto::AsterLargeInfoNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:1248";
  *(_QWORD *)(v1 + 16) = AsterActivity::notifyAsterLargeInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::AsterLargeInfoNotify>();
  v4 = std::__shared_ptr_access<proto::AsterLargeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AsterLargeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v5 = proto::AsterLargeInfoNotify::mutable_info(v4);
  AsterLargeInfo::toClient(&this->aster_large_, this, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::AsterLargeInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::AsterLargeInfoNotify>::~shared_ptr((std::shared_ptr<proto::AsterLargeInfoNotify> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1254: range 0000000017927B14-0000000017927B62
void __cdecl AsterActivity::clearAsterLarge(AsterActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->aster_large_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->aster_large_);
  this->aster_large_.is_open = 0;
};

// Line 1259: range 0000000017927B64-0000000017927DD7
__int64 __fastcall AsterActivity::checkAddAsterCredit(const AsterActivity *const this, uint32_t add_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 add_num:1258";
  *(_QWORD *)(v2 + 16) = AsterActivity::checkAddAsterCredit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->aster_credit_ && *(_DWORD *)(v2 + 32) + this->aster_credit_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->aster_credit_ || *(_DWORD *)(v2 + 32) + this->aster_credit_ <= *(_DWORD *)(v2 + 32) )
  {
LABEL_15:
    result = 0LL;
  }
  else
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "checkAddAsterCredit",
      1262);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v9,
           (const char (*)[42])"[ASTER] aster credit over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->aster_credit_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 874LL;
  }
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

// Line 1270: range 0000000017927DD8-0000000017927FA8
__int64 __fastcall AsterActivity::checkSubAsterCredit(const AsterActivity *const this, uint32_t sub_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 sub_num:1269";
  *(_QWORD *)(v2 + 16) = AsterActivity::checkSubAsterCredit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->aster_credit_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "checkSubAsterCredit",
      1273);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v9,
           (const char (*)[43])"[ASTER] aster credit not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->aster_credit_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_262431E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 876LL;
  }
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

// Line 1281: range 0000000017927FAA-0000000017928395
int32_t __cdecl AsterActivity::addAsterCredit(
        AsterActivity *const this,
        uint32_t add_num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v9; // ecx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r10d
  int32_t result; // eax
  std::string v14; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  unsigned int add_numa; // [rsp+14h] [rbp-ACh]
  AsterActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_credit; // [rsp+2Ch] [rbp-94h]
  std::string v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v14._anon_0._M_allocated_capacity) = add_num;
  v14._M_string_length = (std::string::size_type)reason;
  v14._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 23 log_context_holder:1287";
  *(_QWORD *)(v4 + 16) = AsterActivity::addAsterCredit;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = AsterActivity::checkAddAsterCredit(this, add_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v14);
    std::string::~string(&v21);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_credit = thisa->aster_credit_;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_credit, add_numa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&thisa->aster_credit_);
    }
    thisa->aster_credit_ = v9;
    if ( is_notifya )
      AsterActivity::notifyAsterMiscInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4();
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4();
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->aster_credit_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_ASTER_CREDIT,
      old_credit,
      thisa->aster_credit_,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v22 == (char *)v4 )
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

// Line 1301: range 0000000017928396-00000000179286E9
int32_t __cdecl AsterActivity::subAsterCredit(
        AsterActivity *const this,
        uint32_t sub_num,
        const SubItemReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  uint32_t sub_numa; // [rsp+14h] [rbp-ACh]
  AsterActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_credit; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = sub_num;
  v12._M_string_length = (std::string::size_type)reason;
  v12._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 23 log_context_holder:1308";
  *(_QWORD *)(v4 + 16) = AsterActivity::subAsterCredit;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = AsterActivity::checkSubAsterCredit(this, sub_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v12);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_credit = thisa->aster_credit_;
    thisa->aster_credit_ = old_credit - sub_numa;
    if ( is_notifya )
      AsterActivity::notifyAsterMiscInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4();
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->aster_credit_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->aster_credit_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_ASTER_CREDIT,
      old_credit,
      thisa->aster_credit_,
      vptr_PlayerCompBase,
      ITEM_LIMIT_NONE,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v20 == (char *)v4 )
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

// Line 1322: range 00000000179286EA-000000001792895D
__int64 __fastcall AsterActivity::checkAddAsterToken(const AsterActivity *const this, uint32_t add_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 add_num:1321";
  *(_QWORD *)(v2 + 16) = AsterActivity::checkAddAsterToken;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->aster_credit_ && *(_DWORD *)(v2 + 32) + this->aster_credit_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->aster_credit_ || *(_DWORD *)(v2 + 32) + this->aster_credit_ <= *(_DWORD *)(v2 + 32) )
  {
LABEL_15:
    result = 0LL;
  }
  else
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "checkAddAsterToken",
      1325);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v9,
           (const char (*)[41])"[ASTER] aster token over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->aster_credit_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 875LL;
  }
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

// Line 1333: range 000000001792895E-0000000017928B26
__int64 __fastcall AsterActivity::checkSubAsterToken(const AsterActivity *const this, uint32_t sub_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 sub_num:1332";
  *(_QWORD *)(v2 + 16) = AsterActivity::checkSubAsterToken;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->aster_token_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "checkSubAsterToken",
      1336);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v9,
           (const char (*)[42])"[ASTER] aster token not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->aster_token_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_262431E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 877LL;
  }
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

// Line 1344: range 0000000017928B28-0000000017928EF6
int32_t __cdecl AsterActivity::addAsterToken(
        AsterActivity *const this,
        uint32_t add_num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v9; // edx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v14; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  unsigned int add_numa; // [rsp+14h] [rbp-ACh]
  AsterActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_token; // [rsp+2Ch] [rbp-94h]
  std::string v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v14._anon_0._M_allocated_capacity) = add_num;
  v14._M_string_length = (std::string::size_type)reason;
  v14._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 23 log_context_holder:1351";
  *(_QWORD *)(v4 + 16) = AsterActivity::addAsterToken;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = AsterActivity::checkAddAsterToken(this, add_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v14);
    std::string::~string(&v21);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_token = thisa->aster_token_;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_token, add_numa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->aster_token_);
    }
    thisa->aster_token_ = v9;
    if ( is_notifya )
      AsterActivity::notifyAsterMiscInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4();
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4();
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->aster_token_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_ASTER_TOKEN,
      old_token,
      thisa->aster_token_,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v22 == (char *)v4 )
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

// Line 1365: range 0000000017928EF8-000000001792923D
int32_t __cdecl AsterActivity::subAsterToken(
        AsterActivity *const this,
        uint32_t sub_num,
        const SubItemReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // esi
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  uint32_t sub_numa; // [rsp+14h] [rbp-ACh]
  AsterActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_token; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = sub_num;
  v12._M_string_length = (std::string::size_type)reason;
  v12._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 23 log_context_holder:1372";
  *(_QWORD *)(v4 + 16) = AsterActivity::subAsterToken;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = AsterActivity::checkSubAsterToken(this, sub_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v12);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_token = thisa->aster_token_;
    thisa->aster_token_ = old_token - sub_numa;
    if ( is_notifya )
      AsterActivity::notifyAsterMiscInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4();
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->aster_token_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_ASTER_TOKEN,
      old_token,
      thisa->aster_token_,
      vptr_PlayerCompBase,
      ITEM_LIMIT_NONE,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v20 == (char *)v4 )
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

// Line 1386: range 000000001792923E-0000000017929469
void __cdecl AsterActivity::notifyAsterMiscInfo(AsterActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::AsterMiscInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  std::__shared_ptr_access<proto::AsterMiscInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  Player *player; // r14
  std::shared_ptr<proto::AsterMiscInfoNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:1387";
  *(_QWORD *)(v1 + 16) = AsterActivity::notifyAsterMiscInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::AsterMiscInfoNotify>();
  v4 = std::__shared_ptr_access<proto::AsterMiscInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AsterMiscInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AsterMiscInfoNotify::set_aster_credit(v4, this->aster_credit_);
  v5 = std::__shared_ptr_access<proto::AsterMiscInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AsterMiscInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::AsterMiscInfoNotify::set_aster_token(v5, this->aster_token_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::AsterMiscInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::AsterMiscInfoNotify>::~shared_ptr((std::shared_ptr<proto::AsterMiscInfoNotify> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1394: range 000000001792946A-0000000017929D50
int32_t __cdecl AsterActivity::takeSpecialReward(AsterActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v11; // r13
  PlayerItemComp *v12; // rax
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t schedule_id; // edx
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  uint32_t reward_id; // [rsp+18h] [rbp-118h]
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  const ActivityAsterExcelConfigMgr *conf_mgr; // [rsp+30h] [rbp-100h]
  const data::AsterActivityPerviewExcelConfig *config_ptr; // [rsp+38h] [rbp-F8h]
  const std::vector<unsigned int> *watcher_vec; // [rsp+40h] [rbp-F0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v25; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+80h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 15 watcher_id:1416 64 24 11 reason:1426";
  *(_QWORD *)(v1 + 16) = AsterActivity::takeSpecialReward;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "takeSpecialReward",
      1397);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v26,
      (const char (*)[32])"[ASTER] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 860;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_special_reward_taken_);
    }
    if ( this->is_special_reward_taken_ )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/aster_activity.cpp",
        "takeSpecialReward",
        1403);
      v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v26,
             (const char (*)[40])"[ASTER] special reward has taken, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 878;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v25);
      conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_aster_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v25);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      config_ptr = ActivityAsterExcelConfigMgr::findAsterPreviewConfig(conf_mgr, this->activity_id_);
      if ( config_ptr )
      {
        watcher_vec = &config_ptr->watcher_list;
        __for_range = &config_ptr->watcher_list;
        __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->watcher_list)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&config_ptr->watcher_list)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 48) = *v6;
          if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                  &this->finished_watcher_id_set_,
                  (const unsigned int *)(v1 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/aster_activity.cpp",
              "takeSpecialReward",
              1420);
            v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                   &v26,
                   (const char (*)[34])"[ASTER] watcher unfinished, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
            v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                   v8,
                   (const char (*)[15])" ,watcher id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v26);
            result = -1;
            goto LABEL_44;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->special_reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->special_reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        reward_id = config_ptr->special_reward_id;
        ActionReason::ActionReason(
          (ActionReason *const)(v1 + 64),
          ACTION_REASON_ASTER_TAKE_SPECIAL_REWARD,
          ITEM_LIMIT_ACTIVITY_ASTER_REWARD);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        ret = PlayerItemComp::checkGrantReward(ItemComp, reward_id, (const ActionReason *)(v1 + 64));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/aster_activity.cpp",
            "takeSpecialReward",
            1430);
          v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v26,
                  (const char (*)[39])"[ASTER] checkGrantReward failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v26);
          result = ret;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v12 = Player::getItemComp(this->player_);
          PlayerItemComp::grantReward(v12, reward_id, (const ActionReason *)(v1 + 64), 0LL);
          if ( *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_store1(&this->is_special_reward_taken_);
          }
          this->is_special_reward_taken_ = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ActivityComp = Player::getActivityComp(this->player_);
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
          PlayerActivityComp::logGetActivityReward(ActivityComp, this->activity_id_, schedule_id, reward_id);
          result = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "takeSpecialReward",
          1411);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v26,
          (const char (*)[38])"[ASTER] findAsterPreviewConfig failed");
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = -1;
      }
    }
  }
LABEL_44:
  if ( v27 == (char *)v1 )
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

// Line 1441: range 0000000017929D52-000000001792A033
void __cdecl AsterActivity::closeAsterContent(AsterActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 battle_ptr:1454";
  *(_QWORD *)(v1 + 16) = AsterActivity::closeAsterContent;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( !this->is_content_closed_ )
  {
    if ( std::operator!=<PlayerUnixTimer>(0LL, &this->aster_little_timer_ptr_) )
    {
      v4 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->aster_little_timer_ptr_);
      if ( common::tools::MiTimer::isActive(v4) )
      {
        v6 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->aster_little_timer_ptr_);
        common::tools::MiTimer::cancel(v6);
      }
    }
    std::weak_ptr<SealEnergyChargeBattle>::lock((const std::weak_ptr<SealEnergyChargeBattle> *const)(v1 + 32));
    if ( std::operator!=<SealEnergyChargeBattle>(0LL, (const std::shared_ptr<SealEnergyChargeBattle> *)(v1 + 32)) )
    {
      v7 = (unsigned __int64)std::__shared_ptr_access<SealEnergyChargeBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SealEnergyChargeBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = *(_QWORD *)v7 + 24LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, _QWORD))v8)(v7, 0LL);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_mid_.refresh_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    AsterActivity::clearAsterMidGroups(this, this->aster_mid_.refresh_id);
    AsterActivity::unregAsterMidObserver(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_content_closed_);
    }
    this->is_content_closed_ = 1;
    AsterActivity::broadcastAsterMidCampInfo(this);
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    std::shared_ptr<SealEnergyChargeBattle>::~shared_ptr((std::shared_ptr<SealEnergyChargeBattle> *const)(v1 + 32));
  }
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1473: range 000000001792A034-000000001792A1DD
uint32_t __cdecl AsterActivity::getAsterContentCloseTime(const AsterActivity *const this)
{
  uint32_t v2; // ecx
  ActivityAsterExcelConfigMgr *conf_mgr; // [rsp+10h] [rbp-50h]
  const data::AsterActivityPerviewExcelConfig *config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_aster_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_ptr = ActivityAsterExcelConfigMgr::findAsterPreviewConfig(conf_mgr, this->activity_id_);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->activity_stay_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->activity_stay_time >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = config_ptr->activity_stay_time + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v2);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "getAsterContentCloseTime",
      1478);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v6,
      (const char (*)[38])"[ASTER] findAsterPreviewConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 1486: range 000000001792A1DE-000000001792A2E7
uint32_t __cdecl AsterActivity::getAsterPhaseBeginTime(const AsterActivity *const this, uint32_t phase)
{
  ActivityAsterExcelConfigMgr *p_activity_aster_config_mgr; // rcx
  uint32_t open_day; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_activity_aster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.activity_aster_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  open_day = ActivityAsterExcelConfigMgr::getAsterPhaseOpenDay(p_activity_aster_config_mgr, this->activity_id_, phase);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
};

// Line 1492: range 000000001792A2E8-000000001792A7CE
void __cdecl AsterActivity::initAbilityGroup(AsterActivity *const this)
{
  ActivityAbilityGroupExcelConfigMgr *p_activity_ability_group_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *i; // rbx
  PlayerAbilityGroupComp *v4; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+0h] [rbp-F0h]
  std::allocator<unsigned int> v6; // [rsp+1Ah] [rbp-D6h] BYREF
  std::allocator<std::string > __a; // [rsp+1Bh] [rbp-D5h] BYREF
  _DWORD __l[5]; // [rsp+1Ch] [rbp-D4h] BYREF
  const std::vector<data::ActivityAbilityGroupRuleConfig> *rule_config_vec_ptr; // [rsp+30h] [rbp-C0h]
  const std::vector<data::ActivityAbilityGroupRuleConfig> *__for_range; // [rsp+38h] [rbp-B8h]
  const data::ActivityAbilityGroupRuleConfig *rule_config; // [rsp+40h] [rbp-B0h]
  const std::string *group_name; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v13; // [rsp+50h] [rbp-A0h] BYREF
  std::vector<unsigned int> avatar_id_vec; // [rsp+60h] [rbp-90h] BYREF
  std::vector<std::string> group_vec; // [rsp+80h] [rbp-70h] BYREF
  common::milog::MiLogStream v16; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_activity_ability_group_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_ability_group_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  rule_config_vec_ptr = ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigVecByActivityId(
                          p_activity_ability_group_config_mgr,
                          this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( rule_config_vec_ptr )
  {
    __for_range = rule_config_vec_ptr;
    *(std::vector<data::ActivityAbilityGroupRuleConfig>::const_iterator *)&__l[1] = std::vector<data::ActivityAbilityGroupRuleConfig>::begin(rule_config_vec_ptr);
    *(std::vector<data::ActivityAbilityGroupRuleConfig>::const_iterator *)&__l[3] = std::vector<data::ActivityAbilityGroupRuleConfig>::end(rule_config_vec_ptr);
    while ( __gnu_cxx::operator!=<data::ActivityAbilityGroupRuleConfig const*,std::vector<data::ActivityAbilityGroupRuleConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ActivityAbilityGroupRuleConfig*,std::vector<data::ActivityAbilityGroupRuleConfig> > *)&__l[1],
              (const __gnu_cxx::__normal_iterator<const data::ActivityAbilityGroupRuleConfig*,std::vector<data::ActivityAbilityGroupRuleConfig> > *)&__l[3]) )
    {
      rule_config = __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupRuleConfig const*,std::vector<data::ActivityAbilityGroupRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ActivityAbilityGroupRuleConfig*,std::vector<data::ActivityAbilityGroupRuleConfig> > *const)&__l[1]);
      group_name = &rule_config->ability_group_name;
      if ( (unsigned __int8)std::string::empty(rule_config) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "initAbilityGroup",
          1504);
        v2 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v16,
               (const char (*)[47])"[ASTER] empty ability group name, activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v16);
        return;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
      std::string::basic_string(&v16, rule_config);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v16), &__a);
      if ( *(_BYTE *)(((unsigned __int64)&rule_config->avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      __l[0] = rule_config->avatar_id;
      std::allocator<unsigned int>::allocator(&v6);
      std::vector<unsigned int>::vector(&avatar_id_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l), &v6);
      PlayerAbilityGroupComp::addAvatarFilterAbilityGroup(AbilityGroupComp, &avatar_id_vec, &group_vec, 0);
      std::vector<unsigned int>::~vector(&avatar_id_vec);
      std::allocator<unsigned int>::~allocator(&v6);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( i = (common::milog::MiLogStream *)&v17; i != &v16; std::string::~string(i) )
        --i;
      __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupRuleConfig const*,std::vector<data::ActivityAbilityGroupRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ActivityAbilityGroupRuleConfig*,std::vector<data::ActivityAbilityGroupRuleConfig> > *const)&__l[1]);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v4);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "initAbilityGroup",
      1496);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      &v16,
      (const char (*)[57])"[ASTER] findActivityAbilityGroupRuleConfigVecPtr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
};

// Line 1514: range 000000001792A7D0-000000001792AEE9
void __cdecl AsterActivity::clearAbilityGroup(AsterActivity *const this)
{
  ActivityAbilityGroupExcelConfigMgr *p_activity_ability_group_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *i; // rbx
  common::milog::MiLogStream *j; // rbx
  PlayerAbilityGroupComp *v5; // rax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-110h]
  std::initializer_list<unsigned int> v7; // [rsp+10h] [rbp-100h]
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+20h] [rbp-F0h]
  PlayerAbilityGroupComp *v9; // [rsp+20h] [rbp-F0h]
  std::allocator<unsigned int> v10; // [rsp+3Ah] [rbp-D6h] BYREF
  std::allocator<std::string > __a; // [rsp+3Bh] [rbp-D5h] BYREF
  _DWORD v12[5]; // [rsp+3Ch] [rbp-D4h] BYREF
  const std::vector<data::ActivityAbilityGroupRuleConfig> *rule_config_vec_ptr; // [rsp+50h] [rbp-C0h]
  const std::vector<data::ActivityAbilityGroupRuleConfig> *__for_range; // [rsp+58h] [rbp-B8h]
  const data::ActivityAbilityGroupRuleConfig *rule_config; // [rsp+60h] [rbp-B0h]
  const std::string *group_name; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Config> v17; // [rsp+70h] [rbp-A0h] BYREF
  std::vector<unsigned int> avatar_id_vec; // [rsp+80h] [rbp-90h] BYREF
  std::vector<std::string> group_vec; // [rsp+A0h] [rbp-70h] BYREF
  common::milog::MiLogStream v20; // [rsp+C0h] [rbp-50h] BYREF
  _BYTE v21[48]; // [rsp+E0h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_activity_ability_group_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_ability_group_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  rule_config_vec_ptr = ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigVecByActivityId(
                          p_activity_ability_group_config_mgr,
                          this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( rule_config_vec_ptr )
  {
    __for_range = rule_config_vec_ptr;
    *(std::vector<data::ActivityAbilityGroupRuleConfig>::const_iterator *)&v12[1] = std::vector<data::ActivityAbilityGroupRuleConfig>::begin(rule_config_vec_ptr);
    *(std::vector<data::ActivityAbilityGroupRuleConfig>::const_iterator *)&v12[3] = std::vector<data::ActivityAbilityGroupRuleConfig>::end(rule_config_vec_ptr);
    while ( __gnu_cxx::operator!=<data::ActivityAbilityGroupRuleConfig const*,std::vector<data::ActivityAbilityGroupRuleConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ActivityAbilityGroupRuleConfig*,std::vector<data::ActivityAbilityGroupRuleConfig> > *)&v12[1],
              (const __gnu_cxx::__normal_iterator<const data::ActivityAbilityGroupRuleConfig*,std::vector<data::ActivityAbilityGroupRuleConfig> > *)&v12[3]) )
    {
      rule_config = __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupRuleConfig const*,std::vector<data::ActivityAbilityGroupRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ActivityAbilityGroupRuleConfig*,std::vector<data::ActivityAbilityGroupRuleConfig> > *const)&v12[1]);
      group_name = &rule_config->ability_group_name;
      if ( (unsigned __int8)std::string::empty(rule_config) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/aster_activity.cpp",
          "clearAbilityGroup",
          1526);
        v2 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v20,
               (const char (*)[47])"[ASTER] empty ability group name, activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v20);
        return;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
      std::string::basic_string(&v20, rule_config);
      __l._M_array = (std::initializer_list<std::string >::iterator)&v20;
      __l._M_len = 1LL;
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, __l, &__a);
      if ( *(_BYTE *)(((unsigned __int64)&rule_config->avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v12[0] = rule_config->avatar_id;
      v7._M_array = v12;
      v7._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&v10);
      std::vector<unsigned int>::vector(&avatar_id_vec, v7, &v10);
      PlayerAbilityGroupComp::delAvatarFilterAbilityGroup(AbilityGroupComp, &avatar_id_vec, &group_vec);
      std::vector<unsigned int>::~vector(&avatar_id_vec);
      std::allocator<unsigned int>::~allocator(&v10);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( i = (common::milog::MiLogStream *)v21; i != &v20; std::string::~string(i) )
        --i;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = Player::getAbilityGroupComp(this->player_);
      std::string::basic_string(&v20, rule_config);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v20), &__a);
      if ( *(_BYTE *)(((unsigned __int64)&rule_config->avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v12[0] = rule_config->avatar_id;
      std::allocator<unsigned int>::allocator(&v10);
      std::vector<unsigned int>::vector(
        &avatar_id_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, v12),
        &v10);
      PlayerAbilityGroupComp::delAvatarFilterAbilityGroup(v9, &avatar_id_vec, &group_vec);
      std::vector<unsigned int>::~vector(&avatar_id_vec);
      std::allocator<unsigned int>::~allocator(&v10);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( j = (common::milog::MiLogStream *)v21; j != &v20; std::string::~string(j) )
        --j;
      __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupRuleConfig const*,std::vector<data::ActivityAbilityGroupRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ActivityAbilityGroupRuleConfig*,std::vector<data::ActivityAbilityGroupRuleConfig> > *const)&v12[1]);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v5);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/aster_activity.cpp",
      "clearAbilityGroup",
      1518);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      &v20,
      (const char (*)[57])"[ASTER] findActivityAbilityGroupRuleConfigVecPtr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
};

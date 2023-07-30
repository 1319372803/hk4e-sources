// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/char_amusement_activity.cpp

// Line 25: range 000000001794FA0E-000000001794FB0B
void __cdecl CharAmusementStageData::fromBin(
        CharAmusementStageData *const this,
        const proto::CharAmusementStageBin *bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  uint32_t v4; // ecx

  v2 = proto::CharAmusementStageBin::stage_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = v2;
  is_open = proto::CharAmusementStageBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v4 = proto::CharAmusementStageBin::finish_time(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_time);
  }
  this->finish_time = v4;
};

// Line 32: range 000000001794FB0C-000000001794FC0A
void __cdecl CharAmusementStageData::toBin(const CharAmusementStageData *const this, proto::CharAmusementStageBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CharAmusementStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::CharAmusementStageBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CharAmusementStageBin::set_finish_time(bin, this->finish_time);
};

// Line 39: range 000000001794FC0C-000000001794FD0A
void __cdecl CharAmusementStageData::toClient(
        const CharAmusementStageData *const this,
        proto::CharAmusementStageData *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CharAmusementStageData::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::CharAmusementStageData::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CharAmusementStageData::set_finish_time(proto, this->finish_time);
};

// Line 46: range 000000001794FD0C-000000001794FF57
int32_t __cdecl CharAmusementActivity::fromScheduleBin(
        CharAmusementActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v6; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::CharAmusementStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  google::protobuf::RepeatedPtrField<proto::CharAmusementStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const proto::CharAmusementScheduleBin *schedule_bin; // [rsp+28h] [rbp-78h]
  const google::protobuf::RepeatedPtrField<proto::CharAmusementStageBin> *__for_range; // [rsp+30h] [rbp-70h]
  const proto::CharAmusementStageBin *stage_bin; // [rsp+38h] [rbp-68h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 stage_data:51";
  *(_QWORD *)(v2 + 16) = CharAmusementActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  std::map<unsigned int,CharAmusementStageData>::clear(&this->stage_data_map_);
  schedule_bin = proto::ActivityScheduleBin::char_amusement_bin(bin);
  __for_range = proto::CharAmusementScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CharAmusementStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CharAmusementStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CharAmusementStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::CharAmusementStageBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    CharAmusementStageData::fromBin((CharAmusementStageData *const)(v2 + 32), stage_bin);
    v5 = (unsigned __int64)std::map<unsigned int,CharAmusementStageData>::operator[](
                             &this->stage_data_map_,
                             (const std::map<unsigned int,CharAmusementStageData>::key_type *)(v2 + 32));
    if ( (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v5 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 11) & 7) >= *(_BYTE *)(((v5 + 11) >> 3) + 0x7FFF8000) )
    {
      v5 = __asan_report_store_n(v5, 12LL);
    }
    *(_QWORD *)v5 = *(_QWORD *)(v2 + 32);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v2 + 40);
    google::protobuf::internal::RepeatedPtrIterator<proto::CharAmusementStageBin const>::operator++(&__for_begin);
  }
  v6 = proto::CharAmusementScheduleBin::in_dungeon_guid_list(schedule_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(v6, &this->in_dungeon_avatar_guid_vec_);
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

// Line 60: range 000000001794FF58-0000000017950048
int32_t __cdecl CharAmusementActivity::toScheduleBin(
        const CharAmusementActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<long unsigned int> *v2; // rax
  std::map<unsigned int,CharAmusementStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,CharAmusementStageData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::CharAmusementScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,CharAmusementStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,CharAmusementStageData> *v8; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,CharAmusementStageData> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,CharAmusementStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::CharAmusementStageBin *stage_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_char_amusement_bin(bin);
  __for_range = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,CharAmusementStageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CharAmusementStageData>::end(&this->stage_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CharAmusementStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,CharAmusementStageData>(v8);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,CharAmusementStageData> >::type *)std::get<1ul,unsigned int const,CharAmusementStageData>(v8);
    stage_bin = proto::CharAmusementScheduleBin::add_stage_bin_list(schedule_bin);
    CharAmusementStageData::toBin(stage_data, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CharAmusementStageData>>::operator++(&__for_begin);
  }
  v2 = proto::CharAmusementScheduleBin::mutable_in_dungeon_guid_list(schedule_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned long,unsigned long>(&this->in_dungeon_avatar_guid_vec_, v2);
  return 0;
};

// Line 72: range 000000001795004A-000000001795023F
int32_t __cdecl CharAmusementActivity::toClient(CharAmusementActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,CharAmusementStageData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,CharAmusementStageData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::CharAmusementDetailInfo *detail_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,CharAmusementStageData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,CharAmusementStageData> *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,CharAmusementStageData> >::type *_; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,CharAmusementStageData> >::type *stage_data; // [rsp+50h] [rbp-40h]
  proto::CharAmusementStageData *stage_data_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/char_amusement_activity.cpp",
      "toClient",
      75);
    v2 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v15,
           (const char (*)[60])"[CHAR_AMUSEMENT] BaseActivity::toClient fails, schedule_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_char_amusement_info(activity_info);
    __for_range = &this->stage_data_map_;
    __for_begin._M_node = std::map<unsigned int,CharAmusementStageData>::begin(&this->stage_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,CharAmusementStageData>::end(&this->stage_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,CharAmusementStageData>(v11);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,CharAmusementStageData> >::type *)std::get<1ul,unsigned int const,CharAmusementStageData>(v11);
      stage_data_info = proto::CharAmusementDetailInfo::add_stage_data_list(detail_info);
      CharAmusementStageData::toClient(stage_data, stage_data_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 88: range 0000000017950240-000000001795029D
int32_t __cdecl CharAmusementActivity::init(CharAmusementActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    CharAmusementActivity::registerObserver(this);
  return 0;
};

// Line 98: range 000000001795029E-0000000017950545
void __cdecl CharAmusementActivity::onPreStart(CharAmusementActivity *const this)
{
  uint32_t v1; // ecx
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  const std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig> *stage_map; // [rsp+30h] [rbp-60h]
  const std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> *v8; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> >::type *stage_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> >::type *stage_config; // [rsp+50h] [rbp-40h]
  CharAmusementStageData *stage_data; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+60h] [rbp-30h] BYREF

  std::map<unsigned int,CharAmusementStageData>::clear(&this->stage_data_map_);
  stage_map = &CharAmusementActivity::getConfigMgr(this)->activity_char_amusement_stage_excel_config_map;
  __for_range = stage_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::begin(stage_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::end(stage_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::ActivityCharAmusementStageExcelConfig>(v8);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCharAmusementStageExcelConfig>(v8);
    stage_data = std::map<unsigned int,CharAmusementStageData>::operator[](&this->stage_data_map_, stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v1 = *stage_id;
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(stage_data);
    }
    stage_data->stage_id = v1;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&stage_data->is_open);
    }
    stage_data->is_open = 0;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store4(&stage_data->finish_time);
    }
    stage_data->finish_time = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/char_amusement_activity.cpp",
    "onPreStart",
    108);
  v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v12,
         (const char (*)[34])"[CHAR_AMUSEMENT] onPreStart, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v12);
};

// Line 112: range 0000000017950546-0000000017950560
void __cdecl CharAmusementActivity::onStart(CharAmusementActivity *const this)
{
  CharAmusementActivity::registerObserver(this);
};

// Line 117: range 0000000017950562-000000001795057C
void __cdecl CharAmusementActivity::onSettle(CharAmusementActivity *const this)
{
  CharAmusementActivity::unregisterObserver(this);
};

// Line 122: range 000000001795057E-00000000179505D7
void __cdecl CharAmusementActivity::onDailyRefresh(CharAmusementActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 131: range 00000000179505D8-000000001795060A
void __cdecl CharAmusementActivity::onClear(CharAmusementActivity *const this)
{
  std::map<unsigned int,CharAmusementStageData>::clear(&this->stage_data_map_);
  std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
};

// Line 137: range 000000001795060C-000000001795066E
void __cdecl CharAmusementActivity::onLogin(CharAmusementActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    CharAmusementActivity::recallInDungeonAvatars(this);
  BaseActivity::onLogin(this);
};

// Line 146: range 0000000017950670-00000000179508D4
void __cdecl CharAmusementActivity::registerObserver(CharAmusementActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::weak_ptr<CharAmusementActivity> *p_this_wtr; // [rsp+10h] [rbp-C0h]
  std::weak_ptr<CharAmusementActivity> v5; // [rsp+20h] [rbp-B0h] BYREF
  std::weak_ptr<Observer> __r; // [rsp+30h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:147 64 16 12 this_wtr:148";
  *(_QWORD *)(v1 + 16) = CharAmusementActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<CharAmusementActivity>((CharAmusementActivity *)(v1 + 32));
  std::weak_ptr<CharAmusementActivity>::weak_ptr<CharAmusementActivity,void>(
    (std::weak_ptr<CharAmusementActivity> *const)(v1 + 64),
    (const std::shared_ptr<CharAmusementActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<CharAmusementActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<CharAmusementActivity>::weak_ptr(&v5, (const std::weak_ptr<CharAmusementActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<CharAmusementActivity,LeaveSceneEvent>(
      (PlayerEventComp *const)&__r,
      p_this_wtr,
      (void (*)(CharAmusementActivity *, const LeaveSceneEvent *))&v5);
    std::weak_ptr<Observer>::operator=(&this->leave_scene_wtr_, &__r);
    std::weak_ptr<Observer>::~weak_ptr(&__r);
    std::weak_ptr<CharAmusementActivity>::~weak_ptr(&v5);
  }
  std::weak_ptr<CharAmusementActivity>::~weak_ptr((std::weak_ptr<CharAmusementActivity> *const)(v1 + 64));
  std::shared_ptr<CharAmusementActivity>::~shared_ptr((std::shared_ptr<CharAmusementActivity> *const)(v1 + 32));
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

// Line 156: range 00000000179508D6-00000000179508E0
void __cdecl CharAmusementActivity::unregisterObserver(CharAmusementActivity *const this)
{
  ;
};

// Line 161: range 00000000179508E2-0000000017950E60
int32_t __cdecl CharAmusementActivity::execAction(
        CharAmusementActivity *const this,
        const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::pointer v12; // rdx
  bool *p_is_open; // rax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  unsigned __int64 val; // [rsp+30h] [rbp-100h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 6 id:177 64 8 8 iter:180 96 24 16 stage_id_vec:171";
  *(_QWORD *)(v3 + 16) = CharAmusementActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_CHAR_AMUSEMENT_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
             &action_exec->param,
             (std::vector<unsigned int> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/char_amusement_activity.cpp",
          "execAction",
          174);
        v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v19,
               (const char (*)[24])"strVecToNumVec falied: ");
        common::milog::MiLogStream::operator<<<std::string>(v8, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v2 = -1;
        v9 = 0;
      }
      else
      {
        __for_range = (std::vector<unsigned int> *)(v3 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 48) = *v10;
          *(std::map<unsigned int,CharAmusementStageData>::iterator *)(v3 + 64) = std::map<unsigned int,CharAmusementStageData>::find(
                                                                                    &this->stage_data_map_,
                                                                                    (const std::map<unsigned int,CharAmusementStageData>::key_type *)(v3 + 48));
          val = (unsigned __int64)std::map<unsigned int,CharAmusementStageData>::end(&this->stage_data_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self *)(v3 + 64),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self *)&val) )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/char_amusement_activity.cpp",
              "execAction",
              183);
            v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v19,
                    (const char (*)[35])"[CHAR_AMUSEMENT] id not invaild : ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v19);
            v2 = -1;
            v9 = 0;
            goto LABEL_21;
          }
          v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> > *const)(v3 + 64));
          p_is_open = &v12->second.is_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(p_is_open);
          }
          v12->second.is_open = 1;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        BaseActivity::notifyClientData(this, 0);
        v9 = 1;
      }
LABEL_21:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( v9 )
        v2 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/char_amusement_activity.cpp",
        "execAction",
        168);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v19,
             (const char (*)[19])"action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_262413A0);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v2 = -1;
    }
  }
  else
  {
    v2 = BaseActivity::execAction(this, action_exec);
  }
  result = v2;
  if ( v20 == (char *)v3 )
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
  return result;
};

// Line 198: range 0000000017950E62-0000000017950EB4
const ActivityCharAmusementExcelConfigMgr *__cdecl CharAmusementActivity::getConfigMgr(
        const CharAmusementActivity *const this)
{
  ActivityCharAmusementExcelConfigMgr *p_activity_char_amusement_config_mgr; // rbx
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  p_activity_char_amusement_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3)->design_config.txt_config_mgr.activity_char_amusement_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v3);
  return p_activity_char_amusement_config_mgr;
};

// Line 203: range 0000000017950EB6-000000001795113C
_BOOL8 __fastcall CharAmusementActivity::isOpenByStageId(const CharAmusementActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CharAmusementStageData> >::pointer v9; // rdx
  bool *p_is_open; // rax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:202 64 8 8 iter:204";
  *(_QWORD *)(v2 + 16) = CharAmusementActivity::isOpenByStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,CharAmusementStageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,CharAmusementStageData>::find(
                                                                                  &this->stage_data_map_,
                                                                                  (const std::map<unsigned int,CharAmusementStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,CharAmusementStageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/char_amusement_activity.cpp",
      "isOpenByStageId",
      207);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v13,
           (const char (*)[51])"[CHAR_AMUSEMENT] find stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CharAmusementStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CharAmusementStageData> > *const)(v2 + 64));
    p_is_open = &v9->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = v9->second.is_open;
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

// Line 214: range 000000001795113E-0000000017951625
__int64 __fastcall CharAmusementActivity::openStageByGm(CharAmusementActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  CharAmusementStageData *stage_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:213 64 8 8 iter:215";
  *(_QWORD *)(v2 + 16) = CharAmusementActivity::openStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,CharAmusementStageData>::iterator *)(v2 + 64) = std::map<unsigned int,CharAmusementStageData>::find(
                                                                            &this->stage_data_map_,
                                                                            (const std::map<unsigned int,CharAmusementStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,CharAmusementStageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/char_amusement_activity.cpp",
      "openStageByGm",
      218);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v19,
           (const char (*)[51])"[CHAR_AMUSEMENT] find stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
    goto LABEL_19;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> > *const)(v2 + 64));
  stage_data = &v9->second;
  p_is_open = &v9->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( stage_data->is_open )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/char_amusement_activity.cpp",
      "openStageByGm",
      224);
    v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v19,
            (const char (*)[43])"[CHAR_AMUSEMENT] stage has open, stage_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&stage_data->is_open);
  }
  stage_data->is_open = 1;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/char_amusement_activity.cpp",
    "openStageByGm",
    228);
  v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v19,
          (const char (*)[32])"[CHAR_AMUSEMENT] open stage_id:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  common::milog::MiLogStream::~MiLogStream(&v19);
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_19:
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
  return result;
};

// Line 234: range 0000000017951626-0000000017951B15
__int64 __fastcall CharAmusementActivity::finishStageByGm(CharAmusementActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::pointer v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  CharAmusementStageData *stage_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:233 64 8 8 iter:235";
  *(_QWORD *)(v2 + 16) = CharAmusementActivity::finishStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,CharAmusementStageData>::iterator *)(v2 + 64) = std::map<unsigned int,CharAmusementStageData>::find(
                                                                            &this->stage_data_map_,
                                                                            (const std::map<unsigned int,CharAmusementStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,CharAmusementStageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/char_amusement_activity.cpp",
      "finishStageByGm",
      238);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"[CHAR_AMUSEMENT] find stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
    goto LABEL_19;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> > *const)(v2 + 64));
  stage_data = &v9->second;
  if ( *(_BYTE *)(((unsigned __int64)&v9->second.finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second.finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( stage_data->finish_time )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/char_amusement_activity.cpp",
      "finishStageByGm",
      244);
    v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v18,
            (const char (*)[44])"[CHAR_AMUSEMENT] stage has finsh, stage_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_store4(&stage_data->finish_time);
  }
  stage_data->finish_time = 100;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/char_amusement_activity.cpp",
    "finishStageByGm",
    249);
  v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v18,
          (const char (*)[33])"[CHAR_AMUSEMENT] finsh stage_id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
  v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
  common::milog::MiLogStream::~MiLogStream(&v18);
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_19:
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
  return result;
};

// Line 255: range 0000000017951B16-0000000017951D02
int32_t __cdecl CharAmusementActivity::resetDataByGm(CharAmusementActivity *const this)
{
  uint32_t v1; // ecx
  std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig> *stage_map; // [rsp+20h] [rbp-30h]
  const std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> >::type *stage_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> >::type *stage_config; // [rsp+40h] [rbp-10h]
  CharAmusementStageData *stage_data; // [rsp+48h] [rbp-8h]

  std::map<unsigned int,CharAmusementStageData>::clear(&this->stage_data_map_);
  stage_map = &CharAmusementActivity::getConfigMgr(this)->activity_char_amusement_stage_excel_config_map;
  __for_range = stage_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::begin(stage_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::end(stage_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::ActivityCharAmusementStageExcelConfig>(v7);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCharAmusementStageExcelConfig>(v7);
    stage_data = std::map<unsigned int,CharAmusementStageData>::operator[](&this->stage_data_map_, stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v1 = *stage_id;
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(stage_data);
    }
    stage_data->stage_id = v1;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&stage_data->is_open);
    }
    stage_data->is_open = 0;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store4(&stage_data->finish_time);
    }
    stage_data->finish_time = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  return 0;
};

// Line 272: range 0000000017951D04-0000000017952403
void __fastcall CharAmusementActivity::onMultistagePlayEnd(
        CharAmusementActivity *const this,
        uint32_t stage_id,
        bool is_succ,
        uint32_t finish_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::pointer v16; // rax
  PlayerEventComp *EventComp; // r14
  char is_new_record; // [rsp+2Bh] [rbp-125h]
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self __y; // [rsp+30h] [rbp-120h] BYREF
  CharAmusementStageData *stage_data; // [rsp+38h] [rbp-118h]
  std::shared_ptr<CharAmusementFinishStageEvent> __r; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+80h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 stage_id:271 64 8 8 iter:290 96 32 10 notify:279";
  *(_QWORD *)(v4 + 16) = CharAmusementActivity::onMultistagePlayEnd;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = stage_id;
  if ( !CharAmusementActivity::isOpenByStageId(this, *(_DWORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/char_amusement_activity.cpp",
      "onMultistagePlayEnd",
      275);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v26,
           (const char (*)[43])"[CHAR_AMUSEMENT] stage not open, stage_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    proto::CharAmusementSettleNotify::CharAmusementSettleNotify((proto::CharAmusementSettleNotify *const)(v4 + 96));
    proto::CharAmusementSettleNotify::set_is_succ((proto::CharAmusementSettleNotify *const)(v4 + 96), is_succ);
    if ( !is_succ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 96));
    }
    else
    {
      if ( !finish_time )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/char_amusement_activity.cpp",
          "onMultistagePlayEnd",
          288);
        v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v26,
                (const char (*)[45])"[CHAR_AMUSEMENT] finish_time == 0, stage_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v4 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" is_succ:");
        common::milog::MiLogStream::operator<<(v12, is_succ);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      *(std::map<unsigned int,CharAmusementStageData>::iterator *)(v4 + 64) = std::map<unsigned int,CharAmusementStageData>::find(
                                                                                &this->stage_data_map_,
                                                                                (const std::map<unsigned int,CharAmusementStageData>::key_type *)(v4 + 48));
      __y._M_node = std::map<unsigned int,CharAmusementStageData>::end(&this->stage_data_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> >::_Self *)(v4 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/char_amusement_activity.cpp",
          "onMultistagePlayEnd",
          293);
        v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v26,
                (const char (*)[51])"[CHAR_AMUSEMENT] find stage data failed, stage_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v4 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementStageData> > *const)(v4 + 64));
        stage_data = &v16->second;
        if ( *(_BYTE *)(((unsigned __int64)&v16->second.finish_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->second.finish_time >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        is_new_record = finish_time < stage_data->finish_time;
        if ( !stage_data->finish_time )
          is_new_record = 1;
        if ( is_new_record )
        {
          if ( *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_store4(&stage_data->finish_time);
          }
          stage_data->finish_time = finish_time;
        }
        proto::CharAmusementSettleNotify::set_finish_time(
          (proto::CharAmusementSettleNotify *const)(v4 + 96),
          finish_time);
        proto::CharAmusementSettleNotify::set_is_new_record(
          (proto::CharAmusementSettleNotify *const)(v4 + 96),
          is_new_record);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<CharAmusementFinishStageEvent,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v4 + 48));
        std::shared_ptr<BaseEvent>::shared_ptr<CharAmusementFinishStageEvent,void>(&p_event_ptr, &__r);
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<CharAmusementFinishStageEvent>::~shared_ptr(&__r);
        BaseActivity::notifyClientData(this, 0);
      }
    }
    proto::CharAmusementSettleNotify::~CharAmusementSettleNotify((proto::CharAmusementSettleNotify *const)(v4 + 96));
  }
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 315: range 0000000017952404-0000000017952E2D
__int64 __fastcall CharAmusementDungeonContext::init(
        CharAmusementDungeonContext *const this,
        uint32_t schedule_id,
        uint32_t stage_id,
        const std::set<unsigned int> *uid_set,
        const std::vector<unsigned int> *gm_level_id_vec)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  CharAmusementTrialAvatarInfo *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const std::map<unsigned int,unsigned int> *LevelWeightMap; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // r15d
  common::milog::MiLogStream *v18; // rax
  std::vector<unsigned int>::size_type v19; // rcx
  __int64 result; // rax
  unsigned int i; // [rsp+38h] [rbp-158h]
  unsigned int level_count; // [rsp+3Ch] [rbp-154h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-150h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-148h] BYREF
  const ActivityCharAmusementExcelConfigMgr *config_mgr; // [rsp+50h] [rbp-140h]
  const data::ActivityCharAmusementOverallExcelConfig *overall_config_ptr; // [rsp+58h] [rbp-138h]
  const std::set<unsigned int> *__for_range; // [rsp+60h] [rbp-130h]
  const data::ActivityCharAmusementStageExcelConfig *stage_config_ptr; // [rsp+68h] [rbp-128h]
  const std::vector<unsigned int> *same_type_level_id_vec; // [rsp+70h] [rbp-120h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+78h] [rbp-118h]
  const unsigned int *same_type_level_id; // [rsp+80h] [rbp-110h]
  const unsigned int *uid; // [rsp+88h] [rbp-108h]
  std::shared_ptr<Config> v36; // [rsp+90h] [rbp-100h] BYREF
  common::milog::MiLogStream v37; // [rsp+A0h] [rbp-F0h] BYREF
  char v38[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 32 4 12 level_id:362 48 4 15 schedule_id:314 64 4 12 stage_id:314 80 48 20 level_weight_map:354";
  *(_QWORD *)(v6 + 16) = CharAmusementDungeonContext::init;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = 61956;
  v8[536862724] = -202116109;
  *(_DWORD *)(v6 + 48) = schedule_id;
  *(_DWORD *)(v6 + 64) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.activity_char_amusement_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v36);
  overall_config_ptr = data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementOverallExcelConfig(
                         config_mgr,
                         *(_DWORD *)(v6 + 48));
  if ( !overall_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/char_amusement_activity.cpp",
      "init",
      320);
    v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v37,
           (const char (*)[40])"overall config not found, schedule_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v5 = -1;
    goto LABEL_37;
  }
  __for_range = uid_set;
  __for_begin._M_node = std::set<unsigned int>::begin(uid_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(uid_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    uid = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    memset(&v37, 0, 24);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)&v37);
    LOBYTE(v37.ostr_) = 0;
    v10 = std::map<unsigned int,CharAmusementTrialAvatarInfo>::operator[](&this->uid_avatar_info_map, uid);
    CharAmusementTrialAvatarInfo::operator=(v10, (CharAmusementTrialAvatarInfo *)&v37);
    CharAmusementTrialAvatarInfo::~CharAmusementTrialAvatarInfo((CharAmusementTrialAvatarInfo *const)&v37);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  stage_config_ptr = data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementStageExcelConfig(
                       config_mgr,
                       *(_DWORD *)(v6 + 64));
  if ( !stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/char_amusement_activity.cpp",
      "init",
      332);
    v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v37,
            (const char (*)[35])"stage config not found, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v6 + 64));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v5 = -1;
    goto LABEL_37;
  }
  v12 = *(_DWORD *)(v6 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id);
  }
  this->stage_id = v12;
  if ( !std::vector<unsigned int>::empty(&stage_config_ptr->level_list) )
  {
    std::vector<unsigned int>::operator=(&this->level_id_vec, &stage_config_ptr->level_list);
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/char_amusement_activity.cpp",
      "init",
      340);
    v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v37, (const char (*)[15])"level id vec: ");
    common::milog::MiLogStream::operator<<<unsigned int>(v13, &this->level_id_vec);
    common::milog::MiLogStream::~MiLogStream(&v37);
LABEL_36:
    v5 = 0;
    goto LABEL_37;
  }
  if ( !std::vector<unsigned int>::empty(gm_level_id_vec) )
  {
    std::vector<unsigned int>::operator=(&this->level_id_vec, gm_level_id_vec);
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/char_amusement_activity.cpp",
      "init",
      348);
    v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v37, (const char (*)[18])"gm level id vec: ");
    common::milog::MiLogStream::operator<<<unsigned int>(v14, &this->level_id_vec);
    common::milog::MiLogStream::~MiLogStream(&v37);
    goto LABEL_36;
  }
  if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->random_level_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)overall_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->random_level_count >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_count = overall_config_ptr->random_level_count;
  LevelWeightMap = ActivityCharAmusementExcelConfigMgr::getLevelWeightMap(config_mgr, *(_DWORD *)(v6 + 48));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v6 + 80), LevelWeightMap);
  for ( i = 0; level_count > i; ++i )
  {
    if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v6 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/char_amusement_activity.cpp",
        "init",
        359);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v37,
        (const char (*)[27])"level weight map is empty!");
      common::milog::MiLogStream::~MiLogStream(&v37);
      v5 = -1;
LABEL_29:
      v17 = 0;
      goto LABEL_35;
    }
    *(_DWORD *)(v6 + 32) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
           (const std::map<unsigned int,unsigned int> *)(v6 + 80),
           (unsigned int *)(v6 + 32),
           0) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/char_amusement_activity.cpp",
        "init",
        365);
      v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v37,
              (const char (*)[25])"weightSelectOne failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v16,
        (const std::map<unsigned int,unsigned int> *)(v6 + 80));
      common::milog::MiLogStream::~MiLogStream(&v37);
      v5 = -1;
      goto LABEL_29;
    }
    std::vector<unsigned int>::emplace_back<unsigned int &>(
      &this->level_id_vec,
      (unsigned int *)(v6 + 32),
      (unsigned int *)(v6 + 32));
    same_type_level_id_vec = ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(
                               config_mgr,
                               *(_DWORD *)(v6 + 48),
                               *(_DWORD *)(v6 + 32));
    __for_range_0 = same_type_level_id_vec;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin(same_type_level_id_vec)._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      same_type_level_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      std::map<unsigned int,unsigned int>::erase(
        (std::map<unsigned int,unsigned int> *const)(v6 + 80),
        same_type_level_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
  }
  common::milog::MiLogStream::create(
    &v37,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/char_amusement_activity.cpp",
    "init",
    377);
  v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v37,
          (const char (*)[24])"selected level id vec: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v18, &this->level_id_vec);
  common::milog::MiLogStream::~MiLogStream(&v37);
  v19 = std::vector<unsigned int>::size(&this->level_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->random_level_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)overall_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->random_level_count >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( v19 == overall_config_ptr->random_level_count )
  {
    v17 = 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/char_amusement_activity.cpp",
      "init",
      380);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v37,
      (const char (*)[43])"random level count != level_id_vec.size()!");
    common::milog::MiLogStream::~MiLogStream(&v37);
    v5 = -1;
    v17 = 0;
  }
LABEL_35:
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v6 + 80));
  if ( v17 == 1 )
    goto LABEL_36;
LABEL_37:
  result = v5;
  if ( v38 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
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

// Line 389: range 0000000017952E2E-0000000017953C69
int32_t __cdecl CharAmusementDungeonContext::randomAssignTrialAvatar(CharAmusementDungeonContext *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  CharAmusementDungeonContext *v11; // rdx
  std::vector<unsigned int>::reference v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::pointer v15; // rax
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::vector<unsigned int>::size_type v25; // rax
  std::vector<unsigned int>::const_reference v26; // rdx
  std::vector<unsigned int>::size_type v27; // rax
  unsigned __int64 v28; // rax
  std::vector<unsigned int>::reference v29; // rdx
  char v30; // al
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  std::vector<unsigned int>::iterator v39; // rax
  int32_t result; // eax
  std::vector<unsigned int>::size_type __last; // [rsp+10h] [rbp-1A0h]
  unsigned int *__lasta; // [rsp+10h] [rbp-1A0h]
  unsigned int trial_avatar_id; // [rsp+24h] [rbp-18Ch]
  std::map<unsigned int,CharAmusementTrialAvatarInfo>::iterator __for_end; // [rsp+28h] [rbp-188h] BYREF
  unsigned __int64 i; // [rsp+30h] [rbp-180h]
  const ActivityCharAmusementExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-178h]
  const data::ActivityCharAmusementLevelExcelConfig *level_config_ptr; // [rsp+40h] [rbp-170h]
  const std::vector<unsigned int> *trial_avatar_id_vec; // [rsp+48h] [rbp-168h]
  unsigned __int64 player_count; // [rsp+50h] [rbp-160h]
  std::map<unsigned int,CharAmusementTrialAvatarInfo> *__for_range; // [rsp+58h] [rbp-158h]
  unsigned __int64 idx; // [rsp+60h] [rbp-150h]
  CharAmusementTrialAvatarInfo *info_0; // [rsp+68h] [rbp-148h]
  const std::pair<unsigned int const,CharAmusementTrialAvatarInfo> *v53; // [rsp+70h] [rbp-140h]
  std::tuple_element<0,const std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::type *uid; // [rsp+78h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::type *_; // [rsp+80h] [rbp-130h]
  CharAmusementTrialAvatarInfo *info; // [rsp+88h] [rbp-128h]
  std::shared_ptr<Config> v57; // [rsp+90h] [rbp-120h] BYREF
  common::milog::MiLogStream v58; // [rsp+A0h] [rbp-110h] BYREF
  char v59[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 16 cur_level_id:405 64 4 7 uid:469 80 4 7 uid:433 96 8 8 iter:428 128 24 19 pending_uid_vec:452";
  *(_QWORD *)(v1 + 16) = CharAmusementDungeonContext::randomAssignTrialAvatar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -218959360;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_cur_level_already_assign_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_cur_level_already_assign_avatar);
  if ( this->is_cur_level_already_assign_avatar )
  {
    common::milog::MiLogStream::create(
      &v58,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/char_amusement_activity.cpp",
      "randomAssignTrialAvatar",
      393);
    v4 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(&v58, (const char (*)[52])off_2624CD20);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_level_idx);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v5, (const char (*)[17])", level_id_vec: ");
    common::milog::MiLogStream::operator<<<unsigned int>(v6, &this->level_id_vec);
    common::milog::MiLogStream::~MiLogStream(&v58);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    __last = this->cur_level_idx;
    if ( __last < std::vector<unsigned int>::size(&this->level_id_vec) )
    {
      v11 = this;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v12 = std::vector<unsigned int>::operator[](&v11->level_id_vec, this->cur_level_idx);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v12;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v57);
      config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.txt_config_mgr.activity_char_amusement_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v57);
      level_config_ptr = data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementLevelExcelConfig(
                           config_mgr,
                           *(_DWORD *)(v1 + 48));
      if ( level_config_ptr )
      {
        trial_avatar_id_vec = &level_config_ptr->trial_avatar_list;
        if ( std::vector<unsigned int>::empty(&level_config_ptr->trial_avatar_list) )
        {
          common::milog::MiLogStream::create(
            &v58,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/char_amusement_activity.cpp",
            "randomAssignTrialAvatar",
            417);
          v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v58,
                  (const char (*)[41])"trial avatar id vec is empty, level_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v58);
          v7 = -1;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_cur_level_already_assign_avatar >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_cur_level_already_assign_avatar);
          this->is_cur_level_already_assign_avatar = 1;
          player_count = std::map<unsigned int,CharAmusementTrialAvatarInfo>::size(&this->uid_avatar_info_map);
          if ( player_count == 1 )
          {
            *(std::map<unsigned int,CharAmusementTrialAvatarInfo>::iterator *)(v1 + 96) = std::map<unsigned int,CharAmusementTrialAvatarInfo>::begin(&this->uid_avatar_info_map);
            __for_end._M_node = std::map<unsigned int,CharAmusementTrialAvatarInfo>::end(&this->uid_avatar_info_map)._M_node;
            if ( std::operator==(
                   (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self *)(v1 + 96),
                   &__for_end) )
            {
              v7 = -1;
            }
            else
            {
              v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> > *const)(v1 + 96));
              if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v1 + 80) = v15->first;
              info = &std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> > *const)(v1 + 96))->second;
              if ( std::vector<unsigned int>::empty(&info->trial_avatar_id_vec) )
                goto LABEL_32;
              if ( *(char *)(((unsigned __int64)&info->is_created >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&info->is_created);
              if ( !info->is_created )
                v16 = 1;
              else
LABEL_32:
                v16 = 0;
              if ( v16 )
              {
                common::milog::MiLogStream::create(
                  &v58,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/char_amusement_activity.cpp",
                  "randomAssignTrialAvatar",
                  439);
                v17 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                        &v58,
                        (const char (*)[58])"prev trial avatar is not created, prev_trial_avatar_vec: ");
                v18 = common::milog::MiLogStream::operator<<<unsigned int>(v17, &info->trial_avatar_id_vec);
                v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v18,
                        (const char (*)[13])", level_id: ");
                v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v19,
                        (const unsigned int *)(v1 + 48));
                v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])", uid: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v1 + 80));
                common::milog::MiLogStream::~MiLogStream(&v58);
              }
              std::vector<unsigned int>::operator=(&info->trial_avatar_id_vec, trial_avatar_id_vec);
              if ( *(char *)(((unsigned __int64)&info->is_created >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(&info->is_created);
              info->is_created = 0;
              common::milog::MiLogStream::create(
                &v58,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/char_amusement_activity.cpp",
                "randomAssignTrialAvatar",
                445);
              v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v58, (const char (*)[8])"assign ");
              v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, &info->trial_avatar_id_vec);
              v24 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v23, (const char (*)[5])off_2624CFE0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v1 + 80));
              common::milog::MiLogStream::~MiLogStream(&v58);
              v7 = 0;
            }
          }
          else
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
            __for_range = &this->uid_avatar_info_map;
            *(std::map<unsigned int,CharAmusementTrialAvatarInfo>::iterator *)(v1 + 96) = std::map<unsigned int,CharAmusementTrialAvatarInfo>::begin(&this->uid_avatar_info_map);
            __for_end._M_node = std::map<unsigned int,CharAmusementTrialAvatarInfo>::end(__for_range)._M_node;
            while ( std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self *)(v1 + 96),
                      &__for_end) )
            {
              v53 = std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> > *const)(v1 + 96));
              uid = std::get<0ul,unsigned int const,CharAmusementTrialAvatarInfo>(v53);
              _ = (std::tuple_element<1,const std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::type *)std::get<1ul,unsigned int const,CharAmusementTrialAvatarInfo>(v53);
              std::vector<unsigned int>::emplace_back<unsigned int const&>(
                (std::vector<unsigned int> *const)(v1 + 128),
                uid,
                uid);
              std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> > *const)(v1 + 96));
            }
            for ( i = 0LL; i < player_count; ++i )
            {
              v25 = std::vector<unsigned int>::size(trial_avatar_id_vec);
              v26 = std::vector<unsigned int>::operator[](trial_avatar_id_vec, i % v25);
              if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              trial_avatar_id = *v26;
              v27 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 128));
              idx = common::tools::RandomUtils::rand<unsigned long>(0LL, v27 - 1);
              v28 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 128));
              if ( idx >= v28 )
              {
                v7 = -1;
                goto LABEL_61;
              }
              v29 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 128), idx);
              if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v1 + 64) = *v29;
              info_0 = std::map<unsigned int,CharAmusementTrialAvatarInfo>::operator[](
                         &this->uid_avatar_info_map,
                         (const std::map<unsigned int,CharAmusementTrialAvatarInfo>::key_type *)(v1 + 64));
              if ( std::vector<unsigned int>::empty(&info_0->trial_avatar_id_vec) )
                goto LABEL_54;
              if ( *(char *)(((unsigned __int64)&info_0->is_created >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&info_0->is_created);
              if ( !info_0->is_created )
                v30 = 1;
              else
LABEL_54:
                v30 = 0;
              if ( v30 )
              {
                common::milog::MiLogStream::create(
                  &v58,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/char_amusement_activity.cpp",
                  "randomAssignTrialAvatar",
                  476);
                v31 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                        &v58,
                        (const char (*)[58])"prev trial avatar is not created, prev_trial_avatar_vec: ");
                v32 = common::milog::MiLogStream::operator<<<unsigned int>(v31, &info_0->trial_avatar_id_vec);
                v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v32,
                        (const char (*)[13])", level_id: ");
                v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v33,
                        (const unsigned int *)(v1 + 48));
                v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])", uid: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v35,
                  (const unsigned int *)(v1 + 64));
                common::milog::MiLogStream::~MiLogStream(&v58);
              }
              *(_DWORD *)(v1 + 80) = trial_avatar_id;
              std::vector<unsigned int>::operator=(
                &info_0->trial_avatar_id_vec,
                (std::initializer_list<unsigned int>)__PAIR128__(1LL, v1 + 80));
              if ( *(char *)(((unsigned __int64)&info_0->is_created >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(&info_0->is_created);
              info_0->is_created = 0;
              common::milog::MiLogStream::create(
                &v58,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/char_amusement_activity.cpp",
                "randomAssignTrialAvatar",
                482);
              v36 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v58, (const char (*)[8])"assign ");
              v37 = common::milog::MiLogStream::operator<<<unsigned int>(v36, &info_0->trial_avatar_id_vec);
              v38 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v37, (const char (*)[5])off_2624CFE0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v1 + 64));
              common::milog::MiLogStream::~MiLogStream(&v58);
              __lasta = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 128))._M_current;
              v39._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 128))._M_current;
              *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(v39, (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__lasta, (const unsigned int *)(v1 + 64));
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
                (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 96));
              std::vector<unsigned int>::erase(
                (std::vector<unsigned int> *const)(v1 + 128),
                (std::vector<unsigned int>::const_iterator)__for_end._M_node);
            }
            v7 = 0;
LABEL_61:
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v58,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/char_amusement_activity.cpp",
          "randomAssignTrialAvatar",
          410);
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v58,
                (const char (*)[35])"level config not found, level_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v58);
        v7 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/char_amusement_activity.cpp",
        "randomAssignTrialAvatar",
        400);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v58, (const char (*)[16])"cur_level_idx: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->cur_level_idx);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])", level_id_vec: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v10, &this->level_id_vec);
      common::milog::MiLogStream::~MiLogStream(&v58);
      v7 = -1;
    }
  }
  result = v7;
  if ( v59 == (char *)v1 )
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
  return result;
};

// Line 490: range 0000000017953C6A-0000000017953E7E
int32_t __cdecl CharAmusementDungeonContext::checkAndSetNextLevel(CharAmusementDungeonContext *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v5; // rax
  unsigned int next_level_idx; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  next_level_idx = this->cur_level_idx + 1;
  if ( next_level_idx < std::vector<unsigned int>::size(&this->level_id_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_level_idx);
    }
    this->cur_level_idx = next_level_idx;
    if ( *(char *)(((unsigned __int64)&this->is_cur_level_already_assign_avatar >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_cur_level_already_assign_avatar);
    this->is_cur_level_already_assign_avatar = 0;
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/char_amusement_activity.cpp",
      "checkAndSetNextLevel",
      500);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"cur_level_idx: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_level_idx);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/char_amusement_activity.cpp",
      "checkAndSetNextLevel",
      495);
    v1 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"cur_level_idx: ");
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->cur_level_idx);
    v3 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v2, (const char (*)[17])", level_id_vec: ");
    common::milog::MiLogStream::operator<<<unsigned int>(v3, &this->level_id_vec);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
};

// Line 505: range 0000000017953E80-0000000017954410
CharAmusementActivity *__fastcall CharAmusementActivity::createActivityDungeon(
        CharAmusementActivity *const this,
        const CharAmusementActivity *stage_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  const data::ActivityCharAmusementExcelConfigMgrBase *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  GameserverService *v10; // rax
  DungeonMgr *p_dungeon_mgr; // r14
  common::milog::MiLogStream *v12; // rax
  const ActivityCharAmusementExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-D8h]
  const data::ActivityCharAmusementOverallExcelConfig *overall_config_ptr; // [rsp+38h] [rbp-C8h]
  std::enable_shared_from_this<Player> v17; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 stage_id:504 64 16 21 dungeon_scene_ptr:526";
  *(_QWORD *)(v3 + 16) = CharAmusementActivity::createActivityDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  if ( !BaseActivity::isOpening(stage_id, 0) || BaseActivity::isSettled(stage_id) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/char_amusement_activity.cpp",
      "createActivityDungeon",
      509);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v18, (const char (*)[16])"activity closed");
    common::milog::MiLogStream::~MiLogStream(&v18);
    std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
  }
  else
  {
    config_mgr = CharAmusementActivity::getConfigMgr(stage_id);
    if ( data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementStageExcelConfig(
           config_mgr,
           *(_DWORD *)(v3 + 48)) )
    {
      v8 = config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&stage_id->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_id->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      overall_config_ptr = data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementOverallExcelConfig(
                             v8,
                             stage_id->schedule_id_);
      if ( overall_config_ptr )
      {
        v10 = ServiceBox::findService<GameserverService>();
        p_dungeon_mgr = &GameserverService::getGameThreadLocal(v10)->dungeon_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&stage_id->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        std::enable_shared_from_this<Player>::shared_from_this(&v17);
        if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        DungeonMgr::createDungeon(
          (DungeonMgr *const)(v3 + 64),
          p_dungeon_mgr,
          (PlayerPtr *)overall_config_ptr->dungeon_id,
          (const std::shared_ptr<Player> *)&v17);
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v17);
        if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/char_amusement_activity.cpp",
            "createActivityDungeon",
            529);
          v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v18,
                  (const char (*)[36])"create dungeon failed, dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &overall_config_ptr->dungeon_id);
          common::milog::MiLogStream::~MiLogStream(&v18);
          std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
        }
        else
        {
          std::shared_ptr<DungeonScene>::shared_ptr(
            (std::shared_ptr<DungeonScene> *const)this,
            (std::shared_ptr<DungeonScene> *)(v3 + 64));
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/char_amusement_activity.cpp",
          "createActivityDungeon",
          522);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v18,
               (const char (*)[40])"overall config not found, schedule_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &stage_id->schedule_id_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/char_amusement_activity.cpp",
        "createActivityDungeon",
        516);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v18,
             (const char (*)[28])"stage not found, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
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
  return this;
};

// Line 536: range 0000000017954412-0000000017954594
void __cdecl CharAmusementActivity::onLeaveSceneEvent(CharAmusementActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DungeonScene *v5; // rax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 dungeon_scene_ptr:538";
  *(_QWORD *)(v2 + 16) = CharAmusementActivity::onLeaveSceneEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::isEnterByCharAmusementActivity(v5) )
      CharAmusementActivity::recallInDungeonAvatars(this);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
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

// Line 552: range 0000000017954596-000000001795472C
void __cdecl CharAmusementActivity::recallInDungeonAvatars(CharAmusementActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( !std::vector<unsigned long>::empty(&this->in_dungeon_avatar_guid_vec_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/char_amusement_activity.cpp",
      "recallInDungeonAvatars",
      557);
    v1 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v4,
           (const char (*)[25])"recallInDungeonAvatars: ");
    common::milog::MiLogStream::operator<<<unsigned long>(v1, &this->in_dungeon_avatar_guid_vec_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(AvatarComp, &this->in_dungeon_avatar_guid_vec_) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/char_amusement_activity.cpp",
        "recallInDungeonAvatars",
        560);
      v3 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v4,
             (const char (*)[64])"delInformalAvatarBatchAndReplaceByAvatarTeam failed, guid_vec: ");
      common::milog::MiLogStream::operator<<<unsigned long>(v3, &this->in_dungeon_avatar_guid_vec_);
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
    std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
  }
};

// Line 566: range 000000001795472E-0000000017954C70
void __cdecl CharAmusementActivity::setInDungeonAvatarsAndRecallOld(
        CharAmusementActivity *const this,
        std::vector<long unsigned int> *p_guid_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  PlayerAvatarComp *AvatarComp; // rcx
  char v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerAvatarComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::vector<long unsigned int> *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  unsigned __int64 replace_avatar_guid; // [rsp+40h] [rbp-D0h]
  const unsigned __int64 *guid; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Avatar> __a; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 24 need_recall_guid_vec:568";
  *(_QWORD *)(v2 + 16) = CharAmusementActivity::setInDungeonAvatarsAndRecallOld;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v2 + 32));
  __for_range = &this->in_dungeon_avatar_guid_vec_;
  __for_begin._M_current = std::vector<unsigned long>::begin(&this->in_dungeon_avatar_guid_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(&this->in_dungeon_avatar_guid_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    guid = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
    v5 = 0;
    if ( common::tools::MiscUtils::isContains<unsigned long>(p_guid_vec, guid) )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)&__a, (uint64_t)AvatarComp);
    v5 = 1;
    if ( std::operator!=<Avatar>(&__a, 0LL) )
      v7 = 1;
    else
LABEL_13:
      v7 = 0;
    if ( v5 )
      std::shared_ptr<Avatar>::~shared_ptr(&__a);
    if ( v7 )
      std::vector<unsigned long>::emplace_back<unsigned long const&>(
        (std::vector<long unsigned int> *const)(v2 + 32),
        guid,
        guid);
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  if ( std::vector<unsigned long>::empty(p_guid_vec) )
  {
    v8 = 0LL;
  }
  else
  {
    v9 = (unsigned __int64)std::vector<unsigned long>::front(p_guid_vec);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v8 = *(_QWORD *)v9;
  }
  replace_avatar_guid = v8;
  if ( !std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/char_amusement_activity.cpp",
      "setInDungeonAvatarsAndRecallOld",
      579);
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v21,
            (const char (*)[22])"need recall avatars: ");
    common::milog::MiLogStream::operator<<<unsigned long>(v10, (const std::vector<long unsigned int> *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Player::getAvatarComp(this->player_);
    if ( PlayerAvatarComp::delInformalAvatarBatch(
           v11,
           (const std::vector<long unsigned int> *)(v2 + 32),
           replace_avatar_guid,
           0) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/char_amusement_activity.cpp",
        "setInDungeonAvatarsAndRecallOld",
        582);
      v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v21,
              (const char (*)[39])"delInDungeonAvatars failed, guid_vec: ");
      common::milog::MiLogStream::operator<<<unsigned long>(v12, (const std::vector<long unsigned int> *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
  }
  v13 = std::move<std::vector<unsigned long> &>(p_guid_vec);
  std::vector<unsigned long>::operator=(&this->in_dungeon_avatar_guid_vec_, v13);
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/char_amusement_activity.cpp",
    "setInDungeonAvatarsAndRecallOld",
    587);
  v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v21,
          (const char (*)[21])"in dungeon avatars: ");
  common::milog::MiLogStream::operator<<<unsigned long>(v14, &this->in_dungeon_avatar_guid_vec_);
  common::milog::MiLogStream::~MiLogStream(&v21);
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v2 + 32));
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

// Line 591: range 0000000017954CB2-0000000017955D11
int32_t __cdecl CharAmusementActivity::initEnterSceneAvatar(
        CharAmusementActivity *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  std::shared_ptr<Avatar> *v14; // rdx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  uint32_t v22; // esi
  common::milog::MiLogStream *v23; // rax
  _BOOL4 v24; // r15d
  PlayerAvatarComp *v25; // r15
  common::milog::MiLogStream *v26; // rax
  int v27; // r15d
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  unsigned __int64 *v29; // rdx
  common::milog::MiLogStream *v30; // r15
  unsigned __int64 v31; // rax
  void (__fastcall **v32)(common::milog::MiLogStream *, unsigned __int64); // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r15
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::shared_ptr<TrialAvatar> *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  DungeonScene *v38; // rax
  int32_t result; // eax
  unsigned int SceneId; // [rsp+38h] [rbp-298h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-294h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-290h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-288h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+50h] [rbp-280h] BYREF
  CharAmusementDungeonContext *context; // [rsp+58h] [rbp-278h]
  CharAmusementTrialAvatarInfo *info; // [rsp+60h] [rbp-270h]
  const std::vector<unsigned int> *trial_avatar_id_vec; // [rsp+68h] [rbp-268h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+70h] [rbp-260h]
  const unsigned int *trial_avatar_id; // [rsp+78h] [rbp-258h]
  std::vector<long unsigned int> *__for_range; // [rsp+80h] [rbp-250h]
  const unsigned __int64 *guid; // [rsp+88h] [rbp-248h]
  std::shared_ptr<Avatar> __r; // [rsp+90h] [rbp-240h] BYREF
  common::milog::MiLogStream v55; // [rsp+A0h] [rbp-230h] BYREF
  common::milog::MiLogStream v56; // [rsp+C0h] [rbp-210h] BYREF
  char v57[496]; // [rsp+E0h] [rbp-1F0h] BYREF

  v5 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(448LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 32 8 8 iter:647 64 16 21 dungeon_scene_ptr:597 96 16 20 trial_avatar_ptr:659 128 16 20 trial_a"
                        "vatar_ptr:624 160 32 16 grant_record:665 224 40 12 commiter:607 304 104 15 context_opt:637";
  *(_QWORD *)(v5 + 16) = CharAmusementActivity::initEnterSceneAvatar;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862726] = -218959118;
  v7[536862728] = -218959360;
  v7[536862729] = 62194;
  v7[536862732] = -218103808;
  v7[536862733] = -202116109;
  if ( std::operator==<Scene>(p_dest_scene_ptr, 0LL) )
  {
    v4 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v5 + 64));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/char_amusement_activity.cpp",
        "initEnterSceneAvatar",
        600);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(&v56, (const char (*)[43])off_2624D540);
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dest_scene_ptr);
      val = Scene::getSceneId(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v4 = -1;
    }
    else
    {
      std::function<void ()(void)>::function<CharAmusementActivity::initEnterSceneAvatar(std::shared_ptr<Scene>,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)::{lambda(void)#1},void,void>(
        (std::function<void()> *const)&v56,
        (CharAmusementActivity::initEnterSceneAvatar::<lambda()>)this);
      common::tools::ScopedCommitter::ScopedCommitter(
        (common::tools::ScopedCommitter *const)(v5 + 224),
        (std::function<void()> *)&v56);
      std::function<void ()(void)>::~function((std::function<void()> *const)&v56);
      if ( !std::vector<unsigned long>::empty(&this->in_dungeon_avatar_guid_vec_) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getCurAvatar((Player *const)&__r);
        std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, &__r);
        std::shared_ptr<Avatar>::~shared_ptr(&__r);
        if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/char_amusement_activity.cpp",
            "initEnterSceneAvatar",
            619);
          v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v56, (const char (*)[42])off_2624D5A0);
          common::milog::MiLogStream::operator<<<unsigned long>(v10, &this->in_dungeon_avatar_guid_vec_);
          common::milog::MiLogStream::~MiLogStream(&v56);
          v4 = -1;
        }
        else
        {
          __for_range = &this->in_dungeon_avatar_guid_vec_;
          __for_end_0._M_current = (const unsigned int *)std::vector<unsigned long>::begin(&this->in_dungeon_avatar_guid_vec_)._M_current;
          __for_end._M_current = std::vector<unsigned long>::end(&this->in_dungeon_avatar_guid_vec_)._M_current;
          while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
                    (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)&__for_end_0,
                    &__for_end) )
          {
            guid = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_end_0);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            AvatarComp = Player::getAvatarComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v5 + 128), (uint64_t)AvatarComp);
            if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v5 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/char_amusement_activity.cpp",
                "initEnterSceneAvatar",
                627);
              v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      &v56,
                      (const char (*)[25])"avatar not found, guid: ");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, guid);
              common::milog::MiLogStream::~MiLogStream(&v56);
              v4 = -1;
              v13 = 0;
            }
            else
            {
              v14 = std::move<std::shared_ptr<Avatar> &>((std::shared_ptr<Avatar> *)(v5 + 128));
              std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr<Avatar>>(
                enter_scene_avatar_vec,
                v14,
                v14);
              v13 = 1;
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
            if ( v13 != 1 )
              goto LABEL_59;
            __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_end_0);
          }
          common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v5 + 224));
          v4 = 0;
        }
      }
      else
      {
        v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        DungeonScene::getDungeonExtraData<CharAmusementDungeonContext>(
          (std::optional<CharAmusementDungeonContext> *)(v5 + 304),
          v15);
        if ( !std::optional<CharAmusementDungeonContext>::has_value((const std::optional<CharAmusementDungeonContext> *const)(v5 + 304)) )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/char_amusement_activity.cpp",
            "initEnterSceneAvatar",
            640);
          v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(&v56, (const char (*)[52])off_2624D640);
          v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dest_scene_ptr);
          SceneId = Scene::getSceneId(v17);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &SceneId);
          v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v18,
                  (const char (*)[15])", dungeon_id: ");
          v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          val = DungeonScene::getDungeonId(v20);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v56);
          v4 = -1;
        }
        else
        {
          context = std::optional<CharAmusementDungeonContext>::value((std::optional<CharAmusementDungeonContext> *const)(v5 + 304));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          *(std::map<unsigned int,CharAmusementTrialAvatarInfo>::iterator *)(v5 + 32) = std::map<unsigned int,CharAmusementTrialAvatarInfo>::find(
                                                                                          &context->uid_avatar_info_map,
                                                                                          &val);
          __for_end._M_current = (unsigned __int64 *)std::map<unsigned int,CharAmusementTrialAvatarInfo>::end(&context->uid_avatar_info_map)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self *)(v5 + 32),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self *)&__for_end) )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/char_amusement_activity.cpp",
              "initEnterSceneAvatar",
              650);
            v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v56,
                    (const char (*)[52])off_2624D6E0);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            common::milog::MiLogStream::~MiLogStream(&v56);
            v4 = -1;
          }
          else
          {
            info = &std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> > *const)(v5 + 32))->second;
            trial_avatar_id_vec = &info->trial_avatar_id_vec;
            __for_range_0 = &info->trial_avatar_id_vec;
            __for_begin_0._M_current = std::vector<unsigned int>::begin(&info->trial_avatar_id_vec)._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              trial_avatar_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v22 = (unsigned int)Player::getAvatarComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)trial_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v5 + 96), v22, *trial_avatar_id);
              if ( std::operator==<TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v5 + 96), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v56,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/char_amusement_activity.cpp",
                  "initEnterSceneAvatar",
                  662);
                v23 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        &v56,
                        (const char (*)[46])"create trial avatar failed, trial_avatar_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, trial_avatar_id);
                common::milog::MiLogStream::~MiLogStream(&v56);
                v4 = -1;
                v24 = 0;
              }
              else
              {
                proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v5 + 160));
                proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v5 + 160), 0xDu);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v25 = Player::getAvatarComp(this->player_);
                std::shared_ptr<TrialAvatar>::shared_ptr(
                  (std::shared_ptr<TrialAvatar> *const)&__r,
                  (const std::shared_ptr<TrialAvatar> *)(v5 + 96));
                PlayerAvatarComp::addTrialAvatar(
                  (PlayerAvatarComp *const)(v5 + 128),
                  (TrialAvatarPtr *)v25,
                  (const proto::TrialAvatarGrantRecord *)&__r);
                LOBYTE(v25) = std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v5 + 128));
                std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v5 + 128));
                std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)&__r);
                if ( (_BYTE)v25 )
                {
                  common::milog::MiLogStream::create(
                    &v56,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/char_amusement_activity.cpp",
                    "initEnterSceneAvatar",
                    669);
                  v26 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          &v56,
                          (const char (*)[43])off_2624D7A0);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, trial_avatar_id);
                  common::milog::MiLogStream::~MiLogStream(&v56);
                  v4 = -1;
                  v27 = 0;
                }
                else
                {
                  if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
                  {
                    std::dynamic_pointer_cast<Avatar,TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v5 + 128));
                    std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (std::shared_ptr<Avatar> *)(v5 + 128));
                    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
                  }
                  v28 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                  __for_end._M_current = (unsigned __int64 *)Avatar::getGuid(v28);
                  std::vector<unsigned long>::emplace_back<unsigned long>(
                    &this->in_dungeon_avatar_guid_vec_,
                    (unsigned __int64 *)&__for_end,
                    v29);
                  common::milog::MiLogStream::create(
                    &v55,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/char_amusement_activity.cpp",
                    "initEnterSceneAvatar",
                    679);
                  v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          &v55,
                          (const char (*)[16])"enter dungeon: ");
                  v31 = (unsigned __int64)std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
                    v31 = __asan_report_load8();
                  v32 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v31;
                  if ( *(_BYTE *)((*(_QWORD *)v31 >> 3) + 0x7FFF8000LL) )
                    v31 = __asan_report_load8();
                  (*v32)(&v56, v31);
                  v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v30,
                          (const std::string *)&v56);
                  v34 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v33,
                          (const char (*)[9])", guid: ");
                  v35 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                  __for_end._M_current = (unsigned __int64 *)Avatar::getGuid(v35);
                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v34,
                    (const unsigned __int64 *)&__for_end);
                  std::string::~string(&v56);
                  common::milog::MiLogStream::~MiLogStream(&v55);
                  v36 = std::move<std::shared_ptr<TrialAvatar> &>((std::shared_ptr<TrialAvatar> *)(v5 + 96));
                  std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr<TrialAvatar>>(
                    enter_scene_avatar_vec,
                    v36,
                    v36);
                  v27 = 1;
                }
                proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v5 + 160));
                v24 = v27 == 1;
              }
              std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v5 + 96));
              if ( !v24 )
                goto LABEL_58;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/char_amusement_activity.cpp",
              "initEnterSceneAvatar",
              682);
            v37 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v56,
                    (const char (*)[21])"in dungeon avatars: ");
            common::milog::MiLogStream::operator<<<unsigned long>(v37, &this->in_dungeon_avatar_guid_vec_);
            common::milog::MiLogStream::~MiLogStream(&v56);
            if ( *(char *)(((unsigned __int64)&info->is_created >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&info->is_created);
            info->is_created = 1;
            v38 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
            DungeonScene::setDungeonExtraData<CharAmusementDungeonContext>(v38, context);
            common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v5 + 224));
            v4 = 0;
          }
        }
LABEL_58:
        std::optional<CharAmusementDungeonContext>::~optional((std::optional<CharAmusementDungeonContext> *const)(v5 + 304));
      }
LABEL_59:
      common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v5 + 224));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v5 + 64));
  }
  result = v4;
  if ( v57 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 607: range 0000000017954C72-0000000017954CB0
void __cdecl CharAmusementActivity::initEnterSceneAvatar(std::shared_ptr<Scene>,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)::{lambda(void)#1}::operator()(
        const CharAmusementActivity::initEnterSceneAvatar::<lambda()> *const __closure)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CharAmusementActivity::recallInDungeonAvatars(__closure->__this);
};

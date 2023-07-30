// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/sea_lamp_v3_activity.cpp

// Line 27: range 0000000017FC8178-0000000017FC8279
int32_t __cdecl SeaLampV3RaceLevelData::fromBin(
        SeaLampV3RaceLevelData *const this,
        const proto::SeaLampV3RaceLevelBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  const proto::SeaLampV3RaceLevelBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::SeaLampV3RaceLevelBin::level_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->level_id = v2;
  is_open = proto::SeaLampV3RaceLevelBin::is_open(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, bin, v7);
  this->is_open = is_open;
  v8 = proto::SeaLampV3RaceLevelBin::max_score(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->max_score, bin, v10);
  this->max_score = v8;
  return 0;
};

// Line 35: range 0000000017FC827A-0000000017FC837C
int32_t __cdecl SeaLampV3RaceLevelData::toBin(
        const SeaLampV3RaceLevelData *const this,
        proto::SeaLampV3RaceLevelBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SeaLampV3RaceLevelBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SeaLampV3RaceLevelBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_score);
  }
  proto::SeaLampV3RaceLevelBin::set_max_score(bin, this->max_score);
  return 0;
};

// Line 43: range 0000000017FC837E-0000000017FC8480
int32_t __cdecl SeaLampV3RaceLevelData::toClient(
        const SeaLampV3RaceLevelData *const this,
        proto::SeaLampV3RaceLevelInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SeaLampV3RaceLevelInfo::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SeaLampV3RaceLevelInfo::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_score);
  }
  proto::SeaLampV3RaceLevelInfo::set_max_score(proto, this->max_score);
  return 0;
};

// Line 51: range 0000000017FC8482-0000000017FC8604
uint32_t __cdecl SeaLampV3RaceLevelData::getGroupBundleId(const SeaLampV3RaceLevelData *const this)
{
  ActivitySeaLampV3ExcelConfigMgr *p_activity_sea_lamp_v3_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  const data::LanV3RaceExcelConfig *level_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_activity_sea_lamp_v3_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  level_config_ptr = data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3RaceExcelConfig(
                       p_activity_sea_lamp_v3_config_mgr,
                       this->level_id);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_link_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config_ptr->group_link_id);
    }
    return level_config_ptr->group_link_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "getGroupBundleId",
      55);
    v2 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v6,
           (const char (*)[52])"[LAN_V3] findLanV3RaceExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->level_id);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 62: range 0000000017FC8606-0000000017FC8780
uint32_t __cdecl SeaLampV3RaceLevelData::getGalleryId(const SeaLampV3RaceLevelData *const this)
{
  ActivitySeaLampV3ExcelConfigMgr *p_activity_sea_lamp_v3_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  const data::LanV3RaceExcelConfig *level_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_activity_sea_lamp_v3_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  level_config_ptr = data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3RaceExcelConfig(
                       p_activity_sea_lamp_v3_config_mgr,
                       this->level_id);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config_ptr->gallery_id);
    }
    return level_config_ptr->gallery_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "getGalleryId",
      66);
    v2 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v6,
           (const char (*)[52])"[LAN_V3] findLanV3RaceExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->level_id);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 73: range 0000000017FC8782-0000000017FC8A06
int32_t __cdecl SeaLampV3RaceData::fromBin(SeaLampV3RaceData *const this, const proto::SeaLampV3RaceBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  SeaLampV3RaceLevelData *v5; // r15
  unsigned int *v6; // rcx
  SeaLampV3RaceLevelData *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::SeaLampV3RaceLevelBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::SeaLampV3RaceLevelBin>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::SeaLampV3RaceLevelBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::SeaLampV3RaceLevelBin *level_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-90h] BYREF
  char v17[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 level_data:77";
  *(_QWORD *)(v2 + 16) = SeaLampV3RaceData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  std::map<unsigned int,SeaLampV3RaceLevelData>::clear(&this->level_data_map);
  __for_range = proto::SeaLampV3RaceBin::level_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SeaLampV3RaceLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SeaLampV3RaceLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampV3RaceLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampV3RaceLevelBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    SeaLampV3RaceLevelData::fromBin((SeaLampV3RaceLevelData *const)(v2 + 32), level_bin);
    v5 = std::move<SeaLampV3RaceLevelData &>((SeaLampV3RaceLevelData *)(v2 + 32));
    val = proto::SeaLampV3RaceLevelBin::level_id(level_bin);
    v8 = std::map<unsigned int,SeaLampV3RaceLevelData>::emplace<unsigned int,SeaLampV3RaceLevelData>(
           &this->level_data_map,
           &val,
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "fromBin",
        81);
      v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v16,
             (const char (*)[56])"[LAN_V3] race data fromBin failed, duplicated level_id:");
      val = proto::SeaLampV3RaceLevelBin::level_id(level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampV3RaceLevelBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 88: range 0000000017FC8A08-0000000017FC8ABE
int32_t __cdecl SeaLampV3RaceData::toBin(const SeaLampV3RaceData *const this, proto::SeaLampV3RaceBin *bin)
{
  std::map<unsigned int,SeaLampV3RaceLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,SeaLampV3RaceLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,SeaLampV3RaceLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,SeaLampV3RaceLevelData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::SeaLampV3RaceLevelBin *level_bin; // [rsp+48h] [rbp-8h]

  __for_range = &this->level_data_map;
  __for_begin._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::begin(&this->level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::end(&this->level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,SeaLampV3RaceLevelData>(v6);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *)std::get<1ul,unsigned int const,SeaLampV3RaceLevelData>(v6);
    level_bin = proto::SeaLampV3RaceBin::add_level_bin_list(bin);
    SeaLampV3RaceLevelData::toBin(level_data, level_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 98: range 0000000017FC8AC0-0000000017FC8B76
int32_t __cdecl SeaLampV3RaceData::toClient(const SeaLampV3RaceData *const this, proto::SeaLampV3RaceInfo *proto)
{
  std::map<unsigned int,SeaLampV3RaceLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,SeaLampV3RaceLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,SeaLampV3RaceLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,SeaLampV3RaceLevelData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::SeaLampV3RaceLevelInfo *level_info; // [rsp+48h] [rbp-8h]

  __for_range = &this->level_data_map;
  __for_begin._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::begin(&this->level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::end(&this->level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,SeaLampV3RaceLevelData>(v6);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *)std::get<1ul,unsigned int const,SeaLampV3RaceLevelData>(v6);
    level_info = proto::SeaLampV3RaceInfo::add_level_info_list(proto);
    SeaLampV3RaceLevelData::toClient(level_data, level_info);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 108: range 0000000017FC8B78-0000000017FC8D5D
int32_t __cdecl SeaLampV3RaceData::init(SeaLampV3RaceData *const this)
{
  __int64 v1; // rsi
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::unordered_map<unsigned int,data::LanV3RaceExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::LanV3RaceExcelConfig> *v12; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::LanV3RaceExcelConfig> >::type *level_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV3RaceExcelConfig> >::type *_; // [rsp+40h] [rbp-20h]
  SeaLampV3RaceLevelData *level_data; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr.lan_v3_race_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::LanV3RaceExcelConfig>(v12);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV3RaceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV3RaceExcelConfig>(v12);
    level_data = std::map<unsigned int,SeaLampV3RaceLevelData>::operator[](&this->level_data_map, level_id);
    v1 = ((unsigned __int8)level_id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level_id);
    }
    v2 = *level_id;
    v3 = *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000);
    LOBYTE(v1) = v3 != 0;
    v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)level_data & 7) + 3) >= v3);
    if ( (_BYTE)v4 )
      __asan_report_store4(level_data, v1, v4);
    level_data->level_id = v2;
    v5 = ((_BYTE)level_data + 4) & 7;
    v6 = (*(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store1(&level_data->is_open, v5, v6);
    level_data->is_open = 0;
    v7 = (*(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store4(&level_data->max_score, (((_BYTE)level_data + 8) & 7u) + 3, v7);
    level_data->max_score = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 120: range 0000000017FC8D5E-0000000017FC8D78
void __cdecl SeaLampV3RaceData::clear(SeaLampV3RaceData *const this)
{
  std::map<unsigned int,SeaLampV3RaceLevelData>::clear(&this->level_data_map);
};

// Line 126: range 0000000017FC8D7A-0000000017FC8E7B
int32_t __cdecl SeaLampV3ShadowLevelData::fromBin(
        SeaLampV3ShadowLevelData *const this,
        const proto::SeaLampV3ShadowLevelBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  const proto::SeaLampV3ShadowLevelBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::SeaLampV3ShadowLevelBin::level_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->level_id = v2;
  is_open = proto::SeaLampV3ShadowLevelBin::is_open(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, bin, v7);
  this->is_open = is_open;
  v8 = proto::SeaLampV3ShadowLevelBin::min_finish_time(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->min_finish_time, bin, v10);
  this->min_finish_time = v8;
  return 0;
};

// Line 134: range 0000000017FC8E7C-0000000017FC8F7E
int32_t __cdecl SeaLampV3ShadowLevelData::toBin(
        const SeaLampV3ShadowLevelData *const this,
        proto::SeaLampV3ShadowLevelBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SeaLampV3ShadowLevelBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SeaLampV3ShadowLevelBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->min_finish_time);
  }
  proto::SeaLampV3ShadowLevelBin::set_min_finish_time(bin, this->min_finish_time);
  return 0;
};

// Line 142: range 0000000017FC8F80-0000000017FC9082
int32_t __cdecl SeaLampV3ShadowLevelData::toClient(
        const SeaLampV3ShadowLevelData *const this,
        proto::SeaLampV3ShadowLevelInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SeaLampV3ShadowLevelInfo::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SeaLampV3ShadowLevelInfo::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->min_finish_time);
  }
  proto::SeaLampV3ShadowLevelInfo::set_min_finish_time(proto, this->min_finish_time);
  return 0;
};

// Line 150: range 0000000017FC9084-0000000017FC93B4
int32_t __cdecl SeaLampV3ShadowStageData::fromBin(
        SeaLampV3ShadowStageData *const this,
        const proto::SeaLampV3ShadowStageBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  bool is_open; // cl
  char v8; // dl
  __int64 v9; // rdx
  SeaLampV3ShadowLevelData *v10; // r15
  unsigned int *v11; // rcx
  SeaLampV3ShadowLevelData *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >,bool> v13; // rax
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  const proto::SeaLampV3ShadowStageBin *bina; // [rsp+10h] [rbp-D0h]
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowLevelBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowLevelBin>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowLevelBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::SeaLampV3ShadowLevelBin *level_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-90h] BYREF
  char v23[112]; // [rsp+70h] [rbp-70h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 14 level_data:156";
  *(_QWORD *)(v2 + 16) = SeaLampV3ShadowStageData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  v5 = proto::SeaLampV3ShadowStageBin::stage_id(bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(this, bin, v5);
  }
  this->stage_id = v5;
  is_open = proto::SeaLampV3ShadowStageBin::is_open(bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_open, bin, v9);
  this->is_open = is_open;
  std::map<unsigned int,SeaLampV3ShadowLevelData>::clear(&this->level_data_map);
  __for_range = proto::SeaLampV3ShadowStageBin::level_bin_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampV3ShadowLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampV3ShadowLevelBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    SeaLampV3ShadowLevelData::fromBin((SeaLampV3ShadowLevelData *const)(v2 + 32), level_bin);
    v10 = std::move<SeaLampV3ShadowLevelData &>((SeaLampV3ShadowLevelData *)(v2 + 32));
    val = proto::SeaLampV3ShadowLevelBin::level_id(level_bin);
    v13 = std::map<unsigned int,SeaLampV3ShadowLevelData>::emplace<unsigned int,SeaLampV3ShadowLevelData>(
            &this->level_data_map,
            &val,
            v10,
            v11,
            v12);
    if ( !v13.second )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "fromBin",
        160);
      v14 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              &v22,
              (const char (*)[64])"[LAN_V3] shadow level data fromBin failed, duplicated level_id:");
      val = proto::SeaLampV3ShadowLevelBin::level_id(level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampV3ShadowLevelBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v23 == (char *)v2 )
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

// Line 167: range 0000000017FC93B6-0000000017FC9504
int32_t __cdecl SeaLampV3ShadowStageData::toBin(
        const SeaLampV3ShadowStageData *const this,
        proto::SeaLampV3ShadowStageBin *bin)
{
  std::map<unsigned int,SeaLampV3ShadowLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,SeaLampV3ShadowLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,SeaLampV3ShadowLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,SeaLampV3ShadowLevelData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::SeaLampV3ShadowLevelBin *level_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::SeaLampV3ShadowStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SeaLampV3ShadowStageBin::set_is_open(bin, this->is_open);
  __for_range = &this->level_data_map;
  __for_begin._M_node = std::map<unsigned int,SeaLampV3ShadowLevelData>::begin(&this->level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,SeaLampV3ShadowLevelData>::end(&this->level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,SeaLampV3ShadowLevelData>(v6);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::type *)std::get<1ul,unsigned int const,SeaLampV3ShadowLevelData>(v6);
    level_bin = proto::SeaLampV3ShadowStageBin::add_level_bin_list(bin);
    SeaLampV3ShadowLevelData::toBin(level_data, level_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 179: range 0000000017FC9506-0000000017FC9654
int32_t __cdecl SeaLampV3ShadowStageData::toClient(
        const SeaLampV3ShadowStageData *const this,
        proto::SeaLampV3ShadowStageInfo *proto)
{
  std::map<unsigned int,SeaLampV3ShadowLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,SeaLampV3ShadowLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,SeaLampV3ShadowLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,SeaLampV3ShadowLevelData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::SeaLampV3ShadowLevelInfo *level_info; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::SeaLampV3ShadowStageInfo::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SeaLampV3ShadowStageInfo::set_is_open(proto, this->is_open);
  __for_range = &this->level_data_map;
  __for_begin._M_node = std::map<unsigned int,SeaLampV3ShadowLevelData>::begin(&this->level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,SeaLampV3ShadowLevelData>::end(&this->level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,SeaLampV3ShadowLevelData>(v6);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::type *)std::get<1ul,unsigned int const,SeaLampV3ShadowLevelData>(v6);
    level_info = proto::SeaLampV3ShadowStageInfo::add_level_info_list(proto);
    SeaLampV3ShadowLevelData::toClient(level_data, level_info);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 191: range 0000000017FC9656-0000000017FC991D
int32_t __cdecl SeaLampV3ShadowData::fromBin(SeaLampV3ShadowData *const this, const proto::SeaLampV3ShadowBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  SeaLampV3ShadowStageData *v5; // r15
  unsigned int *v6; // rcx
  SeaLampV3ShadowStageData *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowStageBin>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowStageBin>::const_iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowStageBin> *__for_range; // [rsp+40h] [rbp-E0h]
  const proto::SeaLampV3ShadowStageBin *stage_bin; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 14 stage_data:195";
  *(_QWORD *)(v2 + 16) = SeaLampV3ShadowData::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::map<unsigned int,SeaLampV3ShadowStageData>::clear(&this->stage_data_map);
  __for_range = proto::SeaLampV3ShadowBin::stage_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SeaLampV3ShadowStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampV3ShadowStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampV3ShadowStageBin const>::operator*(&__for_begin);
    SeaLampV3ShadowStageData::SeaLampV3ShadowStageData((SeaLampV3ShadowStageData *const)(v2 + 32));
    SeaLampV3ShadowStageData::fromBin((SeaLampV3ShadowStageData *const)(v2 + 32), stage_bin);
    v5 = std::move<SeaLampV3ShadowStageData &>((SeaLampV3ShadowStageData *)(v2 + 32));
    val = proto::SeaLampV3ShadowStageBin::stage_id(stage_bin);
    v8 = std::map<unsigned int,SeaLampV3ShadowStageData>::emplace<unsigned int,SeaLampV3ShadowStageData>(
           &this->stage_data_map,
           &val,
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "fromBin",
        199);
      v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v16,
             (const char (*)[64])"[LAN_V3] shadow stage data fromBin failed, duplicated stage_id:");
      val = proto::SeaLampV3ShadowStageBin::stage_id(stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    SeaLampV3ShadowStageData::~SeaLampV3ShadowStageData((SeaLampV3ShadowStageData *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampV3ShadowStageBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v17 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 206: range 0000000017FC991E-0000000017FC99D4
int32_t __cdecl SeaLampV3ShadowData::toBin(const SeaLampV3ShadowData *const this, proto::SeaLampV3ShadowBin *bin)
{
  std::map<unsigned int,SeaLampV3ShadowStageData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,SeaLampV3ShadowStageData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,SeaLampV3ShadowStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,SeaLampV3ShadowStageData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampV3ShadowStageData> >::type *stage_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3ShadowStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::SeaLampV3ShadowStageBin *stage_bin; // [rsp+48h] [rbp-8h]

  __for_range = &this->stage_data_map;
  __for_begin._M_node = std::map<unsigned int,SeaLampV3ShadowStageData>::begin(&this->stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,SeaLampV3ShadowStageData>::end(&this->stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,SeaLampV3ShadowStageData>(v6);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3ShadowStageData> >::type *)std::get<1ul,unsigned int const,SeaLampV3ShadowStageData>(v6);
    stage_bin = proto::SeaLampV3ShadowBin::add_stage_bin_list(bin);
    SeaLampV3ShadowStageData::toBin(stage_data, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 216: range 0000000017FC99D6-0000000017FC9A8C
int32_t __cdecl SeaLampV3ShadowData::toClient(const SeaLampV3ShadowData *const this, proto::SeaLampV3ShadowInfo *proto)
{
  std::map<unsigned int,SeaLampV3ShadowStageData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,SeaLampV3ShadowStageData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,SeaLampV3ShadowStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,SeaLampV3ShadowStageData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampV3ShadowStageData> >::type *stage_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3ShadowStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::SeaLampV3ShadowStageInfo *stage_info; // [rsp+48h] [rbp-8h]

  __for_range = &this->stage_data_map;
  __for_begin._M_node = std::map<unsigned int,SeaLampV3ShadowStageData>::begin(&this->stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,SeaLampV3ShadowStageData>::end(&this->stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,SeaLampV3ShadowStageData>(v6);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3ShadowStageData> >::type *)std::get<1ul,unsigned int const,SeaLampV3ShadowStageData>(v6);
    stage_info = proto::SeaLampV3ShadowInfo::add_stage_info_list(proto);
    SeaLampV3ShadowStageData::toClient(stage_data, stage_info);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 226: range 0000000017FC9A8E-0000000017FC9EB8
int32_t __cdecl SeaLampV3ShadowData::init(SeaLampV3ShadowData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  uint32_t v5; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  SeaLampV3ShadowLevelData *v11; // rax
  uint32_t v12; // ecx
  char v13; // dl
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,data::LanV3ShadowStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,data::LanV3ShadowStageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-B0h] BYREF
  const std::unordered_map<unsigned int,data::LanV3ShadowStageExcelConfig> *__for_range; // [rsp+38h] [rbp-A8h]
  const std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig> *v25; // [rsp+40h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig> >::type *stage_id; // [rsp+48h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig> >::type *stage_config; // [rsp+50h] [rbp-90h]
  SeaLampV3ShadowStageData *stage_data; // [rsp+58h] [rbp-88h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-80h]
  SeaLampV3ShadowLevelData *level_data; // [rsp+68h] [rbp-78h]
  std::shared_ptr<Config> v31; // [rsp+70h] [rbp-70h] BYREF
  char v32[96]; // [rsp+80h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 level_id:232";
  *(_QWORD *)(v1 + 16) = SeaLampV3ShadowData::init;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr.lan_v3_shadow_stage_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v31);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::LanV3ShadowStageExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::LanV3ShadowStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::LanV3ShadowStageExcelConfig>(v25);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV3ShadowStageExcelConfig>(v25);
    stage_data = std::map<unsigned int,SeaLampV3ShadowStageData>::operator[](&this->stage_data_map, stage_id);
    v4 = ((unsigned __int8)stage_id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    v5 = *stage_id;
    v6 = *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000);
    if ( v6 != 0 && v6 <= 3 )
    {
      LOBYTE(v4) = v6 != 0;
      __asan_report_store4(stage_data, v4, stage_data);
    }
    stage_data->stage_id = v5;
    v7 = ((_BYTE)stage_data + 4) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store1(&stage_data->is_open, v7, v8);
    stage_data->is_open = 0;
    __for_range_0 = &stage_config->stage_level_list;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(&stage_config->stage_level_list)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v1 + 32) = *v10;
      v14 = (char *)(v1 + 32);
      v11 = std::map<unsigned int,SeaLampV3ShadowLevelData>::operator[](
              &stage_data->level_data_map,
              (const std::map<unsigned int,SeaLampV3ShadowLevelData>::key_type *)(v1 + 32));
      level_data = v11;
      v12 = *(_DWORD *)(v1 + 32);
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      LOBYTE(v14) = v13 != 0;
      v15 = (v13 != 0) & (unsigned __int8)((char)(((unsigned __int8)v11 & 7) + 3) >= v13);
      if ( (_BYTE)v15 )
        __asan_report_store4(v11, v14, v15);
      level_data->level_id = v12;
      v16 = ((_BYTE)level_data + 4) & 7;
      v17 = (*(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000));
      if ( (_BYTE)v17 )
        __asan_report_store1(&level_data->is_open, v16, v17);
      level_data->is_open = 0;
      v18 = (*(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3) + 0x7FFF8000));
      if ( (_BYTE)v18 )
        __asan_report_store4(&level_data->min_finish_time, (((_BYTE)level_data + 8) & 7u) + 3, v18);
      level_data->min_finish_time = 0;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  result = 0;
  if ( v32 == (char *)v1 )
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

// Line 244: range 0000000017FC9EBA-0000000017FC9ED4
void __cdecl SeaLampV3ShadowData::clear(SeaLampV3ShadowData *const this)
{
  std::map<unsigned int,SeaLampV3ShadowStageData>::clear(&this->stage_data_map);
};

// Line 249: range 0000000017FC9ED6-0000000017FCA0C4
int32_t __cdecl SeaLampV3Activity::fromScheduleBin(
        SeaLampV3Activity *const this,
        const proto::ActivityScheduleBin *bin)
{
  const proto::SeaLampV3RaceBin *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  const proto::SeaLampV3ShadowBin *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const proto::SeaLampV3ScheduleBin *schedule_bin; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  schedule_bin = proto::ActivityScheduleBin::sea_lamp_v3_bin(bin);
  v2 = proto::SeaLampV3ScheduleBin::race_bin(schedule_bin);
  if ( SeaLampV3RaceData::fromBin(&this->race_data_, v2) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "fromScheduleBin",
      253);
    v3 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v9,
           (const char (*)[40])"[LAN_v3] race data fromBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  v4 = proto::SeaLampV3ScheduleBin::shadow_bin(schedule_bin);
  if ( SeaLampV3ShadowData::fromBin(&this->shadow_data_, v4) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "fromScheduleBin",
      257);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v9,
           (const char (*)[42])"[LAN_v3] shadow data fromBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  return 0;
};

// Line 264: range 0000000017FCA0C6-0000000017FCA2B4
int32_t __cdecl SeaLampV3Activity::toScheduleBin(const SeaLampV3Activity *const this, proto::ActivityScheduleBin *bin)
{
  proto::SeaLampV3RaceBin *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  proto::SeaLampV3ShadowBin *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::SeaLampV3ScheduleBin *schedule_bin; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  schedule_bin = proto::ActivityScheduleBin::mutable_sea_lamp_v3_bin(bin);
  v2 = proto::SeaLampV3ScheduleBin::mutable_race_bin(schedule_bin);
  if ( SeaLampV3RaceData::toBin(&this->race_data_, v2) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "toScheduleBin",
      268);
    v3 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v9,
           (const char (*)[38])"[LAN_v3] race data toBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  v4 = proto::SeaLampV3ScheduleBin::mutable_shadow_bin(schedule_bin);
  if ( SeaLampV3ShadowData::toBin(&this->shadow_data_, v4) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "toScheduleBin",
      272);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v9,
           (const char (*)[40])"[LAN_v3] shadow data toBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  return 0;
};

// Line 279: range 0000000017FCA2B6-0000000017FCA590
int32_t __cdecl SeaLampV3Activity::toClient(SeaLampV3Activity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::SeaLampV3RaceInfo *v3; // rax
  proto::SeaLampV3ShadowInfo *v4; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::SeaLampV3DetailInfo *detail_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "toClient",
      282);
    v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v8,
           (const char (*)[45])"[LAN_v3] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_12:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  detail_info = proto::ActivityInfo::mutable_sea_lamp_v3_info(activity_info);
  v3 = proto::SeaLampV3DetailInfo::mutable_race_info(detail_info);
  if ( SeaLampV3RaceData::toClient(&this->race_data_, v3) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "toClient",
      288);
    v2 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v8,
           (const char (*)[41])"[LAN_v3] race data toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_12;
  }
  v4 = proto::SeaLampV3DetailInfo::mutable_shadow_info(detail_info);
  if ( SeaLampV3ShadowData::toClient(&this->shadow_data_, v4) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "toClient",
      293);
    v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v8,
           (const char (*)[43])"[LAN_v3] shadow data toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_12;
  }
  return 0;
};

// Line 301: range 0000000017FCA592-0000000017FCA5EF
int32_t __cdecl SeaLampV3Activity::init(SeaLampV3Activity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    SeaLampV3Activity::registerObserver(this);
  return 0;
};

// Line 311: range 0000000017FCA5F0-0000000017FCA7E9
void __cdecl SeaLampV3Activity::onPreStart(SeaLampV3Activity *const this)
{
  __int64 v1; // rsi
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_map_id_, v1, &this->cur_map_id_);
  }
  this->cur_map_id_ = 0;
  if ( SeaLampV3RaceData::init(&this->race_data_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "onPreStart",
      316);
    v2 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v5,
           (const char (*)[37])"[LAN_v3] race data init failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  if ( SeaLampV3ShadowData::init(&this->shadow_data_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "onPreStart",
      321);
    v3 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v5,
           (const char (*)[39])"[LAN_v3] shadow data init failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

// Line 326: range 0000000017FCA7EA-0000000017FCA804
void __cdecl SeaLampV3Activity::onStart(SeaLampV3Activity *const this)
{
  SeaLampV3Activity::registerObserver(this);
};

// Line 331: range 0000000017FCA806-0000000017FCA82C
void __cdecl SeaLampV3Activity::onSettle(SeaLampV3Activity *const this)
{
  SeaLampV3Activity::closeRace(this);
  SeaLampV3Activity::unregisterObserver(this);
};

// Line 337: range 0000000017FCA82E-0000000017FCA8A3
void __cdecl SeaLampV3Activity::onClear(SeaLampV3Activity *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_map_id_, v1, &this->cur_map_id_);
  }
  this->cur_map_id_ = 0;
  SeaLampV3RaceData::clear(&this->race_data_);
  SeaLampV3ShadowData::clear(&this->shadow_data_);
};

// Line 344: range 0000000017FCA8A4-0000000017FCB0C6
int32_t __cdecl SeaLampV3Activity::execAction(SeaLampV3Activity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // r12
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r12
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r12
  common::milog::MiLogStream *v17; // rax
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // r12
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int32_t result; // eax
  unsigned int Uid; // [rsp+14h] [rbp-8Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-80h] BYREF
  char v28[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:374";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_OPEN_SEA_LAMP_V3_RACE_LEVEL )
  {
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "execAction",
        351);
      v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v27,
             (const char (*)[28])"[LAN_v3] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])off_26488CC0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_12;
    }
    *(_DWORD *)(v2 + 32) = 0;
    v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v9, (unsigned int *)(v2 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "execAction",
        357);
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v27,
              (const char (*)[19])"[LAN_v3] strToNum ");
      v11 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_32;
    }
    if ( SeaLampV3Activity::openRaceLevel(this, *(_DWORD *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "execAction",
        362);
      v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v27,
              (const char (*)[41])"[LAN_v3] openRaceLevel failed, level_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_32;
    }
  }
  else
  {
    if ( type != NEW_ACTIVITY_ACTION_OPEN_SEA_LAMP_V3_SHADOW_STAGE )
    {
      result = BaseActivity::execAction(this, action_exec);
      goto LABEL_34;
    }
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "execAction",
        371);
      v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v27,
              (const char (*)[28])"[LAN_v3] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, &val);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v17, (const char (*)[18])off_26488CC0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_12:
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = -1;
      goto LABEL_34;
    }
    *(_DWORD *)(v2 + 32) = 0;
    v18 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v18, (unsigned int *)(v2 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "execAction",
        377);
      v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v27,
              (const char (*)[19])"[LAN_v3] strToNum ");
      v20 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_32:
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = -1;
      goto LABEL_34;
    }
    if ( SeaLampV3Activity::openShadowStage(this, *(_DWORD *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "execAction",
        382);
      v22 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v27,
              (const char (*)[43])"[LAN_v3] openShadowStage failed, stage_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_32;
    }
  }
  result = 0;
LABEL_34:
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

// Line 394: range 0000000017FCB0C8-0000000017FCB3E8
void __cdecl SeaLampV3Activity::registerObserver(SeaLampV3Activity *const this)
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:395 64 16 12 this_wtr:396";
  *(_QWORD *)(v1 + 16) = SeaLampV3Activity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<SeaLampV3Activity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<SeaLampV3Activity>::weak_ptr<SeaLampV3Activity,void>(
    (std::weak_ptr<SeaLampV3Activity> *const)(v1 + 64),
    (const std::shared_ptr<SeaLampV3Activity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<SeaLampV3Activity>::weak_ptr(
    (std::weak_ptr<SeaLampV3Activity> *const)&v6,
    (const std::weak_ptr<SeaLampV3Activity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SeaLampV3Activity,ExitVehicleEvent>(
    EventComp,
    (std::weak_ptr<SeaLampV3Activity> *)&v6,
    (void (*)(SeaLampV3Activity *, const ExitVehicleEvent *))SeaLampV3Activity::onExitVehicleEvent,
    0LL);
  std::weak_ptr<SeaLampV3Activity>::~weak_ptr((std::weak_ptr<SeaLampV3Activity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<SeaLampV3Activity>::weak_ptr(
    (std::weak_ptr<SeaLampV3Activity> *const)&v6,
    (const std::weak_ptr<SeaLampV3Activity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SeaLampV3Activity,LanV3RaceScoreEvent>(
    cb_ptr,
    (std::weak_ptr<SeaLampV3Activity> *)&v6,
    (void (*)(SeaLampV3Activity *, const LanV3RaceScoreEvent *))SeaLampV3Activity::onLanV3RaceScoreEvent,
    0LL);
  std::weak_ptr<SeaLampV3Activity>::~weak_ptr((std::weak_ptr<SeaLampV3Activity> *const)&v6);
  std::weak_ptr<SeaLampV3Activity>::~weak_ptr((std::weak_ptr<SeaLampV3Activity> *const)(v1 + 64));
  std::shared_ptr<SeaLampV3Activity>::~shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)(v1 + 32));
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

// Line 402: range 0000000017FCB3EA-0000000017FCB4EE
void __cdecl SeaLampV3Activity::unregisterObserver(SeaLampV3Activity *const this)
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
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 416: range 0000000017FCB4F0-0000000017FCB716
void __cdecl SeaLampV3Activity::onExitVehicleEvent(SeaLampV3Activity *const this, const ExitVehicleEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Scene *v5; // rax
  LanV3BoatMultistagePlay *v6; // r14
  uint32_t Uid; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 17 cur_scene_ptr:417 64 16 12 play_ptr:422";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::onExitVehicleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Scene::getMultistagePlayComp(v5);
    SceneMultistagePlayComp::findPlay<LanV3BoatMultistagePlay>((const SceneMultistagePlayComp *const)(v2 + 64));
    if ( !std::operator==<LanV3BoatMultistagePlay>(0LL, (const std::shared_ptr<LanV3BoatMultistagePlay> *)(v2 + 64)) )
    {
      v6 = std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      LanV3BoatMultistagePlay::onExitVehicleEvent(v6, Uid);
    }
    std::shared_ptr<LanV3BoatMultistagePlay>::~shared_ptr((std::shared_ptr<LanV3BoatMultistagePlay> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
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

// Line 433: range 0000000017FCB718-0000000017FCD567
int32_t __cdecl SeaLampV3Activity::startLanV3BoatPlay(
        SeaLampV3Activity *const this,
        std::set<unsigned int> *p_uid_set,
        bool is_single,
        uint32_t match_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // al
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v19; // r14
  PlayerMpComp *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::unordered_map<std::string,unsigned int>::mapped_type *v23; // rax
  _DWORD *v24; // rdx
  char v25; // cl
  common::milog::MiLogStream *v26; // rsi
  std::unordered_map<std::string,unsigned int>::mapped_type *v27; // rax
  uint32_t *v28; // rdx
  char v29; // cl
  common::milog::MiLogStream *v30; // rsi
  std::unordered_map<std::string,unsigned int>::mapped_type *v31; // rax
  uint32_t *v32; // rdx
  char v33; // cl
  common::milog::MiLogStream *v34; // rsi
  common::milog::MiLogStream *v35; // rsi
  std::unordered_map<std::string,unsigned int>::mapped_type *v36; // rax
  _DWORD *v37; // rdx
  char v38; // cl
  common::milog::MiLogStream *v39; // rsi
  std::unordered_map<std::string,unsigned int>::mapped_type *v40; // rax
  uint32_t *v41; // rdx
  char v42; // cl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rax
  Scene *v45; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v47; // rax
  common::milog::MiLogStream *v48; // rax
  Scene *v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  common::milog::MiLogStream *v52; // rax
  Scene *v53; // rax
  Group *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  const std::string *v57; // rax
  common::milog::MiLogStream *v58; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  const std::string *v62; // rax
  common::milog::MiLogStream *v63; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rsi
  Scene *v65; // rax
  Group *v66; // rsi
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  uint32_t v70; // ecx
  char v71; // al
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  Scene *v77; // rax
  SceneBlockGroupComp *v78; // rax
  unsigned __int64 v79; // rax
  bool v80; // r14
  common::milog::MiLogStream *v81; // rax
  int32_t result; // eax
  unsigned int (__fastcall *play_index)(SceneMultistagePlayComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // [rsp+8h] [rbp-1E8h]
  uint32_t play_indexa; // [rsp+8h] [rbp-1E8h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-1E0h]
  uint32_t __lb; // [rsp+10h] [rbp-1E0h]
  uint32_t __l; // [rsp+10h] [rbp-1E0h]
  unsigned int (__fastcall *__lc)(SceneMultistagePlayComp *, std::vector<unsigned int> *, __int64); // [rsp+10h] [rbp-1E0h]
  uint32_t OwnerUid; // [rsp+20h] [rbp-1D0h]
  uint32_t SceneId; // [rsp+20h] [rbp-1D0h]
  int v91; // [rsp+20h] [rbp-1D0h]
  uint32_t activity_id; // [rsp+20h] [rbp-1D0h]
  uint32_t schedule_id; // [rsp+20h] [rbp-1D0h]
  SceneMultistagePlayComp *v94; // [rsp+20h] [rbp-1D0h]
  bool v95; // [rsp+20h] [rbp-1D0h]
  SceneMultistagePlayComp *MultistagePlayComp; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v97; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v98; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v99; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v100; // [rsp+20h] [rbp-1D0h]
  SceneMultistagePlayComp *v101; // [rsp+20h] [rbp-1D0h]
  bool v102; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v103; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v104; // [rsp+20h] [rbp-1D0h]
  SceneMultistagePlayComp *v105; // [rsp+20h] [rbp-1D0h]
  std::allocator<char> __a; // [rsp+47h] [rbp-1A9h] BYREF
  unsigned int val; // [rsp+48h] [rbp-1A8h] BYREF
  int32_t ret; // [rsp+4Ch] [rbp-1A4h]
  unsigned __int64 v112; // [rsp+50h] [rbp-1A0h] BYREF
  const data::LanV3BoatExcelConfig *boat_config_ptr; // [rsp+58h] [rbp-198h]
  std::vector<unsigned int> v114; // [rsp+60h] [rbp-190h] BYREF
  common::milog::MiLogStream v115; // [rsp+80h] [rbp-170h] BYREF
  char v116[336]; // [rsp+A0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v116;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 10 map_id:485 48 4 12 group_id:510 64 16 13 world_ptr:439 96 16 13 scene_ptr:450 128 16 1"
                        "3 group_ptr:519 160 16 15 param_table:537 192 56 13 param_map:496";
  *(_QWORD *)(v4 + 16) = SeaLampV3Activity::startLanV3BoatPlay;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_map_id_);
  }
  if ( this->cur_map_id_ )
  {
    common::milog::MiLogStream::create(
      &v115,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "startLanV3BoatPlay",
      436);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v115,
      (const char (*)[46])"[LAN_V3_MULTI] player_ is in lan_v3_boat play");
    common::milog::MiLogStream::~MiLogStream(&v115);
    v7 = -1;
    goto LABEL_119;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 64));
  if ( !std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 64)) )
  {
    v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    OwnerUid = World::getOwnerUid(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    if ( OwnerUid != Player::getUid(this->player_) )
    {
      common::milog::MiLogStream::create(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "startLanV3BoatPlay",
        447);
      v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v115,
             (const char (*)[63])"[LAN_V3_MULTI] only owner can start lan_v3_boat in world, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v115);
      v7 = 1201;
      goto LABEL_118;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 96), 0LL) )
      goto LABEL_26;
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    SceneId = Scene::getSceneId(v10);
    v11 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    v12 = *(_QWORD *)v11 + 72LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(*(_QWORD *)v11 + 72LL);
    if ( SceneId == (*(unsigned int (__fastcall **)(unsigned __int64))v12)(v11) )
      v13 = 0;
    else
LABEL_26:
      v13 = 1;
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "startLanV3BoatPlay",
        454);
      v14 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v115,
              (const char (*)[55])"[LAN_V3_MULTI] player is not in main world scene, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_31:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v115);
      v7 = -1;
LABEL_117:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
      goto LABEL_118;
    }
    if ( is_single )
    {
      if ( std::set<unsigned int>::size(p_uid_set) != 1 )
      {
        common::milog::MiLogStream::create(
          &v115,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "startLanV3BoatPlay",
          462);
        v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v115,
                (const char (*)[53])"[LAN_V3_MULTI] invalid uid_set for single-mode, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
LABEL_36:
        val = Player::getUid(this->player_);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])", size: ");
        v112 = std::set<unsigned int>::size(p_uid_set);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &v112);
        common::milog::MiLogStream::~MiLogStream(&v115);
        v7 = 10481;
        goto LABEL_117;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      MpComp = Player::getMpComp(this->player_);
      if ( PlayerMpComp::isInMpMode(MpComp) )
      {
        common::milog::MiLogStream::create(
          &v115,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "startLanV3BoatPlay",
          468);
        v19 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v115,
                (const char (*)[58])"[LAN_V3_MULTI] prev dungeon cannot enter in mp mode, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&v115);
        v7 = 1202;
        goto LABEL_117;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v20 = Player::getMpComp(this->player_);
      if ( !PlayerMpComp::isAllowEnterPlayerEmpty(v20) )
      {
        common::milog::MiLogStream::create(
          &v115,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "startLanV3BoatPlay",
          473);
        v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v115,
                (const char (*)[52])"[LAN_V3_MULTI] others is entering self world, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        common::milog::MiLogStream::~MiLogStream(&v115);
        v7 = 1216;
        goto LABEL_117;
      }
    }
    else if ( std::set<unsigned int>::size(p_uid_set) <= 1 || std::set<unsigned int>::size(p_uid_set) > 4 )
    {
      common::milog::MiLogStream::create(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "startLanV3BoatPlay",
        481);
      v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v115,
              (const char (*)[52])"[LAN_V3_MULTI] invalid uid_set for multi-mode, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_36;
    }
    *(_DWORD *)(v4 + 32) = 0;
    if ( !SeaLampV3Activity::randomSelectBoatMap(this, is_single, (uint32_t *)(v4 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->play_index_);
      }
      ++this->play_index_;
      std::unordered_map<std::string,unsigned int>::unordered_map((std::unordered_map<std::string,unsigned int> *const)(v4 + 192));
      v91 = *(_DWORD *)(v4 + 32);
      std::allocator<char>::allocator(&__a, (((_BYTE)this - 36) & 7u) + 3);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v115, "map_id", &__a);
      v26 = &v115;
      v23 = std::unordered_map<std::string,unsigned int>::operator[](
              (std::unordered_map<std::string,unsigned int> *const)(v4 + 192),
              (std::unordered_map<std::string,unsigned int>::key_type *)&v115);
      v24 = v23;
      v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
      LOBYTE(v26) = v25 != 0;
      if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
        __asan_report_store4(v23, v26, v23);
      *v24 = v91;
      std::string::~string(&v115);
      std::allocator<char>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      activity_id = this->activity_id_;
      std::allocator<char>::allocator(&__a, v26);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v115, "activity_id", &__a);
      v30 = &v115;
      v27 = std::unordered_map<std::string,unsigned int>::operator[](
              (std::unordered_map<std::string,unsigned int> *const)(v4 + 192),
              (std::unordered_map<std::string,unsigned int>::key_type *)&v115);
      v28 = v27;
      v29 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
      LOBYTE(v30) = v29 != 0;
      if ( v29 != 0 && (char)(((unsigned __int8)v27 & 7) + 3) >= v29 )
        __asan_report_store4(v27, v30, v27);
      *v28 = activity_id;
      std::string::~string(&v115);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a, v30);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v115, "match_id", &__a);
      v34 = &v115;
      v31 = std::unordered_map<std::string,unsigned int>::operator[](
              (std::unordered_map<std::string,unsigned int> *const)(v4 + 192),
              (std::unordered_map<std::string,unsigned int>::key_type *)&v115);
      v32 = v31;
      v33 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
      LOBYTE(v34) = v33 != 0;
      if ( v33 != 0 && (char)(((unsigned __int8)v31 & 7) + 3) >= v33 )
        __asan_report_store4(v31, v34, v31);
      *v32 = match_id;
      std::string::~string(&v115);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a, v34);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v115, "is_single", &__a);
      v35 = &v115;
      v36 = std::unordered_map<std::string,unsigned int>::operator[](
              (std::unordered_map<std::string,unsigned int> *const)(v4 + 192),
              (std::unordered_map<std::string,unsigned int>::key_type *)&v115);
      v37 = v36;
      v38 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
      if ( v38 != 0 && (char)(((unsigned __int8)v36 & 7) + 3) >= v38 )
      {
        LOBYTE(v35) = v38 != 0;
        __asan_report_store4(v36, v35, v36);
      }
      *v37 = is_single;
      std::string::~string(&v115);
      std::allocator<char>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      schedule_id = this->schedule_id_;
      std::allocator<char>::allocator(&__a, (((_BYTE)this + 36) & 7u) + 3);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v115, "schedule_id", &__a);
      v39 = &v115;
      v40 = std::unordered_map<std::string,unsigned int>::operator[](
              (std::unordered_map<std::string,unsigned int> *const)(v4 + 192),
              (std::unordered_map<std::string,unsigned int>::key_type *)&v115);
      v41 = v40;
      v42 = *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000);
      if ( v42 != 0 && (char)(((unsigned __int8)v40 & 7) + 3) >= v42 )
      {
        LOBYTE(v39) = v42 != 0;
        __asan_report_store4(v40, v39, v40);
      }
      *v41 = schedule_id;
      std::string::~string(&v115);
      std::allocator<char>::~allocator(&__a);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 160));
      v43 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      boat_config_ptr = data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3BoatExcelConfig(
                          &v43->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr,
                          *(_DWORD *)(v4 + 32));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
      if ( boat_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)boat_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&boat_config_ptr->control_group_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&boat_config_ptr->control_group_id);
        }
        *(_DWORD *)(v4 + 48) = boat_config_ptr->control_group_id;
        v45 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        BlockGroupComp = Scene::getBlockGroupComp(v45);
        v94 = (SceneMultistagePlayComp *)BlockGroupComp;
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp);
        v47 = (unsigned __int64)(v94->_vptr_SceneCompBase + 12);
        if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
          v47 = __asan_report_load8(v94->_vptr_SceneCompBase + 12);
        play_index = *(unsigned int (__fastcall **)(SceneMultistagePlayComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v47;
        val = *(_DWORD *)(v4 + 48);
        __la._M_array = &val;
        __la._M_len = 1LL;
        std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
        std::vector<unsigned int>::vector(&v114, __la, (const std::vector<unsigned int>::allocator_type *)&__a);
        v95 = play_index(v94, &v114, 0LL, 0LL) != 0;
        std::vector<unsigned int>::~vector(&v114);
        std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
        if ( v95 )
        {
          common::milog::MiLogStream::create(
            &v115,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/sea_lamp_v3_activity.cpp",
            "startLanV3BoatPlay",
            513);
          v48 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v115,
                  (const char (*)[48])"[LAN_V3_MULTI] registerGroups failed, group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v115);
          v7 = -1;
        }
        else
        {
          ret = 0;
          v49 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v50 = (unsigned __int64)Scene::getBlockGroupComp(v49);
          if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
            v50 = __asan_report_load8(v50);
          v51 = *(_QWORD *)v50 + 80LL;
          if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
            v50 = __asan_report_load8(*(_QWORD *)v50 + 80LL);
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))v51)(
            v4 + 128,
            v50,
            *(unsigned int *)(v4 + 48),
            0LL,
            0LL,
            0LL);
          if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v4 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v115,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sea_lamp_v3_activity.cpp",
              "startLanV3BoatPlay",
              522);
            v52 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v115,
                    (const char (*)[43])"[LAN_V3_MULTI] findGroup failed, group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v115);
            ret = -1;
          }
          else
          {
            v53 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            MultistagePlayComp = Scene::getMultistagePlayComp(v53);
            if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->play_index_);
            }
            __lb = this->play_index_;
            v54 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
            if ( SceneMultistagePlayComp::initPlay(
                   MultistagePlayComp,
                   v54,
                   __lb,
                   MULTISTAGE_PLAY_TYPE_LAN_V3_BOAT,
                   (const std::unordered_map<std::string,unsigned int> *)(v4 + 192),
                   p_uid_set) )
            {
              common::milog::MiLogStream::create(
                &v115,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/sea_lamp_v3_activity.cpp",
                "startLanV3BoatPlay",
                530);
              v55 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v115,
                      (const char (*)[26])"[LAN_V3_MULTI] init play ");
              v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &this->play_index_);
              v97 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v56,
                      (const char (*)[10])off_264895C0);
              v57 = proto::MultistagePlayType_Name[abi:cxx11](MULTISTAGE_PLAY_TYPE_LAN_V3_BOAT);
              v58 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v97, v57);
              v98 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v58,
                      (const char (*)[10])" failed. ");
              v59 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              operator<<(v98, v59);
              common::milog::MiLogStream::~MiLogStream(&v115);
              ret = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v115,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/sea_lamp_v3_activity.cpp",
                "startLanV3BoatPlay",
                535);
              v60 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v115,
                      (const char (*)[26])"[LAN_V3_MULTI] init play ");
              v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &this->play_index_);
              v99 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v61,
                      (const char (*)[10])off_264895C0);
              v62 = proto::MultistagePlayType_Name[abi:cxx11](MULTISTAGE_PLAY_TYPE_LAN_V3_BOAT);
              v63 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v99, v62);
              v100 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v63, (const char (*)[8])" done. ");
              v64 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              operator<<(v100, v64);
              common::milog::MiLogStream::~MiLogStream(&v115);
              luabind::adl::object::object((luabind::adl::object *const)(v4 + 160));
              v65 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              v101 = Scene::getMultistagePlayComp(v65);
              std::allocator<char>::allocator(&__a, v64);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v115, byte_2641E100, &__a);
              if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->prepare_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&boat_config_ptr->prepare_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&boat_config_ptr->prepare_time);
              }
              __l = boat_config_ptr->prepare_time;
              if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->play_index_);
              }
              play_indexa = this->play_index_;
              v66 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              v102 = SceneMultistagePlayComp::startStage(
                       v101,
                       v66,
                       play_indexa,
                       __l,
                       MULTISTAGE_STAGE_LAN_V3_BOAT_PREPARE,
                       (const std::string *)&v115,
                       (const luabind::adl::object *)(v4 + 160)) != 0;
              std::string::~string(&v115);
              std::allocator<char>::~allocator(&__a);
              if ( v102 )
              {
                common::milog::MiLogStream::create(
                  &v115,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/sea_lamp_v3_activity.cpp",
                  "startLanV3BoatPlay",
                  541);
                v67 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        &v115,
                        (const char (*)[46])"[LAN_V3_MULTI] startStage failed @play_index ");
                v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &this->play_index_);
                v103 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v68, (const char (*)[8])" group:");
                v69 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                operator<<(v103, v69);
                common::milog::MiLogStream::~MiLogStream(&v115);
                ret = -1;
              }
              else
              {
                v70 = *(_DWORD *)(v4 + 32);
                v71 = *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000);
                if ( v71 != 0 && v71 <= 3 )
                {
                  LOBYTE(v66) = v71 != 0;
                  __asan_report_store4(&this->cur_map_id_, v66, &this->cur_map_id_);
                }
                this->cur_map_id_ = v70;
                common::milog::MiLogStream::create(
                  &v115,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/sea_lamp_v3_activity.cpp",
                  "startLanV3BoatPlay",
                  548);
                v72 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v115,
                        (const char (*)[44])"[LAN_V3_MULTI] startStage done @play_index ");
                v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, &this->play_index_);
                v104 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v73, (const char (*)[8])" group:");
                v74 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                v75 = operator<<(v104, v74);
                v76 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v75,
                        (const char (*)[14])", cur_map_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, &this->cur_map_id_);
                common::milog::MiLogStream::~MiLogStream(&v115);
              }
              luabind::adl::object::~object((luabind::adl::object *const)(v4 + 160));
            }
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 128));
          if ( ret )
          {
            v77 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v78 = Scene::getBlockGroupComp(v77);
            v105 = (SceneMultistagePlayComp *)v78;
            if ( *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v78);
            v79 = (unsigned __int64)(v105->_vptr_SceneCompBase + 13);
            if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
              v79 = __asan_report_load8(v105->_vptr_SceneCompBase + 13);
            __lc = *(unsigned int (__fastcall **)(SceneMultistagePlayComp *, std::vector<unsigned int> *, __int64))v79;
            val = *(_DWORD *)(v4 + 48);
            std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
            std::vector<unsigned int>::vector(
              &v114,
              (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
              (const std::vector<unsigned int>::allocator_type *)&__a);
            v80 = __lc(v105, &v114, 1LL) != 0;
            std::vector<unsigned int>::~vector(&v114);
            std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
            if ( v80 )
            {
              common::milog::MiLogStream::create(
                &v115,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/sea_lamp_v3_activity.cpp",
                "startLanV3BoatPlay",
                555);
              v81 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      &v115,
                      (const char (*)[50])"[LAN_V3_MULTI] unregisterGroups failed, group_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v81,
                (const unsigned int *)(v4 + 48));
              common::milog::MiLogStream::~MiLogStream(&v115);
            }
            v7 = ret;
          }
          else
          {
            v7 = 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v115,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "startLanV3BoatPlay",
          507);
        v44 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v115,
                (const char (*)[57])"[LAN_V3_MULTI] findLanV3BoatExcelConfig failed, map_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v115);
        v7 = -1;
      }
      std::unordered_map<std::string,unsigned int>::~unordered_map((std::unordered_map<std::string,unsigned int> *const)(v4 + 192));
      goto LABEL_117;
    }
    common::milog::MiLogStream::create(
      &v115,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "startLanV3BoatPlay",
      488);
    v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v115,
            (const char (*)[48])"[LAN_V3_MULTI] randomSelectBoatMap failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_31;
  }
  common::milog::MiLogStream::create(
    &v115,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/sea_lamp_v3_activity.cpp",
    "startLanV3BoatPlay",
    442);
  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
    &v115,
    (const char (*)[29])"[LAN_V3_MULTI] world is null");
  common::milog::MiLogStream::~MiLogStream(&v115);
  v7 = -1;
LABEL_118:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 64));
LABEL_119:
  result = v7;
  if ( v116 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
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
  return result;
};

// Line 564: range 0000000017FCD568-0000000017FCD898
int32_t __cdecl SeaLampV3Activity::randomSelectBoatMap(SeaLampV3Activity *const this, bool is_single, uint32_t *map_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t v8; // r14d
  __int64 v9; // rsi
  std::vector<unsigned int>::reference v10; // rax
  uint32_t *v11; // rdx
  uint32_t v12; // ecx
  char v13; // dl
  __int64 v14; // rdx
  int32_t result; // eax
  const std::vector<unsigned int> *candidate_vec_0; // [rsp+20h] [rbp-E0h]
  const std::vector<unsigned int> *candidate_vec; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 14 result_vec:565";
  *(_QWORD *)(v3 + 16) = SeaLampV3Activity::randomSelectBoatMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  ServiceBox::findService<GameserverService>();
  if ( is_single )
  {
    GameserverService::getConfig((GameserverService *const)&v19);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    candidate_vec = ActivitySeaLampV3ExcelConfigMgr::getSingleMapIdVec(&v6->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    common::tools::RandomUtils::randomSelect<unsigned int>(candidate_vec, (std::vector<unsigned int> *)(v3 + 32), 1u);
  }
  else
  {
    GameserverService::getConfig((GameserverService *const)&v20);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    candidate_vec_0 = ActivitySeaLampV3ExcelConfigMgr::getMultiMapIdSet(&v7->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    common::tools::RandomUtils::randomSelect<unsigned int>(candidate_vec_0, (std::vector<unsigned int> *)(v3 + 32), 1u);
  }
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "randomSelectBoatMap",
      578);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v21,
      (const char (*)[41])"[LAN_V3_MULTI] failed to select any map!");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = -1;
  }
  else
  {
    v9 = 0LL;
    v10 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 32), 0LL);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    v12 = *v11;
    v13 = *(_BYTE *)(((unsigned __int64)map_id >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v13 != 0;
    v14 = (v13 != 0) & (unsigned __int8)((char)(((unsigned __int8)map_id & 7) + 3) >= v13);
    if ( (_BYTE)v14 )
      __asan_report_store4(map_id, v9, v14);
    *map_id = v12;
    v8 = 0;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = v8;
  if ( v22 == (char *)v3 )
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

// Line 586: range 0000000017FCDB6E-0000000017FCE439
__int64 __fastcall SeaLampV3Activity::checkLanV3MultiDraftExec(
        SeaLampV3Activity *const this,
        uint32_t draft_id,
        std::unordered_map<unsigned int,int> *fail_uid_reason_map)
{
  unsigned __int64 p_M_element_count; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  char v10; // al
  std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *v11; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  char v14; // cl
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  Scene *v20; // rax
  __int64 result; // rax
  uint32_t Uid; // [rsp+10h] [rbp-110h]
  bool v23; // [rsp+10h] [rbp-110h]
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // [rsp+10h] [rbp-110h]
  const data::DraftExcelConfig *draft_config_ptr; // [rsp+38h] [rbp-E8h]
  SceneMultistagePlayComp v27[2]; // [rsp+40h] [rbp-E0h] BYREF

  p_M_element_count = (unsigned __int64)&v27[0].group_muiltistage_play_map_._M_h._M_element_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      p_M_element_count = v4;
  }
  *(_QWORD *)p_M_element_count = 1102416563LL;
  *(_QWORD *)(p_M_element_count + 8) = "4 32 4 7 ret:631 48 4 12 draft_id:585 64 16 13 world_ptr:594 96 16 13 scene_ptr:620";
  *(_QWORD *)(p_M_element_count + 16) = SeaLampV3Activity::checkLanV3MultiDraftExec;
  v5 = (_DWORD *)(p_M_element_count >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(p_M_element_count + 48) = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_map_id_);
  }
  if ( this->cur_map_id_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v27[0].is_enable_,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "checkLanV3MultiDraftExec",
      590);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           (common::milog::MiLogStream *const)&v27[0].is_enable_,
           (const char (*)[46])"[LAN_V3_MULTI] cur_map_id_ != 0, cur_map_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_map_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27[0].is_enable_);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(p_M_element_count + 64));
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(p_M_element_count + 64), 0LL) )
      goto LABEL_16;
    v8 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_element_count + 64));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8);
    v9 = *(_QWORD *)v8 + 16LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)v8 + 16LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v9)(v8) == 1 )
      v10 = 0;
    else
LABEL_16:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v27[0].is_enable_,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "checkLanV3MultiDraftExec",
        597);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        (common::milog::MiLogStream *const)&v27[0].is_enable_,
        (const char (*)[39])"[LAN_V3_MULTI] cur world can not start");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27[0].is_enable_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(p_M_element_count + 32) = Player::getUid(this->player_);
      v11 = (std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *)(p_M_element_count + 32);
      v12 = std::unordered_map<unsigned int,int>::operator[](
              fail_uid_reason_map,
              (std::unordered_map<unsigned int,int>::key_type *)(p_M_element_count + 32));
      v13 = v12;
      v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
      {
        LOBYTE(v11) = v14 != 0;
        __asan_report_store4(v12, v11, v12);
      }
      *v13 = 527;
      v7 = 527;
    }
    else
    {
      v15 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_element_count + 64));
      if ( World::getPlayerCount(v15) > 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        v17 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_element_count + 64));
        if ( Uid == World::getOwnerUid(v17) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)v27);
          v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v27);
          draft_config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                               &v18->design_config.txt_config_mgr.draft_config_mgr,
                               *(_DWORD *)(p_M_element_count + 48));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v27);
          if ( draft_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(p_M_element_count + 96));
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(p_M_element_count + 96), 0LL) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v27[0].is_enable_,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/sea_lamp_v3_activity.cpp",
                "checkLanV3MultiDraftExec",
                623);
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)&v27[0].is_enable_,
                (const char (*)[36])"[LAN_V3_MULTI] cur scene is nullptr");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27[0].is_enable_);
              v7 = -1;
            }
            else
            {
              v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_element_count + 96));
              Scene::getMultistagePlayComp(v20);
              SceneMultistagePlayComp::findPlay<LanV3BoatMultistagePlay>(v27);
              v23 = std::operator!=<LanV3BoatMultistagePlay>((const std::shared_ptr<LanV3BoatMultistagePlay> *)v27, 0LL);
              std::shared_ptr<LanV3BoatMultistagePlay>::~shared_ptr((std::shared_ptr<LanV3BoatMultistagePlay> *const)v27);
              if ( v23 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v27[0].is_enable_,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/sea_lamp_v3_activity.cpp",
                  "checkLanV3MultiDraftExec",
                  628);
                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  (common::milog::MiLogStream *const)&v27[0].is_enable_,
                  (const char (*)[42])"[LAN_V3_MULTI] multistage play is ongoing");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27[0].is_enable_);
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(p_M_element_count + 32) = 0;
                v24 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_element_count + 64));
                std::function<ForeachPolicy ()(Player &)>::function<SeaLampV3Activity::checkLanV3MultiDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1},void,void>(
                  (std::function<ForeachPolicy(Player&)> *const)&v27[0].is_enable_,
                  (SeaLampV3Activity::checkLanV3MultiDraftExec::<lambda(Player&)>)__PAIR128__(
                                                                                    (unsigned __int64)fail_uid_reason_map,
                                                                                    p_M_element_count + 32));
                World::foreachPlayer(v24, (std::function<ForeachPolicy(Player&)> *)&v27[0].is_enable_);
                std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v27[0].is_enable_);
                v7 = *(_DWORD *)(p_M_element_count + 32);
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(p_M_element_count + 96));
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v27[0].is_enable_,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sea_lamp_v3_activity.cpp",
              "checkLanV3MultiDraftExec",
              616);
            v19 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    (common::milog::MiLogStream *const)&v27[0].is_enable_,
                    (const char (*)[50])"[LAN_V3_MULTI] draft config not found, draft_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v19,
              (const unsigned int *)(p_M_element_count + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27[0].is_enable_);
            v7 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v27[0].is_enable_,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/sea_lamp_v3_activity.cpp",
            "checkLanV3MultiDraftExec",
            610);
          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            (common::milog::MiLogStream *const)&v27[0].is_enable_,
            (const char (*)[50])"[LAN_V3_MULTI] draft cannot start by other player");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27[0].is_enable_);
          v7 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v27[0].is_enable_,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "checkLanV3MultiDraftExec",
          604);
        v16 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                (common::milog::MiLogStream *const)&v27[0].is_enable_,
                (const char (*)[65])"[LAN_V3_MULTI] draft cannot start when player num < 2, draft_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v16,
          (const unsigned int *)(p_M_element_count + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27[0].is_enable_);
        v7 = 10481;
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(p_M_element_count + 64));
  }
  result = v7;
  if ( &v27[0].group_muiltistage_play_map_._M_h._M_element_count == (std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *)p_M_element_count )
  {
    *(_QWORD *)((p_M_element_count >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_element_count >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_element_count = 1172321806LL;
    *(_QWORD *)((p_M_element_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_element_count >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 632: range 0000000017FCD89A-0000000017FCDB6D
ForeachPolicy __cdecl SeaLampV3Activity::checkLanV3MultiDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::operator()(
        const SeaLampV3Activity::checkLanV3MultiDraftExec::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // r14
  unsigned int *p_val; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  int32_t *ret; // rdx
  char v12; // cl
  ForeachPolicy v13; // r14d
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:635";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::checkLanV3MultiDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<SeaLampV3Activity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<SeaLampV3Activity>(0LL, (const std::shared_ptr<SeaLampV3Activity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "operator()",
      638);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v16,
           (const char (*)[46])"[LAN_V3_MULTI] activity is not opening, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__fail_uid_reason_map);
    fail_uid_reason_map = __closure->__fail_uid_reason_map;
    val = Player::getUid(player);
    p_val = &val;
    v8 = std::unordered_map<unsigned int,int>::operator[](fail_uid_reason_map, &val);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(p_val) = v10 != 0;
      __asan_report_store4(v8, p_val, v8);
    }
    *v9 = 860;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    ret = __closure->__ret;
    v12 = *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((__int64)__closure->__ret & 7) + 3) >= v12 )
    {
      LOBYTE(p_val) = v12 != 0;
      __asan_report_store4(__closure->__ret, p_val, ret);
    }
    *ret = 860;
    v13 = FOREACH_BREAK;
  }
  else
  {
    v13 = FOREACH_CONTINUE;
  }
  std::shared_ptr<SeaLampV3Activity>::~shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)(v2 + 32));
  result = v13;
  if ( v17 == (char *)v2 )
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

// Line 649: range 0000000017FCE43A-0000000017FCE543
void __cdecl SeaLampV3Activity::onLanV3BoatPlayEnd(SeaLampV3Activity *const this)
{
  __int64 v1; // rsi
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_map_id_, v1, &this->cur_map_id_);
  }
  this->cur_map_id_ = 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/sea_lamp_v3_activity.cpp",
    "onLanV3BoatPlayEnd",
    651);
  v2 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
         &v4,
         (const char (*)[55])"[LAN_V3_MULTI] onLanV3BoatPlayEnd finished, owner_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 655: range 0000000017FCE544-0000000017FCE8D2
int32_t __cdecl SeaLampV3Activity::lanV3BoatInterruptSettleStage(SeaLampV3Activity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  Scene *v8; // rax
  LanV3BoatMultistagePlay *v9; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 17 cur_scene_ptr:656 64 16 12 play_ptr:667";
  *(_QWORD *)(v1 + 16) = SeaLampV3Activity::lanV3BoatInterruptSettleStage;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( Uid == Scene::getOwnerUid(v6) )
    {
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      Scene::getMultistagePlayComp(v8);
      SceneMultistagePlayComp::findPlay<LanV3BoatMultistagePlay>((const SceneMultistagePlayComp *const)(v1 + 64));
      if ( std::operator==<LanV3BoatMultistagePlay>(0LL, (const std::shared_ptr<LanV3BoatMultistagePlay> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "lanV3BoatInterruptSettleStage",
          671);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v12,
          (const char (*)[30])"[LAN_V3_MULTI] play not exist");
        common::milog::MiLogStream::~MiLogStream(&v12);
        v4 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v4 = LanV3BoatMultistagePlay::interruptSettleStage(v9);
      }
      std::shared_ptr<LanV3BoatMultistagePlay>::~shared_ptr((std::shared_ptr<LanV3BoatMultistagePlay> *const)(v1 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "lanV3BoatInterruptSettleStage",
        664);
      v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v12,
             (const char (*)[60])"[LAN_V3_MULTI] play cannot interrupt by guest player, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v4 = -1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v4;
  if ( v13 == (char *)v1 )
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

// Line 679: range 0000000017FCE8D4-0000000017FCEECA
void __cdecl SeaLampV3Activity::onLanV3RaceScoreEvent(SeaLampV3Activity *const this, const LanV3RaceScoreEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivitySeaLampV3ExcelConfigMgr *p_activity_sea_lamp_v3_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  uint32_t score; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::_Self __y; // [rsp+20h] [rbp-C0h] BYREF
  SeaLampV3RaceLevelData *level_data; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:680 64 8 8 iter:686";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::onLanV3RaceScoreEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  p_activity_sea_lamp_v3_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->gallery_id);
  }
  *(_DWORD *)(v2 + 48) = ActivitySeaLampV3ExcelConfigMgr::findRaceLevelIdByGalleryId(
                           p_activity_sea_lamp_v3_config_mgr,
                           event->gallery_id);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( *(_DWORD *)(v2 + 48) )
  {
    *(std::map<unsigned int,SeaLampV3RaceLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,SeaLampV3RaceLevelData>::find(
                                                                              &this->race_data_.level_data_map,
                                                                              (const std::map<unsigned int,SeaLampV3RaceLevelData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "onLanV3RaceScoreEvent",
        689);
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v23,
             (const char (*)[49])"[LAN_v3] find race level data failed. level_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> > *const)(v2 + 64))->second;
      if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->score);
      }
      score = event->score;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&level_data->max_score);
      }
      if ( score > level_data->max_score )
      {
        level_data->max_score = event->score;
        BaseActivity::notifyClientData(this, 0);
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "onLanV3RaceScoreEvent",
        698);
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v23,
              (const char (*)[44])"[LAN_v3] onLanV3RaceScoreEvent, gallery_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &event->gallery_id);
      v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" score:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &event->score);
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" level_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "onLanV3RaceScoreEvent",
      683);
    v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v23,
           (const char (*)[57])"[LAN_v3] findRaceLevelIdByGalleryId failed. gallery_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->gallery_id);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
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
};

// Line 703: range 0000000017FCEECC-0000000017FCEEF2
void __cdecl SeaLampV3Activity::closeRace(SeaLampV3Activity *const this)
{
  SeaLampV3Activity::stopRaceGallery(this);
  SeaLampV3Activity::unregisterRaceGroupBundle(this);
};

// Line 711: range 0000000017FCEEF4-0000000017FCF60A
void __cdecl SeaLampV3Activity::stopRaceGallery(SeaLampV3Activity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  Scene *v5; // rax
  uint32_t GalleryComp; // eax
  common::milog::MiLogStream *v7; // r14
  Scene *v8; // rax
  SceneGalleryComp *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int val; // [rsp+1Ch] [rbp-124h] BYREF
  std::map<unsigned int,SeaLampV3RaceLevelData>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::map<unsigned int,SeaLampV3RaceLevelData>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  std::map<unsigned int,SeaLampV3RaceLevelData> *__for_range; // [rsp+30h] [rbp-110h]
  const std::pair<unsigned int const,SeaLampV3RaceLevelData> *v20; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *level_id; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *level_data; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 14 gallery_id:720 64 16 13 scene_ptr:712 96 16 20 base_gallery_ptr:721 128 16 20 race_gallery_ptr:726";
  *(_QWORD *)(v1 + 16) = SeaLampV3Activity::stopRaceGallery;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "stopRaceGallery",
      715);
    v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v23,
           (const char (*)[35])"[LAN_v3] getCurScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    __for_range = &this->race_data_.level_data_map;
    __for_begin._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::begin(&this->race_data_.level_data_map)._M_node;
    __for_end._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator*(&__for_begin);
      level_id = std::get<0ul,unsigned int const,SeaLampV3RaceLevelData>(v20);
      level_data = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *)std::get<1ul,unsigned int const,SeaLampV3RaceLevelData>(v20);
      *(_DWORD *)(v1 + 48) = SeaLampV3RaceLevelData::getGalleryId(level_data);
      v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      GalleryComp = (unsigned int)Scene::getGalleryComp(v5);
      SceneGalleryComp::findGallery((SceneGalleryComp *const)(v1 + 96), GalleryComp);
      if ( !std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)(v1 + 96)) )
      {
        std::dynamic_pointer_cast<LanV3RaceGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v1 + 128));
        if ( std::operator==<LanV3RaceGallery>(0LL, (const std::shared_ptr<LanV3RaceGallery> *)(v1 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/sea_lamp_v3_activity.cpp",
            "stopRaceGallery",
            729);
          v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                 &v23,
                 (const char (*)[43])"[LAN_v3] LanV3RaceGallery not exists, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
        else
        {
          v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          v9 = Scene::getGalleryComp(v8);
          if ( SceneGalleryComp::forceStopAndClearGallery(v9, *(_DWORD *)(v1 + 48), 1, GALLERY_STOP_NONE) )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sea_lamp_v3_activity.cpp",
              "stopRaceGallery",
              734);
            v10 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    &v23,
                    (const char (*)[54])"[LAN_v3] forceStopAndClearGallery failed, gallery_id:");
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v10,
                    (const unsigned int *)(v1 + 48));
            v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/sea_lamp_v3_activity.cpp",
              "stopRaceGallery",
              737);
            v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v23,
                    (const char (*)[37])"[LAN_v3] stopRaceGallery gallery_id:");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v1 + 48));
            v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" level_id:");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, level_id);
            v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
          }
        }
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        common::milog::MiLogStream::~MiLogStream(&v23);
        std::shared_ptr<LanV3RaceGallery>::~shared_ptr((std::shared_ptr<LanV3RaceGallery> *const)(v1 + 128));
      }
      std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v1 + 96));
      std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  if ( v24 == (char *)v1 )
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

// Line 742: range 0000000017FCF60C-0000000017FCF926
void __cdecl SeaLampV3Activity::unregisterRaceGroupBundle(SeaLampV3Activity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::map<unsigned int,SeaLampV3RaceLevelData>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,SeaLampV3RaceLevelData>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  PlayerGroupLinkComp *group_link_comp; // [rsp+28h] [rbp-B8h]
  std::map<unsigned int,SeaLampV3RaceLevelData> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::pair<unsigned int const,SeaLampV3RaceLevelData> *v14; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *level_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *level_data; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-90h] BYREF
  char v18[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 bundle_id:746";
  *(_QWORD *)(v1 + 16) = SeaLampV3Activity::unregisterRaceGroupBundle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  group_link_comp = Player::getGroupLinkComp(this->player_);
  __for_range = &this->race_data_.level_data_map;
  __for_begin._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::begin(&this->race_data_.level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,SeaLampV3RaceLevelData>(v14);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampV3RaceLevelData> >::type *)std::get<1ul,unsigned int const,SeaLampV3RaceLevelData>(v14);
    *(_DWORD *)(v1 + 32) = SeaLampV3RaceLevelData::getGroupBundleId(level_data);
    if ( PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp, *(_DWORD *)(v1 + 32)) )
    {
      PlayerGroupLinkComp::unregisterGroupBundle(group_link_comp, *(_DWORD *)(v1 + 32), 1);
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "unregisterRaceGroupBundle",
        750);
      v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v17,
             (const char (*)[46])"[LAN_v3] unregisterRaceGroupBundle bundle_id:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])" level_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, level_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 756: range 0000000017FCF928-0000000017FCFEB9
__int64 __fastcall SeaLampV3Activity::openRaceLevel(SeaLampV3Activity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdx
  PlayerGroupLinkComp *GroupLinkComp; // r15
  uint32_t activity_id; // r14d
  uint32_t GroupBundleId; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r13
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::_Self __y; // [rsp+30h] [rbp-C0h] BYREF
  SeaLampV3RaceLevelData *level_data; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:755 64 8 8 iter:757";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::openRaceLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,SeaLampV3RaceLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,SeaLampV3RaceLevelData>::find(
                                                                            &this->race_data_.level_data_map,
                                                                            (const std::map<unsigned int,SeaLampV3RaceLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "openRaceLevel",
      760);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v25,
           (const char (*)[48])"[LAN_v3] find race level data failed, level_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> > *const)(v2 + 64));
    level_data = &v9->second;
    p_is_open = &v9->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( level_data->is_open )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "openRaceLevel",
        766);
      v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v25,
              (const char (*)[40])"[LAN_v3] race level has open, level_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0LL;
    }
    else
    {
      v14 = ((_BYTE)level_data + 4) & 7;
      v15 = (*(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_store1(&level_data->is_open, v14, v15);
      level_data->is_open = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      GroupLinkComp = Player::getGroupLinkComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      activity_id = this->activity_id_;
      GroupBundleId = SeaLampV3RaceLevelData::getGroupBundleId(level_data);
      PlayerGroupLinkComp::registerGroupBundle(GroupLinkComp, GroupBundleId, activity_id);
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "openRaceLevel",
        774);
      v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v25,
              (const char (*)[29])"[LAN_v3] open race level_id:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      BaseActivity::notifyClientData(this, 0);
      result = 0LL;
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
  return result;
};

// Line 780: range 0000000017FCFEBA-0000000017FD004C
__int64 __fastcall SeaLampV3Activity::getRaceLevelMaxScore(const SeaLampV3Activity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::pointer v6; // rdx
  uint32_t *p_max_score; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:779 64 8 8 iter:781";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::getRaceLevelMaxScore;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,SeaLampV3RaceLevelData>::const_iterator *)(v2 + 64) = std::map<unsigned int,SeaLampV3RaceLevelData>::find(
                                                                                  &this->race_data_.level_data_map,
                                                                                  (const std::map<unsigned int,SeaLampV3RaceLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> > *const)(v2 + 64));
    p_max_score = &v6->second.max_score;
    if ( *(_BYTE *)(((unsigned __int64)p_max_score >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_max_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_max_score);
    }
    result = v6->second.max_score;
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

// Line 790: range 0000000017FD004E-0000000017FD0522
__int64 __fastcall SeaLampV3Activity::raceRestart(SeaLampV3Activity *const this, uint32_t gallery_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // r14
  PlayerSceneComp *SceneComp; // r14
  Scene *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-134h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-130h] BYREF
  TransferReason p_reason; // [rsp+40h] [rbp-110h] BYREF
  char v18[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 7 ret:791 48 4 14 gallery_id:789 64 12 14 reborn_pos:797 96 12 14 reborn_rot:798 128 16 13 scene_ptr:805";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::raceRestart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = gallery_id;
  *(_DWORD *)(v2 + 32) = SeaLampV3Activity::checRaceRestart(this, *(_DWORD *)(v2 + 48));
  if ( *(_DWORD *)(v2 + 32) )
  {
    v5 = *(_DWORD *)(v2 + 32);
  }
  else
  {
    Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
    Vector3::Vector3((Vector3 *const)(v2 + 96), 0.0, 0.0, 0.0);
    *(_DWORD *)(v2 + 32) = SeaLampV3Activity::getRaceRebornPoint(
                             this,
                             *(_DWORD *)(v2 + 48),
                             (Vector3 *)(v2 + 64),
                             (Vector3 *)(v2 + 96));
    if ( *(_DWORD *)(v2 + 32) )
    {
      v5 = *(_DWORD *)(v2 + 32);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 128));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "raceRestart",
          808);
        v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v16,
               (const char (*)[28])"[LAN_v3] not on scene, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        common::milog::MiLogStream::~MiLogStream(&v16);
        v5 = 103;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        SceneComp = Player::getSceneComp(this->player_);
        TransferReason::TransferReason(&p_reason, ENTER_REASON_LAN_V3_RACE_RESTART);
        v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *(_DWORD *)(v2 + 32) = PlayerSceneComp::jumpToScene(
                                 SceneComp,
                                 v8,
                                 (const Vector3 *)(v2 + 64),
                                 (const Vector3 *)(v2 + 96),
                                 0,
                                 &p_reason);
        TransferReason::~TransferReason(&p_reason);
        if ( *(_DWORD *)(v2 + 32) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/sea_lamp_v3_activity.cpp",
            "raceRestart",
            814);
          v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v16,
                 (const char (*)[34])"[LAN_v3] jumpToScene failed, ret:");
          v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v2 + 32));
          v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" gallery_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
        v5 = *(_DWORD *)(v2 + 32);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
    }
  }
  result = v5;
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
  return result;
};

// Line 820: range 0000000017FD0524-0000000017FD1028
__int64 __fastcall SeaLampV3Activity::checRaceRestart(SeaLampV3Activity *const this, uint32_t gallery_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // rbx
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // r14
  Scene *v9; // rax
  SceneGalleryComp *GalleryComp; // rax
  common::milog::MiLogStream *v11; // r14
  PlayerSceneComp *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::pointer v22; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-114h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::_Self __y; // [rsp+20h] [rbp-110h] BYREF
  SeaLampV3RaceLevelData *level_data; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 12 level_id:849 48 4 14 gallery_id:819 64 8 8 iter:855 96 16 13 scene_ptr:826 128 16 14 avatar_ptr:842";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::checRaceRestart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "checRaceRestart",
        829);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v31,
             (const char (*)[28])"[LAN_v3] not on scene, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v7 = 103;
      goto LABEL_48;
    }
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    GalleryComp = Scene::getGalleryComp(v9);
    if ( SceneGalleryComp::isAnyGalleryStarted(GalleryComp) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "checRaceRestart",
        834);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v31,
              (const char (*)[33])"[LAN_v3] anyGalleryStarted, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v7 = 523;
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v12 = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::isInTransfer(v12) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "checRaceRestart",
        839);
      v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v31,
              (const char (*)[30])"[LAN_v3] is in transfer, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v7 = 170;
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 128));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "checRaceRestart",
        845);
      v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v31,
              (const char (*)[39])"[LAN_v3] getCurAvatar is nullptr, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v7 = 103;
      goto LABEL_47;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    *(_DWORD *)(v2 + 32) = ActivitySeaLampV3ExcelConfigMgr::findRaceLevelIdByGalleryId(
                             &v15->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr,
                             *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( !*(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "checRaceRestart",
        852);
      v16 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v31,
              (const char (*)[56])"[LAN_v3] findRaceLevelIdByGalleryId failed, gallery_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v7 = -1;
      goto LABEL_47;
    }
    *(std::map<unsigned int,SeaLampV3RaceLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,SeaLampV3RaceLevelData>::find(
                                                                              &this->race_data_.level_data_map,
                                                                              (const std::map<unsigned int,SeaLampV3RaceLevelData>::key_type *)(v2 + 32));
    __y._M_node = std::map<unsigned int,SeaLampV3RaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "checRaceRestart",
        858);
      v19 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v31,
              (const char (*)[48])"[LAN_v3] find race level data failed, level_id:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3RaceLevelData> > *const)(v2 + 64));
      level_data = &v22->second;
      p_is_open = &v22->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( level_data->is_open )
      {
        v7 = 0;
        goto LABEL_47;
      }
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "checRaceRestart",
        864);
      v24 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v31,
              (const char (*)[40])"[LAN_v3] race level not open, level_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 32));
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v7 = -1;
LABEL_47:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
LABEL_48:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
    goto LABEL_49;
  }
  common::milog::MiLogStream::create(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/sea_lamp_v3_activity.cpp",
    "checRaceRestart",
    823);
  v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v31,
         (const char (*)[33])"[LAN_v3] not in self scene, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v31);
  v7 = 512;
LABEL_49:
  result = v7;
  if ( v32 == (char *)v2 )
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

// Line 872: range 0000000017FD102A-0000000017FD19E9
__int64 __fastcall SeaLampV3Activity::getRaceRebornPoint(
        SeaLampV3Activity *const this,
        uint32_t gallery_id,
        Vector3 *reborn_pos,
        Vector3 *reborn_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  PlayerSceneComp *SceneComp; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  LuaConfigMgr *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-D8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-D0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v30; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 16 cur_scene_id:879 64 4 14 gallery_id:871";
  *(_QWORD *)(v4 + 16) = SeaLampV3Activity::getRaceRebornPoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = gallery_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                         &v7->design_config.txt_config_mgr.gallery_config_mgr,
                         *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( !gallery_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "getRaceRebornPoint",
      876);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v31,
           (const char (*)[49])"[LAN_v3] gallery_config_ptr is null, gallery_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_27:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 0xFFFFFFFFLL;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  *(_DWORD *)(v4 + 48) = PlayerSceneComp::getCurSceneId(SceneComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gallery_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&gallery_config_ptr->revive_point_group_id);
  }
  v13 = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, gallery_config_ptr->revive_point_group_id) != *(_DWORD *)(v4 + 48);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( v13 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "getRaceRebornPoint",
      882);
    v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v31,
            (const char (*)[29])"[LAN_v3] different scene_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" gallery_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_27;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gallery_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&gallery_config_ptr->revive_point_group_id);
  }
  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(v18, gallery_config_ptr->revive_point_group_id);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( !group_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "getRaceRebornPoint",
      888);
    v19 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v31,
            (const char (*)[49])"[LAN_v3] findGroupScriptConfig failed, group_id:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v19,
            &gallery_config_ptr->revive_point_group_id);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_27;
  }
  if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&gallery_config_ptr->revive_point_config_id);
  }
  point_script_config_ptr = GroupScriptConfig::findPointConfig(
                              group_script_config_ptr,
                              gallery_config_ptr->revive_point_config_id);
  if ( !point_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "getRaceRebornPoint",
      894);
    v21 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v31,
            (const char (*)[44])"[LAN_v3] findPointConfig failed, config_id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v21,
            &gallery_config_ptr->revive_point_config_id);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_27;
  }
  if ( ((unsigned __int8)reborn_pos & 7) >= *(_BYTE *)(((unsigned __int64)reborn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)reborn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&reborn_pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)reborn_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&reborn_pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(reborn_pos, 12LL);
  }
  if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                        + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                           + 3) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
  }
  *reborn_pos = point_script_config_ptr->pos;
  if ( ((unsigned __int8)reborn_rot & 7) >= *(_BYTE *)(((unsigned __int64)reborn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)reborn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&reborn_rot->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)reborn_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&reborn_rot->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(reborn_rot, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                           + 3) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
  }
  *reborn_rot = point_script_config_ptr->rot;
  result = 0LL;
LABEL_37:
  if ( v32 == (char *)v4 )
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
  return result;
};

// Line 903: range 0000000017FD19EA-0000000017FD1A0B
int32_t __cdecl SeaLampV3Activity::openRaceLevelByGm(SeaLampV3Activity *const this, uint32_t level_id)
{
  return SeaLampV3Activity::openRaceLevel(this, level_id);
};

// Line 908: range 0000000017FD1A0C-0000000017FD1C2E
__int64 __fastcall SeaLampV3Activity::restartRaceLevelByGm(SeaLampV3Activity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  const data::LanV3RaceExcelConfig *level_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:907";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::restartRaceLevelByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  level_config_ptr = data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3RaceExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config_ptr->gallery_id);
    }
    result = SeaLampV3Activity::raceRestart(this, level_config_ptr->gallery_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "restartRaceLevelByGm",
      912);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v10,
           (const char (*)[52])"[LAN_v3] findLanV3RaceExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
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

// Line 919: range 0000000017FD1C30-0000000017FD1FC0
__int64 __fastcall SeaLampV3Activity::setRaceLevelScoreByGm(
        SeaLampV3Activity *const this,
        uint32_t level_id,
        uint32_t score)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  const data::LanV3RaceExcelConfig *level_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 level_id:918 48 4 9 score:918 64 16 13 event_ptr:926";
  *(_QWORD *)(v3 + 16) = SeaLampV3Activity::setRaceLevelScoreByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = level_id;
  *(_DWORD *)(v3 + 48) = score;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  level_config_ptr = data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3RaceExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr,
                       *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( level_config_ptr )
  {
    common::tools::perf::make_shared<LanV3RaceScoreEvent,unsigned int const&,unsigned int &>(
      (const unsigned int *)(v3 + 64),
      &level_config_ptr->gallery_id,
      (const unsigned int *)(v3 + 48),
      &level_config_ptr->gallery_id);
    if ( std::operator==<LanV3RaceScoreEvent>(0LL, (const std::shared_ptr<LanV3RaceScoreEvent> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "setRaceLevelScoreByGm",
        929);
      v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v15,
             (const char (*)[59])"[LAN_v3] MAKE_SHARED LanV3RaceScoreEvent failed, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<LanV3RaceScoreEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v14,
        (const std::shared_ptr<LanV3RaceScoreEvent> *)(v3 + 64));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v14);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v14);
      v8 = 0;
    }
    std::shared_ptr<LanV3RaceScoreEvent>::~shared_ptr((std::shared_ptr<LanV3RaceScoreEvent> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "setRaceLevelScoreByGm",
      923);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v15,
           (const char (*)[52])"[LAN_v3] findLanV3RaceExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = -1;
  }
  result = v8;
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

// Line 938: range 0000000017FD1FC2-0000000017FD296A
__int64 __fastcall SeaLampV3Activity::openShadowStage(SeaLampV3Activity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> >::pointer v15; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  std::vector<unsigned int>::const_reference v22; // rax
  _DWORD *v23; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> >::_Self *p_y; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::pointer v25; // rdx
  char v26; // cl
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rbx
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> >::_Self __y; // [rsp+18h] [rbp-F8h] BYREF
  const data::LanV3ShadowStageExcelConfig *stage_config_ptr; // [rsp+20h] [rbp-F0h]
  SeaLampV3ShadowStageData *stage_data; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v41; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v42; // [rsp+40h] [rbp-D0h] BYREF
  char v43[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 level_id:964 48 4 12 stage_id:937 64 8 14 stage_iter:950 96 8 14 level_iter:965";
  *(_QWORD *)(v2 + 16) = SeaLampV3Activity::openShadowStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
  stage_config_ptr = data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3ShadowStageExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr,
                       *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v41);
  if ( !stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "openShadowStage",
      942);
    v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v42,
           (const char (*)[59])"[LAN_v3] findLanV3ShadowStageExcelConfig failed, stage_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    result = 0xFFFFFFFFLL;
    goto LABEL_36;
  }
  if ( std::vector<unsigned int>::empty(&stage_config_ptr->stage_level_list) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "openShadowStage",
      947);
    v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v42,
            (const char (*)[45])"[LAN_v3] shadow stage level empty, stage_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  *(std::map<unsigned int,SeaLampV3ShadowStageData>::iterator *)(v2 + 64) = std::map<unsigned int,SeaLampV3ShadowStageData>::find(
                                                                              &this->shadow_data_.stage_data_map,
                                                                              (const std::map<unsigned int,SeaLampV3ShadowStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SeaLampV3ShadowStageData>::end(&this->shadow_data_.stage_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "openShadowStage",
      953);
    v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v42,
            (const char (*)[50])"[LAN_v3] find shadow stage data failed, stage_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> > *const)(v2 + 64));
    stage_data = &v15->second;
    p_is_open = &v15->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( stage_data->is_open )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "openShadowStage",
        959);
      v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v42,
              (const char (*)[42])"[LAN_v3] shadow stage has open, stage_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v42);
      result = 0LL;
    }
    else
    {
      v20 = ((_BYTE)stage_data + 4) & 7;
      v21 = (*(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000));
      if ( (_BYTE)v21 )
        __asan_report_store1(&stage_data->is_open, v20, v21);
      stage_data->is_open = 1;
      v22 = std::vector<unsigned int>::front(&stage_config_ptr->stage_level_list);
      v23 = v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      *(_DWORD *)(v2 + 32) = *v23;
      *(std::map<unsigned int,SeaLampV3ShadowLevelData>::iterator *)(v2 + 96) = std::map<unsigned int,SeaLampV3ShadowLevelData>::find(
                                                                                  &stage_data->level_data_map,
                                                                                  (const std::map<unsigned int,SeaLampV3ShadowLevelData>::key_type *)(v2 + 32));
      __y._M_node = std::map<unsigned int,SeaLampV3ShadowLevelData>::end(&stage_data->level_data_map)._M_node;
      p_y = &__y;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::_Self *)(v2 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::_Self *)&__y) )
      {
        v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> > *const)(v2 + 96));
        v26 = *(_BYTE *)(((unsigned __int64)&v25->second.is_open >> 3) + 0x7FFF8000);
        if ( v26 != 0 && (((unsigned __int8)v25 + 8) & 7) >= v26 )
        {
          LOBYTE(p_y) = v26 != 0;
          __asan_report_store1(&v25->second.is_open, p_y, v25);
        }
        v25->second.is_open = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "openShadowStage",
          972);
        v27 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v42,
                (const char (*)[50])"[LAN_v3] shadow find level data failed, level_id:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v2 + 32));
        v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" stage_id:");
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v2 + 48));
        v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
        common::milog::MiLogStream::~MiLogStream(&v42);
      }
      BaseActivity::notifyClientData(this, 0);
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_v3_activity.cpp",
        "openShadowStage",
        977);
      v32 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v42,
              (const char (*)[31])"[LAN_v3] shadow open stage_id:");
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v2 + 48));
      v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])" level_id:");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v2 + 32));
      v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
      common::milog::MiLogStream::~MiLogStream(&v42);
      result = 0LL;
    }
  }
LABEL_36:
  if ( v43 == (char *)v2 )
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

// Line 983: range 0000000017FD296C-0000000017FD3862
__int64 __fastcall SeaLampV3Activity::finishShadowLevel(
        SeaLampV3Activity *const this,
        uint32_t level_id,
        uint32_t finish_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> >::pointer v14; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::pointer v24; // rax
  bool *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> >::_Self *p_y; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::pointer v32; // rdx
  char v33; // cl
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  uint32_t *p_min_finish_time; // rsi
  uint32_t *v44; // rax
  uint32_t *v45; // rdx
  uint32_t v46; // ecx
  char v47; // dl
  __int64 v48; // rdx
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rbx
  unsigned int val; // [rsp+14h] [rbp-14Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> >::_Self __y; // [rsp+18h] [rbp-148h] BYREF
  SeaLampV3ShadowStageData *stage_data; // [rsp+20h] [rbp-140h]
  SeaLampV3ShadowLevelData *level_data; // [rsp+28h] [rbp-138h]
  std::shared_ptr<LanV3ShadowFinishLevelEvent> __r; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<Config> v63; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v64; // [rsp+50h] [rbp-110h] BYREF
  char v65[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 12 stage_id:990 48 4 18 next_level_id:1019 64 4 12 level_id:982 80 4 15 finish_time:982 9"
                        "6 8 14 stage_iter:991 128 8 15 level_iter:1003 160 8 20 next_level_iter:1023";
  *(_QWORD *)(v3 + 16) = SeaLampV3Activity::finishShadowLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 64) = level_id;
  *(_DWORD *)(v3 + 80) = finish_time;
  if ( !*(_DWORD *)(v3 + 80) )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "finishShadowLevel",
      986);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v64,
           (const char (*)[45])"[LAN_v3] shadow level finish time is 0, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v64);
    result = 0xFFFFFFFFLL;
    goto LABEL_51;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v63);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
  *(_DWORD *)(v3 + 32) = ActivitySeaLampV3ExcelConfigMgr::findShadowStageIdByLevelId(
                           &v8->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr,
                           *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v63);
  *(std::map<unsigned int,SeaLampV3ShadowStageData>::iterator *)(v3 + 96) = std::map<unsigned int,SeaLampV3ShadowStageData>::find(
                                                                              &this->shadow_data_.stage_data_map,
                                                                              (const std::map<unsigned int,SeaLampV3ShadowStageData>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,SeaLampV3ShadowStageData>::end(&this->shadow_data_.stage_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> >::_Self *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "finishShadowLevel",
      994);
    v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v64,
           (const char (*)[50])"[LAN_v3] shadow find stage data failed, stage_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" level_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_27:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v64);
    result = 0xFFFFFFFFLL;
    goto LABEL_51;
  }
  v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowStageData> > *const)(v3 + 96));
  stage_data = &v14->second;
  p_is_open = &v14->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( !stage_data->is_open )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "finishShadowLevel",
      1000);
    v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v64,
            (const char (*)[42])"[LAN_v3] shadow stage not open, stage_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
    v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" level_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_27;
  }
  *(std::map<unsigned int,SeaLampV3ShadowLevelData>::iterator *)(v3 + 128) = std::map<unsigned int,SeaLampV3ShadowLevelData>::find(
                                                                               &stage_data->level_data_map,
                                                                               (const std::map<unsigned int,SeaLampV3ShadowLevelData>::key_type *)(v3 + 64));
  __y._M_node = std::map<unsigned int,SeaLampV3ShadowLevelData>::end(&stage_data->level_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::_Self *)(v3 + 128),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::_Self *)&__y) )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "finishShadowLevel",
      1006);
    v20 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v64,
            (const char (*)[50])"[LAN_v3] shadow find level data failed, stage_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 32));
    v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" level_id:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_27;
  }
  v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> > *const)(v3 + 128));
  level_data = &v24->second;
  v25 = &v24->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v25 & 7) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v25);
  }
  if ( !level_data->is_open )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_v3_activity.cpp",
      "finishShadowLevel",
      1012);
    v26 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v64,
            (const char (*)[42])"[LAN_v3] shadow level not open, stage_id:");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 32));
    v28 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v27, (const char (*)[11])" level_id:");
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_27;
  }
  if ( *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&level_data->min_finish_time);
  }
  if ( level_data->min_finish_time )
  {
    p_min_finish_time = &level_data->min_finish_time;
    v44 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v3 + 80), &level_data->min_finish_time);
    v45 = v44;
    if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v44);
    }
    v46 = *v45;
    v47 = *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3) + 0x7FFF8000);
    LOBYTE(p_min_finish_time) = v47 != 0;
    v48 = (v47 != 0) & (unsigned __int8)((char)((((_BYTE)level_data + 8) & 7) + 3) >= v47);
    if ( (_BYTE)v48 )
      __asan_report_store4(&level_data->min_finish_time, p_min_finish_time, v48);
    level_data->min_finish_time = v46;
  }
  else
  {
    level_data->min_finish_time = *(_DWORD *)(v3 + 80);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v63);
    v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
    *(_DWORD *)(v3 + 48) = ActivitySeaLampV3ExcelConfigMgr::findShadowNextLevelId(
                             &v30->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr,
                             *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v63);
    if ( *(_DWORD *)(v3 + 48) )
    {
      *(std::map<unsigned int,SeaLampV3ShadowLevelData>::iterator *)(v3 + 160) = std::map<unsigned int,SeaLampV3ShadowLevelData>::find(
                                                                                   &stage_data->level_data_map,
                                                                                   (const std::map<unsigned int,SeaLampV3ShadowLevelData>::key_type *)(v3 + 48));
      __y._M_node = std::map<unsigned int,SeaLampV3ShadowLevelData>::end(&stage_data->level_data_map)._M_node;
      p_y = &__y;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::_Self *)(v3 + 160),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> >::_Self *)&__y) )
      {
        v32 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampV3ShadowLevelData> > *const)(v3 + 160));
        v33 = *(_BYTE *)(((unsigned __int64)&v32->second.is_open >> 3) + 0x7FFF8000);
        if ( v33 != 0 && (((unsigned __int8)v32 + 8) & 7) >= v33 )
        {
          LOBYTE(p_y) = v33 != 0;
          __asan_report_store1(&v32->second.is_open, p_y, v32);
        }
        v32->second.is_open = 1;
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "finishShadowLevel",
          1027);
        v34 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v64,
                (const char (*)[33])"[LAN_v3] shadow finish level_id:");
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                (const unsigned int *)(v3 + 64));
        v36 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v35,
                (const char (*)[21])" open next_level_id:");
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v36,
                (const unsigned int *)(v3 + 48));
        v38 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v37, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sea_lamp_v3_activity.cpp",
          "finishShadowLevel",
          1031);
        v39 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v64,
                (const char (*)[50])"[LAN_v3] shadow find level data failed, stage_id:");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v3 + 32));
        v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v40,
                (const char (*)[16])" next_level_id:");
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v41,
                (const unsigned int *)(v3 + 48));
        v38 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
      common::milog::MiLogStream::~MiLogStream(&v64);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  common::tools::perf::make_shared<LanV3ShadowFinishLevelEvent,unsigned int &>(
    (unsigned int *)&__r,
    (unsigned int *)(v3 + 64));
  std::shared_ptr<BaseEvent>::shared_ptr<LanV3ShadowFinishLevelEvent,void>(
    (std::shared_ptr<BaseEvent> *const)&v63,
    &__r);
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v63);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v63);
  std::shared_ptr<LanV3ShadowFinishLevelEvent>::~shared_ptr(&__r);
  BaseActivity::notifyClientData(this, 0);
  common::milog::MiLogStream::create(
    &v64,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/sea_lamp_v3_activity.cpp",
    "finishShadowLevel",
    1044);
  v50 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v64,
          (const char (*)[33])"[LAN_v3] shadow finish level_id:");
  v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v3 + 64));
  v52 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v51, (const char (*)[14])" finish_time:");
  v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v3 + 80));
  v54 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v53, (const char (*)[18])" min_finish_time:");
  v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &level_data->min_finish_time);
  v56 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v55, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &val);
  common::milog::MiLogStream::~MiLogStream(&v64);
  result = 0LL;
LABEL_51:
  if ( v65 == (char *)v3 )
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
  return result;
};

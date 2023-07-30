// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/winter_camp_activity.cpp

// Line 38: range 00000000161CDE56-00000000161CDF32
uint32_t __cdecl WinterCampExploreData::getGroupBundleId(WinterCampExploreData *const this)
{
  const data::ActivityWinterCampExcelConfigMgrBase *v1; // rdx
  ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+10h] [rbp-20h]
  const data::WinterCampExploreExcelConfig *config_ptr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v5);
  v1 = activity_winter_camp_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampExploreExcelConfig(v1, this->id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->group_link_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->group_link_id);
  }
  return config_ptr->group_link_id;
};

// Line 49: range 00000000161CDF34-00000000161CE10E
int32_t __cdecl WinterCampExploreData::fromBin(
        WinterCampExploreData *const this,
        const proto::WinterCampExploreBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  unsigned int v4; // eax
  __int64 v5; // rdx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  google::protobuf::uint32 v10; // ebx
  std::map<unsigned int,unsigned int>::key_type *p_k; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  google::protobuf::uint32 *v13; // rdx
  char v14; // cl
  const proto::WinterCampExploreBin *bina; // [rsp+0h] [rbp-50h]
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-34h] BYREF
  google::protobuf::RepeatedPtrField<proto::WinterCampDropBin>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::WinterCampDropBin>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const google::protobuf::RepeatedPtrField<proto::WinterCampDropBin> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::WinterCampDropBin *drop_record_bin; // [rsp+38h] [rbp-18h]

  bina = bin;
  v2 = proto::WinterCampExploreBin::id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->id = v2;
  LOBYTE(v4) = proto::WinterCampExploreBin::is_finished(bina);
  v5 = v4;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store1(&this->is_finished, bin, v5);
  }
  this->is_finished = v5;
  v7 = proto::WinterCampExploreBin::drop_group_index(bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->drop_group_index >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->drop_group_index, bin, v9);
  this->drop_group_index = v7;
  __for_range = proto::WinterCampExploreBin::drop_record_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampDropBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampDropBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampDropBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    drop_record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampDropBin const>::operator*(&__for_begin);
    v10 = proto::WinterCampDropBin::drop_id(drop_record_bin);
    __k = proto::WinterCampDropBin::config_id(drop_record_bin);
    p_k = &__k;
    v12 = std::map<unsigned int,unsigned int>::operator[](&this->drop_record_map, &__k);
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    {
      LOBYTE(p_k) = v14 != 0;
      __asan_report_store4(v12, p_k, v12);
    }
    *v13 = v10;
    google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampDropBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 61: range 00000000161CE110-00000000161CE333
int32_t __cdecl WinterCampExploreData::toBin(const WinterCampExploreData *const this, proto::WinterCampExploreBin *bin)
{
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,unsigned int> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *drop_id; // [rsp+40h] [rbp-10h]
  proto::WinterCampDropBin *drop_record_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::WinterCampExploreBin::set_id(bin, this->id);
  if ( *(char *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finished);
  proto::WinterCampExploreBin::set_is_finished(bin, this->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_group_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_group_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->drop_group_index);
  }
  proto::WinterCampExploreBin::set_drop_group_index(bin, this->drop_group_index);
  __for_range = &this->drop_record_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->drop_record_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->drop_record_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,unsigned int>(v6);
    drop_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v6);
    drop_record_bin = proto::WinterCampExploreBin::add_drop_record_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id);
    }
    proto::WinterCampDropBin::set_config_id(drop_record_bin, *config_id);
    if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(drop_id);
    }
    proto::WinterCampDropBin::set_drop_id(drop_record_bin, *drop_id);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 75: range 00000000161CE334-00000000161CE52C
int32_t __cdecl WinterCampExploreData::toClient(
        const WinterCampExploreData *const this,
        proto::WinterCampStageInfo *proto)
{
  const data::ActivityWinterCampExcelConfigMgrBase *v2; // rdx
  google::protobuf::uint32 v3; // edx
  uint32_t total_num; // [rsp+1Ch] [rbp-24h]
  ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+20h] [rbp-20h]
  const data::WinterCampExploreExcelConfig *config_ptr; // [rsp+28h] [rbp-18h]
  std::shared_ptr<Config> v8; // [rsp+30h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::WinterCampStageInfo::set_id(proto, this->id);
  if ( *(char *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finished);
  proto::WinterCampStageInfo::set_is_finished(proto, this->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v8);
    activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v8);
    v2 = activity_winter_camp_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampExploreExcelConfig(v2, this->id);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->group_id);
      }
      total_num = ActivityWinterCampExcelConfigMgr::getGroupGadgetNum(
                    activity_winter_camp_config_mgr,
                    config_ptr->group_id);
      v3 = std::map<unsigned int,unsigned int>::size(&this->drop_record_map);
      proto::WinterCampStageInfo::set_cur_progress(proto, v3);
      proto::WinterCampStageInfo::set_total_progress(proto, total_num);
    }
  }
  return 0;
};

// Line 93: range 00000000161CE52E-00000000161CE606
void __cdecl WinterCampExploreData::clear(WinterCampExploreData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->drop_group_index >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_group_index >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->drop_group_index, v2, v3);
  this->drop_group_index = 0;
  if ( *(char *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finished, v2, &this->is_finished);
  this->is_finished = 0;
  std::map<unsigned int,unsigned int>::clear(&this->drop_record_map);
};

// Line 101: range 00000000161CE608-00000000161CE6F4
uint32_t __cdecl WinterCampBattleData::getGroupBundleId(WinterCampBattleData *const this)
{
  const data::ActivityWinterCampExcelConfigMgrBase *v1; // rcx
  ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+10h] [rbp-20h]
  const data::WinterCampBattleExcelConfig *config_ptr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v5);
  v1 = activity_winter_camp_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampBattleExcelConfig(v1, this->id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->group_link_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->group_link_id);
  }
  return config_ptr->group_link_id;
};

// Line 112: range 00000000161CE6F6-00000000161CE7A6
int32_t __cdecl WinterCampBattleData::fromBin(WinterCampBattleData *const this, const proto::WinterCampBattleBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  bool is_finished; // cl
  char v6; // dl
  __int64 v7; // rdx
  const proto::WinterCampBattleBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::WinterCampBattleBin::id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->id = v2;
  is_finished = proto::WinterCampBattleBin::is_finished(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_finished, bin, v7);
  this->is_finished = is_finished;
  return 0;
};

// Line 119: range 00000000161CE7A8-00000000161CE85A
int32_t __cdecl WinterCampBattleData::toBin(const WinterCampBattleData *const this, proto::WinterCampBattleBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::WinterCampBattleBin::set_id(bin, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::WinterCampBattleBin::set_is_finished(bin, this->is_finished);
  return 0;
};

// Line 126: range 00000000161CE85C-00000000161CE97D
int32_t __cdecl WinterCampBattleData::toClient(
        const WinterCampBattleData *const this,
        proto::WinterCampStageInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::WinterCampStageInfo::set_id(proto, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::WinterCampStageInfo::set_is_finished(proto, this->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::WinterCampStageInfo::set_cur_progress(proto, this->is_finished);
  proto::WinterCampStageInfo::set_total_progress(proto, 1u);
  return 0;
};

// Line 135: range 00000000161CE97E-00000000161CEA0D
void __cdecl WinterCampBattleData::clear(WinterCampBattleData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_finished, v2, v3);
  this->is_finished = 0;
};

// Line 141: range 00000000161CEA0E-00000000161CEAFA
uint32_t __cdecl WinterCampRaceData::getGroupBundleId(WinterCampRaceData *const this)
{
  const data::ActivityWinterCampExcelConfigMgrBase *v1; // rcx
  ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+10h] [rbp-20h]
  const data::WinterCampRaceExcelConfig *config_ptr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v5);
  v1 = activity_winter_camp_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampRaceExcelConfig(v1, this->id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->group_link_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->group_link_id);
  }
  return config_ptr->group_link_id;
};

// Line 152: range 00000000161CEAFC-00000000161CEBAF
int32_t __cdecl WinterCampRaceData::fromBin(WinterCampRaceData *const this, const proto::WinterCampRaceBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const proto::WinterCampRaceBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::WinterCampRaceBin::id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->id = v2;
  v5 = proto::WinterCampRaceBin::max_score(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->max_score, bin, v7);
  this->max_score = v5;
  return 0;
};

// Line 159: range 00000000161CEBB0-00000000161CEC61
int32_t __cdecl WinterCampRaceData::toBin(const WinterCampRaceData *const this, proto::WinterCampRaceBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::WinterCampRaceBin::set_id(bin, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_score);
  }
  proto::WinterCampRaceBin::set_max_score(bin, this->max_score);
  return 0;
};

// Line 166: range 00000000161CEC62-00000000161CED13
int32_t __cdecl WinterCampRaceData::toClient(
        const WinterCampRaceData *const this,
        proto::WinterCampRaceStageInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::WinterCampRaceStageInfo::set_id(proto, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_score);
  }
  proto::WinterCampRaceStageInfo::set_max_score(proto, this->max_score);
  return 0;
};

// Line 174: range 00000000161CED14-00000000161CEE64
int32_t __cdecl WinterCampRecvItemData::fromBin(
        WinterCampRecvItemData *const this,
        const proto::WinterCampRecvItemBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  google::protobuf::uint32 v4; // ebx
  std::map<unsigned int,unsigned int>::key_type *p_k; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  char v8; // cl
  const proto::WinterCampRecvItemBin *bina; // [rsp+0h] [rbp-50h]
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-34h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::ItemParamBin *item_bin; // [rsp+38h] [rbp-18h]

  bina = bin;
  std::map<unsigned int,unsigned int>::clear(&this->item_map);
  v2 = proto::WinterCampRecvItemBin::uid(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->uid = v2;
  __for_range = proto::WinterCampRecvItemBin::item_bin_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*(&__for_begin);
    v4 = proto::ItemParamBin::count(item_bin);
    __k = proto::ItemParamBin::item_id(item_bin);
    p_k = &__k;
    v6 = std::map<unsigned int,unsigned int>::operator[](&this->item_map, &__k);
    v7 = v6;
    v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
    {
      LOBYTE(p_k) = v8 != 0;
      __asan_report_store4(v6, p_k, v6);
    }
    *v7 = v4;
    google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 185: range 00000000161CEE66-00000000161CEFED
int32_t __cdecl WinterCampRecvItemData::toBin(
        const WinterCampRecvItemData *const this,
        proto::WinterCampRecvItemBin *bin)
{
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,unsigned int> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+40h] [rbp-10h]
  proto::ItemParamBin *item_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::WinterCampRecvItemBin::set_uid(bin, this->uid);
  __for_range = &this->item_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->item_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->item_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    item_id = std::get<0ul,unsigned int const,unsigned int>(v6);
    item_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v6);
    item_bin = proto::WinterCampRecvItemBin::add_item_bin_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_id);
    }
    proto::ItemParamBin::set_item_id(item_bin, *item_id);
    if ( *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_count);
    }
    proto::ItemParamBin::set_count(item_bin, *item_count);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 197: range 00000000161CEFEE-00000000161CF175
int32_t __cdecl WinterCampRecvItemData::toClient(
        const WinterCampRecvItemData *const this,
        proto::WinterCampRecvItemData *proto)
{
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,unsigned int> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+40h] [rbp-10h]
  proto::ItemParam *item_proto; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::WinterCampRecvItemData::set_uid(proto, this->uid);
  __for_range = &this->item_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->item_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->item_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    item_id = std::get<0ul,unsigned int const,unsigned int>(v6);
    item_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v6);
    item_proto = proto::WinterCampRecvItemData::add_item_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_id);
    }
    proto::ItemParam::set_item_id(item_proto, *item_id);
    if ( *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_count);
    }
    proto::ItemParam::set_count(item_proto, *item_count);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 209: range 00000000161CF176-00000000161CFB61
int32_t __cdecl WinterCampActivity::fromScheduleBin(
        WinterCampActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  bool is_content_closed; // cl
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rdx
  char v10; // al
  google::protobuf::uint32 v11; // ebx
  proto::ActivityScheduleBin::DetailCase *v12; // rsi
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v13; // rax
  google::protobuf::uint32 *v14; // rdx
  char v15; // cl
  google::protobuf::uint32 v16; // ebx
  proto::ActivityScheduleBin::DetailCase *v17; // rsi
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v18; // rax
  google::protobuf::uint32 *v19; // rdx
  char v20; // cl
  const proto::WinterCampExploreBin *v21; // rax
  const proto::WinterCampBattleBin *v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // rdx
  char v25; // al
  WinterCampRaceData *v26; // rax
  const google::protobuf::RepeatedField<unsigned int> *v27; // rax
  const google::protobuf::RepeatedField<unsigned int> *v28; // rax
  WinterCampRecvItemData *v29; // rax
  const google::protobuf::RepeatedField<unsigned int> *v30; // rax
  google::protobuf::uint32 v31; // ebx
  proto::ActivityScheduleBin::DetailCase *v32; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v33; // rax
  google::protobuf::uint32 *v34; // rdx
  char v35; // cl
  google::protobuf::uint32 v36; // ebx
  proto::ActivityScheduleBin::DetailCase *v37; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v38; // rax
  google::protobuf::uint32 *v39; // rdx
  char v40; // cl
  unsigned int val; // [rsp+10h] [rbp-D0h] BYREF
  proto::ActivityScheduleBin::DetailCase v42; // [rsp+14h] [rbp-CCh] BYREF
  google::protobuf::RepeatedPtrField<proto::WinterCampHomeUsedItemBin>::const_iterator __for_begin_0; // [rsp+18h] [rbp-C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::WinterCampHomeUsedItemBin>::const_iterator __for_end_0; // [rsp+20h] [rbp-C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::WinterCampRaceBin>::const_iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::WinterCampRaceBin>::const_iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  const proto::WinterCampScheduleBin *winter_camp_bin; // [rsp+38h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::WinterCampRaceBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const google::protobuf::RepeatedPtrField<proto::WinterCampRecvItemBin> *__for_range_0; // [rsp+48h] [rbp-98h]
  const google::protobuf::RepeatedPtrField<proto::WinterCampHomeUsedItemBin> *__for_range_1; // [rsp+50h] [rbp-90h]
  const google::protobuf::RepeatedPtrField<proto::WinterCampSnowmanUsedItemBin> *__for_range_3; // [rsp+58h] [rbp-88h]
  const proto::WinterCampSnowmanUsedItemBin *used_item_bin; // [rsp+60h] [rbp-80h]
  std::map<unsigned int,unsigned int> *item_data_map_0; // [rsp+68h] [rbp-78h]
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range_4; // [rsp+70h] [rbp-70h]
  const proto::ItemParamBin *item_bin_0; // [rsp+78h] [rbp-68h]
  const proto::WinterCampHomeUsedItemBin *home_used_item_bin; // [rsp+80h] [rbp-60h]
  std::map<unsigned int,unsigned int> *item_data_map; // [rsp+88h] [rbp-58h]
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range_2; // [rsp+90h] [rbp-50h]
  const proto::ItemParamBin *item_bin; // [rsp+98h] [rbp-48h]
  const proto::WinterCampRecvItemBin *recv_item_data_bin; // [rsp+A0h] [rbp-40h]
  const proto::WinterCampRaceBin *race_bin; // [rsp+A8h] [rbp-38h]
  common::milog::MiLogStream v62; // [rsp+B0h] [rbp-30h] BYREF

  if ( proto::ActivityScheduleBin::detail_case(bin) == kWinterCampBin )
  {
    winter_camp_bin = proto::ActivityScheduleBin::winter_camp_bin(bin);
    is_content_closed = proto::WinterCampScheduleBin::is_content_closed(winter_camp_bin);
    v7 = *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000);
    LOBYTE(bin) = v7 != 0;
    v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this - 95) & 7) >= v7);
    if ( (_BYTE)v8 )
      __asan_report_store1(&this->is_content_closed_, bin, v8);
    this->is_content_closed_ = is_content_closed;
    v9 = proto::WinterCampScheduleBin::drop_gen_index(winter_camp_bin);
    v10 = *(_BYTE *)(((unsigned __int64)&this->drop_gen_index_ >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(bin) = v10 != 0;
      __asan_report_store4(&this->drop_gen_index_, bin, v9);
    }
    this->drop_gen_index_ = v9;
    std::map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
    v11 = proto::WinterCampScheduleBin::coin_a(winter_camp_bin);
    v42 = 135;
    v12 = &v42;
    v13 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (std::map<proto::VirtualItem,unsigned int>::key_type *)&v42);
    v14 = v13;
    v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(v13, v12, v13);
    }
    *v14 = v11;
    v16 = proto::WinterCampScheduleBin::coin_b(winter_camp_bin);
    v42 = 136;
    v17 = &v42;
    v18 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (std::map<proto::VirtualItem,unsigned int>::key_type *)&v42);
    v19 = v18;
    v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
    if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
    {
      LOBYTE(v17) = v20 != 0;
      __asan_report_store4(v18, v17, v18);
    }
    *v19 = v16;
    WinterCampExploreData::clear(&this->explore_data_);
    v21 = proto::WinterCampScheduleBin::explore_bin(winter_camp_bin);
    WinterCampExploreData::fromBin(&this->explore_data_, v21);
    WinterCampBattleData::clear(&this->battle_data_);
    v22 = proto::WinterCampScheduleBin::battle_bin(winter_camp_bin);
    WinterCampBattleData::fromBin(&this->battle_data_, v22);
    LOBYTE(v23) = proto::WinterCampScheduleBin::is_race_started(winter_camp_bin);
    v24 = v23;
    v25 = *(_BYTE *)(((unsigned __int64)&this->is_race_started_ >> 3) + 0x7FFF8000);
    if ( v25 < 0 )
    {
      LOBYTE(v22) = v25 != 0;
      __asan_report_store1(&this->is_race_started_, v22, v24);
    }
    this->is_race_started_ = v24;
    std::map<unsigned int,WinterCampRaceData>::clear(&this->race_data_map_);
    __for_range = proto::WinterCampScheduleBin::race_bin_list(winter_camp_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampRaceBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampRaceBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampRaceBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      race_bin = google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampRaceBin const>::operator*(&__for_begin);
      v42 = proto::WinterCampRaceBin::id(race_bin);
      v26 = std::map<unsigned int,WinterCampRaceData>::operator[](
              &this->race_data_map_,
              (std::map<unsigned int,WinterCampRaceData>::key_type *)&v42);
      WinterCampRaceData::fromBin(v26, race_bin);
      google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampRaceBin const>::operator++(&__for_begin);
    }
    std::set<unsigned int>::clear(&this->taken_explore_reward_set_);
    std::set<unsigned int>::clear(&this->taken_battle_reward_set_);
    v27 = proto::WinterCampScheduleBin::taken_explore_reward_id_list(winter_camp_bin);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
      &this->taken_explore_reward_set_,
      v27);
    v28 = proto::WinterCampScheduleBin::taken_battle_reward_id_list(winter_camp_bin);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->taken_battle_reward_set_, v28);
    std::map<unsigned int,WinterCampRecvItemData>::clear(&this->recv_item_data_map_);
    __for_range_0 = proto::WinterCampScheduleBin::recv_item_bin_list(winter_camp_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampRecvItemBin>::begin(__for_range_0).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampRecvItemBin>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampRecvItemBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::WinterCampRecvItemBin> *const)&__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::WinterCampRecvItemBin>::iterator *)&__for_end) )
    {
      recv_item_data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampRecvItemBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::WinterCampRecvItemBin> *const)&__for_begin);
      v42 = proto::WinterCampRecvItemBin::uid(recv_item_data_bin);
      v29 = std::map<unsigned int,WinterCampRecvItemData>::operator[](
              &this->recv_item_data_map_,
              (std::map<unsigned int,WinterCampRecvItemData>::key_type *)&v42);
      WinterCampRecvItemData::fromBin(v29, recv_item_data_bin);
      google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampRecvItemBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::WinterCampRecvItemBin> *const)&__for_begin);
    }
    std::set<unsigned int>::clear(&this->wish_id_set_);
    v30 = proto::WinterCampScheduleBin::wish_item_id_list(winter_camp_bin);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->wish_id_set_, v30);
    std::map<unsigned int,std::map<unsigned int,unsigned int>>::clear(&this->home_used_item_data_map_);
    __for_range_1 = proto::WinterCampScheduleBin::home_used_item_list(winter_camp_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampHomeUsedItemBin>::begin(__for_range_1).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampHomeUsedItemBin>::end(__for_range_1).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampHomeUsedItemBin const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      home_used_item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampHomeUsedItemBin const>::operator*(&__for_begin_0);
      v42 = proto::WinterCampHomeUsedItemBin::module_id(home_used_item_bin);
      item_data_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                        &this->home_used_item_data_map_,
                        (std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)&v42);
      __for_range_2 = proto::WinterCampHomeUsedItemBin::item_bin_list(home_used_item_bin);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range_2).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range_2).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin> *const)&__for_begin,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin>::iterator *)&__for_end) )
      {
        item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin> *const)&__for_begin);
        v31 = proto::ItemParamBin::count(item_bin);
        v42 = proto::ItemParamBin::item_id(item_bin);
        v32 = &v42;
        v33 = std::map<unsigned int,unsigned int>::operator[](
                item_data_map,
                (std::map<unsigned int,unsigned int>::key_type *)&v42);
        v34 = v33;
        v35 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
        if ( v35 != 0 && (char)(((unsigned __int8)v33 & 7) + 3) >= v35 )
        {
          LOBYTE(v32) = v35 != 0;
          __asan_report_store4(v33, v32, v33);
        }
        *v34 = v31;
        google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin> *const)&__for_begin);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampHomeUsedItemBin const>::operator++(&__for_begin_0);
    }
    std::map<unsigned int,std::map<unsigned int,unsigned int>>::clear(&this->used_item_data_map_);
    __for_range_3 = proto::WinterCampScheduleBin::snowman_used_item_list(winter_camp_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampSnowmanUsedItemBin>::begin(__for_range_3).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::WinterCampSnowmanUsedItemBin>::end(__for_range_3).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampSnowmanUsedItemBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::WinterCampSnowmanUsedItemBin> *const)&__for_begin_0,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::WinterCampSnowmanUsedItemBin>::iterator *)&__for_end_0) )
    {
      used_item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampSnowmanUsedItemBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::WinterCampSnowmanUsedItemBin> *const)&__for_begin_0);
      v42 = proto::WinterCampSnowmanUsedItemBin::gadget_id(used_item_bin);
      item_data_map_0 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                          &this->used_item_data_map_,
                          (std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)&v42);
      __for_range_4 = proto::WinterCampSnowmanUsedItemBin::item_bin_list(used_item_bin);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range_4).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range_4).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin> *const)&__for_begin,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin>::iterator *)&__for_end) )
      {
        item_bin_0 = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin> *const)&__for_begin);
        v36 = proto::ItemParamBin::count(item_bin_0);
        v42 = proto::ItemParamBin::item_id(item_bin_0);
        v37 = &v42;
        v38 = std::map<unsigned int,unsigned int>::operator[](
                item_data_map_0,
                (std::map<unsigned int,unsigned int>::key_type *)&v42);
        v39 = v38;
        v40 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
        if ( v40 != 0 && (char)(((unsigned __int8)v38 & 7) + 3) >= v40 )
        {
          LOBYTE(v37) = v40 != 0;
          __asan_report_store4(v38, v37, v38);
        }
        *v39 = v36;
        google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin> *const)&__for_begin);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::WinterCampSnowmanUsedItemBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::WinterCampSnowmanUsedItemBin> *const)&__for_begin_0);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/winter_camp_activity.cpp",
      "fromScheduleBin",
      212);
    v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v62,
           (const char (*)[38])"[WinterCamp] detail_case error. uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    v4 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v3, (const char (*)[15])" detail_case: ");
    v42 = proto::ActivityScheduleBin::detail_case(bin);
    common::milog::MiLogStream::operator<<<proto::ActivityScheduleBin::DetailCase,(proto::ActivityScheduleBin::DetailCase*)0>(
      v4,
      &v42);
    common::milog::MiLogStream::~MiLogStream(&v62);
    return 0;
  }
};

// Line 271: range 00000000161CFB62-00000000161D05CB
int32_t __cdecl WinterCampActivity::toScheduleBin(
        const WinterCampActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::WinterCampExploreBin *v2; // rax
  proto::WinterCampBattleBin *v3; // rax
  proto::WinterCampRaceBin *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  proto::WinterCampRecvItemBin *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_begin_0; // [rsp+18h] [rbp-138h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_end_0; // [rsp+20h] [rbp-130h] BYREF
  std::map<proto::VirtualItem,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::map<proto::VirtualItem,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  proto::WinterCampScheduleBin *winter_camp_bin; // [rsp+38h] [rbp-118h]
  const std::map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+40h] [rbp-110h]
  const std::map<unsigned int,WinterCampRaceData> *__for_range_0; // [rsp+48h] [rbp-108h]
  const std::map<unsigned int,WinterCampRecvItemData> *__for_range_1; // [rsp+50h] [rbp-100h]
  const std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_2; // [rsp+58h] [rbp-F8h]
  const std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_4; // [rsp+60h] [rbp-F0h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v20; // [rsp+68h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *gadget; // [rsp+70h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *item_map_0; // [rsp+78h] [rbp-D8h]
  proto::WinterCampSnowmanUsedItemBin *used_item_bin; // [rsp+80h] [rbp-D0h]
  const std::map<unsigned int,unsigned int> *__for_range_5; // [rsp+88h] [rbp-C8h]
  const std::pair<unsigned int const,unsigned int> *v25; // [rsp+90h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+98h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+A0h] [rbp-B0h]
  proto::ItemParamBin *item_bin_0; // [rsp+A8h] [rbp-A8h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v29; // [rsp+B0h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *module_id; // [rsp+B8h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *item_map; // [rsp+C0h] [rbp-90h]
  proto::WinterCampHomeUsedItemBin *home_used_item_bin; // [rsp+C8h] [rbp-88h]
  const std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+D0h] [rbp-80h]
  const std::pair<unsigned int const,unsigned int> *v34; // [rsp+D8h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+E0h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+E8h] [rbp-68h]
  proto::ItemParamBin *item_bin; // [rsp+F0h] [rbp-60h]
  const std::pair<unsigned int const,WinterCampRecvItemData> *v38; // [rsp+F8h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,WinterCampRecvItemData> >::type *uid; // [rsp+100h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,WinterCampRecvItemData> >::type *recv_item_data; // [rsp+108h] [rbp-48h]
  const std::pair<unsigned int const,WinterCampRaceData> *v41; // [rsp+110h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,WinterCampRaceData> >::type *id; // [rsp+118h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,WinterCampRaceData> >::type *race_data; // [rsp+120h] [rbp-30h]
  const std::pair<const proto::VirtualItem,unsigned int> *v44; // [rsp+128h] [rbp-28h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+130h] [rbp-20h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+138h] [rbp-18h]

  winter_camp_bin = proto::ActivityScheduleBin::mutable_winter_camp_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  proto::WinterCampScheduleBin::set_is_content_closed(winter_camp_bin, this->is_content_closed_);
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_gen_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_gen_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->drop_gen_index_);
  }
  proto::WinterCampScheduleBin::set_drop_gen_index(winter_camp_bin, this->drop_gen_index_);
  __for_range = &this->activity_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v44 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v44);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v44);
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(coin_type);
    }
    if ( *coin_type == ITEM_VIRTUAL_WINTER_CAMP_COIN_A )
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(coin_num);
      }
      proto::WinterCampScheduleBin::set_coin_a(winter_camp_bin, *coin_num);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(coin_type);
      }
      if ( *coin_type == ITEM_VIRTUAL_WINTER_CAMP_COIN_B )
      {
        if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(coin_num);
        }
        proto::WinterCampScheduleBin::set_coin_b(winter_camp_bin, *coin_num);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++(&__for_begin);
  }
  v2 = proto::WinterCampScheduleBin::mutable_explore_bin(winter_camp_bin);
  WinterCampExploreData::toBin(&this->explore_data_, v2);
  v3 = proto::WinterCampScheduleBin::mutable_battle_bin(winter_camp_bin);
  WinterCampBattleData::toBin(&this->battle_data_, v3);
  if ( *(char *)(((unsigned __int64)&this->is_race_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_race_started_);
  proto::WinterCampScheduleBin::set_is_race_started(winter_camp_bin, this->is_race_started_);
  __for_range_0 = &this->race_data_map_;
  __for_begin._M_node = std::map<unsigned int,WinterCampRaceData>::begin(&this->race_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,WinterCampRaceData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRaceData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRaceData> >::_Self *)&__for_end) )
  {
    v41 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRaceData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRaceData> > *const)&__for_begin);
    id = std::get<0ul,unsigned int const,WinterCampRaceData>(v41);
    race_data = (std::tuple_element<1,const std::pair<unsigned int const,WinterCampRaceData> >::type *)std::get<1ul,unsigned int const,WinterCampRaceData>(v41);
    v4 = proto::WinterCampScheduleBin::add_race_bin_list(winter_camp_bin);
    WinterCampRaceData::toBin(race_data, v4);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRaceData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRaceData> > *const)&__for_begin);
  }
  v5 = proto::WinterCampScheduleBin::mutable_taken_explore_reward_id_list(winter_camp_bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->taken_explore_reward_set_, v5);
  v6 = proto::WinterCampScheduleBin::mutable_taken_battle_reward_id_list(winter_camp_bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->taken_battle_reward_set_, v6);
  __for_range_1 = &this->recv_item_data_map_;
  __for_begin._M_node = std::map<unsigned int,WinterCampRecvItemData>::begin(&this->recv_item_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,WinterCampRecvItemData>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRecvItemData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRecvItemData> >::_Self *)&__for_end) )
  {
    v38 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRecvItemData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRecvItemData> > *const)&__for_begin);
    uid = std::get<0ul,unsigned int const,WinterCampRecvItemData>(v38);
    recv_item_data = (std::tuple_element<1,const std::pair<unsigned int const,WinterCampRecvItemData> >::type *)std::get<1ul,unsigned int const,WinterCampRecvItemData>(v38);
    v7 = proto::WinterCampScheduleBin::add_recv_item_bin_list(winter_camp_bin);
    WinterCampRecvItemData::toBin(recv_item_data, v7);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRecvItemData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,WinterCampRecvItemData> > *const)&__for_begin);
  }
  v8 = proto::WinterCampScheduleBin::mutable_wish_item_id_list(winter_camp_bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->wish_id_set_, v8);
  __for_range_2 = &this->home_used_item_data_map_;
  __for_begin_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->home_used_item_data_map_)._M_node;
  __for_end_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_2)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v29 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
    module_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v29);
    item_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v29);
    home_used_item_bin = proto::WinterCampScheduleBin::add_home_used_item_list(winter_camp_bin);
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(module_id);
    }
    proto::WinterCampHomeUsedItemBin::set_module_id(home_used_item_bin, *module_id);
    __for_range_3 = item_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v34 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      item_id = std::get<0ul,unsigned int const,unsigned int>(v34);
      count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v34);
      item_bin = proto::WinterCampHomeUsedItemBin::add_item_bin_list(home_used_item_bin);
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id);
      }
      proto::ItemParamBin::set_item_id(item_bin, *item_id);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count);
      }
      proto::ItemParamBin::set_count(item_bin, *count);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
  }
  __for_range_4 = &this->used_item_data_map_;
  __for_begin_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->used_item_data_map_)._M_node;
  __for_end_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_4)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v20 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
    gadget = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v20);
    item_map_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v20);
    used_item_bin = proto::WinterCampScheduleBin::add_snowman_used_item_list(winter_camp_bin);
    if ( *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gadget & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gadget);
    }
    proto::WinterCampSnowmanUsedItemBin::set_gadget_id(used_item_bin, *gadget);
    __for_range_5 = item_map_0;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_map_0)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_5)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v25 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      item_id_0 = std::get<0ul,unsigned int const,unsigned int>(v25);
      count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v25);
      item_bin_0 = proto::WinterCampSnowmanUsedItemBin::add_item_bin_list(used_item_bin);
      if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id_0);
      }
      proto::ItemParamBin::set_item_id(item_bin_0, *item_id_0);
      if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count_0);
      }
      proto::ItemParamBin::set_count(item_bin_0, *count_0);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
  }
  return 0;
};

// Line 330: range 00000000161D05CC-00000000161D0D83
int32_t __cdecl WinterCampActivity::toClient(WinterCampActivity *const this, proto::ActivityInfo *activity_info)
{
  std::map<unsigned int,unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t v6; // r14d
  proto::WinterCampStageInfo *v7; // rax
  proto::WinterCampStageInfo *v8; // rax
  proto::WinterCampRaceStageInfo *v9; // rax
  google::protobuf::RepeatedField<unsigned int> *v10; // rax
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // rax
  unsigned __int64 v13; // rax
  int v14; // esi
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-184h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_begin_0; // [rsp+20h] [rbp-180h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_end_0; // [rsp+28h] [rbp-178h] BYREF
  std::map<unsigned int,WinterCampRaceData>::iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  std::map<unsigned int,WinterCampRaceData>::iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  proto::WinterCampActivityDetailInfo *winter_camp_info; // [rsp+40h] [rbp-160h]
  std::map<unsigned int,WinterCampRaceData> *__for_range; // [rsp+48h] [rbp-158h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_0; // [rsp+50h] [rbp-150h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+58h] [rbp-148h]
  std::pair<unsigned int const,unsigned int> *v25; // [rsp+60h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+68h] [rbp-138h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+70h] [rbp-130h]
  proto::ItemParam *item_param; // [rsp+78h] [rbp-128h]
  std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v29; // [rsp+80h] [rbp-120h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *gadget_id; // [rsp+88h] [rbp-118h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *item_map; // [rsp+90h] [rbp-110h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+98h] [rbp-108h]
  std::pair<unsigned int const,unsigned int> *v33; // [rsp+A0h] [rbp-100h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+A8h] [rbp-F8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+B0h] [rbp-F0h]
  std::pair<unsigned int const,WinterCampRaceData> *__in; // [rsp+B8h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,WinterCampRaceData> >::type *id; // [rsp+C0h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,WinterCampRaceData> >::type *race_data; // [rsp+C8h] [rbp-D8h]
  common::milog::MiLogStream v39; // [rsp+D0h] [rbp-D0h] BYREF
  char v40[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,unsigned int> *)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 18 item_count_map:348";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)WinterCampActivity::toClient;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/winter_camp_activity.cpp",
      "toClient",
      333);
    v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v39,
           (const char (*)[49])"[WinterCamp] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v6 = -1;
  }
  else
  {
    winter_camp_info = proto::ActivityInfo::mutable_winter_camp_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_content_closed_);
    }
    proto::WinterCampActivityDetailInfo::set_is_content_closed(winter_camp_info, this->is_content_closed_);
    v7 = proto::WinterCampActivityDetailInfo::mutable_explore_info(winter_camp_info);
    WinterCampExploreData::toClient(&this->explore_data_, v7);
    v8 = proto::WinterCampActivityDetailInfo::mutable_battle_info(winter_camp_info);
    WinterCampBattleData::toClient(&this->battle_data_, v8);
    __for_range = &this->race_data_map_;
    __for_begin._M_node = std::map<unsigned int,WinterCampRaceData>::begin(&this->race_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,WinterCampRaceData>::end(&this->race_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData>>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,WinterCampRaceData>(__in);
      race_data = std::get<1ul,unsigned int const,WinterCampRaceData>(__in);
      v9 = proto::WinterCampActivityDetailInfo::add_race_info_list(winter_camp_info);
      WinterCampRaceData::toClient(race_data, v9);
      std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData>>::operator++(&__for_begin);
    }
    v10 = proto::WinterCampActivityDetailInfo::mutable_explore_taken_reward_list(winter_camp_info);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->taken_explore_reward_set_, v10);
    v11 = proto::WinterCampActivityDetailInfo::mutable_battle_taken_reward_list(winter_camp_info);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->taken_battle_reward_set_, v11);
    v12 = proto::WinterCampActivityDetailInfo::mutable_wish_id_list(winter_camp_info);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->wish_id_set_, v12);
    std::map<unsigned int,unsigned int>::map(v2 + 1);
    __for_range_0 = &this->used_item_data_map_;
    __for_begin_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->used_item_data_map_)._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
      gadget_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v29);
      item_map = std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v29);
      __for_range_1 = item_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
      {
        v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
        item_id = std::get<0ul,unsigned int const,unsigned int>(v33);
        count = std::get<1ul,unsigned int const,unsigned int>(v33);
        v13 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](v2 + 1, item_id);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load4(v13);
        v14 = *(_DWORD *)v13;
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          v13 = __asan_report_load4(count);
        }
        *(_DWORD *)v13 = v14 + *count;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
    }
    __for_range_2 = v2 + 1;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(v2 + 1)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      item_id_0 = std::get<0ul,unsigned int const,unsigned int>(v25);
      count_0 = std::get<1ul,unsigned int const,unsigned int>(v25);
      item_param = proto::WinterCampActivityDetailInfo::add_used_item_list(winter_camp_info);
      if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id_0);
      }
      proto::ItemParam::set_item_id(item_param, *item_id_0);
      if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count_0);
      }
      proto::ItemParam::set_count(item_param, *count_0);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    v6 = 0;
    std::map<unsigned int,unsigned int>::~map(v2 + 1);
  }
  result = v6;
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 366: range 00000000161D0D84-00000000161D0DED
int32_t __cdecl WinterCampActivity::init(WinterCampActivity *const this)
{
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    WinterCampActivity::initOfflineOp(this);
    WinterCampActivity::registerObserver(this);
  }
  return 0;
};

// Line 377: range 00000000161D0DEE-00000000161D1087
void __cdecl WinterCampActivity::onStart(WinterCampActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  uint32_t Uid; // ecx
  char *v5; // rsi
  __int64 v6; // rdx
  char v7; // al
  char v8[5376]; // [rsp+10h] [rbp-1500h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_7(5344LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 8 16 uniform_dist:382 80 5000 7 gen:381";
  *(_QWORD *)(v1 + 16) = WinterCampActivity::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862878] = -218103808;
  v3[536862879] = -202116109;
  v3[536862880] = -202116109;
  v3[536862881] = -202116109;
  v3[536862882] = -202116109;
  v3[536862883] = -202116109;
  v3[536862884] = -202116109;
  v3[536862885] = -202116109;
  v3[536862886] = -202116109;
  WinterCampActivity::initOfflineOp(this);
  WinterCampActivity::registerObserver(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::mersenne_twister_engine(
    (std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)(v1 + 80),
    Uid + this->schedule_id_);
  std::uniform_int_distribution<unsigned int>::uniform_int_distribution((std::uniform_int_distribution<unsigned int> *const)(v1 + 48));
  v5 = (char *)(v1 + 80);
  v6 = std::uniform_int_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
         (std::uniform_int_distribution<unsigned int> *const)(v1 + 48),
         (std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *)(v1 + 80));
  v7 = *(_BYTE *)(((unsigned __int64)&this->drop_gen_index_ >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->drop_gen_index_, v5, v6);
  }
  this->drop_gen_index_ = v6;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8278) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8280) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8288) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8290) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8298) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_7(v1, 5344LL, v8);
  }
};

// Line 387: range 00000000161D1088-00000000161D10A2
void __cdecl WinterCampActivity::onSettle(WinterCampActivity *const this)
{
  WinterCampActivity::unregisterObserver(this);
};

// Line 392: range 00000000161D10A4-00000000161D1184
void __cdecl WinterCampActivity::onLogin(WinterCampActivity *const this)
{
  unsigned __int64 v1; // rax
  char v2; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    goto LABEL_8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(WinterCampActivity *const))v1)(this) )
LABEL_8:
    v2 = 1;
  else
    v2 = 0;
  if ( !v2 )
  {
    BaseActivity::onLogin((BaseActivity *const)this);
    WinterCampActivity::tryStartNextExplore(this, 0);
    WinterCampActivity::tryStartNextBattle(this, 0);
    WinterCampActivity::tryStartNextRace(this);
  }
};

// Line 404: range 00000000161D1186-00000000161D1595
void __cdecl WinterCampActivity::onClear(WinterCampActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v4; // rax
  uint32_t v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rdx
  std::map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::pair<const proto::VirtualItem,unsigned int> *v12; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:405";
  *(_QWORD *)(v1 + 16) = WinterCampActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
  __for_range = &this->activity_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v12);
    v4 = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v12);
    coin_num = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( *coin_num )
    {
      v5 = *coin_num;
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        v5 = (unsigned int)coin_type;
        __asan_report_load4(coin_type);
      }
      if ( WinterCampActivity::subActivityCoin(this, *coin_type, v5, (const SubItemReason *)(v1 + 32), 0) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/winter_camp_activity.cpp",
          "onClear",
          412);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v15,
          (const char (*)[36])"[WinterCamp] subActivityCoin failed");
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
    std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++(&__for_begin);
  }
  v6 = ((_BYTE)this - 95) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_content_closed_, v6, v7);
  this->is_content_closed_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_race_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_race_started_, v6, &this->is_race_started_);
  this->is_race_started_ = 0;
  std::map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  WinterCampExploreData::clear(&this->explore_data_);
  WinterCampBattleData::clear(&this->battle_data_);
  std::map<unsigned int,WinterCampRaceData>::clear(&this->race_data_map_);
  std::set<unsigned int>::clear(&this->taken_explore_reward_set_);
  std::set<unsigned int>::clear(&this->taken_battle_reward_set_);
  std::map<unsigned int,WinterCampRecvItemData>::clear(&this->recv_item_data_map_);
  std::set<unsigned int>::clear(&this->wish_id_set_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::clear(&this->home_used_item_data_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::clear(&this->used_item_data_map_);
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 431: range 00000000161D1596-00000000161D15DE
void __cdecl WinterCampActivity::onDailyRefresh(WinterCampActivity *const this)
{
  WinterCampActivity::tryStartNextExplore(this, 0);
  WinterCampActivity::tryStartNextBattle(this, 0);
  WinterCampActivity::tryStartNextRace(this);
  WinterCampActivity::sendStageInfoNotify(this);
};

// Line 439: range 00000000161D15E0-00000000161D1865
int32_t __cdecl WinterCampActivity::execAction(
        WinterCampActivity *const this,
        const data::NewActivityExec *action_exec)
{
  data::NewActivityActionType type; // eax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_CLOSE_WINTER_CAMP_CONTENT )
  {
    v5 = ((_BYTE)this - 95) & 7;
    v6 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store1(&this->is_content_closed_, v5, v6);
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
  else
  {
    if ( type > NEW_ACTIVITY_ACTION_CLOSE_WINTER_CAMP_CONTENT )
      return BaseActivity::execAction((BaseActivity *const)this, action_exec);
    switch ( type )
    {
      case NEW_ACTIVITY_ACTION_OPEN_WINTER_CAMP_RACE:
        if ( *(char *)(((unsigned __int64)&this->is_race_started_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_race_started_, action_exec, &this->is_race_started_);
        this->is_race_started_ = 1;
        WinterCampActivity::tryStartNextRace(this);
        break;
      case NEW_ACTIVITY_ACTION_OPEN_WINTER_CAMP_EXPLORE:
        if ( *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->explore_data_);
        }
        if ( !this->explore_data_.id )
        {
          if ( *(char *)(((unsigned __int64)&this->explore_data_.is_finished >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->explore_data_.is_finished, action_exec, &this->explore_data_.is_finished);
          this->explore_data_.is_finished = 1;
          WinterCampActivity::tryStartNextExplore(this, 1);
        }
        break;
      case NEW_ACTIVITY_ACTION_OPEN_WINTER_CAMP_BATTLE:
        if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->battle_data_);
        }
        if ( !this->battle_data_.id )
        {
          v3 = ((_BYTE)this + 84) & 7;
          v4 = (*(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000));
          if ( (_BYTE)v4 )
            __asan_report_store1(&this->battle_data_.is_finished, v3, v4);
          this->battle_data_.is_finished = 1;
          WinterCampActivity::tryStartNextBattle(this, 1);
        }
        break;
      default:
        return BaseActivity::execAction((BaseActivity *const)this, action_exec);
    }
  }
  return 0;
};

// Line 479: range 00000000161D1866-00000000161D1B86
void __cdecl WinterCampActivity::registerObserver(WinterCampActivity *const this)
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:480 64 16 12 this_wtr:481";
  *(_QWORD *)(v1 + 16) = WinterCampActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<WinterCampActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<WinterCampActivity>::weak_ptr<WinterCampActivity,void>(
    (std::weak_ptr<WinterCampActivity> *const)(v1 + 64),
    (const std::shared_ptr<WinterCampActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<WinterCampActivity>::weak_ptr(
    (std::weak_ptr<WinterCampActivity> *const)&v6,
    (const std::weak_ptr<WinterCampActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<WinterCampActivity,ChallengeFinishEvent>(
    EventComp,
    (std::weak_ptr<WinterCampActivity> *)&v6,
    (void (*)(WinterCampActivity *, const ChallengeFinishEvent *))WinterCampActivity::onChallengeFinishEvent,
    0LL);
  std::weak_ptr<WinterCampActivity>::~weak_ptr((std::weak_ptr<WinterCampActivity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<WinterCampActivity>::weak_ptr(
    (std::weak_ptr<WinterCampActivity> *const)&v6,
    (const std::weak_ptr<WinterCampActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<WinterCampActivity,GalleryTriathlonScoreEvent>(
    cb_ptr,
    (std::weak_ptr<WinterCampActivity> *)&v6,
    (void (*)(WinterCampActivity *, const GalleryTriathlonScoreEvent *))WinterCampActivity::onGalleryFinishEvent,
    0LL);
  std::weak_ptr<WinterCampActivity>::~weak_ptr((std::weak_ptr<WinterCampActivity> *const)&v6);
  std::weak_ptr<WinterCampActivity>::~weak_ptr((std::weak_ptr<WinterCampActivity> *const)(v1 + 64));
  std::shared_ptr<WinterCampActivity>::~shared_ptr((std::shared_ptr<WinterCampActivity> *const)(v1 + 32));
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

// Line 487: range 00000000161D1B88-00000000161D1C79
void __cdecl WinterCampActivity::unregisterObserver(WinterCampActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *event_type; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    event_type = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 496: range 00000000161D1C7A-00000000161D3209
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall WinterCampActivity::onSnowDriftInteract(
        WinterCampActivity *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // r14d
  const ActivityWinterCampExcelConfigMgr *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::vector<data::WinterCampDropGroup>::size_type v29; // rcx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::vector<data::WinterCampDropGroup> *p_drop_groups; // rcx
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v35; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v37; // rax
  std::vector<unsigned int>::reference v38; // rax
  _DWORD *v39; // rdx
  int v40; // r14d
  char *v41; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v42; // rax
  _DWORD *v43; // rdx
  char v44; // cl
  uint32_t v45; // esi
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rcx
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v55; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampExploreProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampExploreProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampExploreProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  Player *v60; // r14
  __int64 result; // rax
  std::string v62; // [rsp+0h] [rbp-3C0h] OVERLAPPED BYREF
  uint32_t cur_progress; // [rsp+20h] [rbp-3A0h]
  int32_t is_create_monster; // [rsp+24h] [rbp-39Ch]
  std::vector<ItemParam>::iterator __for_begin_0; // [rsp+28h] [rbp-398h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+30h] [rbp-390h] BYREF
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+38h] [rbp-388h]
  const data::WinterCampExploreExcelConfig *explore_config_ptr; // [rsp+40h] [rbp-380h]
  const data::WinterCampDropGroup *drop_group; // [rsp+48h] [rbp-378h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-370h]
  std::vector<ItemParam> *__for_range_0; // [rsp+58h] [rbp-368h]
  const ItemParam *item_param; // [rsp+60h] [rbp-360h]
  const std::pair<unsigned int const,unsigned int> *v73; // [rsp+68h] [rbp-358h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+70h] [rbp-350h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *drop_id; // [rsp+78h] [rbp-348h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+80h] [rbp-340h] BYREF
  std::shared_ptr<google::protobuf::Message> v77; // [rsp+90h] [rbp-330h] BYREF
  common::milog::MiLogStream v78; // [rsp+A0h] [rbp-320h] BYREF
  std::set<unsigned int> exceeded_item_type_set; // [rsp+C0h] [rbp-300h] BYREF
  char v80[720]; // [rsp+F0h] [rbp-2D0h] BYREF

  v62._M_string_length = (std::string::size_type)this;
  v62._M_dataplus._M_p = (std::string::pointer)__PAIR64__(group_id, config_id);
  v3 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 1 10 holder:598 64 4 13 total_num:522 80 4 11 drop_id:554 96 4 12 group_id:495 112 4 13 co"
                        "nfig_id:495 128 8 17 output_result:567 160 16 11 log_ptr:599 192 24 15 drop_id_vec:549 256 24 17"
                        " action_reason:564 320 24 17 drop_item_vec:566 384 24 23 add_item_result_vec:574 448 24 26 disca"
                        "rd_item_param_vec:576 512 48 15 drop_id_set:542 592 48 21 exceeded_item_set:579";
  *(_QWORD *)(v3 + 16) = WinterCampActivity::onSnowDriftInteract;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862740] = -202116109;
  *(_DWORD *)(v3 + 96) = HIDWORD(v62._M_dataplus._M_p);
  *(_DWORD *)(v3 + 112) = v62._M_dataplus._M_p;
  common::milog::MiLogStream::create(
    &v78,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/winter_camp_activity.cpp",
    "onSnowDriftInteract",
    497);
  v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v78,
         (const char (*)[32])"onSnowDriftInteract. group_id: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 96));
  v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" config_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 112));
  common::milog::MiLogStream::~MiLogStream(&v78);
  if ( *(_BYTE *)((v62._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v62._M_string_length);
  v9 = *(_QWORD *)v62._M_string_length + 136LL;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(*(_QWORD *)v62._M_string_length + 136LL);
  if ( (*(unsigned __int8 (__fastcall **)(std::string::size_type))v9)(v62._M_string_length) )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onSnowDriftInteract",
      500);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v78,
      (const char (*)[29])"[WinterCamp] content closed.");
    common::milog::MiLogStream::~MiLogStream(&v78);
    v10 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v77);
    activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v77);
    v11 = activity_winter_camp_config_mgr;
    if ( *(_BYTE *)(((v62._M_string_length + 1040) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v62._M_string_length + 1040) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v62._M_string_length + 1040);
    }
    explore_config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampExploreExcelConfig(
                           v11,
                           *(_DWORD *)(v62._M_string_length + 1040));
    if ( explore_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&explore_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)explore_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&explore_config_ptr->group_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&explore_config_ptr->group_id);
      }
      if ( explore_config_ptr->group_id == *(_DWORD *)(v3 + 96) )
      {
        if ( common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
               (std::map<unsigned int,unsigned int> *)(v62._M_string_length + 1056),
               (const unsigned int *)(v3 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v78,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/winter_camp_activity.cpp",
            "onSnowDriftInteract",
            518);
          v20 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v78,
                  (const char (*)[56])"[WinterCamp] config_id already droped. cur explore id: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v62._M_string_length + 1040));
          v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" group_id: ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 96));
          v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])" config_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream(&v78);
          v10 = -1;
        }
        else
        {
          *(_DWORD *)(v3 + 64) = ActivityWinterCampExcelConfigMgr::getGroupGadgetNum(
                                   activity_winter_camp_config_mgr,
                                   *(_DWORD *)(v3 + 96));
          if ( std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v62._M_string_length + 1056)) < *(unsigned int *)(v3 + 64) )
          {
            if ( std::vector<data::WinterCampDropGroup>::size(&explore_config_ptr->drop_groups) )
            {
              v29 = std::vector<data::WinterCampDropGroup>::size(&explore_config_ptr->drop_groups);
              if ( *(_BYTE *)(((v62._M_string_length + 1044) >> 3) + 0x7FFF8000) != 0
                && (char)(((LOBYTE(v62._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v62._M_string_length + 1044) >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(v62._M_string_length + 1044);
              }
              if ( v29 > *(unsigned int *)(v62._M_string_length + 1044) )
              {
                p_drop_groups = &explore_config_ptr->drop_groups;
                if ( *(_BYTE *)(((v62._M_string_length + 1044) >> 3) + 0x7FFF8000) != 0
                  && (char)(((LOBYTE(v62._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v62._M_string_length + 1044) >> 3)
                                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(v62._M_string_length + 1044);
                }
                drop_group = std::vector<data::WinterCampDropGroup>::operator[](
                               p_drop_groups,
                               *(unsigned int *)(v62._M_string_length + 1044));
                M_current = std::vector<unsigned int>::end(&drop_group->drop_id)._M_current;
                v35._M_current = std::vector<unsigned int>::begin(&drop_group->drop_id)._M_current;
                std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
                  (std::set<unsigned int> *const)(v3 + 512),
                  v35,
                  (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
                __for_range = (std::map<unsigned int,unsigned int> *)(v62._M_string_length + 1056);
                __for_end._M_current = (ItemParam *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v62._M_string_length + 1056))._M_node;
                *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v62._M_string_length + 1056));
                while ( std::operator!=(
                          (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end,
                          (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128)) )
                {
                  v73 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
                  _ = std::get<0ul,unsigned int const,unsigned int>(v73);
                  drop_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v73);
                  std::set<unsigned int>::erase((std::set<unsigned int> *const)(v3 + 512), drop_id);
                  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
                }
                std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 48));
                M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 512))._M_node;
                v37._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 512))._M_node;
                std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
                  (std::vector<unsigned int> *const)(v3 + 192),
                  v37,
                  (std::_Rb_tree_const_iterator<unsigned int>)M_node,
                  (const std::vector<unsigned int>::allocator_type *)(v3 + 48));
                std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 48));
                LODWORD(M_node) = *(_DWORD *)(v3 + 64);
                *((_DWORD *)&v62._anon_0._M_allocated_capacity + 2) = (_DWORD)M_node
                                                                    - std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v62._M_string_length + 1056));
                *((_DWORD *)&v62._anon_0._M_allocated_capacity + 3) = common::tools::RandomUtils::rand<unsigned int>(
                                                                        0,
                                                                        *((_DWORD *)&v62._anon_0._M_allocated_capacity
                                                                        + 2)
                                                                      - 1);
                *(_DWORD *)(v3 + 80) = 0;
                if ( *((unsigned int *)&v62._anon_0._M_allocated_capacity + 3) < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 192)) )
                {
                  v38 = std::vector<unsigned int>::operator[](
                          (std::vector<unsigned int> *const)(v3 + 192),
                          *((unsigned int *)&v62._anon_0._M_allocated_capacity + 3));
                  v39 = v38;
                  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v38);
                  }
                  *(_DWORD *)(v3 + 80) = *v39;
                }
                v40 = *(_DWORD *)(v3 + 80);
                v41 = (char *)(v3 + 112);
                v42 = std::map<unsigned int,unsigned int>::operator[](
                        (std::map<unsigned int,unsigned int> *const)(v62._M_string_length + 1056),
                        (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 112));
                v43 = v42;
                v44 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
                if ( v44 != 0 && (char)(((unsigned __int8)v42 & 7) + 3) >= v44 )
                {
                  LOBYTE(v41) = v44 != 0;
                  __asan_report_store4(v42, v41, v42);
                }
                *v43 = v40;
                if ( *(_DWORD *)(v3 + 80) )
                {
                  ActionReason::ActionReason(
                    (ActionReason *const)(v3 + 256),
                    ACTION_REASON_SNOW_DRIFTS,
                    ITEM_LIMIT_WINTER_CAMP_DROP);
                  *(_DWORD *)(v3 + 272) = 3;
                  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 320));
                  v45 = *(_DWORD *)(v3 + 80);
                  if ( *(_BYTE *)(((v62._M_string_length + 24) >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v62._M_string_length + 24);
                  *(OutputResult *)(v3 + 128) = DropUtils::dropItems(
                                                  *(Player **)(v62._M_string_length + 24),
                                                  v45,
                                                  1u,
                                                  (const ActionReason *)(v3 + 256),
                                                  (std::vector<ItemParam> *)(v3 + 320));
                  if ( *(_DWORD *)(v3 + 128) )
                  {
                    LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 128));
                    common::milog::MiLogStream::create(
                      &v78,
                      &common::milog::MiLogDefault::default_log_obj_,
                      LogLevel,
                      "./src/player/activity/winter_camp_activity.cpp",
                      "onSnowDriftInteract",
                      570);
                    v47 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            &v78,
                            (const char (*)[27])"dropItems failed, drop_id:");
                    v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v47,
                            (const unsigned int *)(v3 + 80));
                    v49 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v48,
                            (const char (*)[13])" drop_count:");
                    HIDWORD(v62._anon_0._M_allocated_capacity) = 1;
                    v50 = common::milog::MiLogStream::operator<<<int,(int *)0>(
                            v49,
                            (const int *)&v62._anon_0._M_allocated_capacity + 1);
                    v51 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v50,
                            (const char (*)[11])" retcode: ");
                    v52 = common::milog::MiLogStream::operator<<<int,(int *)0>(v51, (const int *)(v3 + 128));
                    v53 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v52,
                            (const char (*)[9])" player:");
                    if ( *(_BYTE *)(((v62._M_string_length + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8(v62._M_string_length + 24);
                    operator<<(v53, *(const Player **)(v62._M_string_length + 24));
                    common::milog::MiLogStream::~MiLogStream(&v78);
                  }
                  else
                  {
                    std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v3 + 384));
                    if ( *(_BYTE *)(((v62._M_string_length + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8(v62._M_string_length + 24);
                    ItemComp = Player::getItemComp(*(Player *const *)(v62._M_string_length + 24));
                    PlayerItemComp::addItemBatchWithStackLimit(
                      ItemComp,
                      (std::vector<ItemParam> *)(v3 + 320),
                      (const ActionReason *)(v3 + 256),
                      (std::vector<AddItemResult> *)(v3 + 384));
                    ItemUtils::calcDiscardItem(
                      (std::vector<ItemParam> *)(v3 + 448),
                      (const std::vector<ItemParam> *)(v3 + 320),
                      (const std::vector<AddItemResult> *)(v3 + 384));
                    if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 448)) )
                    {
                      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 592));
                      __for_range_0 = (std::vector<ItemParam> *)(v3 + 448);
                      __for_begin_0._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 448))._M_current;
                      __for_end._M_current = std::vector<ItemParam>::end(__for_range_0)._M_current;
                      while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin_0, &__for_end) )
                      {
                        item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin_0);
                        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 592), &item_param->item_id);
                        __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin_0);
                      }
                      if ( *(_BYTE *)(((v62._M_string_length + 24) >> 3) + 0x7FFF8000) )
                        __asan_report_load8(v62._M_string_length + 24);
                      v55 = Player::getItemComp(*(Player *const *)(v62._M_string_length + 24));
                      memset(&exceeded_item_type_set, 0, sizeof(exceeded_item_type_set));
                      std::set<unsigned int>::set(&exceeded_item_type_set);
                      PlayerItemComp::tryNotifyCheckAddItemExceedLimitNotify(
                        v55,
                        (const ActionReason *)(v3 + 256),
                        0,
                        (const std::set<unsigned int> *)(v3 + 592),
                        &exceeded_item_type_set);
                      std::set<unsigned int>::~set(&exceeded_item_type_set);
                      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 592));
                    }
                    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 448));
                    std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v3 + 384));
                  }
                  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 320));
                }
                cur_progress = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v62._M_string_length + 1056));
                WinterCampActivity::sendStageInfoNotify((WinterCampActivity *const)v62._M_string_length);
                if ( cur_progress >= *(_DWORD *)(v3 + 64) )
                {
                  if ( *(_BYTE *)(((v62._M_string_length + 1040) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v62._M_string_length + 1040) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(v62._M_string_length + 1040);
                  }
                  WinterCampActivity::finishExplore(
                    (WinterCampActivity *const)v62._M_string_length,
                    *(_DWORD *)(v62._M_string_length + 1040));
                }
                if ( *(_BYTE *)(((v62._M_string_length + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v62._M_string_length + 24);
                BasicComp = Player::getBasicComp(*(Player *const *)(v62._M_string_length + 24));
                PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v78, BasicComp);
                StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDDEu, v62);
                std::string::~string(&v78);
                common::tools::perf::make_shared<proto_log::PlayerLogBodyWinterCampExploreProgress>();
                v57 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampExploreProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampExploreProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                proto_log::PlayerLogBodyWinterCampExploreProgress::set_group_id(v57, *(_DWORD *)(v3 + 96));
                v58 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampExploreProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampExploreProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                proto_log::PlayerLogBodyWinterCampExploreProgress::set_cur_progress(v58, cur_progress);
                v59 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampExploreProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampExploreProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                proto_log::PlayerLogBodyWinterCampExploreProgress::set_total_progress(v59, *(_DWORD *)(v3 + 64));
                if ( *(_BYTE *)(((v62._M_string_length + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v62._M_string_length + 24);
                v60 = *(Player **)(v62._M_string_length + 24);
                std::shared_ptr<google::protobuf::Message>::shared_ptr(&v77, 0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWinterCampExploreProgress,void>(
                  &p_body_ptr,
                  (const std::shared_ptr<proto_log::PlayerLogBodyWinterCampExploreProgress> *)(v3 + 160));
                Player::printStatLog(v60, &p_body_ptr, &v77, 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v77);
                std::shared_ptr<proto_log::PlayerLogBodyWinterCampExploreProgress>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWinterCampExploreProgress> *const)(v3 + 160));
                StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
                is_create_monster = *(_DWORD *)(v3 + 80) == 0;
                v10 = is_create_monster;
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 512));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/winter_camp_activity.cpp",
                  "onSnowDriftInteract",
                  536);
                v30 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                        &v78,
                        (const char (*)[76])"[WinterCamp]drop_index size large than drop_groups size. drop_group_index: ");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v62._M_string_length + 1044));
                v32 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v31,
                        (const char (*)[15])" config size: ");
                *(_QWORD *)(v3 + 128) = std::vector<data::WinterCampDropGroup>::size(&explore_config_ptr->drop_groups);
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v32,
                  (const unsigned __int64 *)(v3 + 128));
                common::milog::MiLogStream::~MiLogStream(&v78);
                v10 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/winter_camp_activity.cpp",
                "onSnowDriftInteract",
                530);
              v28 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v78,
                      (const char (*)[49])"[WinterCamp] drop_groups size is 0. explore id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v62._M_string_length + 1040));
              common::milog::MiLogStream::~MiLogStream(&v78);
              v10 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/winter_camp_activity.cpp",
              "onSnowDriftInteract",
              525);
            v25 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                    &v78,
                    (const char (*)[68])"[WinterCamp] drop_record_map size large than gadget num. cur size: ");
            *(_QWORD *)(v3 + 128) = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v62._M_string_length + 1056));
            v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v25,
                    (const unsigned __int64 *)(v3 + 128));
            v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v26,
                    (const char (*)[13])" total_num: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v78);
            v10 = -1;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/winter_camp_activity.cpp",
          "onSnowDriftInteract",
          512);
        v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v78,
                (const char (*)[50])"[WinterCamp] group_id not match. cur explore id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v62._M_string_length + 1040));
        v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v14,
                (const char (*)[19])" config group_id: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &explore_config_ptr->group_id);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" group_id: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 96));
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" config_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v78);
        v10 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/winter_camp_activity.cpp",
        "onSnowDriftInteract",
        507);
      v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v78,
              (const char (*)[57])"[WinterCamp] findWinterCampExploreExcelConfig fail. id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v12,
        (const unsigned int *)(v62._M_string_length + 1040));
      common::milog::MiLogStream::~MiLogStream(&v78);
      v10 = -1;
    }
  }
  result = v10;
  if ( v80 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 610: range 00000000161D320A-00000000161D345E
__int64 __fastcall WinterCampActivity::onGMFinishRace(WinterCampActivity *const this, uint32_t id, uint32_t score)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> >::pointer v9; // rax
  uint32_t *p_max_score; // rax
  __int64 v11; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  WinterCampRaceData *race_data; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 id:609 64 8 8 iter:611";
  *(_QWORD *)(v3 + 16) = WinterCampActivity::onGMFinishRace;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = id;
  *(std::map<unsigned int,WinterCampRaceData>::iterator *)(v3 + 64) = std::map<unsigned int,WinterCampRaceData>::find(
                                                                        &this->race_data_map_,
                                                                        (const std::map<unsigned int,WinterCampRaceData>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,WinterCampRaceData>::end(&this->race_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onGMFinishRace",
      614);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v15,
           (const char (*)[44])"[WinterCamp] find race_data_map_ data fail.");
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> > *const)(v3 + 64));
    race_data = &v9->second;
    p_max_score = &v9->second.max_score;
    v11 = (*(_BYTE *)(((unsigned __int64)p_max_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)p_max_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_score >> 3) + 0x7FFF8000));
    if ( (_BYTE)v11 )
      __asan_report_store4(p_max_score, ((unsigned __int8)p_max_score & 7u) + 3, v11);
    race_data->max_score = score;
    result = 0LL;
  }
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

// Line 623: range 00000000161D3460-00000000161D35B9
int32_t __cdecl WinterCampActivity::onGMClear(WinterCampActivity *const this)
{
  PlayerGroupLinkComp *GroupLinkComp; // rdi
  uint32_t schedule_id; // edx

  BaseActivity::clear((BaseActivity *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GroupLinkComp = Player::getGroupLinkComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    GroupLinkComp = (PlayerGroupLinkComp *)&this->schedule_id_;
    __asan_report_load4(&this->schedule_id_);
  }
  schedule_id = this->schedule_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    GroupLinkComp = (PlayerGroupLinkComp *)&this->activity_id_;
    __asan_report_load4(&this->activity_id_);
  }
  PlayerGroupLinkComp::unregisterGroupBundleByActivity(GroupLinkComp, this->activity_id_, schedule_id, 1);
  WinterCampActivity::tryStartNextExplore(this, 0);
  WinterCampActivity::tryStartNextBattle(this, 0);
  if ( *(char *)(((unsigned __int64)&this->is_race_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_race_started_, 0LL, &this->is_race_started_);
  this->is_race_started_ = 1;
  WinterCampActivity::tryStartNextRace(this);
  WinterCampActivity::sendStageInfoNotify(this);
  return 0;
};

// Line 635: range 00000000161D35BA-00000000161D3624
uint32_t __cdecl WinterCampActivity::getExploreGroupLinkBundleId(WinterCampActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->explore_data_.is_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->explore_data_.is_finished);
  if ( this->explore_data_.is_finished )
    return 0;
  else
    return WinterCampExploreData::getGroupBundleId(&this->explore_data_);
};

// Line 644: range 00000000161D3626-00000000161D3695
uint32_t __cdecl WinterCampActivity::getBattleGroupLinkBundleId(WinterCampActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->battle_data_.is_finished);
  }
  if ( this->battle_data_.is_finished )
    return 0;
  else
    return WinterCampBattleData::getGroupBundleId(&this->battle_data_);
};

// Line 653: range 00000000161D3696-00000000161D3A2A
__int64 __fastcall WinterCampActivity::checkAddActivityCoin(
        const WinterCampActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-C0h] BYREF
  char v18[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:659 64 4 13 coin_type:652 80 4 11 add_num:652 96 8 8 iter:660";
  *(_QWORD *)(v3 + 16) = WinterCampActivity::checkAddActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = add_num;
  if ( !WinterCampActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/winter_camp_activity.cpp",
      "checkAddActivityCoin",
      656);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v17,
           (const char (*)[46])"[WinterCamp] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = 0;
    *(std::map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::map<proto::VirtualItem,unsigned int>::find(
                                                                                &this->activity_coin_map_,
                                                                                (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
    __y._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)(v3 + 96),
           &__y) )
    {
      v8 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v3 + 96));
      p_second = &v8->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      *(_DWORD *)(v3 + 48) = v8->second;
    }
    if ( (!*(_DWORD *)(v3 + 80)
       || !*(_DWORD *)(v3 + 48)
       || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) >= *(_DWORD *)(v3 + 80))
      && (*(_DWORD *)(v3 + 80)
       || *(_DWORD *)(v3 + 48)
       || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) <= *(_DWORD *)(v3 + 80)) )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/winter_camp_activity.cpp",
        "checkAddActivityCoin",
        667);
      v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v17,
              (const char (*)[40])"[WinterCamp] coin over flow, coin_type:");
      v11 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
              v10,
              (const proto::VirtualItem *)(v3 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", cur num: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" ,add num: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v17);
      if ( *(_DWORD *)(v3 + 64) == 135 )
        result = 10073LL;
      else
        result = 10074LL;
    }
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 681: range 00000000161D3A2C-00000000161D3E14
__int64 __fastcall WinterCampActivity::checkSubActivityCoin(
        const WinterCampActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t sub_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:693 64 4 13 coin_type:680 80 4 11 sub_num:680 96 8 8 iter:687";
  *(_QWORD *)(v3 + 16) = WinterCampActivity::checkSubActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = sub_num;
  if ( !WinterCampActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/winter_camp_activity.cpp",
      "checkSubActivityCoin",
      684);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v18,
           (const char (*)[46])"[WinterCamp] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::map<proto::VirtualItem,unsigned int>::find(
                                                                                &this->activity_coin_map_,
                                                                                (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
    __y._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)(v3 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/winter_camp_activity.cpp",
        "checkSubActivityCoin",
        690);
      v8 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v18,
             (const char (*)[64])"[WinterCamp] coin_type is not in activity_coin_map_. coin_type:");
      common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
        v8,
        (const proto::VirtualItem *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 10071LL;
    }
    else
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v3 + 96));
      p_second = &v9->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      *(_DWORD *)(v3 + 48) = v9->second;
      if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 80) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/winter_camp_activity.cpp",
          "checkSubActivityCoin",
          696);
        v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v18,
                (const char (*)[41])"[WinterCamp] coin not enough, coin_type:");
        v12 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
                v11,
                (const proto::VirtualItem *)(v3 + 64));
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cur num: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])off_25B928A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v18);
        if ( *(_DWORD *)(v3 + 64) == 135 )
          result = 10071LL;
        else
          result = 10072LL;
      }
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 710: range 00000000161D3E16-00000000161D4265
__int64 __fastcall WinterCampActivity::addActivityCoin(
        WinterCampActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num,
        const ActionReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  SelectType v12; // r14d
  char *v13; // rsi
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v14; // rax
  SelectType *v15; // rdx
  char v16; // cl
  PlayerItemComp *ItemComp; // r14
  data::ItemLimitType v18; // r15d
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v19; // rax
  unsigned int *v20; // rdx
  __int64 result; // rax
  std::string v22; // [rsp+0h] [rbp-F0h]
  uint32_t reason_type; // [rsp+10h] [rbp-E0h]
  int32_t ret; // [rsp+38h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+3Ch] [rbp-B4h]
  std::string v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)reason;
  v22._anon_0._M_local_buf[4] = is_notify;
  v5 = (unsigned __int64)v28;
  v22._M_string_length = (std::string::size_type)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:717 64 4 13 coin_type:709";
  *(_QWORD *)(v5 + 16) = WinterCampActivity::addActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = WinterCampActivity::checkAddActivityCoin(this, (proto::VirtualItem)*(_DWORD *)(v5 + 64), add_num);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v27, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, v22);
    std::string::~string(&v27);
    v10 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    old_coin_num = *v11;
    v12 = SAFE_ADD<unsigned int,unsigned int>(*v11, add_num);
    v13 = (char *)(v5 + 64);
    v14 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(v14, v13, v14);
    }
    *v15 = v12;
    if ( v22._anon_0._M_local_buf[4] )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((*(&v22._anon_0._M_allocated_capacity + 1) + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v22._anon_0._M_local_buf[8] + 4) & 7) + 3) >= *(_BYTE *)(((*(&v22._anon_0._M_allocated_capacity + 1)
                                                                           + 4) >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(*(&v22._anon_0._M_allocated_capacity + 1) + 4);
    }
    v18 = *(_DWORD *)(*(&v22._anon_0._M_allocated_capacity + 1) + 4);
    if ( *(_BYTE *)((*(&v22._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((v22._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v22._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(*(&v22._anon_0._M_allocated_capacity + 1));
    }
    reason_type = **((_DWORD **)&v22._anon_0._M_allocated_capacity + 1);
    v19 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v20 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v20,
      reason_type,
      v18,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v22._M_string_length == v5 )
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
  return result;
};

// Line 730: range 00000000161D4266-00000000161D4653
__int64 __fastcall WinterCampActivity::subActivityCoin(
        WinterCampActivity *const this,
        __int32 coin_type,
        __int32 sub_num,
        const SubItemReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rax
  uint32_t *v11; // rdx
  unsigned __int64 v12; // rax
  PlayerItemComp *ItemComp; // r14
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  __int64 result; // rax
  std::string reason_type; // [rsp+0h] [rbp-E0h]
  uint32_t reason_typea; // [rsp+0h] [rbp-E0h]
  bool is_notifya; // [rsp+4h] [rbp-DCh]
  const SubItemReason *reasona; // [rsp+8h] [rbp-D8h]
  uint32_t sub_numa; // [rsp+10h] [rbp-D0h]
  WinterCampActivity *thisa; // [rsp+18h] [rbp-C8h]
  int32_t ret; // [rsp+28h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+2Ch] [rbp-B4h]
  std::string v25; // [rsp+30h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&reason_type._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(reason_type._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)reason_type._anon_0._M_local_buf = sub_num;
  reason_type._M_string_length = (std::string::size_type)reason;
  BYTE4(reason_type._M_dataplus._M_p) = is_notify;
  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:737 64 4 13 coin_type:729";
  *(_QWORD *)(v5 + 16) = WinterCampActivity::subActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = WinterCampActivity::checkSubActivityCoin(
          this,
          (proto::VirtualItem)*(_DWORD *)(v5 + 64),
          reason_type._anon_0._M_allocated_capacity);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v25, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, reason_type);
    std::string::~string(&v25);
    v10 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    old_coin_num = *v11;
    v12 = (unsigned __int64)std::map<proto::VirtualItem,unsigned int>::operator[](
                              &thisa->activity_coin_map_,
                              (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load4(v12);
    *(_DWORD *)v12 -= sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(reasona);
    }
    reason_typea = reasona->reason_type;
    v14 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v15,
      reason_typea,
      ITEM_LIMIT_NONE,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v26 == (char *)v5 )
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
  return result;
};

// Line 750: range 00000000161D4654-00000000161D47C2
void __cdecl WinterCampActivity::fillActivityCoinInfo(
        WinterCampActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type v3; // ebx
  google::protobuf::Map<unsigned int,unsigned int>::key_type *p_key; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v6; // rdx
  char v7; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-44h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<const proto::VirtualItem,unsigned int> *v13; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+48h] [rbp-18h]

  __for_range = &this->activity_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v13);
    v2 = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v13);
    coin_num = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    v3 = *coin_num;
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(coin_type);
    }
    key = *coin_type;
    p_key = &key;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, &key);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(p_key) = v7 != 0;
      __asan_report_store4(v5, p_key, v5);
    }
    *v6 = v3;
    std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 758: range 00000000161D47C4-00000000161D47EE
bool __cdecl WinterCampActivity::isCoinTypeValid(const WinterCampActivity *const this, proto::VirtualItem coin_type)
{
  return coin_type == ITEM_VIRTUAL_WINTER_CAMP_COIN_A || coin_type == ITEM_VIRTUAL_WINTER_CAMP_COIN_B;
};

// Line 763: range 00000000161D47F0-00000000161D4982
__int64 __fastcall WinterCampActivity::getActivityCoin(
        const WinterCampActivity *const this,
        proto::VirtualItem coin_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 coin_type:762 64 8 8 iter:764";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::getActivityCoin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = coin_type;
  *(std::map<proto::VirtualItem,unsigned int>::const_iterator *)(v2 + 64) = std::map<proto::VirtualItem,unsigned int>::find(
                                                                              &this->activity_coin_map_,
                                                                              (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v2 + 64));
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

// Line 773: range 00000000161D4984-00000000161D5070
void __cdecl WinterCampActivity::tryStartNextExplore(WinterCampActivity *const this, bool is_notify)
{
  common::milog::MiLogStream *v2; // rax
  unsigned __int64 v3; // rax
  common::milog::MiLogStream *v4; // rax
  __int64 id; // rsi
  common::milog::MiLogStream *v6; // rax
  uint32_t DayIndexAfterStart; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // ecx
  char v11; // al
  unsigned __int64 drop_gen_index; // rbx
  uint32_t v13; // edi
  __int64 v14; // rdx
  PlayerGroupLinkComp *GroupLinkComp; // r12
  uint32_t activity_id; // ebx
  uint32_t GroupBundleId; // eax
  ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+10h] [rbp-50h]
  const data::WinterCampExploreExcelConfig *explore_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/winter_camp_activity.cpp",
    "tryStartNextExplore",
    774);
  v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v23,
         (const char (*)[43])"[WinterCamp] tryStartNextExplore. cur id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->explore_data_.id);
  common::milog::MiLogStream::~MiLogStream(&v23);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(WinterCampActivity *const))v3)(this) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "tryStartNextExplore",
      777);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v23,
      (const char (*)[29])"[WinterCamp] content closed.");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->explore_data_.is_finished >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->explore_data_.is_finished);
    if ( !this->explore_data_.is_finished )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/winter_camp_activity.cpp",
        "tryStartNextExplore",
        783);
      v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v23,
             (const char (*)[46])"[WinterCamp] explore_data_ not finished. id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->explore_data_.id);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->explore_data_);
      }
      id = this->explore_data_.id;
      explore_config_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampNextExploreExcelConfig(
                             activity_winter_camp_config_mgr,
                             id);
      if ( explore_config_ptr )
      {
        DayIndexAfterStart = BaseActivity::getDayIndexAfterStart((BaseActivity *const)this);
        if ( *(_BYTE *)(((unsigned __int64)&explore_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)explore_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&explore_config_ptr->open_day >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&explore_config_ptr->open_day);
        }
        if ( DayIndexAfterStart >= explore_config_ptr->open_day )
        {
          if ( std::vector<data::WinterCampDropGroup>::size(&explore_config_ptr->drop_groups) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&explore_config_ptr->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&explore_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&explore_config_ptr->id);
            }
            v10 = explore_config_ptr->id;
            v11 = *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000);
            LOBYTE(id) = v11 != 0;
            if ( v11 != 0 && v11 <= 3 )
              __asan_report_store4(&this->explore_data_, id, &this->explore_data_);
            this->explore_data_.id = v10;
            if ( *(char *)(((unsigned __int64)&this->explore_data_.is_finished >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->explore_data_.is_finished, id, &this->explore_data_.is_finished);
            this->explore_data_.is_finished = 0;
            std::map<unsigned int,unsigned int>::clear(&this->explore_data_.drop_record_map);
            if ( *(_BYTE *)(((unsigned __int64)&this->drop_gen_index_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->drop_gen_index_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->drop_gen_index_);
            }
            drop_gen_index = this->drop_gen_index_;
            v13 = drop_gen_index % std::vector<data::WinterCampDropGroup>::size(&explore_config_ptr->drop_groups);
            v14 = (*(_BYTE *)(((unsigned __int64)&this->explore_data_.drop_group_index >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->explore_data_.drop_group_index >> 3) + 0x7FFF8000));
            if ( (_BYTE)v14 )
            {
              v13 = (_DWORD)this + 1044;
              __asan_report_store4(&this->explore_data_.drop_group_index, (((_BYTE)this + 20) & 7u) + 3, v14);
            }
            this->explore_data_.drop_group_index = v13;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            GroupLinkComp = Player::getGroupLinkComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->activity_id_);
            }
            activity_id = this->activity_id_;
            GroupBundleId = WinterCampExploreData::getGroupBundleId(&this->explore_data_);
            PlayerGroupLinkComp::registerGroupBundle(GroupLinkComp, GroupBundleId, activity_id);
            if ( is_notify )
              WinterCampActivity::sendStageInfoNotify(this);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/winter_camp_activity.cpp",
              "tryStartNextExplore",
              800);
            v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                   &v23,
                   (const char (*)[52])"[WinterCamp] explore_data_ drop_groups size 0. id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->explore_data_.id);
            common::milog::MiLogStream::~MiLogStream(&v23);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "tryStartNextExplore",
            795);
          v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                 &v23,
                 (const char (*)[56])"[WinterCamp] explore_data_ not reach next openday. id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->explore_data_.id);
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/winter_camp_activity.cpp",
          "tryStartNextExplore",
          790);
        v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               &v23,
               (const char (*)[55])"[WinterCamp] explore_data_ find next config fail. id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->explore_data_.id);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
    }
  }
};

// Line 817: range 00000000161D5072-00000000161D560A
void __cdecl WinterCampActivity::tryStartNextBattle(WinterCampActivity *const this, bool is_notify)
{
  common::milog::MiLogStream *v2; // rax
  unsigned __int64 v3; // rax
  common::milog::MiLogStream *v4; // rax
  __int64 id; // rsi
  common::milog::MiLogStream *v6; // rax
  uint32_t DayIndexAfterStart; // ecx
  common::milog::MiLogStream *v8; // rax
  uint32_t v9; // ecx
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  PlayerGroupLinkComp *GroupLinkComp; // r12
  uint32_t activity_id; // ebx
  uint32_t GroupBundleId; // eax
  ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+10h] [rbp-50h]
  const data::WinterCampBattleExcelConfig *battle_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/winter_camp_activity.cpp",
    "tryStartNextBattle",
    818);
  v2 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v20,
         (const char (*)[42])"[WinterCamp] tryStartNextBattle. cur id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, (const unsigned int *)&this->battle_data_);
  common::milog::MiLogStream::~MiLogStream(&v20);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(WinterCampActivity *const))v3)(this) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "tryStartNextBattle",
      821);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v20,
      (const char (*)[29])"[WinterCamp] content closed.");
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->battle_data_.is_finished);
    }
    if ( !this->battle_data_.is_finished )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/winter_camp_activity.cpp",
        "tryStartNextBattle",
        827);
      v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v20,
             (const char (*)[45])"[WinterCamp] battle_data_ not finished. id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v4,
        (const unsigned int *)&this->battle_data_);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->battle_data_);
      }
      id = this->battle_data_.id;
      battle_config_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampNextBattleExcelConfig(
                            activity_winter_camp_config_mgr,
                            id);
      if ( battle_config_ptr )
      {
        DayIndexAfterStart = BaseActivity::getDayIndexAfterStart((BaseActivity *const)this);
        if ( *(_BYTE *)(((unsigned __int64)&battle_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)battle_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&battle_config_ptr->open_day >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&battle_config_ptr->open_day);
        }
        if ( DayIndexAfterStart >= battle_config_ptr->open_day )
        {
          if ( *(_BYTE *)(((unsigned __int64)&battle_config_ptr->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&battle_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&battle_config_ptr->id);
          }
          v9 = battle_config_ptr->id;
          v10 = *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000);
          if ( v10 != 0 && v10 <= 3 )
          {
            LOBYTE(id) = v10 != 0;
            __asan_report_store4(&this->battle_data_, id, &this->battle_data_);
          }
          this->battle_data_.id = v9;
          v11 = ((_BYTE)this + 84) & 7;
          v12 = (*(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000));
          if ( (_BYTE)v12 )
            __asan_report_store1(&this->battle_data_.is_finished, v11, v12);
          this->battle_data_.is_finished = 0;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          GroupLinkComp = Player::getGroupLinkComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->activity_id_);
          }
          activity_id = this->activity_id_;
          GroupBundleId = WinterCampBattleData::getGroupBundleId(&this->battle_data_);
          PlayerGroupLinkComp::registerGroupBundle(GroupLinkComp, GroupBundleId, activity_id);
          if ( is_notify )
            WinterCampActivity::sendStageInfoNotify(this);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "tryStartNextBattle",
            839);
          v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                 &v20,
                 (const char (*)[55])"[WinterCamp] battle_data_ not reach next openday. id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v8,
            (const unsigned int *)&this->battle_data_);
          common::milog::MiLogStream::~MiLogStream(&v20);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/winter_camp_activity.cpp",
          "tryStartNextBattle",
          834);
        v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               &v20,
               (const char (*)[54])"[WinterCamp] battle_data_ find next config fail. id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v6,
          (const unsigned int *)&this->battle_data_);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
    }
  }
};

// Line 854: range 00000000161D560C-00000000161D5B61
void __cdecl WinterCampActivity::tryStartNextRace(WinterCampActivity *const this)
{
  unsigned __int64 v1; // rax
  uint32_t *p_open_day; // rax
  __int64 v3; // rsi
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  uint32_t activity_id; // ebx
  uint32_t GroupBundleId; // eax
  common::milog::MiLogStream *v9; // rax
  bool is_notify; // [rsp+13h] [rbp-8Dh]
  uint32_t day_index; // [rsp+14h] [rbp-8Ch]
  std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+28h] [rbp-78h]
  PlayerGroupLinkComp *group_link_comp; // [rsp+30h] [rbp-70h]
  const std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig> *__for_range; // [rsp+38h] [rbp-68h]
  const std::pair<unsigned int const,data::WinterCampRaceExcelConfig> *v17; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,data::WinterCampRaceExcelConfig> >::type *id; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampRaceExcelConfig> >::type *config; // [rsp+50h] [rbp-50h]
  WinterCampRaceData *race_data; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v21; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/winter_camp_activity.cpp",
    "tryStartNextRace",
    855);
  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
    &v22,
    (const char (*)[31])"[WinterCamp] tryStartNextRace.");
  common::milog::MiLogStream::~MiLogStream(&v22);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(WinterCampActivity *const))v1)(this) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "tryStartNextRace",
      858);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v22,
      (const char (*)[29])"[WinterCamp] content closed.");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_race_started_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_race_started_);
    if ( !this->is_race_started_ )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/winter_camp_activity.cpp",
        "tryStartNextRace",
        863);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v22,
        (const char (*)[31])"[WinterCamp] race not started.");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      day_index = BaseActivity::getDayIndexAfterStart((BaseActivity *const)this);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      group_link_comp = Player::getGroupLinkComp(this->player_);
      is_notify = 0;
      __for_range = &activity_winter_camp_config_mgr->winter_camp_race_excel_config_map;
      __for_begin._M_cur = std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::begin(&activity_winter_camp_config_mgr->winter_camp_race_excel_config_map)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::end(&activity_winter_camp_config_mgr->winter_camp_race_excel_config_map)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false>(
                &__for_begin,
                &__for_end) )
      {
        v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false>::operator*(&__for_begin);
        id = std::get<0ul,unsigned int const,data::WinterCampRaceExcelConfig>(v17);
        config = (std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampRaceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WinterCampRaceExcelConfig>(v17);
        p_open_day = &config->open_day;
        if ( *(_BYTE *)(((unsigned __int64)p_open_day >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_open_day & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_open_day >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_open_day);
        }
        if ( day_index >= config->open_day
          && !common::tools::MiscUtils::isContains<std::map<unsigned int,WinterCampRaceData>,unsigned int>(
                &this->race_data_map_,
                id) )
        {
          race_data = std::map<unsigned int,WinterCampRaceData>::operator[](&this->race_data_map_, id);
          v3 = ((unsigned __int8)id & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(id);
          }
          v4 = *id;
          v5 = *(_BYTE *)(((unsigned __int64)race_data >> 3) + 0x7FFF8000);
          LOBYTE(v3) = v5 != 0;
          v6 = (v5 != 0) & (unsigned __int8)((char)(((unsigned __int8)race_data & 7) + 3) >= v5);
          if ( (_BYTE)v6 )
            __asan_report_store4(race_data, v3, v6);
          race_data->id = v4;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->activity_id_);
          }
          activity_id = this->activity_id_;
          GroupBundleId = WinterCampRaceData::getGroupBundleId(race_data);
          PlayerGroupLinkComp::registerGroupBundle(group_link_comp, GroupBundleId, activity_id);
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "tryStartNextRace",
            883);
          v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v22,
                 (const char (*)[34])"[WinterCamp] race data init. id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
          common::milog::MiLogStream::~MiLogStream(&v22);
          is_notify = 1;
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false>::operator++(&__for_begin);
      }
      if ( is_notify )
        BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    }
  }
};

// Line 893: range 00000000161D5B62-00000000161D5DF8
__int64 __fastcall WinterCampActivity::finishExplore(WinterCampActivity *const this, __int64 id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  PlayerGroupLinkComp *GroupLinkComp; // r13
  uint32_t GroupBundleId; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-80h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 id:892";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::finishExplore;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = id;
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->explore_data_);
  }
  if ( this->explore_data_.id == *(_DWORD *)(v2 + 32) )
  {
    if ( *(char *)(((unsigned __int64)&this->explore_data_.is_finished >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->explore_data_.is_finished, id, &this->explore_data_.is_finished);
    this->explore_data_.is_finished = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    GroupLinkComp = Player::getGroupLinkComp(this->player_);
    GroupBundleId = WinterCampExploreData::getGroupBundleId(&this->explore_data_);
    PlayerGroupLinkComp::unregisterGroupBundle(GroupLinkComp, GroupBundleId, 0);
    WinterCampActivity::tryStartNextExplore(this, 0);
    WinterCampActivity::sendStageInfoNotify(this);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "finishExplore",
      896);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v11,
           (const char (*)[32])"[WinterCamp] id not match. id: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" cur id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->explore_data_.id);
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
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

// Line 907: range 00000000161D5DFA-00000000161D6095
__int64 __fastcall WinterCampActivity::finishBattle(WinterCampActivity *const this, uint32_t id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  PlayerGroupLinkComp *GroupLinkComp; // r13
  uint32_t GroupBundleId; // eax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-80h] BYREF
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 id:906";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::finishBattle;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = id;
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->battle_data_);
  }
  if ( this->battle_data_.id == *(_DWORD *)(v2 + 32) )
  {
    v9 = ((_BYTE)this + 84) & 7;
    v10 = (*(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000));
    if ( (_BYTE)v10 )
      __asan_report_store1(&this->battle_data_.is_finished, v9, v10);
    this->battle_data_.is_finished = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    GroupLinkComp = Player::getGroupLinkComp(this->player_);
    GroupBundleId = WinterCampBattleData::getGroupBundleId(&this->battle_data_);
    PlayerGroupLinkComp::unregisterGroupBundle(GroupLinkComp, GroupBundleId, 0);
    WinterCampActivity::tryStartNextBattle(this, 0);
    WinterCampActivity::sendStageInfoNotify(this);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "finishBattle",
      910);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v13,
           (const char (*)[32])"[WinterCamp] id not match. id: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" cur id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v7,
      (const unsigned int *)&this->battle_data_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
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

// Line 921: range 00000000161D6096-00000000161D6255
void __cdecl WinterCampActivity::sendStageInfoNotify(WinterCampActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::WinterCampStageInfo *v4; // rax
  proto::WinterCampStageInfo *v5; // rax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 10 notify:922";
  *(_QWORD *)(v1 + 16) = WinterCampActivity::sendStageInfoNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::WinterCampStageInfoChangeNotify::WinterCampStageInfoChangeNotify((proto::WinterCampStageInfoChangeNotify *const)(v1 + 48));
  v4 = proto::WinterCampStageInfoChangeNotify::mutable_explore_info((proto::WinterCampStageInfoChangeNotify *const)(v1 + 48));
  WinterCampExploreData::toClient(&this->explore_data_, v4);
  v5 = proto::WinterCampStageInfoChangeNotify::mutable_battle_info((proto::WinterCampStageInfoChangeNotify *const)(v1 + 48));
  WinterCampBattleData::toClient(&this->battle_data_, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::WinterCampStageInfoChangeNotify::~WinterCampStageInfoChangeNotify((proto::WinterCampStageInfoChangeNotify *const)(v1 + 48));
  if ( v6 == (char *)v1 )
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
};

// Line 929: range 00000000161D6256-00000000161D63E8
__int64 __fastcall WinterCampActivity::getRaceMaxScore(WinterCampActivity *const this, uint32_t race_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> >::pointer v6; // rdx
  uint32_t *p_max_score; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 race_id:928 64 8 8 iter:930";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::getRaceMaxScore;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = race_id;
  *(std::map<unsigned int,WinterCampRaceData>::iterator *)(v2 + 64) = std::map<unsigned int,WinterCampRaceData>::find(
                                                                        &this->race_data_map_,
                                                                        (const std::map<unsigned int,WinterCampRaceData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,WinterCampRaceData>::end(&this->race_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> > *const)(v2 + 64));
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

// Line 939: range 00000000161D63EA-00000000161D71C5
__int64 __fastcall WinterCampActivity::triathlonRestart(WinterCampActivity *const this, uint32_t gallery_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  unsigned int v6; // r14d
  Scene *v7; // rax
  SceneGalleryComp *GalleryComp; // rax
  PlayerSceneComp *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t SceneId; // r14d
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  PlayerSceneComp *v23; // r14
  Scene *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  __int64 result; // rax
  TxtConfigMgr *txt_config_mgr; // [rsp+10h] [rbp-1A0h]
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-198h]
  const data::WinterCampRaceExcelConfig *config_ptr; // [rsp+20h] [rbp-190h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-188h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-180h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-178h]
  std::shared_ptr<Config> v35; // [rsp+40h] [rbp-170h] BYREF
  std::shared_ptr<Config> v36; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-130h] BYREF
  char v39[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 8 ret:1010 48 4 14 gallery_id:938 64 12 15 reborn_pos:1008 96 12 15 reborn_rot:1009 128 1"
                        "6 13 scene_ptr:947 160 16 14 avatar_ptr:964";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::triathlonRestart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 48) = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "triathlonRestart",
      943);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v37,
      (const char (*)[39])"[WinterCamp]  player not in self scene");
    common::milog::MiLogStream::~MiLogStream(&v37);
    v6 = 512;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 128));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/winter_camp_activity.cpp",
        "triathlonRestart",
        950);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v37,
        (const char (*)[34])"[WinterCamp] player not on scene.");
      common::milog::MiLogStream::~MiLogStream(&v37);
      v6 = 103;
    }
    else
    {
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      GalleryComp = Scene::getGalleryComp(v7);
      if ( SceneGalleryComp::isAnyGalleryStarted(GalleryComp) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/winter_camp_activity.cpp",
          "triathlonRestart",
          955);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v37,
          (const char (*)[32])"[WinterCamp] anyGalleryStarted.");
        common::milog::MiLogStream::~MiLogStream(&v37);
        v6 = 523;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v9 = Player::getSceneComp(this->player_);
        if ( PlayerSceneComp::isInTransfer(v9) )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "triathlonRestart",
            961);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v37,
            (const char (*)[33])"[WinterCamp] player in transfer.");
          common::milog::MiLogStream::~MiLogStream(&v37);
          v6 = 170;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::getAvatarComp(this->player_);
          PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 160));
          if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 160), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/winter_camp_activity.cpp",
              "triathlonRestart",
              967);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v37,
              (const char (*)[38])"[WinterCamp] getCurAvatar is nullptr.");
            common::milog::MiLogStream::~MiLogStream(&v37);
            v6 = 103;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v35);
            txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr;
            std::shared_ptr<Config>::~shared_ptr(&v35);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v36);
            lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.lua_config_mgr;
            std::shared_ptr<Config>::~shared_ptr(&v36);
            config_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampRaceExcelConfigByGalleryId(
                           &txt_config_mgr->activity_winter_camp_config_mgr,
                           *(_DWORD *)(v2 + 48));
            if ( config_ptr )
            {
              if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,WinterCampRaceData>,unsigned int>(
                      &this->race_data_map_,
                      &config_ptr->id) )
              {
                common::milog::MiLogStream::create(
                  &v37,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/winter_camp_activity.cpp",
                  "triathlonRestart",
                  980);
                v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v37,
                        (const char (*)[39])"[WinterCamp] race stage not open. id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config_ptr->id);
                common::milog::MiLogStream::~MiLogStream(&v37);
                v6 = 5;
              }
              else
              {
                gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                       &txt_config_mgr->gallery_config_mgr,
                                       *(_DWORD *)(v2 + 48));
                if ( gallery_config_ptr )
                {
                  v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  SceneId = Scene::getSceneId(v13);
                  if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)gallery_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3)
                                                                                       + 0x7FFF8000) )
                  {
                    __asan_report_load4(&gallery_config_ptr->revive_point_group_id);
                  }
                  if ( SceneId == LuaConfigMgr::getSceneIdByGroupId(
                                    lua_config_mgr,
                                    gallery_config_ptr->revive_point_group_id) )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)gallery_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3)
                                                                                         + 0x7FFF8000) )
                    {
                      __asan_report_load4(&gallery_config_ptr->revive_point_group_id);
                    }
                    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                                lua_config_mgr,
                                                gallery_config_ptr->revive_point_group_id);
                    if ( group_script_config_ptr )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_config_id >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&gallery_config_ptr->revive_point_config_id);
                      }
                      point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                                  group_script_config_ptr,
                                                  gallery_config_ptr->revive_point_config_id);
                      if ( point_script_config_ptr )
                      {
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
                        *(_QWORD *)(v2 + 64) = *(_QWORD *)&point_script_config_ptr->pos.x;
                        *(float *)(v2 + 72) = point_script_config_ptr->pos.z;
                        if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
                          && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                                 + 3) >> 3)
                                                                                               + 0x7FFF8000) )
                        {
                          __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
                        }
                        *(_QWORD *)(v2 + 96) = *(_QWORD *)&point_script_config_ptr->rot.x;
                        *(float *)(v2 + 104) = point_script_config_ptr->rot.z;
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->player_);
                        v23 = Player::getSceneComp(this->player_);
                        TransferReason::TransferReason(&p_reason, ENTER_REASON_WINTER_CAMP_RESTART);
                        v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                        *(_DWORD *)(v2 + 32) = PlayerSceneComp::jumpToScene(
                                                 v23,
                                                 v24,
                                                 (const Vector3 *)(v2 + 64),
                                                 (const Vector3 *)(v2 + 96),
                                                 0,
                                                 &p_reason);
                        TransferReason::~TransferReason(&p_reason);
                        if ( *(_DWORD *)(v2 + 32) )
                        {
                          common::milog::MiLogStream::create(
                            &v37,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/winter_camp_activity.cpp",
                            "triathlonRestart",
                            1013);
                          v25 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                                  &v37,
                                  (const char (*)[24])"jumpToScene fail. ret: ");
                          v26 = common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v2 + 32));
                          v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                  v26,
                                  (const char (*)[15])" gallery_id:  ");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v27,
                            (const unsigned int *)(v2 + 48));
                          common::milog::MiLogStream::~MiLogStream(&v37);
                          v6 = *(_DWORD *)(v2 + 32);
                        }
                        else
                        {
                          v6 = 0;
                        }
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v37,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/winter_camp_activity.cpp",
                          "triathlonRestart",
                          1005);
                        v22 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                &v37,
                                (const char (*)[49])"[WinterCamp] findPointConfig failed, config_id: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v22,
                          &gallery_config_ptr->revive_point_config_id);
                        common::milog::MiLogStream::~MiLogStream(&v37);
                        v6 = 5;
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v37,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/winter_camp_activity.cpp",
                        "triathlonRestart",
                        999);
                      v21 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                              &v37,
                              (const char (*)[54])"[WinterCamp] findGroupScriptConfig failed, group_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v21,
                        &gallery_config_ptr->revive_point_group_id);
                      common::milog::MiLogStream::~MiLogStream(&v37);
                      v6 = 5;
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v37,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/winter_camp_activity.cpp",
                      "triathlonRestart",
                      993);
                    v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                            &v37,
                            (const char (*)[35])"[WinterCamp] different scene. id: ");
                    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config_ptr->id);
                    v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v16,
                            (const char (*)[14])" gallery_id: ");
                    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v17,
                            (const unsigned int *)(v2 + 48));
                    v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            v18,
                            (const char (*)[12])" scene_id: ");
                    v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                    *(_DWORD *)(v2 + 32) = Scene::getSceneId(v20);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v19,
                      (const unsigned int *)(v2 + 32));
                    common::milog::MiLogStream::~MiLogStream(&v37);
                    v6 = 512;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v37,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/winter_camp_activity.cpp",
                    "triathlonRestart",
                    988);
                  v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          &v37,
                          (const char (*)[53])"[WinterCamp] gallery_config_ptr is null, gallery_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v37);
                  v6 = 5;
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/winter_camp_activity.cpp",
                "triathlonRestart",
                975);
              v10 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                      &v37,
                      (const char (*)[73])"[WinterCamp] findWinterCampRaceExcelConfigByGalleryId fail. gallery_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v37);
              v6 = 5;
            }
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 160));
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
  }
  result = v6;
  if ( v39 == (char *)v2 )
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

// Line 1020: range 00000000161D71C6-00000000161D797D
__int64 __fastcall WinterCampActivity::takeExploreReward(WinterCampActivity *const this, uint32_t id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t ExplorePriority; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v13; // rax
  PlayerItemComp *p_reward_id; // rdi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+10h] [rbp-F0h]
  const data::WinterCampExploreExcelConfig *config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 ret:1043 48 4 7 id:1019 64 24 18 action_reason:1042";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::takeExploreReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = id;
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->taken_explore_reward_set_,
         (const unsigned int *)(v2 + 48)) )
  {
    result = 10080LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->explore_data_);
    }
    if ( this->explore_data_.id != *(_DWORD *)(v2 + 48) )
      goto LABEL_13;
    if ( *(char *)(((unsigned __int64)&this->explore_data_.is_finished >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->explore_data_.is_finished);
    if ( !this->explore_data_.is_finished )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/winter_camp_activity.cpp",
        "takeExploreReward",
        1028);
      v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v20,
             (const char (*)[37])"[WinterCamp] cur id not finish. id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 10081LL;
    }
    else
    {
LABEL_13:
      ExplorePriority = ActivityWinterCampExcelConfigMgr::getExplorePriority(
                          activity_winter_camp_config_mgr,
                          *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->explore_data_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->explore_data_);
      }
      if ( ExplorePriority <= ActivityWinterCampExcelConfigMgr::getExplorePriority(
                                activity_winter_camp_config_mgr,
                                this->explore_data_.id) )
      {
        config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampExploreExcelConfig(
                       activity_winter_camp_config_mgr,
                       *(_DWORD *)(v2 + 48));
        if ( config_ptr )
        {
          ActionReason::ActionReason(
            (ActionReason *const)(v2 + 64),
            ACTION_REASON_WINTER_CAMP_EXPLORE_REWARD,
            ITEM_LIMIT_WINTER_CAMP_REWARD);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->reward_id);
          }
          *(_DWORD *)(v2 + 32) = PlayerItemComp::checkGrantReward(
                                   ItemComp,
                                   config_ptr->reward_id,
                                   (const ActionReason *)(v2 + 64));
          if ( *(_DWORD *)(v2 + 32) )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/winter_camp_activity.cpp",
              "takeExploreReward",
              1046);
            v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v20,
                    (const char (*)[42])"[WinterCamp] checkGrantReward fail. ret: ");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v13, (const int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v20);
            result = *(unsigned int *)(v2 + 32);
          }
          else
          {
            std::set<unsigned int>::insert(
              &this->taken_explore_reward_set_,
              (const std::set<unsigned int>::value_type *)(v2 + 48));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            p_reward_id = Player::getItemComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              p_reward_id = (PlayerItemComp *)&config_ptr->reward_id;
              __asan_report_load4(&config_ptr->reward_id);
            }
            *(_DWORD *)(v2 + 32) = PlayerItemComp::grantReward(
                                     p_reward_id,
                                     config_ptr->reward_id,
                                     (const ActionReason *)(v2 + 64),
                                     0LL);
            if ( *(_DWORD *)(v2 + 32) )
            {
              common::milog::MiLogStream::create(
                &v20,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/winter_camp_activity.cpp",
                "takeExploreReward",
                1053);
              v15 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v20,
                      (const char (*)[37])"[WinterCamp] grantReward fail. ret: ");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v2 + 32));
              common::milog::MiLogStream::~MiLogStream(&v20);
              result = *(unsigned int *)(v2 + 32);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v20,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/winter_camp_activity.cpp",
                "takeExploreReward",
                1056);
              v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      &v20,
                      (const char (*)[45])"[WinterCamp] takeExploreReward success. id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v20);
              result = 0LL;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "takeExploreReward",
            1039);
          v11 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v20,
                  (const char (*)[57])"[WinterCamp] findWinterCampExploreExcelConfig fail. id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->explore_data_.id);
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = 5LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/winter_camp_activity.cpp",
          "takeExploreReward",
          1033);
        v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v20,
               (const char (*)[33])"[WinterCamp] id not finish. id: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" cur id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->explore_data_.id);
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 10081LL;
      }
    }
  }
  if ( v21 == (char *)v2 )
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

// Line 1061: range 00000000161D797E-00000000161D813A
__int64 __fastcall WinterCampActivity::takeBattleReward(WinterCampActivity *const this, uint32_t id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t BattlePriority; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v13; // rax
  PlayerItemComp *p_reward_id; // rdi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+10h] [rbp-F0h]
  const data::WinterCampBattleExcelConfig *config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 ret:1084 48 4 7 id:1060 64 24 18 action_reason:1083";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::takeBattleReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = id;
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->taken_battle_reward_set_,
         (const unsigned int *)(v2 + 48)) )
  {
    result = 10080LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->battle_data_);
    }
    if ( this->battle_data_.id != *(_DWORD *)(v2 + 48) )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->battle_data_.is_finished);
    }
    if ( !this->battle_data_.is_finished )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/winter_camp_activity.cpp",
        "takeBattleReward",
        1069);
      v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v20,
             (const char (*)[37])"[WinterCamp] cur id not finish. id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 10081LL;
    }
    else
    {
LABEL_13:
      BattlePriority = ActivityWinterCampExcelConfigMgr::getBattlePriority(
                         activity_winter_camp_config_mgr,
                         *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->battle_data_);
      }
      if ( BattlePriority <= ActivityWinterCampExcelConfigMgr::getBattlePriority(
                               activity_winter_camp_config_mgr,
                               this->battle_data_.id) )
      {
        config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampBattleExcelConfig(
                       activity_winter_camp_config_mgr,
                       *(_DWORD *)(v2 + 48));
        if ( config_ptr )
        {
          ActionReason::ActionReason(
            (ActionReason *const)(v2 + 64),
            ACTION_REASON_WINTER_CAMP_BATTLE_REWARD,
            ITEM_LIMIT_WINTER_CAMP_REWARD);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->reward_id);
          }
          *(_DWORD *)(v2 + 32) = PlayerItemComp::checkGrantReward(
                                   ItemComp,
                                   config_ptr->reward_id,
                                   (const ActionReason *)(v2 + 64));
          if ( *(_DWORD *)(v2 + 32) )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/winter_camp_activity.cpp",
              "takeBattleReward",
              1087);
            v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v20,
                    (const char (*)[42])"[WinterCamp] checkGrantReward fail. ret: ");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v13, (const int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v20);
            result = *(unsigned int *)(v2 + 32);
          }
          else
          {
            std::set<unsigned int>::insert(
              &this->taken_battle_reward_set_,
              (const std::set<unsigned int>::value_type *)(v2 + 48));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            p_reward_id = Player::getItemComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              p_reward_id = (PlayerItemComp *)&config_ptr->reward_id;
              __asan_report_load4(&config_ptr->reward_id);
            }
            *(_DWORD *)(v2 + 32) = PlayerItemComp::grantReward(
                                     p_reward_id,
                                     config_ptr->reward_id,
                                     (const ActionReason *)(v2 + 64),
                                     0LL);
            if ( *(_DWORD *)(v2 + 32) )
            {
              common::milog::MiLogStream::create(
                &v20,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/winter_camp_activity.cpp",
                "takeBattleReward",
                1094);
              v15 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v20,
                      (const char (*)[37])"[WinterCamp] grantReward fail. ret: ");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v2 + 32));
              common::milog::MiLogStream::~MiLogStream(&v20);
              result = *(unsigned int *)(v2 + 32);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v20,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/winter_camp_activity.cpp",
                "takeBattleReward",
                1097);
              v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      &v20,
                      (const char (*)[44])"[WinterCamp] takeBattleReward success. id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v20);
              result = 0LL;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "takeBattleReward",
            1080);
          v11 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v20,
                  (const char (*)[56])"[WinterCamp] findWinterCampBattleExcelConfig fail. id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v11,
            (const unsigned int *)&this->battle_data_);
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = 5LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/winter_camp_activity.cpp",
          "takeBattleReward",
          1074);
        v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v20,
               (const char (*)[33])"[WinterCamp] id not finish. id: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" cur id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v10,
          (const unsigned int *)&this->battle_data_);
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 10081LL;
      }
    }
  }
  if ( v21 == (char *)v2 )
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

// Line 1102: range 00000000161D813C-00000000161D8972
void __cdecl WinterCampActivity::onChallengeFinishEvent(
        WinterCampActivity *const this,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  const data::ActivityWinterCampExcelConfigMgrBase *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  const ActivityGroupLinksExcelConfigMgr *v8; // rcx
  uint32_t BundleIdByGroupId; // ecx
  uint32_t challenge_index; // ecx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampBattleSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampBattleSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampBattleSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *player; // r14
  std::string eventa; // [rsp+0h] [rbp-100h]
  const ChallengeFinishEvent *eventb; // [rsp+0h] [rbp-100h]
  WinterCampActivity *thisa; // [rsp+8h] [rbp-F8h]
  const data::WinterCampBattleExcelConfig *battle_config_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v21; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1133 64 16 12 log_ptr:1134";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::onChallengeFinishEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(WinterCampActivity *const))v5)(this) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onChallengeFinishEvent",
      1105);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v22,
      (const char (*)[29])"[WinterCamp] content closed.");
    common::milog::MiLogStream::~MiLogStream(&v22);
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
      if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->battle_data_);
      }
      if ( this->battle_data_.id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->battle_data_.is_finished >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->battle_data_.is_finished);
        }
        if ( !this->battle_data_.is_finished )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v21);
          *(&eventa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
          v6 = (const data::ActivityWinterCampExcelConfigMgrBase *)(*(&eventa._anon_0._M_allocated_capacity + 1) + 63192);
          if ( *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->battle_data_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->battle_data_);
          }
          battle_config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampBattleExcelConfig(
                                v6,
                                this->battle_data_.id);
          if ( battle_config_ptr )
          {
            v8 = (const ActivityGroupLinksExcelConfigMgr *)(*(&eventa._anon_0._M_allocated_capacity + 1) + 56944);
            if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&event->group_id);
            }
            BundleIdByGroupId = ActivityGroupLinksExcelConfigMgr::getBundleIdByGroupId(v8, event->group_id);
            if ( *(_BYTE *)(((unsigned __int64)&battle_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)battle_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&battle_config_ptr->group_link_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&battle_config_ptr->group_link_id);
            }
            if ( BundleIdByGroupId == battle_config_ptr->group_link_id )
            {
              if ( *(_BYTE *)(((unsigned __int64)&battle_config_ptr->challenge_index >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&battle_config_ptr->challenge_index >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&battle_config_ptr->challenge_index);
              }
              challenge_index = battle_config_ptr->challenge_index;
              if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&event->challenge_index);
              }
              if ( challenge_index == event->challenge_index )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                BasicComp = Player::getBasicComp(this->player_);
                PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
                StatLogUtils::ContextHolder::ContextHolder(
                  (StatLogUtils::ContextHolder *const)(v2 + 48),
                  0xDDFu,
                  eventa);
                std::string::~string(&v22);
                common::tools::perf::make_shared<proto_log::PlayerLogBodyWinterCampBattleSettle>();
                v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampBattleSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampBattleSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&eventb->group_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&eventb->group_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&eventb->group_id);
                }
                proto_log::PlayerLogBodyWinterCampBattleSettle::set_group_id(v12, eventb->group_id);
                v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampBattleSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampBattleSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&eventb->challenge_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)eventb + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->challenge_id >> 3)
                                                                        + 0x7FFF8000) )
                {
                  __asan_report_load4(&eventb->challenge_id);
                }
                proto_log::PlayerLogBodyWinterCampBattleSettle::set_challenge_id(v13, eventb->challenge_id);
                v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampBattleSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampBattleSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                proto_log::PlayerLogBodyWinterCampBattleSettle::set_transaction(v14, &eventb->transaction);
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisa->player_);
                player = thisa->player_;
                std::shared_ptr<google::protobuf::Message>::shared_ptr(&v21, 0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWinterCampBattleSettle,void>(
                  &p_body_ptr,
                  (const std::shared_ptr<proto_log::PlayerLogBodyWinterCampBattleSettle> *)(v2 + 64));
                Player::printStatLog(player, &p_body_ptr, &v21, 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v21);
                std::shared_ptr<proto_log::PlayerLogBodyWinterCampBattleSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWinterCampBattleSettle> *const)(v2 + 64));
                StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
                if ( *(_BYTE *)(((unsigned __int64)&thisa->battle_data_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&thisa->battle_data_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&thisa->battle_data_);
                }
                WinterCampActivity::finishBattle(thisa, thisa->battle_data_.id);
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/winter_camp_activity.cpp",
              "onChallengeFinishEvent",
              1121);
            v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                   &v22,
                   (const char (*)[56])"[WinterCamp] findWinterCampBattleExcelConfig fail. id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v7,
              (const unsigned int *)&this->battle_data_);
            common::milog::MiLogStream::~MiLogStream(&v22);
          }
        }
      }
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 1146: range 00000000161D8974-00000000161D9075
void __cdecl WinterCampActivity::onGalleryFinishEvent(
        WinterCampActivity *const this,
        const GalleryTriathlonScoreEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> >::pointer v10; // rax
  uint32_t *p_max_score; // rax
  __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t score; // [rsp+1Ch] [rbp-F4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> >::_Self __y; // [rsp+20h] [rbp-F0h] BYREF
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+28h] [rbp-E8h]
  const data::WinterCampRaceExcelConfig *race_config_ptr; // [rsp+30h] [rbp-E0h]
  WinterCampRaceData *race_data; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-D0h] BYREF
  char v22[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 gallery_id:1152 64 8 9 iter:1161 96 32 11 notify:1175";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::onGalleryFinishEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(WinterCampActivity *const))v5)(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onGalleryFinishEvent",
      1149);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[29])"[WinterCamp] content closed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->gallery_id);
    }
    *(_DWORD *)(v2 + 48) = event->gallery_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v21);
    race_config_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampRaceExcelConfigByGalleryId(
                        activity_winter_camp_config_mgr,
                        *(_DWORD *)(v2 + 48));
    if ( race_config_ptr )
    {
      *(std::map<unsigned int,WinterCampRaceData>::iterator *)(v2 + 64) = std::map<unsigned int,WinterCampRaceData>::find(
                                                                            &this->race_data_map_,
                                                                            &race_config_ptr->id);
      __y._M_node = std::map<unsigned int,WinterCampRaceData>::end(&this->race_data_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> >::_Self *)(v2 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/winter_camp_activity.cpp",
          "onGalleryFinishEvent",
          1164);
        v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[57])"[WinterCamp] find race_data_map_ data fail. gallery_id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &race_config_ptr->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      }
      else
      {
        v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRaceData> > *const)(v2 + 64));
        race_data = &v10->second;
        p_max_score = &v10->second.max_score;
        if ( *(_BYTE *)(((unsigned __int64)p_max_score >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_max_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_score >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(p_max_score);
        }
        if ( score > race_data->max_score )
        {
          v12 = (*(_BYTE *)(((unsigned __int64)&race_data->max_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)race_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&race_data->max_score >> 3) + 0x7FFF8000));
          if ( (_BYTE)v12 )
            __asan_report_store4(&race_data->max_score, (((_BYTE)race_data + 4) & 7u) + 3, v12);
          race_data->max_score = score;
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 96),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "onGalleryFinishEvent",
            1173);
          v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  (common::milog::MiLogStream *const)(v2 + 96),
                  (const char (*)[36])"[WinterCamp] update max score. id: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)race_data);
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" max_score: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &race_data->max_score);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
          proto::WinterCampRaceScoreNotify::WinterCampRaceScoreNotify((proto::WinterCampRaceScoreNotify *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)race_data >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)race_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)race_data >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(race_data);
          }
          proto::WinterCampRaceScoreNotify::set_id((proto::WinterCampRaceScoreNotify *const)(v2 + 96), race_data->id);
          if ( *(_BYTE *)(((unsigned __int64)&race_data->max_score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)race_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&race_data->max_score >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&race_data->max_score);
          }
          proto::WinterCampRaceScoreNotify::set_max_score(
            (proto::WinterCampRaceScoreNotify *const)(v2 + 96),
            race_data->max_score);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
          proto::WinterCampRaceScoreNotify::~WinterCampRaceScoreNotify((proto::WinterCampRaceScoreNotify *const)(v2 + 96));
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/winter_camp_activity.cpp",
        "onGalleryFinishEvent",
        1158);
      v6 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[73])"[WinterCamp] findWinterCampRaceExcelConfigByGalleryId fail. gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    }
  }
  if ( v22 == (char *)v2 )
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

// Line 1182: range 00000000161D9076-00000000161D94A4
void __cdecl WinterCampActivity::onHomeCustomFurnitureChangeEvent(
        WinterCampActivity *const this,
        const HomeCustomFurnitureChangeEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v7; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // r14d
  char *v10; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  unsigned int *v12; // rdx
  char v13; // cl
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+30h] [rbp-E0h]
  const std::set<unsigned int> *item_id_set_ptr; // [rsp+38h] [rbp-D8h]
  std::map<unsigned int,unsigned int> *used_item_count_map; // [rsp+40h] [rbp-D0h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 item_id:1196 64 8 9 iter:1199";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::onHomeCustomFurnitureChangeEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    item_id_set_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampSnowmanItemIdSet(
                        activity_winter_camp_config_mgr,
                        this->schedule_id_);
    if ( item_id_set_ptr )
    {
      used_item_count_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                              &this->home_used_item_data_map_,
                              &event->module_id);
      std::map<unsigned int,unsigned int>::clear(used_item_count_map);
      __for_range = item_id_set_ptr;
      __for_begin._M_node = std::set<unsigned int>::begin(item_id_set_ptr)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(item_id_set_ptr)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v6 = v5;
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v5);
        }
        *(_DWORD *)(v2 + 48) = *v6;
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                              &event->sub_furniture_count_map,
                                                                              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
        __y._M_node = std::map<unsigned int,unsigned int>::end(&event->sub_furniture_count_map)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
               &__y) )
        {
          v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
          p_second = &v7->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          second = v7->second;
          v10 = (char *)(v2 + 48);
          v11 = std::map<unsigned int,unsigned int>::operator[](
                  used_item_count_map,
                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
          v12 = v11;
          v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
          if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
          {
            LOBYTE(v10) = v13 != 0;
            __asan_report_store4(v11, v10, v11);
          }
          *v12 = second;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/winter_camp_activity.cpp",
        "onHomeCustomFurnitureChangeEvent",
        1191);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v23,
        (const char (*)[47])"[WinterCamp] findWinterCampSnowmanItemIdSet fa");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
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

// Line 1208: range 00000000161D94A6-00000000161D9C9E
int32_t __cdecl WinterCampActivity::checkUsedItemNumLimit(
        WinterCampActivity *const this,
        uint32_t gadget_id,
        const std::map<unsigned int,unsigned int> *used_item_count_map)
{
  std::map<unsigned int,unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v7; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v8; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v10; // rdx
  char v11; // cl
  unsigned __int64 v12; // rax
  int v13; // esi
  uint32_t ItemCount; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  int32_t v22; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-180h] BYREF
  unsigned int Uid; // [rsp+24h] [rbp-17Ch] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_begin_0; // [rsp+28h] [rbp-178h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_end_0; // [rsp+30h] [rbp-170h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-168h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-160h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+48h] [rbp-158h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_0; // [rsp+50h] [rbp-150h]
  PlayerItemComp *player_item_comp; // [rsp+58h] [rbp-148h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-140h]
  const std::pair<unsigned int const,unsigned int> *v36; // [rsp+68h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_1; // [rsp+70h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_1; // [rsp+78h] [rbp-128h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v39; // [rsp+80h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *key_gadget_id; // [rsp+88h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *item_count_map; // [rsp+90h] [rbp-110h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+98h] [rbp-108h]
  const std::pair<unsigned int const,unsigned int> *v43; // [rsp+A0h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+A8h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+B0h] [rbp-F0h]
  const std::pair<unsigned int const,unsigned int> *v46; // [rsp+B8h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+C0h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+C8h] [rbp-D8h]
  common::milog::MiLogStream v49; // [rsp+D0h] [rbp-D0h] BYREF
  char v50[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v3 = (std::map<unsigned int,unsigned int> *)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::map<unsigned int,unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 30 total_used_item_count_map:1209";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)WinterCampActivity::checkUsedItemNumLimit;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  std::map<unsigned int,unsigned int>::map(v3 + 1);
  __for_range = used_item_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(used_item_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(used_item_count_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v46 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    item_id = std::get<0ul,unsigned int const,unsigned int>(v46);
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v46);
    count = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v7 = *count;
    v8 = item_id;
    v9 = std::map<unsigned int,unsigned int>::operator[](v3 + 1, item_id);
    v10 = v9;
    v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
    {
      LOBYTE(v8) = v11 != 0;
      __asan_report_store4(v9, v8, v9);
    }
    *v10 = v7;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->used_item_data_map_;
  __for_begin_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->used_item_data_map_)._M_node;
  __for_end_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v39 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
    key_gadget_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v39);
    item_count_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v39);
    if ( *(_BYTE *)(((unsigned __int64)key_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key_gadget_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(key_gadget_id);
    }
    if ( gadget_id != *key_gadget_id )
    {
      __for_range_1 = item_count_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_count_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v43 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        item_id_0 = std::get<0ul,unsigned int const,unsigned int>(v43);
        count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v43);
        v12 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](v3 + 1, item_id_0);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load4(v12);
        v13 = *(_DWORD *)v12;
        if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
        {
          v12 = __asan_report_load4(count_0);
        }
        *(_DWORD *)v12 = v13 + *count_0;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player_item_comp = Player::getItemComp(this->player_);
  __for_range_2 = v3 + 1;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(v3 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v22 = 0;
      goto LABEL_40;
    }
    v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    item_id_1 = std::get<0ul,unsigned int const,unsigned int>(v36);
    count_1 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v36);
    if ( *(_BYTE *)(((unsigned __int64)item_id_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_id_1);
    }
    ItemCount = PlayerItemComp::getItemCount(player_item_comp, *item_id_1);
    if ( *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count_1);
    }
    if ( ItemCount < *count_1 )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/winter_camp_activity.cpp",
    "checkUsedItemNumLimit",
    1232);
  v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v49,
          (const char (*)[39])"[WinterCamp] item not enough. fish id:");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, item_id_1);
  v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" need count:");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, count_1);
  v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" has count:");
  if ( *(_BYTE *)(((unsigned __int64)item_id_1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)item_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(item_id_1);
  }
  val = PlayerItemComp::getItemCount(player_item_comp, *item_id_1);
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
  v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v49);
  v22 = 609;
LABEL_40:
  std::map<unsigned int,unsigned int>::~map(v3 + 1);
  result = v22;
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1241: range 00000000161D9CA0-00000000161D9ECF
void __fastcall WinterCampActivity::updateActivityUsedItemInfo(
        WinterCampActivity *const this,
        uint32_t gadget_id,
        std::map<unsigned int,unsigned int> *item_count_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v7; // r13d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v8; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v10; // rdx
  char v11; // cl
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  std::map<unsigned int,unsigned int> *used_item_count_map; // [rsp+38h] [rbp-88h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-80h]
  const std::pair<unsigned int const,unsigned int> *v17; // [rsp+48h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+50h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+58h] [rbp-68h]
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 gadget_id:1240";
  *(_QWORD *)(v3 + 16) = WinterCampActivity::updateActivityUsedItemInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = gadget_id;
  used_item_count_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                          &this->used_item_data_map_,
                          (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  std::map<unsigned int,unsigned int>::clear(used_item_count_map);
  __for_range = item_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(item_count_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    item_id = std::get<0ul,unsigned int const,unsigned int>(v17);
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v17);
    count = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v7 = *count;
    v8 = item_id;
    v9 = std::map<unsigned int,unsigned int>::operator[](used_item_count_map, item_id);
    v10 = v9;
    v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
    {
      LOBYTE(v8) = v11 != 0;
      __asan_report_store4(v9, v8, v9);
    }
    *v10 = v7;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1251: range 00000000161D9ED0-00000000161DA04B
uint32_t __cdecl WinterCampActivity::getSnowmanCompleteNum(WinterCampActivity *const this, uint32_t node_num)
{
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v2; // rax
  uint32_t num; // [rsp+18h] [rbp-68h]
  uint32_t total_count; // [rsp+1Ch] [rbp-64h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-50h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-48h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range; // [rsp+40h] [rbp-40h]
  std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *__in; // [rsp+48h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *gadget_id; // [rsp+50h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *item_count_map; // [rsp+58h] [rbp-28h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-20h]
  std::pair<unsigned int const,unsigned int> *v15; // [rsp+68h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+70h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+78h] [rbp-8h]

  num = 0;
  __for_range = &this->used_item_data_map_;
  __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->used_item_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->used_item_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
    item_count_map = std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
    total_count = 0;
    __for_range_0 = item_count_map;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(item_count_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      item_id = std::get<0ul,unsigned int const,unsigned int>(v15);
      v2 = std::get<1ul,unsigned int const,unsigned int>(v15);
      count = v2;
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v2);
      }
      total_count += *count;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    if ( total_count >= node_num )
      ++num;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  return num;
};

// Line 1269: range 00000000161DA04C-00000000161DAFF0
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl WinterCampActivity::onEditSnowmanCombinationReq(
        WinterCampActivity *const this,
        const proto::WinterCampEditSnowmanCombinationReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t GroupId; // esi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v27; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t GadgetId; // eax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  CustomGadgetComp *v35; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // r14
  google::protobuf::uint32 v39; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  const std::string *v41; // rax
  google::protobuf::uint32 v42; // eax
  Player *v43; // r14
  PlayerWatcherComp *WatcherComp; // rax
  int32_t result; // eax
  std::string reqa; // [rsp+0h] [rbp-290h] OVERLAPPED BYREF
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-270h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __for_end; // [rsp+28h] [rbp-268h] BYREF
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+30h] [rbp-260h]
  const proto::CustomGadgetTreeInfo *info; // [rsp+38h] [rbp-258h]
  const JsonConfigMgr *json_config_mgr; // [rsp+40h] [rbp-250h]
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *__for_range; // [rsp+48h] [rbp-248h]
  const proto::CustomCommonNodeInfo *node; // [rsp+50h] [rbp-240h]
  proto_log::PlantFlowerShelfSlotLog *slot_log; // [rsp+58h] [rbp-238h]
  std::shared_ptr<google::protobuf::Message> v55; // [rsp+60h] [rbp-230h] BYREF
  std::shared_ptr<google::protobuf::Message> v56; // [rsp+70h] [rbp-220h] BYREF
  common::milog::MiLogStream v57; // [rsp+80h] [rbp-210h] BYREF
  char v58[496]; // [rsp+A0h] [rbp-1F0h] BYREF

  reqa._M_string_length = (std::string::size_type)this;
  reqa._M_dataplus._M_p = (std::string::pointer)req;
  v2 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 11 holder:1328 64 4 14 entity_id:1282 80 16 14 scene_ptr:1270 112 16 15 gadget_ptr:1283 1"
                        "44 16 27 custom_gadget_comp_ptr:1289 176 16 12 log_ptr:1329 208 24 13 node_vec:1304 272 48 24 us"
                        "ed_item_count_map:1307 352 56 29 pass_part_item_count_map:1308";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::onEditSnowmanCombinationReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862730] = -218959118;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(reqa._M_string_length + 24);
  Player::getSceneComp(*(Player *const *)(reqa._M_string_length + 24));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onEditSnowmanCombinationReq",
      1273);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v57,
           (const char (*)[37])"[WinterCamp] scene_ptr is null, uid:");
    if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(reqa._M_string_length + 24);
    HIDWORD(reqa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v5,
      (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 1);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v6 = 555;
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    OwnerUid = Scene::getOwnerUid(v7);
    if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(reqa._M_string_length + 24);
    if ( OwnerUid == Player::getUid(*(const Player *const *)(reqa._M_string_length + 24)) )
    {
      *(_DWORD *)(v2 + 64) = proto::WinterCampEditSnowmanCombinationReq::entity_id((const proto::WinterCampEditSnowmanCombinationReq *const)reqa._M_dataplus._M_p);
      v13 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      Scene::findEntity<Gadget>((const Scene *const)(v2 + 112), v13);
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/winter_camp_activity.cpp",
          "onEditSnowmanCombinationReq",
          1286);
        v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v57,
                (const char (*)[42])"[WinterCamp] findEntity fails, entity_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(reqa._M_string_length + 24);
        HIDWORD(reqa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v16,
          (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 1);
        common::milog::MiLogStream::~MiLogStream(&v57);
        v6 = 504;
      }
      else
      {
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        EcsBase<Gadget,GadgetCompBase,28u>::findComp<CustomGadgetComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 144));
        if ( std::operator==<CustomGadgetComp>(0LL, (const std::shared_ptr<CustomGadgetComp> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "onEditSnowmanCombinationReq",
            1292);
          v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v57,
                  (const char (*)[24])"[WinterCamp] entity id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 64));
          v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v18, (const char (*)[22])off_25B940C0);
          v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(reqa._M_string_length + 24);
          HIDWORD(reqa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(reqa._M_string_length
                                                                                              + 24));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v20,
            (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 1);
          common::milog::MiLogStream::~MiLogStream(&v57);
          v6 = 10082;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v55);
          activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v55);
          v21 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          GroupId = Entity::getGroupId((const Entity *const)v21);
          if ( *(_BYTE *)(((reqa._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(reqa._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((reqa._M_string_length + 36) >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(reqa._M_string_length + 36);
          }
          if ( !ActivityWinterCampExcelConfigMgr::isValidGroupId(
                  activity_winter_camp_config_mgr,
                  *(_DWORD *)(reqa._M_string_length + 36),
                  GroupId) )
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/winter_camp_activity.cpp",
              "onEditSnowmanCombinationReq",
              1298);
            v23 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v57,
                    (const char (*)[24])"[WinterCamp] entity id:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v2 + 64));
            v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v24, (const char (*)[22])off_25B940C0);
            v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8(reqa._M_string_length + 24);
            HIDWORD(reqa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(reqa._M_string_length
                                                                                                + 24));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v26,
              (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 1);
            common::milog::MiLogStream::~MiLogStream(&v57);
            v6 = 10082;
          }
          else
          {
            info = proto::WinterCampEditSnowmanCombinationReq::combination_info((const proto::WinterCampEditSnowmanCombinationReq *const)reqa._M_dataplus._M_p);
            std::vector<std::shared_ptr<CustomCommonNodeData>>::vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v2 + 208));
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v56);
            json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.json_config_mgr;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v56);
            v27 = proto::CustomGadgetTreeInfo::node_list(info);
            v28 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            GadgetId = Gadget::getGadgetId(v28);
            JsonConfigMgr::convertCustomTreeInfo(
              json_config_mgr,
              GadgetId,
              v27,
              (std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v2 + 208));
            std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 272));
            std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v2 + 352));
            if ( JsonConfigMgr::checkCustomTreeInfo(
                   json_config_mgr,
                   (const std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v2 + 208),
                   (std::map<unsigned int,unsigned int> *)(v2 + 272),
                   (std::unordered_map<unsigned int,unsigned int> *)(v2 + 352)) )
            {
              common::milog::MiLogStream::create(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/winter_camp_activity.cpp",
                "onEditSnowmanCombinationReq",
                1311);
              v30 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      &v57,
                      (const char (*)[50])"[WinterCamp] checkCustomTreeInfo fail, gadget_id:");
              v31 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              *(_DWORD *)reqa._anon_0._M_local_buf = Gadget::getGadgetId(v31);
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v30,
                      (const unsigned int *)&reqa._anon_0);
              v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
              if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8(reqa._M_string_length + 24);
              HIDWORD(reqa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(reqa._M_string_length
                                                                                                  + 24));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v33,
                (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 1);
              common::milog::MiLogStream::~MiLogStream(&v57);
              v6 = 831;
            }
            else
            {
              v34 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Gadget::getGadgetId(v34);
              *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 3) = WinterCampActivity::checkUsedItemNumLimit(
                                                                       (WinterCampActivity *const)reqa._M_string_length,
                                                                       *((uint32_t *)&reqa._anon_0._M_allocated_capacity
                                                                       + 2),
                                                                       (const std::map<unsigned int,unsigned int> *)(v2 + 272));
              if ( *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 3) )
              {
                v6 = *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 3);
              }
              else
              {
                WinterCampActivity::updateActivityUsedItemInfo(
                  (WinterCampActivity *const)reqa._M_string_length,
                  *((uint32_t *)&reqa._anon_0._M_allocated_capacity + 2),
                  (std::map<unsigned int,unsigned int> *)(v2 + 272));
                BaseActivity::notifyClientData((BaseActivity *const)reqa._M_string_length, 0);
                v35 = std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                CustomGadgetComp::updateCustomGadgetInfo(v35, info);
                if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(reqa._M_string_length + 24);
                BasicComp = Player::getBasicComp(*(Player *const *)(reqa._M_string_length + 24));
                PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v57, BasicComp);
                StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDC9u, reqa);
                std::string::~string(&v57);
                common::tools::perf::make_shared<proto_log::PlayerLogBodyPlantFlowerCombinationEdit>();
                v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
                proto_log::PlayerLogBodyPlantFlowerCombinationEdit::set_gadget_config_id(
                  v37,
                  *((google::protobuf::uint32 *)&reqa._anon_0._M_allocated_capacity + 2));
                __for_range = proto::CustomGadgetTreeInfo::node_list(info);
                __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::begin(__for_range).it_;
                __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::end(__for_range).it_;
                while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator!=(
                          &__for_begin,
                          &__for_end) )
                {
                  node = google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator*(&__for_begin);
                  if ( proto::CustomCommonNodeInfo::parent_index(node) >= 0 )
                  {
                    v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
                    slot_log = proto_log::PlayerLogBodyPlantFlowerCombinationEdit::add_slot_log(v40);
                    v41 = proto::CustomCommonNodeInfo::slot_identifier[abi:cxx11](node);
                    proto_log::PlantFlowerShelfSlotLog::set_slot_identifier(slot_log, v41);
                    v42 = proto::CustomCommonNodeInfo::config_id(node);
                    proto_log::PlantFlowerShelfSlotLog::set_flower_id(slot_log, v42);
                  }
                  else
                  {
                    v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
                    v39 = proto::CustomCommonNodeInfo::config_id(node);
                    proto_log::PlayerLogBodyPlantFlowerCombinationEdit::set_flower_shelf_id(v38, v39);
                  }
                  google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator++(&__for_begin);
                }
                if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(reqa._M_string_length + 24);
                v43 = *(Player **)(reqa._M_string_length + 24);
                std::shared_ptr<google::protobuf::Message>::shared_ptr(&v56, 0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,void>(
                  &v55,
                  (const std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit> *)(v2 + 176));
                Player::printStatLog(v43, &v55, &v56, 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v55);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v56);
                std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit> *const)(v2 + 176));
                StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
                if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(reqa._M_string_length + 24);
                WatcherComp = Player::getWatcherComp(*(Player *const *)(reqa._M_string_length + 24));
                PlayerWatcherComp::triggerWinterCampSnowmanEdit(WatcherComp);
                v6 = 0;
              }
            }
            std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v2 + 352));
            std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 272));
            std::vector<std::shared_ptr<CustomCommonNodeData>>::~vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v2 + 208));
          }
        }
        std::shared_ptr<CustomGadgetComp>::~shared_ptr((std::shared_ptr<CustomGadgetComp> *const)(v2 + 144));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 112));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/winter_camp_activity.cpp",
        "onEditSnowmanCombinationReq",
        1278);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v57,
             (const char (*)[42])"[WinterCamp] not in self scene, OwnerUid:");
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      *(_DWORD *)reqa._anon_0._M_local_buf = Scene::getOwnerUid(v10);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v9,
              (const unsigned int *)&reqa._anon_0);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(reqa._M_string_length + 24);
      HIDWORD(reqa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v12,
        (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 1);
      common::milog::MiLogStream::~MiLogStream(&v57);
      v6 = 512;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  result = v6;
  if ( v58 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  return result;
};

// Line 1352: range 00000000161DAFF2-00000000161DB5ED
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl WinterCampActivity::setWishSet(
        WinterCampActivity *const this,
        const std::set<unsigned int> *wish_id_set)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rax
  _DWORD *v8; // rdx
  PlayerBasicComp *BasicComp; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerSetWish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // r14
  std::string wish_id_seta; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+28h] [rbp-F8h]
  const std::set<unsigned int> *item_id_set_ptr; // [rsp+30h] [rbp-F0h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-E0h]
  proto_log::PlantFlowerItemLog *flower_log; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v22; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+90h] [rbp-90h] BYREF

  wish_id_seta._M_string_length = (std::string::size_type)this;
  wish_id_seta._M_dataplus._M_p = (std::string::pointer)wish_id_set;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 11 holder:1370 48 4 12 item_id:1360 64 16 12 log_ptr:1371";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::setWishSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
  if ( *(_BYTE *)(((wish_id_seta._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(wish_id_seta._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((wish_id_seta._M_string_length + 36) >> 3)
                                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(wish_id_seta._M_string_length + 36);
  }
  item_id_set_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampSnowmanItemIdSet(
                      activity_winter_camp_config_mgr,
                      *(_DWORD *)(wish_id_seta._M_string_length + 36));
  if ( item_id_set_ptr )
  {
    __for_range = (const std::set<unsigned int> *)wish_id_seta._M_dataplus._M_p;
    *((std::set<unsigned int>::iterator *)&wish_id_seta._anon_0._M_allocated_capacity + 1) = std::set<unsigned int>::begin((const std::set<unsigned int> *const)wish_id_seta._M_dataplus._M_p);
    __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)wish_id_seta._M_dataplus._M_p)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&wish_id_seta._anon_0._M_allocated_capacity + 1,
              &__for_end) )
    {
      v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&wish_id_seta._anon_0._M_allocated_capacity + 1);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v2 + 48) = *v8;
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
              item_id_set_ptr,
              (const unsigned int *)(v2 + 48)) )
      {
        result = 10075;
        goto LABEL_25;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&wish_id_seta._anon_0._M_allocated_capacity + 1);
    }
    std::set<unsigned int>::operator=(
      (std::set<unsigned int> *const)(wish_id_seta._M_string_length + 1312),
      (const std::set<unsigned int> *)wish_id_seta._M_dataplus._M_p);
    if ( *(_BYTE *)(((wish_id_seta._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(wish_id_seta._M_string_length + 24);
    BasicComp = Player::getBasicComp(*(Player *const *)(wish_id_seta._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xDC8u, wish_id_seta);
    std::string::~string(&v23);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyPlantFlowerSetWish>();
    __for_range_0 = (std::set<unsigned int> *)(wish_id_seta._M_string_length + 1312);
    *((std::set<unsigned int>::iterator *)&wish_id_seta._anon_0._M_allocated_capacity + 1) = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(wish_id_seta._M_string_length + 1312));
    __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&wish_id_seta._anon_0._M_allocated_capacity + 1,
              &__for_end) )
    {
      v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&wish_id_seta._anon_0._M_allocated_capacity + 1);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      HIDWORD(wish_id_seta._anon_0._M_allocated_capacity) = *v11;
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerSetWish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerSetWish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      flower_log = proto_log::PlayerLogBodyPlantFlowerSetWish::add_flower_log(v12);
      proto_log::PlantFlowerItemLog::set_flower_id(flower_log, HIDWORD(wish_id_seta._anon_0._M_allocated_capacity));
      proto_log::PlantFlowerItemLog::set_flower_num(flower_log, 1u);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&wish_id_seta._anon_0._M_allocated_capacity + 1);
    }
    if ( *(_BYTE *)(((wish_id_seta._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(wish_id_seta._M_string_length + 24);
    v13 = *(Player **)(wish_id_seta._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v22, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPlantFlowerSetWish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerSetWish> *)(v2 + 64));
    Player::printStatLog(v13, &p_body_ptr, &v22, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v22);
    std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerSetWish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerSetWish> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/winter_camp_activity.cpp",
      "setWishSet",
      1357);
    v5 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v23,
           (const char (*)[65])"[WinterCamp] findWinterCampSnowmanItemIdSet fail. schedule_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v5,
      (const unsigned int *)(wish_id_seta._M_string_length + 36));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 5;
  }
LABEL_25:
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

// Line 1384: range 00000000161DB87A-00000000161DBC45
void __cdecl WinterCampActivity::initOfflineOp(WinterCampActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerOfflineOpComp *OfflineOpComp; // r14
  PlayerOfflineOpComp *v5; // r14
  proto::OfflineOpType op_type; // [rsp+1Ch] [rbp-C4h] BYREF
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+20h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v1 + 8) = "2 32 16 10 s_ptr:1387 64 16 10 w_ptr:1387";
  *(_QWORD *)(v1 + 16) = WinterCampActivity::initOfflineOp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<WinterCampActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<WinterCampActivity>::weak_ptr<WinterCampActivity,void>(
    (std::weak_ptr<WinterCampActivity> *const)(v1 + 64),
    (const std::shared_ptr<WinterCampActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  OfflineOpComp = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<WinterCampActivity>::weak_ptr(
    (std::weak_ptr<WinterCampActivity> *const)&v7,
    (const std::weak_ptr<WinterCampActivity> *)(v1 + 64));
  std::function<void ()(proto::SendOfflineOpRsp const&)>::function<WinterCampActivity::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1},void,void>(
    &p_func,
    (WinterCampActivity::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *)&v7);
  op_type = OFFLINE_OP_WINTER_CAMP_GIVE_ITEM;
  PlayerOfflineOpComp::registerSendRspCallBack(OfflineOpComp, &op_type, &p_func);
  std::function<void ()(proto::SendOfflineOpRsp const&)>::~function(&p_func);
  WinterCampActivity::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp((WinterCampActivity::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const)&v7);
  std::weak_ptr<WinterCampActivity>::~weak_ptr((std::weak_ptr<WinterCampActivity> *const)(v1 + 64));
  std::shared_ptr<WinterCampActivity>::~shared_ptr((std::shared_ptr<WinterCampActivity> *const)(v1 + 32));
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<WinterCampActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<WinterCampActivity>::weak_ptr<WinterCampActivity,void>(
    (std::weak_ptr<WinterCampActivity> *const)(v1 + 64),
    (const std::shared_ptr<WinterCampActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<WinterCampActivity>::weak_ptr(
    (std::weak_ptr<WinterCampActivity> *const)&v7,
    (const std::weak_ptr<WinterCampActivity> *)(v1 + 64));
  std::function<void ()(proto::OfflineOpBin const&)>::function<WinterCampActivity::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2},void,void>(
    (std::function<void(const proto::OfflineOpBin&)> *const)&p_func,
    (WinterCampActivity::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *)&v7);
  op_type = OFFLINE_OP_WINTER_CAMP_GIVE_ITEM;
  PlayerOfflineOpComp::registerExecOfflineOp(v5, &op_type, (PlayerOfflineOpComp::ExecFunc *)&p_func);
  std::function<void ()(proto::OfflineOpBin const&)>::~function((std::function<void(const proto::OfflineOpBin&)> *const)&p_func);
  WinterCampActivity::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin((WinterCampActivity::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const)&v7);
  std::weak_ptr<WinterCampActivity>::~weak_ptr((std::weak_ptr<WinterCampActivity> *const)(v1 + 64));
  std::shared_ptr<WinterCampActivity>::~shared_ptr((std::shared_ptr<WinterCampActivity> *const)(v1 + 32));
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

// Line 1386: range 000000001622C030-000000001622C055
void __cdecl WinterCampActivity::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        WinterCampActivity::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        WinterCampActivity::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<WinterCampActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 1386: range 000000001622C120-000000001622C145
void __cdecl WinterCampActivity::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        WinterCampActivity::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        const WinterCampActivity::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<WinterCampActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 1386: range 00000000161DB5EE-00000000161DB716
void __cdecl WinterCampActivity::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator()(
        const WinterCampActivity::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const __closure,
        const proto::SendOfflineOpRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  WinterCampActivity *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 s_ptr:1386";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<WinterCampActivity>::lock((const std::weak_ptr<WinterCampActivity> *const)(v2 + 32));
  if ( std::operator!=<WinterCampActivity>((const std::shared_ptr<WinterCampActivity> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    WinterCampActivity::onSendOfflineOpRsp(v5, rsp_0);
  }
  std::shared_ptr<WinterCampActivity>::~shared_ptr((std::shared_ptr<WinterCampActivity> *const)(v2 + 32));
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

// Line 1386: range 00000000161DB718-00000000161DB732
void __cdecl WinterCampActivity::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp(
        WinterCampActivity::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this)
{
  std::weak_ptr<WinterCampActivity>::~weak_ptr(&this->__w_ptr);
};

// Line 1387: range 000000001622C238-000000001622C25D
void __cdecl WinterCampActivity::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        WinterCampActivity::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this,
        WinterCampActivity::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<WinterCampActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 1387: range 000000001622C328-000000001622C34D
void __cdecl WinterCampActivity::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        WinterCampActivity::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this,
        const WinterCampActivity::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<WinterCampActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 1387: range 00000000161DB734-00000000161DB85C
void __cdecl WinterCampActivity::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::operator()(
        const WinterCampActivity::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const __closure,
        const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  WinterCampActivity *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 s_ptr:1387";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<WinterCampActivity>::lock((const std::weak_ptr<WinterCampActivity> *const)(v2 + 32));
  if ( std::operator!=<WinterCampActivity>((const std::shared_ptr<WinterCampActivity> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    WinterCampActivity::onOfflineOpExec(v5, bin);
  }
  std::shared_ptr<WinterCampActivity>::~shared_ptr((std::shared_ptr<WinterCampActivity> *const)(v2 + 32));
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

// Line 1387: range 00000000161DB85E-00000000161DB878
void __cdecl WinterCampActivity::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin(
        WinterCampActivity::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this)
{
  std::weak_ptr<WinterCampActivity>::~weak_ptr(&this->__w_ptr);
};

// Line 1391: range 00000000161DBC46-00000000161DBD10
void __cdecl WinterCampActivity::onSendOfflineOpRsp(
        WinterCampActivity *const this,
        const proto::SendOfflineOpRsp *rsp_0)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  if ( proto::SendOfflineOpRsp::retcode(rsp_0) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onSendOfflineOpRsp",
      1394);
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &rsp_0->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v2, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
};

// Line 1399: range 00000000161DBD12-00000000161DC447
void __cdecl WinterCampActivity::onOfflineOpExec(WinterCampActivity *const this, const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  google::protobuf::uint32 v8; // ecx
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // r14
  proto::OfflineOpBin::DetailCase *p_val; // rsi
  __int64 v13; // rdx
  char v14; // al
  google::protobuf::uint32 v15; // r14d
  std::map<unsigned int,unsigned int> *p_item_map; // r15
  unsigned __int64 v17; // rax
  proto::OfflineOpBin::DetailCase val; // [rsp+2Ch] [rbp-E4h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_begin; // [rsp+30h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  const proto::OfflineOpWinterCampActivityGiveItem *op_bin; // [rsp+40h] [rbp-D0h]
  WinterCampRecvItemData *recv_item_data; // [rsp+48h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range; // [rsp+50h] [rbp-C0h]
  const proto::ItemParamBin *item_bin; // [rsp+58h] [rbp-B8h]
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 11 notify:1430";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::onOfflineOpExec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onOfflineOpExec",
      1402);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[35])"[WinterCamp] activity is settled. ");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    goto LABEL_29;
  }
  if ( proto::OfflineOpBin::detail_case(bin) != kWinterCampGiveItemOp )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onOfflineOpExec",
      1407);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v25,
           (const char (*)[33])"[WinterCamp] detail case error :");
    val = proto::OfflineOpBin::detail_case(bin);
    v6 = common::milog::MiLogStream::operator<<<proto::OfflineOpBin::DetailCase,(proto::OfflineOpBin::DetailCase*)0>(
           v5,
           &val);
    v7 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v6, (const char (*)[2])" ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)(v2 + 32), &bin->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v2 + 32));
    std::string::~string((void *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_29;
  }
  op_bin = proto::OfflineOpBin::winter_camp_give_item_op(bin);
  v8 = proto::OfflineOpWinterCampActivityGiveItem::schedule_id(op_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  if ( v8 != this->schedule_id_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onOfflineOpExec",
      1413);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[38])"[WinterCamp] schedule_id_ not match. ");
    val = proto::OfflineOpWinterCampActivityGiveItem::schedule_id(op_bin);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)&val);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_13:
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    goto LABEL_29;
  }
  val = proto::OfflineOpWinterCampActivityGiveItem::uid(op_bin);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,WinterCampRecvItemData>,unsigned int>(
          &this->recv_item_data_map_,
          (const unsigned int *)&val)
    && std::map<unsigned int,WinterCampRecvItemData>::size(&this->recv_item_data_map_) > 0x15E )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onOfflineOpExec",
      1420);
    v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 32),
            (const char (*)[34])"[WinterCamp] too many recv item. ");
    __for_end.it_ = (void *const *)std::map<unsigned int,WinterCampRecvItemData>::size(&this->recv_item_data_map_);
    v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v11,
            (const unsigned __int64 *)&__for_end);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_13;
  }
  val = proto::OfflineOpWinterCampActivityGiveItem::uid(op_bin);
  p_val = &val;
  recv_item_data = std::map<unsigned int,WinterCampRecvItemData>::operator[](
                     &this->recv_item_data_map_,
                     (std::map<unsigned int,WinterCampRecvItemData>::key_type *)&val);
  v13 = proto::OfflineOpWinterCampActivityGiveItem::uid(op_bin);
  v14 = *(_BYTE *)(((unsigned __int64)recv_item_data >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_val) = v14 != 0;
    __asan_report_store4(recv_item_data, p_val, v13);
  }
  recv_item_data->uid = v13;
  __for_range = proto::OfflineOpWinterCampActivityGiveItem::item_bin_list(op_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*(&__for_begin);
    v15 = proto::ItemParamBin::count(item_bin);
    p_item_map = &recv_item_data->item_map;
    val = proto::ItemParamBin::item_id(item_bin);
    v17 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                              p_item_map,
                              (std::map<unsigned int,unsigned int>::key_type *)&val);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load4(v17);
    *(_DWORD *)v17 += v15;
    google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++(&__for_begin);
  }
  proto::WinterCampRecvItemNotify::WinterCampRecvItemNotify((proto::WinterCampRecvItemNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::WinterCampRecvItemNotify::~WinterCampRecvItemNotify((proto::WinterCampRecvItemNotify *const)(v2 + 32));
LABEL_29:
  if ( v26 == (char *)v2 )
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

// Line 1437: range 00000000161DC448-00000000161DD507
__int64 __fastcall WinterCampActivity::giveItemToFriend(
        WinterCampActivity *const this,
        __int32 uid,
        const std::map<unsigned int,unsigned int> *item_map,
        std::map<unsigned int,unsigned int> *friend_have_item_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerSocialComp *SocialComp; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  const HomeWorldExcelConfigMgr *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v12; // r14d
  __int64 v13; // rsi
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  uint32_t v18; // ecx
  char v19; // dl
  __int64 v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // eax
  PlayerOfflineOpComp *OfflineOpComp; // rax
  common::milog::MiLogStream *v25; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string friend_have_item_mapa; // [rsp+0h] [rbp-260h]
  WinterCampActivity *thisa; // [rsp+18h] [rbp-248h]
  uint32_t total_count; // [rsp+2Ch] [rbp-234h]
  std::vector<ItemParam>::iterator __for_begin; // [rsp+30h] [rbp-230h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+38h] [rbp-228h] BYREF
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+40h] [rbp-220h]
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+48h] [rbp-218h]
  const std::set<unsigned int> *item_id_set_ptr; // [rsp+50h] [rbp-210h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+58h] [rbp-208h]
  PlayerItemComp *item_comp; // [rsp+60h] [rbp-200h]
  proto::OfflineOpBin *offline_op_bin; // [rsp+68h] [rbp-1F8h]
  proto::OfflineOpWinterCampActivityGiveItem *give_item_op; // [rsp+70h] [rbp-1F0h]
  std::vector<ItemParam> *__for_range_0; // [rsp+78h] [rbp-1E8h]
  std::vector<ItemParam> *__for_range_1; // [rsp+80h] [rbp-1E0h]
  ItemParam *item_param_1; // [rsp+88h] [rbp-1D8h]
  proto_log::PlantFlowerItemLog *flower_log; // [rsp+90h] [rbp-1D0h]
  ItemParam *item_param_0; // [rsp+98h] [rbp-1C8h]
  proto::ItemParamBin *item_bin; // [rsp+A0h] [rbp-1C0h]
  const std::pair<unsigned int const,unsigned int> *v50; // [rsp+A8h] [rbp-1B8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+B0h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+B8h] [rbp-1A8h]
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+C0h] [rbp-1A0h]
  ItemParam *item_param; // [rsp+C8h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+D0h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v56; // [rsp+E0h] [rbp-180h] BYREF
  common::milog::MiLogStream v57; // [rsp+F0h] [rbp-170h] BYREF
  char v58[336]; // [rsp+110h] [rbp-150h] BYREF

  *(&friend_have_item_mapa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(friend_have_item_mapa._anon_0._M_allocated_capacity) = uid;
  friend_have_item_mapa._M_string_length = (std::string::size_type)item_map;
  friend_have_item_mapa._M_dataplus._M_p = (std::string::pointer)friend_have_item_map;
  v4 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 1 11 holder:1512 48 4 8 ret:1476 64 4 8 uid:1436 80 8 11 reason:1489 112 16 12 log_ptr:1513"
                        " 144 24 19 item_param_vec:1450 208 40 20 offline_op_data:1496";
  *(_QWORD *)(v4 + 16) = WinterCampActivity::giveItemToFriend;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SocialComp = Player::getSocialComp(this->player_);
  if ( !PlayerSocialComp::isPlayerFriend(SocialComp, *(_DWORD *)(v4 + 64)) )
  {
    v8 = 7008;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v56);
    activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v56);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v56);
    home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr.home_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v56);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    item_id_set_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampSnowmanItemIdSet(
                        activity_winter_camp_config_mgr,
                        this->schedule_id_);
    if ( item_id_set_ptr )
    {
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 144));
      __for_range = (const std::map<unsigned int,unsigned int> *)friend_have_item_mapa._M_string_length;
      __for_end._M_current = (ItemParam *)std::map<unsigned int,unsigned int>::begin((const std::map<unsigned int,unsigned int> *const)friend_have_item_mapa._M_string_length)._M_node;
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 80) = std::map<unsigned int,unsigned int>::end((const std::map<unsigned int,unsigned int> *const)friend_have_item_mapa._M_string_length);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 80)) )
      {
        v50 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
        item_id = std::get<0ul,unsigned int const,unsigned int>(v50);
        count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v50);
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(item_id_set_ptr, item_id) )
        {
          v8 = 10078;
          goto LABEL_72;
        }
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count);
        }
        if ( !*count )
        {
          v8 = 10078;
          goto LABEL_72;
        }
        v10 = home_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(v10, *item_id);
        if ( !furniture_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/winter_camp_activity.cpp",
            "giveItemToFriend",
            1464);
          v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  &v57,
                  (const char (*)[63])"[WinterCamp] findHomeWorldFurnitureExcelConfig fail. item_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, item_id);
          common::milog::MiLogStream::~MiLogStream(&v57);
          v8 = 5;
          goto LABEL_72;
        }
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count);
        }
        v12 = *count;
        total_count = v12
                    + common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
                        (const std::map<unsigned int,unsigned int> *)friend_have_item_mapa._M_dataplus._M_p,
                        item_id,
                        0);
        if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)furniture_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->stack_limit >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&furniture_config_ptr->stack_limit);
        }
        if ( total_count > furniture_config_ptr->stack_limit )
        {
          v8 = 10077;
          goto LABEL_72;
        }
        item_param = std::vector<ItemParam>::emplace_back<>((std::vector<ItemParam> *const)(v4 + 144));
        v13 = ((unsigned __int8)item_id & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        v14 = *item_id;
        v15 = *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000);
        LOBYTE(v13) = v15 != 0;
        v16 = (v15 != 0) & (unsigned __int8)((char)(((unsigned __int8)item_param & 7) + 3) >= v15);
        if ( (_BYTE)v16 )
          __asan_report_store4(item_param, v13, v16);
        item_param->item_id = v14;
        v17 = ((unsigned __int8)count & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count);
        }
        v18 = *count;
        v19 = *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000);
        LOBYTE(v17) = v19 != 0;
        v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)item_param + 4) & 7) + 3) >= v19);
        if ( (_BYTE)v20 )
          __asan_report_store4(&item_param->count, v17, v20);
        item_param->count = v18;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
      }
      *(_DWORD *)(v4 + 48) = WinterCampActivity::checkSnowmanItemCountValid(
                               this,
                               (const std::map<unsigned int,unsigned int> *)friend_have_item_mapa._M_string_length);
      if ( *(_DWORD *)(v4 + 48) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/winter_camp_activity.cpp",
          "giveItemToFriend",
          1479);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          &v57,
          (const char (*)[47])"[WinterCamp] checkSnowmanItemCountValid fail. ");
        common::milog::MiLogStream::~MiLogStream(&v57);
        v8 = *(_DWORD *)(v4 + 48);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        item_comp = Player::getItemComp(this->player_);
        *(_DWORD *)(v4 + 48) = PlayerItemComp::checkSubItemBatch(item_comp, (const std::vector<ItemParam> *)(v4 + 144));
        if ( *(_DWORD *)(v4 + 48) )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "giveItemToFriend",
            1486);
          v21 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v57,
                  (const char (*)[43])"[WinterCamp] checkSubItemBatch fail. ret: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v57);
          v8 = *(_DWORD *)(v4 + 48);
        }
        else
        {
          SubItemReason::SubItemReason((SubItemReason *const)(v4 + 80), ACTION_REASON_WINTER_CAMP_GIVE_ITEM);
          *(_DWORD *)(v4 + 48) = PlayerItemComp::subItemBatch(
                                   item_comp,
                                   (const std::vector<ItemParam> *)(v4 + 144),
                                   (const SubItemReason *)(v4 + 80));
          if ( *(_DWORD *)(v4 + 48) )
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/winter_camp_activity.cpp",
              "giveItemToFriend",
              1493);
            v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v57,
                    (const char (*)[38])"[WinterCamp] subItemBatch fail. ret: ");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v57);
            v8 = *(_DWORD *)(v4 + 48);
          }
          else
          {
            proto::OfflineOpData::OfflineOpData((proto::OfflineOpData *const)(v4 + 208));
            proto::OfflineOpData::set_max_length((proto::OfflineOpData *const)(v4 + 208), 0x32u);
            offline_op_bin = proto::OfflineOpData::mutable_bin((proto::OfflineOpData *const)(v4 + 208));
            give_item_op = proto::OfflineOpBin::mutable_winter_camp_give_item_op(offline_op_bin);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v23 = Player::getUid(this->player_);
            proto::OfflineOpWinterCampActivityGiveItem::set_uid(give_item_op, v23);
            if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->schedule_id_);
            }
            proto::OfflineOpWinterCampActivityGiveItem::set_schedule_id(give_item_op, this->schedule_id_);
            __for_range_0 = (std::vector<ItemParam> *)(v4 + 144);
            __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v4 + 144))._M_current;
            __for_end._M_current = std::vector<ItemParam>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin, &__for_end) )
            {
              item_param_0 = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
              item_bin = proto::OfflineOpWinterCampActivityGiveItem::add_item_bin_list(give_item_op);
              if ( *(_BYTE *)(((unsigned __int64)item_param_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)item_param_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param_0 >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(item_param_0);
              }
              proto::ItemParamBin::set_item_id(item_bin, item_param_0->item_id);
              if ( *(_BYTE *)(((unsigned __int64)&item_param_0->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)item_param_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param_0->count >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(&item_param_0->count);
              }
              proto::ItemParamBin::set_count(item_bin, item_param_0->count);
              __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            OfflineOpComp = Player::getOfflineOpComp(this->player_);
            PlayerOfflineOpComp::sendOfflineOp(
              OfflineOpComp,
              *(_DWORD *)(v4 + 64),
              OFFLINE_OP_WINTER_CAMP_GIVE_ITEM,
              (proto::OfflineOpData *)(v4 + 208));
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/winter_camp_activity.cpp",
              "giveItemToFriend",
              1510);
            v25 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v57,
                    (const char (*)[45])"[WinterCamp] giveItemToFriend success. uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream(&v57);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            BasicComp = Player::getBasicComp(this->player_);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v57, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder(
              (StatLogUtils::ContextHolder *const)(v4 + 32),
              0xDC7u,
              friend_have_item_mapa);
            std::string::~string(&v57);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyPlantFlowerNumChange>();
            v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
            proto_log::PlayerLogBodyPlantFlowerNumChange::set_interact_uid(v27, *(_DWORD *)(v4 + 64));
            v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
            proto_log::PlayerLogBodyPlantFlowerNumChange::set_reason(v28, 1u);
            __for_range_1 = (std::vector<ItemParam> *)(v4 + 144);
            __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v4 + 144))._M_current;
            __for_end._M_current = std::vector<ItemParam>::end(__for_range_1)._M_current;
            while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin, &__for_end) )
            {
              item_param_1 = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
              v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
              flower_log = proto_log::PlayerLogBodyPlantFlowerNumChange::add_flower_log(v29);
              if ( *(_BYTE *)(((unsigned __int64)item_param_1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)item_param_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param_1 >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(item_param_1);
              }
              proto_log::PlantFlowerItemLog::set_flower_id(flower_log, item_param_1->item_id);
              if ( *(_BYTE *)(((unsigned __int64)&item_param_1->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)item_param_1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param_1->count >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(&item_param_1->count);
              }
              proto_log::PlantFlowerItemLog::set_flower_num(flower_log, item_param_1->count);
              __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
            }
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            player = thisa->player_;
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v56, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange> *)(v4 + 112));
            Player::printStatLog(player, &p_body_ptr, &v56, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v56);
            std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange> *const)(v4 + 112));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
            v8 = 0;
            proto::OfflineOpData::~OfflineOpData((proto::OfflineOpData *const)(v4 + 208));
          }
        }
      }
LABEL_72:
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 144));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/winter_camp_activity.cpp",
        "giveItemToFriend",
        1447);
      v9 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
             &v57,
             (const char (*)[65])"[WinterCamp] findWinterCampSnowmanItemIdSet fail. schedule_id_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->schedule_id_);
      common::milog::MiLogStream::~MiLogStream(&v57);
      v8 = 5;
    }
  }
  result = v8;
  if ( v58 == (char *)v4 )
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
  return result;
};

// Line 1528: range 00000000161DD508-00000000161DD80C
__int64 __fastcall WinterCampActivity::getSnowmanOccupiedCount(WinterCampActivity *const this, uint32_t item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const unsigned int *v5; // rax
  _DWORD *v6; // rdx
  __int64 result; // rax
  unsigned int __b; // [rsp+1Ch] [rbp-D4h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range; // [rsp+30h] [rbp-C0h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_0; // [rsp+38h] [rbp-B8h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v13; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *__0; // [rsp+48h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *item_count_map_0; // [rsp+50h] [rbp-A0h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v16; // [rsp+58h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *_; // [rsp+60h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *item_count_map; // [rsp+68h] [rbp-88h]
  char v19[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 total_count:1529 64 4 12 item_id:1527";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::getSnowmanOccupiedCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = item_id;
  *(_DWORD *)(v2 + 48) = 0;
  __for_range = &this->used_item_data_map_;
  __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->used_item_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->used_item_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v16);
    item_count_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v16);
    *(_DWORD *)(v2 + 48) += common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
                              item_count_map,
                              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 64),
                              0);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->home_used_item_data_map_;
  __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->home_used_item_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
    __0 = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v13);
    item_count_map_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v13);
    __b = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
            item_count_map_0,
            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 64),
            0);
    v5 = std::max<unsigned int>((const unsigned int *)(v2 + 48), &__b);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 48) = *v6;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  result = *(unsigned int *)(v2 + 48);
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

// Line 1543: range 00000000161DD80E-00000000161DDB8B
int32_t __cdecl WinterCampActivity::checkSnowmanItemCountValid(
        WinterCampActivity *const this,
        const std::map<unsigned int,unsigned int> *item_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  PlayerItemComp *item_comp; // [rsp+28h] [rbp-B8h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-90h] BYREF
  char v19[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 total_count:1547";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::checkSnowmanItemCountValid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  item_comp = Player::getItemComp(this->player_);
  __for_range = item_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(item_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    item_id = std::get<0ul,unsigned int const,unsigned int>(v15);
    v5 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
    count = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v6 = *count;
    if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_id);
    }
    *(_DWORD *)(v2 + 32) = v6 + WinterCampActivity::getSnowmanOccupiedCount(this, *item_id);
    if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_id);
    }
    if ( PlayerItemComp::getItemCount(item_comp, *item_id) < *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/winter_camp_activity.cpp",
        "checkSnowmanItemCountValid",
        1550);
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v18,
             (const char (*)[35])"[WinterCamp] item not enough. id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, item_id);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" need_count: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = -1;
      goto LABEL_18;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
LABEL_18:
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

// Line 1558: range 00000000161DDB8C-00000000161DDEB3
void __cdecl WinterCampActivity::fillActivitySocialData(
        WinterCampActivity *const this,
        proto::ActivitySocialData *social_data)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  common::milog::MiLogStream *v3; // rax
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  uint32_t ItemCount; // eax
  unsigned int item_id; // [rsp+18h] [rbp-88h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  proto::WinterCampSocialData *winter_camp_social_data; // [rsp+30h] [rbp-70h]
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+38h] [rbp-68h]
  const std::set<unsigned int> *item_id_set_ptr; // [rsp+40h] [rbp-60h]
  PlayerItemComp *player_item_comp; // [rsp+48h] [rbp-58h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-50h]
  proto::ItemParamBin *have_item_bin; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v16; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  proto::ActivitySocialData::set_schedule_id(social_data, this->schedule_id_);
  winter_camp_social_data = proto::ActivitySocialData::mutable_winter_camp_data(social_data);
  v2 = proto::WinterCampSocialData::mutable_wish_item_id_list(winter_camp_social_data);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->wish_id_set_, v2);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  item_id_set_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampSnowmanItemIdSet(
                      activity_winter_camp_config_mgr,
                      this->schedule_id_);
  if ( item_id_set_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player_item_comp = Player::getItemComp(this->player_);
    __for_range = item_id_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(item_id_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(item_id_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      item_id = *v5;
      if ( PlayerItemComp::getItemCount(player_item_comp, *v5) )
      {
        have_item_bin = proto::WinterCampSocialData::add_have_item_bin_list(winter_camp_social_data);
        proto::ItemParamBin::set_item_id(have_item_bin, item_id);
        ItemCount = PlayerItemComp::getItemCount(player_item_comp, item_id);
        proto::ItemParamBin::set_count(have_item_bin, ItemCount);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/winter_camp_activity.cpp",
      "fillActivitySocialData",
      1569);
    v3 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v17,
           (const char (*)[65])"[WinterCamp] findWinterCampSnowmanItemIdSet fail. schedule_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
};

// Line 1586: range 00000000161DDEB4-00000000161DE17F
void __fastcall WinterCampActivity::fillRecvItemList(
        WinterCampActivity *const this,
        uint32_t uid,
        google::protobuf::RepeatedPtrField<proto::ItemParam> *item_list)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+40h] [rbp-A0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+48h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+50h] [rbp-90h]
  proto::ItemParam *item_param_proto; // [rsp+58h] [rbp-88h]
  char v14[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 uid:1585 64 8 9 iter:1587";
  *(_QWORD *)(v3 + 16) = WinterCampActivity::fillRecvItemList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::map<unsigned int,WinterCampRecvItemData>::iterator *)(v3 + 64) = std::map<unsigned int,WinterCampRecvItemData>::find(
                                                                            &this->recv_item_data_map_,
                                                                            (const std::map<unsigned int,WinterCampRecvItemData>::key_type *)(v3 + 48));
  __for_end._M_node = std::map<unsigned int,WinterCampRecvItemData>::end(&this->recv_item_data_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> >::_Self *)(v3 + 64),
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> >::_Self *)&__for_end) )
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> > *const)(v3 + 64))->second.item_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      item_id = std::get<0ul,unsigned int const,unsigned int>(__in);
      count = std::get<1ul,unsigned int const,unsigned int>(__in);
      item_param_proto = google::protobuf::RepeatedPtrField<proto::ItemParam>::Add(item_list);
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id);
      }
      proto::ItemParam::set_item_id(item_param_proto, *item_id);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count);
      }
      proto::ItemParam::set_count(item_param_proto, *count);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
  }
  if ( v14 == (char *)v3 )
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
};

// Line 1601: range 00000000161DE180-00000000161DE42B
int32_t __cdecl WinterCampActivity::fillCanGiveItem(
        WinterCampActivity *const this,
        google::protobuf::RepeatedPtrField<proto::ItemParam> *item_list)
{
  common::milog::MiLogStream *v2; // rax
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  uint32_t item_id; // [rsp+1Ch] [rbp-84h]
  uint32_t count; // [rsp+20h] [rbp-80h]
  uint32_t occupied_count; // [rsp+24h] [rbp-7Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+38h] [rbp-68h]
  const std::set<unsigned int> *item_id_set_ptr; // [rsp+40h] [rbp-60h]
  PlayerItemComp *item_comp; // [rsp+48h] [rbp-58h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-50h]
  proto::ItemParam *item_param; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v16; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+70h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  item_id_set_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampSnowmanItemIdSet(
                      activity_winter_camp_config_mgr,
                      this->schedule_id_);
  if ( item_id_set_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    item_comp = Player::getItemComp(this->player_);
    __for_range = item_id_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(item_id_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(item_id_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      item_id = *v5;
      count = PlayerItemComp::getItemCount(item_comp, *v5);
      occupied_count = WinterCampActivity::getSnowmanOccupiedCount(this, item_id);
      if ( count >= occupied_count )
      {
        item_param = google::protobuf::RepeatedPtrField<proto::ItemParam>::Add(item_list);
        proto::ItemParam::set_item_id(item_param, item_id);
        proto::ItemParam::set_count(item_param, count - occupied_count);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/winter_camp_activity.cpp",
      "fillCanGiveItem",
      1606);
    v2 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v17,
           (const char (*)[65])"[WinterCamp] findWinterCampSnowmanItemIdSet fail. schedule_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    return 5;
  }
};

// Line 1625: range 00000000161DE42C-00000000161DE4EB
void __cdecl WinterCampActivity::fillRecvItemUidList(
        WinterCampActivity *const this,
        google::protobuf::RepeatedField<unsigned int> *uid_list)
{
  std::map<unsigned int,WinterCampRecvItemData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,WinterCampRecvItemData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,WinterCampRecvItemData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,WinterCampRecvItemData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,WinterCampRecvItemData> >::type *uid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,WinterCampRecvItemData> >::type *recv_item_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->recv_item_data_map_;
  __for_begin._M_node = std::map<unsigned int,WinterCampRecvItemData>::begin(&this->recv_item_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,WinterCampRecvItemData>::end(&this->recv_item_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,WinterCampRecvItemData>(__in);
    recv_item_data = std::get<1ul,unsigned int const,WinterCampRecvItemData>(__in);
    if ( !std::map<unsigned int,unsigned int>::empty(&recv_item_data->item_map) )
      google::protobuf::RepeatedField<unsigned int>::Add(uid_list, uid);
    std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData>>::operator++(&__for_begin);
  }
};

// Line 1636: range 00000000161DE4EC-00000000161DE96C
void __cdecl WinterCampActivity::onServerGetFriendBriefRsp(
        WinterCampActivity *const this,
        const proto::ServerGetFriendBriefRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::ProfilePicture *v5; // r14
  const proto::ProfilePicture *v6; // rax
  const std::string *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  google::protobuf::int32 v14; // eax
  unsigned int val; // [rsp+1Ch] [rbp-124h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> >::_Self __y; // [rsp+30h] [rbp-110h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+38h] [rbp-108h]
  const proto::FriendBrief *friend_brief; // [rsp+40h] [rbp-100h]
  proto::WinterCampRecvItemData *recv_item_proto; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 uid:1646 48 8 9 iter:1647 80 48 8 rsp:1637";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::onServerGetFriendBriefRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  proto::WinterCampGetRecvItemListRsp::WinterCampGetRecvItemListRsp((proto::WinterCampGetRecvItemListRsp *const)(v2 + 80));
  if ( !proto::ServerGetFriendBriefRsp::retcode(server_rsp) )
  {
    __for_range = proto::ServerGetFriendBriefRsp::friend_brief_list(server_rsp);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*(&__for_begin);
      *(_DWORD *)(v2 + 32) = proto::FriendBrief::uid(friend_brief);
      *(std::map<unsigned int,WinterCampRecvItemData>::iterator *)(v2 + 48) = std::map<unsigned int,WinterCampRecvItemData>::find(
                                                                                &this->recv_item_data_map_,
                                                                                (const std::map<unsigned int,WinterCampRecvItemData>::key_type *)(v2 + 32));
      __y._M_node = std::map<unsigned int,WinterCampRecvItemData>::end(&this->recv_item_data_map_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> >::_Self *)(v2 + 48),
             &__y) )
      {
        recv_item_proto = proto::WinterCampGetRecvItemListRsp::add_recv_item_data_list((proto::WinterCampGetRecvItemListRsp *const)(v2 + 80));
        proto::WinterCampRecvItemData::set_uid(recv_item_proto, *(_DWORD *)(v2 + 32));
        v5 = proto::WinterCampRecvItemData::mutable_profile_picture(recv_item_proto);
        v6 = proto::FriendBrief::profile_picture(friend_brief);
        proto::ProfilePicture::CopyFrom(v5, v6);
        v7 = proto::FriendBrief::nickname[abi:cxx11](friend_brief);
        proto::WinterCampRecvItemData::set_nickname(recv_item_proto, v7);
        v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> > *const)(v2 + 48));
        WinterCampRecvItemData::toClient(&v8->second, recv_item_proto);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/winter_camp_activity.cpp",
          "onServerGetFriendBriefRsp",
          1658);
        v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v22,
               (const char (*)[51])"[WinterCamp] recv item data not found, friend uid:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])"schedule_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->schedule_id_);
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++(&__for_begin);
    }
  }
  v14 = proto::ServerGetFriendBriefRsp::retcode(server_rsp);
  proto::WinterCampGetRecvItemListRsp::set_retcode((proto::WinterCampGetRecvItemListRsp *const)(v2 + 80), v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
  proto::WinterCampGetRecvItemListRsp::~WinterCampGetRecvItemListRsp((proto::WinterCampGetRecvItemListRsp *const)(v2 + 80));
  if ( v23 == (char *)v2 )
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

// Line 1669: range 00000000161DE96E-00000000161DF980
__int64 __fastcall WinterCampActivity::onAcceptRecvItem(
        WinterCampActivity *const this,
        __int32 uid,
        proto::WinterCampAcceptItemResultInfo *result_info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rsi
  uint32_t v12; // ecx
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  uint32_t v16; // ecx
  char v17; // dl
  __int64 v18; // rdx
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v19; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v21; // rcx
  proto::ItemParam *v22; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v23; // rax
  _DWORD *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // ecx
  int v31; // r14d
  ItemParam *v32; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v33; // rax
  _DWORD *v34; // rdx
  char v35; // cl
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v36; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v43; // [rsp+0h] [rbp-230h]
  WinterCampActivity *thisa; // [rsp+18h] [rbp-218h]
  int32_t ret; // [rsp+24h] [rbp-20Ch]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-208h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-200h] BYREF
  const ActivityWinterCampExcelConfigMgr *activity_winter_camp_config_mgr; // [rsp+38h] [rbp-1F8h]
  const std::set<unsigned int> *item_id_set_ptr; // [rsp+40h] [rbp-1F0h]
  WinterCampRecvItemData *recv_item_data; // [rsp+48h] [rbp-1E8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-1E0h]
  std::vector<ItemParam> *__for_range_0; // [rsp+58h] [rbp-1D8h]
  std::vector<ItemParam> *__for_range_1; // [rsp+60h] [rbp-1D0h]
  ItemParam *item_param_1; // [rsp+68h] [rbp-1C8h]
  proto_log::PlantFlowerItemLog *flower_log; // [rsp+70h] [rbp-1C0h]
  ItemParam *item_param_0; // [rsp+78h] [rbp-1B8h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+80h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+88h] [rbp-1A8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+90h] [rbp-1A0h]
  ItemParam *item_param; // [rsp+98h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+A0h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v62; // [rsp+B0h] [rbp-180h] BYREF
  common::milog::MiLogStream v63; // [rsp+C0h] [rbp-170h] BYREF
  char v64[336]; // [rsp+E0h] [rbp-150h] BYREF

  *(&v43._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v43._anon_0._M_allocated_capacity) = uid;
  v43._M_string_length = (std::string::size_type)result_info;
  v3 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 1 11 holder:1752 64 4 10 count:1725 80 4 8 uid:1668 96 8 9 iter:1676 128 16 12 log_ptr:1753"
                        " 160 24 19 item_param_vec:1690 224 24 18 action_reason:1714";
  *(_QWORD *)(v3 + 16) = WinterCampActivity::onAcceptRecvItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 80) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::getUid(this->player_) == *(_DWORD *)(v3 + 80) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/winter_camp_activity.cpp",
      "onAcceptRecvItem",
      1672);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v63, (const char (*)[22])"target cannot be self");
    common::milog::MiLogStream::~MiLogStream(&v63);
    v6 = -1;
  }
  else
  {
    proto::WinterCampAcceptItemResultInfo::set_uid(
      (proto::WinterCampAcceptItemResultInfo *const)v43._M_string_length,
      *(_DWORD *)(v3 + 80));
    *(std::map<unsigned int,WinterCampRecvItemData>::iterator *)(v3 + 96) = std::map<unsigned int,WinterCampRecvItemData>::find(
                                                                              &this->recv_item_data_map_,
                                                                              (const std::map<unsigned int,WinterCampRecvItemData>::key_type *)(v3 + 80));
    __for_end._M_node = std::map<unsigned int,WinterCampRecvItemData>::end(&this->recv_item_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> >::_Self *)(v3 + 96),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> >::_Self *)&__for_end) )
    {
      v6 = 10076;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v62);
      activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v62);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      item_id_set_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampSnowmanItemIdSet(
                          activity_winter_camp_config_mgr,
                          this->schedule_id_);
      if ( item_id_set_ptr )
      {
        recv_item_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WinterCampRecvItemData> > *const)(v3 + 96))->second;
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 160));
        __for_range = &recv_item_data->item_map;
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&recv_item_data->item_map)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          item_id = std::get<0ul,unsigned int const,unsigned int>(__in);
          count = std::get<1ul,unsigned int const,unsigned int>(__in);
          if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                  item_id_set_ptr,
                  item_id) )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/winter_camp_activity.cpp",
              "onAcceptRecvItem",
              1695);
            v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                   &v63,
                   (const char (*)[41])"[WinterCamp] recvitem invalid. item_id: ");
            v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, item_id);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v9,
                    (const char (*)[16])" schedule_id_: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->schedule_id_);
            common::milog::MiLogStream::~MiLogStream(&v63);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(count);
            }
            if ( *count )
            {
              item_param = std::vector<ItemParam>::emplace_back<>((std::vector<ItemParam> *const)(v3 + 160));
              v11 = ((unsigned __int8)item_id & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(item_id);
              }
              v12 = *item_id;
              v13 = *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000);
              LOBYTE(v11) = v13 != 0;
              v14 = (v13 != 0) & (unsigned __int8)((char)(((unsigned __int8)item_param & 7) + 3) >= v13);
              if ( (_BYTE)v14 )
                __asan_report_store4(item_param, v11, v14);
              item_param->item_id = v12;
              v15 = ((unsigned __int8)count & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(count);
              }
              v16 = *count;
              v17 = *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000);
              LOBYTE(v15) = v17 != 0;
              v18 = (v17 != 0) & (unsigned __int8)((char)((((_BYTE)item_param + 4) & 7) + 3) >= v17);
              if ( (_BYTE)v18 )
                __asan_report_store4(&item_param->count, v15, v18);
              item_param->count = v16;
            }
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/winter_camp_activity.cpp",
            "onAcceptRecvItem",
            1709);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v63,
            (const char (*)[39])"[WinterCamp] item_param_vec is empty. ");
          common::milog::MiLogStream::~MiLogStream(&v63);
          v19 = proto::WinterCampAcceptItemResultInfo::mutable_unaccept_item_list((proto::WinterCampAcceptItemResultInfo *const)v43._M_string_length);
          WinterCampActivity::fillRecvItemList(this, *(_DWORD *)(v3 + 80), v19);
          v6 = 0;
        }
        else
        {
          ActionReason::ActionReason(
            (ActionReason *const)(v3 + 224),
            ACTION_REASON_WINTER_CAMP_RECV_ITEM,
            ITEM_LIMIT_WINTER_CAMP_REWARD);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = Player::getItemComp(this->player_);
          ret = PlayerItemComp::addItemBatchWithStackLimit(
                  ItemComp,
                  (std::vector<ItemParam> *)(v3 + 160),
                  (const ActionReason *)(v3 + 224),
                  0LL);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/winter_camp_activity.cpp",
              "onAcceptRecvItem",
              1718);
            v21 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v63,
                    (const char (*)[47])"[WinterCamp] addItemBatchWithStackLimit fail. ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v21, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v63);
            v6 = ret;
          }
          else
          {
            __for_range_0 = (std::vector<ItemParam> *)(v3 + 160);
            __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 160))._M_current;
            __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<ItemParam>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                      (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
            {
              item_param_0 = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
              v22 = proto::WinterCampAcceptItemResultInfo::add_accept_item_list((proto::WinterCampAcceptItemResultInfo *const)v43._M_string_length);
              ItemParam::toClient(item_param_0, v22);
              v23 = std::map<unsigned int,unsigned int>::operator[](&recv_item_data->item_map, &item_param_0->item_id);
              v24 = v23;
              if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v23);
              }
              *(_DWORD *)(v3 + 64) = *v24;
              if ( *(_BYTE *)(((unsigned __int64)&item_param_0->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)item_param_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param_0->count >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(&item_param_0->count);
              }
              if ( item_param_0->count <= *(_DWORD *)(v3 + 64) )
              {
                v30 = *(_DWORD *)(v3 + 64);
                if ( *(_BYTE *)(((unsigned __int64)&item_param_0->count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)item_param_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param_0->count >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(&item_param_0->count);
                }
                *(_DWORD *)(v3 + 64) = v30 - item_param_0->count;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v63,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/winter_camp_activity.cpp",
                  "onAcceptRecvItem",
                  1728);
                v25 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v63,
                        (const char (*)[47])"[WinterCamp] count < item_param.count. count: ");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v3 + 64));
                v27 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v26,
                        (const char (*)[20])" item_param.count: ");
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &item_param_0->count);
                v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &item_param_0->item_id);
                common::milog::MiLogStream::~MiLogStream(&v63);
                *(_DWORD *)(v3 + 64) = 0;
              }
              if ( *(_DWORD *)(v3 + 64) )
              {
                v31 = *(_DWORD *)(v3 + 64);
                v32 = item_param_0;
                v33 = std::map<unsigned int,unsigned int>::operator[](&recv_item_data->item_map, &item_param_0->item_id);
                v34 = v33;
                v35 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
                if ( v35 != 0 && (char)(((unsigned __int8)v33 & 7) + 3) >= v35 )
                {
                  LOBYTE(v32) = v35 != 0;
                  __asan_report_store4(v33, v32, v33);
                }
                *v34 = v31;
              }
              else
              {
                std::map<unsigned int,unsigned int>::erase(&recv_item_data->item_map, &item_param_0->item_id);
              }
              __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
            }
            v36 = proto::WinterCampAcceptItemResultInfo::mutable_unaccept_item_list((proto::WinterCampAcceptItemResultInfo *const)v43._M_string_length);
            WinterCampActivity::fillRecvItemList(this, *(_DWORD *)(v3 + 80), v36);
            if ( std::map<unsigned int,unsigned int>::empty(&recv_item_data->item_map) )
              std::map<unsigned int,WinterCampRecvItemData>::erase(
                &this->recv_item_data_map_,
                (const std::map<unsigned int,WinterCampRecvItemData>::key_type *)(v3 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            BasicComp = Player::getBasicComp(this->player_);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v63, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDC7u, v43);
            std::string::~string(&v63);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyPlantFlowerNumChange>();
            v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            proto_log::PlayerLogBodyPlantFlowerNumChange::set_interact_uid(v38, *(_DWORD *)(v3 + 80));
            v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            proto_log::PlayerLogBodyPlantFlowerNumChange::set_reason(v39, 2u);
            __for_range_1 = (std::vector<ItemParam> *)(v3 + 160);
            __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 160))._M_current;
            __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<ItemParam>::end(__for_range_1)._M_current;
            while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                      (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
            {
              item_param_1 = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
              v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              flower_log = proto_log::PlayerLogBodyPlantFlowerNumChange::add_flower_log(v40);
              if ( *(_BYTE *)(((unsigned __int64)item_param_1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)item_param_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param_1 >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(item_param_1);
              }
              proto_log::PlantFlowerItemLog::set_flower_id(flower_log, item_param_1->item_id);
              if ( *(_BYTE *)(((unsigned __int64)&item_param_1->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)item_param_1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param_1->count >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(&item_param_1->count);
              }
              proto_log::PlantFlowerItemLog::set_flower_num(flower_log, item_param_1->count);
              __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
            }
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            player = thisa->player_;
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v62, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange> *)(v3 + 128));
            Player::printStatLog(player, &p_body_ptr, &v62, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v62);
            std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange> *const)(v3 + 128));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
            v6 = 0;
          }
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 160));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/winter_camp_activity.cpp",
          "onAcceptRecvItem",
          1685);
        v7 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
               &v63,
               (const char (*)[65])"[WinterCamp] findWinterCampSnowmanItemIdSet fail. schedule_id_: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->schedule_id_);
        common::milog::MiLogStream::~MiLogStream(&v63);
        v6 = 5;
      }
    }
  }
  result = v6;
  if ( v64 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1768: range 00000000161DF982-00000000161DFC4A
int32_t __cdecl WinterCampActivity::onAcceptAllRecvItemReq(
        WinterCampActivity *const this,
        proto::WinterCampAcceptAllGiveItemRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rax
  __int32 *v6; // rdx
  proto::WinterCampAcceptItemResultInfo *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  int32_t result; // eax
  __int32 uid; // [rsp+14h] [rbp-ECh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 8 ret:1772 64 24 12 uid_vec:1769";
  *(_QWORD *)(v2 + 16) = WinterCampActivity::onAcceptAllRecvItemReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,WinterCampRecvItemData>>(
    (std::vector<unsigned int> *)(v2 + 64),
    &this->recv_item_data_map_);
  __for_range = (std::vector<unsigned int> *)(v2 + 64);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = (__int32 *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    uid = *v6;
    v7 = proto::WinterCampAcceptAllGiveItemRsp::add_accept_item_result_info(rsp_0);
    *(_DWORD *)(v2 + 48) = WinterCampActivity::onAcceptRecvItem(this, uid, v7);
    if ( *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/winter_camp_activity.cpp",
        "onAcceptAllRecvItemReq",
        1775);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v15,
             (const char (*)[42])"[WinterCamp] accept recv item fail. ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v9 = *(_DWORD *)(v2 + 48);
      goto LABEL_12;
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v9 = 0;
LABEL_12:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  result = v9;
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
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/treasure_seelie_activity.cpp

// Line 31: range 0000000018010F04-0000000018011133
int32_t __cdecl TreasureSeelieActivity::fromScheduleBin(
        TreasureSeelieActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  google::protobuf::RepeatedPtrField<proto::TreasureSeelieRegionBin>::const_iterator *p_for_end; // rsi
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::key_type *p_k; // rsi
  unsigned int v7; // eax
  __int64 v8; // rdx
  char v9; // al
  bool is_done; // cl
  char v11; // dl
  __int64 v12; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  char v16; // al
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::key_type __k; // [rsp+1Ch] [rbp-44h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureSeelieRegionBin>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::RepeatedPtrField<proto::TreasureSeelieRegionBin>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const proto::TreasureSeelieScheduleBin *schedule_bin; // [rsp+30h] [rbp-30h]
  const google::protobuf::RepeatedPtrField<proto::TreasureSeelieRegionBin> *__for_range; // [rsp+38h] [rbp-28h]
  const proto::TreasureSeelieRegionBin *region_bin; // [rsp+40h] [rbp-20h]
  TreasureSeelieActivity::RegionData *region_data; // [rsp+48h] [rbp-18h]

  schedule_bin = proto::ActivityScheduleBin::treasure_seelie_bin(bin);
  v2 = proto::TreasureSeelieScheduleBin::coin_num(schedule_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->coin_num_, bin, v4);
  this->coin_num_ = v2;
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::clear(&this->open_day_to_region_map_);
  __for_range = proto::TreasureSeelieScheduleBin::region_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TreasureSeelieRegionBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TreasureSeelieRegionBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::TreasureSeelieRegionBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    region_bin = google::protobuf::internal::RepeatedPtrIterator<proto::TreasureSeelieRegionBin const>::operator*(&__for_begin);
    __k = proto::TreasureSeelieRegionBin::open_day(region_bin);
    p_k = &__k;
    region_data = std::map<unsigned int,TreasureSeelieActivity::RegionData>::operator[](
                    &this->open_day_to_region_map_,
                    &__k);
    LOBYTE(v7) = proto::TreasureSeelieRegionBin::is_open(region_bin);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)region_data >> 3) + 0x7FFF8000);
    if ( v9 < 0 )
    {
      LOBYTE(p_k) = v9 != 0;
      __asan_report_store1(region_data, p_k, v8);
    }
    region_data->is_open = v8;
    is_done = proto::TreasureSeelieRegionBin::is_done(region_bin);
    v11 = *(_BYTE *)(((unsigned __int64)&region_data->is_done >> 3) + 0x7FFF8000);
    LOBYTE(p_k) = v11 != 0;
    v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)region_data + 1) & 7) >= v11);
    if ( (_BYTE)v12 )
      __asan_report_store1(&region_data->is_done, p_k, v12);
    region_data->is_done = is_done;
    v13 = proto::TreasureSeelieRegionBin::opened_chest_config_id_list(region_bin);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
      &region_data->opened_chest_config_id_set,
      v13);
    google::protobuf::internal::RepeatedPtrIterator<proto::TreasureSeelieRegionBin const>::operator++(&__for_begin);
  }
  LOBYTE(v14) = proto::TreasureSeelieScheduleBin::is_content_closed(schedule_bin);
  v15 = v14;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(p_for_end) = v16 != 0;
    __asan_report_store1(&this->is_content_closed_, p_for_end, v15);
  }
  this->is_content_closed_ = v15;
  return 0;
};

// Line 47: range 0000000018011134-000000001801139F
int32_t __cdecl TreasureSeelieActivity::toScheduleBin(
        const TreasureSeelieActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::TreasureSeelieScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,TreasureSeelieActivity::RegionData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,TreasureSeelieActivity::RegionData> *v8; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,TreasureSeelieActivity::RegionData> >::type *open_day; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,TreasureSeelieActivity::RegionData> >::type *region_data; // [rsp+40h] [rbp-10h]
  proto::TreasureSeelieRegionBin *region_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_treasure_seelie_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin_num_);
  }
  proto::TreasureSeelieScheduleBin::set_coin_num(schedule_bin, this->coin_num_);
  __for_range = &this->open_day_to_region_map_;
  __for_begin._M_node = std::map<unsigned int,TreasureSeelieActivity::RegionData>::begin(&this->open_day_to_region_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TreasureSeelieActivity::RegionData>::end(&this->open_day_to_region_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TreasureSeelieActivity::RegionData>>::operator*(&__for_begin);
    open_day = std::get<0ul,unsigned int const,TreasureSeelieActivity::RegionData>(v8);
    region_data = (std::tuple_element<1,const std::pair<unsigned int const,TreasureSeelieActivity::RegionData> >::type *)std::get<1ul,unsigned int const,TreasureSeelieActivity::RegionData>(v8);
    region_bin = proto::TreasureSeelieScheduleBin::add_region_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)open_day >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)open_day & 7) + 3) >= *(_BYTE *)(((unsigned __int64)open_day >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(open_day);
    }
    proto::TreasureSeelieRegionBin::set_open_day(region_bin, *open_day);
    if ( *(char *)(((unsigned __int64)region_data >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(region_data);
    proto::TreasureSeelieRegionBin::set_is_open(region_bin, region_data->is_open);
    if ( *(_BYTE *)(((unsigned __int64)&region_data->is_done >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)region_data + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&region_data->is_done >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&region_data->is_done);
    }
    proto::TreasureSeelieRegionBin::set_is_done(region_bin, region_data->is_done);
    v2 = proto::TreasureSeelieRegionBin::mutable_opened_chest_config_id_list(region_bin);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
      &region_data->opened_chest_config_id_set,
      v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,TreasureSeelieActivity::RegionData>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::TreasureSeelieScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  return 0;
};

// Line 63: range 0000000018011490-000000001801207C
int32_t __cdecl TreasureSeelieActivity::toClient(
        TreasureSeelieActivity *const this,
        proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  int32_t result; // eax
  ActivityTreasureSeelieExcelConfigMgr *p_activity_treasure_seelie_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rdx
  ActivityTreasureSeelieExcelConfigMgr *v9; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  const ActivityTreasureSeelieExcelConfigMgr *p_schedule_id; // rdi
  uint32_t v13; // ecx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  uint32_t v16; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  google::protobuf::uint32 v18; // eax
  std::set<unsigned int> *p_opened_chest_config_id_set; // r14
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v21; // rax
  google::protobuf::uint32 v22; // eax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  LuaConfigMgr *v24; // rcx
  google::protobuf::uint32 SceneIdByGroupId; // eax
  Vector3 *p_pos; // r14
  proto::Vector *v27; // rax
  uint32_t v28; // ecx
  uint32_t v29; // eax
  uint32_t opened_chest_num; // [rsp+2Ch] [rbp-104h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  const data::TreasureSeelieExcelConfig *config_ptr; // [rsp+40h] [rbp-F0h]
  proto::TreasureSeelieActivityDetailInfo *detail_info; // [rsp+48h] [rbp-E8h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-E0h]
  const data::TreasureSeelieRegionExcelConfig *region_config_ptr; // [rsp+58h] [rbp-D8h]
  const std::vector<unsigned int> *config_chest_vec; // [rsp+60h] [rbp-D0h]
  proto::TreasureSeelieRegionData *region_data; // [rsp+68h] [rbp-C8h]
  const TreasureSeelieActivity::RegionData *region_ptr; // [rsp+70h] [rbp-C0h]
  const std::set<unsigned int> *opened_chest_set; // [rsp+78h] [rbp-B8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+80h] [rbp-B0h]
  const RegionScriptConfig *region_script_config_ptr; // [rsp+88h] [rbp-A8h]
  std::shared_ptr<Config> v44; // [rsp+90h] [rbp-A0h] BYREF
  common::milog::MiLogStream v45; // [rsp+A0h] [rbp-90h] BYREF
  char v46[112]; // [rsp+C0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 open_day:76";
  *(_QWORD *)(v2 + 16) = TreasureSeelieActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_seelie_activity.cpp",
      "toClient",
      66);
    v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v45,
           (const char (*)[49])"[TREASURE_SEELIE] BaseActivity::toClient fails: ");
    common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v45);
    result = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v44);
    p_activity_treasure_seelie_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.activity_treasure_seelie_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    config_ptr = data::ActivityTreasureSeelieExcelConfigMgrBase::findTreasureSeelieExcelConfig(
                   p_activity_treasure_seelie_config_mgr,
                   this->schedule_id_);
    std::shared_ptr<Config>::~shared_ptr(&v44);
    if ( config_ptr )
    {
      detail_info = proto::ActivityInfo::mutable_treasure_seelie_info(activity_info);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v44);
      v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.activity_treasure_seelie_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      __for_range = ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(v9, this->schedule_id_);
      std::shared_ptr<Config>::~shared_ptr(&v44);
      __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        *(_DWORD *)(v2 + 32) = *v11;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v44);
        p_schedule_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.activity_treasure_seelie_config_mgr;
        v13 = *(_DWORD *)(v2 + 32);
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          p_schedule_id = (const ActivityTreasureSeelieExcelConfigMgr *)&this->schedule_id_;
          __asan_report_load4(&this->schedule_id_);
        }
        region_config_ptr = ActivityTreasureSeelieExcelConfigMgr::findRegionConfigByScheduleIdAndOpenDay(
                              p_schedule_id,
                              this->schedule_id_,
                              v13);
        std::shared_ptr<Config>::~shared_ptr(&v44);
        if ( region_config_ptr )
        {
          config_chest_vec = &region_config_ptr->chest_config_id_list;
          region_data = proto::TreasureSeelieActivityDetailInfo::add_region_data_list(detail_info);
          proto::TreasureSeelieRegionData::set_open_day(region_data, *(_DWORD *)(v2 + 32));
          v16 = *(_DWORD *)(v2 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->schedule_id_);
          }
          BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v16);
          proto::TreasureSeelieRegionData::set_open_time(region_data, BeginTimeByOpenDay);
          v18 = std::vector<unsigned int>::size(config_chest_vec);
          proto::TreasureSeelieRegionData::set_total_chest_num(region_data, v18);
          region_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,TreasureSeelieActivity::RegionData>>(
                         &this->open_day_to_region_map_,
                         (const std::map<unsigned int,TreasureSeelieActivity::RegionData>::key_type *)(v2 + 32));
          if ( region_ptr )
          {
            if ( *(char *)(((unsigned __int64)region_ptr >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(region_ptr);
            proto::TreasureSeelieRegionData::set_is_open(region_data, region_ptr->is_open);
            opened_chest_set = &region_ptr->opened_chest_config_id_set;
            p_opened_chest_config_id_set = &region_ptr->opened_chest_config_id_set;
            M_current = std::vector<unsigned int>::end(config_chest_vec)._M_current;
            v21._M_current = std::vector<unsigned int>::begin(config_chest_vec)._M_current;
            opened_chest_num = std::count_if<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,TreasureSeelieActivity::toClient(proto::ActivityInfo &)::{lambda(unsigned int)#1}>(
                                 v21,
                                 (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                 (TreasureSeelieActivity::toClient::<lambda(uint32_t)>)p_opened_chest_config_id_set);
            if ( *(_BYTE *)(((unsigned __int64)&region_ptr->is_done >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)region_ptr + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&region_ptr->is_done >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load1(&region_ptr->is_done);
            }
            if ( region_ptr->is_done )
              v22 = proto::TreasureSeelieRegionData::total_chest_num(region_data);
            else
              v22 = opened_chest_num;
            proto::TreasureSeelieRegionData::set_opened_chest_num(region_data, v22);
            if ( *(_BYTE *)(((unsigned __int64)&region_ptr->is_done >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)region_ptr + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&region_ptr->is_done >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load1(&region_ptr->is_done);
            }
            proto::TreasureSeelieRegionData::set_is_done(region_data, region_ptr->is_done);
          }
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->id);
          }
          proto::TreasureSeelieRegionData::set_region_id(region_data, region_config_ptr->id);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v44);
          p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.lua_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->chest_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->chest_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->chest_group_id);
          }
          group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                      p_lua_config_mgr,
                                      region_config_ptr->chest_group_id);
          std::shared_ptr<Config>::~shared_ptr(&v44);
          if ( group_script_config_ptr )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v44);
            v24 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.lua_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->chest_group_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config_ptr->chest_group_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&region_config_ptr->chest_group_id);
            }
            SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(v24, region_config_ptr->chest_group_id);
            proto::TreasureSeelieRegionData::set_scene_id(region_data, SceneIdByGroupId);
            std::shared_ptr<Config>::~shared_ptr(&v44);
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->play_region_config_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config_ptr->play_region_config_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&region_config_ptr->play_region_config_id);
            }
            region_script_config_ptr = GroupScriptConfig::findRegionConfig(
                                         group_script_config_ptr,
                                         region_config_ptr->play_region_config_id);
            if ( region_script_config_ptr )
            {
              p_pos = &region_script_config_ptr->pos;
              v27 = proto::TreasureSeelieRegionData::mutable_region_center_pos(region_data);
              Vector3::toClient(p_pos, v27);
              if ( *(_BYTE *)(((unsigned __int64)&region_script_config_ptr->sphere_radius >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&region_script_config_ptr->sphere_radius >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&region_script_config_ptr->sphere_radius);
              }
              proto::TreasureSeelieRegionData::set_region_radius(region_data, region_script_config_ptr->sphere_radius);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/treasure_seelie_activity.cpp",
            "toClient",
            81);
          v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v45,
                  (const char (*)[53])"[TREASURE_SEELIE] region config not found @open_day:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v15, this);
          common::milog::MiLogStream::~MiLogStream(&v45);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->treasure_days >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->treasure_days);
      }
      v28 = config_ptr->treasure_days + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      v29 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v28);
      proto::TreasureSeelieActivityDetailInfo::set_treasure_close_time(detail_info, v29);
      if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_content_closed_);
      proto::TreasureSeelieActivityDetailInfo::set_is_content_closed(detail_info, this->is_content_closed_);
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_seelie_activity.cpp",
        "toClient",
        72);
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v45,
             (const char (*)[41])"[TREASURE_SEELIE] base config not found ");
      common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v45);
      result = -1;
    }
  }
  if ( v46 == (char *)v2 )
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

// Line 94: range 00000000180113A0-000000001801148F
bool __fastcall TreasureSeelieActivity::toClient(proto::ActivityInfo &)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 config_id:94";
  *(_QWORD *)(v2 + 16) = TreasureSeelieActivity::toClient(proto::ActivityInfo &)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = config_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             *(const std::set<unsigned int> **)__closure,
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 117: range 000000001801207E-0000000018012297
std::pair<TreasureSeelieActivity::RegionData*,unsigned int> __cdecl TreasureSeelieActivity::getActiveRegion(
        TreasureSeelieActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rdx
  int __y; // [rsp+14h] [rbp-7Ch] BYREF
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  TreasureSeelieActivity::RegionData *__x; // [rsp+28h] [rbp-68h] BYREF
  std::map<unsigned int,TreasureSeelieActivity::RegionData> *__for_range; // [rsp+30h] [rbp-60h]
  std::pair<unsigned int const,TreasureSeelieActivity::RegionData> *__in; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,std::pair<unsigned int const,TreasureSeelieActivity::RegionData> >::type *day; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,std::pair<unsigned int const,TreasureSeelieActivity::RegionData> >::type *region_data; // [rsp+48h] [rbp-48h]
  std::pair<TreasureSeelieActivity::RegionData*,unsigned int> v11; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+60h] [rbp-30h] BYREF
  std::pair<TreasureSeelieActivity::RegionData*,unsigned int> result; // 0:rax.12

  __for_range = &this->open_day_to_region_map_;
  __for_begin._M_node = std::map<unsigned int,TreasureSeelieActivity::RegionData>::begin(&this->open_day_to_region_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TreasureSeelieActivity::RegionData>::end(&this->open_day_to_region_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,TreasureSeelieActivity::RegionData>>::operator*(&__for_begin);
    day = std::get<0ul,unsigned int const,TreasureSeelieActivity::RegionData>(__in);
    region_data = std::get<1ul,unsigned int const,TreasureSeelieActivity::RegionData>(__in);
    if ( *(char *)(((unsigned __int64)region_data >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(region_data);
    if ( region_data->is_open )
    {
      if ( *(_BYTE *)(((unsigned __int64)&region_data->is_done >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)region_data + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&region_data->is_done >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&region_data->is_done);
      }
      if ( !region_data->is_done )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/treasure_seelie_activity.cpp",
          "getActiveRegion",
          122);
        v1 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v12,
               (const char (*)[42])"[TREASURE SEELIE] active region open day:");
        v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, day);
        common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v2, this);
        common::milog::MiLogStream::~MiLogStream(&v12);
        __x = region_data;
        std::pair<TreasureSeelieActivity::RegionData *,unsigned int>::pair<TreasureSeelieActivity::RegionData *,true>(
          &v11,
          &__x,
          day);
        result.first = v11.first;
        result.second = v11.second;
        return result;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,TreasureSeelieActivity::RegionData>>::operator++(&__for_begin);
  }
  __x = 0LL;
  __y = 0;
  std::pair<TreasureSeelieActivity::RegionData *,unsigned int>::pair<decltype(nullptr),int,true>(&v11, &__x, &__y);
  result.first = v11.first;
  result.second = v11.second;
  return result;
};

// Line 130: range 0000000018012298-0000000018012C48
void __cdecl TreasureSeelieActivity::onChestOpenEvent(TreasureSeelieActivity *const this, const ChestOpenEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v6; // rdx
  const ActivityTreasureSeelieExcelConfigMgr *p_activity_treasure_seelie_config_mgr; // rdi
  uint32_t v8; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  uint32_t chest_group_id; // ecx
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v13; // rax
  std::set<unsigned int>::iterator *p_for_end; // rsi
  std::_Rb_tree_const_iterator<unsigned int>::reference v15; // rax
  _DWORD *v16; // rdx
  std::tuple_element<0,std::pair<TreasureSeelieActivity::RegionData*,unsigned int> >::type v17; // rdx
  char v18; // cl
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t id; // ecx
  uint32_t schedule_id; // edx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  bool is_done; // [rsp+1Fh] [rbp-121h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  std::tuple_element<0,std::pair<TreasureSeelieActivity::RegionData*,unsigned int> >::type *active_region_ptr; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,std::pair<TreasureSeelieActivity::RegionData*,unsigned int> >::type *open_day; // [rsp+38h] [rbp-108h]
  const data::TreasureSeelieRegionExcelConfig *region_config_ptr; // [rsp+40h] [rbp-100h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-F8h]
  std::pair<TreasureSeelieActivity::RegionData*,unsigned int> __in; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v44; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-D0h] BYREF
  char v46[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 19 chest_config_id:158 48 48 20 config_chest_set:151";
  *(_QWORD *)(v2 + 16) = TreasureSeelieActivity::onChestOpenEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    __in = TreasureSeelieActivity::getActiveRegion(this);
    active_region_ptr = std::get<0ul,TreasureSeelieActivity::RegionData *,unsigned int>(&__in);
    open_day = std::get<1ul,TreasureSeelieActivity::RegionData *,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)active_region_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(active_region_ptr);
    if ( *active_region_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v44);
      p_activity_treasure_seelie_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.activity_treasure_seelie_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)open_day >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)open_day & 7) + 3) >= *(_BYTE *)(((unsigned __int64)open_day >> 3) + 0x7FFF8000) )
      {
        p_activity_treasure_seelie_config_mgr = (const ActivityTreasureSeelieExcelConfigMgr *)open_day;
        __asan_report_load4(open_day);
      }
      v8 = *open_day;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        p_activity_treasure_seelie_config_mgr = (const ActivityTreasureSeelieExcelConfigMgr *)&this->schedule_id_;
        __asan_report_load4(&this->schedule_id_);
      }
      region_config_ptr = ActivityTreasureSeelieExcelConfigMgr::findRegionConfigByScheduleIdAndOpenDay(
                            p_activity_treasure_seelie_config_mgr,
                            this->schedule_id_,
                            v8);
      std::shared_ptr<Config>::~shared_ptr(&v44);
      if ( region_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->chest_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr->chest_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr->chest_group_id);
        }
        chest_group_id = region_config_ptr->chest_group_id;
        if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&event->group_id);
        }
        if ( chest_group_id == event->group_id )
        {
          M_current = std::vector<unsigned int>::begin(&region_config_ptr->chest_config_id_list)._M_current;
          v13._M_current = std::vector<unsigned int>::end(&region_config_ptr->chest_config_id_list)._M_current;
          std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
            (std::set<unsigned int> *const)(v2 + 48),
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
            v13);
          if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                 (std::set<unsigned int> *)(v2 + 48),
                 &event->config_id) )
          {
            if ( *(_BYTE *)(((unsigned __int64)active_region_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(active_region_ptr);
            std::set<unsigned int>::insert(&(*active_region_ptr)->opened_chest_config_id_set, &event->config_id);
            is_done = 1;
            __for_range = (std::set<unsigned int> *)(v2 + 48);
            __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 48))._M_node;
            __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 48))._M_node;
            while ( 1 )
            {
              p_for_end = &__for_end;
              if ( !std::operator!=(&__for_begin, &__for_end) )
                break;
              v15 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
              v16 = v15;
              if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v15);
              }
              *(_DWORD *)(v2 + 32) = *v16;
              if ( *(_BYTE *)(((unsigned __int64)active_region_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8(active_region_ptr);
              p_for_end = (std::set<unsigned int>::iterator *)(v2 + 32);
              if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                      &(*active_region_ptr)->opened_chest_config_id_set,
                      (const unsigned int *)(v2 + 32)) )
              {
                is_done = 0;
                break;
              }
              std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
            }
            if ( *(_BYTE *)(((unsigned __int64)active_region_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(active_region_ptr);
            v17 = *active_region_ptr;
            v18 = *(_BYTE *)(((unsigned __int64)&(*active_region_ptr)->is_done >> 3) + 0x7FFF8000);
            if ( v18 != 0 && ((*(_BYTE *)active_region_ptr + 1) & 7) >= v18 )
            {
              LOBYTE(p_for_end) = v18 != 0;
              __asan_report_store1(&(*active_region_ptr)->is_done, p_for_end, v17);
            }
            v17->is_done = is_done;
            if ( is_done )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              WatcherComp = Player::getWatcherComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&region_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
              {
                WatcherComp = (PlayerWatcherComp *)&region_config_ptr->id;
                __asan_report_load4(&region_config_ptr->id);
              }
              id = region_config_ptr->id;
              if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                WatcherComp = (PlayerWatcherComp *)&this->schedule_id_;
                __asan_report_load4(&this->schedule_id_);
              }
              schedule_id = this->schedule_id_;
              if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                WatcherComp = (PlayerWatcherComp *)&this->activity_id_;
                __asan_report_load4(&this->activity_id_);
              }
              PlayerWatcherComp::triggerDoneTreasureSeelieRegion(WatcherComp, this->activity_id_, schedule_id, id);
            }
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/treasure_seelie_activity.cpp",
              "onChestOpenEvent",
              171);
            v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v45,
                    (const char (*)[38])"[TREASURE SEELIE] newly opened chest:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &event->config_id);
            v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" @group:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &event->group_id);
            v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v25,
                    (const char (*)[17])", opened chests:");
            if ( *(_BYTE *)(((unsigned __int64)active_region_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(active_region_ptr);
            v27 = common::milog::MiLogStream::operator<<<unsigned int>(
                    v26,
                    &(*active_region_ptr)->opened_chest_config_id_set);
            v28 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v27,
                    (const char (*)[17])", target chests:");
            v29 = common::milog::MiLogStream::operator<<<unsigned int>(v28, (const std::set<unsigned int> *)(v2 + 48));
            v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v29,
                    (const char (*)[15])", region @day:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, open_day);
            v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v31, (const char (*)[11])", is_done:");
            v33 = common::milog::MiLogStream::operator<<(v32, is_done);
            common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v33, this);
            common::milog::MiLogStream::~MiLogStream(&v45);
            if ( is_done )
              BaseActivity::updateAllConds((BaseActivity *const)this);
            BaseActivity::notifyClientData((BaseActivity *const)this, 0);
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_seelie_activity.cpp",
          "onChestOpenEvent",
          144);
        v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
               &v45,
               (const char (*)[56])"[TREASURE SEELIE] region config not found for open day:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, open_day);
        common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v10, this);
        common::milog::MiLogStream::~MiLogStream(&v45);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_seelie_activity.cpp",
        "onChestOpenEvent",
        138);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v45,
             (const char (*)[40])"[TREASURE SEELIE] not region is active.");
      common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v6, this);
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
  }
  if ( v46 == (char *)v2 )
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

// Line 185: range 0000000018012C4A-0000000018012F00
void __cdecl TreasureSeelieActivity::registerObserver(TreasureSeelieActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<TreasureSeelieActivity> p_this_wtr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:186 64 16 12 this_wtr:192";
  *(_QWORD *)(v1 + 16) = TreasureSeelieActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<TreasureSeelieActivity>((TreasureSeelieActivity *)(v1 + 32));
  if ( std::operator==<TreasureSeelieActivity>(0LL, (const std::shared_ptr<TreasureSeelieActivity> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/treasure_seelie_activity.cpp",
      "registerObserver",
      189);
    common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
      &v6,
      (const char (*)[72])"[TREASURE SEELIE] dynamic_pointer_cast to TreasureSeelieActivity failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::weak_ptr<TreasureSeelieActivity>::weak_ptr<TreasureSeelieActivity,void>(
      (std::weak_ptr<TreasureSeelieActivity> *const)(v1 + 64),
      (const std::shared_ptr<TreasureSeelieActivity> *)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    std::weak_ptr<TreasureSeelieActivity>::weak_ptr(
      &p_this_wtr,
      (const std::weak_ptr<TreasureSeelieActivity> *)(v1 + 64));
    PlayerEventComp::tryRegisterObserver<TreasureSeelieActivity,ChestOpenEvent>(
      EventComp,
      &p_this_wtr,
      (void (*)(TreasureSeelieActivity *, const ChestOpenEvent *))TreasureSeelieActivity::onChestOpenEvent,
      0LL);
    std::weak_ptr<TreasureSeelieActivity>::~weak_ptr(&p_this_wtr);
    std::weak_ptr<TreasureSeelieActivity>::~weak_ptr((std::weak_ptr<TreasureSeelieActivity> *const)(v1 + 64));
  }
  std::shared_ptr<TreasureSeelieActivity>::~shared_ptr((std::shared_ptr<TreasureSeelieActivity> *const)(v1 + 32));
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

// Line 197: range 0000000018012F02-0000000018013006
void __cdecl TreasureSeelieActivity::unregisterObserver(TreasureSeelieActivity *const this)
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

// Line 209: range 0000000018013008-0000000018013022
void __cdecl TreasureSeelieActivity::onStart(TreasureSeelieActivity *const this)
{
  TreasureSeelieActivity::registerObserver(this);
};

// Line 214: range 0000000018013024-0000000018013081
int32_t __cdecl TreasureSeelieActivity::init(TreasureSeelieActivity *const this)
{
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    TreasureSeelieActivity::registerObserver(this);
  }
  return 0;
};

// Line 224: range 0000000018013082-00000000180130A8
void __cdecl TreasureSeelieActivity::onSettle(TreasureSeelieActivity *const this)
{
  TreasureSeelieActivity::closeContent(this);
  TreasureSeelieActivity::unregisterObserver(this);
};

// Line 230: range 00000000180130AA-000000001801326E
void __cdecl TreasureSeelieActivity::onClear(TreasureSeelieActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:233";
  *(_QWORD *)(v1 + 16) = TreasureSeelieActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  v4 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin_num_);
  }
  if ( this->coin_num_ )
  {
    SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->coin_num_);
    }
    v4 = 145LL;
    TreasureSeelieActivity::subActivityCoin(
      this,
      ITEM_VIRTUAL_TREASURE_SEELIE_COIN,
      this->coin_num_,
      (const SubItemReason *)(v1 + 32),
      0);
  }
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::clear(&this->open_day_to_region_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, v4, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 241: range 0000000018013270-000000001801327A
void __cdecl TreasureSeelieActivity::onDailyRefresh(TreasureSeelieActivity *const this)
{
  ;
};

// Line 246: range 000000001801327C-0000000018013460
_BOOL8 __fastcall TreasureSeelieActivity::isRegionDoneByOpenDay(
        const TreasureSeelieActivity *const this,
        uint32_t open_day)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  _BOOL8 result; // rax
  common::tools::transcribe_cv_t_36 *region_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 open_day:245";
  *(_QWORD *)(v2 + 16) = TreasureSeelieActivity::isRegionDoneByOpenDay;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = open_day;
  region_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,TreasureSeelieActivity::RegionData> const>(
                 &this->open_day_to_region_map_,
                 (const std::map<unsigned int,TreasureSeelieActivity::RegionData>::key_type *)(v2 + 32));
  if ( region_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&region_ptr->is_done >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)region_ptr + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&region_ptr->is_done >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&region_ptr->is_done);
    }
    result = region_ptr->is_done;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/treasure_seelie_activity.cpp",
      "isRegionDoneByOpenDay",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v10,
           (const char (*)[31])"[TREASURE_SEELIE] region @day ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" has no data.");
    common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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

// Line 257: range 0000000018013462-00000000180138AF
__int64 __fastcall TreasureSeelieActivity::openRegionByDay(TreasureSeelieActivity *const this, uint32_t open_day)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const ActivityTreasureSeelieExcelConfigMgr *p_activity_treasure_seelie_config_mgr; // rdi
  uint32_t v6; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const data::TreasureSeelieRegionExcelConfig *region_config_ptr; // [rsp+10h] [rbp-A0h]
  TreasureSeelieActivity::RegionData *region_data; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-80h] BYREF
  char v22[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 open_day:256";
  *(_QWORD *)(v2 + 16) = TreasureSeelieActivity::openRegionByDay;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = open_day;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_activity_treasure_seelie_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_treasure_seelie_config_mgr;
  v6 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_treasure_seelie_config_mgr = (const ActivityTreasureSeelieExcelConfigMgr *)&this->schedule_id_;
    __asan_report_load4(&this->schedule_id_);
  }
  region_config_ptr = ActivityTreasureSeelieExcelConfigMgr::findRegionConfigByScheduleIdAndOpenDay(
                        p_activity_treasure_seelie_config_mgr,
                        this->schedule_id_,
                        v6);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( region_config_ptr )
  {
    region_data = std::map<unsigned int,TreasureSeelieActivity::RegionData>::operator[](
                    &this->open_day_to_region_map_,
                    (const std::map<unsigned int,TreasureSeelieActivity::RegionData>::key_type *)(v2 + 32));
    if ( *(char *)(((unsigned __int64)region_data >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(region_data);
    if ( region_data->is_open )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_seelie_activity.cpp",
        "openRegionByDay",
        267);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"[TREASURE SEELIE] region on day:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v12, (const char (*)[20])off_26498C60);
      common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)region_data >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(region_data, v2 + 32, region_data);
      region_data->is_open = 1;
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/treasure_seelie_activity.cpp",
        "openRegionByDay",
        271);
      v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"[TREASURE SEELIE] region of day:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])off_26498D00);
      common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v16, this);
      common::milog::MiLogStream::~MiLogStream(&v21);
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/treasure_seelie_activity.cpp",
      "openRegionByDay",
      261);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v21,
           (const char (*)[35])"[TREASURE SEELIE] region open day:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])" config NOT found.");
    common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v9, this);
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
  if ( v22 == (char *)v2 )
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

// Line 277: range 00000000180138B0-0000000018013C2F
int32_t __cdecl TreasureSeelieActivity::execAction(
        TreasureSeelieActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t result; // eax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // r13
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-80h] BYREF
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 open_day:287";
  *(_QWORD *)(v2 + 16) = TreasureSeelieActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_TREASURE_SEELIE_REGION )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      v7 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v7, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_seelie_activity.cpp",
          "execAction",
          290);
        v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v14,
               (const char (*)[37])"[TREASURE SEELIE] open_day strToNum ");
        v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
        v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" failed, ");
        common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v11, this);
        common::milog::MiLogStream::~MiLogStream(&v14);
        result = -1;
      }
      else if ( (unsigned int)TreasureSeelieActivity::openRegionByDay(this, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/treasure_seelie_activity.cpp",
          "execAction",
          295);
        v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v14,
                (const char (*)[53])"[TREASURE SEELIE] openRegionByDay failed, open_day: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v13, this);
        common::milog::MiLogStream::~MiLogStream(&v14);
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_seelie_activity.cpp",
        "execAction",
        284);
      v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v14,
             (const char (*)[41])"[TREASURE SEELIE] cond param size error:");
      common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v5, this);
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
    }
  }
  else
  {
    result = BaseActivity::execAction((BaseActivity *const)this, action_exec);
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

// Line 309: range 0000000018013C30-0000000018013E7C
bool __cdecl TreasureSeelieActivity::checkCondIsMeet(
        TreasureSeelieActivity *const this,
        const data::NewActivityCond *cond)
{
  common::milog::MiLogStream *v2; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v4; // rax
  int *v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  uint32_t *v7; // rax
  uint32_t *v8; // rdx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  if ( cond->type != NEW_ACTIVITY_COND_TREASURE_SEELIE_FINISH_REGION )
    return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
  if ( std::vector<int>::size(&cond->param) )
  {
    v4 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                             &cond->param,
                                                                             0LL);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( *v5 > 0 )
    {
      v7 = (uint32_t *)std::vector<int>::operator[](&cond->param, 0LL);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      return TreasureSeelieActivity::isRegionDoneByOpenDay(this, *v8);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_seelie_activity.cpp",
        "checkCondIsMeet",
        321);
      v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v9,
             (const char (*)[38])"[TREASURE_SEELIE] invalid cond param.");
      common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v6, this);
      common::milog::MiLogStream::~MiLogStream(&v9);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/treasure_seelie_activity.cpp",
      "checkCondIsMeet",
      316);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v9,
           (const char (*)[36])"[TREASURE_SEELIE] param not enough.");
    common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
};

// Line 333: range 0000000018013E7E-0000000018013F33
void __cdecl TreasureSeelieActivity::fillActivityCoinInfo(
        TreasureSeelieActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  uint32_t coin_num; // ebx
  google::protobuf::Map<unsigned int,unsigned int>::key_type *v3; // rsi
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  char v6; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin_num_);
  }
  coin_num = this->coin_num_;
  key[0] = 145;
  v3 = key;
  v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v5 = v4;
  v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
  {
    LOBYTE(v3) = v6 != 0;
    __asan_report_store4(v4, v3, v4);
  }
  *v5 = coin_num;
};

// Line 338: range 0000000018013F34-0000000018014273
__int64 __fastcall TreasureSeelieActivity::checkAddActivityCoin(
        const TreasureSeelieActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r12
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-80h] BYREF
  char v16[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 add_num:337";
  *(_QWORD *)(v3 + 16) = TreasureSeelieActivity::checkAddActivityCoin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = add_num;
  if ( coin_type == ITEM_VIRTUAL_TREASURE_SEELIE_COIN )
  {
    if ( *(_DWORD *)(v3 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->coin_num_);
      }
      if ( this->coin_num_ && *(_DWORD *)(v3 + 32) + this->coin_num_ < *(_DWORD *)(v3 + 32) )
        goto LABEL_16;
    }
    if ( *(_DWORD *)(v3 + 32) )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->coin_num_);
    }
    if ( this->coin_num_ || *(_DWORD *)(v3 + 32) + this->coin_num_ <= *(_DWORD *)(v3 + 32) )
    {
LABEL_17:
      result = 0LL;
    }
    else
    {
LABEL_16:
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_seelie_activity.cpp",
        "checkAddActivityCoin",
        346);
      v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v15,
              (const char (*)[48])"[TREASURE SEELIE] add coin over flow, cur num: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->coin_num_);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", add num:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/treasure_seelie_activity.cpp",
      "checkAddActivityCoin",
      341);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v15,
           (const char (*)[51])"[TREASURE SEELIE] coin_type is invalid. coin_type:");
    v7 = proto::VirtualItem_Name[abi:cxx11](coin_type);
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, v7);
    common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  if ( v16 == (char *)v3 )
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

// Line 353: range 0000000018014274-0000000018014510
__int64 __fastcall TreasureSeelieActivity::checkSubActivityCoin(
        const TreasureSeelieActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t sub_num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r13
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-80h] BYREF
  char v16[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 sub_num:352";
  *(_QWORD *)(v3 + 16) = TreasureSeelieActivity::checkSubActivityCoin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = sub_num;
  if ( coin_type == ITEM_VIRTUAL_TREASURE_SEELIE_COIN )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->coin_num_);
    }
    if ( this->coin_num_ >= *(_DWORD *)(v3 + 32) )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/treasure_seelie_activity.cpp",
        "checkSubActivityCoin",
        361);
      v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v15,
              (const char (*)[44])"[TREASURE SEELIE] coin not enough, cur num:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->coin_num_);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", sub num:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/treasure_seelie_activity.cpp",
      "checkSubActivityCoin",
      356);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v15,
           (const char (*)[51])"[TREASURE SEELIE] coin_type is invalid. coin_type:");
    v7 = proto::VirtualItem_Name[abi:cxx11](coin_type);
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, v7);
    common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  if ( v16 == (char *)v3 )
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

// Line 368: range 0000000018014512-000000001801490A
int32_t __cdecl TreasureSeelieActivity::addActivityCoin(
        TreasureSeelieActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  int32_t v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v10; // ecx
  char v11; // dl
  __int64 v12; // rsi
  __int64 v13; // rdx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r10d
  int32_t result; // eax
  std::string v18; // [rsp+0h] [rbp-C0h]
  bool is_notifya; // [rsp+4h] [rbp-BCh]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  unsigned int add_numa; // [rsp+10h] [rbp-B0h]
  proto::VirtualItem coin_typea; // [rsp+14h] [rbp-ACh]
  TreasureSeelieActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_coin_num; // [rsp+2Ch] [rbp-94h]
  std::string v26; // [rsp+30h] [rbp-90h] BYREF
  char v27[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v18._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)v18._anon_0._M_local_buf = add_num;
  v18._M_string_length = (std::string::size_type)reason;
  BYTE4(v18._M_dataplus._M_p) = is_notify;
  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 1 22 log_context_holder:374";
  *(_QWORD *)(v5 + 16) = TreasureSeelieActivity::addActivityCoin;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116351;
  ret = TreasureSeelieActivity::checkAddActivityCoin(this, coin_type, v18._anon_0._M_allocated_capacity);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v26, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 0x67u, v18);
    std::string::~string(&v26);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->coin_num_);
    }
    old_coin_num = thisa->coin_num_;
    v12 = add_numa;
    v10 = SAFE_ADD<unsigned int,unsigned int>(old_coin_num, add_numa);
    v11 = *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000);
    LOBYTE(v12) = v11 != 0;
    v13 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)thisa - 92) & 7) + 3) >= v11);
    if ( (_BYTE)v13 )
      __asan_report_store4(&thisa->coin_num_, v12, v13);
    thisa->coin_num_ = v10;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4((char *)&reasona->_vptr_PlayerCompBase + 4);
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->coin_num_;
      __asan_report_load4(&thisa->coin_num_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      coin_typea,
      old_coin_num,
      thisa->coin_num_,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
  }
  result = v8;
  if ( v27 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 386: range 000000001801490C-0000000018014C69
int32_t __cdecl TreasureSeelieActivity::subActivityCoin(
        TreasureSeelieActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t sub_num,
        const SubItemReason *reason,
        bool is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  int32_t v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v13; // [rsp+0h] [rbp-C0h]
  bool is_notifya; // [rsp+4h] [rbp-BCh]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  uint32_t sub_numa; // [rsp+10h] [rbp-B0h]
  proto::VirtualItem coin_typea; // [rsp+14h] [rbp-ACh]
  TreasureSeelieActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_coin_num; // [rsp+2Ch] [rbp-94h]
  std::string v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v13._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v13._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)v13._anon_0._M_local_buf = sub_num;
  v13._M_string_length = (std::string::size_type)reason;
  BYTE4(v13._M_dataplus._M_p) = is_notify;
  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 1 22 log_context_holder:392";
  *(_QWORD *)(v5 + 16) = TreasureSeelieActivity::subActivityCoin;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116351;
  ret = TreasureSeelieActivity::checkSubActivityCoin(this, coin_type, v13._anon_0._M_allocated_capacity);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 0x67u, v13);
    std::string::~string(&v21);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->coin_num_);
    }
    old_coin_num = thisa->coin_num_;
    thisa->coin_num_ = old_coin_num - sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->coin_num_;
      __asan_report_load4(&thisa->coin_num_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      coin_typea,
      old_coin_num,
      thisa->coin_num_,
      vptr_PlayerCompBase,
      ITEM_LIMIT_NONE,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
  }
  result = v8;
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 404: range 0000000018014C6A-0000000018014D6A
uint32_t __cdecl TreasureSeelieActivity::getActivityCoin(
        const TreasureSeelieActivity *const this,
        proto::VirtualItem coin_type)
{
  common::milog::MiLogStream *v2; // rbx
  const std::string *v3; // rax
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( coin_type == ITEM_VIRTUAL_TREASURE_SEELIE_COIN )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->coin_num_);
    }
    return this->coin_num_;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/treasure_seelie_activity.cpp",
      "getActivityCoin",
      407);
    v2 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v6,
           (const char (*)[51])"[TREASURE SEELIE] coin_type is invalid. coin_type:");
    v3 = proto::VirtualItem_Name[abi:cxx11](coin_type);
    v4 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, v3);
    common::milog::MiLogStream::operator<<<TreasureSeelieActivity,(TreasureSeelieActivity*)0>(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 414: range 0000000018014D6C-0000000018014E11
void __cdecl TreasureSeelieActivity::closeContent(TreasureSeelieActivity *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_, v1, &this->is_content_closed_);
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
};

// Line 425: range 0000000018014E12-00000000180153AF
std::string *__fastcall TreasureSeelieActivity::openRegionByGm[abi:cxx11](
        std::string *retstr,
        TreasureSeelieActivity *const this,
        uint32_t open_day)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // r14
  TreasureSeelieActivity *v7; // rdx
  int (**v8)(...); // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  TreasureSeelieActivity *v12; // rdx
  int (**vptr_DescribalBase)(...); // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // r14
  TreasureSeelieActivity::RegionData *region; // [rsp+28h] [rbp-B8h]
  std::string v; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 open_day:424 64 16 7 oss:426";
  *(_QWORD *)(v3 + 16) = TreasureSeelieActivity::openRegionByGm[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = open_day;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
  if ( *(_DWORD *)(v3 + 48) )
  {
    region = std::map<unsigned int,TreasureSeelieActivity::RegionData>::operator[](
               &this->open_day_to_region_map_,
               (const std::map<unsigned int,TreasureSeelieActivity::RegionData>::key_type *)(v3 + 48));
    if ( *(char *)(((unsigned __int64)region >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(region);
    if ( region->is_open )
    {
      v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
             (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
             "region @day:");
      v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, *(_DWORD *)(v3 + 48));
      v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, off_26498C60);
      v12 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      vptr_DescribalBase = this->_vptr_DescribalBase;
      if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
        vptr_DescribalBase = (int (**)(...))__asan_report_load8(this->_vptr_DescribalBase);
      (*vptr_DescribalBase)(&v, v12);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, &v);
      std::string::~string(&v);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                              + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)region >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(region, v3 + 48, region);
      region->is_open = 1;
      v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
              "opened region @day:");
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, *(_DWORD *)(v3 + 48));
      if ( *(_DWORD *)(v3 + 48) > 1u )
      {
        v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
                "; ");
        TreasureSeelieActivity::finishRegionByGm[abi:cxx11](&v, this, *(_DWORD *)(v3 + 48) - 1);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, &v);
        std::string::~string(&v);
      }
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                              + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
    }
  }
  else
  {
    v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
           "open day can NOT be 0.");
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      v8 = (int (**)(...))__asan_report_load8(this->_vptr_DescribalBase);
    (*v8)(&v, v7);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, &v);
    std::string::~string(&v);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
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
  return retstr;
};

// Line 449: range 00000000180153B0-0000000018015A8D
std::string *__cdecl TreasureSeelieActivity::finishRegionByGm[abi:cxx11](
        std::string *retstr,
        TreasureSeelieActivity *const this,
        uint32_t open_day)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,std::pair<TreasureSeelieActivity::RegionData*,unsigned int> >::type *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // r14
  TreasureSeelieActivity *v8; // rdx
  int (**vptr_DescribalBase)(...); // rax
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t v11; // ecx
  uint32_t schedule_id; // edx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // r14
  TreasureSeelieActivity *v15; // rdx
  int (**v16)(...); // rax
  std::tuple_element<1,std::pair<TreasureSeelieActivity::RegionData*,unsigned int> >::type *active_region_day; // [rsp+30h] [rbp-110h]
  TreasureSeelieActivity::RegionData *region; // [rsp+38h] [rbp-108h]
  std::pair<TreasureSeelieActivity::RegionData*,unsigned int> __in; // [rsp+40h] [rbp-100h] BYREF
  std::string v; // [rsp+50h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 day:462 48 16 7 oss:450 80 48 19 done_region_set:461";
  *(_QWORD *)(v3 + 16) = TreasureSeelieActivity::finishRegionByGm[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48));
  if ( !open_day )
  {
    __in = TreasureSeelieActivity::getActiveRegion(this);
    std::get<0ul,TreasureSeelieActivity::RegionData *,unsigned int>(&__in);
    v6 = std::get<1ul,TreasureSeelieActivity::RegionData *,unsigned int>(&__in);
    active_region_day = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    if ( !*active_region_day )
    {
      v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
             (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48),
             "no region is active.");
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      vptr_DescribalBase = this->_vptr_DescribalBase;
      if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
        vptr_DescribalBase = (int (**)(...))__asan_report_load8(this->_vptr_DescribalBase);
      (*vptr_DescribalBase)(&v, v8);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, &v);
      std::string::~string(&v);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                              + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        retstr,
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48));
      goto LABEL_40;
    }
    if ( *(_BYTE *)(((unsigned __int64)active_region_day >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)active_region_day & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_region_day >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(active_region_day);
    }
    open_day = *active_region_day;
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 80));
  for ( *(_DWORD *)(v3 + 32) = 1; open_day >= *(_DWORD *)(v3 + 32); ++*(_DWORD *)(v3 + 32) )
  {
    region = std::map<unsigned int,TreasureSeelieActivity::RegionData>::operator[](
               &this->open_day_to_region_map_,
               (const std::map<unsigned int,TreasureSeelieActivity::RegionData>::key_type *)(v3 + 32));
    if ( *(char *)(((unsigned __int64)region >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(region, v3 + 32, region);
    region->is_open = 1;
    if ( *(_BYTE *)(((unsigned __int64)&region->is_done >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)region + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&region->is_done >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&region->is_done);
    }
    if ( !region->is_done )
    {
      region->is_done = 1;
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 80),
        (const std::set<unsigned int>::value_type *)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      v11 = *(_DWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        WatcherComp = (PlayerWatcherComp *)&this->schedule_id_;
        __asan_report_load4(&this->schedule_id_);
      }
      schedule_id = this->schedule_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        WatcherComp = (PlayerWatcherComp *)&this->activity_id_;
        __asan_report_load4(&this->activity_id_);
      }
      PlayerWatcherComp::triggerDoneTreasureSeelieRegion(WatcherComp, this->activity_id_, schedule_id, v11);
    }
  }
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48),
          "finished region @days:");
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(
          v13,
          (const std::set<unsigned int> *)(v3 + 80));
  v15 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v16 = this->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
    v16 = (int (**)(...))__asan_report_load8(this->_vptr_DescribalBase);
  (*v16)(&v, v15);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, &v);
  std::string::~string(&v);
  BaseActivity::updateAllConds((BaseActivity *const)this);
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
LABEL_40:
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48));
  if ( v24 == (char *)v3 )
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
  return retstr;
};

// Line 480: range 0000000018015A8E-0000000018015EDA
std::string *__cdecl TreasureSeelieActivity::resetRegionByGm[abi:cxx11](
        std::string *retstr,
        TreasureSeelieActivity *const this,
        uint32_t open_day)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::set<unsigned int>::size_type v6; // r14
  ActivityTreasureSeelieExcelConfigMgr *p_activity_treasure_seelie_config_mgr; // rcx
  const std::set<unsigned int> *OpenDaySetByScheduleId; // rax
  bool v9; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  TreasureSeelieActivity *v12; // rdx
  int (**vptr_DescribalBase)(...); // rax
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-100h] BYREF
  std::string v; // [rsp+40h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 day:488 48 16 7 oss:481 80 48 20 reset_region_set:487";
  *(_QWORD *)(v3 + 16) = TreasureSeelieActivity::resetRegionByGm[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48));
  if ( !open_day )
  {
    open_day = 1;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48),
      "reset all regions: ");
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 80));
  for ( *(_DWORD *)(v3 + 32) = open_day; ; ++*(_DWORD *)(v3 + 32) )
  {
    v6 = *(unsigned int *)(v3 + 32);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    p_activity_treasure_seelie_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_treasure_seelie_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    OpenDaySetByScheduleId = ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(
                               p_activity_treasure_seelie_config_mgr,
                               this->schedule_id_);
    v9 = v6 <= std::set<unsigned int>::size(OpenDaySetByScheduleId);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( !v9 )
      break;
    if ( common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,TreasureSeelieActivity::RegionData>>(
           &this->open_day_to_region_map_,
           (const std::map<unsigned int,TreasureSeelieActivity::RegionData>::key_type *)(v3 + 32)) )
    {
      std::map<unsigned int,TreasureSeelieActivity::RegionData>::erase(
        &this->open_day_to_region_map_,
        (const std::map<unsigned int,TreasureSeelieActivity::RegionData>::key_type *)(v3 + 32));
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 80),
        (const std::set<unsigned int>::value_type *)(v3 + 32));
    }
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48),
          "reset region @days:");
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(
          v10,
          (const std::set<unsigned int> *)(v3 + 80));
  v12 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  vptr_DescribalBase = this->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
    vptr_DescribalBase = (int (**)(...))__asan_report_load8(this->_vptr_DescribalBase);
  (*vptr_DescribalBase)(&v, v12);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, &v);
  std::string::~string(&v);
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 48));
  if ( v18 == (char *)v3 )
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
  return retstr;
};

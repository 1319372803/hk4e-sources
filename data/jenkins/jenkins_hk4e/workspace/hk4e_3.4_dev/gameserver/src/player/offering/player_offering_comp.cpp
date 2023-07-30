// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/offering/player_offering_comp.cpp

// Line 33: range 0000000016CC268E-0000000016CC2A42
int32_t __cdecl PlayerOfferingComp::fromBin(
        PlayerOfferingComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *v5; // rsi
  __int64 v6; // rdx
  char v7; // al
  bool is_need_notify_new_max; // cl
  char v9; // dl
  __int64 v10; // rdx
  uint32_t version_max_level; // ecx
  char v12; // dl
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  char v16; // al
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::PlayerOfferingInfoBin>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerOfferingInfoBin>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-A8h]
  const proto::PlayerOfferingCompBin *proto_comp; // [rsp+30h] [rbp-A0h]
  const google::protobuf::RepeatedPtrField<proto::PlayerOfferingInfoBin> *__for_range; // [rsp+38h] [rbp-98h]
  const proto::PlayerOfferingInfoBin *offering_bin; // [rsp+40h] [rbp-90h]
  OfferingInfo *offering_info; // [rsp+48h] [rbp-88h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+50h] [rbp-80h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-78h]
  char v27[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 taken_level:41";
  *(_QWORD *)(v2 + 16) = PlayerOfferingComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::offering_bin(player_data_bin);
  std::map<unsigned int,OfferingInfo>::clear(&this->offering_info_map_);
  __for_range = proto::PlayerOfferingCompBin::offering_bin_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerOfferingInfoBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerOfferingInfoBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerOfferingInfoBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    offering_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerOfferingInfoBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::PlayerOfferingInfoBin::offering_id(offering_bin);
    v5 = (char *)(v2 + 32);
    offering_info = std::map<unsigned int,OfferingInfo>::operator[](
                      &this->offering_info_map_,
                      (std::map<unsigned int,OfferingInfo>::key_type *)(v2 + 32));
    v6 = proto::PlayerOfferingInfoBin::level(offering_bin);
    v7 = *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(v5) = v7 != 0;
      __asan_report_store4(offering_info, v5, v6);
    }
    offering_info->level = v6;
    __for_range_0 = proto::PlayerOfferingInfoBin::taken_level_reward_list(offering_bin);
    __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
    __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
    while ( __for_begin_0 != __for_end_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_0);
      }
      *(_DWORD *)(v2 + 32) = *__for_begin_0;
      v5 = (char *)(v2 + 32);
      std::set<unsigned int>::insert(
        &offering_info->taken_level_reward_set,
        (const std::set<unsigned int>::value_type *)(v2 + 32));
      ++__for_begin_0;
    }
    is_need_notify_new_max = proto::PlayerOfferingInfoBin::is_need_notify_new_max(offering_bin);
    v9 = *(_BYTE *)(((unsigned __int64)&offering_info->is_need_notify_new_max >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v9 != 0;
    v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)offering_info + 57) & 7) >= v9);
    if ( (_BYTE)v10 )
      __asan_report_store1(&offering_info->is_need_notify_new_max, v5, v10);
    offering_info->is_need_notify_new_max = is_need_notify_new_max;
    version_max_level = proto::PlayerOfferingInfoBin::last_version_max_level(offering_bin);
    v12 = *(_BYTE *)(((unsigned __int64)&offering_info->last_version_max_level >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v12 != 0;
    v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)offering_info + 60) & 7) + 3) >= v12);
    if ( (_BYTE)v13 )
      __asan_report_store4(&offering_info->last_version_max_level, v5, v13);
    offering_info->last_version_max_level = version_max_level;
    LOBYTE(v14) = proto::PlayerOfferingInfoBin::is_first_interact(offering_bin);
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)&offering_info->is_first_interact >> 3) + 0x7FFF8000);
    if ( v16 < 0 )
    {
      LOBYTE(v5) = v16 != 0;
      __asan_report_store1(&offering_info->is_first_interact, v5, v15);
    }
    offering_info->is_first_interact = v15;
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerOfferingInfoBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v27 == (char *)v2 )
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

// Line 53: range 0000000016CC2A44-0000000016CC2D2D
int32_t __cdecl PlayerOfferingComp::toBin(PlayerOfferingComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::map<unsigned int,OfferingInfo>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,OfferingInfo>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-48h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-40h] BYREF
  proto::PlayerOfferingCompBin *proto_comp; // [rsp+38h] [rbp-38h]
  std::map<unsigned int,OfferingInfo> *__for_range; // [rsp+40h] [rbp-30h]
  const std::pair<unsigned int const,OfferingInfo> *v11; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,OfferingInfo> >::type *offering_id; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,OfferingInfo> >::type *offering_info; // [rsp+58h] [rbp-18h]
  proto::PlayerOfferingInfoBin *offering_bin; // [rsp+60h] [rbp-10h]
  const std::set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_offering_bin(player_data_bin);
  __for_range = &this->offering_info_map_;
  __for_begin._M_node = std::map<unsigned int,OfferingInfo>::begin(&this->offering_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,OfferingInfo>::end(&this->offering_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo>>::operator*(&__for_begin);
    offering_id = std::get<0ul,unsigned int const,OfferingInfo>(v11);
    offering_info = (std::tuple_element<1,const std::pair<unsigned int const,OfferingInfo> >::type *)std::get<1ul,unsigned int const,OfferingInfo>(v11);
    offering_bin = proto::PlayerOfferingCompBin::add_offering_bin_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)offering_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(offering_id);
    }
    proto::PlayerOfferingInfoBin::set_offering_id(offering_bin, *offering_id);
    if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(offering_info);
    }
    proto::PlayerOfferingInfoBin::set_level(offering_bin, offering_info->level);
    __for_range_0 = &offering_info->taken_level_reward_set;
    __for_begin_0._M_node = std::set<unsigned int>::begin(&offering_info->taken_level_reward_set)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
      v3 = v2;
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v2);
      }
      proto::PlayerOfferingInfoBin::add_taken_level_reward_list(offering_bin, *v3);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&offering_info->is_need_notify_new_max >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)offering_info + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&offering_info->is_need_notify_new_max >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(&offering_info->is_need_notify_new_max);
    }
    proto::PlayerOfferingInfoBin::set_is_need_notify_new_max(offering_bin, offering_info->is_need_notify_new_max);
    if ( *(_BYTE *)(((unsigned __int64)&offering_info->last_version_max_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)offering_info + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offering_info->last_version_max_level >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&offering_info->last_version_max_level);
    }
    proto::PlayerOfferingInfoBin::set_last_version_max_level(offering_bin, offering_info->last_version_max_level);
    if ( *(char *)(((unsigned __int64)&offering_info->is_first_interact >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&offering_info->is_first_interact);
    proto::PlayerOfferingInfoBin::set_is_first_interact(offering_bin, offering_info->is_first_interact);
    std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 72: range 0000000016CC2D2E-0000000016CC33A8
int32_t __cdecl PlayerOfferingComp::onLogin(PlayerOfferingComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo> >::pointer v5; // rax
  uint32_t *p_last_version_max_level; // rax
  uint32_t last_version_max_level; // r14d
  OfferingExcelConfigMgr *p_offering_config_mgr; // rcx
  bool v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  OfferingExcelConfigMgr *v12; // rcx
  uint32_t OfferingMaxLevelInCurVersion; // ecx
  char v14; // dl
  __int64 v15; // rsi
  __int64 v16; // rdx
  OfferingExcelConfigMgr *v17; // rcx
  __int64 v18; // rsi
  __int64 OfferingInitLevel; // rdx
  char v20; // al
  OfferingExcelConfigMgr *v21; // rcx
  uint32_t v22; // ecx
  char v23; // dl
  __int64 v24; // rsi
  __int64 v25; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::const_iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::const_iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo> >::_Self __y; // [rsp+20h] [rbp-F0h] BYREF
  const std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *offering_levelup_config_map; // [rsp+28h] [rbp-E8h]
  const std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *__for_range; // [rsp+30h] [rbp-E0h]
  const std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > *v32; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *offering_id; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *_; // [rsp+48h] [rbp-C8h]
  OfferingInfo *offering_info_0; // [rsp+50h] [rbp-C0h]
  OfferingInfo *offering_info; // [rsp+58h] [rbp-B8h]
  std::shared_ptr<Config> v37; // [rsp+60h] [rbp-B0h] BYREF
  std::shared_ptr<Config> v38; // [rsp+70h] [rbp-A0h] BYREF
  std::shared_ptr<Config> v39; // [rsp+80h] [rbp-90h] BYREF
  std::shared_ptr<Config> v40; // [rsp+90h] [rbp-80h] BYREF
  char v41[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 16 offering_iter:77";
  *(_QWORD *)(v2 + 16) = PlayerOfferingComp::onLogin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  offering_levelup_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.offering_config_mgr.offering_levelup_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v40);
  __for_range = offering_levelup_config_map;
  __for_begin._M_node = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::begin(offering_levelup_config_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::end(offering_levelup_config_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v32 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator*(&__for_begin);
    offering_id = std::get<0ul,unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>(v32);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>(v32);
    *(std::map<unsigned int,OfferingInfo>::iterator *)(v2 + 32) = std::map<unsigned int,OfferingInfo>::find(
                                                                    &this->offering_info_map_,
                                                                    offering_id);
    __y._M_node = std::map<unsigned int,OfferingInfo>::end(&this->offering_info_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo> >::_Self *)(v2 + 32),
           &__y) )
    {
      v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo> > *const)(v2 + 32));
      offering_info = &v5->second;
      p_last_version_max_level = &v5->second.last_version_max_level;
      if ( *(_BYTE *)(((unsigned __int64)p_last_version_max_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_last_version_max_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_last_version_max_level >> 3)
                                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(p_last_version_max_level);
      }
      last_version_max_level = offering_info->last_version_max_level;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v37);
      p_offering_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.offering_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)offering_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(offering_id);
      }
      v9 = last_version_max_level < OfferingExcelConfigMgr::findOfferingMaxLevelInCurVersion(
                                      p_offering_config_mgr,
                                      *offering_id);
      std::shared_ptr<Config>::~shared_ptr(&v37);
      if ( v9 )
      {
        v10 = ((_BYTE)offering_info + 57) & 7;
        v11 = (*(_BYTE *)(((unsigned __int64)&offering_info->is_need_notify_new_max >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&offering_info->is_need_notify_new_max >> 3) + 0x7FFF8000));
        if ( (_BYTE)v11 )
          __asan_report_store1(&offering_info->is_need_notify_new_max, v10, v11);
        offering_info->is_need_notify_new_max = 1;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v38);
      v12 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.offering_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)offering_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(offering_id);
      }
      v15 = *offering_id;
      OfferingMaxLevelInCurVersion = OfferingExcelConfigMgr::findOfferingMaxLevelInCurVersion(v12, v15);
      v14 = *(_BYTE *)(((unsigned __int64)&offering_info->last_version_max_level >> 3) + 0x7FFF8000);
      LOBYTE(v15) = v14 != 0;
      v16 = (v14 != 0) & (unsigned __int8)((char)((((_BYTE)offering_info + 60) & 7) + 3) >= v14);
      if ( (_BYTE)v16 )
        __asan_report_store4(&offering_info->last_version_max_level, v15, v16);
      offering_info->last_version_max_level = OfferingMaxLevelInCurVersion;
      std::shared_ptr<Config>::~shared_ptr(&v38);
    }
    else
    {
      offering_info_0 = std::map<unsigned int,OfferingInfo>::operator[](&this->offering_info_map_, offering_id);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v17 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.offering_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)offering_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(offering_id);
      }
      v18 = *offering_id;
      OfferingInitLevel = OfferingExcelConfigMgr::findOfferingInitLevel(v17, v18);
      v20 = *(_BYTE *)(((unsigned __int64)offering_info_0 >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v18) = v20 != 0;
        __asan_report_store4(offering_info_0, v18, OfferingInitLevel);
      }
      offering_info_0->level = OfferingInitLevel;
      std::shared_ptr<Config>::~shared_ptr(&v39);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v40);
      v21 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.offering_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)offering_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(offering_id);
      }
      v24 = *offering_id;
      v22 = OfferingExcelConfigMgr::findOfferingMaxLevelInCurVersion(v21, v24);
      v23 = *(_BYTE *)(((unsigned __int64)&offering_info_0->last_version_max_level >> 3) + 0x7FFF8000);
      LOBYTE(v24) = v23 != 0;
      v25 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)offering_info_0 + 60) & 7) + 3) >= v23);
      if ( (_BYTE)v25 )
        __asan_report_store4(&offering_info_0->last_version_max_level, v24, v25);
      offering_info_0->last_version_max_level = v22;
      std::shared_ptr<Config>::~shared_ptr(&v40);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v41 == (char *)v2 )
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

// Line 99: range 0000000016CC33AA-0000000016CC3643
int32_t __cdecl PlayerOfferingComp::notifyAllData(PlayerOfferingComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t result; // eax
  std::map<unsigned int,OfferingInfo>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,OfferingInfo>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,OfferingInfo> *__for_range; // [rsp+28h] [rbp-D8h]
  const std::pair<unsigned int const,OfferingInfo> *v8; // [rsp+30h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,OfferingInfo> >::type *offering_id; // [rsp+38h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,OfferingInfo> >::type *offering_info; // [rsp+40h] [rbp-C0h]
  proto::PlayerOfferingData *offering_proto; // [rsp+48h] [rbp-B8h]
  char v12[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:100";
  *(_QWORD *)(v1 + 16) = PlayerOfferingComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::PlayerOfferingDataNotify::PlayerOfferingDataNotify((proto::PlayerOfferingDataNotify *const)(v1 + 48));
  __for_range = &this->offering_info_map_;
  __for_begin._M_node = std::map<unsigned int,OfferingInfo>::begin(&this->offering_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,OfferingInfo>::end(&this->offering_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo>>::operator*(&__for_begin);
    offering_id = std::get<0ul,unsigned int const,OfferingInfo>(v8);
    offering_info = (std::tuple_element<1,const std::pair<unsigned int const,OfferingInfo> >::type *)std::get<1ul,unsigned int const,OfferingInfo>(v8);
    offering_proto = proto::PlayerOfferingDataNotify::add_offering_data_list((proto::PlayerOfferingDataNotify *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)offering_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(offering_id);
    }
    PlayerOfferingComp::fillClientInfo(this, *offering_id, offering_info, offering_proto);
    std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::PlayerOfferingDataNotify::~PlayerOfferingDataNotify((proto::PlayerOfferingDataNotify *const)(v1 + 48));
  result = 0;
  if ( v12 == (char *)v1 )
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
  return result;
};

// Line 111: range 0000000016CC3644-0000000016CC37FE
void __cdecl PlayerOfferingComp::fillClientInfo(
        const PlayerOfferingComp *const this,
        uint32_t offering_id,
        const OfferingInfo *offering_info,
        proto::PlayerOfferingData *offering_proto)
{
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-18h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-10h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  proto::PlayerOfferingData::set_offering_id(offering_proto, offering_id);
  if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(offering_info);
  }
  proto::PlayerOfferingData::set_level(offering_proto, offering_info->level);
  __for_range = &offering_info->taken_level_reward_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&offering_info->taken_level_reward_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&offering_info->taken_level_reward_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::PlayerOfferingData::add_taken_level_reward_list(offering_proto, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&offering_info->is_need_notify_new_max >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)offering_info + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&offering_info->is_need_notify_new_max >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&offering_info->is_need_notify_new_max);
  }
  proto::PlayerOfferingData::set_is_new_max_level(offering_proto, offering_info->is_need_notify_new_max);
  if ( *(char *)(((unsigned __int64)&offering_info->is_first_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&offering_info->is_first_interact);
  proto::PlayerOfferingData::set_is_first_interact(offering_proto, offering_info->is_first_interact);
};

// Line 124: range 0000000016CC3800-0000000016CC48BD
__int64 __fastcall PlayerOfferingComp::playerOffering(
        PlayerOfferingComp *const this,
        uint32_t offering_id,
        proto::PlayerOfferingRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerMpComp *MpComp; // rax
  char v13; // al
  PlayerSceneComp *SceneComp; // rax
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  PlayerBasicComp *BasicComp; // rcx
  PlayerActivityComp *ActivityComp; // rcx
  PlayerBasicComp *v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rcx
  Player *player; // r14
  __int64 result; // rax
  std::string v40; // [rsp+0h] [rbp-1D0h]
  bool v41; // [rsp+10h] [rbp-1C0h]
  PlayerItemComp *ItemComp; // [rsp+10h] [rbp-1C0h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-195h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-194h] BYREF
  const data::OfferingOpenStateConfig *open_state_config_ptr; // [rsp+40h] [rbp-190h]
  OfferingInfo *offering_info; // [rsp+48h] [rbp-188h]
  const data::OfferingLevelUpExcelConfig *level_up_config; // [rsp+50h] [rbp-180h]
  proto::PlayerOfferingData *offering_proto; // [rsp+58h] [rbp-178h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> v50; // [rsp+70h] [rbp-160h] BYREF
  common::milog::MiLogStream v51; // [rsp+80h] [rbp-150h] BYREF
  char v52[304]; // [rsp+A0h] [rbp-130h] BYREF

  *(&v40._anon_0._M_allocated_capacity + 1) = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v52;
  v40._M_string_length = (std::string::size_type)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 1 10 holder:164 48 4 7 ret:167 64 4 14 next_level:174 80 4 15 offering_id:123 96 16 11 log_"
                        "ptr:227 128 24 10 reason:187 192 24 23 add_item_result_vec:199";
  *(_QWORD *)(v3 + 16) = PlayerOfferingComp::playerOffering;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 80) = offering_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v50);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
  v41 = !OfferingExcelConfigMgr::isOfferingIdValid(
           &v6->design_config.txt_config_mgr.offering_config_mgr,
           *(_DWORD *)(v3 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
  if ( v41 )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "playerOffering",
      127);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v51, (const char (*)[13])"offering_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])off_25F2B4E0);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v9 = -1;
    goto LABEL_81;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v50);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
  open_state_config_ptr = data::OfferingExcelConfigMgrBase::findOfferingOpenStateConfig(
                            &v10->design_config.txt_config_mgr.offering_config_mgr,
                            *(_DWORD *)(v3 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
  if ( !open_state_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "playerOffering",
      133);
    v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v51,
            (const char (*)[36])"findOfferingOpenStateConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v51);
    v9 = -1;
    goto LABEL_81;
  }
  if ( *(char *)(((unsigned __int64)&open_state_config_ptr->is_allow_host_in_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&open_state_config_ptr->is_allow_host_in_mp_mode);
  if ( open_state_config_ptr->is_allow_host_in_mp_mode )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
    v13 = 1;
  else
LABEL_15:
    v13 = 0;
  if ( v13 )
  {
    v9 = 1202;
    goto LABEL_81;
  }
  if ( *(char *)(((unsigned __int64)&open_state_config_ptr->is_allow_host_in_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&open_state_config_ptr->is_allow_host_in_mp_mode);
  if ( !open_state_config_ptr->is_allow_host_in_mp_mode )
    goto LABEL_25;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    v15 = 1;
  else
LABEL_25:
    v15 = 0;
  if ( !v15 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v50);
    v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
    v40._anon_0._M_local_buf[0] = FeatureSwitchMgr::isOfferingIdClosed(&v19->feature_switch_mgr, *(_DWORD *)(v3 + 80));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
    if ( v40._anon_0._M_local_buf[0] )
    {
      v9 = 142;
      goto LABEL_81;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->open_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)open_state_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->open_state >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&open_state_config_ptr->open_state);
    }
    if ( !PlayerBasicComp::isStateOpen(BasicComp, open_state_config_ptr->open_state) )
    {
      v9 = 7081;
      goto LABEL_81;
    }
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)open_state_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&open_state_config_ptr->activity_id);
    }
    if ( open_state_config_ptr->activity_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ActivityComp = Player::getActivityComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)open_state_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&open_state_config_ptr->activity_id);
      }
      if ( !PlayerActivityComp::isActivityOpen(ActivityComp, open_state_config_ptr->activity_id) )
      {
        v9 = 860;
        goto LABEL_81;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v51, v22);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xBD6u, v40);
    std::string::~string(&v51);
    offering_info = std::map<unsigned int,OfferingInfo>::operator[](
                      &this->offering_info_map_,
                      (const std::map<unsigned int,OfferingInfo>::key_type *)(v3 + 80));
    *(_DWORD *)(v3 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->is_continuous_level_up >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)open_state_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->is_continuous_level_up >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&open_state_config_ptr->is_continuous_level_up);
    }
    if ( open_state_config_ptr->is_continuous_level_up )
    {
      *(_DWORD *)(v3 + 48) = PlayerOfferingComp::doContinousOffering(this, *(_DWORD *)(v3 + 80));
LABEL_75:
      offering_proto = proto::PlayerOfferingRsp::mutable_offering_data(*((proto::PlayerOfferingRsp *const *)&v40._anon_0._M_allocated_capacity
                                                                       + 1));
      PlayerOfferingComp::fillClientInfo(this, *(_DWORD *)(v3 + 80), offering_info, offering_proto);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyOfferingLevelUp>();
      v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyOfferingLevelUp::set_offering_id(v36, *(_DWORD *)(v3 + 80));
      v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(offering_info);
      }
      proto_log::PlayerLogBodyOfferingLevelUp::set_after_level(v37, offering_info->level);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v50, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyOfferingLevelUp,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyOfferingLevelUp> *)(v3 + 96));
      Player::printStatLog(player, &p_body_ptr, &v50, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v50);
      v9 = *(_DWORD *)(v3 + 48);
      std::shared_ptr<proto_log::PlayerLogBodyOfferingLevelUp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyOfferingLevelUp> *const)(v3 + 96));
      goto LABEL_80;
    }
    if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(offering_info);
    }
    *(_DWORD *)(v3 + 64) = offering_info->level + 1;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v50);
    v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
    level_up_config = OfferingExcelConfigMgr::findLevelUpConfig(
                        &v23->design_config.txt_config_mgr.offering_config_mgr,
                        *(_DWORD *)(v3 + 80),
                        *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
    if ( level_up_config )
    {
      if ( *(char *)(((unsigned __int64)&level_up_config->is_auto_take_reward >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&level_up_config->is_auto_take_reward);
      if ( !level_up_config->is_auto_take_reward )
      {
        *(_DWORD *)(v3 + 48) = PlayerOfferingComp::doStepOffering(this, *(_DWORD *)(v3 + 80));
        goto LABEL_75;
      }
      if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->item_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->item_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&open_state_config_ptr->item_limit);
      }
      ActionReason::ActionReason(
        (ActionReason *const)(v3 + 128),
        ACTION_REASON_OFFERGING_LEVEL,
        open_state_config_ptr->item_limit);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&level_up_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_up_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_up_config->reward_id);
      }
      val = level_up_config->reward_id;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v3 + 192),
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
        &__a);
      *(_DWORD *)(v3 + 48) = PlayerItemComp::checkGrantRewards(
                               ItemComp,
                               (const std::vector<unsigned int> *)(v3 + 192),
                               (const ActionReason *)(v3 + 128));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
      std::allocator<unsigned int>::~allocator(&__a);
      if ( !*(_DWORD *)(v3 + 48) )
      {
        *(_DWORD *)(v3 + 48) = PlayerOfferingComp::doStepOffering(this, *(_DWORD *)(v3 + 80));
        if ( *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/offering/player_offering_comp.cpp",
            "playerOffering",
            213);
          v31 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v51,
                  (const char (*)[36])"[LUMEN] doStepOffering failed, err=");
          v32 = common::milog::MiLogStream::operator<<<int,(int *)0>(v31, (const int *)(v3 + 48));
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v32,
                  (const char (*)[16])", offering_id: ");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v3 + 80));
          v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])", level: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v51);
        }
        else
        {
          std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v3 + 192));
          *(_DWORD *)(v3 + 48) = PlayerOfferingComp::takeLevelReward(
                                   this,
                                   *(_DWORD *)(v3 + 80),
                                   *(_DWORD *)(v3 + 64),
                                   (std::vector<AddItemResult> *)(v3 + 192));
          if ( *(_DWORD *)(v3 + 48) )
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/offering/player_offering_comp.cpp",
              "playerOffering",
              208);
            v28 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    &v51,
                    (const char (*)[54])"upgrade success but take reward failed, offering_id: ");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v3 + 80));
            v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])", level: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &offering_info->level);
            common::milog::MiLogStream::~MiLogStream(&v51);
          }
          else
          {
            v27 = proto::PlayerOfferingRsp::mutable_item_list(*((proto::PlayerOfferingRsp *const *)&v40._anon_0._M_allocated_capacity
                                                              + 1));
            ItemUtils::vecToProtoItemParam((const std::vector<AddItemResult> *)(v3 + 192), v27);
          }
          std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v3 + 192));
        }
        goto LABEL_75;
      }
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/offering/player_offering_comp.cpp",
        "playerOffering",
        191);
      v24 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v51,
              (const char (*)[54])"offering auto take reward check failed, offering_id: ");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 80));
      v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v25, (const char (*)[15])", next_level: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v51);
      v9 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v9 = 7082;
    }
LABEL_80:
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    goto LABEL_81;
  }
  common::milog::MiLogStream::create(
    &v51,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/offering/player_offering_comp.cpp",
    "playerOffering",
    144);
  v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v51, (const char (*)[14])"offering id: ");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 80));
  v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v17,
          (const char (*)[31])", only allow host, guest uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
  common::milog::MiLogStream::~MiLogStream(&v51);
  v9 = 1202;
LABEL_81:
  result = v9;
  if ( v40._M_string_length == v3 )
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

// Line 236: range 0000000016CC48BE-0000000016CC5112
__int64 __fastcall PlayerOfferingComp::doStepOffering(PlayerOfferingComp *const this, uint32_t offering_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  OfferingInfo *offering_info; // [rsp+28h] [rbp-128h]
  const data::OfferingOpenStateConfig *open_state_config_ptr; // [rsp+30h] [rbp-120h]
  const data::OfferingLevelUpExcelConfig *levelup_config_ptr; // [rsp+38h] [rbp-118h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+40h] [rbp-110h]
  const data::IdCountConfig *item_config; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v25; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 next_level:252 48 4 15 offering_id:235 64 8 10 reason:279 96 24 13 param_vec:266";
  *(_QWORD *)(v2 + 16) = PlayerOfferingComp::doStepOffering;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = offering_id;
  offering_info = std::map<unsigned int,OfferingInfo>::operator[](
                    &this->offering_info_map_,
                    (const std::map<unsigned int,OfferingInfo>::key_type *)(v2 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  open_state_config_ptr = data::OfferingExcelConfigMgrBase::findOfferingOpenStateConfig(
                            &v5->design_config.txt_config_mgr.offering_config_mgr,
                            *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( open_state_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->is_continuous_level_up >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)open_state_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->is_continuous_level_up >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&open_state_config_ptr->is_continuous_level_up);
    }
    if ( open_state_config_ptr->is_continuous_level_up )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/offering/player_offering_comp.cpp",
        "doStepOffering",
        247);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v26, (const char (*)[13])"offering_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])off_25F2B880);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v7 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(offering_info);
      }
      *(_DWORD *)(v2 + 32) = offering_info->level + 1;
      if ( PlayerOfferingComp::isOfferingLevelExceedLimit(this, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 32)) )
      {
        v7 = 7082;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v25);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
        levelup_config_ptr = OfferingExcelConfigMgr::findLevelUpConfig(
                               &v10->design_config.txt_config_mgr.offering_config_mgr,
                               *(_DWORD *)(v2 + 48),
                               *(_DWORD *)(v2 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v25);
        if ( levelup_config_ptr )
        {
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 96));
          __for_range = &levelup_config_ptr->consume_item_config_vec;
          __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&levelup_config_ptr->consume_item_config_vec)._M_current;
          *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 64) = std::vector<data::IdCountConfig>::end(&levelup_config_ptr->consume_item_config_vec);
          while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                    &__for_begin,
                    (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 64)) )
          {
            item_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)&item_config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&item_config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&item_config->id);
            }
            LODWORD(v25._M_ptr) = item_config->id;
            if ( *(_BYTE *)(((unsigned __int64)&item_config->count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config->count >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4(&item_config->count);
            }
            HIDWORD(v25._M_ptr) = item_config->count;
            v25._M_refcount._M_pi = 0LL;
            std::vector<ItemParam>::emplace_back<ItemParam>(
              (std::vector<ItemParam> *const)(v2 + 96),
              (ItemParam *)&v25,
              (ItemParam *)&v25);
            __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(this->player_);
          ret = PlayerItemComp::checkSubItemBatch(ItemComp, (const std::vector<ItemParam> *)(v2 + 96));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/offering/player_offering_comp.cpp",
              "doStepOffering",
              274);
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v26,
              (const char (*)[20])"checkSubItem fails!");
            common::milog::MiLogStream::~MiLogStream(&v26);
            v7 = ret;
          }
          else
          {
            SubItemReason::SubItemReason((SubItemReason *const)(v2 + 64), ACTION_REASON_OFFERING_ITEM);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v15 = Player::getItemComp(this->player_);
            if ( PlayerItemComp::subItemBatch(
                   v15,
                   (const std::vector<ItemParam> *)(v2 + 96),
                   (const SubItemReason *)(v2 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v26,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/offering/player_offering_comp.cpp",
                "doStepOffering",
                282);
              v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v26,
                      (const char (*)[22])"subItem fails! count:");
              common::milog::MiLogStream::operator<<<ItemParam>(v16, (const std::vector<ItemParam> *)(v2 + 96));
              common::milog::MiLogStream::~MiLogStream(&v26);
              v7 = -1;
            }
            else
            {
              PlayerOfferingComp::upgradeLevel(this, *(_DWORD *)(v2 + 48), levelup_config_ptr);
              v7 = 0;
            }
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 96));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/offering/player_offering_comp.cpp",
            "doStepOffering",
            262);
          v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v26,
                  (const char (*)[51])"next offering level config not found, offering_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" next_level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v26);
          v7 = -1;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "doStepOffering",
      242);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v26,
           (const char (*)[36])"findOfferingOpenStateConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v7 = -1;
  }
  result = v7;
  if ( v27 == (char *)v2 )
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

// Line 290: range 0000000016CC5114-0000000016CC5AB6
__int64 __fastcall PlayerOfferingComp::doContinousOffering(PlayerOfferingComp *const this, uint32_t offering_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  OfferingExcelConfigMgr *p_offering_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rcx
  PlayerItemComp *ItemComp; // rax
  int v13; // r14d
  PlayerItemComp *v14; // rax
  common::milog::MiLogStream *v15; // rax
  bool is_succ; // [rsp+13h] [rbp-13Dh]
  unsigned int val; // [rsp+14h] [rbp-13Ch] BYREF
  int32_t ret; // [rsp+18h] [rbp-138h]
  int32_t ret_0; // [rsp+1Ch] [rbp-134h]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  const data::OfferingOpenStateConfig *open_state_config_ptr; // [rsp+28h] [rbp-128h]
  OfferingInfo *offering_info; // [rsp+30h] [rbp-120h]
  const data::OfferingLevelUpExcelConfig *levelup_config_ptr; // [rsp+38h] [rbp-118h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+40h] [rbp-110h]
  const data::IdCountConfig *item_config; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 offering_id:289 64 8 10 reason:341 96 24 13 param_vec:323";
  *(_QWORD *)(v2 + 16) = PlayerOfferingComp::doContinousOffering;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = offering_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  open_state_config_ptr = data::OfferingExcelConfigMgrBase::findOfferingOpenStateConfig(
                            &v5->design_config.txt_config_mgr.offering_config_mgr,
                            *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( open_state_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->is_continuous_level_up >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)open_state_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->is_continuous_level_up >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&open_state_config_ptr->is_continuous_level_up);
    }
    if ( !open_state_config_ptr->is_continuous_level_up )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/offering/player_offering_comp.cpp",
        "doContinousOffering",
        299);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v27, (const char (*)[13])"offering_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])off_25F2B880);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      offering_info = std::map<unsigned int,OfferingInfo>::operator[](
                        &this->offering_info_map_,
                        (const std::map<unsigned int,OfferingInfo>::key_type *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(offering_info);
      }
      if ( PlayerOfferingComp::isOfferingLevelExceedLimit(this, *(_DWORD *)(v2 + 48), offering_info->level + 1) )
      {
        result = 7082LL;
      }
      else
      {
        is_succ = 0;
        ret = 0;
        do
        {
          if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(offering_info);
          }
          if ( PlayerOfferingComp::isOfferingLevelExceedLimit(this, *(_DWORD *)(v2 + 48), offering_info->level + 1) )
            break;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          p_offering_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.offering_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(offering_info);
          }
          levelup_config_ptr = OfferingExcelConfigMgr::findLevelUpConfig(
                                 p_offering_config_mgr,
                                 *(_DWORD *)(v2 + 48),
                                 offering_info->level + 1);
          std::shared_ptr<Config>::~shared_ptr(&v26);
          if ( !levelup_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/offering/player_offering_comp.cpp",
              "doContinousOffering",
              319);
            v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v27,
                    (const char (*)[35])"levelup_config_ptr is null, level:");
            if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(offering_info);
            }
            val = offering_info->level + 1;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
            common::milog::MiLogStream::~MiLogStream(&v27);
            break;
          }
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 96));
          __for_range = &levelup_config_ptr->consume_item_config_vec;
          __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&levelup_config_ptr->consume_item_config_vec)._M_current;
          *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 64) = std::vector<data::IdCountConfig>::end(__for_range);
          while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                    &__for_begin,
                    (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 64)) )
          {
            item_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)&item_config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&item_config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&item_config->id);
            }
            if ( item_config->id )
            {
              if ( *(_BYTE *)(((unsigned __int64)&item_config->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&item_config->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&item_config->id);
              }
              LODWORD(v26._M_ptr) = item_config->id;
              if ( *(_BYTE *)(((unsigned __int64)&item_config->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config->count >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(&item_config->count);
              }
              HIDWORD(v26._M_ptr) = item_config->count;
              v26._M_refcount._M_pi = 0LL;
              std::vector<ItemParam>::emplace_back<ItemParam>(
                (std::vector<ItemParam> *const)(v2 + 96),
                (ItemParam *)&v26,
                (ItemParam *)&v26);
            }
            __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(this->player_);
          ret_0 = PlayerItemComp::checkSubItemBatch(ItemComp, (const std::vector<ItemParam> *)(v2 + 96));
          if ( ret_0 )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/offering/player_offering_comp.cpp",
              "doContinousOffering",
              332);
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v27,
              (const char (*)[20])"checkSubItem fails!");
            common::milog::MiLogStream::~MiLogStream(&v27);
            is_succ = 0;
            if ( ret_0 == 609 )
              ret_0 = 0;
            v13 = 0;
          }
          else
          {
            SubItemReason::SubItemReason((SubItemReason *const)(v2 + 64), ACTION_REASON_OFFERING_ITEM);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v14 = Player::getItemComp(this->player_);
            ret_0 = PlayerItemComp::subItemBatch(
                      v14,
                      (const std::vector<ItemParam> *)(v2 + 96),
                      (const SubItemReason *)(v2 + 64));
            if ( ret_0 )
            {
              common::milog::MiLogStream::create(
                &v27,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/offering/player_offering_comp.cpp",
                "doContinousOffering",
                345);
              v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v27,
                      (const char (*)[22])"subItem fails! count:");
              common::milog::MiLogStream::operator<<<ItemParam>(v15, (const std::vector<ItemParam> *)(v2 + 96));
              common::milog::MiLogStream::~MiLogStream(&v27);
              v13 = 0;
            }
            else
            {
              PlayerOfferingComp::upgradeLevel(this, *(_DWORD *)(v2 + 48), levelup_config_ptr);
              is_succ = 1;
              v13 = 1;
            }
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 96));
        }
        while ( v13 == 1 && is_succ );
        result = (unsigned int)ret;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "doContinousOffering",
      294);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v27,
           (const char (*)[36])"findOfferingOpenStateConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  if ( v28 == (char *)v2 )
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

// Line 357: range 0000000016CC5AB8-0000000016CC5DE1
__int64 __fastcall PlayerOfferingComp::upgradeLevel(
        PlayerOfferingComp *const this,
        uint32_t offering_id,
        const data::OfferingLevelUpExcelConfig *level_up_config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  uint32_t level; // ecx
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  PlayerBasicComp *BasicComp; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  OfferingInfo *offering_info; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-A0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 offering_id:356 64 16 13 event_ptr:369";
  *(_QWORD *)(v3 + 16) = PlayerOfferingComp::upgradeLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = offering_id;
  offering_info = std::map<unsigned int,OfferingInfo>::operator[](
                    &this->offering_info_map_,
                    (const std::map<unsigned int,OfferingInfo>::key_type *)(v3 + 48));
  v6 = (((_BYTE)level_up_config + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&level_up_config->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)level_up_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_up_config->level >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&level_up_config->level);
  }
  level = level_up_config->level;
  v8 = *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(offering_info, v6, offering_info);
  }
  offering_info->level = level;
  v9 = ((_BYTE)offering_info + 57) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&offering_info->is_need_notify_new_max >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&offering_info->is_need_notify_new_max >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&offering_info->is_need_notify_new_max, v9, v10);
  offering_info->is_need_notify_new_max = 0;
  PlayerOfferingComp::execAction(this, level_up_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::onOpenStateCond(BasicComp, OPEN_STATE_OFFERING_LEVEL, *(_DWORD *)(v3 + 48));
  common::tools::perf::make_shared<OfferingLevelupEvent,unsigned int &,unsigned int &>(
    (unsigned int *)(v3 + 64),
    (unsigned int *)(v3 + 48),
    &offering_info->level,
    (unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr<OfferingLevelupEvent,void>(
    &p_event_ptr,
    (const std::shared_ptr<OfferingLevelupEvent> *)(v3 + 64));
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<OfferingLevelupEvent>::~shared_ptr((std::shared_ptr<OfferingLevelupEvent> *const)(v3 + 64));
  result = 0LL;
  if ( v17 == (char *)v3 )
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

// Line 375: range 0000000016CC5DE2-0000000016CC6D43
void __cdecl PlayerOfferingComp::execAction(
        PlayerOfferingComp *const this,
        const data::OfferingLevelUpExcelConfig *offering_levelup_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::OfferingActionType action_type; // eax
  const char *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerRoutineComp *RoutineComp; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const char *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerRoutineComp *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t v24; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  __int64 v28; // rsi
  uint32_t offering_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  char v31; // cl
  uint32_t v32; // r14d
  __int64 v33; // rax
  char v34; // dl
  __int64 v35; // rdx
  Group *v36; // rax
  bool v37; // r14
  common::milog::MiLogStream *v38; // rax
  PlayerSceneComp *SceneComp; // r15
  std::vector<unsigned int>::reference v40; // rax
  uint32_t *v41; // rdx
  uint32_t v42; // r14d
  std::vector<unsigned int>::reference v43; // rax
  uint32_t *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  std::allocator<char> __a; // [rsp+27h] [rbp-159h] BYREF
  unsigned int val; // [rsp+28h] [rbp-158h] BYREF
  uint32_t level; // [rsp+2Ch] [rbp-154h]
  std::vector<data::OfferingActionContent>::const_iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::vector<data::OfferingActionContent>::const_iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  const std::vector<data::OfferingActionContent> *__for_range; // [rsp+40h] [rbp-140h]
  const data::OfferingActionContent *action; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v54; // [rsp+50h] [rbp-130h] BYREF
  char v55[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 12 group_id:410 48 4 12 scene_id:417 64 16 13 scene_ptr:418 96 16 13 group_ptr:424 128 16"
                        " 13 event_ptr:431 160 24 13 param_vec:442";
  *(_QWORD *)(v2 + 16) = PlayerOfferingComp::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  __for_range = &offering_levelup_config->action_vec;
  __for_begin._M_current = std::vector<data::OfferingActionContent>::begin(&offering_levelup_config->action_vec)._M_current;
  __for_end._M_current = std::vector<data::OfferingActionContent>::end(&offering_levelup_config->action_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::OfferingActionContent const*,std::vector<data::OfferingActionContent>>(
            &__for_begin,
            &__for_end) )
  {
    action = __gnu_cxx::__normal_iterator<data::OfferingActionContent const*,std::vector<data::OfferingActionContent>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&action->action_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&action->action_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&action->action_type);
    }
    action_type = action->action_type;
    if ( action_type == OFFERING_ACTION_SET_GADGET_CHAIN_LEVEL )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v54, ",", &__a);
      v37 = common::tools::StringUtils::splitToList<unsigned int>(
              &action->param,
              (const std::string *)&v54,
              (std::vector<unsigned int> *)(v2 + 160),
              0) != 0;
      std::string::~string(&v54);
      std::allocator<char>::~allocator(&__a);
      if ( v37 )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/offering/player_offering_comp.cpp",
          "execAction",
          445);
        v38 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v54,
                (const char (*)[20])"splitToList fails, ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v38, &action->param);
        common::milog::MiLogStream::~MiLogStream(&v54);
      }
      else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 160)) > 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        v40 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 160), 1uLL);
        v41 = v40;
        if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v40);
        }
        v42 = *v41;
        v43 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 160), 0LL);
        v44 = v43;
        if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v43);
        }
        PlayerSceneComp::setGadgetChainLevel(SceneComp, *v44, v42, 1);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/offering/player_offering_comp.cpp",
          "execAction",
          450);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v54, (const char (*)[18])"param less than 2");
        common::milog::MiLogStream::~MiLogStream(&v54);
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
    }
    else
    {
      if ( action_type > OFFERING_ACTION_SET_GADGET_CHAIN_LEVEL )
        goto LABEL_65;
      switch ( action_type )
      {
        case OFFERING_ACTION_NOTIFY_GROUP:
          *(_DWORD *)(v2 + 32) = 0;
          if ( common::tools::StringUtils::strToNum<unsigned int>(&action->param, (unsigned int *)(v2 + 32), 1) )
          {
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/offering/player_offering_comp.cpp",
              "execAction",
              413);
            v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v54,
                    (const char (*)[17])"strToNum fails, ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &action->param);
            common::milog::MiLogStream::~MiLogStream(&v54);
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v2 + 128));
            v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            *(_DWORD *)(v2 + 48) = LuaConfigMgr::getSceneIdByGroupId(
                                     &v18->design_config.lua_config_mgr,
                                     *(_DWORD *)(v2 + 32));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v19 = (unsigned int)Player::getSceneComp(this->player_);
            PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 64), v19);
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v54,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/offering/player_offering_comp.cpp",
                "execAction",
                421);
              v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      &v54,
                      (const char (*)[20])"findScene scene_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v2 + 48));
              v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v21,
                      (const char (*)[11])" group_id:");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v22,
                      (const unsigned int *)(v2 + 32));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" fails");
              common::milog::MiLogStream::~MiLogStream(&v54);
            }
            else
            {
              v24 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              Scene::findGroup((Scene *const)(v2 + 96), v24);
              if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 96)) )
              {
                common::milog::MiLogStream::create(
                  &v54,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/offering/player_offering_comp.cpp",
                  "execAction",
                  427);
                v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        &v54,
                        (const char (*)[11])"findGroup:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v2 + 32));
                v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v26,
                        (const char (*)[13])" fails, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
                common::milog::MiLogStream::~MiLogStream(&v54);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&offering_levelup_config->offering_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&offering_levelup_config->offering_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&offering_levelup_config->offering_id);
                }
                level = PlayerOfferingComp::findOfferingLevel(this, offering_levelup_config->offering_id);
                EventUtil::createEvent((data::EventType)(v2 + 128));
                v28 = 0LL;
                if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 128), 0LL) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&offering_levelup_config->offering_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&offering_levelup_config->offering_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&offering_levelup_config->offering_id);
                  }
                  offering_id = offering_levelup_config->offering_id;
                  v30 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  v31 = *(_BYTE *)(((unsigned __int64)&v30->param1 >> 3) + 0x7FFF8000);
                  if ( v31 != 0 && (char)((((_BYTE)v30 + 44) & 7) + 3) >= v31 )
                  {
                    LOBYTE(v28) = v31 != 0;
                    __asan_report_store4(&v30->param1, v28, v30);
                  }
                  v30->param1 = offering_id;
                  v32 = level;
                  v33 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  v34 = *(_BYTE *)(((unsigned __int64)(v33 + 48) >> 3) + 0x7FFF8000);
                  LOBYTE(v28) = v34 != 0;
                  v35 = (v34 != 0) & (unsigned __int8)(v34 <= 3);
                  if ( (_BYTE)v35 )
                    v33 = __asan_report_store4(v33 + 48, v28, v35);
                  *(_DWORD *)(v33 + 48) = v32;
                  v36 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                  Group::handleEvent(v36, (EventPtr *)(v2 + 128));
                }
                std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 128));
              }
              std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
          }
          break;
        case OFFERING_ACTION_OPEN_ROUTINE:
          *(_DWORD *)(v2 + 48) = 0;
          v6 = (const char *)std::string::c_str(&action->param);
          if ( data::enumNameToVal(v6, (data::GeneralRoutineType *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/offering/player_offering_comp.cpp",
              "execAction",
              385);
            v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v54, (const char (*)[24])off_25F2BBC0);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &action->param);
            common::milog::MiLogStream::~MiLogStream(&v54);
            break;
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          RoutineComp = Player::getRoutineComp(this->player_);
          if ( PlayerRoutineComp::openRoutineType(RoutineComp, *(_DWORD *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/offering/player_offering_comp.cpp",
              "execAction",
              390);
            v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                   &v54,
                   (const char (*)[37])"openRoutineType fails, routine_type:");
            v10 = common::milog::MiLogStream::operator<<<data::GeneralRoutineType,(data::GeneralRoutineType*)0>(
                    v9,
                    (const data::GeneralRoutineType *)(v2 + 48));
            v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_21;
          }
          break;
        case OFFERING_ACTION_CLOSE_ROUTINE:
          *(_DWORD *)(v2 + 48) = 0;
          v12 = (const char *)std::string::c_str(&action->param);
          if ( data::enumStrToVal(v12, (data::GeneralRoutineType *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/offering/player_offering_comp.cpp",
              "execAction",
              399);
            v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v54,
                    (const char (*)[24])off_25F2BBC0);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &action->param);
            common::milog::MiLogStream::~MiLogStream(&v54);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v14 = Player::getRoutineComp(this->player_);
            if ( PlayerRoutineComp::closeRoutineType(v14, *(_DWORD *)(v2 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v54,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/offering/player_offering_comp.cpp",
                "execAction",
                404);
              v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v54,
                      (const char (*)[38])"closeRoutineType fails, routine_type:");
              v16 = common::milog::MiLogStream::operator<<<data::GeneralRoutineType,(data::GeneralRoutineType*)0>(
                      v15,
                      (const data::GeneralRoutineType *)(v2 + 48));
              v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
LABEL_21:
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
              common::milog::MiLogStream::~MiLogStream(&v54);
            }
          }
          break;
        default:
LABEL_65:
          common::milog::MiLogStream::create(
            &v54,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/offering/player_offering_comp.cpp",
            "execAction",
            457);
          v45 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v54, (const char (*)[25])off_25F2BDC0);
          common::milog::MiLogStream::operator<<<data::OfferingActionType,(data::OfferingActionType*)0>(
            v45,
            &action->action_type);
          common::milog::MiLogStream::~MiLogStream(&v54);
          break;
      }
    }
    __gnu_cxx::__normal_iterator<data::OfferingActionContent const*,std::vector<data::OfferingActionContent>>::operator++(&__for_begin);
  }
  if ( v55 == (char *)v2 )
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

// Line 465: range 0000000016CC6D44-0000000016CC7D2E
__int64 __fastcall PlayerOfferingComp::takeLevelReward(
        PlayerOfferingComp *const this,
        __int32 offering_id,
        __int32 level,
        std::vector<AddItemResult> *add_item_result_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerMpComp *MpComp; // rax
  char v15; // al
  PlayerSceneComp *SceneComp; // rax
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  bool isOfferingIdClosed; // r14
  PlayerBasicComp *BasicComp; // rcx
  PlayerActivityComp *ActivityComp; // rcx
  bool *p_is_need_notify_new_max; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  PlayerItemComp *ItemComp; // rcx
  PlayerBasicComp *v33; // rax
  PlayerItemComp *p_reward_id; // rdi
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rcx
  Player *player; // r14
  std::string v43; // [rsp+0h] [rbp-180h]
  std::vector<AddItemResult> *add_item_result_veca; // [rsp+8h] [rbp-178h]
  PlayerOfferingComp *thisa; // [rsp+18h] [rbp-168h]
  unsigned int val; // [rsp+2Ch] [rbp-154h] BYREF
  data::ItemLimitType limit_type; // [rsp+30h] [rbp-150h]
  int32_t ret; // [rsp+34h] [rbp-14Ch]
  const data::OfferingOpenStateConfig *open_state_config_ptr; // [rsp+38h] [rbp-148h]
  OfferingInfo *offering_info; // [rsp+40h] [rbp-140h]
  const data::OfferingLevelUpExcelConfig *levelup_config_ptr; // [rsp+48h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v53; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v54; // [rsp+70h] [rbp-110h] BYREF
  char v55[240]; // [rsp+90h] [rbp-F0h] BYREF

  *(&v43._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v43._anon_0._M_allocated_capacity) = offering_id;
  *(_DWORD *)v43._anon_0._M_local_buf = level;
  v43._M_string_length = (std::string::size_type)add_item_result_vec;
  v4 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 1 10 holder:534 64 4 15 offering_id:464 80 4 9 level:464 96 16 11 log_ptr:540 128 24 10 reason:524";
  *(_QWORD *)(v4 + 16) = PlayerOfferingComp::takeLevelReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 64) = offering_id;
  *(_DWORD *)(v4 + 80) = *(_DWORD *)v43._anon_0._M_local_buf;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v53);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
  v8 = !OfferingExcelConfigMgr::isOfferingIdValid(
          &v7->design_config.txt_config_mgr.offering_config_mgr,
          *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "takeLevelReward",
      468);
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v54, (const char (*)[13])"offering_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])off_25F2B4E0);
    common::milog::MiLogStream::~MiLogStream(&v54);
    result = 0xFFFFFFFFLL;
    goto LABEL_86;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v53);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
  open_state_config_ptr = data::OfferingExcelConfigMgrBase::findOfferingOpenStateConfig(
                            &v12->design_config.txt_config_mgr.offering_config_mgr,
                            *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
  if ( !open_state_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "takeLevelReward",
      474);
    v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v54,
            (const char (*)[36])"findOfferingOpenStateConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v54);
    result = 0xFFFFFFFFLL;
    goto LABEL_86;
  }
  if ( *(char *)(((unsigned __int64)&open_state_config_ptr->is_allow_host_in_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&open_state_config_ptr->is_allow_host_in_mp_mode);
  if ( open_state_config_ptr->is_allow_host_in_mp_mode )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
    v15 = 1;
  else
LABEL_15:
    v15 = 0;
  if ( v15 )
  {
    result = 1202LL;
    goto LABEL_86;
  }
  if ( *(char *)(((unsigned __int64)&open_state_config_ptr->is_allow_host_in_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&open_state_config_ptr->is_allow_host_in_mp_mode);
  if ( !open_state_config_ptr->is_allow_host_in_mp_mode )
    goto LABEL_25;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    v17 = 1;
  else
LABEL_25:
    v17 = 0;
  if ( v17 )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/offering/player_offering_comp.cpp",
      "takeLevelReward",
      485);
    v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v54, (const char (*)[14])"offering id: ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
    v20 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v19,
            (const char (*)[31])", only allow host, guest uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
    common::milog::MiLogStream::~MiLogStream(&v54);
    result = 1202LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v53);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
    isOfferingIdClosed = FeatureSwitchMgr::isOfferingIdClosed(&v21->feature_switch_mgr, *(_DWORD *)(v4 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
    if ( isOfferingIdClosed )
    {
      result = 142LL;
      goto LABEL_86;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->open_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)open_state_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->open_state >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&open_state_config_ptr->open_state);
    }
    if ( !PlayerBasicComp::isStateOpen(BasicComp, open_state_config_ptr->open_state) )
    {
      result = 7081LL;
      goto LABEL_86;
    }
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)open_state_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&open_state_config_ptr->activity_id);
    }
    if ( open_state_config_ptr->activity_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ActivityComp = Player::getActivityComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)open_state_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&open_state_config_ptr->activity_id);
      }
      if ( !PlayerActivityComp::isActivityOpen(ActivityComp, open_state_config_ptr->activity_id) )
      {
        result = 860LL;
        goto LABEL_86;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->item_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->item_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&open_state_config_ptr->item_limit);
    }
    limit_type = open_state_config_ptr->item_limit;
    offering_info = std::map<unsigned int,OfferingInfo>::operator[](
                      &this->offering_info_map_,
                      (const std::map<unsigned int,OfferingInfo>::key_type *)(v4 + 64));
    p_is_need_notify_new_max = &offering_info->is_need_notify_new_max;
    v26 = ((_BYTE)offering_info + 57) & 7;
    v27 = (*(_BYTE *)(((unsigned __int64)p_is_need_notify_new_max >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)p_is_need_notify_new_max >> 3) + 0x7FFF8000));
    if ( (_BYTE)v27 )
      __asan_report_store1(p_is_need_notify_new_max, v26, v27);
    offering_info->is_need_notify_new_max = 0;
    if ( std::set<unsigned int>::count(
           &offering_info->taken_level_reward_set,
           (const std::set<unsigned int>::key_type *)(v4 + 80)) )
    {
      result = 7084LL;
      goto LABEL_86;
    }
    if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(offering_info);
    }
    if ( offering_info->level < *(_DWORD *)(v4 + 80) )
    {
      result = 7083LL;
      goto LABEL_86;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v53);
    v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
    levelup_config_ptr = OfferingExcelConfigMgr::findLevelUpConfig(
                           &v28->design_config.txt_config_mgr.offering_config_mgr,
                           *(_DWORD *)(v4 + 64),
                           *(_DWORD *)(v4 + 80));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
    if ( !levelup_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/offering/player_offering_comp.cpp",
        "takeLevelReward",
        521);
      v29 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v54,
              (const char (*)[26])"findLevelUpConfig fails, ");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 64));
      v31 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v30, (const char (*)[2])",");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v54);
      result = 0xFFFFFFFFLL;
      goto LABEL_86;
    }
    ActionReason::ActionReason((ActionReason *const)(v4 + 128), ACTION_REASON_OFFERGING_LEVEL, limit_type);
    if ( *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&levelup_config_ptr->reward_id);
    }
    if ( levelup_config_ptr->reward_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config_ptr->reward_id);
      }
      ret = PlayerItemComp::checkGrantReward(ItemComp, levelup_config_ptr->reward_id, (const ActionReason *)(v4 + 128));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/offering/player_offering_comp.cpp",
          "takeLevelReward",
          530);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v54,
          (const char (*)[23])"checkGrantReward fails");
        common::milog::MiLogStream::~MiLogStream(&v54);
        result = (unsigned int)ret;
        goto LABEL_86;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v33 = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v54, v33);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xBD7u, v43);
      std::string::~string(&v54);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_reward_id = Player::getItemComp(thisa->player_);
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_reward_id = (PlayerItemComp *)&levelup_config_ptr->reward_id;
        __asan_report_load4(&levelup_config_ptr->reward_id);
      }
      if ( PlayerItemComp::grantReward(
             p_reward_id,
             levelup_config_ptr->reward_id,
             (const ActionReason *)(v4 + 128),
             add_item_result_veca) )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/offering/player_offering_comp.cpp",
          "takeLevelReward",
          537);
        v35 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v54,
                (const char (*)[24])"grantReward fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(thisa->player_);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
        v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v36, (const char (*)[12])" reward_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &levelup_config_ptr->reward_id);
        common::milog::MiLogStream::~MiLogStream(&v54);
      }
      common::tools::perf::make_shared<proto_log::PlayerLogBodyOfferingTakeLevelReward>();
      v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyOfferingTakeLevelReward::set_offering_id(v38, *(_DWORD *)(v4 + 64));
      v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(offering_info);
      }
      proto_log::PlayerLogBodyOfferingTakeLevelReward::set_level(v39, offering_info->level);
      v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyOfferingTakeLevelReward::set_take_level(v40, *(_DWORD *)(v4 + 80));
      v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOfferingTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config_ptr->reward_id);
      }
      proto_log::PlayerLogBodyOfferingTakeLevelReward::set_reward_id(v41, levelup_config_ptr->reward_id);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v53, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyOfferingTakeLevelReward,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyOfferingTakeLevelReward> *)(v4 + 96));
      Player::printStatLog(player, &p_body_ptr, &v53, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v53);
      std::shared_ptr<proto_log::PlayerLogBodyOfferingTakeLevelReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyOfferingTakeLevelReward> *const)(v4 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
    }
    std::set<unsigned int>::insert(
      &offering_info->taken_level_reward_set,
      (const std::set<unsigned int>::value_type *)(v4 + 80));
    result = 0LL;
  }
LABEL_86:
  if ( v55 == (char *)v4 )
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

// Line 554: range 0000000016CC7D30-0000000016CC7F18
__int64 __fastcall PlayerOfferingComp::clearByGm(PlayerOfferingComp *const this, uint32_t offering_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-A0h] BYREF
  char v9[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 offering_id:553 64 8 8 iter:555";
  *(_QWORD *)(v2 + 16) = PlayerOfferingComp::clearByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = offering_id;
  *(std::map<unsigned int,OfferingInfo>::iterator *)(v2 + 64) = std::map<unsigned int,OfferingInfo>::find(
                                                                  &this->offering_info_map_,
                                                                  (const std::map<unsigned int,OfferingInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,OfferingInfo>::end(&this->offering_info_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,OfferingInfo> >::_Self *)(v2 + 64),
         &__y) )
  {
    std::map<unsigned int,OfferingInfo>::erase[abi:cxx11](
      &this->offering_info_map_,
      *(std::map<unsigned int,OfferingInfo>::iterator *)(v2 + 64));
  }
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/offering/player_offering_comp.cpp",
    "clearByGm",
    560);
  v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
         &v8,
         (const char (*)[23])"clearByGm offering_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v8);
  result = 0LL;
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

// Line 565: range 0000000016CC7F1A-0000000016CC846C
__int64 __fastcall PlayerOfferingComp::setLevelByGm(
        PlayerOfferingComp *const this,
        uint32_t offering_id,
        uint32_t dst_level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerEventComp *EventComp; // r14
  void (__fastcall **v13)(PlayerOfferingComp *const); // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  uint32_t lv; // [rsp+10h] [rbp-E0h]
  uint32_t old_level; // [rsp+14h] [rbp-DCh]
  const data::OfferingLevelUpExcelConfig *levelup_config_ptr; // [rsp+18h] [rbp-D8h]
  OfferingInfo *offering_info; // [rsp+20h] [rbp-D0h]
  const data::OfferingLevelUpExcelConfig *lv_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 offering_id:564 48 4 13 dst_level:564 64 16 13 event_ptr:587";
  *(_QWORD *)(v3 + 16) = PlayerOfferingComp::setLevelByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = offering_id;
  *(_DWORD *)(v3 + 48) = dst_level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  levelup_config_ptr = OfferingExcelConfigMgr::findLevelUpConfig(
                         &v6->design_config.txt_config_mgr.offering_config_mgr,
                         *(_DWORD *)(v3 + 32),
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( levelup_config_ptr )
  {
    offering_info = std::map<unsigned int,OfferingInfo>::operator[](
                      &this->offering_info_map_,
                      (const std::map<unsigned int,OfferingInfo>::key_type *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)offering_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(offering_info);
    }
    old_level = offering_info->level;
    offering_info->level = *(_DWORD *)(v3 + 48);
    for ( lv = old_level + 1; lv <= *(_DWORD *)(v3 + 48); ++lv )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
      lv_config_ptr = OfferingExcelConfigMgr::findLevelUpConfig(
                        &v11->design_config.txt_config_mgr.offering_config_mgr,
                        *(_DWORD *)(v3 + 32),
                        lv);
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( lv_config_ptr )
        PlayerOfferingComp::execAction(this, lv_config_ptr);
    }
    common::tools::perf::make_shared<OfferingLevelupEvent,unsigned int &,unsigned int &>(
      (unsigned int *)(v3 + 64),
      (unsigned int *)(v3 + 32),
      &offering_info->level,
      (unsigned int *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<OfferingLevelupEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&v24,
      (const std::shared_ptr<OfferingLevelupEvent> *)(v3 + 64));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v24);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v24);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (void (__fastcall **)(PlayerOfferingComp *const))(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v13)(this);
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/offering/player_offering_comp.cpp",
      "setLevelByGm",
      593);
    v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v25,
            (const char (*)[26])"setLevelByGm offering_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    v10 = 0;
    std::shared_ptr<OfferingLevelupEvent>::~shared_ptr((std::shared_ptr<OfferingLevelupEvent> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "setLevelByGm",
      569);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v25,
           (const char (*)[26])"findLevelUpConfig fails, ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v8, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    v10 = -1;
  }
  result = v10;
  if ( v26 == (char *)v3 )
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

// Line 598: range 0000000016CC846E-0000000016CC85F2
__int64 __fastcall PlayerOfferingComp::findOfferingLevel(const PlayerOfferingComp *const this, uint32_t offering_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,OfferingInfo> >::pointer v5; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,OfferingInfo> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 offering_id:597 64 8 8 iter:599";
  *(_QWORD *)(v2 + 16) = PlayerOfferingComp::findOfferingLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = offering_id;
  *(std::map<unsigned int,OfferingInfo>::const_iterator *)(v2 + 64) = std::map<unsigned int,OfferingInfo>::find(
                                                                        &this->offering_info_map_,
                                                                        (const std::map<unsigned int,OfferingInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,OfferingInfo>::end(&this->offering_info_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,OfferingInfo> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,OfferingInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,OfferingInfo> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v5->second);
    }
    result = v5->second.level;
  }
  else
  {
    result = 0LL;
  }
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
  return result;
};

// Line 608: range 0000000016CC85F4-0000000016CC8B14
__int64 __fastcall PlayerOfferingComp::checkOfferingAvailability(
        const PlayerOfferingComp *const this,
        uint32_t offering_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool isOfferingIdClosed; // r14
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerBasicComp *BasicComp; // rcx
  PlayerActivityComp *ActivityComp; // rcx
  const data::OfferingOpenStateConfig *open_state_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 offering_id:607";
  *(_QWORD *)(v2 + 16) = PlayerOfferingComp::checkOfferingAvailability;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = offering_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  isOfferingIdClosed = FeatureSwitchMgr::isOfferingIdClosed(&v5->feature_switch_mgr, *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( isOfferingIdClosed )
  {
    result = 142LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    v9 = !OfferingExcelConfigMgr::isOfferingIdValid(
            &v8->design_config.txt_config_mgr.offering_config_mgr,
            *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/offering/player_offering_comp.cpp",
        "checkOfferingAvailability",
        615);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v18, (const char (*)[13])"offering_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])off_25F2B4E0);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
      open_state_config_ptr = data::OfferingExcelConfigMgrBase::findOfferingOpenStateConfig(
                                &v12->design_config.txt_config_mgr.offering_config_mgr,
                                *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v17);
      if ( open_state_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->open_state >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)open_state_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->open_state >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&open_state_config_ptr->open_state);
        }
        if ( !PlayerBasicComp::isStateOpen(BasicComp, open_state_config_ptr->open_state) )
        {
          result = 7081LL;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)open_state_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&open_state_config_ptr->activity_id);
          }
          if ( !open_state_config_ptr->activity_id )
            goto LABEL_25;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ActivityComp = Player::getActivityComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)open_state_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&open_state_config_ptr->activity_id);
          }
          if ( !PlayerActivityComp::isActivityOpen(ActivityComp, open_state_config_ptr->activity_id) )
            result = 860LL;
          else
LABEL_25:
            result = 0LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/offering/player_offering_comp.cpp",
          "checkOfferingAvailability",
          621);
        v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v18,
                (const char (*)[36])"findOfferingOpenStateConfig fails, ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = 0xFFFFFFFFLL;
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

// Line 640: range 0000000016CC8B16-0000000016CC9233
__int64 __fastcall PlayerOfferingComp::onInteract(
        PlayerOfferingComp *const this,
        uint32_t offering_id,
        proto::OfferingInteractRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  PlayerMpComp *MpComp; // rax
  char v10; // al
  PlayerSceneComp *SceneComp; // rax
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool isOfferingIdClosed; // r14
  PlayerBasicComp *BasicComp; // rcx
  PlayerActivityComp *ActivityComp; // rcx
  bool *p_is_need_notify_new_max; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  proto::PlayerOfferingData *v23; // rax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  const data::OfferingOpenStateConfig *open_state_config_ptr; // [rsp+30h] [rbp-B0h]
  OfferingInfo *offering_info; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-90h] BYREF
  char v30[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 offering_id:639";
  *(_QWORD *)(v3 + 16) = PlayerOfferingComp::onInteract;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = offering_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  open_state_config_ptr = data::OfferingExcelConfigMgrBase::findOfferingOpenStateConfig(
                            &v6->design_config.txt_config_mgr.offering_config_mgr,
                            *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( open_state_config_ptr )
  {
    if ( *(char *)(((unsigned __int64)&open_state_config_ptr->is_allow_host_in_mp_mode >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&open_state_config_ptr->is_allow_host_in_mp_mode);
    if ( open_state_config_ptr->is_allow_host_in_mp_mode )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    if ( PlayerMpComp::isInMpMode(MpComp) )
      v10 = 1;
    else
LABEL_13:
      v10 = 0;
    if ( v10 )
    {
      result = 1202LL;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&open_state_config_ptr->is_allow_host_in_mp_mode >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&open_state_config_ptr->is_allow_host_in_mp_mode);
      if ( !open_state_config_ptr->is_allow_host_in_mp_mode )
        goto LABEL_23;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
        v12 = 1;
      else
LABEL_23:
        v12 = 0;
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/offering/player_offering_comp.cpp",
          "onInteract",
          655);
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v29, (const char (*)[14])"offering id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                v14,
                (const char (*)[31])", only allow host, guest uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v29);
        result = 1202LL;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v28);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
        isOfferingIdClosed = FeatureSwitchMgr::isOfferingIdClosed(&v16->feature_switch_mgr, *(_DWORD *)(v3 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v28);
        if ( isOfferingIdClosed )
        {
          result = 142LL;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->open_state >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)open_state_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->open_state >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&open_state_config_ptr->open_state);
          }
          if ( !PlayerBasicComp::isStateOpen(BasicComp, open_state_config_ptr->open_state) )
          {
            result = 7081LL;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)open_state_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&open_state_config_ptr->activity_id);
            }
            if ( !open_state_config_ptr->activity_id )
              goto LABEL_45;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            ActivityComp = Player::getActivityComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)open_state_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->activity_id >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&open_state_config_ptr->activity_id);
            }
            if ( !PlayerActivityComp::isActivityOpen(ActivityComp, open_state_config_ptr->activity_id) )
            {
              result = 860LL;
            }
            else
            {
LABEL_45:
              offering_info = std::map<unsigned int,OfferingInfo>::operator[](
                                &this->offering_info_map_,
                                (const std::map<unsigned int,OfferingInfo>::key_type *)(v3 + 32));
              p_is_need_notify_new_max = &offering_info->is_need_notify_new_max;
              v21 = ((_BYTE)offering_info + 57) & 7;
              v22 = (*(_BYTE *)(((unsigned __int64)p_is_need_notify_new_max >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)p_is_need_notify_new_max >> 3) + 0x7FFF8000));
              if ( (_BYTE)v22 )
                __asan_report_store1(p_is_need_notify_new_max, v21, v22);
              offering_info->is_need_notify_new_max = 0;
              if ( *(char *)(((unsigned __int64)&offering_info->is_first_interact >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(&offering_info->is_first_interact, v21, &offering_info->is_first_interact);
              offering_info->is_first_interact = 1;
              v23 = proto::OfferingInteractRsp::mutable_offering_data(rsp_0);
              PlayerOfferingComp::fillClientInfo(this, *(_DWORD *)(v3 + 32), offering_info, v23);
              result = 0LL;
            }
          }
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "onInteract",
      644);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v29,
           (const char (*)[36])"findOfferingOpenStateConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 0xFFFFFFFFLL;
  }
  if ( v30 == (char *)v3 )
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

// Line 682: range 0000000016CC9234-0000000016CC96E9
__int64 __fastcall PlayerOfferingComp::getOfferingMaxLevelInCurrent(
        PlayerOfferingComp *const this,
        uint32_t offering_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  data::OfferingMaxLevelLimitType max_level_limit_type; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<MichiaeMatsuriActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t max_level; // [rsp+14h] [rbp-ACh]
  const data::OfferingOpenStateConfig *open_state_config_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 offering_id:681 64 16 32 michiae_matsuri_activity_ptr:701";
  *(_QWORD *)(v2 + 16) = PlayerOfferingComp::getOfferingMaxLevelInCurrent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = offering_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  open_state_config_ptr = data::OfferingExcelConfigMgrBase::findOfferingOpenStateConfig(
                            &v5->design_config.txt_config_mgr.offering_config_mgr,
                            *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( open_state_config_ptr )
  {
    max_level = 0;
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->max_level_limit_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->max_level_limit_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&open_state_config_ptr->max_level_limit_type);
    }
    max_level_limit_type = open_state_config_ptr->max_level_limit_type;
    if ( max_level_limit_type == OFFERING_MAX_LEVEL_LIMIT_NORMAL )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 64));
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      max_level = OfferingExcelConfigMgr::findOfferingMaxLevelInCurVersion(
                    &v9->design_config.txt_config_mgr.offering_config_mgr,
                    *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    }
    else if ( max_level_limit_type == OFFERING_MAX_LEVEL_LIMIT_MICHIAE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<MichiaeMatsuriActivity>((PlayerActivityComp *const)(v2 + 64));
      if ( std::operator==<MichiaeMatsuriActivity>(0LL, (const std::shared_ptr<MichiaeMatsuriActivity> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/offering/player_offering_comp.cpp",
          "getOfferingMaxLevelInCurrent",
          704);
        v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(&v15, (const char (*)[52])off_25F2C240);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v10, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
      else
      {
        v11 = std::__shared_ptr_access<MichiaeMatsuriActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MichiaeMatsuriActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        max_level = MichiaeMatsuriActivity::getCurOfferingMaxLevelLimit(v11);
      }
      std::shared_ptr<MichiaeMatsuriActivity>::~shared_ptr((std::shared_ptr<MichiaeMatsuriActivity> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/offering/player_offering_comp.cpp",
        "getOfferingMaxLevelInCurrent",
        712);
      v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v15,
              (const char (*)[50])"unknown max_level_limit_type of offering system: ");
      common::milog::MiLogStream::operator<<<data::OfferingMaxLevelLimitType,(data::OfferingMaxLevelLimitType*)0>(
        v12,
        &open_state_config_ptr->max_level_limit_type);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    result = max_level;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "getOfferingMaxLevelInCurrent",
      686);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v15,
           (const char (*)[36])"findOfferingOpenStateConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0LL;
  }
  if ( v16 == (char *)v2 )
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

// Line 719: range 0000000016CC96EA-0000000016CC99AB
__int64 __fastcall PlayerOfferingComp::isOfferingLevelExceedLimit(
        PlayerOfferingComp *const this,
        uint32_t offering_id,
        uint32_t level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // r12d
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int v10; // eax
  __int64 result; // rax
  const data::OfferingOpenStateConfig *open_state_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-80h] BYREF
  char v16[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 offering_id:718";
  *(_QWORD *)(v3 + 16) = PlayerOfferingComp::isOfferingLevelExceedLimit;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = offering_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  open_state_config_ptr = data::OfferingExcelConfigMgrBase::findOfferingOpenStateConfig(
                            &v7->design_config.txt_config_mgr.offering_config_mgr,
                            *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( open_state_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->max_level_limit_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->max_level_limit_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&open_state_config_ptr->max_level_limit_type);
    }
    if ( open_state_config_ptr->max_level_limit_type == OFFERING_MAX_LEVEL_LIMIT_NORMAL )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v14);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
      LOBYTE(v10) = OfferingExcelConfigMgr::isOfferingLevelExceedLimit(
                      &v9->design_config.txt_config_mgr.offering_config_mgr,
                      *(_DWORD *)(v3 + 32),
                      level);
      v5 = v10;
      std::shared_ptr<Config>::~shared_ptr(&v14);
    }
    else
    {
      LOBYTE(v5) = level > (unsigned int)PlayerOfferingComp::getOfferingMaxLevelInCurrent(this, *(_DWORD *)(v3 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/offering/player_offering_comp.cpp",
      "isOfferingLevelExceedLimit",
      723);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v15,
           (const char (*)[36])"findOfferingOpenStateConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = 0;
  }
  result = v5;
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

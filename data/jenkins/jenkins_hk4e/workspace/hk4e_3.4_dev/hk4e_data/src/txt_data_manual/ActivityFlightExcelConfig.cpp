// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityFlightExcelConfig.cpp

// Line 19: range 0000000012C27E86-0000000012C27E98
int32_t __cdecl ActivityFlightExcelConfigMgr::checkConfig(
        ActivityFlightExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 29: range 0000000012C27E9A-0000000012C285B3
int32_t __cdecl ActivityFlightExcelConfigMgr::rewriteConfig(
        ActivityFlightExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  unsigned int *v8; // rdx
  common::milog::MiLogStream *v9; // rdi
  int v10; // eax
  std::vector<data::FlightDailyInfo>::reference v12; // rax
  size_t v13; // rsi
  std::array<unsigned int,3>::reference v14; // rax
  uint32_t *v15; // rdx
  char v16; // cl
  size_t v17; // rsi
  uint32_t time_factor; // ecx
  char v19; // dl
  __int64 v20; // rsi
  uint32_t gold_factor; // ecx
  char v22; // dl
  int32_t result; // eax
  unsigned int medal_id; // [rsp+28h] [rbp-128h]
  uint32_t watcher_id; // [rsp+2Ch] [rbp-124h]
  size_t i; // [rsp+30h] [rbp-120h]
  size_t j; // [rsp+38h] [rbp-118h]
  data::FlightActivityExcelConfigMap *__for_range; // [rsp+40h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false>::reference v29; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,data::FlightActivityExcelConfig> >::type *activity_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FlightActivityExcelConfig> >::type *activity_config; // [rsp+58h] [rbp-F8h]
  std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> *daily_config_vec; // [rsp+60h] [rbp-F0h]
  data::FlightActivityMedalExcelConfig *medal_config_ptr; // [rsp+68h] [rbp-E8h]
  ActivityFlightExcelConfigMgr::FlightActivityDailyConfig *daily_config; // [rsp+70h] [rbp-E0h]
  const data::FlightDailyPointFactor *daily_factor; // [rsp+78h] [rbp-D8h]
  char v36[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:31 64 8 12 __for_end:31 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFlightExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->flight_activity_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::end(__for_range);
LABEL_9:
  if ( std::__detail::operator!=<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false> *)(v3 + 64)) )
  {
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false> *const)(v3 + 32));
    activity_id = std::get<0ul,unsigned int const,data::FlightActivityExcelConfig>(v29);
    activity_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FlightActivityExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FlightActivityExcelConfig>(v29);
    daily_config_vec = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::operator[](
                         &this->activity_id_to_daily_config_vec_map_,
                         activity_id);
    for ( i = 0LL; ; ++i )
    {
      if ( i >= std::vector<unsigned int>::size(&activity_config->medal_id) || i > 2 )
      {
        std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false> *const)(v3 + 32));
        goto LABEL_9;
      }
      v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 &activity_config->medal_id,
                                                                                                 i);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      medal_id = *v8;
      medal_config_ptr = data::ActivityFlightExcelConfigMgrBase::findFlightActivityMedalExcelConfig(this, *v8);
      if ( !medal_config_ptr )
        break;
      for ( j = 0LL;
            j < std::vector<data::FlightDailyInfo>::size(&medal_config_ptr->daily_info)
         && j < std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::size(daily_config_vec)
         && j < std::vector<data::FlightDailyPointFactor>::size(&activity_config->daily_factor_vec);
            ++j )
      {
        v12 = std::vector<data::FlightDailyInfo>::operator[](&medal_config_ptr->daily_info, j);
        if ( *(_BYTE *)(((unsigned __int64)&v12->watcher >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->watcher >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v12->watcher);
        }
        watcher_id = v12->watcher;
        daily_config = std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::operator[](
                         daily_config_vec,
                         j);
        if ( i < std::array<unsigned int,3ul>::size(&daily_config->watcher_vec_) )
        {
          v13 = i;
          v14 = std::array<unsigned int,3ul>::operator[](&daily_config->watcher_vec_, i);
          v15 = v14;
          v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
          if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
          {
            LOBYTE(v13) = v16 != 0;
            __asan_report_store4(v14, v13);
          }
          *v15 = watcher_id;
        }
        v17 = j;
        daily_factor = std::vector<data::FlightDailyPointFactor>::operator[](&activity_config->daily_factor_vec, j);
        if ( *(_BYTE *)(((unsigned __int64)&daily_factor->time_factor >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&daily_factor->time_factor >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&daily_factor->time_factor);
        }
        time_factor = daily_factor->time_factor;
        v19 = *(_BYTE *)(((unsigned __int64)&daily_config->time_factor >> 3) + 0x7FFF8000);
        if ( v19 != 0 && (char)((((_BYTE)daily_config + 16) & 7) + 3) >= v19 )
        {
          LOBYTE(v17) = v19 != 0;
          __asan_report_store4(&daily_config->time_factor, v17);
        }
        daily_config->time_factor = time_factor;
        v20 = (((_BYTE)daily_factor + 12) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&daily_factor->gold_factor >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)daily_factor + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_factor->gold_factor >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&daily_factor->gold_factor);
        }
        gold_factor = daily_factor->gold_factor;
        v22 = *(_BYTE *)(((unsigned __int64)&daily_config->gold_factor >> 3) + 0x7FFF8000);
        if ( v22 != 0 && (char)((((_BYTE)daily_config + 20) & 7) + 3) >= v22 )
        {
          LOBYTE(v20) = v22 != 0;
          __asan_report_store4(&daily_config->gold_factor, v20);
        }
        daily_config->gold_factor = gold_factor;
      }
    }
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityFlightExcelConfig.cpp",
      "rewriteConfig",
      40);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      v9 = (common::milog::MiLogStream *)activity_id;
      __asan_report_load4(activity_id);
    }
    common::milog::MiLogStream::operator()(
      v9,
      "medal_id[%u] @index[%lu] config not found for activity_id[%u]",
      medal_id,
      i,
      *activity_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v2 = -1;
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v36 == (char *)v3 )
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
  return result;
};

// Line 63: range 0000000012C285B4-0000000012C28DC8
int32_t __cdecl ActivityFlightExcelConfigMgr::finalConfig(
        ActivityFlightExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  std::array<unsigned int,3>::reference v7; // rax
  uint32_t *v8; // rdx
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rdi
  __int64 v11; // rsi
  __int64 p_param; // rsi
  uint32_t v13; // ecx
  char v14; // dl
  int v15; // eax
  int32_t result; // eax
  uint32_t watcher_id; // [rsp+1Ch] [rbp-174h]
  size_t i; // [rsp+20h] [rbp-170h]
  std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>> *__for_range; // [rsp+28h] [rbp-168h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false,false>::reference __in; // [rsp+30h] [rbp-160h]
  unsigned int *activity_id; // [rsp+38h] [rbp-158h]
  std::tuple_element<1,std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> > >::type *config_vec; // [rsp+40h] [rbp-150h]
  ActivityFlightExcelConfigMgr::FlightActivityDailyConfig *daily_config; // [rsp+48h] [rbp-148h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+50h] [rbp-140h]
  char v26[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:64 64 8 12 __for_end:64 96 12 8 param:82 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFlightExcelConfigMgr::finalConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219020288;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  __for_range = &this->activity_id_to_daily_config_vec_map_;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v3 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false,false> *const)(v3 + 32));
    activity_id = std::get<0ul,unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>(__in);
    config_vec = std::get<1ul,unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>(__in);
    for ( i = 0LL; i < std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::size(config_vec); ++i )
    {
      daily_config = std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::operator[](config_vec, i);
      if ( std::array<unsigned int,3ul>::empty(&daily_config->watcher_vec_) )
      {
        v6 = 0;
      }
      else
      {
        v7 = std::array<unsigned int,3ul>::operator[](&daily_config->watcher_vec_, 0LL);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        watcher_id = *v8;
        v9 = *v8;
        watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, v9);
        if ( watcher_config_ptr )
        {
          *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1024;
          if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 96, v9);
          *(_DWORD *)(v3 + 96) = 0;
          v11 = (((_BYTE)v3 + 100) & 7u) + 3;
          if ( *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) != 0
            && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v3 + 100, v11);
          }
          *(_DWORD *)(v3 + 100) = 1;
          if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 104, v11);
          *(_DWORD *)(v3 + 104) = 1;
          p_param = (__int64)&watcher_config_ptr->param;
          if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 107) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 107) & 7) >= *(_BYTE *)(((v3 + 107) >> 3) + 0x7FFF8000) )
          {
            p_param = 12LL;
            __asan_report_store_n(v3 + 96, 12LL);
          }
          *(GroupFlightChallengeReachPointsWatcherParam *)(v3 + 96) = std::any_cast<GroupFlightChallengeReachPointsWatcherParam>((const std::any *)p_param);
          v13 = *(_DWORD *)(v3 + 96);
          v14 = *(_BYTE *)(((unsigned __int64)&daily_config->group_id >> 3) + 0x7FFF8000);
          if ( v14 != 0 && (char)((((_BYTE)daily_config + 12) & 7) + 3) >= v14 )
          {
            LOBYTE(p_param) = v14 != 0;
            __asan_report_store4(&daily_config->group_id, p_param);
          }
          daily_config->group_id = v13;
          v6 = 2;
        }
        else
        {
          *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 128, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 128),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityFlightExcelConfig.cpp",
            "finalConfig",
            78);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 128),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            v10 = (common::milog::MiLogStream *)activity_id;
            __asan_report_load4(activity_id);
          }
          common::milog::MiLogStream::operator()(
            v10,
            "watcher[%u] config nullptr @day[%lu] of activity[%u]",
            watcher_id,
            i,
            *activity_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
          *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v6 = 1;
        }
      }
      *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
      if ( v6 && v6 != 2 )
      {
        v15 = 0;
        goto LABEL_39;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false,false> *const)(v3 + 32));
  }
  v15 = 1;
LABEL_39:
  if ( v15 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
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

// Line 100: range 0000000012C28DCA-0000000012C29156
std::optional<std::vector<unsigned int> > *__fastcall ActivityFlightExcelConfigMgr::findDailyWatcherVec(
        std::optional<std::vector<unsigned int> > *retstr,
        const ActivityFlightExcelConfigMgr *const this,
        uint32_t activity_id,
        uint32_t day_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>> *p_activity_id_to_daily_config_vec_map; // rdx
  std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>> *v8; // rdx
  bool v9; // al
  unsigned __int64 v10; // rax
  const unsigned int *v11; // r14
  const unsigned int *v12; // r15
  std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> *daily_config_vec; // [rsp+20h] [rbp-100h]
  std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>::const_reference watcher_vec; // [rsp+28h] [rbp-F8h]
  char v18[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 9 <unknown> 48 4 14 activity_id:99 64 8 8 iter:101 96 8 9 <unknown> 128 24 14 result_vec:114";
  *(_QWORD *)(v4 + 16) = ActivityFlightExcelConfigMgr::findDailyWatcherVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = activity_id;
  p_activity_id_to_daily_config_vec_map = &this->activity_id_to_daily_config_vec_map_;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, this);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::find(p_activity_id_to_daily_config_vec_map, (const std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::key_type *)(v4 + 48));
  v8 = &this->activity_id_to_daily_config_vec_map_;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9
    || (daily_config_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false,false> *const)(v4 + 64))->second,
        day_id >= std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::size(daily_config_vec)) )
  {
    std::optional<std::vector<unsigned int>>::optional(retstr, (std::nullopt_t)(v4 + 96));
  }
  else
  {
    watcher_vec = std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::operator[](
                    daily_config_vec,
                    day_id);
    v10 = ((v4 + 128) >> 3) + 2147450880;
    *(_WORD *)v10 = 0;
    *(_BYTE *)(v10 + 2) = 0;
    v11 = std::array<unsigned int,3ul>::begin(&watcher_vec->watcher_vec_);
    v12 = std::array<unsigned int,3ul>::end(&watcher_vec->watcher_vec_);
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v4 + 32));
    std::vector<unsigned int>::vector<unsigned int const*,void>(
      (std::vector<unsigned int> *const)(v4 + 128),
      v11,
      v12,
      (const std::vector<unsigned int>::allocator_type *)(v4 + 32));
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v4 + 32));
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
    std::optional<std::vector<unsigned int>>::optional<std::vector<unsigned int>,true>(
      retstr,
      (std::vector<unsigned int> *)(v4 + 128));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
  }
  if ( v18 == (char *)v4 )
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
  return retstr;
};

// Line 119: range 0000000012C29158-0000000012C2953F
std::optional<unsigned int> __fastcall ActivityFlightExcelConfigMgr::queryDayIdByGroupId(
        const ActivityFlightExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t group_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>> *p_activity_id_to_daily_config_vec_map; // rdx
  std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>> *v7; // rdx
  std::nullopt_t v8; // si
  bool v9; // al
  uint32_t *p_group_id; // rax
  size_t i; // [rsp+10h] [rbp-120h]
  std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> *daily_config_vec; // [rsp+18h] [rbp-118h]
  const ActivityFlightExcelConfigMgr::FlightActivityDailyConfig *daily_config; // [rsp+20h] [rbp-110h]
  std::optional<unsigned int> v15; // [rsp+28h] [rbp-108h]
  char v16[256]; // [rsp+30h] [rbp-100h] BYREF
  std::optional<unsigned int> result; // 0:rax.5

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 15 activity_id:118 48 4 12 group_id:118 64 8 8 iter:120 96 8 9 <unknown> 128 8 9 <unknown"
                        "> 160 8 9 <unknown> 192 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFlightExcelConfigMgr::queryDayIdByGroupId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = group_id;
  p_activity_id_to_daily_config_vec_map = &this->activity_id_to_daily_config_vec_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::find(p_activity_id_to_daily_config_vec_map, (const std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::key_type *)(v3 + 32));
  v7 = &this->activity_id_to_daily_config_vec_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::end(v7);
  v8.gap0[0] = v3 + 96;
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    std::optional<unsigned int>::optional((std::optional<unsigned int> *const)(v3 + 128), v8);
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 128);
    v15 = *(std::optional<unsigned int> *)(v3 + 128);
  }
  else
  {
    daily_config_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false,false> *const)(v3 + 64))->second;
    for ( i = 0LL; i < std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::size(daily_config_vec); ++i )
    {
      daily_config = std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::operator[](
                       daily_config_vec,
                       i);
      p_group_id = &daily_config->group_id;
      v8.gap0[0] = (((_BYTE)daily_config + 12) & 7) + 3;
      if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_group_id);
      }
      if ( daily_config->group_id == *(_DWORD *)(v3 + 48) )
      {
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        std::optional<unsigned int>::optional<unsigned int &,true>(
          (std::optional<unsigned int> *const)(v3 + 160),
          (unsigned int *)(v3 + 48));
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 160);
        v15 = *(std::optional<unsigned int> *)(v3 + 160);
        goto LABEL_24;
      }
    }
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    std::optional<unsigned int>::optional((std::optional<unsigned int> *const)(v3 + 192), v8);
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 192);
    v15 = *(std::optional<unsigned int> *)(v3 + 192);
  }
LABEL_24:
  result = v15;
  if ( v16 == (char *)v3 )
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

// Line 139: range 0000000012C29540-0000000012C298F0
__int64 __fastcall ActivityFlightExcelConfigMgr::queryDailyPointFactorByGroupId(
        const ActivityFlightExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t group_id,
        unsigned __int64 time_factor,
        unsigned __int64 gold_factor)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>> *p_activity_id_to_daily_config_vec_map; // rdx
  std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>> *v9; // rdx
  bool v10; // al
  __int64 result; // rax
  uint32_t *p_group_id; // rax
  __int64 v13; // rsi
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rsi
  uint32_t v17; // ecx
  char v18; // dl
  size_t i; // [rsp+28h] [rbp-B8h]
  std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> *daily_config_vec; // [rsp+30h] [rbp-B0h]
  const ActivityFlightExcelConfigMgr::FlightActivityDailyConfig *daily_config; // [rsp+38h] [rbp-A8h]
  char v25[160]; // [rsp+40h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 15 activity_id:138 64 8 8 iter:140 96 8 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityFlightExcelConfigMgr::queryDailyPointFactorByGroupId;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  *(_DWORD *)(v5 + 48) = activity_id;
  p_activity_id_to_daily_config_vec_map = &this->activity_id_to_daily_config_vec_map_;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, activity_id);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::find(p_activity_id_to_daily_config_vec_map, (const std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::key_type *)(v5 + 48));
  v9 = &this->activity_id_to_daily_config_vec_map_;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, v5 + 48);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::end(v9);
  v10 = std::__detail::operator==<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v5 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v5 + 96));
  *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    result = 0LL;
  }
  else
  {
    daily_config_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false,false> *const)(v5 + 64))->second;
    for ( i = 0LL; ; ++i )
    {
      if ( i >= std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::size(daily_config_vec) )
      {
        result = 0LL;
        goto LABEL_26;
      }
      daily_config = std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::operator[](
                       daily_config_vec,
                       i);
      p_group_id = &daily_config->group_id;
      if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_group_id);
      }
      if ( group_id == daily_config->group_id )
        break;
    }
    v13 = (((_BYTE)daily_config + 16) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&daily_config->time_factor >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)daily_config + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_config->time_factor >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&daily_config->time_factor);
    }
    v14 = daily_config->time_factor;
    v15 = *(_BYTE *)((time_factor >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)((time_factor & 7) + 3) >= v15 )
    {
      LOBYTE(v13) = v15 != 0;
      __asan_report_store4(time_factor, v13);
    }
    *(_DWORD *)time_factor = v14;
    v16 = (((_BYTE)daily_config + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&daily_config->gold_factor >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)daily_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_config->gold_factor >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&daily_config->gold_factor);
    }
    v17 = daily_config->gold_factor;
    v18 = *(_BYTE *)((gold_factor >> 3) + 0x7FFF8000);
    if ( v18 != 0 && (char)((gold_factor & 7) + 3) >= v18 )
    {
      LOBYTE(v16) = v18 != 0;
      __asan_report_store4(gold_factor, v16);
    }
    *(_DWORD *)gold_factor = v17;
    result = 1LL;
  }
LABEL_26:
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 162: range 0000000012C298F2-0000000012C29C5B
std::optional<unsigned int> __fastcall ActivityFlightExcelConfigMgr::queryGroupIdByDayId(
        const ActivityFlightExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t day_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>> *p_activity_id_to_daily_config_vec_map; // rdx
  std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>> *v7; // rdx
  std::nullopt_t v8; // si
  bool v9; // al
  std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>::const_reference v10; // rax
  std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> *daily_config_vec; // [rsp+10h] [rbp-120h]
  std::optional<unsigned int> v13; // [rsp+18h] [rbp-118h]
  char v14[272]; // [rsp+20h] [rbp-110h] BYREF
  std::optional<unsigned int> result; // 0:rax.5

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 15 activity_id:161 64 8 8 iter:163 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown> 1"
                        "92 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFlightExcelConfigMgr::queryGroupIdByDayId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -202116352;
  *(_DWORD *)(v3 + 48) = activity_id;
  p_activity_id_to_daily_config_vec_map = &this->activity_id_to_daily_config_vec_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::find(p_activity_id_to_daily_config_vec_map, (const std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::key_type *)(v3 + 48));
  v7 = &this->activity_id_to_daily_config_vec_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>::end(v7);
  v8.gap0[0] = v3 + 96;
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    std::optional<unsigned int>::optional((std::optional<unsigned int> *const)(v3 + 128), v8);
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 128);
    v13 = *(std::optional<unsigned int> *)(v3 + 128);
  }
  else
  {
    daily_config_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7> >,false,false> *const)(v3 + 64))->second;
    if ( day_id < std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::size(daily_config_vec) )
    {
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      v10 = std::array<ActivityFlightExcelConfigMgr::FlightActivityDailyConfig,7ul>::operator[](
              daily_config_vec,
              day_id);
      std::optional<unsigned int>::optional<unsigned int const&,true>(
        (std::optional<unsigned int> *const)(v3 + 192),
        &v10->group_id);
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 192);
      v13 = *(std::optional<unsigned int> *)(v3 + 192);
    }
    else
    {
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      std::optional<unsigned int>::optional((std::optional<unsigned int> *const)(v3 + 160), v8);
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 160);
      v13 = *(std::optional<unsigned int> *)(v3 + 160);
    }
  }
  result = v13;
  if ( v14 == (char *)v3 )
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
